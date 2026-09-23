// Decompiles all functions and finds references to interesting strings.
//@category Analysis
import java.io.FileWriter;
import java.io.PrintWriter;

import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;
import ghidra.program.model.symbol.Reference;

public class DecompileAll extends GhidraScript {

    static final String OUTDIR = "/home/sam/Documents/projects/code/icube-fw/decomp";
    static final String VER = System.getenv().getOrDefault("FWVER", "mv");

    @Override
    public void run() throws Exception {
        java.io.File dir = new java.io.File(OUTDIR);
        dir.mkdirs();

        var af = currentProgram.getAddressFactory().getDefaultAddressSpace();
        var fm = currentProgram.getFunctionManager();
        var refMgr = currentProgram.getReferenceManager();

        // interesting DROM strings (offset from DROM base, description)
        Object[][] strings;
        if (VER.equals("stm")) {
            strings = new Object[][] {};
        } else if (VER.equals("qv")) {
            strings = new Object[][] {
                { 0x47b5L, "Sculpfun iCube (BT name)" },
                { 0x498eL, "sculpfun888 (STA password)" },
                { 0x4975L, "Sculpfun333 (STA SSID)" },
            };
        } else {
            strings = new Object[][] {
                { 0x5368L, "Sculpfun iCube (BT name)" },
                { 0x5529L, "sculpfun888 (STA password)" },
                { 0x554cL, "Sculpfun333 (STA SSID)" },
            };
        }
        long dromBase = 0x3F400020L;

        try (PrintWriter rf = new PrintWriter(new FileWriter(OUTDIR + "/string_refs_" + VER + ".txt"))) {
            DecompInterface di0 = new DecompInterface();
            di0.openProgram(currentProgram);
            for (Object[] s : strings) {
                long off = (Long) s[0];
                String desc = (String) s[1];
                Address a = af.getAddress(dromBase + off);
                rf.println(desc + " @ 0x" + Long.toHexString(a.getOffset()));
                java.util.TreeSet<String> eps = new java.util.TreeSet<>();
                for (Reference r : refMgr.getReferencesTo(a)) {
                    Function fn = fm.getFunctionContaining(r.getFromAddress());
                    rf.println("   from 0x" + Long.toHexString(r.getFromAddress().getOffset()) + " in " +
                        (fn != null ? fn.getName() : "?"));
                    if (fn != null) {
                        eps.add(fn.getEntryPoint().toString());
                    }
                }
                println("refs for " + desc + ": " + eps.size());
                if (!eps.isEmpty()) {
                    try (PrintWriter f = new PrintWriter(new FileWriter(OUTDIR + "/refs_" + VER + "_" + Long.toHexString(off) + ".c"))) {
                        for (String ep : eps) {
                            Function fn = fm.getFunctionAt(af.getAddress(ep));
                            DecompileResults res = di0.decompileFunction(fn, 60, monitor);
                            if (res.decompileCompleted()) {
                                f.println("// ==== " + fn.getName() + " @ " + ep + " ====");
                                f.println(res.getDecompiledFunction().getC());
                                f.println();
                            } else {
                                f.println("// FAILED " + fn.getName() + " @ " + ep);
                            }
                        }
                    }
                }
            }
        }

        // decompile everything
        DecompInterface di = new DecompInterface();
        di.openProgram(currentProgram);
        long count = 0;
        long ok = 0;
        try (PrintWriter out = new PrintWriter(new FileWriter(OUTDIR + "/all_" + VER + ".c"))) {
            for (Function fn : fm.getFunctions(true)) {
                DecompileResults res = di.decompileFunction(fn, 30, monitor);
                if (res.decompileCompleted()) {
                    out.println("// ==== " + fn.getName() + " @ " + fn.getEntryPoint() + " ====");
                    out.println(res.getDecompiledFunction().getC());
                    out.println();
                    ok++;
                }
                count++;
                if (count % 500 == 0) {
                    println("decompiled " + count + "...");
                }
            }
        }
        println("decompiled " + ok + "/" + count + " -> " + OUTDIR + "/all_" + VER + ".c");
    }
}
