// ==== FUN_08000194 @ 08000194 ====

undefined2 FUN_08000194(undefined2 *param_1)

{
  return *param_1;
}



// ==== FUN_0800019e @ 0800019e ====

undefined4 FUN_0800019e(undefined4 *param_1)

{
  return *param_1;
}



// ==== FUN_080001b4 @ 080001b4 ====

void FUN_080001b4(undefined1 *param_1,undefined4 param_2)

{
  *param_1 = (char)param_2;
  param_1[1] = (char)((uint)param_2 >> 8);
  return;
}



// ==== FUN_080001bc @ 080001bc ====

void FUN_080001bc(undefined1 *param_1,undefined4 param_2)

{
  *param_1 = (char)param_2;
  param_1[1] = (char)((uint)param_2 >> 8);
  param_1[2] = (char)((uint)param_2 >> 0x10);
  param_1[3] = (char)((uint)param_2 >> 0x18);
  return;
}



// ==== FUN_080001cc @ 080001cc ====

undefined4 FUN_080001cc(int param_1)

{
  if (param_1 != 0) {
    return 0;
  }
  return 0;
}



// ==== FUN_080001d8 @ 080001d8 ====

undefined4 FUN_080001d8(int param_1)

{
  if (param_1 != 0) {
    return 0;
  }
  return 0;
}



// ==== FUN_080001e4 @ 080001e4 ====

undefined8
FUN_080001e4(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  byte *pbVar3;
  byte *pbVar4;
  uint uVar5;
  
  pbVar3 = (byte *)*param_1;
  uVar2 = (uint)*pbVar3;
  iVar1 = FUN_080001cc(uVar2);
  pbVar4 = pbVar3 + 1;
  if (iVar1 != 0) {
    pbVar4 = pbVar3 + 2;
    uVar5 = (uint)pbVar3[1];
    iVar1 = FUN_080001d8(uVar5);
    if (iVar1 == 0) goto LAB_08000224;
    uVar2 = uVar5 + uVar2 * 0x100;
  }
  iVar1 = 0;
  if ((uVar2 == 0) || (iVar1 = FUN_08001dba(uVar2,0x1b5), iVar1 != 0)) {
    *param_1 = pbVar4;
    return CONCAT44(param_4,iVar1);
  }
LAB_08000224:
  return CONCAT44(param_4,0xffffffff);
}



// ==== FUN_08000230 @ 08000230 ====

undefined4 FUN_08000230(int *param_1,int param_2)

{
  bool bVar1;
  undefined4 uVar2;
  uint uVar3;
  int *piVar4;
  
  bVar1 = false;
  for (uVar3 = 0; uVar3 < 3; uVar3 = uVar3 + 1) {
    piVar4 = (int *)(DAT_0800049c + uVar3 * 0x10);
    if (*piVar4 == 0) {
      bVar1 = true;
    }
    else if (((*piVar4 == *param_1) && (piVar4[1] == param_1[2])) && (piVar4[2] == param_1[5]))
    break;
  }
  if (uVar3 == 3) {
    if ((bVar1) || (param_2 == 2)) {
      uVar2 = 0;
    }
    else {
      uVar2 = 0x12;
    }
  }
  else if ((param_2 == 0) && (*(short *)(DAT_0800049c + uVar3 * 0x10 + 0xc) != 0x100)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0x10;
  }
  return uVar2;
}



// ==== FUN_08000294 @ 08000294 ====

undefined4 FUN_08000294(void)

{
  uint uVar1;
  
  for (uVar1 = 0; (uVar1 < 3 && (*(int *)(DAT_0800049c + uVar1 * 0x10) != 0)); uVar1 = uVar1 + 1) {
  }
  if (uVar1 == 3) {
    return 0;
  }
  return 1;
}



// ==== FUN_080002b4 @ 080002b4 ====

int FUN_080002b4(int *param_1,int param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  
  iVar3 = DAT_0800049c;
  for (uVar4 = 0;
      (uVar4 < 3 &&
      (((iVar2 = uVar4 * 0x10, *(int *)(DAT_0800049c + iVar2) != *param_1 ||
        (*(int *)(DAT_0800049c + 4 + iVar2) != param_1[2])) ||
       (*(int *)(DAT_0800049c + 8 + iVar2) != param_1[5])))); uVar4 = uVar4 + 1) {
  }
  if (uVar4 == 3) {
    for (uVar4 = 0; (uVar4 < 3 && (*(int *)(DAT_0800049c + uVar4 * 0x10) != 0)); uVar4 = uVar4 + 1)
    {
    }
    if (uVar4 == 3) {
      return 0;
    }
    piVar5 = (int *)(DAT_0800049c + uVar4 * 0x10);
    *piVar5 = *param_1;
    piVar5[1] = param_1[2];
    *(int *)(iVar3 + 8 + uVar4 * 0x10) = param_1[5];
    *(undefined2 *)(piVar5 + 3) = 0;
  }
  iVar3 = iVar3 + uVar4 * 0x10;
  if ((0 < param_2) && (*(short *)(iVar3 + 0xc) != 0)) {
    return 0;
  }
  if (param_2 == 0) {
    sVar1 = *(short *)(iVar3 + 0xc) + 1;
  }
  else {
    sVar1 = 0x100;
  }
  *(short *)(iVar3 + 0xc) = sVar1;
  return uVar4 + 1;
}



// ==== FUN_08000340 @ 08000340 ====

undefined4 FUN_08000340(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  short sVar5;
  
  iVar1 = DAT_0800049c;
  if (param_1 - 1U < 3) {
    iVar2 = (param_1 - 1U) * 0x10;
    iVar4 = DAT_0800049c + iVar2;
    sVar5 = *(short *)(iVar4 + 0xc);
    if (sVar5 == 0x100) {
      sVar5 = 0;
    }
    if (sVar5 != 0) {
      sVar5 = sVar5 + -1;
    }
    *(short *)(iVar4 + 0xc) = sVar5;
    if (sVar5 == 0) {
      *(undefined4 *)(iVar1 + iVar2) = 0;
    }
    uVar3 = 0;
  }
  else {
    uVar3 = 2;
  }
  return uVar3;
}



// ==== FUN_08000376 @ 08000376 ====

void FUN_08000376(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = DAT_0800049c;
  for (uVar2 = 0; uVar2 < 3; uVar2 = uVar2 + 1) {
    if (*(int *)(iVar1 + uVar2 * 0x10) == param_1) {
      *(undefined4 *)(iVar1 + uVar2 * 0x10) = 0;
    }
  }
  return;
}



// ==== FUN_08000394 @ 08000394 ====

undefined8 FUN_08000394(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if (*(char *)(param_1 + 3) != '\0') {
    iVar1 = FUN_08001ed4(*(undefined1 *)(param_1 + 1),param_1 + 0x34,*(undefined4 *)(param_1 + 0x30)
                         ,1);
    if (iVar1 == 0) {
      *(undefined1 *)(param_1 + 3) = 0;
      if (((uint)(*(int *)(param_1 + 0x30) - *(int *)(param_1 + 0x24)) < *(uint *)(param_1 + 0x1c))
         && (*(char *)(param_1 + 2) == '\x02')) {
        FUN_08001ed4(*(undefined1 *)(param_1 + 1),param_1 + 0x34,
                     *(uint *)(param_1 + 0x1c) + *(int *)(param_1 + 0x30),1);
      }
    }
    else {
      uVar2 = 1;
    }
  }
  return CONCAT44(param_4,uVar2);
}



// ==== FUN_080003de @ 080003de ====

int FUN_080003de(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if ((param_2 != *(int *)(param_1 + 0x30)) && (iVar2 = FUN_08000394(param_1), iVar2 == 0)) {
    iVar1 = FUN_08001e9a(*(undefined1 *)(param_1 + 1),param_1 + 0x34,param_2,1);
    if (iVar1 != 0) {
      param_2 = -1;
      iVar2 = 1;
    }
    *(int *)(param_1 + 0x30) = param_2;
  }
  return iVar2;
}



// ==== FUN_08000414 @ 08000414 ====

undefined8 FUN_08000414(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_08000394();
  if (iVar1 == 0) {
    if ((*param_1 == '\x03') && (param_1[4] == '\x01')) {
      FUN_08001f54(param_1 + 0x34,0x200,0);
      FUN_080001b4(param_1 + 0x232,0xaa55);
      FUN_080001bc(param_1 + 0x34,DAT_080004a0);
      FUN_080001bc(param_1 + 0x218,DAT_080004a4);
      FUN_080001bc(param_1 + 0x21c,*(undefined4 *)(param_1 + 0x14));
      FUN_080001bc(param_1 + 0x220,*(undefined4 *)(param_1 + 0x10));
      *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x20) + 1;
      FUN_08001ed4(param_1[1],param_1 + 0x34,*(int *)(param_1 + 0x20) + 1,1);
      param_1[4] = '\0';
    }
    iVar2 = FUN_08001f10(param_1[1],0);
    if (iVar2 != 0) {
      iVar1 = 1;
    }
  }
  return CONCAT44(param_4,iVar1);
}



// ==== FUN_080004a8 @ 080004a8 ====

int FUN_080004a8(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0x18) - 2U <= param_2 - 2U) {
    return 0;
  }
  return (param_2 - 2U) * (uint)*(ushort *)(param_1 + 10) + *(int *)(param_1 + 0x2c);
}



// ==== FUN_080004c2 @ 080004c2 ====

uint FUN_080004c2(undefined4 *param_1,uint param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  byte *pbVar4;
  
  pbVar4 = (byte *)*param_1;
  if ((1 < param_2) && (param_2 < *(uint *)(pbVar4 + 0x18))) {
    bVar1 = *pbVar4;
    if (bVar1 == 1) {
      uVar3 = param_2 + (param_2 >> 1);
      iVar2 = FUN_080003de(pbVar4,*(int *)(pbVar4 + 0x24) + (uVar3 >> 9));
      if (iVar2 != 0) {
        return 0xffffffff;
      }
      bVar1 = pbVar4[(uVar3 & 0x1ff) + 0x34];
      iVar2 = FUN_080003de(pbVar4,*(int *)(pbVar4 + 0x24) + (uVar3 + 1 >> 9));
      if (iVar2 != 0) {
        return 0xffffffff;
      }
      if ((int)(param_2 << 0x1f) < 0) {
        return (uint)(ushort)(CONCAT11(pbVar4[(uVar3 + 1 & 0x1ff) + 0x34],bVar1) >> 4);
      }
      return CONCAT11(pbVar4[(uVar3 + 1 & 0x1ff) + 0x34],bVar1) & 0xfff;
    }
    if (bVar1 != 0) {
      if (bVar1 == 3) {
        iVar2 = FUN_080003de(pbVar4,*(int *)(pbVar4 + 0x24) + (param_2 >> 7));
        if (iVar2 != 0) {
          return 0xffffffff;
        }
        uVar3 = FUN_0800019e(pbVar4 + (param_2 & 0x7f) * 4 + 0x34);
        return uVar3 & 0xfffffff;
      }
      if (bVar1 < 3) {
        iVar2 = FUN_080003de(pbVar4,*(int *)(pbVar4 + 0x24) + (param_2 >> 8));
        if (iVar2 != 0) {
          return 0xffffffff;
        }
        uVar3 = FUN_08000194(pbVar4 + (param_2 & 0xff) * 2 + 0x34);
        return uVar3;
      }
    }
  }
  return 1;
}



// ==== FUN_0800058c @ 0800058c ====

int FUN_0800058c(byte *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  
  iVar3 = 2;
  if ((1 < param_2) && (param_2 < *(uint *)(param_1 + 0x18))) {
    bVar2 = *param_1;
    if (bVar2 == 1) {
      uVar1 = param_2 + (param_2 >> 1);
      iVar3 = FUN_080003de(param_1,*(int *)(param_1 + 0x24) + (uVar1 >> 9));
      if (iVar3 == 0) {
        if ((int)(param_2 << 0x1f) < 0) {
          bVar2 = param_1[(uVar1 & 0x1ff) + 0x34] & 0xf | (byte)(param_3 << 4);
        }
        else {
          bVar2 = (byte)param_3;
        }
        param_1[(uVar1 & 0x1ff) + 0x34] = bVar2;
        param_1[3] = 1;
        iVar3 = FUN_080003de(param_1,*(int *)(param_1 + 0x24) + (uVar1 + 1 >> 9));
        if (iVar3 == 0) {
          if ((int)(param_2 << 0x1f) < 0) {
            bVar2 = (byte)(param_3 >> 4);
          }
          else {
            bVar2 = (byte)(param_3 >> 8) & 0xf | param_1[(uVar1 + 1 & 0x1ff) + 0x34] & 0xf0;
          }
          param_1[(uVar1 + 1 & 0x1ff) + 0x34] = bVar2;
          param_1[3] = 1;
        }
      }
    }
    else if (bVar2 != 0) {
      if (bVar2 == 3) {
        iVar3 = FUN_080003de(param_1,*(int *)(param_1 + 0x24) + (param_2 >> 7));
        if (iVar3 == 0) {
          uVar1 = FUN_0800019e(param_1 + (param_2 & 0x7f) * 4 + 0x34);
          FUN_080001bc(param_1 + (param_2 & 0x7f) * 4 + 0x34,
                       param_3 & 0xfffffff | uVar1 & 0xf0000000);
          param_1[3] = 1;
        }
      }
      else if ((bVar2 < 3) &&
              (iVar3 = FUN_080003de(param_1,*(int *)(param_1 + 0x24) + (param_2 >> 8)), iVar3 == 0))
      {
        FUN_080001b4(param_1 + (param_2 & 0xff) * 2 + 0x34,param_3 & 0xffff);
        param_1[3] = 1;
      }
    }
  }
  return iVar3;
}



// ==== FUN_08000688 @ 08000688 ====

undefined8 FUN_08000688(int *param_1,uint param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *param_1;
  if ((param_2 < 2) || (*(uint *)(iVar3 + 0x18) <= param_2)) {
LAB_080006f2:
    return CONCAT44(param_4,2);
  }
  if ((param_3 == 0) || (iVar1 = FUN_0800058c(iVar3,param_3,0xffffffff), iVar1 == 0)) {
    do {
      uVar2 = FUN_080004c2(param_1,param_2);
      if (uVar2 == 0) break;
      if (uVar2 == 1) goto LAB_080006f2;
      if (uVar2 == 0xffffffff) {
        return CONCAT44(param_4,1);
      }
      iVar1 = FUN_0800058c(iVar3,param_2,0);
      if (iVar1 != 0) goto LAB_080006fc;
      if (*(uint *)(iVar3 + 0x14) < *(int *)(iVar3 + 0x18) - 2U) {
        *(uint *)(iVar3 + 0x14) = *(uint *)(iVar3 + 0x14) + 1;
        *(byte *)(iVar3 + 4) = *(byte *)(iVar3 + 4) | 1;
      }
      param_2 = uVar2;
    } while (uVar2 < *(uint *)(iVar3 + 0x18));
    iVar1 = 0;
  }
LAB_080006fc:
  return CONCAT44(param_4,iVar1);
}



// ==== FUN_080006fe @ 080006fe ====

uint FUN_080006fe(int *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = *param_1;
  if (param_2 == 0) {
    uVar4 = *(uint *)(iVar5 + 0x10);
    if ((uVar4 == 0) || (*(uint *)(iVar5 + 0x18) <= uVar4)) {
      uVar4 = 1;
    }
  }
  else {
    uVar2 = FUN_080004c2();
    if (uVar2 < 2) {
      return 1;
    }
    if (uVar2 == 0xffffffff) {
      return 0xffffffff;
    }
    uVar4 = param_2;
    if (uVar2 < *(uint *)(iVar5 + 0x18)) {
      return uVar2;
    }
  }
  if (*(int *)(iVar5 + 0x14) != 0) {
    uVar2 = 0;
    if (uVar4 == param_2) {
      uVar2 = uVar4 + 1;
      if (*(uint *)(iVar5 + 0x18) <= uVar2) {
        uVar2 = 2;
      }
      iVar1 = FUN_080004c2(param_1,uVar2);
      if (iVar1 == 1) {
        return 1;
      }
      if (iVar1 == -1) {
        return 0xffffffff;
      }
      if (iVar1 != 0) {
        uVar2 = *(uint *)(iVar5 + 0x10);
        if ((1 < uVar2) && (uVar2 < *(uint *)(iVar5 + 0x18))) {
          uVar4 = uVar2;
        }
        uVar2 = 0;
      }
    }
    uVar3 = uVar4;
    if (uVar2 != 0) {
LAB_080007a4:
      iVar1 = FUN_0800058c(iVar5,uVar2,0xffffffff);
      if ((iVar1 == 0) && (param_2 != 0)) {
        iVar1 = FUN_0800058c(iVar5,param_2,uVar2);
      }
      if (iVar1 != 0) {
        if (iVar1 != 1) {
          return 1;
        }
        return 0xffffffff;
      }
      *(uint *)(iVar5 + 0x10) = uVar2;
      if (*(uint *)(iVar5 + 0x14) <= *(int *)(iVar5 + 0x18) - 2U) {
        *(uint *)(iVar5 + 0x14) = *(uint *)(iVar5 + 0x14) - 1;
      }
      *(byte *)(iVar5 + 4) = *(byte *)(iVar5 + 4) | 1;
      return uVar2;
    }
    do {
      uVar2 = uVar3 + 1;
      if ((*(uint *)(iVar5 + 0x18) <= uVar2) && (uVar2 = 2, uVar4 < 2)) {
        return 0;
      }
      iVar1 = FUN_080004c2(param_1,uVar2);
      if (iVar1 == 0) goto LAB_080007a4;
      if (iVar1 == 1) {
        return 1;
      }
      if (iVar1 == -1) {
        return 0xffffffff;
      }
      uVar3 = uVar2;
    } while (uVar2 != uVar4);
  }
  return 0;
}



// ==== FUN_080007f2 @ 080007f2 ====

int FUN_080007f2(int *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  
  puVar3 = (uint *)(param_1[0xb] + 4);
  uVar1 = (param_2 >> 9) / (uint)*(ushort *)(*param_1 + 10);
  while( true ) {
    uVar2 = *puVar3;
    if (uVar2 == 0) {
      return 0;
    }
    if (uVar1 < uVar2) break;
    uVar1 = uVar1 - uVar2;
    puVar3 = puVar3 + 2;
  }
  return puVar3[1] + uVar1;
}



// ==== FUN_0800081a @ 0800081a ====

undefined4 FUN_0800081a(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = FUN_08000394();
  if (iVar1 != 0) {
    return 1;
  }
  iVar1 = FUN_080004a8(param_1,param_2);
  *(int *)(param_1 + 0x30) = iVar1;
  FUN_08001f54(param_1 + 0x34,0x200,0);
  uVar3 = 0;
  while ((uVar3 < *(ushort *)(param_1 + 10) &&
         (iVar2 = FUN_08001ed4(*(undefined1 *)(param_1 + 1),param_1 + 0x34,uVar3 + iVar1,1),
         iVar2 == 0))) {
    uVar3 = uVar3 + 1;
  }
  if (uVar3 == *(ushort *)(param_1 + 10)) {
    return 0;
  }
  return 1;
}



// ==== FUN_08000872 @ 08000872 ====

undefined4 FUN_08000872(undefined4 *param_1,uint param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  uint uVar3;
  byte *pbVar4;
  
  pbVar4 = (byte *)*param_1;
  if ((param_2 < 0x200000) && ((param_2 & 0x1f) == 0)) {
    param_1[5] = param_2;
    uVar3 = param_1[2];
    if ((uVar3 == 0) && (2 < *pbVar4)) {
      uVar3 = *(uint *)(pbVar4 + 0x28);
    }
    if (uVar3 == 0) {
      if ((uint)*(ushort *)(pbVar4 + 8) <= param_2 >> 5) {
        return 2;
      }
      param_1[7] = *(undefined4 *)(pbVar4 + 0x28);
    }
    else {
      uVar1 = *(ushort *)(pbVar4 + 10);
      for (; (uint)uVar1 << 9 <= param_2; param_2 = param_2 + (uint)uVar1 * -0x200) {
        uVar3 = FUN_080004c2(param_1);
        if (uVar3 == 0xffffffff) {
          return 1;
        }
        if ((uVar3 < 2) || (*(uint *)(pbVar4 + 0x18) <= uVar3)) {
          return 2;
        }
      }
      uVar2 = FUN_080004a8(pbVar4,uVar3);
      param_1[7] = uVar2;
    }
    param_1[6] = uVar3;
    if (param_1[7] == 0) {
      uVar2 = 2;
    }
    else {
      param_1[7] = param_1[7] + (param_2 >> 9);
      param_1[8] = pbVar4 + (param_2 & 0x1ff) + 0x34;
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 2;
  }
  return uVar2;
}



// ==== FUN_08000910 @ 08000910 ====

undefined4 FUN_08000910(int *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = *param_1;
  uVar4 = param_1[5] + 0x20;
  if (0x1fffff < uVar4) {
    param_1[7] = 0;
  }
  if (param_1[7] == 0) {
    return 4;
  }
  if ((uVar4 & 0x1ff) == 0) {
    param_1[7] = param_1[7] + 1;
    if (param_1[6] == 0) {
      if ((uint)*(ushort *)(iVar3 + 8) <= uVar4 >> 5) {
LAB_08000978:
        param_1[7] = 0;
        return 4;
      }
    }
    else if ((*(ushort *)(iVar3 + 10) - 1 & uVar4 >> 9) == 0) {
      uVar1 = FUN_080004c2(param_1);
      if (uVar1 < 2) {
        return 2;
      }
      if (uVar1 == 0xffffffff) {
        return 1;
      }
      if (*(uint *)(iVar3 + 0x18) <= uVar1) {
        if (param_2 == 0) goto LAB_08000978;
        uVar1 = FUN_080006fe(param_1,param_1[6]);
        if (uVar1 == 0) {
          return 7;
        }
        if (uVar1 == 1) {
          return 2;
        }
        if (uVar1 == 0xffffffff) {
          return 1;
        }
        iVar2 = FUN_0800081a(iVar3,uVar1);
        if (iVar2 != 0) {
          return 1;
        }
      }
      param_1[6] = uVar1;
      iVar2 = FUN_080004a8(iVar3,uVar1);
      param_1[7] = iVar2;
    }
  }
  param_1[5] = uVar4;
  param_1[8] = iVar3 + (uVar4 & 0x1ff) + 0x34;
  return 0;
}



// ==== FUN_080009d0 @ 080009d0 ====

undefined8 FUN_080009d0(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar2 = *param_1;
  iVar1 = FUN_08000872(param_1,0);
  if (iVar1 == 0) {
    iVar3 = 0;
    do {
      iVar1 = FUN_080003de(uVar2,param_1[7]);
      if (iVar1 != 0) break;
      if ((*(char *)param_1[8] == -0x1b) || (*(char *)param_1[8] == '\0')) {
        iVar3 = iVar3 + 1;
        if (iVar3 == param_2) break;
      }
      else {
        iVar3 = 0;
      }
      iVar1 = FUN_08000910(param_1,1);
    } while (iVar1 == 0);
  }
  if (iVar1 == 4) {
    iVar1 = 7;
  }
  return CONCAT44(param_4,iVar1);
}



// ==== FUN_08000a1e @ 08000a1e ====

uint FUN_08000a1e(char *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = FUN_08000194(param_2 + 0x1a);
  if (*param_1 == '\x03') {
    iVar2 = FUN_08000194(param_2 + 0x14);
    uVar1 = uVar1 | iVar2 << 0x10;
  }
  return uVar1;
}



// ==== FUN_08000a44 @ 08000a44 ====

void FUN_08000a44(char *param_1,int param_2,uint param_3)

{
  FUN_080001b4(param_2 + 0x1a,param_3 & 0xffff);
  if (*param_1 == '\x03') {
    FUN_080001b4(param_2 + 0x14,param_3 >> 0x10);
    return;
  }
  return;
}



// ==== FUN_08000a70 @ 08000a70 ====

undefined8 FUN_08000a70(int param_1,byte *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  
  iVar1 = FUN_08000194(param_2 + 0x1a);
  if (iVar1 == 0) {
    uVar5 = ((*param_2 & 0x3f) - 1) * 0xd;
    iVar1 = 1;
    for (uVar6 = 0; uVar6 < 0xd; uVar6 = uVar6 + 1) {
      iVar2 = FUN_08000194(param_2 + (byte)(&DAT_08000bf0)[uVar6]);
      if (iVar1 == 0) {
        bVar7 = iVar2 != 0xffff;
        iVar2 = iVar1;
        if (bVar7) goto LAB_08000afa;
      }
      else {
        if (0xff < uVar5) goto LAB_08000afa;
        iVar1 = FUN_08001de4(iVar2);
        iVar3 = FUN_08001de4(*(undefined2 *)(param_1 + uVar5 * 2));
        uVar5 = uVar5 + 1;
        if (iVar1 != iVar3) goto LAB_08000afa;
      }
      iVar1 = iVar2;
    }
    if (((-1 < (int)((uint)*param_2 << 0x19)) || (iVar1 == 0)) ||
       (*(short *)(param_1 + uVar5 * 2) == 0)) {
      uVar4 = 1;
      goto LAB_08000af6;
    }
  }
LAB_08000afa:
  uVar4 = 0;
LAB_08000af6:
  return CONCAT44(param_4,uVar4);
}



// ==== FUN_08000b00 @ 08000b00 ====

undefined4 FUN_08000b00(int param_1,byte *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  
  iVar1 = FUN_08000194(param_2 + 0x1a);
  if (iVar1 == 0) {
    uVar4 = ((*param_2 & 0xffffffbf) - 1) * 0xd;
    iVar1 = 1;
    for (uVar5 = 0; uVar5 < 0xd; uVar5 = uVar5 + 1) {
      iVar2 = FUN_08000194(param_2 + (byte)(&DAT_08000bf0)[uVar5]);
      if (iVar1 == 0) {
        if (iVar2 != 0xffff) goto LAB_08000b78;
      }
      else {
        if (0xff < uVar4) goto LAB_08000b78;
        *(short *)(param_1 + uVar4 * 2) = (short)iVar2;
        uVar4 = uVar4 + 1;
        iVar1 = iVar2;
      }
    }
    if (((int)((uint)*param_2 << 0x19) < 0) && (iVar1 != 0)) {
      if (0xff < uVar4) goto LAB_08000b78;
      *(undefined2 *)(param_1 + uVar4 * 2) = 0;
    }
    uVar3 = 1;
  }
  else {
LAB_08000b78:
    uVar3 = 0;
  }
  return uVar3;
}



// ==== FUN_08000b7c @ 08000b7c ====

void FUN_08000b7c(int param_1,undefined1 *param_2,uint param_3,undefined1 param_4)

{
  int iVar1;
  short sVar2;
  uint uVar3;
  
  param_2[0xd] = param_4;
  param_2[0xb] = 0xf;
  param_2[0xc] = 0;
  FUN_080001b4(param_2 + 0x1a,0);
  iVar1 = (param_3 - 1) * 0xd;
  sVar2 = 0;
  uVar3 = 0;
  do {
    if (sVar2 != -1) {
      sVar2 = *(short *)(param_1 + iVar1 * 2);
      iVar1 = iVar1 + 1;
    }
    FUN_080001b4(param_2 + (byte)(&DAT_08000bf0)[uVar3],sVar2);
    if (sVar2 == 0) {
      sVar2 = -1;
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 < 0xd);
  if ((sVar2 == -1) || (*(short *)(param_1 + iVar1 * 2) == 0)) {
    param_3 = param_3 | 0x40;
  }
  *param_2 = (char)param_3;
  return;
}



// ==== FUN_08000c00 @ 08000c00 ====

undefined8 FUN_08000c00(int param_1,undefined4 param_2,ushort *param_3,uint param_4)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined1 uVar5;
  uint uVar6;
  ushort *puVar7;
  char cStack_21;
  undefined4 uStack_20;
  ushort *puStack_1c;
  uint uStack_18;
  
  uStack_20 = param_2;
  puStack_1c = param_3;
  uStack_18 = param_4;
  FUN_08001f90(param_1,param_2,0xb);
  if (5 < param_4) {
    while (*param_3 != 0) {
      puVar7 = param_3 + 1;
      uVar2 = (uint)*param_3;
      for (uVar6 = 0; param_3 = puVar7, uVar6 < 0x10; uVar6 = uVar6 + 1) {
        param_4 = (uVar2 & 1) + param_4 * 2;
        uVar2 = uVar2 >> 1;
        if ((int)(param_4 * 0x8000) < 0) {
          param_4 = param_4 ^ 0x11021;
        }
      }
    }
  }
  uVar2 = 7;
  do {
    uVar4 = uVar2;
    uVar2 = param_4 & 0xf;
    uVar6 = uVar2 + 0x30;
    cVar1 = (char)uVar6;
    param_4 = param_4 >> 4;
    if (0x39 < uVar6) {
      cVar1 = (char)uVar2 + '7';
    }
    *(char *)((int)&uStack_20 + uVar4) = cVar1;
    uVar2 = uVar4 - 1;
  } while ((uVar2 != 0) && (param_4 != 0));
  (&cStack_21)[uVar4] = '~';
  uVar6 = 0;
  while (((uVar6 < uVar2 && (*(char *)(param_1 + uVar6) != ' ')) &&
         ((iVar3 = FUN_080001cc(), uVar4 = uVar6, iVar3 == 0 || (uVar4 = uVar6 + 1, uVar4 != uVar2))
         ))) {
    uVar6 = uVar4 + 1;
  }
  do {
    uVar4 = uVar6 + 1;
    if (uVar2 < 8) {
      uVar5 = *(undefined1 *)((int)&uStack_20 + uVar2);
      uVar2 = uVar2 + 1;
    }
    else {
      uVar5 = 0x20;
    }
    *(undefined1 *)(param_1 + uVar6) = uVar5;
    uVar6 = uVar4;
  } while (uVar4 < 8);
  return CONCAT44(puStack_1c,uStack_20);
}



// ==== FUN_08000c9a @ 08000c9a ====

uint FUN_08000c9a(byte *param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = 0;
  iVar2 = 0xb;
  do {
    uVar1 = uVar1 * 0x80 + ((uVar1 & 0xff) >> 1) + (uint)*param_1;
    iVar2 = iVar2 + -1;
    param_1 = param_1 + 1;
  } while (iVar2 != 0);
  return uVar1 & 0xff;
}



// ==== FUN_08000cb8 @ 08000cb8 ====

int FUN_08000cb8(int *param_1,uint param_2)

{
  byte bVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  
  iVar5 = 4;
  iVar4 = *param_1;
  uVar6 = 0xff;
  uVar7 = 0xff;
  do {
    if ((param_1[7] == 0) || (iVar5 = FUN_080003de(iVar4), iVar5 != 0)) break;
    uVar2 = (uint)*(byte *)param_1[8];
    if (uVar2 == 0) {
      iVar5 = 4;
      break;
    }
    bVar1 = ((byte *)param_1[8])[0xb];
    bVar3 = bVar1 & 0x3f;
    *(byte *)((int)param_1 + 6) = bVar3;
    if (((uVar2 == 0xe5) || (uVar2 == 0x2e)) || (((bVar1 & 0x1f) == 8) != param_2)) {
LAB_08000d56:
      uVar6 = 0xff;
    }
    else {
      if (bVar3 != 0xf) {
        if (((uVar6 & 0xff) != 0) || (uVar6 = FUN_08000c9a(param_1[8]), uVar7 != uVar6)) {
          param_1[0xc] = -1;
        }
        break;
      }
      if ((int)(uVar2 << 0x19) < 0) {
        uVar7 = (uint)*(byte *)(param_1[8] + 0xd);
        uVar2 = uVar2 & 0xbf;
        param_1[0xc] = param_1[5];
        uVar6 = uVar2;
      }
      if (((uVar2 != (uVar6 & 0xff)) || (uVar7 != *(byte *)(param_1[8] + 0xd))) ||
         (iVar5 = FUN_08000b00(*(undefined4 *)(iVar4 + 0xc)), iVar5 == 0)) goto LAB_08000d56;
      uVar6 = uVar6 - 1;
    }
    iVar5 = FUN_08000910(param_1,0);
  } while (iVar5 == 0);
  if (iVar5 != 0) {
    param_1[7] = 0;
  }
  return iVar5;
}



// ==== FUN_08000d84 @ 08000d84 ====

int FUN_08000d84(int *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  
  iVar6 = *param_1;
  iVar1 = FUN_08000872(param_1,0);
  if (iVar1 == 0) {
    uVar5 = 0xff;
    uVar7 = 0xff;
    param_1[0xc] = -1;
    while (iVar1 = FUN_080003de(iVar6,param_1[7]), iVar1 == 0) {
      uVar2 = (uint)*(byte *)param_1[8];
      if (uVar2 == 0) {
        return 4;
      }
      uVar3 = (uint)((byte *)param_1[8])[0xb];
      uVar4 = uVar3 & 0x3f;
      *(char *)((int)param_1 + 6) = (char)uVar4;
      if ((uVar2 == 0xe5) || (((int)(uVar3 << 0x1c) < 0 && (uVar4 != 0xf)))) {
LAB_08000e52:
        uVar7 = 0xff;
        param_1[0xc] = -1;
      }
      else {
        if (uVar4 != 0xf) {
          if (((uVar7 & 0xff) == 0) && (uVar7 = FUN_08000c9a(param_1[8]), uVar5 == uVar7)) {
            return 0;
          }
          if ((-1 < (int)((uint)*(byte *)((int)param_1 + 0x2f) << 0x1f)) &&
             (iVar1 = FUN_08002038(param_1[8],param_1 + 9,0xb), iVar1 == 0)) {
            return 0;
          }
          goto LAB_08000e52;
        }
        if (-1 < (int)((uint)*(byte *)((int)param_1 + 0x2f) << 0x19)) {
          if ((int)(uVar2 << 0x19) < 0) {
            uVar5 = (uint)*(byte *)(param_1[8] + 0xd);
            uVar2 = uVar2 & 0xbf;
            param_1[0xc] = param_1[5];
            uVar7 = uVar2;
          }
          if (((uVar2 == (uVar7 & 0xff)) && (uVar5 == *(byte *)(param_1[8] + 0xd))) &&
             (iVar1 = FUN_08000a70(*(undefined4 *)(iVar6 + 0xc)), iVar1 != 0)) {
            uVar7 = uVar7 - 1;
          }
          else {
            uVar7 = 0xff;
          }
        }
      }
      iVar1 = FUN_08000910(param_1,0);
      if (iVar1 != 0) {
        return iVar1;
      }
    }
  }
  return iVar1;
}



// ==== FUN_08000e6a @ 08000e6a ====

undefined8 FUN_08000e6a(int *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int unaff_r7;
  uint uVar4;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  iVar3 = *param_1;
  uStack_28 = param_2;
  if ((*(byte *)((int)param_1 + 0x2f) & 0xa0) != 0) {
    iVar3 = 6;
    goto LAB_08000f9c;
  }
  for (iVar2 = 0; *(short *)(*(int *)(iVar3 + 0xc) + iVar2 * 2) != 0; iVar2 = iVar2 + 1) {
  }
  uStack_24 = param_3;
  uStack_20 = param_4;
  FUN_08001fb0(&uStack_28,param_1 + 9,0xc);
  if ((int)((uStack_20 >> 0x18) << 0x1f) < 0) {
    *(undefined1 *)((int)param_1 + 0x2f) = 0x40;
    for (uVar4 = 1; uVar4 < 100; uVar4 = uVar4 + 1) {
      FUN_08000c00(param_1 + 9,&uStack_28,*(undefined4 *)(iVar3 + 0xc),uVar4);
      unaff_r7 = FUN_08000d84(param_1);
      if (unaff_r7 != 0) break;
    }
    if (uVar4 == 100) {
      iVar3 = 7;
      goto LAB_08000f9c;
    }
    if ((char)unaff_r7 == '\x04') {
      *(undefined1 *)((int)param_1 + 0x2f) = uStack_20._3_1_;
      goto LAB_08000eee;
    }
  }
  else {
LAB_08000eee:
    if ((int)((uStack_20 >> 0x18) << 0x1e) < 0) {
      iVar2 = (iVar2 + 0xcU) / 0xd + 1;
    }
    else {
      iVar2 = 1;
    }
    unaff_r7 = FUN_080009d0(param_1,iVar2);
    if (((unaff_r7 == 0) && (uVar4 = iVar2 - 1, uVar4 != 0)) &&
       (unaff_r7 = FUN_08000872(param_1,param_1[5] + uVar4 * -0x20), unaff_r7 == 0)) {
      uVar1 = FUN_08000c9a(param_1 + 9);
      while (unaff_r7 = FUN_080003de(iVar3,param_1[7]), unaff_r7 == 0) {
        FUN_08000b7c(*(undefined4 *)(iVar3 + 0xc),param_1[8],uVar4 & 0xff,uVar1);
        *(undefined1 *)(iVar3 + 3) = 1;
        unaff_r7 = FUN_08000910(param_1,0);
        if ((unaff_r7 != 0) || (uVar4 = uVar4 - 1, uVar4 == 0)) break;
      }
    }
    if ((unaff_r7 == 0) && (unaff_r7 = FUN_080003de(iVar3,param_1[7]), unaff_r7 == 0)) {
      FUN_080020a0(param_1[8],0x20,0);
      FUN_08001f90(param_1[8],param_1 + 9,0xb);
      *(byte *)(param_1[8] + 0xc) = *(byte *)((int)param_1 + 0x2f) & 0x18;
      *(undefined1 *)(iVar3 + 3) = 1;
    }
  }
  iVar3 = (int)(char)unaff_r7;
LAB_08000f9c:
  return CONCAT44(uStack_28,iVar3);
}



// ==== FUN_08000fa0 @ 08000fa0 ====

int FUN_08000fa0(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = *param_1;
  uVar3 = param_1[5];
  if (param_1[0xc] == -1) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_08000872();
  }
  if (iVar1 == 0) {
    while (iVar1 = FUN_080003de(iVar2,param_1[7]), iVar1 == 0) {
      *(undefined1 *)param_1[8] = 0xe5;
      *(undefined1 *)(iVar2 + 3) = 1;
      if ((uVar3 <= (uint)param_1[5]) || (iVar1 = FUN_08000910(param_1,0), iVar1 != 0)) break;
    }
    if (iVar1 == 4) {
      iVar1 = 2;
    }
  }
  return iVar1;
}



// ==== FUN_08000ff0 @ 08000ff0 ====

undefined8 FUN_08000ff0(int *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  short *psVar6;
  byte bVar7;
  uint uVar8;
  int *piVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  byte *local_30;
  short *local_2c;
  undefined4 uStack_28;
  
  local_30 = (byte *)*param_2;
  psVar6 = *(short **)(*param_1 + 0xc);
  uVar4 = 0;
  local_2c = (short *)param_3;
  uStack_28 = param_4;
  while( true ) {
    uVar1 = FUN_080001e4(&local_30);
    if (uVar1 == 0xffffffff) goto LAB_08001096;
    if (0xffff < uVar1) {
      psVar6[uVar4] = (short)(uVar1 >> 0x10);
      uVar4 = uVar4 + 1;
    }
    uVar8 = uVar1 & 0xffff;
    if (((uVar8 < 0x20) || (uVar8 == 0x2f)) || (uVar8 == 0x5c)) break;
    if (((uVar8 < 0x80) && (iVar3 = FUN_08002108(&DAT_08001204,uVar8), iVar3 != 0)) ||
       (0xfe < uVar4)) goto LAB_08001096;
    psVar6[uVar4] = (short)uVar1;
    uVar4 = uVar4 + 1;
  }
  if (uVar8 < 0x20) {
    uVar1 = 4;
  }
  else {
    for (; (bVar7 = *local_30, bVar7 == 0x2f || (bVar7 == 0x5c)); local_30 = local_30 + 1) {
    }
    uVar1 = 0;
    if (bVar7 < 0x20) {
      uVar1 = 4;
    }
  }
  *param_2 = local_30;
  for (; (uVar4 != 0 && ((psVar6[uVar4 - 1] == 0x20 || (psVar6[uVar4 - 1] == 0x2e))));
      uVar4 = uVar4 - 1) {
  }
  psVar6[uVar4] = 0;
  if (uVar4 == 0) {
LAB_08001096:
    uVar2 = 6;
  }
  else {
    for (uVar8 = 0; psVar6[uVar8] == 0x20; uVar8 = uVar8 + 1) {
    }
    if ((uVar8 != 0) || (*psVar6 == 0x2e)) {
      uVar1 = uVar1 | 3;
    }
    for (; (uVar4 != 0 && (psVar6[uVar4 - 1] != 0x2e)); uVar4 = uVar4 - 1) {
    }
    piVar9 = param_1 + 9;
    FUN_08001f54(piVar9,0xb,0x20);
    uVar10 = 0;
    uVar12 = 8;
    uVar11 = 0;
    local_2c = psVar6;
LAB_080010e6:
    uVar5 = (uint)(ushort)local_2c[uVar8];
    uVar8 = uVar8 + 1;
    if (uVar5 != 0) {
      if ((uVar5 == 0x20) || ((uVar5 == 0x2e && (uVar8 != uVar4)))) {
        uVar1 = uVar1 | 3;
      }
      else {
        if ((uVar12 <= uVar11) || (uVar8 == uVar4)) {
          if (uVar12 == 0xb) {
            uVar1 = uVar1 | 3;
            goto LAB_0800112c;
          }
          if (uVar8 != uVar4) {
            uVar1 = uVar1 | 3;
          }
          if (uVar4 < uVar8) goto LAB_0800112c;
          uVar12 = 0xb;
          uVar10 = uVar10 << 2;
          uVar8 = uVar4;
          uVar11 = 8;
          goto LAB_080010e6;
        }
        if (0x7f < uVar5) {
          uVar1 = uVar1 | 2;
          uVar5 = FUN_08001d80(uVar5,0x1b5);
          if ((int)(uVar5 << 0x18) < 0) {
            uVar5 = (uint)*(byte *)(DAT_080016e0 + (uVar5 & 0x7f));
          }
        }
        if ((int)uVar5 < 0x100) {
          if ((uVar5 == 0) || (iVar3 = FUN_08002108(s________08001210,uVar5), iVar3 != 0)) {
            uVar5 = 0x5f;
            uVar1 = uVar1 | 3;
          }
          else {
            if (uVar5 - 0x41 < 0x1a) {
              uVar10 = uVar10 | 2;
            }
            if (uVar5 - 0x61 < 0x1a) {
              uVar10 = uVar10 | 1;
              uVar5 = uVar5 - 0x20;
            }
          }
        }
        else {
          if (uVar12 - 1 <= uVar11) {
            uVar1 = uVar1 | 3;
            uVar11 = uVar12;
            goto LAB_080010e6;
          }
          *(char *)((int)piVar9 + uVar11) = (char)(uVar5 >> 8);
          uVar11 = uVar11 + 1;
        }
        *(char *)((int)piVar9 + uVar11) = (char)uVar5;
        uVar11 = uVar11 + 1;
      }
      goto LAB_080010e6;
    }
LAB_0800112c:
    if ((char)*piVar9 == -0x1b) {
      *(char *)piVar9 = '\x05';
    }
    if (uVar12 == 8) {
      uVar10 = uVar10 << 2;
    }
    if (((uVar10 & 0xc) == 0xc) || ((uVar10 & 3) == 3)) {
      uVar1 = uVar1 | 2;
    }
    bVar7 = (byte)uVar1;
    if (-1 < (int)(uVar1 << 0x1e)) {
      if ((int)(uVar10 << 0x1f) < 0) {
        bVar7 = bVar7 | 0x10;
      }
      if ((int)(uVar10 << 0x1d) < 0) {
        bVar7 = bVar7 | 8;
      }
    }
    *(byte *)((int)param_1 + 0x2f) = bVar7;
    uVar2 = 0;
  }
  return CONCAT44(local_30,uVar2);
}



// ==== FUN_08001218 @ 08001218 ====

undefined8 FUN_08001218(int *param_1,byte *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  byte *local_10;
  
  iVar3 = *param_1;
  for (local_10 = param_2; (*local_10 == 0x2f || (*local_10 == 0x5c)); local_10 = local_10 + 1) {
  }
  param_1[2] = 0;
  if (*local_10 < 0x20) {
    *(undefined1 *)((int)param_1 + 0x2f) = 0x80;
    uVar1 = FUN_08000872(param_1,0);
    return CONCAT44(local_10,uVar1);
  }
  do {
    iVar2 = FUN_08000ff0(param_1,&local_10);
    if (iVar2 != 0) {
LAB_08001298:
      return CONCAT44(local_10,iVar2);
    }
    iVar2 = FUN_08000d84(param_1);
    if (iVar2 != 0) {
      if ((iVar2 == 4) && (-1 < (int)((uint)*(byte *)((int)param_1 + 0x2f) << 0x1d))) {
        return CONCAT44(local_10,5);
      }
      goto LAB_08001298;
    }
    if ((int)((uint)*(byte *)((int)param_1 + 0x2f) << 0x1d) < 0) goto LAB_08001298;
    if (-1 < (int)((uint)*(byte *)((int)param_1 + 6) << 0x1b)) {
      iVar2 = 5;
      goto LAB_08001298;
    }
    iVar2 = FUN_08000a1e(iVar3,(param_1[5] & 0x1ffU) + iVar3 + 0x34);
    param_1[2] = iVar2;
  } while( true );
}



// ==== FUN_0800129a @ 0800129a ====

int FUN_0800129a(undefined4 *param_1)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  int iVar6;
  byte *pbVar5;
  
  pbVar3 = (byte *)*param_1;
  pbVar5 = pbVar3;
  if (pbVar3 == (byte *)0x0) {
    return -1;
  }
  do {
    pbVar4 = pbVar5 + 1;
    bVar1 = *pbVar5;
    if (bVar1 < 0x20) break;
    pbVar5 = pbVar4;
  } while (bVar1 != 0x3a);
  if (bVar1 == 0x3a) {
    iVar6 = 2;
    if (((int)(char)*pbVar3 - 0x30U < 10) && (pbVar3 + 2 == pbVar4)) {
      iVar6 = (char)*pbVar3 + -0x30;
    }
    iVar2 = -1;
    if (iVar6 < 2) {
      *param_1 = pbVar4;
      iVar2 = iVar6;
    }
  }
  else {
    iVar2 = 0;
  }
  return iVar2;
}



// ==== FUN_080012e4 @ 080012e4 ====

undefined4 FUN_080012e4(int param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  iVar3 = FUN_080003de(param_1);
  if (iVar3 != 0) {
    return 4;
  }
  iVar3 = FUN_08000194(param_1 + 0x232);
  cVar1 = *(char *)(param_1 + 0x34);
  if (((cVar1 != -0x15) && (cVar1 != -0x17)) && (cVar1 != -0x18)) {
LAB_080013a2:
    if (iVar3 == 0xaa55) {
      return 2;
    }
    return 3;
  }
  if ((iVar3 != 0xaa55) || (iVar4 = FUN_08002038(param_1 + 0x86,s_FAT32_080013b4,8), iVar4 != 0)) {
    uVar5 = FUN_08000194(param_1 + 0x3f);
    bVar2 = *(byte *)(param_1 + 0x41);
    if ((((uVar5 & uVar5 - 1) != 0) || ((uVar5 != 0x200 || (bVar2 == 0)))) ||
       (((bVar2 & bVar2 - 1) != 0 ||
        (((((iVar4 = FUN_08000194(param_1 + 0x42), iVar4 == 0 || (1 < *(byte *)(param_1 + 0x44) - 1)
            ) || (iVar4 = FUN_08000194(param_1 + 0x45), iVar4 == 0)) ||
          ((iVar4 = FUN_08000194(param_1 + 0x47), iVar4 < 0x80 &&
           (uVar5 = FUN_0800019e(param_1 + 0x54), uVar5 < 0x10000)))) ||
         (iVar4 = FUN_08000194(param_1 + 0x4a), iVar4 == 0)))))) goto LAB_080013a2;
  }
  return 0;
}



// ==== FUN_080013c0 @ 080013c0 ====

void FUN_080013c0(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int local_20 [4];
  
  local_20[0] = param_1;
  local_20[1] = param_2;
  local_20[2] = param_3;
  local_20[3] = param_4;
  uVar1 = FUN_080012e4(param_1,0);
  if ((uVar1 == 2) || ((uVar1 < 3 && (param_2 != 0)))) {
    for (uVar1 = 0; uVar1 < 4; uVar1 = uVar1 + 1) {
      iVar2 = FUN_0800019e(param_1 + uVar1 * 0x10 + 0x1fa);
      local_20[uVar1] = iVar2;
    }
    if (param_2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = param_2 - 1;
    }
    do {
      if (local_20[uVar1] == 0) {
        uVar3 = 3;
      }
      else {
        uVar3 = FUN_080012e4(param_1);
      }
    } while (((param_2 == 0) && (1 < uVar3)) && (uVar1 = uVar1 + 1, uVar1 < 4));
  }
  return;
}



// ==== FUN_08001422 @ 08001422 ====

undefined4 FUN_08001422(undefined4 param_1,undefined4 *param_2,uint param_3)

{
  byte bVar1;
  short *psVar2;
  undefined2 uVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  uint uVar11;
  char *pcVar12;
  char cVar13;
  
  *param_2 = 0;
  iVar5 = FUN_0800129a();
  psVar2 = DAT_080016e4;
  if (iVar5 < 0) {
    return 0xb;
  }
  pcVar12 = *(char **)(DAT_080016e4 + iVar5 * 2 + 2);
  if (pcVar12 == (char *)0x0) {
    return 0xc;
  }
  *param_2 = pcVar12;
  if ((*pcVar12 == '\0') || (iVar6 = FUN_08001e74(pcVar12[1]), iVar6 << 0x1f < 0)) {
    *pcVar12 = '\0';
    pcVar12[1] = (char)iVar5;
    iVar5 = FUN_08001e80(pcVar12[1]);
    if (iVar5 << 0x1f < 0) {
      return 3;
    }
    if (((param_3 & 0xfe) == 0) || (-1 < iVar5 << 0x1d)) {
      uVar7 = FUN_080013c0(pcVar12,0);
      if (uVar7 == 4) {
        return 1;
      }
      if (uVar7 < 2) {
        iVar6 = *(int *)(pcVar12 + 0x30);
        iVar5 = FUN_08000194(pcVar12 + 0x3f);
        if (iVar5 == 0x200) {
          iVar5 = FUN_08000194(pcVar12 + 0x4a);
          if (iVar5 == 0) {
            iVar5 = FUN_0800019e(pcVar12 + 0x58);
          }
          *(int *)(pcVar12 + 0x1c) = iVar5;
          uVar7 = (uint)(byte)pcVar12[0x44];
          pcVar12[2] = pcVar12[0x44];
          if ((uVar7 == 1) || (uVar7 == 2)) {
            bVar1 = pcVar12[0x41];
            *(ushort *)(pcVar12 + 10) = (ushort)bVar1;
            if ((bVar1 != 0) && ((bVar1 & bVar1 - 1) == 0)) {
              uVar3 = FUN_08000194(pcVar12 + 0x45);
              *(undefined2 *)(pcVar12 + 8) = uVar3;
              if ((pcVar12[8] & 0xfU) == 0) {
                uVar8 = FUN_08000194(pcVar12 + 0x47);
                if (uVar8 == 0) {
                  uVar8 = FUN_0800019e(pcVar12 + 0x54);
                }
                iVar9 = FUN_08000194(pcVar12 + 0x42);
                if (((iVar9 != 0) &&
                    (uVar11 = uVar7 * iVar5 + iVar9 + (uint)(*(ushort *)(pcVar12 + 8) >> 4),
                    uVar11 <= uVar8)) &&
                   (uVar8 = (uVar8 - uVar11) / (uint)*(ushort *)(pcVar12 + 10), uVar8 != 0)) {
                  cVar13 = '\0';
                  if (uVar8 < DAT_080016e8) {
                    cVar13 = '\x03';
                  }
                  if (uVar8 < 0xfff6) {
                    cVar13 = '\x02';
                  }
                  if (uVar8 < 0xff6) {
                    cVar13 = '\x01';
                  }
                  if (cVar13 != '\0') {
                    *(uint *)(pcVar12 + 0x18) = uVar8 + 2;
                    *(int *)(pcVar12 + 0x20) = iVar6;
                    *(int *)(pcVar12 + 0x24) = iVar9 + iVar6;
                    *(uint *)(pcVar12 + 0x2c) = uVar11 + iVar6;
                    if (cVar13 == '\x03') {
                      iVar5 = FUN_08000194(pcVar12 + 0x5e);
                      if (iVar5 != 0) {
                        return 0xd;
                      }
                      if (*(short *)(pcVar12 + 8) != 0) {
                        return 0xd;
                      }
                      uVar10 = FUN_0800019e(pcVar12 + 0x60);
                      *(undefined4 *)(pcVar12 + 0x28) = uVar10;
                      iVar5 = *(int *)(pcVar12 + 0x18) << 2;
                    }
                    else {
                      if (*(short *)(pcVar12 + 8) == 0) {
                        return 0xd;
                      }
                      *(uint *)(pcVar12 + 0x28) = uVar7 * iVar5 + *(int *)(pcVar12 + 0x24);
                      uVar7 = *(uint *)(pcVar12 + 0x18);
                      if (cVar13 == '\x02') {
                        iVar5 = uVar7 << 1;
                      }
                      else {
                        iVar5 = (uVar7 & 1) + (uVar7 * 3 >> 1);
                      }
                    }
                    if (iVar5 + 0x1ffU >> 9 <= *(uint *)(pcVar12 + 0x1c)) {
                      pcVar12[0x14] = -1;
                      pcVar12[0x15] = -1;
                      pcVar12[0x16] = -1;
                      pcVar12[0x17] = -1;
                      pcVar12[0x10] = -1;
                      pcVar12[0x11] = -1;
                      pcVar12[0x12] = -1;
                      pcVar12[0x13] = -1;
                      pcVar12[4] = -0x80;
                      if (((cVar13 == '\x03') && (iVar5 = FUN_08000194(pcVar12 + 100), iVar5 == 1))
                         && (iVar5 = FUN_080003de(pcVar12,iVar6 + 1), iVar5 == 0)) {
                        pcVar12[4] = '\0';
                        iVar5 = FUN_08000194(pcVar12 + 0x232);
                        if (((iVar5 == 0xaa55) &&
                            (iVar5 = FUN_0800019e(pcVar12 + 0x34), iVar5 == DAT_080016ec)) &&
                           (iVar5 = FUN_0800019e(pcVar12 + 0x218), iVar5 == DAT_080016f0)) {
                          uVar10 = FUN_0800019e(pcVar12 + 0x21c);
                          *(undefined4 *)(pcVar12 + 0x14) = uVar10;
                          uVar10 = FUN_0800019e(pcVar12 + 0x220);
                          *(undefined4 *)(pcVar12 + 0x10) = uVar10;
                        }
                      }
                      *pcVar12 = cVar13;
                      sVar4 = *psVar2 + 1;
                      *psVar2 = sVar4;
                      *(short *)(pcVar12 + 6) = sVar4;
                      FUN_08000376(pcVar12);
                      return 0;
                    }
                  }
                }
              }
            }
          }
        }
      }
      return 0xd;
    }
  }
  else if (((param_3 & 0xfe) == 0) || (-1 < iVar6 << 0x1d)) {
    return 0;
  }
  return 10;
}



// ==== FUN_0800164e @ 0800164e ====

int FUN_0800164e(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  
  iVar4 = 9;
  if ((((param_1 != (undefined4 *)0x0) && (pcVar3 = (char *)*param_1, pcVar3 != (char *)0x0)) &&
      (*pcVar3 != '\0')) &&
     ((*(short *)(param_1 + 1) == *(short *)(pcVar3 + 6) &&
      (iVar1 = FUN_08001e74(pcVar3[1]), -1 < iVar1 << 0x1f)))) {
    iVar4 = 0;
  }
  if (iVar4 == 0) {
    uVar2 = *param_1;
  }
  else {
    uVar2 = 0;
  }
  *param_2 = uVar2;
  return iVar4;
}



// ==== FUN_0800168a @ 0800168a ====

undefined4 FUN_0800168a(undefined1 *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined4 local_20 [2];
  undefined1 *local_18;
  undefined4 uStack_14;
  
  local_20[0] = param_2;
  local_18 = param_1;
  uStack_14 = param_2;
  iVar1 = FUN_0800129a(local_20);
  if (iVar1 < 0) {
    uVar2 = 0xb;
  }
  else {
    iVar1 = DAT_080016e4 + iVar1 * 4;
    puVar3 = *(undefined1 **)(iVar1 + 4);
    if (puVar3 != (undefined1 *)0x0) {
      FUN_08000376(puVar3);
      *puVar3 = 0;
    }
    if (local_18 != (undefined1 *)0x0) {
      *local_18 = 0;
    }
    *(undefined1 **)(iVar1 + 4) = local_18;
    if (param_3 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_08001422(&uStack_14,&local_18,0);
    }
  }
  return uVar2;
}



// ==== FUN_080016f4 @ 080016f4 ====

int FUN_080016f4(int *param_1,undefined4 param_2,uint param_3)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int local_258;
  int local_254;
  byte local_24e;
  int local_234;
  byte local_225;
  undefined1 auStack_220 [512];
  int *piStack_20;
  undefined4 local_1c;
  
  if (param_1 == (int *)0x0) {
    iVar2 = 9;
  }
  else {
    uVar7 = param_3 & 0x3f;
    piStack_20 = param_1;
    local_1c = param_2;
    iVar2 = FUN_08001422(&local_1c,&local_258,uVar7);
    if (iVar2 == 0) {
      local_254 = local_258;
      *(undefined1 **)(local_258 + 0xc) = auStack_220;
      iVar2 = FUN_08001218(&local_254,local_1c);
      if (iVar2 == 0) {
        if ((int)((uint)local_225 << 0x18) < 0) {
          iVar2 = 6;
        }
        else {
          iVar2 = FUN_08000230(&local_254,~-(uint)((param_3 & 0x3e) == 0) >> 0x1f);
        }
      }
      if ((param_3 & 0x1c) == 0) {
        if (iVar2 == 0) {
          if ((int)((uint)local_24e << 0x1b) < 0) {
            iVar2 = 4;
          }
          else if (((int)(param_3 << 0x1e) < 0) && ((int)((uint)local_24e << 0x1f) < 0)) {
            iVar2 = 7;
          }
        }
      }
      else {
        if (iVar2 == 0) {
          if ((local_24e & 0x11) == 0) {
            if ((int)(param_3 << 0x1d) < 0) {
              iVar2 = 8;
            }
          }
          else {
            iVar2 = 7;
          }
        }
        else {
          if (iVar2 == 4) {
            iVar2 = FUN_08000294();
            if (iVar2 == 0) {
              iVar2 = 0x12;
            }
            else {
              iVar2 = FUN_08000e6a(&local_254);
            }
          }
          uVar7 = uVar7 | 8;
        }
        if ((iVar2 == 0) && ((int)(uVar7 << 0x1c) < 0)) {
          uVar3 = FUN_08001d40();
          FUN_080001bc(local_234 + 0xe,uVar3);
          FUN_080001bc(local_234 + 0x16,uVar3);
          iVar5 = local_234;
          iVar4 = FUN_08000a1e(local_258,local_234);
          *(undefined1 *)(iVar5 + 0xb) = 0x20;
          FUN_08000a44(local_258,local_234,0);
          FUN_080001bc(local_234 + 0x1c,0);
          *(undefined1 *)(local_258 + 3) = 1;
          if (iVar4 != 0) {
            uVar3 = *(undefined4 *)(local_258 + 0x30);
            iVar2 = FUN_08000688(&local_254,iVar4,0);
            if (iVar2 == 0) {
              iVar2 = FUN_080003de(local_258,uVar3);
              *(int *)(local_258 + 0x10) = iVar4 + -1;
            }
          }
        }
      }
      if (iVar2 == 0) {
        if ((int)(uVar7 << 0x1c) < 0) {
          uVar7 = uVar7 | 0x40;
        }
        param_1[9] = *(int *)(local_258 + 0x30);
        param_1[10] = local_234;
        iVar5 = FUN_080002b4(&local_254,~-(uint)((uVar7 & 0xfe) == 0) >> 0x1f);
        param_1[4] = iVar5;
        if (iVar5 == 0) {
          iVar2 = 2;
        }
      }
      if (iVar2 == 0) {
        iVar5 = FUN_08000a1e(local_258,local_234);
        param_1[2] = iVar5;
        iVar5 = FUN_0800019e(local_234 + 0x1c);
        param_1[3] = iVar5;
        param_1[0xb] = 0;
        *param_1 = local_258;
        *(undefined2 *)(param_1 + 1) = *(undefined2 *)(local_258 + 6);
        *(char *)(param_1 + 5) = (char)uVar7;
        *(undefined1 *)((int)param_1 + 0x15) = 0;
        param_1[8] = 0;
        param_1[6] = 0;
        FUN_08001f54(param_1 + 0xc,0x200,0);
        if (((int)(uVar7 << 0x1a) < 0) && (param_1[3] != 0)) {
          param_1[6] = param_1[3];
          uVar1 = *(ushort *)(local_258 + 10);
          uVar7 = param_1[2];
          for (uVar6 = param_1[3]; (iVar2 == 0 && ((uint)uVar1 * 0x200 < uVar6));
              uVar6 = uVar6 + (uint)uVar1 * -0x200) {
            uVar7 = FUN_080004c2(param_1);
            if (uVar7 < 2) {
              iVar2 = 2;
            }
            if (uVar7 == 0xffffffff) {
              iVar2 = 1;
            }
          }
          param_1[7] = uVar7;
          if ((iVar2 == 0) && ((uVar6 & 0x1ff) != 0)) {
            iVar5 = FUN_080004a8(local_258);
            if (iVar5 == 0) {
              iVar2 = 2;
            }
            else {
              iVar5 = iVar5 + (uVar6 >> 9);
              param_1[8] = iVar5;
              iVar5 = FUN_08001e9a(*(undefined1 *)(local_258 + 1),param_1 + 0xc,iVar5,1);
              if (iVar5 != 0) {
                iVar2 = 1;
              }
            }
          }
          if (iVar2 != 0) {
            FUN_08000340(param_1[4]);
          }
        }
      }
    }
    if (iVar2 != 0) {
      *param_1 = 0;
    }
  }
  return iVar2;
}



// ==== FUN_08001918 @ 08001918 ====

undefined8 FUN_08001918(int param_1,int param_2,uint param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint local_28;
  int *piStack_24;
  
  *param_4 = 0;
  local_28 = param_3;
  piStack_24 = param_4;
  iVar1 = FUN_0800164e(param_1,&local_28);
  if ((iVar1 == 0) && (iVar1 = (int)*(char *)(param_1 + 0x15), iVar1 == 0)) {
    if ((int)((uint)*(byte *)(param_1 + 0x14) << 0x1f) < 0) {
      uVar5 = *(int *)(param_1 + 0xc) - *(int *)(param_1 + 0x18);
      if (param_3 < uVar5) {
        uVar5 = param_3;
      }
      for (; uVar5 != 0; uVar5 = uVar5 - uVar3) {
        uVar3 = *(uint *)(param_1 + 0x18);
        if ((uVar3 & 0x1ff) == 0) {
          uVar6 = *(ushort *)(local_28 + 10) - 1 & uVar3 >> 9;
          if (uVar6 == 0) {
            if (uVar3 == 0) {
              uVar3 = *(uint *)(param_1 + 8);
            }
            else if (*(int *)(param_1 + 0x2c) == 0) {
              uVar3 = FUN_080004c2(param_1,*(undefined4 *)(param_1 + 0x1c));
            }
            else {
              uVar3 = FUN_080007f2(param_1);
            }
            if (1 < uVar3) {
              if (uVar3 != 0xffffffff) {
                *(uint *)(param_1 + 0x1c) = uVar3;
                goto LAB_08001a10;
              }
              goto LAB_08001a90;
            }
          }
          else {
LAB_08001a10:
            iVar1 = FUN_080004a8(local_28,*(undefined4 *)(param_1 + 0x1c));
            if (iVar1 != 0) {
              iVar1 = uVar6 + iVar1;
              uVar3 = uVar5 >> 9;
              if (uVar3 == 0) {
                if (*(int *)(param_1 + 0x20) != iVar1) {
                  if ((int)((uint)*(byte *)(param_1 + 0x14) << 0x18) < 0) {
                    iVar2 = FUN_08001ed4(*(undefined1 *)(local_28 + 1),param_1 + 0x30,
                                         *(int *)(param_1 + 0x20),1);
                    if (iVar2 != 0) goto LAB_08001a90;
                    *(byte *)(param_1 + 0x14) = *(byte *)(param_1 + 0x14) & 0x7f;
                  }
                  iVar2 = FUN_08001e9a(*(undefined1 *)(local_28 + 1),param_1 + 0x30,iVar1,1);
                  if (iVar2 != 0) goto LAB_08001a90;
                }
                *(int *)(param_1 + 0x20) = iVar1;
                goto LAB_08001a6c;
              }
              if ((uint)*(ushort *)(local_28 + 10) < uVar3 + uVar6) {
                uVar3 = *(ushort *)(local_28 + 10) - uVar6;
              }
              iVar2 = FUN_08001e9a(*(undefined1 *)(local_28 + 1),param_2,iVar1,uVar3);
              if (iVar2 == 0) {
                if (((int)((uint)*(byte *)(param_1 + 0x14) << 0x18) < 0) &&
                   (uVar6 = *(int *)(param_1 + 0x20) - iVar1, uVar6 < uVar3)) {
                  FUN_08001f90(param_2 + uVar6 * 0x200,param_1 + 0x30,0x200);
                }
                uVar3 = uVar3 << 9;
                goto LAB_080019ae;
              }
LAB_08001a90:
              iVar1 = 1;
              *(undefined1 *)(param_1 + 0x15) = 1;
              goto LAB_08001a9a;
            }
          }
          iVar1 = 2;
          *(undefined1 *)(param_1 + 0x15) = 2;
          goto LAB_08001a9a;
        }
LAB_08001a6c:
        uVar4 = *(uint *)(param_1 + 0x18) & 0x1ff;
        uVar6 = 0x200 - uVar4;
        uVar3 = uVar5;
        if (uVar6 < uVar5) {
          uVar3 = uVar6;
        }
        FUN_08001f90(param_2,uVar4 + param_1 + 0x30,uVar3);
LAB_080019ae:
        *param_4 = uVar3 + *param_4;
        param_2 = param_2 + uVar3;
        *(uint *)(param_1 + 0x18) = uVar3 + *(int *)(param_1 + 0x18);
      }
      iVar1 = 0;
    }
    else {
      iVar1 = 7;
    }
  }
LAB_08001a9a:
  return CONCAT44(local_28,iVar1);
}



// ==== FUN_08001a9e @ 08001a9e ====

undefined8 FUN_08001a9e(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int local_18;
  undefined4 uStack_14;
  
  local_18 = param_3;
  uStack_14 = param_4;
  iVar1 = FUN_0800164e(param_1,&local_18);
  if (iVar1 == 0) {
    if ((int)((uint)*(byte *)(param_1 + 5) << 0x19) < 0) {
      if ((int)((uint)*(byte *)(param_1 + 5) << 0x18) < 0) {
        iVar1 = FUN_08001ed4(*(undefined1 *)(local_18 + 1),param_1 + 0xc,param_1[8],1);
        if (iVar1 != 0) {
          return CONCAT44(local_18,1);
        }
        *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) & 0x7f;
      }
      uVar2 = FUN_08001d40();
      iVar1 = FUN_080003de(local_18,param_1[9]);
      if (iVar1 == 0) {
        iVar1 = param_1[10];
        *(byte *)(iVar1 + 0xb) = *(byte *)(iVar1 + 0xb) | 0x20;
        FUN_08000a44(*param_1,iVar1,param_1[2]);
        FUN_080001bc(iVar1 + 0x1c,param_1[3]);
        FUN_080001bc(iVar1 + 0x16,uVar2);
        FUN_080001b4(iVar1 + 0x12,0);
        *(undefined1 *)(local_18 + 3) = 1;
        iVar1 = FUN_08000414(local_18);
        *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) & 0xbf;
      }
    }
  }
  return CONCAT44(local_18,iVar1);
}



// ==== FUN_08001b30 @ 08001b30 ====

void FUN_08001b30(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_10 = param_3;
  uStack_c = param_4;
  iVar1 = FUN_08001a9e();
  if (((iVar1 == 0) && (iVar1 = FUN_0800164e(param_1,&uStack_10), iVar1 == 0)) &&
     (iVar1 = FUN_08000340(param_1[4]), iVar1 == 0)) {
    *param_1 = 0;
  }
  return;
}



// ==== FUN_08001b58 @ 08001b58 ====

int FUN_08001b58(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int local_280;
  int local_27c;
  byte local_276;
  undefined4 local_25c;
  byte local_24d;
  undefined1 auStack_248 [512];
  int local_48 [2];
  int local_40;
  undefined4 local_10;
  
  iVar2 = 0;
  local_10 = param_1;
  iVar1 = FUN_08001422(&local_10,&local_280,2);
  if (iVar1 == 0) {
    local_27c = local_280;
    *(undefined1 **)(local_280 + 0xc) = auStack_248;
    iVar1 = FUN_08001218(&local_27c,local_10);
    if (iVar1 == 0) {
      iVar1 = FUN_08000230(&local_27c,2);
    }
    if (iVar1 == 0) {
      if ((int)((uint)local_24d << 0x18) < 0) {
        iVar1 = 6;
      }
      else if ((int)((uint)local_276 << 0x1f) < 0) {
        iVar1 = 7;
      }
      if ((iVar1 == 0) &&
         (iVar2 = FUN_08000a1e(local_280,local_25c), (int)((uint)local_276 << 0x1b) < 0)) {
        local_48[0] = local_280;
        local_40 = iVar2;
        iVar1 = FUN_08000872(local_48,0);
        if (iVar1 == 0) {
          iVar1 = FUN_08000cb8(local_48,0);
          if (iVar1 == 0) {
            iVar1 = 7;
          }
          if (iVar1 == 4) {
            iVar1 = 0;
          }
        }
      }
      if (iVar1 == 0) {
        iVar1 = FUN_08000fa0(&local_27c);
        if ((iVar1 == 0) && (iVar2 != 0)) {
          iVar1 = FUN_08000688(&local_27c,iVar2,0);
        }
        if (iVar1 == 0) {
          iVar1 = FUN_08000414(local_280);
        }
      }
    }
  }
  return iVar1;
}



// ==== FUN_08001d40 @ 08001d40 ====

undefined4 FUN_08001d40(void)

{
  return 0;
}



// ==== FUN_08001d46 @ 08001d46 ====

int * FUN_08001d46(int *param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  int unaff_r9;
  
  pcVar6 = (char *)param_1[2];
  pcVar3 = (char *)((int)param_1 + *param_1);
  pcVar5 = pcVar3 + ((uint)param_1[1] >> 1);
  if (param_1[1] << 0x1f < 0) {
    pcVar6 = pcVar6 + unaff_r9;
  }
LAB_08001d60:
  do {
    if (pcVar3 == pcVar5) {
      return param_1 + 3;
    }
    iVar2 = (int)*pcVar3;
    pcVar4 = pcVar3 + 1;
    do {
      pcVar3 = pcVar4 + 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar6;
      while( true ) {
        pcVar6 = pcVar4 + 1;
        *pcVar4 = cVar1;
        if (-1 < iVar2) break;
        iVar2 = iVar2 + 1;
        pcVar4 = pcVar6;
        if (iVar2 == 0) goto LAB_08001d60;
      }
      iVar2 = iVar2 + -1;
      pcVar4 = pcVar3;
    } while (-1 < iVar2);
  } while( true );
}



// ==== FUN_08001d80 @ 08001d80 ====

ushort FUN_08001d80(uint param_1,int param_2)

{
  ushort uVar1;
  ushort uVar2;
  
  uVar1 = 0;
  uVar2 = 0;
  if (param_1 < 0x80) {
    uVar2 = (ushort)param_1;
  }
  else if ((param_1 < 0x10000) && (param_2 == 0x1b5)) {
    while ((uVar1 < 0x80 && (param_1 != *(ushort *)(DAT_08001e6c + (uint)uVar1 * 2)))) {
      uVar1 = uVar1 + 1;
    }
    uVar2 = uVar1 + 0x80 & 0xff;
  }
  return uVar2;
}



// ==== FUN_08001dba @ 08001dba ====

uint FUN_08001dba(uint param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = 0;
  if ((int)param_1 < 0x80) {
    return param_1;
  }
  if ((param_2 == 0x1b5) && ((int)param_1 < 0x100)) {
    uVar1 = (uint)*(ushort *)(DAT_08001e6c + param_1 * 2 + -0x100);
  }
  return uVar1;
}



// ==== FUN_08001de4 @ 08001de4 ====

uint FUN_08001de4(uint param_1)

{
  ushort *puVar1;
  ushort uVar2;
  uint uVar3;
  ushort *puVar4;
  uint uVar5;
  
  if (0xffff < param_1) {
    return param_1;
  }
  param_1 = param_1 & 0xffff;
  puVar4 = DAT_08001e70;
  if (0xfff < param_1) {
    puVar4 = DAT_08001e70 + 0xfa;
  }
  while( true ) {
    uVar3 = (uint)*puVar4;
    if ((uVar3 == 0) || (param_1 < uVar3)) goto switchD_08001e28_default;
    puVar1 = puVar4 + 1;
    puVar4 = puVar4 + 2;
    uVar2 = *puVar1 >> 8;
    uVar5 = *puVar1 & 0xff;
    if (param_1 < uVar5 + uVar3) break;
    if (uVar2 == 0) {
      puVar4 = puVar4 + uVar5;
    }
  }
  switch(uVar2) {
  case 0:
    param_1 = (uint)puVar4[param_1 - uVar3];
    break;
  case 1:
    param_1 = param_1 - (param_1 - uVar3 & 1);
    break;
  case 2:
    param_1 = param_1 - 0x10;
    break;
  case 3:
    param_1 = param_1 - 0x20;
    break;
  case 4:
    param_1 = param_1 - 0x30;
    break;
  case 5:
    param_1 = param_1 - 0x1a;
    break;
  case 6:
    param_1 = param_1 + 8;
    break;
  case 7:
    param_1 = param_1 - 0x50;
    break;
  case 8:
    param_1 = param_1 - 0x1c60;
  }
switchD_08001e28_default:
  return param_1 & 0xffff;
}



// ==== FUN_08001e74 @ 08001e74 ====

undefined4 FUN_08001e74(int param_1)

{
  if (param_1 == 1) {
    return 0;
  }
  return 1;
}



// ==== FUN_08001e80 @ 08001e80 ====

undefined8 FUN_08001e80(int param_1)

{
  int iVar1;
  undefined4 unaff_r7;
  
  if (param_1 == 1) {
    iVar1 = (**(code **)(DAT_08001f50 + 0x10))();
    return CONCAT44(unaff_r7,~-(uint)(iVar1 == 0) >> 0x1f);
  }
  return CONCAT44(unaff_r7,1);
}



// ==== FUN_08001e9a @ 08001e9a ====

longlong FUN_08001e9a(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  char cVar2;
  
  iVar1 = DAT_08001f50;
  if (param_1 == 1) {
    cVar2 = (**(code **)(DAT_08001f50 + 0x18))(param_2,param_3,param_4 & 0xff);
    while (cVar2 != '\0') {
      (**(code **)(iVar1 + 0x10))();
      cVar2 = (**(code **)(iVar1 + 0x18))(param_2,param_3,param_4 & 0xff);
    }
    return (ulonglong)param_4 << 0x20;
  }
  return CONCAT44(param_4,4);
}



// ==== FUN_08001ed4 @ 08001ed4 ====

longlong FUN_08001ed4(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  char cVar2;
  
  iVar1 = DAT_08001f50;
  if (param_1 == 1) {
    cVar2 = (**(code **)(DAT_08001f50 + 0x14))(param_2,param_3,param_4 & 0xff);
    while (cVar2 != '\0') {
      (**(code **)(iVar1 + 0x10))();
      cVar2 = (**(code **)(iVar1 + 0x14))(param_2,param_3,param_4 & 0xff);
    }
    return (ulonglong)param_4 << 0x20;
  }
  return CONCAT44(param_4,4);
}



// ==== FUN_08001f10 @ 08001f10 ====

undefined4 FUN_08001f10(int param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  if (param_1 == 1) {
    switch(param_2) {
    case 0:
      return 0;
    case 1:
      uVar1 = (**(code **)(DAT_08001f50 + 0x1c))();
      *param_3 = uVar1;
      return 0;
    case 2:
      *param_3 = 0x200;
      return 0;
    case 3:
      *(undefined2 *)param_3 = 8;
      return 0;
    default:
      return 4;
    }
  }
  return 4;
}



// ==== FUN_08001f54 @ 08001f54 ====

uint * FUN_08001f54(uint *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = (param_3 & 0xff) << 8;
  uVar1 = param_3 & 0xff | uVar5;
  uVar5 = uVar1 | (param_3 & 0xffff00ff | uVar5) << 0x10;
  do {
    uVar4 = param_2;
    param_2 = uVar4 - 0x10;
    if (0xf < uVar4) {
      *param_1 = uVar5;
      param_1[1] = uVar5;
      param_1[2] = uVar5;
      param_1[3] = uVar5;
      param_1 = param_1 + 4;
    }
  } while (0xf < uVar4 && param_2 != 0);
  if ((param_2 & 8) != 0) {
    *param_1 = uVar5;
    param_1[1] = uVar5;
    param_1 = param_1 + 2;
  }
  puVar3 = param_1;
  if ((int)(uVar4 << 0x1d) < 0) {
    puVar3 = param_1 + 1;
    *param_1 = uVar5;
  }
  puVar2 = puVar3;
  if ((param_2 & 2) != 0) {
    puVar2 = (uint *)((int)puVar3 + 2);
    *(short *)puVar3 = (short)uVar1;
  }
  puVar3 = puVar2;
  if ((int)(uVar4 * -0x80000000) < 0) {
    puVar3 = (uint *)((int)puVar2 + 1);
    *(char *)puVar2 = (char)param_3;
  }
  return puVar3;
}



// ==== FUN_08001f90 @ 08001f90 ====

void FUN_08001f90(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined2 *puVar3;
  undefined1 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  bool bVar13;
  
  while( true ) {
    if (param_3 == 0) {
      return;
    }
    if (((uint)param_2 & 3) == 0) break;
    param_3 = param_3 - 1;
    *(undefined1 *)param_1 = *(undefined1 *)param_2;
    param_2 = (undefined4 *)((int)param_2 + 1);
    param_1 = (undefined4 *)((int)param_1 + 1);
  }
  if (((uint)param_1 & 3) == 0) {
    while (uVar7 = param_3 - 0x10, 0xf < param_3) {
      uVar9 = *param_2;
      uVar10 = param_2[1];
      uVar11 = param_2[2];
      uVar12 = param_2[3];
      param_2 = param_2 + 4;
      *param_1 = uVar9;
      param_1[1] = uVar10;
      param_1[2] = uVar11;
      param_1[3] = uVar12;
      param_1 = param_1 + 4;
      param_3 = uVar7;
    }
    if ((uVar7 & 8) != 0) {
      uVar9 = *param_2;
      uVar10 = param_2[1];
      param_2 = param_2 + 2;
      *param_1 = uVar9;
      param_1[1] = uVar10;
      param_1 = param_1 + 2;
    }
    puVar1 = param_1;
    puVar5 = param_2;
    if ((int)(param_3 << 0x1d) < 0) {
      puVar5 = param_2 + 1;
      puVar1 = param_1 + 1;
      *param_1 = *param_2;
    }
    puVar2 = puVar1;
    puVar6 = puVar5;
    if ((uVar7 & 2) != 0) {
      puVar6 = (undefined4 *)((int)puVar5 + 2);
      puVar2 = (undefined4 *)((int)puVar1 + 2);
      *(undefined2 *)puVar1 = *(undefined2 *)puVar5;
    }
    if ((int)(param_3 << 0x1f) < 0) {
      *(undefined1 *)puVar2 = *(undefined1 *)puVar6;
    }
    return;
  }
  uVar7 = param_3 - 4;
  if (3 < param_3) {
    puVar5 = param_2;
    if (((uint)param_1 & 1) == 0) {
      do {
        param_2 = puVar5 + 1;
        uVar9 = *puVar5;
        puVar3 = (undefined2 *)((int)param_1 + 2);
        *(short *)param_1 = (short)uVar9;
        bVar13 = 3 < uVar7;
        uVar7 = uVar7 - 4;
        param_1 = param_1 + 1;
        *puVar3 = (short)((uint)uVar9 >> 0x10);
        puVar5 = param_2;
      } while (bVar13);
    }
    else {
      do {
        param_2 = puVar5 + 1;
        uVar9 = *puVar5;
        *(char *)param_1 = (char)uVar9;
        puVar4 = (undefined1 *)((int)param_1 + 3);
        *(short *)((int)param_1 + 1) = (short)((uint)uVar9 >> 8);
        bVar13 = 3 < uVar7;
        uVar7 = uVar7 - 4;
        param_1 = param_1 + 1;
        *puVar4 = (char)((uint)uVar9 >> 0x18);
        puVar5 = param_2;
      } while (bVar13);
    }
  }
  iVar8 = uVar7 + 4;
  do {
    bVar13 = iVar8 != 0;
    iVar8 = iVar8 + -1;
    puVar5 = param_1;
    if (bVar13) {
      puVar5 = (undefined4 *)((int)param_1 + 1);
      *(undefined1 *)param_1 = *(undefined1 *)param_2;
      param_2 = (undefined4 *)((int)param_2 + 1);
    }
    param_1 = puVar5;
  } while (bVar13 && iVar8 != 0);
  return;
}



// ==== FUN_08001fb0 @ 08001fb0 ====

void FUN_08001fb0(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  while (uVar1 = param_3 - 0x10, 0xf < param_3) {
    uVar6 = *param_2;
    uVar7 = param_2[1];
    uVar8 = param_2[2];
    uVar9 = param_2[3];
    param_2 = param_2 + 4;
    *param_1 = uVar6;
    param_1[1] = uVar7;
    param_1[2] = uVar8;
    param_1[3] = uVar9;
    param_1 = param_1 + 4;
    param_3 = uVar1;
  }
  if ((uVar1 & 8) != 0) {
    uVar6 = *param_2;
    uVar7 = param_2[1];
    param_2 = param_2 + 2;
    *param_1 = uVar6;
    param_1[1] = uVar7;
    param_1 = param_1 + 2;
  }
  puVar2 = param_1;
  puVar4 = param_2;
  if ((int)(param_3 << 0x1d) < 0) {
    puVar4 = param_2 + 1;
    puVar2 = param_1 + 1;
    *param_1 = *param_2;
  }
  puVar3 = puVar2;
  puVar5 = puVar4;
  if ((uVar1 & 2) != 0) {
    puVar5 = (undefined4 *)((int)puVar4 + 2);
    puVar3 = (undefined4 *)((int)puVar2 + 2);
    *(undefined2 *)puVar2 = *(undefined2 *)puVar4;
  }
  if ((int)(param_3 << 0x1f) < 0) {
    *(undefined1 *)puVar3 = *(undefined1 *)puVar5;
  }
  return;
}



// ==== FUN_08002038 @ 08002038 ====

uint FUN_08002038(uint *param_1,uint *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint in_r12;
  uint uVar3;
  bool bVar4;
  
  uVar1 = 0;
  while (((uint)param_1 & 3) != 0) {
    bVar4 = param_3 != 0;
    param_3 = param_3 - 1;
    uVar2 = param_3;
    if (bVar4) {
      in_r12 = (uint)(byte)*param_2;
      uVar1 = (byte)*param_1 - in_r12;
      uVar2 = uVar1;
      param_2 = (uint *)((int)param_2 + 1);
      param_1 = (uint *)((int)param_1 + 1);
    }
    if (uVar2 != 0) {
      return uVar1;
    }
  }
  if (((uint)param_2 & 3) == 0) {
    do {
      uVar3 = param_3;
      uVar2 = uVar3 - 4;
      bVar4 = uVar2 == 0;
      if (3 < uVar3) {
        uVar1 = *param_1;
        in_r12 = *param_2;
        bVar4 = uVar1 == in_r12;
        param_2 = param_2 + 1;
        param_1 = param_1 + 1;
      }
      param_3 = uVar2;
    } while (bVar4);
    param_3 = uVar3;
    if (uVar2 < 0xfffffffc) {
      uVar1 = uVar1 << 0x18 | (uVar1 >> 8 & 0xff) << 0x10 | (uVar1 >> 0x10 & 0xff) << 8 |
              uVar1 >> 0x18;
      uVar3 = in_r12 << 0x18 | (in_r12 >> 8 & 0xff) << 0x10 | (in_r12 >> 0x10 & 0xff) << 8 |
              in_r12 >> 0x18;
      uVar2 = uVar1 - uVar3;
      bVar4 = uVar2 != 0;
      if (uVar1 < uVar3) {
        uVar2 = 0xffffffff;
      }
      if (uVar1 >= uVar3 && bVar4) {
        uVar2 = 1;
      }
      return uVar2;
    }
  }
  do {
    uVar3 = param_3;
    uVar2 = uVar3 - 1;
    if (uVar3 != 0) {
      uVar1 = (uint)(byte)*param_1 - (uint)(byte)*param_2;
      uVar2 = uVar1;
      param_2 = (uint *)((int)param_2 + 1);
      param_1 = (uint *)((int)param_1 + 1);
    }
    param_3 = uVar3 - 1;
  } while (uVar2 == 0);
  if (uVar3 == 0) {
    uVar1 = 0;
  }
  return uVar1;
}



// ==== FUN_080020a0 @ 080020a0 ====

uint * FUN_080020a0(int param_1,uint param_2,uint param_3)

{
  undefined1 uVar1;
  undefined2 uVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar5 = (param_3 & 0xff) << 8;
  uVar4 = param_3 & 0xff | uVar5;
  uVar5 = uVar4 | (param_3 & 0xffff00ff | uVar5) << 0x10;
  puVar3 = (uint *)(param_1 + param_2);
  uVar6 = (uint)puVar3 & 3;
  uVar1 = (undefined1)param_3;
  uVar2 = (undefined2)uVar4;
  if (uVar6 != 0) {
    uVar4 = param_2 - uVar6;
    if (param_2 < uVar6) {
      if (uVar4 + uVar6 != 0) {
        puVar3 = (uint *)((int)puVar3 + -1);
        *(undefined1 *)puVar3 = uVar1;
      }
      if ((uVar4 + uVar6 & 2) != 0) {
        puVar3 = (uint *)((int)puVar3 + -1);
        *(undefined1 *)puVar3 = uVar1;
      }
      return puVar3;
    }
    uVar6 = (uint)puVar3 & 2;
    if ((int)puVar3 * -0x80000000 < 0) {
      puVar3 = (uint *)((int)puVar3 + -1);
      *(undefined1 *)puVar3 = uVar1;
    }
    param_2 = uVar4;
    if (uVar6 != 0) {
      puVar3 = (uint *)((int)puVar3 + -2);
      *(undefined2 *)puVar3 = uVar2;
    }
  }
  do {
    uVar4 = param_2;
    param_2 = uVar4 - 0x10;
    if (0xf < uVar4) {
      puVar3[-1] = uVar5;
      puVar3[-2] = uVar5;
      puVar3[-3] = uVar5;
      puVar3 = puVar3 + -4;
      *puVar3 = uVar5;
    }
  } while (0xf < uVar4 && param_2 != 0);
  if ((param_2 & 8) != 0) {
    puVar3[-1] = uVar5;
    puVar3 = puVar3 + -2;
    *puVar3 = uVar5;
  }
  if ((int)(uVar4 * 0x20000000) < 0) {
    puVar3 = puVar3 + -1;
    *puVar3 = uVar5;
  }
  if ((uVar4 * 0x20000000 & 0x40000000) != 0) {
    puVar3 = (uint *)((int)puVar3 + -2);
    *(undefined2 *)puVar3 = uVar2;
  }
  if ((int)(uVar4 * -0x80000000) < 0) {
    puVar3 = (uint *)((int)puVar3 + -1);
    *(undefined1 *)puVar3 = uVar1;
  }
  return puVar3;
}



// ==== FUN_08002108 @ 08002108 ====

char * FUN_08002108(char *param_1,char param_2)

{
  char cVar1;
  
  cVar1 = *param_1;
  while ((cVar1 != '\0' && (cVar1 != param_2))) {
    param_1 = param_1 + 1;
    cVar1 = *param_1;
  }
  if (cVar1 != param_2) {
    param_1 = (char *)0x0;
  }
  return param_1;
}



// ==== FUN_08002120 @ 08002120 ====

void FUN_08002120(void)

{
  uint *puVar1;
  undefined4 uVar2;
  uint local_30 [5];
  undefined4 local_1c [5];
  
  puVar1 = DAT_080026d8;
  *DAT_080026d8 = *DAT_080026d8 | 1;
  *puVar1 = *puVar1 | 2;
  puVar1[4] = puVar1[4] | 0x4000;
  local_30[0] = puVar1[4] & 0x4000;
  FUN_08001fb0(local_30,&DAT_080026f0,0x14);
  FUN_08002704(local_1c,0x14);
  uVar2 = DAT_080026dc;
  local_30[0] = 0xe000;
  FUN_0800270c(DAT_080026dc,local_30);
  local_30[1] = 1;
  local_30[2] = 1;
  local_30[3] = 0;
  local_30[0] = 0x1000;
  FUN_0800270c(uVar2,local_30);
  local_1c[0] = 2;
  FUN_0800270c(DAT_080026e0,local_1c);
  return;
}



// ==== FUN_08002208 @ 08002208 ====

void FUN_08002208(void)

{
  FUN_08002896(DAT_080026dc,0x1000,0);
  return;
}



// ==== FUN_08002216 @ 08002216 ====

void FUN_08002216(void)

{
  FUN_08002896(DAT_080026dc,0x1000,1);
  return;
}



// ==== FUN_08002224 @ 08002224 ====

undefined8 FUN_08002224(undefined4 param_1)

{
  byte local_c [4];
  undefined4 uStack_8;
  
  local_c[0] = 0;
  uStack_8 = param_1;
  FUN_08002946(DAT_080026e4,&uStack_8,local_c,1);
  return CONCAT44(1000,(uint)local_c[0]);
}



// ==== FUN_08002248 @ 08002248 ====

undefined8 FUN_08002248(void)

{
  int iVar1;
  undefined4 unaff_r7;
  
  iVar1 = FUN_08002886(DAT_080026e0,2);
  return CONCAT44(unaff_r7,~-(uint)(iVar1 == 0) >> 0x1f);
}



// ==== FUN_0800225e @ 0800225e ====

undefined4 FUN_0800225e(void)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    iVar1 = FUN_08002224(0xff);
    if (iVar1 == 0xff) {
      return 0;
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0xffffff);
  return 1;
}



// ==== FUN_08002280 @ 08002280 ====

void FUN_08002280(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  FUN_08002120();
  puVar1 = DAT_080026e4;
  *DAT_080026e4 = DAT_080026e8;
  puVar1[7] = 0x38;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 7;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[8] = 0;
  puVar1[1] = 0x104;
  puVar1[6] = 0x200;
  puVar1[9] = 0;
  iVar2 = FUN_080028c4(puVar1);
  if (iVar2 != 0) {
    FUN_08002c4a();
  }
  *(uint *)*puVar1 = *(uint *)*puVar1 | 0x40;
  return;
}



// ==== FUN_0800228c @ 0800228c ====

void FUN_0800228c(void)

{
  undefined4 unaff_r7;
  
  FUN_08002216();
  FUN_08002224(0xff,unaff_r7);
  return;
}



// ==== FUN_0800229a @ 0800229a ====

longlong FUN_0800229a(void)

{
  int iVar1;
  uint unaff_r7;
  
  FUN_08002208();
  iVar1 = FUN_0800225e();
  if (iVar1 == 0) {
    return (ulonglong)unaff_r7 << 0x20;
  }
  FUN_0800228c();
  return CONCAT44(unaff_r7,1);
}



// ==== FUN_080022b4 @ 080022b4 ====

longlong FUN_080022b4(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  short sVar2;
  
  for (sVar2 = -1; (iVar1 = FUN_08002224(0xff), iVar1 != param_1 && (sVar2 != 0));
      sVar2 = sVar2 + -1) {
  }
  if (sVar2 == 0) {
    return CONCAT44(param_4,0xff);
  }
  return (ulonglong)param_4 << 0x20;
}



// ==== FUN_080022e2 @ 080022e2 ====

longlong FUN_080022e2(undefined1 *param_1,short param_2,undefined4 param_3,uint param_4)

{
  undefined1 uVar1;
  int iVar2;
  
  iVar2 = FUN_080022b4(0xfe);
  if (iVar2 != 0) {
    return CONCAT44(param_4,1);
  }
  while (param_2 != 0) {
    uVar1 = FUN_08002224(0xff);
    *param_1 = uVar1;
    param_1 = param_1 + 1;
    param_2 = param_2 + -1;
  }
  FUN_08002224(0xff);
  FUN_08002224(0xff);
  return (ulonglong)param_4 << 0x20;
}



// ==== FUN_0800231a @ 0800231a ====

longlong FUN_0800231a(int param_1,int param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  ushort uVar3;
  
  iVar1 = FUN_0800225e();
  if (iVar1 != 0) {
    return CONCAT44(param_4,1);
  }
  FUN_08002224(param_2);
  if (param_2 != 0xfd) {
    for (uVar3 = 0; uVar3 < 0x200; uVar3 = uVar3 + 1) {
      FUN_08002224(*(undefined1 *)(param_1 + (uint)uVar3));
    }
    FUN_08002224(0xff);
    FUN_08002224(0xff);
    uVar2 = FUN_08002224(0xff);
    if ((uVar2 & 0x1f) != 5) {
      return CONCAT44(param_4,2);
    }
  }
  return (ulonglong)param_4 << 0x20;
}



// ==== FUN_0800236e @ 0800236e ====

int FUN_0800236e(uint param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  
  FUN_0800228c();
  iVar1 = FUN_0800229a();
  if (iVar1 != 0) {
    return 0xff;
  }
  FUN_08002224(param_1 | 0x40);
  FUN_08002224(param_2 >> 0x18);
  FUN_08002224(param_2 >> 0x10 & 0xff);
  FUN_08002224(param_2 >> 8 & 0xff);
  FUN_08002224(param_2 & 0xff);
  FUN_08002224(param_3);
  if (param_1 == 0xc) {
    FUN_08002224(0xff);
  }
  cVar2 = '\x1f';
  do {
    iVar1 = FUN_08002224(0xff);
    if (-1 < iVar1 << 0x18) {
      return iVar1;
    }
    bVar3 = cVar2 != '\0';
    cVar2 = cVar2 + -1;
  } while (bVar3);
  return iVar1;
}



// ==== FUN_080023da @ 080023da ====

undefined8 FUN_080023da(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_0800236e(9,0,1);
  if (iVar1 == 0) {
    iVar1 = FUN_080022e2(param_1,0x10);
  }
  FUN_0800228c();
  return CONCAT44(param_4,~-(uint)(iVar1 == 0) >> 0x1f);
}



// ==== FUN_08002406 @ 08002406 ====

int FUN_08002406(void)

{
  int iVar1;
  uint in_r3;
  uint unaff_r4;
  uint unaff_r5;
  uint local_18;
  
  local_18 = in_r3;
  iVar1 = FUN_080023da(&local_18);
  if (iVar1 == 0) {
    if ((local_18 & 0xc0) == 0x40) {
      iVar1 = ((unaff_r5 >> 8 & 0xff) + (unaff_r5 & 0xff) * 0x100 + 1 & 0xffff) << 10;
    }
    else {
      iVar1 = (unaff_r4 >> 0x10 & 3) * 0x400 + (unaff_r4 >> 0x18) * 4 + (unaff_r5 >> 6 & 3) + 1 <<
              (((unaff_r5 >> 8 & 3) * 2 + (unaff_r4 >> 8 & 0xf) + (unaff_r5 >> 0x17 & 1)) - 7 & 0xff
              );
    }
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}



// ==== FUN_08002468 @ 08002468 ====

undefined8 FUN_08002468(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  char *pcVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  ushort uVar5;
  short sVar6;
  short sVar7;
  bool bVar8;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  local_20 = param_3;
  uStack_1c = param_4;
  FUN_08002280();
  for (uVar5 = 0; uVar5 < 10; uVar5 = uVar5 + 1) {
    FUN_08002224(0xff);
  }
  sVar6 = 0x14;
  do {
    iVar3 = FUN_0800236e(0,0,0x95);
    pcVar1 = DAT_080026ec;
    if (iVar3 == 1) break;
    bVar8 = sVar6 != 0;
    sVar6 = sVar6 + -1;
  } while (bVar8);
  *DAT_080026ec = '\0';
  if (iVar3 == 1) {
    iVar4 = FUN_0800236e(8,0x1aa,0x87);
    if (iVar4 == 1) {
      for (uVar5 = 0; uVar5 < 4; uVar5 = uVar5 + 1) {
        uVar2 = FUN_08002224(0xff);
        *(undefined1 *)((int)&local_20 + (uint)uVar5) = uVar2;
      }
      if ((local_20._2_1_ == '\x01') && (local_20._3_1_ == -0x56)) {
        sVar6 = -2;
        do {
          FUN_0800236e(0x37,0,1);
          iVar3 = FUN_0800236e(0x29,0x40000000,1);
          sVar7 = sVar6;
          if (iVar3 == 0) break;
          sVar7 = sVar6 + -1;
          bVar8 = sVar6 != 0;
          sVar6 = sVar7;
        } while (bVar8);
        if ((sVar7 != 0) && (iVar4 = FUN_0800236e(0x3a,0,1), iVar4 == 0)) {
          for (uVar5 = 0; uVar5 < 4; uVar5 = uVar5 + 1) {
            uVar2 = FUN_08002224(0xff);
            *(undefined1 *)((int)&local_20 + (uint)uVar5) = uVar2;
          }
          if (local_20 << 0x19 < 0) {
            *pcVar1 = '\x06';
          }
          else {
            *pcVar1 = '\x04';
          }
        }
      }
    }
    else {
      FUN_0800236e(0x37,0,1);
      iVar3 = FUN_0800236e(0x29,0,1);
      if (iVar3 < 2) {
        *pcVar1 = '\x02';
        sVar6 = -2;
        do {
          FUN_0800236e(0x37,0,1);
          iVar3 = FUN_0800236e(0x29,0,1);
          sVar7 = sVar6;
          if (iVar3 == 0) break;
          sVar7 = sVar6 + -1;
          bVar8 = sVar6 != 0;
          sVar6 = sVar7;
        } while (bVar8);
      }
      else {
        *pcVar1 = '\x01';
        sVar6 = -2;
        do {
          iVar3 = FUN_0800236e(1,0);
          sVar7 = sVar6;
          if (iVar3 == 0) break;
          sVar7 = sVar6 + -1;
          bVar8 = sVar6 != 0;
          sVar6 = sVar7;
        } while (bVar8);
      }
      if ((sVar7 == 0) || (iVar4 = FUN_0800236e(0x10,0x200,1), iVar4 != 0)) {
        *pcVar1 = '\0';
      }
    }
  }
  FUN_0800228c();
  if (*pcVar1 == '\0') {
    if (iVar3 == 0) {
      iVar3 = 0xaa;
    }
  }
  else {
    iVar3 = 0;
  }
  return CONCAT44(local_20,iVar3);
}



// ==== FUN_080025ea @ 080025ea ====

int FUN_080025ea(int param_1,int param_2,uint param_3)

{
  int iVar1;
  
  if (*DAT_080026ec != '\x06') {
    param_2 = param_2 << 9;
  }
  if (param_3 == 1) {
    iVar1 = FUN_0800236e(0x11,param_2,1);
    if (iVar1 == 0) {
      iVar1 = FUN_080022e2(param_1,0x200);
    }
  }
  else {
    FUN_0800236e(0x12,param_2,1);
    do {
      iVar1 = FUN_080022e2(param_1,0x200);
      param_1 = param_1 + 0x200;
      param_3 = param_3 - 1;
      if ((param_3 & 0xff) == 0) break;
    } while (iVar1 == 0);
    FUN_0800236e(0xc,0,1);
  }
  FUN_0800228c();
  return iVar1;
}



// ==== FUN_08002652 @ 08002652 ====

int FUN_08002652(int param_1,int param_2,uint param_3)

{
  int iVar1;
  
  if (*DAT_080026ec != '\x06') {
    param_2 = param_2 << 9;
  }
  if (param_3 == 1) {
    iVar1 = FUN_0800236e(0x18,param_2,1);
    if (iVar1 == 0) {
      iVar1 = FUN_0800231a(param_1,0xfe);
    }
  }
  else {
    if (*DAT_080026ec != '\x01') {
      FUN_0800236e(0x37,0,1);
      FUN_0800236e(0x17,param_3,1);
    }
    iVar1 = FUN_0800236e(0x19,param_2,1);
    if (iVar1 == 0) {
      do {
        iVar1 = FUN_0800231a(param_1,0xfc);
        param_1 = param_1 + 0x200;
        param_3 = param_3 - 1;
        if ((param_3 & 0xff) == 0) break;
      } while (iVar1 == 0);
      iVar1 = FUN_0800231a(0,0xfd);
    }
  }
  FUN_0800228c();
  return iVar1;
}



// ==== FUN_08002704 @ 08002704 ====

undefined4 * FUN_08002704(undefined4 *param_1,uint param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  do {
    uVar3 = param_2;
    param_2 = uVar3 - 0x10;
    if (0xf < uVar3) {
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      param_1 = param_1 + 4;
    }
  } while (0xf < uVar3 && param_2 != 0);
  if ((param_2 & 8) != 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1 = param_1 + 2;
  }
  puVar2 = param_1;
  if ((int)(uVar3 << 0x1d) < 0) {
    puVar2 = param_1 + 1;
    *param_1 = 0;
  }
  puVar1 = puVar2;
  if ((param_2 & 2) != 0) {
    puVar1 = (undefined4 *)((int)puVar2 + 2);
    *(undefined2 *)puVar2 = 0;
  }
  puVar2 = puVar1;
  if ((int)(uVar3 * -0x80000000) < 0) {
    puVar2 = (undefined4 *)((int)puVar1 + 1);
    *(undefined1 *)puVar1 = 0;
  }
  return puVar2;
}



// ==== FUN_0800270c @ 0800270c ====

uint FUN_0800270c(uint *param_1,uint *param_2,undefined4 param_3,uint param_4)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint local_18;
  
  local_18 = param_4;
  for (uVar3 = 0; uVar3 < 0x10; uVar3 = uVar3 + 1) {
    uVar7 = 1 << (uVar3 & 0xff);
    uVar2 = *param_2 & uVar7;
    if (uVar2 == uVar7) {
      uVar4 = uVar3 << 1;
      uVar5 = ~(3 << (uVar4 & 0xff));
      uVar6 = param_2[1];
      if ((((uVar6 == 1) || (uVar6 == 2)) || (uVar6 == 0x11)) || (uVar6 == 0x12)) {
        param_1[2] = param_2[3] << (uVar4 & 0xff) | param_1[2] & uVar5;
        param_1[1] = param_1[1] & ~uVar7 | ((param_2[1] & 0x1f) >> 4) << (uVar3 & 0xff);
      }
      param_1[3] = param_1[3] & uVar5 | param_2[2] << (uVar4 & 0xff);
      if ((param_2[1] == 2) || (param_2[1] == 0x12)) {
        iVar8 = (uVar3 & 7) << 2;
        param_1[(uVar3 >> 3) + 8] =
             param_2[4] << iVar8 | param_1[(uVar3 >> 3) + 8] & ~(0xf << iVar8);
      }
      *param_1 = *param_1 & uVar5 | ((byte)param_2[1] & 3) << (uVar4 & 0xff);
      puVar1 = DAT_080028ac;
      if ((int)(param_2[1] << 3) < 0) {
        *DAT_080028ac = *DAT_080028ac | 0x4000;
        local_18 = *puVar1 & 0x4000;
        iVar8 = (uVar3 & 3) << 2;
        if (param_1 == DAT_080028b4) {
          iVar9 = 0;
        }
        else if (param_1 == DAT_080028b8) {
          iVar9 = 1;
        }
        else if (param_1 == DAT_080028bc) {
          iVar9 = 2;
        }
        else if (param_1 == DAT_080028c0) {
          iVar9 = 3;
        }
        else if (param_1 == DAT_080028a4) {
          iVar9 = 4;
        }
        else {
          iVar9 = 7;
        }
        *(uint *)(DAT_080028b0 + (uVar3 >> 2) * 4) =
             iVar9 << iVar8 | *(uint *)(DAT_080028b0 + (uVar3 >> 2) * 4) & ~(0xf << iVar8);
        puVar1 = DAT_080028a8;
        uVar7 = ~uVar2;
        uVar4 = *DAT_080028a8 & uVar7;
        if ((int)(param_2[1] << 0xf) < 0) {
          uVar4 = uVar4 | uVar2;
        }
        *DAT_080028a8 = uVar4;
        uVar4 = puVar1[1] & uVar7;
        if ((int)(param_2[1] << 0xe) < 0) {
          uVar4 = uVar4 | uVar2;
        }
        puVar1[1] = uVar4;
        uVar4 = puVar1[2] & uVar7;
        if ((int)(param_2[1] << 0xb) < 0) {
          uVar4 = uVar4 | uVar2;
        }
        puVar1[2] = uVar4;
        uVar7 = puVar1[3] & uVar7;
        if ((int)(param_2[1] << 10) < 0) {
          uVar7 = uVar7 | uVar2;
        }
        puVar1[3] = uVar7;
      }
    }
  }
  return local_18;
}



// ==== FUN_08002886 @ 08002886 ====

uint FUN_08002886(int param_1,uint param_2)

{
  return ~-(uint)((param_2 & *(uint *)(param_1 + 0x10)) == 0) >> 0x1f;
}



// ==== FUN_08002896 @ 08002896 ====

void FUN_08002896(int param_1,int param_2,int param_3)

{
  if (param_3 != 0) {
    *(int *)(param_1 + 0x18) = param_2;
    return;
  }
  *(int *)(param_1 + 0x18) = param_2 << 0x10;
  return;
}



// ==== FUN_080028c4 @ 080028c4 ====

longlong FUN_080028c4(int *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  if (param_1 == (int *)0x0) {
    return CONCAT44(param_4,1);
  }
  param_1[10] = 0;
  if (*(char *)((int)param_1 + 0x51) == '\0') {
    *(undefined1 *)(param_1 + 0x14) = 0;
    FUN_08002c4e(param_1);
  }
  *(undefined1 *)((int)param_1 + 0x51) = 2;
  *(uint *)*param_1 = *(uint *)*param_1 & 0xffffffbf;
  *(uint *)*param_1 =
       param_1[1] | param_1[2] | param_1[3] | param_1[4] | param_1[5] | param_1[6] & 0x200U |
       param_1[7] | param_1[8] | param_1[10];
  *(uint *)(*param_1 + 4) = (uint)param_1[6] >> 0x10 & 4 | param_1[9];
  *(uint *)(*param_1 + 0x1c) = *(uint *)(*param_1 + 0x1c) & 0xfffff7ff;
  param_1[0x15] = 0;
  *(undefined1 *)((int)param_1 + 0x51) = 1;
  return (ulonglong)param_4 << 0x20;
}



// ==== FUN_08002946 @ 08002946 ====

undefined8 FUN_08002946(int *param_1,int param_2,int param_3,int param_4,uint param_5)

{
  undefined2 uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  int *piVar6;
  undefined4 uVar7;
  int local_28;
  
  bVar2 = true;
  uVar7 = 0;
  piVar6 = param_1 + 0x14;
  local_28 = param_3;
  if ((char)*piVar6 == '\x01') {
    uVar7 = 2;
    goto LAB_08002b38;
  }
  *(char *)piVar6 = '\x01';
  iVar3 = FUN_08002c50();
  if ((*(char *)((int)param_1 + 0x51) == '\x01') ||
     (((param_1[1] == 0x104 && (param_1[2] == 0)) && (*(char *)((int)param_1 + 0x51) == '\x04')))) {
    if (((param_2 == 0) || (param_3 == 0)) || (param_4 == 0)) {
      uVar7 = 1;
    }
    else {
      if (*(char *)((int)param_1 + 0x51) != '\x04') {
        *(undefined1 *)((int)param_1 + 0x51) = 5;
      }
      param_1[0x15] = 0;
      param_1[0xe] = param_3;
      uVar1 = (undefined2)param_4;
      *(undefined2 *)((int)param_1 + 0x3e) = uVar1;
      *(undefined2 *)(param_1 + 0xf) = uVar1;
      param_1[0xc] = param_2;
      *(undefined2 *)((int)param_1 + 0x36) = uVar1;
      *(undefined2 *)(param_1 + 0xd) = uVar1;
      param_1[0x10] = 0;
      param_1[0x11] = 0;
      puVar5 = (uint *)*param_1;
      if (-1 < (int)(*puVar5 << 0x19)) {
        *puVar5 = *puVar5 | 0x40;
      }
      if (param_1[3] == 0x800) {
        if ((param_1[1] == 0) || (param_4 == 1)) {
          *(uint *)(*param_1 + 0xc) = (uint)*(ushort *)param_1[0xc];
          param_1[0xc] = param_1[0xc] + 2;
          *(short *)((int)param_1 + 0x36) = *(short *)((int)param_1 + 0x36) + -1;
        }
        do {
          if ((*(short *)((int)param_1 + 0x36) == 0) && (*(short *)((int)param_1 + 0x3e) == 0))
          goto LAB_08002b00;
          if (((*(int *)(*param_1 + 8) << 0x1e < 0) && (*(short *)((int)param_1 + 0x36) != 0)) &&
             (bVar2)) {
            *(uint *)(*param_1 + 0xc) = (uint)*(ushort *)param_1[0xc];
            param_1[0xc] = param_1[0xc] + 2;
            *(short *)((int)param_1 + 0x36) = *(short *)((int)param_1 + 0x36) + -1;
            bVar2 = false;
          }
          if ((*(int *)(*param_1 + 8) << 0x1f < 0) && (*(short *)((int)param_1 + 0x3e) != 0)) {
            *(short *)param_1[0xe] = (short)*(undefined4 *)(*param_1 + 0xc);
            param_1[0xe] = param_1[0xe] + 2;
            *(short *)((int)param_1 + 0x3e) = *(short *)((int)param_1 + 0x3e) + -1;
            bVar2 = true;
          }
          iVar4 = FUN_08002c50();
        } while (((uint)(iVar4 - iVar3) < param_5) || (param_5 == 0xffffffff));
      }
      else {
        if ((param_1[1] == 0) || (param_4 == 1)) {
          *(undefined1 *)(*param_1 + 0xc) = *(undefined1 *)param_1[0xc];
          param_1[0xc] = param_1[0xc] + 1;
          *(short *)((int)param_1 + 0x36) = *(short *)((int)param_1 + 0x36) + -1;
        }
        do {
          if ((*(short *)((int)param_1 + 0x36) == 0) && (*(short *)((int)param_1 + 0x3e) == 0))
          goto LAB_08002b00;
          if ((*(int *)(*param_1 + 8) << 0x1e < 0) &&
             ((*(short *)((int)param_1 + 0x36) != 0 && (bVar2)))) {
            *(undefined1 *)(*param_1 + 0xc) = *(undefined1 *)param_1[0xc];
            param_1[0xc] = param_1[0xc] + 1;
            *(short *)((int)param_1 + 0x36) = *(short *)((int)param_1 + 0x36) + -1;
            bVar2 = false;
          }
          if ((*(int *)(*param_1 + 8) << 0x1f < 0) && (*(short *)((int)param_1 + 0x3e) != 0)) {
            *(char *)param_1[0xe] = (char)*(undefined4 *)(*param_1 + 0xc);
            param_1[0xe] = param_1[0xe] + 1;
            *(short *)((int)param_1 + 0x3e) = *(short *)((int)param_1 + 0x3e) + -1;
            bVar2 = true;
          }
          iVar4 = FUN_08002c50();
        } while ((((uint)(iVar4 - iVar3) < param_5) || (param_5 == 0xffffffff)) && (param_5 != 0));
      }
      uVar7 = 3;
    }
  }
  else {
    uVar7 = 2;
  }
  goto LAB_08002b2e;
LAB_08002b00:
  iVar3 = FUN_08002bd4(param_1,param_5,iVar3);
  if (iVar3 == 0) {
    if (param_1[2] == 0) {
      local_28 = *(int *)(*param_1 + 8);
    }
  }
  else {
    uVar7 = 1;
    param_1[0x15] = 0x20;
  }
LAB_08002b2e:
  *(undefined1 *)((int)param_1 + 0x51) = 1;
  *(char *)piVar6 = '\0';
LAB_08002b38:
  return CONCAT44(local_28,uVar7);
}



// ==== FUN_08002b3c @ 08002b3c ====

undefined4 FUN_08002b3c(int *param_1,uint param_2,uint param_3,uint param_4,int param_5)

{
  int iVar1;
  
  do {
    if (((*(uint *)(*param_1 + 8) & param_2) == param_2) == param_3) {
      return 0;
    }
  } while ((param_4 == 0xffffffff) ||
          ((iVar1 = FUN_08002c50(), (uint)(iVar1 - param_5) < param_4 && (param_4 != 0))));
  *(uint *)(*param_1 + 4) = *(uint *)(*param_1 + 4) & 0xffffff1f;
  if ((param_1[1] == 0x104) && ((param_1[2] == 0x8000 || (param_1[2] == 0x400)))) {
    *(uint *)*param_1 = *(uint *)*param_1 & 0xffffffbf;
  }
  if (param_1[10] == 0x2000) {
    *(uint *)*param_1 = *(uint *)*param_1 & 0xffffdfff;
    *(uint *)*param_1 = *(uint *)*param_1 | 0x2000;
  }
  *(undefined1 *)((int)param_1 + 0x51) = 1;
  *(undefined1 *)(param_1 + 0x14) = 0;
  return 3;
}



// ==== FUN_08002bd4 @ 08002bd4 ====

longlong FUN_08002bd4(int *param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (int)(((ulonglong)*DAT_08002c30 / 0x18) / (ulonglong)DAT_08002c34) * 1000;
  if (param_1[1] == 0x104) {
    iVar1 = FUN_08002b3c(param_1,0x80,0,param_2,param_3,param_4);
    uVar2 = param_3;
    if (iVar1 != 0) {
      param_1[0x15] = param_1[0x15] | 0x20;
      return CONCAT44(param_3,3);
    }
  }
  else {
    do {
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
    } while (*(int *)(*param_1 + 8) << 0x18 < 0);
  }
  return (ulonglong)uVar2 << 0x20;
}



// ==== FUN_08002c38 @ 08002c38 ====

void FUN_08002c38(void)

{
  int iVar1;
  undefined4 unaff_r7;
  
  thunk_FUN_08002cd8();
  iVar1 = FUN_08002c76(*DAT_08002cd4 / 1000);
  if (iVar1 != 0) {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  FUN_08002c5c(0xffffffff,0,unaff_r7);
  return;
}



// ==== thunk_FUN_08002cd8 @ 08002c46 ====

void thunk_FUN_08002cd8(void)

{
  *DAT_08002cec = *DAT_08002cec | 0xf00000;
  *DAT_08002cf0 = 0x8000000;
  return;
}



// ==== FUN_08002c4a @ 08002c4a ====

void FUN_08002c4a(void)

{
  disableIRQinterrupts();
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// ==== FUN_08002c4e @ 08002c4e ====

void FUN_08002c4e(void)

{
  return;
}



// ==== FUN_08002c50 @ 08002c50 ====

undefined4 FUN_08002c50(void)

{
  return *(undefined4 *)(DAT_08002c58 + 4);
}



// ==== FUN_08002c5c @ 08002c5c ====

void FUN_08002c5c(uint param_1,char param_2)

{
  if ((int)param_1 < 0) {
    *(char *)(DAT_08002cc8 + (param_1 & 0xf) + -4) = param_2 << 4;
    return;
  }
  *(char *)(DAT_08002ccc + param_1) = param_2 << 4;
  return;
}



// ==== FUN_08002c76 @ 08002c76 ====

undefined8 FUN_08002c76(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  uint uVar2;
  
  puVar1 = DAT_08002cd0;
  uVar2 = param_1 - 1;
  if (uVar2 < 0x1000000) {
    DAT_08002cd0[1] = uVar2;
    FUN_08002c5c(0xffffffff,0xf);
    puVar1[2] = 0;
    *puVar1 = 7;
  }
  return CONCAT44(param_4,~-(uint)(uVar2 < 0x1000000) >> 0x1f);
}



// ==== FUN_08002cd8 @ 08002cd8 ====

void FUN_08002cd8(void)

{
  *DAT_08002cec = *DAT_08002cec | 0xf00000;
  *DAT_08002cf0 = 0x8000000;
  return;
}



// ==== FUN_08003006 @ 08003006 ====

undefined4 FUN_08003006(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  short sVar1;
  uint *puVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  code *UNRECOVERED_JUMPTABLE;
  ushort *puVar6;
  uint uVar7;
  uint uVar8;
  
  puVar2 = (uint *)*param_1;
  uVar5 = *puVar2;
  uVar7 = puVar2[3];
  uVar8 = puVar2[5];
  if ((((uVar5 & 0xf) == 0) && ((int)(uVar5 << 0x1a) < 0)) && ((int)(uVar7 << 0x1a) < 0)) {
    uVar3 = FUN_080031bc(param_1,param_4);
    return uVar3;
  }
  if (((uVar5 & 0xf) == 0) || ((-1 < (int)(uVar8 << 0x1f) && ((uVar7 & 0x120) == 0)))) {
    if (((int)(uVar5 << 0x18) < 0) && ((int)(uVar7 << 0x18) < 0)) {
      if (*(char *)((int)param_1 + 0x39) != '!') {
        return 2;
      }
      puVar6 = (ushort *)param_1[8];
      if (param_1[2] == 0x1000) {
        *(uint *)(*param_1 + 4) = *puVar6 & 0x1ff;
        if (param_1[4] == 0) {
          param_1[8] = param_1[8] + 2;
        }
        else {
          param_1[8] = param_1[8] + 1;
        }
      }
      else {
        param_1[8] = (int)((int)puVar6 + 1);
        *(uint *)(*param_1 + 4) = (uint)(byte)*puVar6;
      }
      sVar1 = *(short *)((int)param_1 + 0x26) + -1;
      *(short *)((int)param_1 + 0x26) = sVar1;
      if (sVar1 == 0) {
        *(uint *)(*param_1 + 0xc) = *(uint *)(*param_1 + 0xc) & 0xffffff7f;
        *(uint *)(*param_1 + 0xc) = *(uint *)(*param_1 + 0xc) | 0x40;
      }
      return 0;
    }
    if (((int)(uVar5 << 0x19) < 0) && ((int)(uVar7 << 0x19) < 0)) {
      uVar3 = FUN_080031a2(param_1,param_4);
      return uVar3;
    }
  }
  else {
    if (((int)(uVar5 << 0x1f) < 0) && ((int)(uVar7 << 0x17) < 0)) {
      param_1[0xf] = param_1[0xf] | 1;
    }
    if (((int)(uVar5 << 0x1d) < 0) && ((int)(uVar8 << 0x1f) < 0)) {
      param_1[0xf] = param_1[0xf] | 2;
    }
    if (((int)(uVar5 << 0x1e) < 0) && ((int)(uVar8 << 0x1f) < 0)) {
      param_1[0xf] = param_1[0xf] | 4;
    }
    if (((int)(uVar5 << 0x1c) < 0) && (((int)(uVar7 << 0x1a) < 0 || ((int)(uVar8 << 0x1f) < 0)))) {
      param_1[0xf] = param_1[0xf] | 8;
    }
    if (param_1[0xf] != 0) {
      if (((int)(uVar5 << 0x1a) < 0) && ((int)(uVar7 << 0x1a) < 0)) {
        FUN_080031bc(param_1);
      }
      if ((-1 < param_1[0xf] << 0x1c) && ((*(uint *)(*param_1 + 0x14) >> 6 & 1) == 0)) {
        FUN_08003278(param_1);
        param_1[0xf] = 0;
        return param_4;
      }
      FUN_08003116(param_1);
      iVar4 = *param_1;
      if (*(int *)(iVar4 + 0x14) << 0x19 < 0) {
        *(uint *)(iVar4 + 0x14) = *(uint *)(iVar4 + 0x14) & 0xffffffbf;
        if (param_1[0xd] != 0) {
          *(undefined1 **)(param_1[0xd] + 0x50) = &LAB_08003134_1;
          iVar4 = FUN_08003254(param_1[0xd]);
          if (iVar4 == 0) {
            return param_4;
          }
          UNRECOVERED_JUMPTABLE = *(code **)(param_1[0xd] + 0x50);
                    /* WARNING: Could not recover jumptable at 0x080030dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar3 = (*UNRECOVERED_JUMPTABLE)(param_1[0xd],UNRECOVERED_JUMPTABLE,param_4);
          return uVar3;
        }
      }
      uVar3 = FUN_08003278(param_1,param_4);
      return uVar3;
    }
  }
  return param_4;
}



// ==== FUN_08003116 @ 08003116 ====

void FUN_08003116(int *param_1)

{
  *(uint *)(*param_1 + 0xc) = *(uint *)(*param_1 + 0xc) & 0xfffffedf;
  *(uint *)(*param_1 + 0x14) = *(uint *)(*param_1 + 0x14) & 0xfffffffe;
  *(undefined1 *)((int)param_1 + 0x3a) = 0x20;
  return;
}



// ==== FUN_080031a2 @ 080031a2 ====

longlong FUN_080031a2(int *param_1)

{
  uint unaff_r7;
  
  *(uint *)(*param_1 + 0xc) = *(uint *)(*param_1 + 0xc) & 0xffffffbf;
  *(undefined1 *)((int)param_1 + 0x39) = 0x20;
  FUN_0800327a();
  return (ulonglong)unaff_r7 << 0x20;
}



// ==== FUN_080031bc @ 080031bc ====

longlong FUN_080031bc(int *param_1)

{
  short sVar1;
  ushort *puVar2;
  uint unaff_r7;
  
  if (*(char *)((int)param_1 + 0x3a) != '\"') {
    return CONCAT44(unaff_r7,2);
  }
  puVar2 = (ushort *)param_1[10];
  if (param_1[2] == 0x1000) {
    if (param_1[4] == 0) {
      *puVar2 = (ushort)((uint)(*(int *)(*param_1 + 4) << 0x17) >> 0x17);
      param_1[10] = param_1[10] + 2;
    }
    else {
      *puVar2 = (ushort)*(int *)(*param_1 + 4) & 0xff;
      param_1[10] = param_1[10] + 1;
    }
  }
  else if (param_1[4] == 0) {
    param_1[10] = (int)((int)puVar2 + 1);
    *(byte *)puVar2 = (byte)*(undefined4 *)(*param_1 + 4);
  }
  else {
    param_1[10] = (int)((int)puVar2 + 1);
    *(byte *)puVar2 = (byte)*(undefined4 *)(*param_1 + 4) & 0x7f;
  }
  sVar1 = *(short *)((int)param_1 + 0x2e) + -1;
  *(short *)((int)param_1 + 0x2e) = sVar1;
  if (sVar1 == 0) {
    *(uint *)(*param_1 + 0xc) = *(uint *)(*param_1 + 0xc) & 0xffffffdf;
    *(uint *)(*param_1 + 0xc) = *(uint *)(*param_1 + 0xc) & 0xfffffeff;
    *(uint *)(*param_1 + 0x14) = *(uint *)(*param_1 + 0x14) & 0xfffffffe;
    *(undefined1 *)((int)param_1 + 0x3a) = 0x20;
    FUN_0800327c();
    return (ulonglong)unaff_r7 << 0x20;
  }
  return (ulonglong)unaff_r7 << 0x20;
}



// ==== FUN_08003254 @ 08003254 ====

undefined4 FUN_08003254(undefined4 *param_1)

{
  if (*(char *)((int)param_1 + 0x35) != '\x02') {
    param_1[0x15] = 0x80;
    return 1;
  }
  *(undefined1 *)((int)param_1 + 0x35) = 5;
  *(uint *)*param_1 = *(uint *)*param_1 & 0xfffffffe;
  return 0;
}



// ==== FUN_08003278 @ 08003278 ====

void FUN_08003278(void)

{
  return;
}



// ==== FUN_0800327a @ 0800327a ====

void FUN_0800327a(void)

{
  return;
}



// ==== FUN_0800327c @ 0800327c ====

int FUN_0800327c(int *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  piVar1 = DAT_08003294;
  if (*param_1 != DAT_08003298) {
    return *param_1;
  }
  piVar3 = DAT_08003294 + 0x10;
  piVar4 = DAT_08003294 + 0xe;
  if (*(char *)((int)DAT_08003294 + 0x3a) == ' ') {
    if (piVar3 == (int *)0x0) {
      iVar2 = 1;
    }
    else if ((char)*piVar4 == '\x01') {
      iVar2 = 2;
    }
    else {
      *(char *)piVar4 = '\x01';
      piVar1[10] = (int)piVar3;
      *(undefined2 *)(piVar1 + 0xb) = 1;
      *(undefined2 *)((int)piVar1 + 0x2e) = 1;
      piVar1[0xf] = 0;
      *(undefined1 *)((int)piVar1 + 0x3a) = 0x22;
      *(char *)piVar4 = '\0';
      *(uint *)(*piVar1 + 0xc) = *(uint *)(*piVar1 + 0xc) | 0x100;
      *(uint *)(*piVar1 + 0x14) = *(uint *)(*piVar1 + 0x14) | 1;
      *(uint *)(*piVar1 + 0xc) = *(uint *)(*piVar1 + 0xc) | 0x20;
      iVar2 = 0;
    }
  }
  else {
    iVar2 = 2;
  }
  return iVar2;
}



// ==== thunk_FUN_0800351c @ 0800329c ====

void thunk_FUN_0800351c(void)

{
  uint uVar1;
  uint uVar2;
  undefined4 in_r3;
  undefined4 uStack_28;
  undefined4 auStack_24 [2];
  uint uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  uStack_28 = 0;
  uStack_10 = in_r3;
  uVar1 = FUN_080034dc(DAT_0800356c);
  uVar2 = FUN_080034dc(DAT_08003580);
  FUN_08003742();
  for (; uVar1 <= uVar2; uVar1 = uVar1 + 1) {
    auStack_24[0] = 0;
    uStack_18 = 1;
    uStack_14 = 2;
    uStack_1c = uVar1;
    FUN_080038cc(auStack_24,&uStack_28);
    FUN_0800376c(50000);
  }
  FUN_0800375e();
  return;
}



// ==== FUN_080032a0 @ 080032a0 ====

void FUN_080032a0(int param_1,undefined1 param_2,uint param_3)

{
  ushort uVar1;
  
  for (uVar1 = 0; uVar1 < param_3; uVar1 = uVar1 + 1) {
    *(undefined1 *)(param_1 + (uint)uVar1) = param_2;
  }
  return;
}



// ==== FUN_080032bc @ 080032bc ====

undefined8 FUN_080032bc(undefined4 param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  uint local_18;
  undefined4 uStack_14;
  
  piVar1 = DAT_080034b4;
  piVar4 = DAT_080034b4 + 0x100;
  *piVar4 = DAT_080034b8;
  iVar2 = DAT_080034bc;
  local_18 = param_3;
  uStack_14 = param_4;
  do {
    FUN_080032a0(piVar1,0xff,0x400);
    FUN_08001918(iVar2,piVar1,0x400,&local_18);
    piVar1[0x102] = *(int *)(iVar2 + 0x18);
    piVar3 = DAT_080034c0;
    if (*DAT_080034c0 == 0 && DAT_080034c0[1] == 0) {
      *DAT_080034c0 = *piVar1;
      piVar3[1] = piVar1[1];
    }
    piVar1[0x101] = (int)piVar1;
    FUN_08003584(*piVar4,piVar1,0x100);
    *piVar4 = *piVar4 + 0x400;
  } while (0x3ff < local_18);
  *DAT_080034c4 = *DAT_080034c4 | 0x10;
  return CONCAT44(uStack_14,local_18);
}



// ==== FUN_08003324 @ 08003324 ====

longlong FUN_08003324(void)

{
  int iVar1;
  byte *pbVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  uint in_r3;
  
  puVar3 = DAT_080034c8;
  uVar4 = FUN_080035b4(0x1e);
  *puVar3 = uVar4;
  uVar4 = FUN_080035b4(0x1e);
  puVar3[1] = uVar4;
  FUN_080020a0(*puVar3,0x1e,0);
  FUN_080020a0(puVar3[1],0x1e,0);
  FUN_08003600(*puVar3,puVar3[4]);
  FUN_08003600(puVar3[1],puVar3[5]);
  iVar1 = DAT_080034bc;
  iVar5 = FUN_080016f4(DAT_080034bc,*puVar3,1);
  pbVar2 = DAT_080034c4;
  uVar6 = *(uint *)(iVar1 + 0xc);
  if (DAT_080034cc <= uVar6) {
    return CONCAT44(in_r3,1);
  }
  if (uVar6 < 0x8001) {
    return CONCAT44(in_r3,1);
  }
  if (iVar5 == 0) {
    *(uint *)(DAT_080034d0 + 4) = uVar6;
    thunk_FUN_0800351c();
    *pbVar2 = *pbVar2 | 4;
    return (ulonglong)in_r3 << 0x20;
  }
  *DAT_080034c4 = *DAT_080034c4 & 0xfb;
  return CONCAT44(in_r3,1);
}



// ==== FUN_080033a8 @ 080033a8 ====

int FUN_080033a8(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int local_2a0;
  undefined1 auStack_29c [11];
  byte local_291;
  undefined1 auStack_28f [19];
  undefined1 auStack_27c [8];
  int local_274;
  int local_268;
  int local_25c;
  int local_248 [2];
  int local_240;
  int local_234;
  undefined4 local_228;
  byte local_219;
  undefined1 auStack_214 [512];
  undefined4 local_14;
  undefined4 local_10 [2];
  
  FUN_08001b30(DAT_080034bc);
  puVar1 = DAT_080034c8;
  FUN_08001b58(DAT_080034c8[1]);
  local_10[0] = puVar1[1];
  local_14 = *puVar1;
  FUN_0800129a(local_10);
  iVar2 = FUN_08001422(&local_14,&local_2a0,2);
  if (iVar2 == 0) {
    local_248[0] = local_2a0;
    *(undefined1 **)(local_2a0 + 0xc) = auStack_214;
    iVar2 = FUN_08001218(local_248,local_14);
    if ((iVar2 == 0) && ((local_219 & 0xa0) != 0)) {
      iVar2 = 6;
    }
    if (iVar2 == 0) {
      iVar2 = FUN_08000230(local_248,2);
    }
    if (iVar2 == 0) {
      FUN_08001f90(auStack_29c,local_228,0x20);
      FUN_08001fb0(auStack_27c,local_248,0x34);
      iVar2 = FUN_08001218(auStack_27c,local_10[0]);
      if (iVar2 == 0) {
        if ((local_274 == local_240) && (local_268 == local_234)) {
          iVar2 = 4;
        }
        else {
          iVar2 = 8;
        }
      }
      if ((iVar2 == 4) && (iVar2 = FUN_08000e6a(auStack_27c), iVar2 == 0)) {
        FUN_08001f90(local_25c + 0xd,auStack_28f,0x13);
        *(byte *)(local_25c + 0xb) = local_291;
        if (-1 < (int)((uint)local_291 << 0x1b)) {
          *(byte *)(local_25c + 0xb) = local_291 | 0x20;
        }
        *(undefined1 *)(local_2a0 + 3) = 1;
        if (((int)((uint)*(byte *)(local_25c + 0xb) << 0x1b) < 0) && (local_240 != local_274)) {
          uVar3 = FUN_08000a1e(local_2a0,local_25c);
          iVar2 = FUN_080004a8(local_2a0,uVar3);
          if (iVar2 == 0) {
            iVar2 = 2;
          }
          else {
            iVar2 = FUN_080003de(local_2a0,iVar2);
            if ((iVar2 == 0) && (*(char *)(local_2a0 + 0x55) == '.')) {
              FUN_08000a44(local_2a0,local_2a0 + 0x54,local_274);
              *(undefined1 *)(local_2a0 + 3) = 1;
            }
          }
        }
      }
      if ((iVar2 == 0) && (iVar2 = FUN_08000fa0(local_248), iVar2 == 0)) {
        iVar2 = FUN_08000414(local_2a0);
      }
    }
  }
  return iVar2;
}



// ==== FUN_0800344c @ 0800344c ====

undefined4 FUN_0800344c(void)

{
  bool bVar1;
  undefined4 *puVar2;
  byte *pbVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  code *pcVar7;
  undefined4 extraout_r3;
  undefined4 unaff_r7;
  
  pbVar3 = DAT_080034c4;
  iVar5 = FUN_08003324();
  if (iVar5 == 0) {
    *pbVar3 = *pbVar3 | 8;
    uVar6 = DAT_080034d8;
    FUN_08002896(DAT_080034d8,8,1);
    FUN_080036a0(0x96);
    FUN_08002896(uVar6,8,0);
    FUN_080036a0(0x96);
    FUN_08002896(uVar6,8,1);
    FUN_080036a0(0x96);
    FUN_08002896(uVar6,8,0);
    FUN_080036a0(0x96);
    FUN_080032bc();
    FUN_080033a8();
    FUN_0800369e();
    uVar6 = DAT_080034d8;
    FUN_08002896(DAT_080034d8,8,1);
    FUN_080036a0(0x96);
    FUN_08002896(uVar6,8,0);
    FUN_080036a0(0x32);
    pcVar7 = (code *)DAT_080034c0[1];
    uVar6 = *DAT_080034c0;
    puVar4 = DAT_080034b8;
    unaff_r7 = extraout_r3;
  }
  else {
    *pbVar3 = *pbVar3 & 0xf7;
    FUN_0800369e();
    puVar2 = DAT_080034c0;
    puVar4 = DAT_080034b8;
    uVar6 = *DAT_080034b8;
    *DAT_080034c0 = uVar6;
    pcVar7 = (code *)puVar4[1];
    puVar2[1] = pcVar7;
  }
  *DAT_080034d4 = *DAT_080034d4 & 0xfffffffe;
  if (puVar4 < (undefined4 *)0x8000001) {
    iVar5 = 0x20000000;
  }
  else {
    iVar5 = 0x8000000;
  }
  FUN_08003618(iVar5,(int)puVar4 - iVar5);
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setMainStackPointer(uVar6);
  }
  (*pcVar7)();
  return unaff_r7;
}



// ==== FUN_080034dc @ 080034dc ====

undefined4 FUN_080034dc(uint param_1)

{
  if (param_1 < DAT_08003568) {
    return 0;
  }
  if (param_1 < DAT_0800356c) {
    return 1;
  }
  if (param_1 < DAT_08003570) {
    return 2;
  }
  if (param_1 < DAT_08003574) {
    return 3;
  }
  if (param_1 < DAT_08003578) {
    return 4;
  }
  if (param_1 < DAT_0800357c) {
    return 5;
  }
  return 6;
}



// ==== FUN_0800351c @ 0800351c ====

void FUN_0800351c(void)

{
  uint uVar1;
  uint uVar2;
  undefined4 in_r3;
  undefined4 local_28;
  undefined4 local_24 [2];
  uint local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 uStack_10;
  
  local_28 = 0;
  uStack_10 = in_r3;
  uVar1 = FUN_080034dc(DAT_0800356c);
  uVar2 = FUN_080034dc(DAT_08003580);
  FUN_08003742();
  for (; uVar1 <= uVar2; uVar1 = uVar1 + 1) {
    local_24[0] = 0;
    local_18 = 1;
    local_14 = 2;
    local_1c = uVar1;
    FUN_080038cc(local_24,&local_28);
    FUN_0800376c(50000);
  }
  FUN_0800375e();
  return;
}



// ==== FUN_08003584 @ 08003584 ====

void FUN_08003584(int param_1,int param_2,uint param_3,undefined4 param_4)

{
  uint uVar1;
  
  FUN_08003742();
  for (uVar1 = 0; uVar1 < param_3; uVar1 = uVar1 + 1) {
    FUN_080036c8(2,param_1,*(undefined4 *)(param_2 + uVar1 * 4),0);
    param_1 = param_1 + 4;
  }
  FUN_0800375e(param_4);
  return;
}



// ==== FUN_080035b4 @ 080035b4 ====

uint * FUN_080035b4(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  uint *puVar4;
  uint uVar5;
  
  uVar5 = param_1 + 7U & 0xfffffff8;
  if (uVar5 < 8) {
    uVar5 = 8;
  }
  while ((piVar1 = DAT_080035fc, puVar4 = (uint *)*DAT_080035fc, puVar4 == (uint *)0x0 ||
         (*puVar4 < uVar5))) {
    iVar2 = FUN_08003a34();
    *piVar1 = iVar2;
    if (iVar2 == 0) {
      return (uint *)0x0;
    }
  }
  piVar3 = (int *)((int)puVar4 + uVar5);
  iVar2 = *puVar4 - uVar5;
  if (iVar2 == 0) {
    piVar3 = (int *)0x0;
  }
  else {
    *piVar3 = iVar2;
  }
  *piVar1 = (int)piVar3;
  return puVar4;
}



// ==== FUN_08003600 @ 08003600 ====

char * FUN_08003600(char *param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  
  cVar1 = *param_2;
  pcVar2 = param_1;
  while( true ) {
    param_2 = param_2 + 1;
    *pcVar2 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = *param_2;
    pcVar2 = pcVar2 + 1;
  }
  return param_1;
}



// ==== FUN_08003618 @ 08003618 ====

void FUN_08003618(uint param_1,uint param_2)

{
  *DAT_0800366c = param_1 | param_2 & DAT_08003668;
  return;
}



// ==== FUN_08003624 @ 08003624 ====

uint FUN_08003624(void)

{
  uint *puVar1;
  int iVar2;
  
  puVar1 = DAT_08003670;
  *DAT_08003670 = *DAT_08003670 & 0xfeffffff;
  *puVar1 = *puVar1 | 0x1000000;
  puVar1 = DAT_08003674;
  *DAT_08003674 = *DAT_08003674 & 0xfffffffe;
  *puVar1 = *puVar1 | 1;
  puVar1[1] = 0;
  for (iVar2 = 10; 0 < iVar2; iVar2 = iVar2 + -1) {
  }
  DataSynchronizationBarrier(0xf);
  return -(uint)(puVar1[1] == 0) >> 0x1f;
}



// ==== FUN_08003678 @ 08003678 ====

void FUN_08003678(void)

{
  undefined2 *puVar1;
  
  *(undefined1 *)(DAT_08003694 + 9) = 0;
  puVar1 = DAT_08003698;
  *(undefined1 *)(DAT_08003698 + 4) = 0;
  *puVar1 = 0x54;
  puVar1[1] = 0x100;
  puVar1[3] = 0;
  return;
}



// ==== FUN_0800369c @ 0800369c ====

void FUN_0800369c(void)

{
  return;
}



// ==== FUN_0800369e @ 0800369e ====

void FUN_0800369e(void)

{
  return;
}



// ==== FUN_080036a0 @ 080036a0 ====

undefined4 FUN_080036a0(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_08002c50();
  if (param_1 != 0xffffffff) {
    param_1 = param_1 + (int)*DAT_080036c4;
  }
  do {
    iVar2 = FUN_08002c50();
  } while ((uint)(iVar2 - iVar1) < param_1);
  return param_4;
}



// ==== FUN_080036c8 @ 080036c8 ====

undefined8 FUN_080036c8(int param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_080038b4;
  if (*(char *)(DAT_080038b4 + 0x18) == '\x01') {
    iVar2 = 2;
  }
  else {
    *(undefined1 *)(DAT_080038b4 + 0x18) = 1;
    iVar2 = FUN_0800376c(50000);
    if (iVar2 == 0) {
      if (param_1 == 0) {
        FUN_08003826(param_2,param_3 & 0xff);
      }
      else if (param_1 == 1) {
        FUN_08003808(param_2,param_3 & 0xffff);
      }
      else if (param_1 == 2) {
        FUN_080037ea(param_2,param_3);
      }
      else {
        FUN_080037c0(param_2,param_1,param_3,param_4);
      }
      iVar2 = FUN_0800376c(50000);
      *DAT_080038b8 = *DAT_080038b8 & 0xfffffffe;
    }
    *(undefined1 *)(iVar1 + 0x18) = 0;
  }
  return CONCAT44(param_4,iVar2);
}



// ==== FUN_08003742 @ 08003742 ====

undefined4 FUN_08003742(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = DAT_080038c0;
  uVar2 = 0;
  if ((int)DAT_080038c0[3] < 0) {
    *DAT_080038c0 = DAT_080038c4;
    *puVar1 = DAT_080038c8;
    if ((int)puVar1[3] < 0) {
      uVar2 = 1;
    }
  }
  return uVar2;
}



// ==== FUN_0800375e @ 0800375e ====

undefined4 FUN_0800375e(void)

{
  *DAT_080038b8 = *DAT_080038b8 | 0x80000000;
  return 0;
}



// ==== FUN_0800376c @ 0800376c ====

undefined8 FUN_0800376c(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  *(undefined4 *)(DAT_080038b4 + 0x1c) = 0;
  iVar2 = FUN_08002c50();
  do {
    puVar1 = DAT_080038bc;
    if (-1 < (int)(*DAT_080038bc << 0xf)) {
      if ((int)(*DAT_080038bc << 0x1f) < 0) {
        *DAT_080038bc = 1;
      }
      uVar4 = *puVar1;
      if ((uVar4 & 0x1f2) != 0) {
        FUN_08003840();
      }
      return CONCAT44(param_4,~-(uint)((uVar4 & 0x1f2) == 0) >> 0x1f);
    }
  } while ((param_1 == 0xffffffff) ||
          ((param_1 != 0 && (iVar3 = FUN_08002c50(), (uint)(iVar3 - iVar2) <= param_1))));
  return CONCAT44(param_4,3);
}



// ==== FUN_080037c0 @ 080037c0 ====

void FUN_080037c0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint *puVar1;
  
  puVar1 = DAT_080038b8;
  *DAT_080038b8 = *DAT_080038b8 & 0xfffffcff;
  *puVar1 = *puVar1 | 0x300;
  *puVar1 = *puVar1 | 1;
  *param_1 = param_3;
  InstructionSynchronizationBarrier(0xf);
  param_1[1] = param_4;
  return;
}



// ==== FUN_080037ea @ 080037ea ====

void FUN_080037ea(undefined4 *param_1,undefined4 param_2)

{
  uint *puVar1;
  
  puVar1 = DAT_080038b8;
  *DAT_080038b8 = *DAT_080038b8 & 0xfffffcff;
  *puVar1 = *puVar1 | 0x200;
  *puVar1 = *puVar1 | 1;
  *param_1 = param_2;
  return;
}



// ==== FUN_08003808 @ 08003808 ====

void FUN_08003808(undefined2 *param_1,undefined2 param_2)

{
  uint *puVar1;
  
  puVar1 = DAT_080038b8;
  *DAT_080038b8 = *DAT_080038b8 & 0xfffffcff;
  *puVar1 = *puVar1 | 0x100;
  *puVar1 = *puVar1 | 1;
  *param_1 = param_2;
  return;
}



// ==== FUN_08003826 @ 08003826 ====

void FUN_08003826(undefined1 *param_1,undefined1 param_2)

{
  uint *puVar1;
  
  puVar1 = DAT_080038b8;
  *DAT_080038b8 = *DAT_080038b8 & 0xfffffcff;
  *puVar1 = *puVar1;
  *puVar1 = *puVar1 | 1;
  *param_1 = param_2;
  return;
}



// ==== FUN_08003840 @ 08003840 ====

void FUN_08003840(void)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = DAT_080038bc;
  iVar1 = DAT_080038b4;
  if (*DAT_080038bc << 0x1b < 0) {
    *(uint *)(DAT_080038b4 + 0x1c) = *(uint *)(DAT_080038b4 + 0x1c) | 0x10;
    *piVar2 = 0x10;
  }
  if (*piVar2 << 0x1a < 0) {
    *(uint *)(iVar1 + 0x1c) = *(uint *)(iVar1 + 0x1c) | 8;
    *piVar2 = 0x20;
  }
  if (*piVar2 << 0x19 < 0) {
    *(uint *)(iVar1 + 0x1c) = *(uint *)(iVar1 + 0x1c) | 4;
    *piVar2 = 0x40;
  }
  if (*piVar2 << 0x18 < 0) {
    *(uint *)(iVar1 + 0x1c) = *(uint *)(iVar1 + 0x1c) | 2;
    *piVar2 = 0x80;
  }
  if (*piVar2 << 0x17 < 0) {
    *(uint *)(iVar1 + 0x1c) = *(uint *)(iVar1 + 0x1c) | 1;
    *piVar2 = 0x100;
  }
  if (*piVar2 << 0x1e < 0) {
    *(uint *)(iVar1 + 0x1c) = *(uint *)(iVar1 + 0x1c) | 0x20;
    *piVar2 = 2;
  }
  return;
}



// ==== FUN_080038cc @ 080038cc ====

undefined8 FUN_080038cc(int *param_1,uint *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = DAT_08003a28;
  if (*(char *)(DAT_08003a28 + 0x18) == '\x01') {
    iVar2 = 2;
  }
  else {
    *(undefined1 *)(DAT_08003a28 + 0x18) = 1;
    iVar2 = FUN_0800376c(50000);
    if (iVar2 == 0) {
      *param_2 = 0xffffffff;
      if (*param_1 == 1) {
        FUN_08003968(param_1[4] & 0xff,param_1[1]);
        iVar2 = FUN_0800376c(50000);
        *DAT_08003a2c = *DAT_08003a2c & 0xfffffffb;
      }
      else {
        uVar3 = param_1[2];
        while( true ) {
          if ((uint)(param_1[2] + param_1[3]) <= uVar3) break;
          FUN_08003988(uVar3,param_1[4] & 0xff);
          iVar2 = FUN_0800376c(50000);
          *DAT_08003a2c = *DAT_08003a2c & 0xffffff05;
          if (iVar2 != 0) {
            *param_2 = uVar3;
            break;
          }
          uVar3 = uVar3 + 1;
        }
      }
      FUN_080039d6();
    }
    *(undefined1 *)(iVar1 + 0x18) = 0;
  }
  return CONCAT44(param_4,iVar2);
}



// ==== FUN_08003968 @ 08003968 ====

void FUN_08003968(int param_1)

{
  uint *puVar1;
  
  puVar1 = DAT_08003a2c;
  *DAT_08003a2c = *DAT_08003a2c & 0xfffffcff;
  *puVar1 = *puVar1 | 4;
  *puVar1 = *puVar1 | param_1 << 8 | 0x10000;
  return;
}



// ==== FUN_08003988 @ 08003988 ====

void FUN_08003988(int param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  
  puVar1 = DAT_08003a2c;
  uVar2 = 0;
  if (param_2 != 0) {
    if (param_2 == 1) {
      uVar2 = 0x100;
    }
    else if (param_2 == 2) {
      uVar2 = 0x200;
    }
    else {
      uVar2 = 0x300;
    }
  }
  *DAT_08003a2c = *DAT_08003a2c & 0xfffffcff;
  *puVar1 = uVar2 | *puVar1;
  *puVar1 = *puVar1 & 0xffffff07;
  *puVar1 = *puVar1 | param_1 << 3 | 2;
  *puVar1 = *puVar1 | 0x10000;
  return;
}



// ==== FUN_080039d6 @ 080039d6 ====

void FUN_080039d6(void)

{
  uint *puVar1;
  
  puVar1 = DAT_08003a30;
  if ((int)(*DAT_08003a30 << 0x16) < 0) {
    *DAT_08003a30 = *DAT_08003a30 & 0xfffffdff;
    *puVar1 = *puVar1 | 0x800;
    *puVar1 = *puVar1 & 0xfffff7ff;
    *puVar1 = *puVar1 | 0x200;
  }
  if ((int)(*puVar1 << 0x15) < 0) {
    *puVar1 = *puVar1 & 0xfffffbff;
    *puVar1 = *puVar1 | 0x1000;
    *puVar1 = *puVar1 & 0xffffefff;
    *puVar1 = *puVar1 | 0x400;
  }
  return;
}



// ==== FUN_08003a34 @ 08003a34 ====

int * FUN_08003a34(void)

{
  int *piVar1;
  
  if (*DAT_08003a54 != 0) {
    return (int *)0x0;
  }
  piVar1 = (int *)(DAT_08003a58 & 0xfffffff8);
  *DAT_08003a54 = (uint)piVar1;
  *piVar1 = (DAT_08003a5c & 0xfffffff8) - (int)piVar1;
  return piVar1;
}



// ==== FUN_08003b60 @ 08003b60 ====

void FUN_08003b60(void)

{
  uint *puVar1;
  undefined4 uVar2;
  undefined4 extraout_r3;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  FUN_08001f54(&local_1c,0x14,0);
  puVar1 = DAT_08003c30;
  *DAT_08003c30 = *DAT_08003c30 | 2;
  uVar2 = DAT_08003c34;
  FUN_08002896(DAT_08003c34,8,0,extraout_r3,*puVar1 & 2);
  local_18 = 1;
  local_14 = 0;
  local_1c = 8;
  FUN_0800270c(uVar2,&local_1c);
  FUN_08002896(uVar2,8,0);
  return;
}



// ==== FUN_08003bb4 @ 08003bb4 ====

void FUN_08003bb4(void)

{
  uint *puVar1;
  undefined4 uVar2;
  undefined4 extraout_r3;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  FUN_08003624();
  FUN_08002c38();
  puVar1 = DAT_08003c30;
  *DAT_08003c30 = *DAT_08003c30 | 1;
  uVar2 = DAT_08003c38;
  FUN_08002896(DAT_08003c38,0x8000,0,extraout_r3,*puVar1 & 1);
  local_18 = 1;
  local_14 = 0;
  local_10 = 3;
  local_1c = 0x8000;
  FUN_0800270c(uVar2,&local_1c);
  FUN_08002896(uVar2,0x8000,0);
  FUN_08003b60();
  FUN_080036a0(500);
  FUN_08003678();
  FUN_08003c3c();
  FUN_08003c70();
  FUN_0800369c();
  FUN_0800344c();
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// ==== FUN_08003c3c @ 08003c3c ====

void FUN_08003c3c(void)

{
  int iVar1;
  
  iVar1 = DAT_08003c58;
  *(undefined4 *)(DAT_08003c58 + 0xc) = DAT_08003c5c;
  *(undefined4 *)(iVar1 + 0x10) = DAT_08003c60;
  *(undefined4 *)(iVar1 + 0x18) = DAT_08003c64;
  *(undefined4 *)(iVar1 + 0x14) = DAT_08003c68;
  *(undefined4 *)(iVar1 + 0x1c) = DAT_08003c6c;
                    /* WARNING: Could not recover jumptable at 0x08003c54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar1 + 0x10))();
  return;
}



// ==== FUN_08003c70 @ 08003c70 ====

void FUN_08003c70(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_08003c94;
  iVar2 = FUN_0800168a(DAT_08003c98,&DAT_08003c90,1);
  if (iVar2 == 0) {
    *(undefined1 *)(iVar1 + 9) = 1;
    return;
  }
  *(undefined1 *)(iVar1 + 9) = 0;
  return;
}



// ==== FUN_08003d1c @ 08003d1c ====

void FUN_08003d1c(uint *param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int unaff_r9;
  
  while( true ) {
    puVar1 = param_1 + 1;
    uVar3 = *param_1;
    if (uVar3 == 0) break;
    param_1 = param_1 + 2;
    puVar4 = (undefined4 *)*puVar1;
    if ((int)puVar4 << 0x1f < 0) {
      puVar4 = (undefined4 *)((int)puVar4 + unaff_r9 + -1);
    }
    do {
      puVar5 = puVar4;
      uVar2 = uVar3;
      puVar4 = puVar5 + 1;
      *puVar5 = 0;
      uVar3 = uVar2 - 4;
    } while (3 < uVar2 - 4);
    if ((int)(uVar2 * 0x40000000) < 0) {
      *(undefined2 *)puVar4 = 0;
      puVar4 = (undefined4 *)((int)puVar5 + 6);
    }
    if ((int)(uVar2 * -0x80000000) < 0) {
      *(undefined1 *)puVar4 = 0;
    }
  }
  return;
}



// ==== FUN_08003d54 @ 08003d54 ====

void FUN_08003d54(void)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = (int *)((int)&DAT_08003d78 + DAT_08003d78);
  for (piVar1 = (int *)((int)&DAT_08003d74 + DAT_08003d74); piVar1 != piVar2;
      piVar1 = (int *)(*(code *)((int)piVar1 + *piVar1))(piVar1 + 1)) {
  }
  return;
}



// ==== FUN_08003d7c @ 08003d7c ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_08003d7c(void)

{
  _DAT_e000ed88 = _DAT_e000ed88 | 0xf00000;
  DataSynchronizationBarrier(0xf);
  InstructionSynchronizationBarrier(0xf);
  return 0x2040000;
}



// ==== FUN_08003df4 @ 08003df4 ====

undefined4 FUN_08003df4(void)

{
  int iVar1;
  
  iVar1 = FUN_08003e12();
  if (iVar1 != 0) {
    FUN_08003d54();
  }
  FUN_08003bb4(0);
  thunk_FUN_08003e1c();
  return 1;
}



// ==== FUN_08003e12 @ 08003e12 ====

undefined4 FUN_08003e12(void)

{
  return 1;
}



// ==== thunk_FUN_08003e1c @ 08003e16 ====

void thunk_FUN_08003e1c(undefined4 param_1)

{
  do {
    FUN_08003e28(param_1);
  } while( true );
}



// ==== FUN_08003e1c @ 08003e1c ====

void FUN_08003e1c(undefined4 param_1)

{
  do {
    FUN_08003e28(param_1);
  } while( true );
}



// ==== FUN_08003e28 @ 08003e28 ====

void FUN_08003e28(void)

{
  do {
    software_bkpt(0xab);
  } while( true );
}



// ==== FUN_08008194 @ 08008194 ====

undefined2 FUN_08008194(undefined2 *param_1)

{
  return *param_1;
}



// ==== FUN_0800819e @ 0800819e ====

undefined4 FUN_0800819e(undefined4 *param_1)

{
  return *param_1;
}



// ==== FUN_080081b4 @ 080081b4 ====

void FUN_080081b4(undefined1 *param_1,undefined4 param_2)

{
  *param_1 = (char)param_2;
  param_1[1] = (char)((uint)param_2 >> 8);
  return;
}



// ==== FUN_080081bc @ 080081bc ====

void FUN_080081bc(undefined1 *param_1,undefined4 param_2)

{
  *param_1 = (char)param_2;
  param_1[1] = (char)((uint)param_2 >> 8);
  param_1[2] = (char)((uint)param_2 >> 0x10);
  param_1[3] = (char)((uint)param_2 >> 0x18);
  return;
}



// ==== FUN_080081cc @ 080081cc ====

undefined4 FUN_080081cc(int param_1)

{
  if (param_1 != 0) {
    return 0;
  }
  return 0;
}



// ==== FUN_080081d8 @ 080081d8 ====

undefined4 FUN_080081d8(int param_1)

{
  if (param_1 != 0) {
    return 0;
  }
  return 0;
}



// ==== FUN_080081e4 @ 080081e4 ====

undefined8
FUN_080081e4(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  byte *pbVar3;
  byte *pbVar4;
  uint uVar5;
  
  pbVar3 = (byte *)*param_1;
  uVar2 = (uint)*pbVar3;
  iVar1 = FUN_080081cc(uVar2);
  pbVar4 = pbVar3 + 1;
  if (iVar1 != 0) {
    pbVar4 = pbVar3 + 2;
    uVar5 = (uint)pbVar3[1];
    iVar1 = FUN_080081d8(uVar5);
    if (iVar1 == 0) goto LAB_08008224;
    uVar2 = uVar5 + uVar2 * 0x100;
  }
  iVar1 = 0;
  if ((uVar2 == 0) || (iVar1 = FUN_0800a1c6(uVar2,0x1b5), iVar1 != 0)) {
    *param_1 = pbVar4;
    return CONCAT44(param_4,iVar1);
  }
LAB_08008224:
  return CONCAT44(param_4,0xffffffff);
}



// ==== FUN_08008230 @ 08008230 ====

longlong FUN_08008230(undefined4 param_1,undefined1 *param_2,uint param_3,uint param_4)

{
  int iVar1;
  
  iVar1 = FUN_0800a18c(param_1,0x1b5);
  if (0xff < iVar1) {
    if (param_3 < 2) {
      return (ulonglong)param_4 << 0x20;
    }
    *param_2 = (char)((uint)iVar1 >> 8);
    param_2[1] = (char)iVar1;
    return CONCAT44(param_4,2);
  }
  if ((iVar1 != 0) && (param_3 != 0)) {
    *param_2 = (char)iVar1;
    return CONCAT44(param_4,1);
  }
  return (ulonglong)param_4 << 0x20;
}



// ==== FUN_0800826a @ 0800826a ====

undefined4 FUN_0800826a(int *param_1,int param_2)

{
  bool bVar1;
  undefined4 uVar2;
  uint uVar3;
  int *piVar4;
  
  bVar1 = false;
  for (uVar3 = 0; uVar3 < 3; uVar3 = uVar3 + 1) {
    piVar4 = (int *)(DAT_080084d4 + uVar3 * 0x10);
    if (*piVar4 == 0) {
      bVar1 = true;
    }
    else if (((*piVar4 == *param_1) && (piVar4[1] == param_1[2])) && (piVar4[2] == param_1[5]))
    break;
  }
  if (uVar3 == 3) {
    if ((bVar1) || (param_2 == 2)) {
      uVar2 = 0;
    }
    else {
      uVar2 = 0x12;
    }
  }
  else if ((param_2 == 0) && (*(short *)(DAT_080084d4 + uVar3 * 0x10 + 0xc) != 0x100)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0x10;
  }
  return uVar2;
}



// ==== FUN_080082ce @ 080082ce ====

undefined4 FUN_080082ce(void)

{
  uint uVar1;
  
  for (uVar1 = 0; (uVar1 < 3 && (*(int *)(DAT_080084d4 + uVar1 * 0x10) != 0)); uVar1 = uVar1 + 1) {
  }
  if (uVar1 == 3) {
    return 0;
  }
  return 1;
}



// ==== FUN_080082ee @ 080082ee ====

int FUN_080082ee(int *param_1,int param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  
  iVar3 = DAT_080084d4;
  for (uVar4 = 0;
      (uVar4 < 3 &&
      (((iVar2 = uVar4 * 0x10, *(int *)(DAT_080084d4 + iVar2) != *param_1 ||
        (*(int *)(DAT_080084d4 + 4 + iVar2) != param_1[2])) ||
       (*(int *)(DAT_080084d4 + 8 + iVar2) != param_1[5])))); uVar4 = uVar4 + 1) {
  }
  if (uVar4 == 3) {
    for (uVar4 = 0; (uVar4 < 3 && (*(int *)(DAT_080084d4 + uVar4 * 0x10) != 0)); uVar4 = uVar4 + 1)
    {
    }
    if (uVar4 == 3) {
      return 0;
    }
    piVar5 = (int *)(DAT_080084d4 + uVar4 * 0x10);
    *piVar5 = *param_1;
    piVar5[1] = param_1[2];
    *(int *)(iVar3 + 8 + uVar4 * 0x10) = param_1[5];
    *(undefined2 *)(piVar5 + 3) = 0;
  }
  iVar3 = iVar3 + uVar4 * 0x10;
  if ((0 < param_2) && (*(short *)(iVar3 + 0xc) != 0)) {
    return 0;
  }
  if (param_2 == 0) {
    sVar1 = *(short *)(iVar3 + 0xc) + 1;
  }
  else {
    sVar1 = 0x100;
  }
  *(short *)(iVar3 + 0xc) = sVar1;
  return uVar4 + 1;
}



// ==== FUN_0800837a @ 0800837a ====

undefined4 FUN_0800837a(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  short sVar5;
  
  iVar1 = DAT_080084d4;
  if (param_1 - 1U < 3) {
    iVar2 = (param_1 - 1U) * 0x10;
    iVar4 = DAT_080084d4 + iVar2;
    sVar5 = *(short *)(iVar4 + 0xc);
    if (sVar5 == 0x100) {
      sVar5 = 0;
    }
    if (sVar5 != 0) {
      sVar5 = sVar5 + -1;
    }
    *(short *)(iVar4 + 0xc) = sVar5;
    if (sVar5 == 0) {
      *(undefined4 *)(iVar1 + iVar2) = 0;
    }
    uVar3 = 0;
  }
  else {
    uVar3 = 2;
  }
  return uVar3;
}



// ==== FUN_080083b0 @ 080083b0 ====

void FUN_080083b0(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = DAT_080084d4;
  for (uVar2 = 0; uVar2 < 3; uVar2 = uVar2 + 1) {
    if (*(int *)(iVar1 + uVar2 * 0x10) == param_1) {
      *(undefined4 *)(iVar1 + uVar2 * 0x10) = 0;
    }
  }
  return;
}



// ==== FUN_080083ce @ 080083ce ====

undefined8 FUN_080083ce(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if (*(char *)(param_1 + 3) != '\0') {
    iVar1 = FUN_0800a2dc(*(undefined1 *)(param_1 + 1),param_1 + 0x34,*(undefined4 *)(param_1 + 0x30)
                         ,1);
    if (iVar1 == 0) {
      *(undefined1 *)(param_1 + 3) = 0;
      if (((uint)(*(int *)(param_1 + 0x30) - *(int *)(param_1 + 0x24)) < *(uint *)(param_1 + 0x1c))
         && (*(char *)(param_1 + 2) == '\x02')) {
        FUN_0800a2dc(*(undefined1 *)(param_1 + 1),param_1 + 0x34,
                     *(uint *)(param_1 + 0x1c) + *(int *)(param_1 + 0x30),1);
      }
    }
    else {
      uVar2 = 1;
    }
  }
  return CONCAT44(param_4,uVar2);
}



// ==== FUN_08008418 @ 08008418 ====

int FUN_08008418(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if ((param_2 != *(int *)(param_1 + 0x30)) && (iVar2 = FUN_080083ce(param_1), iVar2 == 0)) {
    iVar1 = FUN_0800a2a4(*(undefined1 *)(param_1 + 1),param_1 + 0x34,param_2,1);
    if (iVar1 != 0) {
      param_2 = -1;
      iVar2 = 1;
    }
    *(int *)(param_1 + 0x30) = param_2;
  }
  return iVar2;
}



// ==== FUN_0800844e @ 0800844e ====

undefined8 FUN_0800844e(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_080083ce();
  if (iVar1 == 0) {
    if ((*param_1 == '\x03') && (param_1[4] == '\x01')) {
      FUN_0800a350(param_1 + 0x34,0x200,0);
      FUN_080081b4(param_1 + 0x232,0xaa55);
      FUN_080081bc(param_1 + 0x34,DAT_080084d8);
      FUN_080081bc(param_1 + 0x218,DAT_080084dc);
      FUN_080081bc(param_1 + 0x21c,*(undefined4 *)(param_1 + 0x14));
      FUN_080081bc(param_1 + 0x220,*(undefined4 *)(param_1 + 0x10));
      *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x20) + 1;
      FUN_0800a2dc(param_1[1],param_1 + 0x34,*(int *)(param_1 + 0x20) + 1,1);
      param_1[4] = '\0';
    }
    iVar2 = FUN_0800a314(param_1[1],0);
    if (iVar2 != 0) {
      iVar1 = 1;
    }
  }
  return CONCAT44(param_4,iVar1);
}



// ==== FUN_080084e0 @ 080084e0 ====

int FUN_080084e0(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0x18) - 2U <= param_2 - 2U) {
    return 0;
  }
  return (param_2 - 2U) * (uint)*(ushort *)(param_1 + 10) + *(int *)(param_1 + 0x2c);
}



// ==== FUN_080084fa @ 080084fa ====

uint FUN_080084fa(undefined4 *param_1,uint param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  byte *pbVar4;
  
  pbVar4 = (byte *)*param_1;
  if ((1 < param_2) && (param_2 < *(uint *)(pbVar4 + 0x18))) {
    bVar1 = *pbVar4;
    if (bVar1 == 1) {
      uVar3 = param_2 + (param_2 >> 1);
      iVar2 = FUN_08008418(pbVar4,*(int *)(pbVar4 + 0x24) + (uVar3 >> 9));
      if (iVar2 != 0) {
        return 0xffffffff;
      }
      bVar1 = pbVar4[(uVar3 & 0x1ff) + 0x34];
      iVar2 = FUN_08008418(pbVar4,*(int *)(pbVar4 + 0x24) + (uVar3 + 1 >> 9));
      if (iVar2 != 0) {
        return 0xffffffff;
      }
      if ((int)(param_2 << 0x1f) < 0) {
        return (uint)(ushort)(CONCAT11(pbVar4[(uVar3 + 1 & 0x1ff) + 0x34],bVar1) >> 4);
      }
      return CONCAT11(pbVar4[(uVar3 + 1 & 0x1ff) + 0x34],bVar1) & 0xfff;
    }
    if (bVar1 != 0) {
      if (bVar1 == 3) {
        iVar2 = FUN_08008418(pbVar4,*(int *)(pbVar4 + 0x24) + (param_2 >> 7));
        if (iVar2 != 0) {
          return 0xffffffff;
        }
        uVar3 = FUN_0800819e(pbVar4 + (param_2 & 0x7f) * 4 + 0x34);
        return uVar3 & 0xfffffff;
      }
      if (bVar1 < 3) {
        iVar2 = FUN_08008418(pbVar4,*(int *)(pbVar4 + 0x24) + (param_2 >> 8));
        if (iVar2 != 0) {
          return 0xffffffff;
        }
        uVar3 = FUN_08008194(pbVar4 + (param_2 & 0xff) * 2 + 0x34);
        return uVar3;
      }
    }
  }
  return 1;
}



// ==== FUN_080085c4 @ 080085c4 ====

int FUN_080085c4(byte *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  
  iVar3 = 2;
  if ((1 < param_2) && (param_2 < *(uint *)(param_1 + 0x18))) {
    bVar2 = *param_1;
    if (bVar2 == 1) {
      uVar1 = param_2 + (param_2 >> 1);
      iVar3 = FUN_08008418(param_1,*(int *)(param_1 + 0x24) + (uVar1 >> 9));
      if (iVar3 == 0) {
        if ((int)(param_2 << 0x1f) < 0) {
          bVar2 = param_1[(uVar1 & 0x1ff) + 0x34] & 0xf | (byte)(param_3 << 4);
        }
        else {
          bVar2 = (byte)param_3;
        }
        param_1[(uVar1 & 0x1ff) + 0x34] = bVar2;
        param_1[3] = 1;
        iVar3 = FUN_08008418(param_1,*(int *)(param_1 + 0x24) + (uVar1 + 1 >> 9));
        if (iVar3 == 0) {
          if ((int)(param_2 << 0x1f) < 0) {
            bVar2 = (byte)(param_3 >> 4);
          }
          else {
            bVar2 = (byte)(param_3 >> 8) & 0xf | param_1[(uVar1 + 1 & 0x1ff) + 0x34] & 0xf0;
          }
          param_1[(uVar1 + 1 & 0x1ff) + 0x34] = bVar2;
          param_1[3] = 1;
        }
      }
    }
    else if (bVar2 != 0) {
      if (bVar2 == 3) {
        iVar3 = FUN_08008418(param_1,*(int *)(param_1 + 0x24) + (param_2 >> 7));
        if (iVar3 == 0) {
          uVar1 = FUN_0800819e(param_1 + (param_2 & 0x7f) * 4 + 0x34);
          FUN_080081bc(param_1 + (param_2 & 0x7f) * 4 + 0x34,
                       param_3 & 0xfffffff | uVar1 & 0xf0000000);
          param_1[3] = 1;
        }
      }
      else if ((bVar2 < 3) &&
              (iVar3 = FUN_08008418(param_1,*(int *)(param_1 + 0x24) + (param_2 >> 8)), iVar3 == 0))
      {
        FUN_080081b4(param_1 + (param_2 & 0xff) * 2 + 0x34,param_3 & 0xffff);
        param_1[3] = 1;
      }
    }
  }
  return iVar3;
}



// ==== FUN_080086c0 @ 080086c0 ====

undefined8 FUN_080086c0(int *param_1,uint param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *param_1;
  if ((param_2 < 2) || (*(uint *)(iVar3 + 0x18) <= param_2)) {
LAB_0800872a:
    return CONCAT44(param_4,2);
  }
  if ((param_3 == 0) || (iVar1 = FUN_080085c4(iVar3,param_3,0xffffffff), iVar1 == 0)) {
    do {
      uVar2 = FUN_080084fa(param_1,param_2);
      if (uVar2 == 0) break;
      if (uVar2 == 1) goto LAB_0800872a;
      if (uVar2 == 0xffffffff) {
        return CONCAT44(param_4,1);
      }
      iVar1 = FUN_080085c4(iVar3,param_2,0);
      if (iVar1 != 0) goto LAB_08008734;
      if (*(uint *)(iVar3 + 0x14) < *(int *)(iVar3 + 0x18) - 2U) {
        *(uint *)(iVar3 + 0x14) = *(uint *)(iVar3 + 0x14) + 1;
        *(byte *)(iVar3 + 4) = *(byte *)(iVar3 + 4) | 1;
      }
      param_2 = uVar2;
    } while (uVar2 < *(uint *)(iVar3 + 0x18));
    iVar1 = 0;
  }
LAB_08008734:
  return CONCAT44(param_4,iVar1);
}



// ==== FUN_08008736 @ 08008736 ====

uint FUN_08008736(int *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = *param_1;
  if (param_2 == 0) {
    uVar4 = *(uint *)(iVar5 + 0x10);
    if ((uVar4 == 0) || (*(uint *)(iVar5 + 0x18) <= uVar4)) {
      uVar4 = 1;
    }
  }
  else {
    uVar2 = FUN_080084fa();
    if (uVar2 < 2) {
      return 1;
    }
    if (uVar2 == 0xffffffff) {
      return 0xffffffff;
    }
    uVar4 = param_2;
    if (uVar2 < *(uint *)(iVar5 + 0x18)) {
      return uVar2;
    }
  }
  if (*(int *)(iVar5 + 0x14) != 0) {
    uVar2 = 0;
    if (uVar4 == param_2) {
      uVar2 = uVar4 + 1;
      if (*(uint *)(iVar5 + 0x18) <= uVar2) {
        uVar2 = 2;
      }
      iVar1 = FUN_080084fa(param_1,uVar2);
      if (iVar1 == 1) {
        return 1;
      }
      if (iVar1 == -1) {
        return 0xffffffff;
      }
      if (iVar1 != 0) {
        uVar2 = *(uint *)(iVar5 + 0x10);
        if ((1 < uVar2) && (uVar2 < *(uint *)(iVar5 + 0x18))) {
          uVar4 = uVar2;
        }
        uVar2 = 0;
      }
    }
    uVar3 = uVar4;
    if (uVar2 != 0) {
LAB_080087dc:
      iVar1 = FUN_080085c4(iVar5,uVar2,0xffffffff);
      if ((iVar1 == 0) && (param_2 != 0)) {
        iVar1 = FUN_080085c4(iVar5,param_2,uVar2);
      }
      if (iVar1 != 0) {
        if (iVar1 != 1) {
          return 1;
        }
        return 0xffffffff;
      }
      *(uint *)(iVar5 + 0x10) = uVar2;
      if (*(uint *)(iVar5 + 0x14) <= *(int *)(iVar5 + 0x18) - 2U) {
        *(uint *)(iVar5 + 0x14) = *(uint *)(iVar5 + 0x14) - 1;
      }
      *(byte *)(iVar5 + 4) = *(byte *)(iVar5 + 4) | 1;
      return uVar2;
    }
    do {
      uVar2 = uVar3 + 1;
      if ((*(uint *)(iVar5 + 0x18) <= uVar2) && (uVar2 = 2, uVar4 < 2)) {
        return 0;
      }
      iVar1 = FUN_080084fa(param_1,uVar2);
      if (iVar1 == 0) goto LAB_080087dc;
      if (iVar1 == 1) {
        return 1;
      }
      if (iVar1 == -1) {
        return 0xffffffff;
      }
      uVar3 = uVar2;
    } while (uVar2 != uVar4);
  }
  return 0;
}



// ==== FUN_0800882a @ 0800882a ====

int FUN_0800882a(int *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  
  puVar3 = (uint *)(param_1[0xb] + 4);
  uVar1 = (param_2 >> 9) / (uint)*(ushort *)(*param_1 + 10);
  while( true ) {
    uVar2 = *puVar3;
    if (uVar2 == 0) {
      return 0;
    }
    if (uVar1 < uVar2) break;
    uVar1 = uVar1 - uVar2;
    puVar3 = puVar3 + 2;
  }
  return puVar3[1] + uVar1;
}



// ==== FUN_08008852 @ 08008852 ====

undefined4 FUN_08008852(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = FUN_080083ce();
  if (iVar1 != 0) {
    return 1;
  }
  iVar1 = FUN_080084e0(param_1,param_2);
  *(int *)(param_1 + 0x30) = iVar1;
  FUN_0800a350(param_1 + 0x34,0x200,0);
  uVar3 = 0;
  while ((uVar3 < *(ushort *)(param_1 + 10) &&
         (iVar2 = FUN_0800a2dc(*(undefined1 *)(param_1 + 1),param_1 + 0x34,uVar3 + iVar1,1),
         iVar2 == 0))) {
    uVar3 = uVar3 + 1;
  }
  if (uVar3 == *(ushort *)(param_1 + 10)) {
    return 0;
  }
  return 1;
}



// ==== FUN_080088aa @ 080088aa ====

undefined4 FUN_080088aa(undefined4 *param_1,uint param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  uint uVar3;
  byte *pbVar4;
  
  pbVar4 = (byte *)*param_1;
  if ((param_2 < 0x200000) && ((param_2 & 0x1f) == 0)) {
    param_1[5] = param_2;
    uVar3 = param_1[2];
    if ((uVar3 == 0) && (2 < *pbVar4)) {
      uVar3 = *(uint *)(pbVar4 + 0x28);
    }
    if (uVar3 == 0) {
      if ((uint)*(ushort *)(pbVar4 + 8) <= param_2 >> 5) {
        return 2;
      }
      param_1[7] = *(undefined4 *)(pbVar4 + 0x28);
    }
    else {
      uVar1 = *(ushort *)(pbVar4 + 10);
      for (; (uint)uVar1 << 9 <= param_2; param_2 = param_2 + (uint)uVar1 * -0x200) {
        uVar3 = FUN_080084fa(param_1);
        if (uVar3 == 0xffffffff) {
          return 1;
        }
        if ((uVar3 < 2) || (*(uint *)(pbVar4 + 0x18) <= uVar3)) {
          return 2;
        }
      }
      uVar2 = FUN_080084e0(pbVar4,uVar3);
      param_1[7] = uVar2;
    }
    param_1[6] = uVar3;
    if (param_1[7] == 0) {
      uVar2 = 2;
    }
    else {
      param_1[7] = param_1[7] + (param_2 >> 9);
      param_1[8] = pbVar4 + (param_2 & 0x1ff) + 0x34;
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 2;
  }
  return uVar2;
}



// ==== FUN_08008948 @ 08008948 ====

undefined4 FUN_08008948(int *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = *param_1;
  uVar4 = param_1[5] + 0x20;
  if (0x1fffff < uVar4) {
    param_1[7] = 0;
  }
  if (param_1[7] == 0) {
    return 4;
  }
  if ((uVar4 & 0x1ff) == 0) {
    param_1[7] = param_1[7] + 1;
    if (param_1[6] == 0) {
      if ((uint)*(ushort *)(iVar3 + 8) <= uVar4 >> 5) {
LAB_080089b0:
        param_1[7] = 0;
        return 4;
      }
    }
    else if ((*(ushort *)(iVar3 + 10) - 1 & uVar4 >> 9) == 0) {
      uVar1 = FUN_080084fa(param_1);
      if (uVar1 < 2) {
        return 2;
      }
      if (uVar1 == 0xffffffff) {
        return 1;
      }
      if (*(uint *)(iVar3 + 0x18) <= uVar1) {
        if (param_2 == 0) goto LAB_080089b0;
        uVar1 = FUN_08008736(param_1,param_1[6]);
        if (uVar1 == 0) {
          return 7;
        }
        if (uVar1 == 1) {
          return 2;
        }
        if (uVar1 == 0xffffffff) {
          return 1;
        }
        iVar2 = FUN_08008852(iVar3,uVar1);
        if (iVar2 != 0) {
          return 1;
        }
      }
      param_1[6] = uVar1;
      iVar2 = FUN_080084e0(iVar3,uVar1);
      param_1[7] = iVar2;
    }
  }
  param_1[5] = uVar4;
  param_1[8] = iVar3 + (uVar4 & 0x1ff) + 0x34;
  return 0;
}



// ==== FUN_08008a08 @ 08008a08 ====

undefined8 FUN_08008a08(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar2 = *param_1;
  iVar1 = FUN_080088aa(param_1,0);
  if (iVar1 == 0) {
    iVar3 = 0;
    do {
      iVar1 = FUN_08008418(uVar2,param_1[7]);
      if (iVar1 != 0) break;
      if ((*(char *)param_1[8] == -0x1b) || (*(char *)param_1[8] == '\0')) {
        iVar3 = iVar3 + 1;
        if (iVar3 == param_2) break;
      }
      else {
        iVar3 = 0;
      }
      iVar1 = FUN_08008948(param_1,1);
    } while (iVar1 == 0);
  }
  if (iVar1 == 4) {
    iVar1 = 7;
  }
  return CONCAT44(param_4,iVar1);
}



// ==== FUN_08008a56 @ 08008a56 ====

uint FUN_08008a56(char *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = FUN_08008194(param_2 + 0x1a);
  if (*param_1 == '\x03') {
    iVar2 = FUN_08008194(param_2 + 0x14);
    uVar1 = uVar1 | iVar2 << 0x10;
  }
  return uVar1;
}



// ==== FUN_08008a7c @ 08008a7c ====

void FUN_08008a7c(char *param_1,int param_2,uint param_3)

{
  FUN_080081b4(param_2 + 0x1a,param_3 & 0xffff);
  if (*param_1 == '\x03') {
    FUN_080081b4(param_2 + 0x14,param_3 >> 0x10);
    return;
  }
  return;
}



// ==== FUN_08008aa8 @ 08008aa8 ====

undefined8 FUN_08008aa8(int param_1,byte *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  
  iVar1 = FUN_08008194(param_2 + 0x1a);
  if (iVar1 == 0) {
    uVar5 = ((*param_2 & 0x3f) - 1) * 0xd;
    iVar1 = 1;
    for (uVar6 = 0; uVar6 < 0xd; uVar6 = uVar6 + 1) {
      iVar2 = FUN_08008194(param_2 + (byte)(&DAT_08008c28)[uVar6]);
      if (iVar1 == 0) {
        bVar7 = iVar2 != 0xffff;
        iVar2 = iVar1;
        if (bVar7) goto LAB_08008b32;
      }
      else {
        if (0xff < uVar5) goto LAB_08008b32;
        iVar1 = FUN_0800a1f0(iVar2);
        iVar3 = FUN_0800a1f0(*(undefined2 *)(param_1 + uVar5 * 2));
        uVar5 = uVar5 + 1;
        if (iVar1 != iVar3) goto LAB_08008b32;
      }
      iVar1 = iVar2;
    }
    if (((-1 < (int)((uint)*param_2 << 0x19)) || (iVar1 == 0)) ||
       (*(short *)(param_1 + uVar5 * 2) == 0)) {
      uVar4 = 1;
      goto LAB_08008b2e;
    }
  }
LAB_08008b32:
  uVar4 = 0;
LAB_08008b2e:
  return CONCAT44(param_4,uVar4);
}



// ==== FUN_08008b38 @ 08008b38 ====

undefined4 FUN_08008b38(int param_1,byte *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  
  iVar1 = FUN_08008194(param_2 + 0x1a);
  if (iVar1 == 0) {
    uVar4 = ((*param_2 & 0xffffffbf) - 1) * 0xd;
    iVar1 = 1;
    for (uVar5 = 0; uVar5 < 0xd; uVar5 = uVar5 + 1) {
      iVar2 = FUN_08008194(param_2 + (byte)(&DAT_08008c28)[uVar5]);
      if (iVar1 == 0) {
        if (iVar2 != 0xffff) goto LAB_08008bb0;
      }
      else {
        if (0xff < uVar4) goto LAB_08008bb0;
        *(short *)(param_1 + uVar4 * 2) = (short)iVar2;
        uVar4 = uVar4 + 1;
        iVar1 = iVar2;
      }
    }
    if (((int)((uint)*param_2 << 0x19) < 0) && (iVar1 != 0)) {
      if (0xff < uVar4) goto LAB_08008bb0;
      *(undefined2 *)(param_1 + uVar4 * 2) = 0;
    }
    uVar3 = 1;
  }
  else {
LAB_08008bb0:
    uVar3 = 0;
  }
  return uVar3;
}



// ==== FUN_08008bb4 @ 08008bb4 ====

void FUN_08008bb4(int param_1,undefined1 *param_2,uint param_3,undefined1 param_4)

{
  int iVar1;
  short sVar2;
  uint uVar3;
  
  param_2[0xd] = param_4;
  param_2[0xb] = 0xf;
  param_2[0xc] = 0;
  FUN_080081b4(param_2 + 0x1a,0);
  iVar1 = (param_3 - 1) * 0xd;
  sVar2 = 0;
  uVar3 = 0;
  do {
    if (sVar2 != -1) {
      sVar2 = *(short *)(param_1 + iVar1 * 2);
      iVar1 = iVar1 + 1;
    }
    FUN_080081b4(param_2 + (byte)(&DAT_08008c28)[uVar3],sVar2);
    if (sVar2 == 0) {
      sVar2 = -1;
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 < 0xd);
  if ((sVar2 == -1) || (*(short *)(param_1 + iVar1 * 2) == 0)) {
    param_3 = param_3 | 0x40;
  }
  *param_2 = (char)param_3;
  return;
}



// ==== FUN_08008c38 @ 08008c38 ====

undefined8 FUN_08008c38(int param_1,undefined4 param_2,ushort *param_3,uint param_4)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined1 uVar5;
  uint uVar6;
  ushort *puVar7;
  char cStack_21;
  undefined4 uStack_20;
  ushort *puStack_1c;
  uint uStack_18;
  
  uStack_20 = param_2;
  puStack_1c = param_3;
  uStack_18 = param_4;
  FUN_0800a408(param_1,param_2,0xb);
  if (5 < param_4) {
    while (*param_3 != 0) {
      puVar7 = param_3 + 1;
      uVar2 = (uint)*param_3;
      for (uVar6 = 0; param_3 = puVar7, uVar6 < 0x10; uVar6 = uVar6 + 1) {
        param_4 = (uVar2 & 1) + param_4 * 2;
        uVar2 = uVar2 >> 1;
        if ((int)(param_4 * 0x8000) < 0) {
          param_4 = param_4 ^ 0x11021;
        }
      }
    }
  }
  uVar2 = 7;
  do {
    uVar4 = uVar2;
    uVar2 = param_4 & 0xf;
    uVar6 = uVar2 + 0x30;
    cVar1 = (char)uVar6;
    param_4 = param_4 >> 4;
    if (0x39 < uVar6) {
      cVar1 = (char)uVar2 + '7';
    }
    *(char *)((int)&uStack_20 + uVar4) = cVar1;
    uVar2 = uVar4 - 1;
  } while ((uVar2 != 0) && (param_4 != 0));
  (&cStack_21)[uVar4] = '~';
  uVar6 = 0;
  while (((uVar6 < uVar2 && (*(char *)(param_1 + uVar6) != ' ')) &&
         ((iVar3 = FUN_080081cc(), uVar4 = uVar6, iVar3 == 0 || (uVar4 = uVar6 + 1, uVar4 != uVar2))
         ))) {
    uVar6 = uVar4 + 1;
  }
  do {
    uVar4 = uVar6 + 1;
    if (uVar2 < 8) {
      uVar5 = *(undefined1 *)((int)&uStack_20 + uVar2);
      uVar2 = uVar2 + 1;
    }
    else {
      uVar5 = 0x20;
    }
    *(undefined1 *)(param_1 + uVar6) = uVar5;
    uVar6 = uVar4;
  } while (uVar4 < 8);
  return CONCAT44(puStack_1c,uStack_20);
}



// ==== FUN_08008cd2 @ 08008cd2 ====

uint FUN_08008cd2(byte *param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = 0;
  iVar2 = 0xb;
  do {
    uVar1 = uVar1 * 0x80 + ((uVar1 & 0xff) >> 1) + (uint)*param_1;
    iVar2 = iVar2 + -1;
    param_1 = param_1 + 1;
  } while (iVar2 != 0);
  return uVar1 & 0xff;
}



// ==== FUN_08008cf0 @ 08008cf0 ====

int FUN_08008cf0(int *param_1,uint param_2)

{
  byte bVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  
  iVar5 = 4;
  iVar4 = *param_1;
  uVar6 = 0xff;
  uVar7 = 0xff;
  do {
    if ((param_1[7] == 0) || (iVar5 = FUN_08008418(iVar4), iVar5 != 0)) break;
    uVar2 = (uint)*(byte *)param_1[8];
    if (uVar2 == 0) {
      iVar5 = 4;
      break;
    }
    bVar1 = ((byte *)param_1[8])[0xb];
    bVar3 = bVar1 & 0x3f;
    *(byte *)((int)param_1 + 6) = bVar3;
    if (((uVar2 == 0xe5) || (uVar2 == 0x2e)) || (((bVar1 & 0x1f) == 8) != param_2)) {
LAB_08008d8e:
      uVar6 = 0xff;
    }
    else {
      if (bVar3 != 0xf) {
        if (((uVar6 & 0xff) != 0) || (uVar6 = FUN_08008cd2(param_1[8]), uVar7 != uVar6)) {
          param_1[0xc] = -1;
        }
        break;
      }
      if ((int)(uVar2 << 0x19) < 0) {
        uVar7 = (uint)*(byte *)(param_1[8] + 0xd);
        uVar2 = uVar2 & 0xbf;
        param_1[0xc] = param_1[5];
        uVar6 = uVar2;
      }
      if (((uVar2 != (uVar6 & 0xff)) || (uVar7 != *(byte *)(param_1[8] + 0xd))) ||
         (iVar5 = FUN_08008b38(*(undefined4 *)(iVar4 + 0xc)), iVar5 == 0)) goto LAB_08008d8e;
      uVar6 = uVar6 - 1;
    }
    iVar5 = FUN_08008948(param_1,0);
  } while (iVar5 == 0);
  if (iVar5 != 0) {
    param_1[7] = 0;
  }
  return iVar5;
}



// ==== FUN_08008dbc @ 08008dbc ====

int FUN_08008dbc(int *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  
  iVar6 = *param_1;
  iVar1 = FUN_080088aa(param_1,0);
  if (iVar1 == 0) {
    uVar5 = 0xff;
    uVar7 = 0xff;
    param_1[0xc] = -1;
    while (iVar1 = FUN_08008418(iVar6,param_1[7]), iVar1 == 0) {
      uVar2 = (uint)*(byte *)param_1[8];
      if (uVar2 == 0) {
        return 4;
      }
      uVar3 = (uint)((byte *)param_1[8])[0xb];
      uVar4 = uVar3 & 0x3f;
      *(char *)((int)param_1 + 6) = (char)uVar4;
      if ((uVar2 == 0xe5) || (((int)(uVar3 << 0x1c) < 0 && (uVar4 != 0xf)))) {
LAB_08008e8a:
        uVar7 = 0xff;
        param_1[0xc] = -1;
      }
      else {
        if (uVar4 != 0xf) {
          if (((uVar7 & 0xff) == 0) && (uVar7 = FUN_08008cd2(param_1[8]), uVar5 == uVar7)) {
            return 0;
          }
          if ((-1 < (int)((uint)*(byte *)((int)param_1 + 0x2f) << 0x1f)) &&
             (iVar1 = FUN_0800a4b8(param_1[8],param_1 + 9,0xb), iVar1 == 0)) {
            return 0;
          }
          goto LAB_08008e8a;
        }
        if (-1 < (int)((uint)*(byte *)((int)param_1 + 0x2f) << 0x19)) {
          if ((int)(uVar2 << 0x19) < 0) {
            uVar5 = (uint)*(byte *)(param_1[8] + 0xd);
            uVar2 = uVar2 & 0xbf;
            param_1[0xc] = param_1[5];
            uVar7 = uVar2;
          }
          if (((uVar2 == (uVar7 & 0xff)) && (uVar5 == *(byte *)(param_1[8] + 0xd))) &&
             (iVar1 = FUN_08008aa8(*(undefined4 *)(iVar6 + 0xc)), iVar1 != 0)) {
            uVar7 = uVar7 - 1;
          }
          else {
            uVar7 = 0xff;
          }
        }
      }
      iVar1 = FUN_08008948(param_1,0);
      if (iVar1 != 0) {
        return iVar1;
      }
    }
  }
  return iVar1;
}



// ==== FUN_08008ea2 @ 08008ea2 ====

undefined8 FUN_08008ea2(int *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int unaff_r7;
  uint uVar4;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  iVar3 = *param_1;
  uStack_28 = param_2;
  if ((*(byte *)((int)param_1 + 0x2f) & 0xa0) != 0) {
    iVar3 = 6;
    goto LAB_08008fd4;
  }
  for (iVar2 = 0; *(short *)(*(int *)(iVar3 + 0xc) + iVar2 * 2) != 0; iVar2 = iVar2 + 1) {
  }
  uStack_24 = param_3;
  uStack_20 = param_4;
  FUN_0800a428(&uStack_28,param_1 + 9,0xc);
  if ((int)((uStack_20 >> 0x18) << 0x1f) < 0) {
    *(undefined1 *)((int)param_1 + 0x2f) = 0x40;
    for (uVar4 = 1; uVar4 < 100; uVar4 = uVar4 + 1) {
      FUN_08008c38(param_1 + 9,&uStack_28,*(undefined4 *)(iVar3 + 0xc),uVar4);
      unaff_r7 = FUN_08008dbc(param_1);
      if (unaff_r7 != 0) break;
    }
    if (uVar4 == 100) {
      iVar3 = 7;
      goto LAB_08008fd4;
    }
    if ((char)unaff_r7 == '\x04') {
      *(undefined1 *)((int)param_1 + 0x2f) = uStack_20._3_1_;
      goto LAB_08008f26;
    }
  }
  else {
LAB_08008f26:
    if ((int)((uStack_20 >> 0x18) << 0x1e) < 0) {
      iVar2 = (iVar2 + 0xcU) / 0xd + 1;
    }
    else {
      iVar2 = 1;
    }
    unaff_r7 = FUN_08008a08(param_1,iVar2);
    if (((unaff_r7 == 0) && (uVar4 = iVar2 - 1, uVar4 != 0)) &&
       (unaff_r7 = FUN_080088aa(param_1,param_1[5] + uVar4 * -0x20), unaff_r7 == 0)) {
      uVar1 = FUN_08008cd2(param_1 + 9);
      while (unaff_r7 = FUN_08008418(iVar3,param_1[7]), unaff_r7 == 0) {
        FUN_08008bb4(*(undefined4 *)(iVar3 + 0xc),param_1[8],uVar4 & 0xff,uVar1);
        *(undefined1 *)(iVar3 + 3) = 1;
        unaff_r7 = FUN_08008948(param_1,0);
        if ((unaff_r7 != 0) || (uVar4 = uVar4 - 1, uVar4 == 0)) break;
      }
    }
    if ((unaff_r7 == 0) && (unaff_r7 = FUN_08008418(iVar3,param_1[7]), unaff_r7 == 0)) {
      FUN_0800a520(param_1[8],0x20,0);
      FUN_0800a408(param_1[8],param_1 + 9,0xb);
      *(byte *)(param_1[8] + 0xc) = *(byte *)((int)param_1 + 0x2f) & 0x18;
      *(undefined1 *)(iVar3 + 3) = 1;
    }
  }
  iVar3 = (int)(char)unaff_r7;
LAB_08008fd4:
  return CONCAT44(uStack_28,iVar3);
}



// ==== FUN_08008fd8 @ 08008fd8 ====

int FUN_08008fd8(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = *param_1;
  uVar3 = param_1[5];
  if (param_1[0xc] == -1) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_080088aa();
  }
  if (iVar1 == 0) {
    while (iVar1 = FUN_08008418(iVar2,param_1[7]), iVar1 == 0) {
      *(undefined1 *)param_1[8] = 0xe5;
      *(undefined1 *)(iVar2 + 3) = 1;
      if ((uVar3 <= (uint)param_1[5]) || (iVar1 = FUN_08008948(param_1,0), iVar1 != 0)) break;
    }
    if (iVar1 == 4) {
      iVar1 = 2;
    }
  }
  return iVar1;
}



// ==== FUN_08009026 @ 08009026 ====

undefined4 FUN_08009026(int *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined2 uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  char cVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  iVar8 = *param_1;
  *(undefined1 *)((int)param_2 + 0x16) = 0;
  if (param_1[7] != 0) {
    if (param_1[0xc] != -1) {
      iVar9 = 0;
      iVar10 = 0;
      uVar2 = 0;
      while (uVar5 = uVar2, uVar2 = (uint)*(ushort *)(*(int *)(iVar8 + 0xc) + iVar10 * 2),
            uVar2 != 0) {
        iVar10 = iVar10 + 1;
        if ((uVar5 != 0) || (0x7ff < uVar2 - 0xd800)) {
          iVar3 = FUN_08008230(uVar2 | uVar5 << 0x10,(int)param_2 + iVar9 + 0x16,0xff - iVar9);
          if (iVar3 == 0) {
            iVar9 = 0;
            break;
          }
          iVar9 = iVar3 + iVar9;
          uVar2 = 0;
        }
      }
      if (uVar5 != 0) {
        iVar9 = 0;
      }
      *(undefined1 *)((int)param_2 + iVar9 + 0x16) = 0;
    }
    uVar5 = 0;
    uVar2 = 0;
    while (uVar2 < 0xb) {
      cVar6 = *(char *)(param_1[8] + uVar2);
      uVar2 = uVar2 + 1;
      if (cVar6 != ' ') {
        if (cVar6 == '\x05') {
          cVar6 = -0x1b;
        }
        if ((uVar2 == 9) && (uVar5 < 0xc)) {
          *(undefined1 *)((int)param_2 + uVar5 + 9) = 0x2e;
          uVar5 = uVar5 + 1;
        }
        *(char *)((int)param_2 + uVar5 + 9) = cVar6;
        uVar5 = uVar5 + 1;
      }
    }
    *(undefined1 *)((int)param_2 + uVar5 + 9) = 0;
    if (*(char *)((int)param_2 + 0x16) == '\0') {
      if (uVar5 == 0) {
        *(undefined1 *)((int)param_2 + 0x16) = 0x3f;
        iVar8 = 1;
      }
      else {
        iVar8 = 0;
        bVar7 = 8;
        for (iVar9 = 0; cVar6 = *(char *)((int)param_2 + iVar9 + 9), cVar6 != '\0';
            iVar9 = iVar9 + 1) {
          uVar2 = (uint)(ushort)(short)cVar6;
          if (uVar2 == 0x2e) {
            bVar7 = 0x10;
          }
          if ((uVar2 - 0x41 < 0x1a) && ((*(byte *)(param_1[8] + 0xc) & bVar7) != 0)) {
            uVar2 = uVar2 + 0x20;
          }
          *(char *)((int)param_2 + iVar8 + 0x16) = (char)uVar2;
          iVar8 = iVar8 + 1;
        }
      }
      *(undefined1 *)((int)param_2 + iVar8 + 0x16) = 0;
      if (*(char *)(param_1[8] + 0xc) == '\0') {
        *(undefined1 *)((int)param_2 + 9) = 0;
      }
    }
    *(byte *)(param_2 + 2) = *(byte *)(param_1[8] + 0xb) & 0x3f;
    uVar4 = FUN_0800819e(param_1[8] + 0x1c);
    *param_2 = uVar4;
    uVar1 = FUN_08008194(param_1[8] + 0x16);
    *(undefined2 *)((int)param_2 + 6) = uVar1;
    uVar1 = FUN_08008194(param_1[8] + 0x18);
    *(undefined2 *)(param_2 + 1) = uVar1;
  }
  return param_4;
}



// ==== FUN_08009164 @ 08009164 ====

undefined8 FUN_08009164(int *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  short *psVar6;
  byte bVar7;
  uint uVar8;
  int *piVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  byte *local_30;
  short *local_2c;
  undefined4 uStack_28;
  
  local_30 = (byte *)*param_2;
  psVar6 = *(short **)(*param_1 + 0xc);
  uVar4 = 0;
  local_2c = (short *)param_3;
  uStack_28 = param_4;
  while( true ) {
    uVar1 = FUN_080081e4(&local_30);
    if (uVar1 == 0xffffffff) goto LAB_0800920a;
    if (0xffff < uVar1) {
      psVar6[uVar4] = (short)(uVar1 >> 0x10);
      uVar4 = uVar4 + 1;
    }
    uVar8 = uVar1 & 0xffff;
    if (((uVar8 < 0x20) || (uVar8 == 0x2f)) || (uVar8 == 0x5c)) break;
    if (((uVar8 < 0x80) && (iVar3 = FUN_0800a588(&DAT_08009378,uVar8), iVar3 != 0)) ||
       (0xfe < uVar4)) goto LAB_0800920a;
    psVar6[uVar4] = (short)uVar1;
    uVar4 = uVar4 + 1;
  }
  if (uVar8 < 0x20) {
    uVar1 = 4;
  }
  else {
    for (; (bVar7 = *local_30, bVar7 == 0x2f || (bVar7 == 0x5c)); local_30 = local_30 + 1) {
    }
    uVar1 = 0;
    if (bVar7 < 0x20) {
      uVar1 = 4;
    }
  }
  *param_2 = local_30;
  for (; (uVar4 != 0 && ((psVar6[uVar4 - 1] == 0x20 || (psVar6[uVar4 - 1] == 0x2e))));
      uVar4 = uVar4 - 1) {
  }
  psVar6[uVar4] = 0;
  if (uVar4 == 0) {
LAB_0800920a:
    uVar2 = 6;
  }
  else {
    for (uVar8 = 0; psVar6[uVar8] == 0x20; uVar8 = uVar8 + 1) {
    }
    if ((uVar8 != 0) || (*psVar6 == 0x2e)) {
      uVar1 = uVar1 | 3;
    }
    for (; (uVar4 != 0 && (psVar6[uVar4 - 1] != 0x2e)); uVar4 = uVar4 - 1) {
    }
    piVar9 = param_1 + 9;
    FUN_0800a350(piVar9,0xb,0x20);
    uVar10 = 0;
    uVar12 = 8;
    uVar11 = 0;
    local_2c = psVar6;
LAB_0800925a:
    uVar5 = (uint)(ushort)local_2c[uVar8];
    uVar8 = uVar8 + 1;
    if (uVar5 != 0) {
      if ((uVar5 == 0x20) || ((uVar5 == 0x2e && (uVar8 != uVar4)))) {
        uVar1 = uVar1 | 3;
      }
      else {
        if ((uVar12 <= uVar11) || (uVar8 == uVar4)) {
          if (uVar12 == 0xb) {
            uVar1 = uVar1 | 3;
            goto LAB_080092a0;
          }
          if (uVar8 != uVar4) {
            uVar1 = uVar1 | 3;
          }
          if (uVar4 < uVar8) goto LAB_080092a0;
          uVar12 = 0xb;
          uVar10 = uVar10 << 2;
          uVar8 = uVar4;
          uVar11 = 8;
          goto LAB_0800925a;
        }
        if (0x7f < uVar5) {
          uVar1 = uVar1 | 2;
          uVar5 = FUN_0800a18c(uVar5,0x1b5);
          if ((int)(uVar5 << 0x18) < 0) {
            uVar5 = (uint)*(byte *)(DAT_08009854 + (uVar5 & 0x7f));
          }
        }
        if ((int)uVar5 < 0x100) {
          if ((uVar5 == 0) || (iVar3 = FUN_0800a588(s________08009384,uVar5), iVar3 != 0)) {
            uVar5 = 0x5f;
            uVar1 = uVar1 | 3;
          }
          else {
            if (uVar5 - 0x41 < 0x1a) {
              uVar10 = uVar10 | 2;
            }
            if (uVar5 - 0x61 < 0x1a) {
              uVar10 = uVar10 | 1;
              uVar5 = uVar5 - 0x20;
            }
          }
        }
        else {
          if (uVar12 - 1 <= uVar11) {
            uVar1 = uVar1 | 3;
            uVar11 = uVar12;
            goto LAB_0800925a;
          }
          *(char *)((int)piVar9 + uVar11) = (char)(uVar5 >> 8);
          uVar11 = uVar11 + 1;
        }
        *(char *)((int)piVar9 + uVar11) = (char)uVar5;
        uVar11 = uVar11 + 1;
      }
      goto LAB_0800925a;
    }
LAB_080092a0:
    if ((char)*piVar9 == -0x1b) {
      *(char *)piVar9 = '\x05';
    }
    if (uVar12 == 8) {
      uVar10 = uVar10 << 2;
    }
    if (((uVar10 & 0xc) == 0xc) || ((uVar10 & 3) == 3)) {
      uVar1 = uVar1 | 2;
    }
    bVar7 = (byte)uVar1;
    if (-1 < (int)(uVar1 << 0x1e)) {
      if ((int)(uVar10 << 0x1f) < 0) {
        bVar7 = bVar7 | 0x10;
      }
      if ((int)(uVar10 << 0x1d) < 0) {
        bVar7 = bVar7 | 8;
      }
    }
    *(byte *)((int)param_1 + 0x2f) = bVar7;
    uVar2 = 0;
  }
  return CONCAT44(local_30,uVar2);
}



// ==== FUN_0800938c @ 0800938c ====

undefined8 FUN_0800938c(int *param_1,byte *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  byte *local_10;
  
  iVar3 = *param_1;
  for (local_10 = param_2; (*local_10 == 0x2f || (*local_10 == 0x5c)); local_10 = local_10 + 1) {
  }
  param_1[2] = 0;
  if (*local_10 < 0x20) {
    *(undefined1 *)((int)param_1 + 0x2f) = 0x80;
    uVar1 = FUN_080088aa(param_1,0);
    return CONCAT44(local_10,uVar1);
  }
  do {
    iVar2 = FUN_08009164(param_1,&local_10);
    if (iVar2 != 0) {
LAB_0800940c:
      return CONCAT44(local_10,iVar2);
    }
    iVar2 = FUN_08008dbc(param_1);
    if (iVar2 != 0) {
      if ((iVar2 == 4) && (-1 < (int)((uint)*(byte *)((int)param_1 + 0x2f) << 0x1d))) {
        return CONCAT44(local_10,5);
      }
      goto LAB_0800940c;
    }
    if ((int)((uint)*(byte *)((int)param_1 + 0x2f) << 0x1d) < 0) goto LAB_0800940c;
    if (-1 < (int)((uint)*(byte *)((int)param_1 + 6) << 0x1b)) {
      iVar2 = 5;
      goto LAB_0800940c;
    }
    iVar2 = FUN_08008a56(iVar3,(param_1[5] & 0x1ffU) + iVar3 + 0x34);
    param_1[2] = iVar2;
  } while( true );
}



// ==== FUN_0800940e @ 0800940e ====

int FUN_0800940e(undefined4 *param_1)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  int iVar6;
  byte *pbVar5;
  
  pbVar3 = (byte *)*param_1;
  pbVar5 = pbVar3;
  if (pbVar3 == (byte *)0x0) {
    return -1;
  }
  do {
    pbVar4 = pbVar5 + 1;
    bVar1 = *pbVar5;
    if (bVar1 < 0x20) break;
    pbVar5 = pbVar4;
  } while (bVar1 != 0x3a);
  if (bVar1 == 0x3a) {
    iVar6 = 2;
    if (((int)(char)*pbVar3 - 0x30U < 10) && (pbVar3 + 2 == pbVar4)) {
      iVar6 = (char)*pbVar3 + -0x30;
    }
    iVar2 = -1;
    if (iVar6 < 2) {
      *param_1 = pbVar4;
      iVar2 = iVar6;
    }
  }
  else {
    iVar2 = 0;
  }
  return iVar2;
}



// ==== FUN_08009458 @ 08009458 ====

undefined4 FUN_08009458(int param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  iVar3 = FUN_08008418(param_1);
  if (iVar3 != 0) {
    return 4;
  }
  iVar3 = FUN_08008194(param_1 + 0x232);
  cVar1 = *(char *)(param_1 + 0x34);
  if (((cVar1 != -0x15) && (cVar1 != -0x17)) && (cVar1 != -0x18)) {
LAB_08009516:
    if (iVar3 == 0xaa55) {
      return 2;
    }
    return 3;
  }
  if ((iVar3 != 0xaa55) || (iVar4 = FUN_0800a4b8(param_1 + 0x86,s_FAT32_08009528,8), iVar4 != 0)) {
    uVar5 = FUN_08008194(param_1 + 0x3f);
    bVar2 = *(byte *)(param_1 + 0x41);
    if ((((uVar5 & uVar5 - 1) != 0) || ((uVar5 != 0x200 || (bVar2 == 0)))) ||
       (((bVar2 & bVar2 - 1) != 0 ||
        (((((iVar4 = FUN_08008194(param_1 + 0x42), iVar4 == 0 || (1 < *(byte *)(param_1 + 0x44) - 1)
            ) || (iVar4 = FUN_08008194(param_1 + 0x45), iVar4 == 0)) ||
          ((iVar4 = FUN_08008194(param_1 + 0x47), iVar4 < 0x80 &&
           (uVar5 = FUN_0800819e(param_1 + 0x54), uVar5 < 0x10000)))) ||
         (iVar4 = FUN_08008194(param_1 + 0x4a), iVar4 == 0)))))) goto LAB_08009516;
  }
  return 0;
}



// ==== FUN_08009534 @ 08009534 ====

void FUN_08009534(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int local_20 [4];
  
  local_20[0] = param_1;
  local_20[1] = param_2;
  local_20[2] = param_3;
  local_20[3] = param_4;
  uVar1 = FUN_08009458(param_1,0);
  if ((uVar1 == 2) || ((uVar1 < 3 && (param_2 != 0)))) {
    for (uVar1 = 0; uVar1 < 4; uVar1 = uVar1 + 1) {
      iVar2 = FUN_0800819e(param_1 + uVar1 * 0x10 + 0x1fa);
      local_20[uVar1] = iVar2;
    }
    if (param_2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = param_2 - 1;
    }
    do {
      if (local_20[uVar1] == 0) {
        uVar3 = 3;
      }
      else {
        uVar3 = FUN_08009458(param_1);
      }
    } while (((param_2 == 0) && (1 < uVar3)) && (uVar1 = uVar1 + 1, uVar1 < 4));
  }
  return;
}



// ==== FUN_08009596 @ 08009596 ====

undefined4 FUN_08009596(undefined4 param_1,undefined4 *param_2,uint param_3)

{
  byte bVar1;
  short *psVar2;
  undefined2 uVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  uint uVar11;
  char *pcVar12;
  char cVar13;
  
  *param_2 = 0;
  iVar5 = FUN_0800940e();
  psVar2 = DAT_08009858;
  if (iVar5 < 0) {
    return 0xb;
  }
  pcVar12 = *(char **)(DAT_08009858 + iVar5 * 2 + 2);
  if (pcVar12 == (char *)0x0) {
    return 0xc;
  }
  *param_2 = pcVar12;
  if ((*pcVar12 == '\0') || (iVar6 = FUN_0800a280(pcVar12[1]), iVar6 << 0x1f < 0)) {
    *pcVar12 = '\0';
    pcVar12[1] = (char)iVar5;
    iVar5 = FUN_0800a28c(pcVar12[1]);
    if (iVar5 << 0x1f < 0) {
      return 3;
    }
    if (((param_3 & 0xfe) == 0) || (-1 < iVar5 << 0x1d)) {
      uVar7 = FUN_08009534(pcVar12,0);
      if (uVar7 == 4) {
        return 1;
      }
      if (uVar7 < 2) {
        iVar6 = *(int *)(pcVar12 + 0x30);
        iVar5 = FUN_08008194(pcVar12 + 0x3f);
        if (iVar5 == 0x200) {
          iVar5 = FUN_08008194(pcVar12 + 0x4a);
          if (iVar5 == 0) {
            iVar5 = FUN_0800819e(pcVar12 + 0x58);
          }
          *(int *)(pcVar12 + 0x1c) = iVar5;
          uVar7 = (uint)(byte)pcVar12[0x44];
          pcVar12[2] = pcVar12[0x44];
          if ((uVar7 == 1) || (uVar7 == 2)) {
            bVar1 = pcVar12[0x41];
            *(ushort *)(pcVar12 + 10) = (ushort)bVar1;
            if ((bVar1 != 0) && ((bVar1 & bVar1 - 1) == 0)) {
              uVar3 = FUN_08008194(pcVar12 + 0x45);
              *(undefined2 *)(pcVar12 + 8) = uVar3;
              if ((pcVar12[8] & 0xfU) == 0) {
                uVar8 = FUN_08008194(pcVar12 + 0x47);
                if (uVar8 == 0) {
                  uVar8 = FUN_0800819e(pcVar12 + 0x54);
                }
                iVar9 = FUN_08008194(pcVar12 + 0x42);
                if (((iVar9 != 0) &&
                    (uVar11 = uVar7 * iVar5 + iVar9 + (uint)(*(ushort *)(pcVar12 + 8) >> 4),
                    uVar11 <= uVar8)) &&
                   (uVar8 = (uVar8 - uVar11) / (uint)*(ushort *)(pcVar12 + 10), uVar8 != 0)) {
                  cVar13 = '\0';
                  if (uVar8 < DAT_0800985c) {
                    cVar13 = '\x03';
                  }
                  if (uVar8 < 0xfff6) {
                    cVar13 = '\x02';
                  }
                  if (uVar8 < 0xff6) {
                    cVar13 = '\x01';
                  }
                  if (cVar13 != '\0') {
                    *(uint *)(pcVar12 + 0x18) = uVar8 + 2;
                    *(int *)(pcVar12 + 0x20) = iVar6;
                    *(int *)(pcVar12 + 0x24) = iVar9 + iVar6;
                    *(uint *)(pcVar12 + 0x2c) = uVar11 + iVar6;
                    if (cVar13 == '\x03') {
                      iVar5 = FUN_08008194(pcVar12 + 0x5e);
                      if (iVar5 != 0) {
                        return 0xd;
                      }
                      if (*(short *)(pcVar12 + 8) != 0) {
                        return 0xd;
                      }
                      uVar10 = FUN_0800819e(pcVar12 + 0x60);
                      *(undefined4 *)(pcVar12 + 0x28) = uVar10;
                      iVar5 = *(int *)(pcVar12 + 0x18) << 2;
                    }
                    else {
                      if (*(short *)(pcVar12 + 8) == 0) {
                        return 0xd;
                      }
                      *(uint *)(pcVar12 + 0x28) = uVar7 * iVar5 + *(int *)(pcVar12 + 0x24);
                      uVar7 = *(uint *)(pcVar12 + 0x18);
                      if (cVar13 == '\x02') {
                        iVar5 = uVar7 << 1;
                      }
                      else {
                        iVar5 = (uVar7 & 1) + (uVar7 * 3 >> 1);
                      }
                    }
                    if (iVar5 + 0x1ffU >> 9 <= *(uint *)(pcVar12 + 0x1c)) {
                      pcVar12[0x14] = -1;
                      pcVar12[0x15] = -1;
                      pcVar12[0x16] = -1;
                      pcVar12[0x17] = -1;
                      pcVar12[0x10] = -1;
                      pcVar12[0x11] = -1;
                      pcVar12[0x12] = -1;
                      pcVar12[0x13] = -1;
                      pcVar12[4] = -0x80;
                      if (((cVar13 == '\x03') && (iVar5 = FUN_08008194(pcVar12 + 100), iVar5 == 1))
                         && (iVar5 = FUN_08008418(pcVar12,iVar6 + 1), iVar5 == 0)) {
                        pcVar12[4] = '\0';
                        iVar5 = FUN_08008194(pcVar12 + 0x232);
                        if (((iVar5 == 0xaa55) &&
                            (iVar5 = FUN_0800819e(pcVar12 + 0x34), iVar5 == DAT_08009860)) &&
                           (iVar5 = FUN_0800819e(pcVar12 + 0x218), iVar5 == DAT_08009864)) {
                          uVar10 = FUN_0800819e(pcVar12 + 0x21c);
                          *(undefined4 *)(pcVar12 + 0x14) = uVar10;
                          uVar10 = FUN_0800819e(pcVar12 + 0x220);
                          *(undefined4 *)(pcVar12 + 0x10) = uVar10;
                        }
                      }
                      *pcVar12 = cVar13;
                      sVar4 = *psVar2 + 1;
                      *psVar2 = sVar4;
                      *(short *)(pcVar12 + 6) = sVar4;
                      FUN_080083b0(pcVar12);
                      return 0;
                    }
                  }
                }
              }
            }
          }
        }
      }
      return 0xd;
    }
  }
  else if (((param_3 & 0xfe) == 0) || (-1 < iVar6 << 0x1d)) {
    return 0;
  }
  return 10;
}



// ==== FUN_080097c2 @ 080097c2 ====

int FUN_080097c2(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  
  iVar4 = 9;
  if ((((param_1 != (undefined4 *)0x0) && (pcVar3 = (char *)*param_1, pcVar3 != (char *)0x0)) &&
      (*pcVar3 != '\0')) &&
     ((*(short *)(param_1 + 1) == *(short *)(pcVar3 + 6) &&
      (iVar1 = FUN_0800a280(pcVar3[1]), -1 < iVar1 << 0x1f)))) {
    iVar4 = 0;
  }
  if (iVar4 == 0) {
    uVar2 = *param_1;
  }
  else {
    uVar2 = 0;
  }
  *param_2 = uVar2;
  return iVar4;
}



// ==== FUN_080097fe @ 080097fe ====

undefined4 FUN_080097fe(undefined1 *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined4 local_20 [2];
  undefined1 *local_18;
  undefined4 uStack_14;
  
  local_20[0] = param_2;
  local_18 = param_1;
  uStack_14 = param_2;
  iVar1 = FUN_0800940e(local_20);
  if (iVar1 < 0) {
    uVar2 = 0xb;
  }
  else {
    iVar1 = DAT_08009858 + iVar1 * 4;
    puVar3 = *(undefined1 **)(iVar1 + 4);
    if (puVar3 != (undefined1 *)0x0) {
      FUN_080083b0(puVar3);
      *puVar3 = 0;
    }
    if (local_18 != (undefined1 *)0x0) {
      *local_18 = 0;
    }
    *(undefined1 **)(iVar1 + 4) = local_18;
    if (param_3 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_08009596(&uStack_14,&local_18,0);
    }
  }
  return uVar2;
}



// ==== FUN_08009868 @ 08009868 ====

int FUN_08009868(int *param_1,undefined4 param_2,uint param_3)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int local_258;
  int local_254;
  byte local_24e;
  int local_234;
  byte local_225;
  undefined1 auStack_220 [512];
  int *piStack_20;
  undefined4 local_1c;
  
  if (param_1 == (int *)0x0) {
    iVar2 = 9;
  }
  else {
    uVar7 = param_3 & 0x3f;
    piStack_20 = param_1;
    local_1c = param_2;
    iVar2 = FUN_08009596(&local_1c,&local_258,uVar7);
    if (iVar2 == 0) {
      local_254 = local_258;
      *(undefined1 **)(local_258 + 0xc) = auStack_220;
      iVar2 = FUN_0800938c(&local_254,local_1c);
      if (iVar2 == 0) {
        if ((int)((uint)local_225 << 0x18) < 0) {
          iVar2 = 6;
        }
        else {
          iVar2 = FUN_0800826a(&local_254,~-(uint)((param_3 & 0x3e) == 0) >> 0x1f);
        }
      }
      if ((param_3 & 0x1c) == 0) {
        if (iVar2 == 0) {
          if ((int)((uint)local_24e << 0x1b) < 0) {
            iVar2 = 4;
          }
          else if (((int)(param_3 << 0x1e) < 0) && ((int)((uint)local_24e << 0x1f) < 0)) {
            iVar2 = 7;
          }
        }
      }
      else {
        if (iVar2 == 0) {
          if ((local_24e & 0x11) == 0) {
            if ((int)(param_3 << 0x1d) < 0) {
              iVar2 = 8;
            }
          }
          else {
            iVar2 = 7;
          }
        }
        else {
          if (iVar2 == 4) {
            iVar2 = FUN_080082ce();
            if (iVar2 == 0) {
              iVar2 = 0x12;
            }
            else {
              iVar2 = FUN_08008ea2(&local_254);
            }
          }
          uVar7 = uVar7 | 8;
        }
        if ((iVar2 == 0) && ((int)(uVar7 << 0x1c) < 0)) {
          uVar3 = FUN_0800a186();
          FUN_080081bc(local_234 + 0xe,uVar3);
          FUN_080081bc(local_234 + 0x16,uVar3);
          iVar5 = local_234;
          iVar4 = FUN_08008a56(local_258,local_234);
          *(undefined1 *)(iVar5 + 0xb) = 0x20;
          FUN_08008a7c(local_258,local_234,0);
          FUN_080081bc(local_234 + 0x1c,0);
          *(undefined1 *)(local_258 + 3) = 1;
          if (iVar4 != 0) {
            uVar3 = *(undefined4 *)(local_258 + 0x30);
            iVar2 = FUN_080086c0(&local_254,iVar4,0);
            if (iVar2 == 0) {
              iVar2 = FUN_08008418(local_258,uVar3);
              *(int *)(local_258 + 0x10) = iVar4 + -1;
            }
          }
        }
      }
      if (iVar2 == 0) {
        if ((int)(uVar7 << 0x1c) < 0) {
          uVar7 = uVar7 | 0x40;
        }
        param_1[9] = *(int *)(local_258 + 0x30);
        param_1[10] = local_234;
        iVar5 = FUN_080082ee(&local_254,~-(uint)((uVar7 & 0xfe) == 0) >> 0x1f);
        param_1[4] = iVar5;
        if (iVar5 == 0) {
          iVar2 = 2;
        }
      }
      if (iVar2 == 0) {
        iVar5 = FUN_08008a56(local_258,local_234);
        param_1[2] = iVar5;
        iVar5 = FUN_0800819e(local_234 + 0x1c);
        param_1[3] = iVar5;
        param_1[0xb] = 0;
        *param_1 = local_258;
        *(undefined2 *)(param_1 + 1) = *(undefined2 *)(local_258 + 6);
        *(char *)(param_1 + 5) = (char)uVar7;
        *(undefined1 *)((int)param_1 + 0x15) = 0;
        param_1[8] = 0;
        param_1[6] = 0;
        FUN_0800a350(param_1 + 0xc,0x200,0);
        if (((int)(uVar7 << 0x1a) < 0) && (param_1[3] != 0)) {
          param_1[6] = param_1[3];
          uVar1 = *(ushort *)(local_258 + 10);
          uVar7 = param_1[2];
          for (uVar6 = param_1[3]; (iVar2 == 0 && ((uint)uVar1 * 0x200 < uVar6));
              uVar6 = uVar6 + (uint)uVar1 * -0x200) {
            uVar7 = FUN_080084fa(param_1);
            if (uVar7 < 2) {
              iVar2 = 2;
            }
            if (uVar7 == 0xffffffff) {
              iVar2 = 1;
            }
          }
          param_1[7] = uVar7;
          if ((iVar2 == 0) && ((uVar6 & 0x1ff) != 0)) {
            iVar5 = FUN_080084e0(local_258);
            if (iVar5 == 0) {
              iVar2 = 2;
            }
            else {
              iVar5 = iVar5 + (uVar6 >> 9);
              param_1[8] = iVar5;
              iVar5 = FUN_0800a2a4(*(undefined1 *)(local_258 + 1),param_1 + 0xc,iVar5,1);
              if (iVar5 != 0) {
                iVar2 = 1;
              }
            }
          }
          if (iVar2 != 0) {
            FUN_0800837a(param_1[4]);
          }
        }
      }
    }
    if (iVar2 != 0) {
      *param_1 = 0;
    }
  }
  return iVar2;
}



// ==== FUN_08009a8c @ 08009a8c ====

undefined8 FUN_08009a8c(int param_1,int param_2,uint param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint local_28;
  int *piStack_24;
  
  *param_4 = 0;
  local_28 = param_3;
  piStack_24 = param_4;
  iVar1 = FUN_080097c2(param_1,&local_28);
  if ((iVar1 == 0) && (iVar1 = (int)*(char *)(param_1 + 0x15), iVar1 == 0)) {
    if ((int)((uint)*(byte *)(param_1 + 0x14) << 0x1f) < 0) {
      uVar5 = *(int *)(param_1 + 0xc) - *(int *)(param_1 + 0x18);
      if (param_3 < uVar5) {
        uVar5 = param_3;
      }
      for (; uVar5 != 0; uVar5 = uVar5 - uVar3) {
        uVar3 = *(uint *)(param_1 + 0x18);
        if ((uVar3 & 0x1ff) == 0) {
          uVar6 = *(ushort *)(local_28 + 10) - 1 & uVar3 >> 9;
          if (uVar6 == 0) {
            if (uVar3 == 0) {
              uVar3 = *(uint *)(param_1 + 8);
            }
            else if (*(int *)(param_1 + 0x2c) == 0) {
              uVar3 = FUN_080084fa(param_1,*(undefined4 *)(param_1 + 0x1c));
            }
            else {
              uVar3 = FUN_0800882a(param_1);
            }
            if (1 < uVar3) {
              if (uVar3 != 0xffffffff) {
                *(uint *)(param_1 + 0x1c) = uVar3;
                goto LAB_08009b84;
              }
              goto LAB_08009c04;
            }
          }
          else {
LAB_08009b84:
            iVar1 = FUN_080084e0(local_28,*(undefined4 *)(param_1 + 0x1c));
            if (iVar1 != 0) {
              iVar1 = uVar6 + iVar1;
              uVar3 = uVar5 >> 9;
              if (uVar3 == 0) {
                if (*(int *)(param_1 + 0x20) != iVar1) {
                  if ((int)((uint)*(byte *)(param_1 + 0x14) << 0x18) < 0) {
                    iVar2 = FUN_0800a2dc(*(undefined1 *)(local_28 + 1),param_1 + 0x30,
                                         *(int *)(param_1 + 0x20),1);
                    if (iVar2 != 0) goto LAB_08009c04;
                    *(byte *)(param_1 + 0x14) = *(byte *)(param_1 + 0x14) & 0x7f;
                  }
                  iVar2 = FUN_0800a2a4(*(undefined1 *)(local_28 + 1),param_1 + 0x30,iVar1,1);
                  if (iVar2 != 0) goto LAB_08009c04;
                }
                *(int *)(param_1 + 0x20) = iVar1;
                goto LAB_08009be0;
              }
              if ((uint)*(ushort *)(local_28 + 10) < uVar3 + uVar6) {
                uVar3 = *(ushort *)(local_28 + 10) - uVar6;
              }
              iVar2 = FUN_0800a2a4(*(undefined1 *)(local_28 + 1),param_2,iVar1,uVar3);
              if (iVar2 == 0) {
                if (((int)((uint)*(byte *)(param_1 + 0x14) << 0x18) < 0) &&
                   (uVar6 = *(int *)(param_1 + 0x20) - iVar1, uVar6 < uVar3)) {
                  FUN_0800a408(param_2 + uVar6 * 0x200,param_1 + 0x30,0x200);
                }
                uVar3 = uVar3 << 9;
                goto LAB_08009b22;
              }
LAB_08009c04:
              iVar1 = 1;
              *(undefined1 *)(param_1 + 0x15) = 1;
              goto LAB_08009c0e;
            }
          }
          iVar1 = 2;
          *(undefined1 *)(param_1 + 0x15) = 2;
          goto LAB_08009c0e;
        }
LAB_08009be0:
        uVar4 = *(uint *)(param_1 + 0x18) & 0x1ff;
        uVar6 = 0x200 - uVar4;
        uVar3 = uVar5;
        if (uVar6 < uVar5) {
          uVar3 = uVar6;
        }
        FUN_0800a408(param_2,uVar4 + param_1 + 0x30,uVar3);
LAB_08009b22:
        *param_4 = uVar3 + *param_4;
        param_2 = param_2 + uVar3;
        *(uint *)(param_1 + 0x18) = uVar3 + *(int *)(param_1 + 0x18);
      }
      iVar1 = 0;
    }
    else {
      iVar1 = 7;
    }
  }
LAB_08009c0e:
  return CONCAT44(local_28,iVar1);
}



// ==== FUN_08009c12 @ 08009c12 ====

undefined8 FUN_08009c12(int param_1,int param_2,uint param_3,int *param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint local_28;
  int *piStack_24;
  
  *param_4 = 0;
  local_28 = param_3;
  piStack_24 = param_4;
  iVar1 = FUN_080097c2(param_1,&local_28);
  if ((iVar1 == 0) && (iVar1 = (int)*(char *)(param_1 + 0x15), iVar1 == 0)) {
    if ((int)((uint)*(byte *)(param_1 + 0x14) << 0x1e) < 0) {
      uVar2 = *(uint *)(param_1 + 0x18);
      if (param_3 + uVar2 < uVar2) {
        param_3 = -uVar2 - 1;
      }
      while (param_3 != 0) {
        uVar2 = *(uint *)(param_1 + 0x18);
        if ((uVar2 & 0x1ff) == 0) {
          uVar5 = *(ushort *)(local_28 + 10) - 1 & uVar2 >> 9;
          if (uVar5 == 0) {
            if (uVar2 == 0) {
              iVar1 = *(int *)(param_1 + 8);
              if (iVar1 == 0) {
                iVar1 = FUN_08008736(param_1,0);
              }
            }
            else if (*(int *)(param_1 + 0x2c) == 0) {
              iVar1 = FUN_08008736(param_1,*(undefined4 *)(param_1 + 0x1c));
            }
            else {
              iVar1 = FUN_0800882a(param_1);
            }
            if (iVar1 == 0) break;
            if (iVar1 == 1) goto LAB_08009d7e;
            if (iVar1 != -1) {
              *(int *)(param_1 + 0x1c) = iVar1;
              if (*(int *)(param_1 + 8) == 0) {
                *(int *)(param_1 + 8) = iVar1;
              }
              goto LAB_08009cfe;
            }
          }
          else {
LAB_08009cfe:
            if ((int)((uint)*(byte *)(param_1 + 0x14) << 0x18) < 0) {
              iVar1 = FUN_0800a2dc(*(undefined1 *)(local_28 + 1),param_1 + 0x30,
                                   *(undefined4 *)(param_1 + 0x20),1);
              if (iVar1 != 0) goto LAB_08009dac;
              *(byte *)(param_1 + 0x14) = *(byte *)(param_1 + 0x14) & 0x7f;
            }
            iVar1 = FUN_080084e0(local_28,*(undefined4 *)(param_1 + 0x1c));
            if (iVar1 == 0) {
LAB_08009d7e:
              iVar1 = 2;
              *(undefined1 *)(param_1 + 0x15) = 2;
              goto LAB_08009dbc;
            }
            iVar1 = iVar1 + uVar5;
            uVar2 = param_3 >> 9;
            if (uVar2 == 0) {
              if (((*(int *)(param_1 + 0x20) == iVar1) ||
                  (*(uint *)(param_1 + 0xc) <= *(uint *)(param_1 + 0x18))) ||
                 (iVar3 = FUN_0800a2a4(*(undefined1 *)(local_28 + 1),param_1 + 0x30,iVar1,1),
                 iVar3 == 0)) {
                *(int *)(param_1 + 0x20) = iVar1;
                goto LAB_08009c60;
              }
            }
            else {
              if ((uint)*(ushort *)(local_28 + 10) < uVar2 + uVar5) {
                uVar2 = *(ushort *)(local_28 + 10) - uVar5;
              }
              iVar3 = FUN_0800a2dc(*(undefined1 *)(local_28 + 1),param_2,iVar1,uVar2);
              if (iVar3 == 0) {
                uVar5 = *(int *)(param_1 + 0x20) - iVar1;
                if (uVar5 < uVar2) {
                  FUN_0800a408(param_1 + 0x30,param_2 + uVar5 * 0x200,0x200);
                  *(byte *)(param_1 + 0x14) = *(byte *)(param_1 + 0x14) & 0x7f;
                }
                uVar2 = uVar2 << 9;
                goto LAB_08009c88;
              }
            }
          }
LAB_08009dac:
          iVar1 = 1;
          *(undefined1 *)(param_1 + 0x15) = 1;
          goto LAB_08009dbc;
        }
LAB_08009c60:
        uVar4 = *(uint *)(param_1 + 0x18) & 0x1ff;
        uVar5 = 0x200 - uVar4;
        uVar2 = param_3;
        if (uVar5 < param_3) {
          uVar2 = uVar5;
        }
        FUN_0800a408(param_1 + 0x30 + uVar4,param_2,uVar2);
        *(byte *)(param_1 + 0x14) = *(byte *)(param_1 + 0x14) | 0x80;
LAB_08009c88:
        param_3 = param_3 - uVar2;
        *param_4 = uVar2 + *param_4;
        param_2 = param_2 + uVar2;
        uVar2 = uVar2 + *(int *)(param_1 + 0x18);
        *(uint *)(param_1 + 0x18) = uVar2;
        if (uVar2 <= *(uint *)(param_1 + 0xc)) {
          uVar2 = *(uint *)(param_1 + 0xc);
        }
        *(uint *)(param_1 + 0xc) = uVar2;
      }
      *(byte *)(param_1 + 0x14) = *(byte *)(param_1 + 0x14) | 0x40;
      iVar1 = 0;
    }
    else {
      iVar1 = 7;
    }
  }
LAB_08009dbc:
  return CONCAT44(local_28,iVar1);
}



// ==== FUN_08009dc0 @ 08009dc0 ====

undefined8 FUN_08009dc0(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int local_18;
  undefined4 uStack_14;
  
  local_18 = param_3;
  uStack_14 = param_4;
  iVar1 = FUN_080097c2(param_1,&local_18);
  if (iVar1 == 0) {
    if ((int)((uint)*(byte *)(param_1 + 5) << 0x19) < 0) {
      if ((int)((uint)*(byte *)(param_1 + 5) << 0x18) < 0) {
        iVar1 = FUN_0800a2dc(*(undefined1 *)(local_18 + 1),param_1 + 0xc,param_1[8],1);
        if (iVar1 != 0) {
          return CONCAT44(local_18,1);
        }
        *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) & 0x7f;
      }
      uVar2 = FUN_0800a186();
      iVar1 = FUN_08008418(local_18,param_1[9]);
      if (iVar1 == 0) {
        iVar1 = param_1[10];
        *(byte *)(iVar1 + 0xb) = *(byte *)(iVar1 + 0xb) | 0x20;
        FUN_08008a7c(*param_1,iVar1,param_1[2]);
        FUN_080081bc(iVar1 + 0x1c,param_1[3]);
        FUN_080081bc(iVar1 + 0x16,uVar2);
        FUN_080081b4(iVar1 + 0x12,0);
        *(undefined1 *)(local_18 + 3) = 1;
        iVar1 = FUN_0800844e(local_18);
        *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) & 0xbf;
      }
    }
  }
  return CONCAT44(local_18,iVar1);
}



// ==== FUN_08009e52 @ 08009e52 ====

void FUN_08009e52(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_10 = param_3;
  uStack_c = param_4;
  iVar1 = FUN_08009dc0();
  if (((iVar1 == 0) && (iVar1 = FUN_080097c2(param_1,&uStack_10), iVar1 == 0)) &&
     (iVar1 = FUN_0800837a(param_1[4]), iVar1 == 0)) {
    *param_1 = 0;
  }
  return;
}



// ==== FUN_08009e7a @ 08009e7a ====

int FUN_08009e7a(int *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int local_218;
  undefined1 auStack_214 [512];
  int *piStack_14;
  undefined4 local_10;
  
  if (param_1 == (int *)0x0) {
    iVar1 = 9;
  }
  else {
    piStack_14 = param_1;
    local_10 = param_2;
    iVar1 = FUN_08009596(&local_10,&local_218,0);
    if (iVar1 == 0) {
      *param_1 = local_218;
      *(undefined1 **)(local_218 + 0xc) = auStack_214;
      iVar1 = FUN_0800938c(param_1,local_10);
      if (iVar1 == 0) {
        if (-1 < (int)((uint)*(byte *)((int)param_1 + 0x2f) << 0x18)) {
          if ((int)((uint)*(byte *)((int)param_1 + 6) << 0x1b) < 0) {
            iVar2 = FUN_08008a56(local_218,param_1[8]);
            param_1[2] = iVar2;
          }
          else {
            iVar1 = 5;
          }
        }
        if (iVar1 == 0) {
          *(undefined2 *)(param_1 + 1) = *(undefined2 *)(local_218 + 6);
          iVar1 = FUN_080088aa(param_1,0);
          if (iVar1 == 0) {
            if (param_1[2] == 0) {
              param_1[4] = 0;
            }
            else {
              iVar2 = FUN_080082ee(param_1,0);
              param_1[4] = iVar2;
              if (iVar2 == 0) {
                iVar1 = 0x12;
              }
            }
          }
        }
      }
      if (iVar1 == 4) {
        iVar1 = 5;
      }
    }
    if (iVar1 != 0) {
      *param_1 = 0;
    }
  }
  return iVar1;
}



// ==== FUN_08009f12 @ 08009f12 ====

void FUN_08009f12(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_10 = param_3;
  uStack_c = param_4;
  iVar1 = FUN_080097c2(param_1,&uStack_10);
  if (iVar1 == 0) {
    iVar1 = 0;
    if (param_1[4] != 0) {
      iVar1 = FUN_0800837a(param_1[4]);
    }
    if (iVar1 == 0) {
      *param_1 = 0;
    }
  }
  return;
}



// ==== FUN_08009f36 @ 08009f36 ====

int FUN_08009f36(undefined4 param_1,int param_2)

{
  int iVar1;
  int local_210;
  undefined1 auStack_20c [512];
  
  iVar1 = FUN_080097c2(param_1,&local_210);
  if (iVar1 == 0) {
    if (param_2 == 0) {
      iVar1 = FUN_080088aa(param_1,0);
    }
    else {
      *(undefined1 **)(local_210 + 0xc) = auStack_20c;
      iVar1 = FUN_08008cf0(param_1,0);
      if (iVar1 == 4) {
        iVar1 = 0;
      }
      if (iVar1 == 0) {
        FUN_08009026(param_1,param_2);
        iVar1 = FUN_08008948(param_1,0);
        if (iVar1 == 4) {
          iVar1 = 0;
        }
      }
    }
  }
  return iVar1;
}



// ==== FUN_08009f90 @ 08009f90 ====

void FUN_08009f90(undefined4 param_1,uint *param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  char *local_38;
  char *local_34 [5];
  undefined4 uStack_20;
  
  uStack_20 = param_1;
  iVar1 = FUN_08009596(&uStack_20,&local_38,0);
  if (iVar1 == 0) {
    *param_3 = local_38;
    iVar1 = *(int *)(local_38 + 0x18);
    if (iVar1 - 2U < *(uint *)(local_38 + 0x14)) {
      uVar6 = 0;
      iVar5 = 0;
      if (*local_38 == '\x01') {
        uVar4 = 2;
        local_34[0] = local_38;
        do {
          iVar1 = FUN_080084fa(local_34,uVar4);
          if (iVar1 == -1) {
            iVar5 = 1;
            break;
          }
          if (iVar1 == 1) {
            iVar5 = 2;
            break;
          }
          if (iVar1 == 0) {
            uVar6 = uVar6 + 1;
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 < *(uint *)(local_38 + 0x18));
      }
      else {
        iVar7 = *(int *)(local_38 + 0x24);
        uVar4 = 0;
        do {
          if (uVar4 == 0) {
            iVar5 = FUN_08008418(local_38,iVar7);
            iVar7 = iVar7 + 1;
            if (iVar5 != 0) break;
          }
          if (*local_38 == '\x02') {
            iVar2 = FUN_08008194(local_38 + uVar4 + 0x34);
            if (iVar2 == 0) {
              uVar6 = uVar6 + 1;
            }
            uVar4 = uVar4 + 2;
          }
          else {
            uVar3 = FUN_0800819e(local_38 + uVar4 + 0x34);
            if ((uVar3 & 0xfffffff) == 0) {
              uVar6 = uVar6 + 1;
            }
            uVar4 = uVar4 + 4;
          }
          uVar4 = uVar4 & 0x1ff;
          iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
      }
      if ((char)iVar5 == '\0') {
        *param_2 = uVar6;
        *(uint *)(local_38 + 0x14) = uVar6;
        local_38[4] = local_38[4] | 1;
      }
    }
    else {
      *param_2 = *(uint *)(local_38 + 0x14);
    }
  }
  return;
}



// ==== FUN_0800a07c @ 0800a07c ====

int FUN_0800a07c(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int local_280;
  int local_27c;
  byte local_276;
  undefined4 local_25c;
  byte local_24d;
  undefined1 auStack_248 [512];
  int local_48 [2];
  int local_40;
  undefined4 local_10;
  
  iVar2 = 0;
  local_10 = param_1;
  iVar1 = FUN_08009596(&local_10,&local_280,2);
  if (iVar1 == 0) {
    local_27c = local_280;
    *(undefined1 **)(local_280 + 0xc) = auStack_248;
    iVar1 = FUN_0800938c(&local_27c,local_10);
    if (iVar1 == 0) {
      iVar1 = FUN_0800826a(&local_27c,2);
    }
    if (iVar1 == 0) {
      if ((int)((uint)local_24d << 0x18) < 0) {
        iVar1 = 6;
      }
      else if ((int)((uint)local_276 << 0x1f) < 0) {
        iVar1 = 7;
      }
      if ((iVar1 == 0) &&
         (iVar2 = FUN_08008a56(local_280,local_25c), (int)((uint)local_276 << 0x1b) < 0)) {
        local_48[0] = local_280;
        local_40 = iVar2;
        iVar1 = FUN_080088aa(local_48,0);
        if (iVar1 == 0) {
          iVar1 = FUN_08008cf0(local_48,0);
          if (iVar1 == 0) {
            iVar1 = 7;
          }
          if (iVar1 == 4) {
            iVar1 = 0;
          }
        }
      }
      if (iVar1 == 0) {
        iVar1 = FUN_08008fd8(&local_27c);
        if ((iVar1 == 0) && (iVar2 != 0)) {
          iVar1 = FUN_080086c0(&local_27c,iVar2,0);
        }
        if (iVar1 == 0) {
          iVar1 = FUN_0800844e(local_280);
        }
      }
    }
  }
  return iVar1;
}



// ==== FUN_0800a13c @ 0800a13c ====

undefined8 FUN_0800a13c(undefined1 *param_1,int param_2,int param_3,uint param_4)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  int local_20;
  uint local_1c;
  
  iVar1 = 0;
  puVar2 = param_1;
  local_20 = param_3;
  local_1c = param_4;
  do {
    do {
      puVar3 = puVar2;
      if ((param_2 + -1 <= iVar1) || (FUN_08009a8c(param_3,&local_1c,1,&local_20), local_20 != 1))
      goto LAB_0800a174;
    } while ((local_1c & 0xff) == 0xd);
    puVar3 = puVar2 + 1;
    *puVar2 = (undefined1)local_1c;
    iVar1 = iVar1 + 1;
    puVar2 = puVar3;
  } while ((local_1c & 0xff) != 10);
LAB_0800a174:
  *puVar3 = 0;
  if (iVar1 == 0) {
    param_1 = (undefined1 *)0x0;
  }
  return CONCAT44(local_20,param_1);
}



// ==== FUN_0800a186 @ 0800a186 ====

undefined4 FUN_0800a186(void)

{
  return 0;
}



// ==== FUN_0800a18c @ 0800a18c ====

ushort FUN_0800a18c(uint param_1,int param_2)

{
  ushort uVar1;
  ushort uVar2;
  
  uVar1 = 0;
  uVar2 = 0;
  if (param_1 < 0x80) {
    uVar2 = (ushort)param_1;
  }
  else if ((param_1 < 0x10000) && (param_2 == 0x1b5)) {
    while ((uVar1 < 0x80 && (param_1 != *(ushort *)(DAT_0800a278 + (uint)uVar1 * 2)))) {
      uVar1 = uVar1 + 1;
    }
    uVar2 = uVar1 + 0x80 & 0xff;
  }
  return uVar2;
}



// ==== FUN_0800a1c6 @ 0800a1c6 ====

uint FUN_0800a1c6(uint param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = 0;
  if ((int)param_1 < 0x80) {
    return param_1;
  }
  if ((param_2 == 0x1b5) && ((int)param_1 < 0x100)) {
    uVar1 = (uint)*(ushort *)(DAT_0800a278 + param_1 * 2 + -0x100);
  }
  return uVar1;
}



// ==== FUN_0800a1f0 @ 0800a1f0 ====

uint FUN_0800a1f0(uint param_1)

{
  ushort *puVar1;
  ushort uVar2;
  uint uVar3;
  ushort *puVar4;
  uint uVar5;
  
  if (0xffff < param_1) {
    return param_1;
  }
  param_1 = param_1 & 0xffff;
  puVar4 = DAT_0800a27c;
  if (0xfff < param_1) {
    puVar4 = DAT_0800a27c + 0xfa;
  }
  while( true ) {
    uVar3 = (uint)*puVar4;
    if ((uVar3 == 0) || (param_1 < uVar3)) goto switchD_0800a234_default;
    puVar1 = puVar4 + 1;
    puVar4 = puVar4 + 2;
    uVar2 = *puVar1 >> 8;
    uVar5 = *puVar1 & 0xff;
    if (param_1 < uVar5 + uVar3) break;
    if (uVar2 == 0) {
      puVar4 = puVar4 + uVar5;
    }
  }
  switch(uVar2) {
  case 0:
    param_1 = (uint)puVar4[param_1 - uVar3];
    break;
  case 1:
    param_1 = param_1 - (param_1 - uVar3 & 1);
    break;
  case 2:
    param_1 = param_1 - 0x10;
    break;
  case 3:
    param_1 = param_1 - 0x20;
    break;
  case 4:
    param_1 = param_1 - 0x30;
    break;
  case 5:
    param_1 = param_1 - 0x1a;
    break;
  case 6:
    param_1 = param_1 + 8;
    break;
  case 7:
    param_1 = param_1 - 0x50;
    break;
  case 8:
    param_1 = param_1 - 0x1c60;
  }
switchD_0800a234_default:
  return param_1 & 0xffff;
}



// ==== FUN_0800a280 @ 0800a280 ====

undefined4 FUN_0800a280(int param_1)

{
  if (param_1 == 1) {
    return 0;
  }
  return 1;
}



// ==== FUN_0800a28c @ 0800a28c ====

undefined8 FUN_0800a28c(int param_1)

{
  int iVar1;
  undefined4 unaff_r7;
  
  if (param_1 == 1) {
    iVar1 = FUN_0800a806();
    return CONCAT44(unaff_r7,~-(uint)(iVar1 == 0) >> 0x1f);
  }
  return CONCAT44(unaff_r7,1);
}



// ==== FUN_0800a2a4 @ 0800a2a4 ====

undefined4 FUN_0800a2a4(int param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4)

{
  char cVar1;
  
  if (param_1 == 1) {
    cVar1 = FUN_0800a994(param_2,param_3,param_4);
    while (cVar1 != '\0') {
      FUN_0800a806();
      cVar1 = FUN_0800a994(param_2,param_3,param_4);
    }
    return 0;
  }
  return 4;
}



// ==== FUN_0800a2dc @ 0800a2dc ====

undefined4 FUN_0800a2dc(int param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4)

{
  char cVar1;
  
  if (param_1 == 1) {
    cVar1 = FUN_0800a9fc(param_2,param_3,param_4);
    while (cVar1 != '\0') {
      FUN_0800a806();
      cVar1 = FUN_0800a9fc(param_2,param_3,param_4);
    }
    return 0;
  }
  return 4;
}



// ==== FUN_0800a314 @ 0800a314 ====

undefined4 FUN_0800a314(int param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  if (param_1 == 1) {
    switch(param_2) {
    case 0:
      return 0;
    case 1:
      uVar1 = FUN_0800a7a4();
      *param_3 = uVar1;
      return 0;
    case 2:
      *param_3 = 0x200;
      return 0;
    case 3:
      *(undefined2 *)param_3 = 8;
      return 0;
    default:
      return 4;
    }
  }
  return 4;
}



// ==== FUN_0800a350 @ 0800a350 ====

uint * FUN_0800a350(uint *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = (param_3 & 0xff) << 8;
  uVar1 = param_3 & 0xff | uVar5;
  uVar5 = uVar1 | (param_3 & 0xffff00ff | uVar5) << 0x10;
  do {
    uVar4 = param_2;
    param_2 = uVar4 - 0x10;
    if (0xf < uVar4) {
      *param_1 = uVar5;
      param_1[1] = uVar5;
      param_1[2] = uVar5;
      param_1[3] = uVar5;
      param_1 = param_1 + 4;
    }
  } while (0xf < uVar4 && param_2 != 0);
  if ((param_2 & 8) != 0) {
    *param_1 = uVar5;
    param_1[1] = uVar5;
    param_1 = param_1 + 2;
  }
  puVar3 = param_1;
  if ((int)(uVar4 << 0x1d) < 0) {
    puVar3 = param_1 + 1;
    *param_1 = uVar5;
  }
  puVar2 = puVar3;
  if ((param_2 & 2) != 0) {
    puVar2 = (uint *)((int)puVar3 + 2);
    *(short *)puVar3 = (short)uVar1;
  }
  puVar3 = puVar2;
  if ((int)(uVar4 * -0x80000000) < 0) {
    puVar3 = (uint *)((int)puVar2 + 1);
    *(char *)puVar2 = (char)param_3;
  }
  return puVar3;
}



// ==== FUN_0800a408 @ 0800a408 ====

void FUN_0800a408(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined2 *puVar3;
  undefined1 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  bool bVar13;
  
  while( true ) {
    if (param_3 == 0) {
      return;
    }
    if (((uint)param_2 & 3) == 0) break;
    param_3 = param_3 - 1;
    *(undefined1 *)param_1 = *(undefined1 *)param_2;
    param_2 = (undefined4 *)((int)param_2 + 1);
    param_1 = (undefined4 *)((int)param_1 + 1);
  }
  if (((uint)param_1 & 3) == 0) {
    while (uVar7 = param_3 - 0x10, 0xf < param_3) {
      uVar9 = *param_2;
      uVar10 = param_2[1];
      uVar11 = param_2[2];
      uVar12 = param_2[3];
      param_2 = param_2 + 4;
      *param_1 = uVar9;
      param_1[1] = uVar10;
      param_1[2] = uVar11;
      param_1[3] = uVar12;
      param_1 = param_1 + 4;
      param_3 = uVar7;
    }
    if ((uVar7 & 8) != 0) {
      uVar9 = *param_2;
      uVar10 = param_2[1];
      param_2 = param_2 + 2;
      *param_1 = uVar9;
      param_1[1] = uVar10;
      param_1 = param_1 + 2;
    }
    puVar1 = param_1;
    puVar5 = param_2;
    if ((int)(param_3 << 0x1d) < 0) {
      puVar5 = param_2 + 1;
      puVar1 = param_1 + 1;
      *param_1 = *param_2;
    }
    puVar2 = puVar1;
    puVar6 = puVar5;
    if ((uVar7 & 2) != 0) {
      puVar6 = (undefined4 *)((int)puVar5 + 2);
      puVar2 = (undefined4 *)((int)puVar1 + 2);
      *(undefined2 *)puVar1 = *(undefined2 *)puVar5;
    }
    if ((int)(param_3 << 0x1f) < 0) {
      *(undefined1 *)puVar2 = *(undefined1 *)puVar6;
    }
    return;
  }
  uVar7 = param_3 - 4;
  if (3 < param_3) {
    puVar5 = param_2;
    if (((uint)param_1 & 1) == 0) {
      do {
        param_2 = puVar5 + 1;
        uVar9 = *puVar5;
        puVar3 = (undefined2 *)((int)param_1 + 2);
        *(short *)param_1 = (short)uVar9;
        bVar13 = 3 < uVar7;
        uVar7 = uVar7 - 4;
        param_1 = param_1 + 1;
        *puVar3 = (short)((uint)uVar9 >> 0x10);
        puVar5 = param_2;
      } while (bVar13);
    }
    else {
      do {
        param_2 = puVar5 + 1;
        uVar9 = *puVar5;
        *(char *)param_1 = (char)uVar9;
        puVar4 = (undefined1 *)((int)param_1 + 3);
        *(short *)((int)param_1 + 1) = (short)((uint)uVar9 >> 8);
        bVar13 = 3 < uVar7;
        uVar7 = uVar7 - 4;
        param_1 = param_1 + 1;
        *puVar4 = (char)((uint)uVar9 >> 0x18);
        puVar5 = param_2;
      } while (bVar13);
    }
  }
  iVar8 = uVar7 + 4;
  do {
    bVar13 = iVar8 != 0;
    iVar8 = iVar8 + -1;
    puVar5 = param_1;
    if (bVar13) {
      puVar5 = (undefined4 *)((int)param_1 + 1);
      *(undefined1 *)param_1 = *(undefined1 *)param_2;
      param_2 = (undefined4 *)((int)param_2 + 1);
    }
    param_1 = puVar5;
  } while (bVar13 && iVar8 != 0);
  return;
}



// ==== FUN_0800a428 @ 0800a428 ====

void FUN_0800a428(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  while (uVar1 = param_3 - 0x10, 0xf < param_3) {
    uVar6 = *param_2;
    uVar7 = param_2[1];
    uVar8 = param_2[2];
    uVar9 = param_2[3];
    param_2 = param_2 + 4;
    *param_1 = uVar6;
    param_1[1] = uVar7;
    param_1[2] = uVar8;
    param_1[3] = uVar9;
    param_1 = param_1 + 4;
    param_3 = uVar1;
  }
  if ((uVar1 & 8) != 0) {
    uVar6 = *param_2;
    uVar7 = param_2[1];
    param_2 = param_2 + 2;
    *param_1 = uVar6;
    param_1[1] = uVar7;
    param_1 = param_1 + 2;
  }
  puVar2 = param_1;
  puVar4 = param_2;
  if ((int)(param_3 << 0x1d) < 0) {
    puVar4 = param_2 + 1;
    puVar2 = param_1 + 1;
    *param_1 = *param_2;
  }
  puVar3 = puVar2;
  puVar5 = puVar4;
  if ((uVar1 & 2) != 0) {
    puVar5 = (undefined4 *)((int)puVar4 + 2);
    puVar3 = (undefined4 *)((int)puVar2 + 2);
    *(undefined2 *)puVar2 = *(undefined2 *)puVar4;
  }
  if ((int)(param_3 << 0x1f) < 0) {
    *(undefined1 *)puVar3 = *(undefined1 *)puVar5;
  }
  return;
}



// ==== FUN_0800a4b8 @ 0800a4b8 ====

uint FUN_0800a4b8(uint *param_1,uint *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint in_r12;
  uint uVar3;
  bool bVar4;
  
  uVar1 = 0;
  while (((uint)param_1 & 3) != 0) {
    bVar4 = param_3 != 0;
    param_3 = param_3 - 1;
    uVar2 = param_3;
    if (bVar4) {
      in_r12 = (uint)(byte)*param_2;
      uVar1 = (byte)*param_1 - in_r12;
      uVar2 = uVar1;
      param_2 = (uint *)((int)param_2 + 1);
      param_1 = (uint *)((int)param_1 + 1);
    }
    if (uVar2 != 0) {
      return uVar1;
    }
  }
  if (((uint)param_2 & 3) == 0) {
    do {
      uVar3 = param_3;
      uVar2 = uVar3 - 4;
      bVar4 = uVar2 == 0;
      if (3 < uVar3) {
        uVar1 = *param_1;
        in_r12 = *param_2;
        bVar4 = uVar1 == in_r12;
        param_2 = param_2 + 1;
        param_1 = param_1 + 1;
      }
      param_3 = uVar2;
    } while (bVar4);
    param_3 = uVar3;
    if (uVar2 < 0xfffffffc) {
      uVar1 = uVar1 << 0x18 | (uVar1 >> 8 & 0xff) << 0x10 | (uVar1 >> 0x10 & 0xff) << 8 |
              uVar1 >> 0x18;
      uVar3 = in_r12 << 0x18 | (in_r12 >> 8 & 0xff) << 0x10 | (in_r12 >> 0x10 & 0xff) << 8 |
              in_r12 >> 0x18;
      uVar2 = uVar1 - uVar3;
      bVar4 = uVar2 != 0;
      if (uVar1 < uVar3) {
        uVar2 = 0xffffffff;
      }
      if (uVar1 >= uVar3 && bVar4) {
        uVar2 = 1;
      }
      return uVar2;
    }
  }
  do {
    uVar3 = param_3;
    uVar2 = uVar3 - 1;
    if (uVar3 != 0) {
      uVar1 = (uint)(byte)*param_1 - (uint)(byte)*param_2;
      uVar2 = uVar1;
      param_2 = (uint *)((int)param_2 + 1);
      param_1 = (uint *)((int)param_1 + 1);
    }
    param_3 = uVar3 - 1;
  } while (uVar2 == 0);
  if (uVar3 == 0) {
    uVar1 = 0;
  }
  return uVar1;
}



// ==== FUN_0800a520 @ 0800a520 ====

uint * FUN_0800a520(int param_1,uint param_2,uint param_3)

{
  undefined1 uVar1;
  undefined2 uVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar5 = (param_3 & 0xff) << 8;
  uVar4 = param_3 & 0xff | uVar5;
  uVar5 = uVar4 | (param_3 & 0xffff00ff | uVar5) << 0x10;
  puVar3 = (uint *)(param_1 + param_2);
  uVar6 = (uint)puVar3 & 3;
  uVar1 = (undefined1)param_3;
  uVar2 = (undefined2)uVar4;
  if (uVar6 != 0) {
    uVar4 = param_2 - uVar6;
    if (param_2 < uVar6) {
      if (uVar4 + uVar6 != 0) {
        puVar3 = (uint *)((int)puVar3 + -1);
        *(undefined1 *)puVar3 = uVar1;
      }
      if ((uVar4 + uVar6 & 2) != 0) {
        puVar3 = (uint *)((int)puVar3 + -1);
        *(undefined1 *)puVar3 = uVar1;
      }
      return puVar3;
    }
    uVar6 = (uint)puVar3 & 2;
    if ((int)puVar3 * -0x80000000 < 0) {
      puVar3 = (uint *)((int)puVar3 + -1);
      *(undefined1 *)puVar3 = uVar1;
    }
    param_2 = uVar4;
    if (uVar6 != 0) {
      puVar3 = (uint *)((int)puVar3 + -2);
      *(undefined2 *)puVar3 = uVar2;
    }
  }
  do {
    uVar4 = param_2;
    param_2 = uVar4 - 0x10;
    if (0xf < uVar4) {
      puVar3[-1] = uVar5;
      puVar3[-2] = uVar5;
      puVar3[-3] = uVar5;
      puVar3 = puVar3 + -4;
      *puVar3 = uVar5;
    }
  } while (0xf < uVar4 && param_2 != 0);
  if ((param_2 & 8) != 0) {
    puVar3[-1] = uVar5;
    puVar3 = puVar3 + -2;
    *puVar3 = uVar5;
  }
  if ((int)(uVar4 * 0x20000000) < 0) {
    puVar3 = puVar3 + -1;
    *puVar3 = uVar5;
  }
  if ((uVar4 * 0x20000000 & 0x40000000) != 0) {
    puVar3 = (uint *)((int)puVar3 + -2);
    *(undefined2 *)puVar3 = uVar2;
  }
  if ((int)(uVar4 * -0x80000000) < 0) {
    puVar3 = (uint *)((int)puVar3 + -1);
    *(undefined1 *)puVar3 = uVar1;
  }
  return puVar3;
}



// ==== FUN_0800a588 @ 0800a588 ====

char * FUN_0800a588(char *param_1,char param_2)

{
  char cVar1;
  
  cVar1 = *param_1;
  while ((cVar1 != '\0' && (cVar1 != param_2))) {
    param_1 = param_1 + 1;
    cVar1 = *param_1;
  }
  if (cVar1 != param_2) {
    param_1 = (char *)0x0;
  }
  return param_1;
}



// ==== FUN_0800a5a0 @ 0800a5a0 ====

void FUN_0800a5a0(undefined1 param_1)

{
  *(undefined1 *)(DAT_0800ab78 + 1) = param_1;
  return;
}



// ==== FUN_0800a5a8 @ 0800a5a8 ====

int FUN_0800a5a8(void)

{
  return (int)*(char *)(DAT_0800ab78 + 1);
}



// ==== FUN_0800a5b2 @ 0800a5b2 ====

undefined8 FUN_0800a5b2(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_0800ab78;
  iVar2 = (**(code **)(DAT_0800ab78 + 0x1c))();
  if (iVar2 != 0) {
    *(undefined1 *)(iVar1 + 1) = 1;
    return CONCAT44(param_4,1);
  }
  if (((*(char *)(iVar1 + 1) == '\x01') || (*(char *)(iVar1 + 1) == '\0')) && (param_1 != 0)) {
    *(undefined1 *)(iVar1 + 1) = 1;
    iVar2 = FUN_0800ac4c();
    if (iVar2 != 0) {
      FUN_0800ac62();
      *(undefined1 *)(iVar1 + 1) = 0;
    }
  }
  return CONCAT44(param_4,(int)*(char *)(iVar1 + 1));
}



// ==== FUN_0800a5f2 @ 0800a5f2 ====

undefined4 FUN_0800a5f2(void)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    iVar1 = (**(code **)(DAT_0800ab78 + 0x20))(0xff);
    if (iVar1 == 0xff) {
      return 0;
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0xffffff);
  return 1;
}



// ==== FUN_0800a618 @ 0800a618 ====

void FUN_0800a618(void)

{
  undefined4 unaff_r7;
  
  FUN_0800b05c();
                    /* WARNING: Could not recover jumptable at 0x0800a62a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(DAT_0800ab78 + 0x20))(0xff,*(code **)(DAT_0800ab78 + 0x20),unaff_r7);
  return;
}



// ==== FUN_0800a62c @ 0800a62c ====

longlong FUN_0800a62c(void)

{
  int iVar1;
  uint unaff_r7;
  
  FUN_0800b050();
  iVar1 = FUN_0800a5f2();
  if (iVar1 == 0) {
    return (ulonglong)unaff_r7 << 0x20;
  }
  FUN_0800a618();
  return CONCAT44(unaff_r7,1);
}



// ==== FUN_0800a646 @ 0800a646 ====

longlong FUN_0800a646(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  short sVar2;
  
  for (sVar2 = -1;
      (iVar1 = (**(code **)(DAT_0800ab78 + 0x20))(0xff), iVar1 != param_1 && (sVar2 != 0));
      sVar2 = sVar2 + -1) {
  }
  if (sVar2 == 0) {
    return CONCAT44(param_4,0xff);
  }
  return (ulonglong)param_4 << 0x20;
}



// ==== FUN_0800a678 @ 0800a678 ====

undefined4 FUN_0800a678(undefined1 *param_1,short param_2)

{
  int iVar1;
  undefined1 uVar2;
  int iVar3;
  code *pcVar4;
  
  iVar3 = FUN_0800a646(0xfe);
  iVar1 = DAT_0800ab78;
  if (iVar3 != 0) {
    return 1;
  }
  while( true ) {
    pcVar4 = *(code **)(iVar1 + 0x20);
    if (param_2 == 0) break;
    uVar2 = (*pcVar4)(0xff);
    *param_1 = uVar2;
    param_1 = param_1 + 1;
    param_2 = param_2 + -1;
  }
  (*pcVar4)(0xff);
  (**(code **)(iVar1 + 0x20))(0xff);
  return 0;
}



// ==== FUN_0800a6b2 @ 0800a6b2 ====

undefined4 FUN_0800a6b2(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  ushort uVar4;
  
  iVar2 = FUN_0800a5f2();
  iVar1 = DAT_0800ab78;
  if (iVar2 != 0) {
    return 1;
  }
  (**(code **)(DAT_0800ab78 + 0x20))(param_2);
  if (param_2 != 0xfd) {
    uVar4 = 0;
    while( true ) {
      if (0x1ff < uVar4) break;
      (**(code **)(iVar1 + 0x20))(*(undefined1 *)(param_1 + (uint)uVar4));
      uVar4 = uVar4 + 1;
    }
    (**(code **)(iVar1 + 0x20))(0xff);
    (**(code **)(iVar1 + 0x20))(0xff);
    uVar3 = (**(code **)(iVar1 + 0x20))(0xff);
    if ((uVar3 & 0x1f) != 5) {
      return 2;
    }
  }
  return 0;
}



// ==== FUN_0800a708 @ 0800a708 ====

undefined8 FUN_0800a708(uint param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  
  FUN_0800a618();
  iVar2 = FUN_0800a62c();
  iVar1 = DAT_0800ab78;
  if (iVar2 != 0) {
    return CONCAT44(param_4,0xff);
  }
  (**(code **)(DAT_0800ab78 + 0x20))(param_1 | 0x40);
  (**(code **)(iVar1 + 0x20))(param_2 >> 0x18);
  (**(code **)(iVar1 + 0x20))(param_2 >> 0x10 & 0xff);
  (**(code **)(iVar1 + 0x20))(param_2 >> 8 & 0xff);
  (**(code **)(iVar1 + 0x20))(param_2 & 0xff);
  (**(code **)(iVar1 + 0x20))(param_3);
  if (param_1 == 0xc) {
    (**(code **)(iVar1 + 0x20))(0xff);
  }
  cVar3 = '\x1f';
  do {
    iVar2 = (**(code **)(iVar1 + 0x20))(0xff);
    if (-1 < iVar2 << 0x18) break;
    bVar4 = cVar3 != '\0';
    cVar3 = cVar3 + -1;
  } while (bVar4);
  return CONCAT44(param_4,iVar2);
}



// ==== FUN_0800a778 @ 0800a778 ====

undefined8 FUN_0800a778(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_0800a708(9,0,1);
  if (iVar1 == 0) {
    iVar1 = FUN_0800a678(param_1,0x10);
  }
  FUN_0800a618();
  return CONCAT44(param_4,~-(uint)(iVar1 == 0) >> 0x1f);
}



// ==== FUN_0800a7a4 @ 0800a7a4 ====

int FUN_0800a7a4(void)

{
  int iVar1;
  uint in_r3;
  uint unaff_r4;
  uint unaff_r5;
  uint local_18;
  
  local_18 = in_r3;
  iVar1 = FUN_0800a778(&local_18);
  if (iVar1 == 0) {
    if ((local_18 & 0xc0) == 0x40) {
      iVar1 = ((unaff_r5 >> 8 & 0xff) + (unaff_r5 & 0xff) * 0x100 + 1 & 0xffff) << 10;
    }
    else {
      iVar1 = (unaff_r4 >> 0x10 & 3) * 0x400 + (unaff_r4 >> 0x18) * 4 + (unaff_r5 >> 6 & 3) + 1 <<
              (((unaff_r5 >> 8 & 3) * 2 + (unaff_r4 >> 8 & 0xf) + (unaff_r5 >> 0x17 & 1)) - 7 & 0xff
              );
    }
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}



// ==== FUN_0800a806 @ 0800a806 ====

undefined8 FUN_0800a806(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  char *pcVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  ushort uVar5;
  short sVar6;
  short sVar7;
  bool bVar8;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  local_20 = param_3;
  uStack_1c = param_4;
  FUN_0800b08a();
  for (uVar5 = 0; uVar5 < 10; uVar5 = uVar5 + 1) {
    (**(code **)(DAT_0800ab78 + 0x20))(0xff);
  }
  sVar6 = 0x14;
  do {
    iVar3 = FUN_0800a708(0,0,0x95);
    pcVar1 = DAT_0800ab78;
    if (iVar3 == 1) break;
    bVar8 = sVar6 != 0;
    sVar6 = sVar6 + -1;
  } while (bVar8);
  *DAT_0800ab78 = '\0';
  if (iVar3 == 1) {
    iVar4 = FUN_0800a708(8,0x1aa,0x87);
    if (iVar4 == 1) {
      for (uVar5 = 0; uVar5 < 4; uVar5 = uVar5 + 1) {
        uVar2 = (**(code **)(pcVar1 + 0x20))(0xff);
        *(undefined1 *)((int)&local_20 + (uint)uVar5) = uVar2;
      }
      if ((local_20._2_1_ == '\x01') && (local_20._3_1_ == -0x56)) {
        sVar6 = -2;
        do {
          FUN_0800a708(0x37,0,1);
          iVar3 = FUN_0800a708(0x29,0x40000000,1);
          sVar7 = sVar6;
          if (iVar3 == 0) break;
          sVar7 = sVar6 + -1;
          bVar8 = sVar6 != 0;
          sVar6 = sVar7;
        } while (bVar8);
        if ((sVar7 != 0) && (iVar4 = FUN_0800a708(0x3a,0,1), iVar4 == 0)) {
          for (uVar5 = 0; uVar5 < 4; uVar5 = uVar5 + 1) {
            uVar2 = (**(code **)(pcVar1 + 0x20))(0xff);
            *(undefined1 *)((int)&local_20 + (uint)uVar5) = uVar2;
          }
          if (local_20 << 0x19 < 0) {
            *pcVar1 = '\x06';
          }
          else {
            *pcVar1 = '\x04';
          }
        }
      }
    }
    else {
      FUN_0800a708(0x37,0,1);
      iVar3 = FUN_0800a708(0x29,0,1);
      if (iVar3 < 2) {
        *pcVar1 = '\x02';
        sVar6 = -2;
        do {
          FUN_0800a708(0x37,0,1);
          iVar3 = FUN_0800a708(0x29,0,1);
          sVar7 = sVar6;
          if (iVar3 == 0) break;
          sVar7 = sVar6 + -1;
          bVar8 = sVar6 != 0;
          sVar6 = sVar7;
        } while (bVar8);
      }
      else {
        *pcVar1 = '\x01';
        sVar6 = -2;
        do {
          iVar3 = FUN_0800a708(1,0);
          sVar7 = sVar6;
          if (iVar3 == 0) break;
          sVar7 = sVar6 + -1;
          bVar8 = sVar6 != 0;
          sVar6 = sVar7;
        } while (bVar8);
      }
      if ((sVar7 == 0) || (iVar4 = FUN_0800a708(0x10,0x200,1), iVar4 != 0)) {
        *pcVar1 = '\0';
      }
    }
  }
  FUN_0800a618();
  (**(code **)(pcVar1 + 0x24))(*(undefined4 *)(pcVar1 + 4));
  if (*pcVar1 == '\0') {
    if (iVar3 == 0) {
      iVar3 = 0xaa;
    }
  }
  else {
    iVar3 = 0;
  }
  return CONCAT44(local_20,iVar3);
}



// ==== FUN_0800a994 @ 0800a994 ====

int FUN_0800a994(int param_1,int param_2,uint param_3)

{
  int iVar1;
  
  if (*DAT_0800ab78 != '\x06') {
    param_2 = param_2 << 9;
  }
  if (param_3 == 1) {
    iVar1 = FUN_0800a708(0x11,param_2,1);
    if (iVar1 == 0) {
      iVar1 = FUN_0800a678(param_1,0x200);
    }
  }
  else {
    FUN_0800a708(0x12,param_2,1);
    do {
      iVar1 = FUN_0800a678(param_1,0x200);
      param_1 = param_1 + 0x200;
      param_3 = param_3 - 1;
      if ((param_3 & 0xff) == 0) break;
    } while (iVar1 == 0);
    FUN_0800a708(0xc,0,1);
  }
  FUN_0800a618();
  return iVar1;
}



// ==== FUN_0800a9fc @ 0800a9fc ====

int FUN_0800a9fc(int param_1,int param_2,uint param_3)

{
  int iVar1;
  
  if (*DAT_0800ab78 != '\x06') {
    param_2 = param_2 << 9;
  }
  if (param_3 == 1) {
    iVar1 = FUN_0800a708(0x18,param_2,1);
    if (iVar1 == 0) {
      iVar1 = FUN_0800a6b2(param_1,0xfe);
    }
  }
  else {
    if (*DAT_0800ab78 != '\x01') {
      FUN_0800a708(0x37,0,1);
      FUN_0800a708(0x17,param_3,1);
    }
    iVar1 = FUN_0800a708(0x19,param_2,1);
    if (iVar1 == 0) {
      do {
        iVar1 = FUN_0800a6b2(param_1,0xfc);
        param_1 = param_1 + 0x200;
        param_3 = param_3 - 1;
        if ((param_3 & 0xff) == 0) break;
      } while (iVar1 == 0);
      iVar1 = FUN_0800a6b2(0,0xfd);
    }
  }
  FUN_0800a618();
  return iVar1;
}



// ==== FUN_0800aa80 @ 0800aa80 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0800aa80(char *param_1)

{
  char *pcVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 auStack_110 [256];
  
  uVar3 = _DAT_0800ab84;
  pcVar1 = DAT_0800ab7c;
  if (*DAT_0800ab7c == '\x01') {
    FUN_0800b172(*DAT_0800ab80,s_Alarm_0800ab87 + 1);
    uVar3 = 8;
  }
  else if (*DAT_0800ab7c == '\0') {
    FUN_0800a520(_DAT_0800ab84,0x32,0);
    if (*param_1 != '/') {
      FUN_0800b3c0(uVar3,&DAT_0800ab70);
    }
    FUN_0800b3c0(uVar3,param_1);
    FUN_0800ac9a();
    iVar4 = FUN_0800acc0();
    if (iVar4 == 0) {
      uVar3 = 8;
    }
    else {
      iVar4 = FUN_0800ad0c(auStack_110,0xff);
      puVar2 = DAT_0800ab80;
      if (iVar4 == 0) {
        FUN_0800ace8();
        uVar3 = 0;
      }
      else {
        uVar3 = FUN_0800b46c(*DAT_0800ab80,auStack_110);
        FUN_0800bf78(*puVar2,uVar3);
        pcVar1[0xb] = '\0';
        FUN_0800cc64(*puVar2);
        uVar3 = 0;
      }
    }
  }
  else {
    FUN_0800b172(*DAT_0800ab80,s_Busy_0800ab90);
    uVar3 = 8;
  }
  return uVar3;
}



// ==== FUN_0800ab1c @ 0800ab1c ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_0800ab1c(char *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar1 = _DAT_0800ab84;
  if (*DAT_0800ab7c != '\0') {
    FUN_0800b172(*DAT_0800ab80,s_Busy_0800ab90);
    return CONCAT44(param_4,8);
  }
  FUN_0800a520(_DAT_0800ab84,0x32,0);
  uVar2 = FUN_0800b3c0(uVar1,&DAT_0800ab74);
  if (*param_1 != '/') {
    FUN_0800b3c0(uVar2,&DAT_0800ab70);
  }
  FUN_0800b3c0(uVar1,param_1);
  iVar3 = FUN_0800a07c();
  if (iVar3 == 0) {
    return (ulonglong)param_4 << 0x20;
  }
  return CONCAT44(param_4,0x45);
}



// ==== FUN_0800ab98 @ 0800ab98 ====

undefined4 FUN_0800ab98(void)

{
  undefined4 in_r3;
  undefined8 uVar1;
  undefined8 uVar2;
  
  FUN_0800abce();
  uVar1 = FUN_0800d200();
  uVar1 = FUN_0800d21c((int)uVar1,(int)((ulonglong)uVar1 >> 0x20),0,DAT_0800af74);
  FUN_0800abd6();
  uVar2 = FUN_0800d200();
  FUN_0800d3c8((int)uVar1,(int)((ulonglong)uVar1 >> 0x20),(int)uVar2,(int)((ulonglong)uVar2 >> 0x20)
              );
  FUN_0800d610();
  return in_r3;
}



// ==== FUN_0800abce @ 0800abce ====

undefined4 FUN_0800abce(void)

{
  return *(undefined4 *)(DAT_0800af78 + 0x18);
}



// ==== FUN_0800abd6 @ 0800abd6 ====

undefined4 FUN_0800abd6(void)

{
  return *(undefined4 *)(DAT_0800af78 + 0xc);
}



// ==== FUN_0800abde @ 0800abde ====

void FUN_0800abde(void)

{
  int iVar1;
  int iVar2;
  
  FUN_0800b0f6();
  iVar1 = DAT_0800af7c;
  iVar2 = (**(code **)(DAT_0800af7c + 0x18))();
  if (iVar2 == 0) {
    iVar2 = FUN_080097fe(DAT_0800af80,&DAT_0800ae10,1);
    *(byte *)(iVar1 + 9) = (byte)(-(uint)(iVar2 == 0) >> 0x1f);
  }
  else {
    *(undefined1 *)(iVar1 + 9) = 0;
  }
  FUN_0800ac14();
  FUN_0800ac62();
  return;
}



// ==== FUN_0800ac14 @ 0800ac14 ====

void FUN_0800ac14(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0800af7c;
  iVar3 = (**(code **)(DAT_0800af7c + 0x18))();
  cVar1 = *(char *)(iVar2 + 9);
  if (iVar3 == 0) {
    if (cVar1 == '\0') {
      FUN_0800b172(0,s_SD_ERROR_0800af8f + 1);
      *(undefined1 *)(iVar2 + 9) = 0;
      return;
    }
  }
  else if (cVar1 == '\x01') {
    FUN_0800b172(0,s_SD_EMPTY_0800af9c);
    return;
  }
  return;
}



// ==== FUN_0800ac4c @ 0800ac4c ====

undefined8 FUN_0800ac4c(void)

{
  int iVar1;
  undefined4 unaff_r7;
  
  iVar1 = FUN_080097fe(DAT_0800af80,&DAT_0800ae10,1);
  return CONCAT44(unaff_r7,-(uint)(iVar1 == 0) >> 0x1f);
}



// ==== FUN_0800ac62 @ 0800ac62 ====

undefined8 FUN_0800ac62(void)

{
  int iVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  int unaff_r6;
  
  iVar2 = DAT_0800af80;
  cVar3 = FUN_08009f90(&DAT_0800ae10,&stack0xfffffff4,&stack0xfffffff0);
  iVar1 = DAT_0800af7c;
  if (cVar3 == '\0') {
    uVar5 = (uint)*(ushort *)(iVar2 + 10) * (*(int *)(iVar2 + 0x18) + -2) >> 1;
    uVar4 = unaff_r6 * (uint)*(ushort *)(iVar2 + 10) >> 1;
    *(uint *)(DAT_0800af7c + 0xc) = uVar5;
    *(uint *)(iVar1 + 0x10) = uVar4;
    *(uint *)(iVar1 + 0x14) = uVar5 - uVar4;
  }
  return CONCAT44(unaff_r6,iVar2);
}



// ==== FUN_0800ac9a @ 0800ac9a ====

undefined8 FUN_0800ac9a(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  uVar1 = DAT_0800af84;
  FUN_0800a350(DAT_0800af84,0x32,0);
  FUN_0800a428(uVar1,&DAT_0800ae10,3);
  FUN_0800b3c0(uVar1,param_1);
  return CONCAT44(param_4,uVar1);
}



// ==== FUN_0800acc0 @ 0800acc0 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_0800acc0(undefined4 param_1)

{
  int iVar1;
  uint unaff_r7;
  
  iVar1 = FUN_08009868(DAT_0800af78,param_1,1);
  if (iVar1 == 0) {
    FUN_0800a5a0(2);
    *DAT_0800af88 = 0;
    *_DAT_0800af8c = 0;
    return CONCAT44(unaff_r7,1);
  }
  return (ulonglong)unaff_r7 << 0x20;
}



// ==== FUN_0800ace8 @ 0800ace8 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_0800ace8(void)

{
  int iVar1;
  uint unaff_r7;
  
  *_DAT_0800af8c = 0;
  iVar1 = FUN_08009e52(DAT_0800af78);
  if (iVar1 == 0) {
    *DAT_0800af88 = 0;
    FUN_0800a5a0();
    return CONCAT44(unaff_r7,1);
  }
  return (ulonglong)unaff_r7 << 0x20;
}



// ==== FUN_0800ad0c @ 0800ad0c ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_0800ad0c(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  uint unaff_r7;
  
  iVar1 = FUN_0800a13c(param_1,param_2,DAT_0800af78);
  if (iVar1 != 0) {
    *_DAT_0800af8c = *_DAT_0800af8c + 1;
    return CONCAT44(unaff_r7,1);
  }
  return (ulonglong)unaff_r7 << 0x20;
}



// ==== FUN_0800ad28 @ 0800ad28 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0800ad28(void)

{
  return *_DAT_0800af8c;
}



// ==== FUN_0800ad30 @ 0800ad30 ====

undefined4 FUN_0800ad30(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auStack_258 [52];
  undefined1 auStack_224 [256];
  undefined4 local_124 [2];
  byte local_11c;
  char local_10e [258];
  undefined4 uStack_c;
  
  uStack_c = param_4;
  cVar1 = FUN_08009e7a(auStack_258);
  if (cVar1 == '\0') {
    do {
      while( true ) {
        iVar3 = FUN_08009f36(auStack_258,local_124);
        if (iVar3 != 0) goto LAB_0800ad9e;
        if ((int)((uint)local_11c << 0x1b) < 0) break;
        if (local_10e[0] == '\0') goto LAB_0800ad9e;
        FUN_0800a350(auStack_224,0xff,0);
        FUN_0800d678(auStack_224,s__FILE___s_SIZE__d__0800afa8,local_10e,local_124[0]);
        FUN_0800b172(param_1,auStack_224);
      }
    } while (local_10e[0] != '\0');
LAB_0800ad9e:
    FUN_08009f12(auStack_258);
    uVar2 = 1;
  }
  else {
    FUN_0800b172(param_1,s_SD_ERROR_0800af8f + 1);
    FUN_08009f12(auStack_258);
    uVar2 = 0;
  }
  return uVar2;
}



// ==== FUN_0800ada8 @ 0800ada8 ====

void FUN_0800ada8(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_0800a5b2(0);
  if (iVar1 != 1) {
    FUN_0800b172(param_1,s_SD_OK_0800afc0);
    return;
  }
  FUN_0800b172(param_1,s_SD_EMPTY_0800af9c);
  return;
}



// ==== FUN_0800add0 @ 0800add0 ====

undefined4 FUN_0800add0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0800a5b2(1);
  if (iVar1 != 0) {
    FUN_0800b172(param_1,s_SD_ERROR_0800af8f + 1);
    return 0x3c;
  }
  iVar1 = FUN_0800ad30(param_1,&DAT_0800ae10);
  if (iVar1 == 0) {
    return 0x3d;
  }
  FUN_0800af00(param_1);
  if (param_1 != 0) {
    FUN_0800af00(0);
  }
  return 0;
}



// ==== FUN_0800ae14 @ 0800ae14 ====

void FUN_0800ae14(undefined4 param_1,char param_2)

{
  undefined4 uVar1;
  float fVar2;
  undefined1 auStack_40 [52];
  
  fVar2 = (float)FUN_0800a350(auStack_40,0x32,0);
  if ((int)((uint)(fVar2 < DAT_0800af58) << 0x1f) < 0) {
    if (param_2 == '\0') {
      FUN_0800d678(auStack_40,s__d_KB_0800afd0,(int)fVar2 & 0xffffU);
      FUN_0800b172(param_1,auStack_40);
    }
    else {
      FUN_0800d678(auStack_40,s__d_KB_0800afc8,(int)fVar2 & 0xffffU);
      FUN_0800b172(param_1,auStack_40);
    }
  }
  else if ((int)((uint)(fVar2 < DAT_0800af5c) << 0x1f) < 0) {
    FUN_0800d6b8(fVar2 * DAT_0800af60);
    uVar1 = FUN_0800d610();
    if (param_2 == '\0') {
      FUN_0800b254(uVar1,param_1,2);
      FUN_0800b172(param_1,&DAT_0800afd8);
    }
    else {
      FUN_0800b254(uVar1,param_1,2);
      FUN_0800b172(param_1,&DAT_0800af64);
    }
  }
  else {
    FUN_0800d6b8(fVar2 * DAT_0800af68);
    uVar1 = FUN_0800d610();
    if (param_2 == '\0') {
      FUN_0800b254(uVar1,param_1,2);
      FUN_0800b172(param_1,&DAT_0800afe0);
    }
    else {
      FUN_0800b254(uVar1,param_1,2);
      FUN_0800b172(param_1,&DAT_0800af6c);
    }
  }
  return;
}



// ==== FUN_0800af00 @ 0800af00 ====

void FUN_0800af00(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint in_fpscr;
  undefined4 uVar2;
  
  FUN_0800b172(param_1,s__SD_Free__0800afe8);
  iVar1 = DAT_0800af7c;
  uVar2 = VectorUnsignedToFloat(*(undefined4 *)(DAT_0800af7c + 0x10),(byte)(in_fpscr >> 0x16) & 3);
  FUN_0800ae14(uVar2,param_1,0);
  FUN_0800b172(param_1,s_Used__0800aff4);
  uVar2 = VectorUnsignedToFloat(*(undefined4 *)(iVar1 + 0x14),(byte)(in_fpscr >> 0x16) & 3);
  FUN_0800ae14(uVar2,param_1,0);
  FUN_0800b172(param_1,s_Total__0800affc);
  uVar2 = VectorUnsignedToFloat(*(undefined4 *)(iVar1 + 0xc),(byte)(in_fpscr >> 0x16) & 3);
  FUN_0800ae14(uVar2,param_1,1);
  FUN_0800b172(param_1,&DAT_0800af70,param_4);
  return;
}



// ==== FUN_0800b004 @ 0800b004 ====

void FUN_0800b004(void)

{
  return;
}



// ==== FUN_0800b050 @ 0800b050 ====

void FUN_0800b050(void)

{
  FUN_0800de0a(DAT_0800b130,0x1000,0);
  return;
}



// ==== FUN_0800b05c @ 0800b05c ====

void FUN_0800b05c(void)

{
  FUN_0800de0a(DAT_0800b130,0x1000,1);
  return;
}



// ==== FUN_0800b068 @ 0800b068 ====

undefined8 FUN_0800b068(undefined4 param_1)

{
  byte local_c [4];
  undefined4 uStack_8;
  
  local_c[0] = 0;
  uStack_8 = param_1;
  FUN_0800d782(DAT_0800b128,&uStack_8,local_c,1);
  return CONCAT44(1000,(uint)local_c[0]);
}



// ==== FUN_0800b08a @ 0800b08a ====

void FUN_0800b08a(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  FUN_0800b004();
  puVar1 = DAT_0800b128;
  *DAT_0800b128 = DAT_0800b12c;
  puVar1[7] = 0x38;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 7;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[8] = 0;
  puVar1[1] = 0x104;
  puVar1[6] = 0x200;
  puVar1[9] = 0;
  iVar2 = FUN_0800d700(puVar1);
  if (iVar2 != 0) {
    FUN_0800dc7c();
  }
  *(uint *)*puVar1 = *(uint *)*puVar1 | 0x40;
  return;
}



// ==== FUN_0800b096 @ 0800b096 ====

void FUN_0800b096(undefined4 param_1)

{
  undefined4 *puVar1;
  uint *puVar2;
  
  puVar1 = DAT_0800b128;
  DAT_0800b128[7] = param_1;
  FUN_0800d700(puVar1);
  puVar2 = (uint *)*puVar1;
  *puVar2 = *puVar2 | 0x40;
  return;
}



// ==== FUN_0800b0b2 @ 0800b0b2 ====

longlong FUN_0800b0b2(void)

{
  uint uVar1;
  uint unaff_r7;
  
  uVar1 = FUN_0800df48();
  uVar1 = (uVar1 / DAT_0800b134 >> 1 & 0xffff) / 0xc & 0xff;
  if (uVar1 < 3) {
    return (ulonglong)unaff_r7 << 0x20;
  }
  if (uVar1 < 5) {
    return CONCAT44(unaff_r7,8);
  }
  if (uVar1 < 9) {
    return CONCAT44(unaff_r7,0x10);
  }
  if (uVar1 < 0x11) {
    return CONCAT44(unaff_r7,0x18);
  }
  if (uVar1 < 0x21) {
    return CONCAT44(unaff_r7,0x20);
  }
  return CONCAT44(unaff_r7,0x38);
}



// ==== FUN_0800b0f6 @ 0800b0f6 ====

void FUN_0800b0f6(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = DAT_0800b138;
  DAT_0800b138[9] = DAT_0800b13c;
  puVar1[7] = DAT_0800b140;
  puVar1[10] = DAT_0800b144;
  puVar1[0xb] = DAT_0800b148;
  puVar1[8] = DAT_0800b14c;
  puVar1[6] = DAT_0800b150;
  uVar2 = FUN_0800b0b2(DAT_0800b128);
  *puVar1 = uVar2;
  puVar1[1] = 0x38;
                    /* WARNING: Could not recover jumptable at 0x0800b124. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)puVar1[9])();
  return;
}



// ==== FUN_0800b154 @ 0800b154 ====

undefined4 FUN_0800b154(undefined4 param_1,char *param_2,undefined4 param_3,undefined4 param_4)

{
  for (; *param_2 != '\0'; param_2 = param_2 + 1) {
    FUN_0800dfc0(param_1,*param_2);
  }
  return param_4;
}



// ==== FUN_0800b172 @ 0800b172 ====

undefined4 FUN_0800b172(undefined4 param_1,char *param_2,undefined4 param_3,undefined4 param_4)

{
  for (; *param_2 != '\0'; param_2 = param_2 + 1) {
    FUN_0800dfc0(param_1,*param_2);
  }
  return param_4;
}



// ==== FUN_0800b190 @ 0800b190 ====

void FUN_0800b190(undefined4 param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = 0;
  iVar4 = 0;
  uVar2 = param_2;
  if (99 < (int)param_2) {
    uVar2 = (int)param_2 / 10;
    uVar3 = (int)param_2 % 10 + 0x30;
  }
  uVar1 = uVar2 & 0xff;
  if (9 < uVar1) {
    uVar2 = uVar1 / 10;
    iVar4 = uVar1 % 10 + 0x30;
  }
  FUN_0800dfc0(param_1,uVar2 + 0x30 & 0xff);
  if (iVar4 != 0) {
    FUN_0800dfc0(param_1,iVar4);
  }
  if ((uVar3 & 0xff) != 0) {
    FUN_0800dfc0(param_1,uVar3 & 0xff);
    return;
  }
  return;
}



// ==== FUN_0800b1fe @ 0800b1fe ====

undefined8 FUN_0800b1fe(undefined4 param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  char cStack_19;
  uint local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  uStack_10 = param_4;
  uStack_14 = param_3;
  local_18 = param_2;
  if (param_2 == 0) {
    FUN_0800dfc0(param_1,0x30);
    return CONCAT44(uStack_14,local_18);
  }
  bVar1 = 0;
  while (param_2 != 0) {
    *(char *)((int)&local_18 + (uint)bVar1) = (char)param_2 + (char)(param_2 / 10) * -10;
    bVar1 = bVar1 + 1;
    param_2 = param_2 / 10;
  }
  for (; bVar1 != 0; bVar1 = bVar1 - 1) {
    FUN_0800dfc0(param_1,(&cStack_19)[bVar1] + '0');
  }
  return CONCAT44(uStack_14,local_18);
}



// ==== FUN_0800b254 @ 0800b254 ====

void FUN_0800b254(float param_1,undefined4 param_2,byte param_3)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  char acStack_29 [17];
  
  bVar1 = param_3;
  if ((int)((uint)(param_1 < 0.0) << 0x1f) < 0) {
    FUN_0800dfc0(param_2,0x2d);
    param_1 = -param_1;
  }
  for (; 1 < bVar1; bVar1 = bVar1 - 2) {
    param_1 = param_1 * DAT_0800b3b0;
  }
  if (bVar1 != 0) {
    param_1 = param_1 * 10.0;
  }
  bVar1 = 0;
  uVar2 = (int)(param_1 + 0.5);
  while (uVar2 != 0) {
    uVar3 = uVar2 / 10;
    acStack_29[bVar1 + 1] = (char)uVar2 + ((char)uVar3 + (char)(uVar3 << 2)) * -2 + '0';
    bVar1 = bVar1 + 1;
    uVar2 = uVar3;
  }
  for (; bVar1 < param_3; bVar1 = bVar1 + 1) {
    acStack_29[bVar1 + 1] = '0';
  }
  if (bVar1 == param_3) {
    acStack_29[bVar1 + 1] = '0';
    bVar1 = bVar1 + 1;
  }
  for (; bVar1 != 0; bVar1 = bVar1 - 1) {
    if (bVar1 == param_3) {
      FUN_0800dfc0(param_2,0x2e);
    }
    FUN_0800dfc0(param_2,acStack_29[bVar1]);
  }
  return;
}



// ==== FUN_0800b332 @ 0800b332 ====

void FUN_0800b332(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if ((int)((uint)*(byte *)(DAT_0800b3b4 + 0x30) << 0x1f) < 0) {
    uVar2 = FUN_0800d6b8(param_1);
    FUN_0800d21c((int)uVar2,(int)((ulonglong)uVar2 >> 0x20),DAT_0800b3b8,DAT_0800b3bc);
    uVar1 = FUN_0800d610();
    FUN_0800b254(uVar1,param_2,4,param_5);
    return;
  }
  FUN_0800b254(param_2,3,param_5);
  return;
}



// ==== FUN_0800b370 @ 0800b370 ====

void FUN_0800b370(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if ((int)((uint)*(byte *)(DAT_0800b3b4 + 0x30) << 0x1f) < 0) {
    uVar2 = FUN_0800d6b8(param_1);
    FUN_0800d21c((int)uVar2,(int)((ulonglong)uVar2 >> 0x20),DAT_0800b3b8,DAT_0800b3bc);
    uVar1 = FUN_0800d610();
    FUN_0800b254(uVar1,param_2,1,param_5);
    return;
  }
  FUN_0800b254(param_2,0,param_5);
  return;
}



// ==== FUN_0800b3c0 @ 0800b3c0 ====

void FUN_0800b3c0(char *param_1,char *param_2)

{
  char cVar1;
  
  for (; *param_1 != '\0'; param_1 = param_1 + 1) {
  }
  do {
    *param_1 = *param_2;
    cVar1 = *param_1;
    param_2 = param_2 + 1;
    param_1 = param_1 + 1;
  } while (cVar1 != '\0');
  return;
}



// ==== FUN_0800b3e0 @ 0800b3e0 ====

void FUN_0800b3e0(short param_1)

{
  int iVar1;
  
  iVar1 = DAT_0800be38;
  *(undefined4 *)(DAT_0800be38 + param_1 * 0x58 + 0x50) = 0;
  *(undefined1 *)(iVar1 + param_1 * 0x58) = 0;
  return;
}



// ==== FUN_0800b3f4 @ 0800b3f4 ====

undefined4 FUN_0800b3f4(short param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = DAT_0800be38 + param_1 * 0x58;
  iVar1 = *(int *)(iVar2 + 0x50);
  if (param_2 == 8) {
    if (iVar1 != 0) {
      *(int *)(iVar2 + 0x50) = iVar1 + -1;
      *(undefined1 *)(iVar2 + iVar1 + -1) = 0;
    }
    return 0;
  }
  if (iVar1 == 0x4f) {
    return 0xb;
  }
  if ((param_2 != 0xd) && (param_2 != 10)) {
    *(int *)(iVar2 + 0x50) = iVar1 + 1;
    *(char *)(iVar2 + iVar1) = (char)param_2;
    *(undefined1 *)(iVar2 + *(int *)(iVar2 + 0x50)) = 0;
    return 0;
  }
  *(undefined4 *)(iVar2 + 0x50) = 0;
  *(int *)(iVar2 + 0x54) = *(int *)(iVar2 + 0x54) + 1;
  return 0x6f;
}



// ==== FUN_0800b444 @ 0800b444 ====

undefined8 FUN_0800b444(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0800e2c0(param_1,&DAT_0800be98,4);
  if (iVar1 == 0) {
    uVar2 = thunk_FUN_0800e430(param_1 + 4);
    FUN_0800c024(uVar2,param_2);
    return CONCAT44(param_4,199);
  }
  return CONCAT44(param_4,2);
}



// ==== FUN_0800b46c @ 0800b46c ====

uint FUN_0800b46c(undefined4 param_1,char *param_2,undefined4 param_3,float param_4)

{
  char cVar1;
  byte *pbVar2;
  char *pcVar3;
  byte bVar4;
  undefined1 uVar5;
  byte bVar6;
  int iVar7;
  uint uVar8;
  char *pcVar9;
  char **ppcVar10;
  char *pcVar11;
  int iVar12;
  undefined4 uVar13;
  undefined4 extraout_s1;
  undefined4 extraout_s1_00;
  undefined4 local_28;
  char *pcStack_24;
  float local_20;
  float local_1c;
  float local_18 [2];
  
  cVar1 = *param_2;
  if ((cVar1 == '\0') || ((cVar1 == 'S' && (param_2[1] == '0')))) {
    return 0;
  }
  local_1c = param_4;
  if (cVar1 != '$') {
    if (cVar1 != '[') {
      if (((((*DAT_0800be40 != '\0') && (cVar1 == '+')) && (param_2[1] == 'V')) &&
          ((param_2[2] == 'E' && (param_2[3] == 'R')))) && (param_2[4] == '=')) {
        *DAT_0800be40 = '\0';
        FUN_0800ecb0(DAT_0800be44,param_2 + 5);
      }
      if (((*param_2 == 'E') && (param_2[1] == 'A')) && (param_2[2] == 'S')) {
        uVar8 = FUN_0800b444(param_2,param_1,param_4);
        return uVar8;
      }
      if ((*DAT_0800be48 != '\x01') && (*DAT_0800be48 != ' ')) {
        uVar8 = FUN_0800ed60(param_1,param_2,param_4);
        return uVar8;
      }
      return 9;
    }
    iVar12 = 10;
    local_28 = param_1;
    pcStack_24 = param_2;
    local_20 = param_4;
    iVar7 = FUN_08015316(param_2,&DAT_0800eb58);
    if (iVar7 == 0) {
      iVar7 = FUN_08015316(param_2,&DAT_0800eb5c);
    }
    if (iVar7 != 0) {
      FUN_0800a350(&pcStack_24,10,0);
      pcVar3 = DAT_0800ec20;
      ppcVar10 = &pcStack_24;
      pcVar9 = (char *)(iVar7 + 3);
      do {
        cVar1 = *pcVar9;
        if (((cVar1 == ']') || (iVar12 == 0)) || (cVar1 == '\0')) {
          if ((cVar1 == ']') && (pcVar9 = pcVar9 + 1, pcVar11 = DAT_0800ec20, *pcVar9 != '\0')) {
            for (; *pcVar9 != '\0'; pcVar9 = pcVar9 + 1) {
              *pcVar11 = *pcVar9;
              pcVar11 = pcVar11 + 1;
            }
            *pcVar11 = '\0';
          }
          uVar13 = FUN_0801534a(&pcStack_24);
          iVar7 = FUN_080152e0(uVar13,extraout_s1_00);
          uVar5 = (undefined1)param_1;
          if (iVar7 == 0) {
            *DAT_0800ec24 = uVar5;
            FUN_0800ead4(param_1);
          }
          else if (iVar7 == 200) {
            *DAT_0800ec24 = uVar5;
            FUN_0800ada8(param_1);
          }
          else {
            if (iVar7 == 0xd2) {
              *DAT_0800ec24 = uVar5;
              uVar8 = FUN_0800add0(param_1,param_2);
              return uVar8;
            }
            if (iVar7 == 0xd7) {
              *DAT_0800ec24 = uVar5;
              uVar8 = FUN_0800ab1c(pcVar3);
              return uVar8;
            }
            if (iVar7 == 0xdc) {
              *DAT_0800ec24 = uVar5;
              bVar6 = FUN_0800aa80(pcVar3);
              return (uint)bVar6;
            }
            if (iVar7 == 0x1e6) {
              *DAT_0800ec24 = uVar5;
              bVar6 = FUN_0801093c(pcVar3);
              return (uint)bVar6;
            }
            if (iVar7 == 0x1f5) {
              iVar7 = FUN_0800eb60(pcVar3,&local_28);
              if (iVar7 == 0) {
                return 3;
              }
              FUN_0801498e(local_28);
            }
            else if (iVar7 == 0x1f6) {
              iVar7 = FUN_0800eb60(pcVar3,&local_28);
              if (iVar7 == 0) {
                return 3;
              }
              FUN_080149dc(local_28);
            }
            else if (iVar7 == 0x1f7) {
              iVar7 = FUN_0800eb60(pcVar3,&local_28);
              if (iVar7 == 0) {
                return 3;
              }
              FUN_08014a2a(local_28);
            }
            else if (iVar7 == 0x1f8) {
              iVar7 = FUN_0800eb60(pcVar3,&local_28);
              if (iVar7 == 0) {
                return 3;
              }
              FUN_0800a350(pcVar3 + 0x20,0x32,0);
              FUN_0800d678(pcVar3 + 0x20,s_AT_BAUD__d_0800ec3c,local_28);
              FUN_0800b154(2,pcVar3 + 0x20);
            }
            else {
              if (iVar7 == 0x321) {
                uVar8 = FUN_08010fea(pcVar3);
                return uVar8;
              }
              FUN_0800b172(param_1,s_No_this_ESP_CMD_0800ec4c);
            }
          }
          return 0;
        }
        *(char *)ppcVar10 = *pcVar9;
        iVar12 = iVar12 + -1;
        ppcVar10 = (char **)((int)ppcVar10 + 1);
        pcVar9 = pcVar9 + 1;
      } while (iVar12 != 0);
    }
    return 100;
  }
  local_20._1_3_ = (undefined3)((uint)param_2 >> 8);
  local_20 = (float)CONCAT31(local_20._1_3_,1);
  bVar6 = 0;
  for (pcVar9 = param_2; (pbVar2 = DAT_0800e928, *pcVar9 != '\0' && (*pcVar9 != '='));
      pcVar9 = pcVar9 + 1) {
    if ((int)param_2[1] - 0x61U < 0x1a) {
      param_2[1] = param_2[1] + -0x20;
    }
  }
  cVar1 = param_2[1];
  local_18[0] = param_4;
  if (cVar1 == '\0') {
    FUN_0800c2c8(param_1);
    return 0;
  }
  if (((cVar1 != '$') && (cVar1 != 'C')) && (cVar1 != 'G')) {
    if (cVar1 == 'J') {
      if ((*DAT_0800e928 != 0) && (*DAT_0800e928 != 0x20)) {
        return 8;
      }
      if (param_2[2] == '=') {
        uVar8 = FUN_0800ed60(param_1,param_2);
        return uVar8;
      }
      return 3;
    }
    if (cVar1 != 'X') {
      bVar4 = *DAT_0800e928;
      if ((bVar4 != 0) && (bVar4 != 1)) {
        return 8;
      }
      cVar1 = param_2[1];
      if (cVar1 == '#') {
        if (param_2[2] == '\0') {
          FUN_0800c904(param_1);
          return 0;
        }
        return 3;
      }
      if (cVar1 == 'H') {
        if (-1 < (int)((uint)*(byte *)(DAT_0800e92c + 0x30) << 0x1b)) {
          return 5;
        }
        iVar7 = FUN_0800e442();
        if (iVar7 != 0) {
          return 0xd;
        }
        *pbVar2 = 4;
        if (param_2[2] != '\0') {
          return 3;
        }
        FUN_0801070c(0);
        if (pbVar2[1] != 0) {
          return 0;
        }
        *pbVar2 = 0;
        FUN_08011b12();
        if (param_2[2] != '\0') {
          return 0;
        }
        FUN_0800e446(param_2);
        return 0;
      }
      if (cVar1 == 'I') {
        local_20 = (float)CONCAT31(local_20._1_3_,2);
        if (param_2[2] == '\0') {
          FUN_08013088(param_2);
          FUN_0800cb86(param_1,param_2);
          return 0;
        }
        local_20 = (float)CONCAT31(local_20._1_3_,3);
        if (param_2[2] == '=') {
          do {
            param_2[((uint)local_20 & 0xff) - 3] = param_2[(uint)local_20 & 0xff];
            uVar8 = (uint)local_20 & 0xff;
            local_20 = (float)CONCAT31(local_20._1_3_,SUB41(local_20,0) + '\x01');
          } while (param_2[uVar8] != '\0');
          FUN_08012eae(param_2);
          return 0;
        }
        return 3;
      }
      if (cVar1 == 'N') {
        local_20 = (float)CONCAT31(local_20._1_3_,2);
        if (param_2[2] == '\0') {
          for (; bVar6 < 2; bVar6 = bVar6 + 1) {
            iVar7 = FUN_08013056(bVar6,param_2);
            if (iVar7 == 0) {
              FUN_0800bf78(param_1,7);
            }
            else {
              FUN_0800cb26(param_1,bVar6,param_2);
            }
          }
          return 0;
        }
        if (bVar4 != 0) {
          return 8;
        }
        bVar6 = 1;
      }
      else {
        if (cVar1 == 'R') {
          if ((((param_2[2] == 'S') && (param_2[3] == 'T')) && (param_2[4] == '=')) &&
             (param_2[6] == '\0')) {
            cVar1 = param_2[5];
            if (cVar1 == '#') {
              FUN_08012ef8(2);
            }
            else if (cVar1 == '$') {
              FUN_08012ef8(1);
            }
            else {
              if (cVar1 != '*') {
                return 3;
              }
              FUN_08012ef8(0xff);
            }
            FUN_0800c144(param_1,9);
            FUN_08010860();
            return 0;
          }
          return 3;
        }
        if (cVar1 == 'S') {
          if (((param_2[2] == 'L') && (param_2[3] == 'P')) && (param_2[4] == '\0')) {
            FUN_0800e8d8(0x80);
            return 0;
          }
          return 3;
        }
      }
      iVar7 = FUN_080129cc(param_2,&local_20,&local_1c);
      if (iVar7 == 0) {
        return 2;
      }
      if (param_2[(uint)local_20 & 0xff] == '\0') {
        if ((*pbVar2 & 0x18) != 0) {
          return 8;
        }
        uVar13 = VectorFloatToUnsigned(local_1c,3);
        iVar7 = FUN_0800c50c(param_1,uVar13);
        if (iVar7 != 0) {
          return 0;
        }
        return 2;
      }
      if (param_2[(uint)local_20 & 0xff] != '=') {
        return 3;
      }
      bVar4 = local_20._0_1_ + 1;
      local_20 = (float)CONCAT31(local_20._1_3_,bVar4);
      if (bVar6 != 0) {
        do {
          param_2[((uint)local_20 & 0xff) - (uint)bVar4] = param_2[(uint)local_20 & 0xff];
          uVar8 = (uint)local_20 & 0xff;
          local_20 = (float)CONCAT31(local_20._1_3_,SUB41(local_20,0) + '\x01');
        } while (param_2[uVar8] != '\0');
        uVar8 = FUN_0800ed60(param_1,param_2);
        if (uVar8 == 0) {
          uVar13 = FUN_0800d6b8(local_1c);
          uVar13 = FUN_08015298(uVar13);
          uVar5 = FUN_080152e0(uVar13,extraout_s1);
          FUN_08012e8c(uVar5,param_2);
          return 0;
        }
        return uVar8;
      }
      iVar7 = FUN_080129cc(param_2,&local_20,local_18);
      if (iVar7 == 0) {
        return 2;
      }
      if ((param_2[(uint)local_20 & 0xff] == '\0') && (local_1c < DAT_0800e924)) {
        uVar8 = FUN_08013120((int)local_1c & 0xff);
        return uVar8;
      }
      return 3;
    }
  }
  if (param_2[2] != '\0') {
    return 3;
  }
  cVar1 = param_2[1];
  if (cVar1 == '$') {
    if ((*DAT_0800e928 & 0x18) != 0) {
      return 8;
    }
    FUN_0800c2d0(param_1);
  }
  else if (cVar1 == 'C') {
    if (*DAT_0800e928 == 2) {
      FUN_08010860();
      FUN_0800c144(param_1,5);
    }
    else {
      if (*DAT_0800e928 != 0) {
        return 8;
      }
      *DAT_0800e928 = 2;
      FUN_0800c144(param_1,4);
    }
  }
  else if (cVar1 == 'G') {
    FUN_0800c9b8(param_1);
  }
  else if ((cVar1 == 'X') && (*DAT_0800e928 == 1)) {
    iVar7 = FUN_0800e442();
    if (iVar7 != 0) {
      return 0xd;
    }
    FUN_0800c144(param_1,3);
    *pbVar2 = 0;
  }
  return 0;
}



// ==== FUN_0800b526 @ 0800b526 ====

void FUN_0800b526(undefined4 param_1)

{
  FUN_0800bf78(param_1,0xb);
  FUN_0800b3e0(param_1);
  return;
}



// ==== FUN_0800b538 @ 0800b538 ====

void FUN_0800b538(void)

{
  char cVar1;
  bool bVar2;
  byte *pbVar3;
  char *pcVar4;
  char *pcVar5;
  undefined1 *puVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 in_r3;
  undefined1 auStack_118 [256];
  undefined4 uStack_18;
  
  pcVar4 = DAT_0800be4c;
  pbVar3 = DAT_0800be48;
  uStack_18 = in_r3;
  if ((*DAT_0800be48 & 0x81) == 0) {
    *DAT_0800be48 = 0;
    iVar7 = FUN_0800e442();
    if (iVar7 != 0) {
      *DAT_0800be50 = *DAT_0800be50 | 0x20;
      FUN_0800b714();
    }
    FUN_0800e446(pcVar4 + 8);
  }
  else {
    FUN_0800c144(0xff,2);
    *pbVar3 = 1;
  }
  iVar7 = FUN_0800fe52();
  if (((iVar7 == 0) && (iVar7 = FUN_0801000a(), iVar7 == 0 && *DAT_0800be54 == '\0')) &&
     (*pbVar3 == 1)) {
    FUN_0800e442();
    FUN_0800c144(0xff,3);
    *pbVar3 = 0;
  }
  bVar2 = false;
  if (*pcVar4 == '\x01') {
    FUN_08010860();
    *pcVar4 = '\0';
    FUN_0800c2a0(0xff);
  }
  else {
    if ((*DAT_0800be54 == '\0') && (*pbVar3 == 1)) {
      FUN_0800c144(pcVar4[2],3);
      *pbVar3 = 0;
    }
    if (pcVar4[1] == '\x01') {
      pcVar4[1] = '\0';
      FUN_08010e8c();
    }
  }
  while( true ) {
    FUN_08010e62();
    pcVar5 = DAT_0800be5c;
    if (*DAT_0800be5c != '\0') {
      iVar7 = FUN_0800ad0c(auStack_118,0xff);
      if (iVar7 == 0) {
        FUN_0800ace8();
        FUN_0800e236(s_G0X0Y0Z0_0800bea0);
        bVar2 = true;
      }
      else {
        *pcVar5 = '\0';
        puVar6 = DAT_0800be60;
        uVar8 = FUN_0800b46c(*DAT_0800be60,auStack_118);
        FUN_0800bf78(*puVar6,uVar8);
      }
    }
    pcVar4[2] = '\0';
    while ((byte)pcVar4[2] < 4) {
      while( true ) {
        cVar1 = pcVar4[2];
        iVar7 = FUN_0800e00e(cVar1);
        if (iVar7 == 0xff) break;
        iVar7 = FUN_0800b3f4(cVar1,(int)(char)iVar7);
        if (iVar7 == 0xb) {
          FUN_0800b526(cVar1);
        }
        else if (iVar7 == 0x6f) {
          FUN_0800b714();
          if (pbVar3[1] != 0) {
            return;
          }
          *(int *)(pcVar4 + 4) = DAT_0800be38 + (short)(ushort)(byte)pcVar4[2] * 0x58;
          uVar8 = FUN_0800b46c();
          cVar1 = pcVar4[2];
          FUN_0800bf78(cVar1,uVar8);
          FUN_0800b3e0(cVar1);
        }
      }
      pcVar4[2] = cVar1 + '\x01';
    }
    FUN_0800fe58();
    FUN_0800b6fe();
    FUN_0800b714();
    if (pbVar3[1] != 0) break;
    if ((bVar2) && (*pbVar3 == 0)) {
      FUN_0800b172(0xff,s_SD_Print_Finish__0800beac);
      bVar2 = false;
    }
    if (*(char *)(DAT_0800be58 + 0x14d) != '\0') {
      *(undefined1 *)(DAT_0800be58 + 0x14d) = 0;
      FUN_080113dc();
    }
  }
  return;
}



// ==== FUN_0800b6da @ 0800b6da ====

void FUN_0800b6da(void)

{
  char *pcVar1;
  int iVar2;
  
  FUN_0800b6fe();
  pcVar1 = DAT_0800be48;
  do {
    FUN_0800b714();
    if (pcVar1[1] != '\0') {
      return;
    }
    iVar2 = FUN_08011602();
  } while ((iVar2 != 0) || (*pcVar1 == '\b'));
  return;
}



// ==== FUN_0800b6fe @ 0800b6fe ====

undefined4 FUN_0800b6fe(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 unaff_r7;
  
  iVar1 = FUN_08011602();
  if (iVar1 != 0) {
    uVar2 = FUN_0800e8d8(2,unaff_r7);
    return uVar2;
  }
  return unaff_r7;
}



// ==== FUN_0800b714 @ 0800b714 ====

undefined4 FUN_0800b714(void)

{
  byte bVar1;
  byte *pbVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 extraout_r3;
  undefined4 unaff_r7;
  float fVar7;
  undefined4 uVar8;
  undefined4 local_50;
  undefined4 local_4c;
  byte local_48;
  undefined1 auStack_44 [8];
  float local_3c;
  undefined1 auStack_38 [8];
  float local_30;
  
  FUN_0800b72c();
  if (DAT_0800be48[2] == 0) {
    return unaff_r7;
  }
  FUN_0800a350(&local_50,0xc,0);
  local_48 = 6;
  iVar4 = FUN_08011602();
  if (iVar4 == 0) {
    bVar3 = *(byte *)(DAT_0800be84 + 9) | *(byte *)(DAT_0800be84 + 8);
    uVar8 = *(undefined4 *)(DAT_0800be84 + 0xc);
  }
  else {
    bVar3 = FUN_08012964();
    bVar3 = *(byte *)(iVar4 + 0x11) & 0x30 | bVar3;
    uVar8 = *(undefined4 *)(iVar4 + 0x30);
  }
  iVar4 = DAT_0800be88;
  fVar7 = 5.0;
  if ((int)((uint)*(byte *)(DAT_0800be88 + 0x30) << 0x1e) < 0) {
    FUN_0800e90a(0x20);
    fVar7 = 5.0;
  }
  while( true ) {
    pbVar2 = DAT_0800be48;
    uVar6 = (uint)DAT_0800be48[2];
    if (uVar6 == 0) {
      return extraout_r3;
    }
    if (DAT_0800be48[1] != 0) break;
    if ((int)(uVar6 << 0x1f) < 0) {
      bVar1 = *DAT_0800be48;
      if ((bVar1 & 0xc0) == 0) {
        bVar1 = DAT_0800be48[10];
        if (bVar1 == 0) {
          if ((int)((uint)DAT_0800be48[4] << 0x1c) < 0) {
            FUN_080128c8(uVar8,bVar3 & 0x30);
            pbVar2[4] = pbVar2[4] & 0xf7;
          }
        }
        else if ((int)((uint)bVar1 << 0x1e) < 0) {
          if (*(char *)(DAT_0800be84 + 9) == '\0') {
            DAT_0800be48[10] = 0;
          }
          else {
            FUN_080128c8(DAT_0800be34,0);
            pbVar2[10] = 1;
          }
        }
        else if ((bVar1 & 0xc) != 0) {
          if (*(char *)(DAT_0800be84 + 9) != '\0') {
            FUN_0800c144(0xff,10);
            if ((int)((uint)*(byte *)(iVar4 + 0x30) << 0x1e) < 0) {
              pbVar2[4] = pbVar2[4] | 8;
            }
            else {
              FUN_080128c8(uVar8,bVar3 & 0x30);
            }
          }
          if ((int)((uint)pbVar2[10] << 0x1c) < 0) {
            FUN_0800e8d8(2);
          }
          pbVar2[10] = 0;
        }
      }
      else if ((int)(uVar6 << 0x1d) < 0) {
        if (bVar1 == 0x80) {
          FUN_0800c144(0xff,0xb);
          FUN_080128c8(DAT_0800be34,0);
          FUN_08012988(0);
          FUN_08011b12();
          while (pbVar2[1] == 0) {
            FUN_0800b72c();
          }
          return extraout_r3;
        }
        if ((bVar1 == 0x40) && (iVar5 = FUN_0800e442(), iVar5 == 0)) {
          pbVar2[2] = pbVar2[2] & 0xdf;
        }
        if ((int)((uint)pbVar2[2] << 0x1c) < 0) {
          if (((*(byte *)(iVar4 + 0x30) & 0x12) == 0x10) &&
             ((int)((uint)(local_3c < DAT_0800be3c) << 0x1f) < 0)) {
            local_50 = DAT_0800be94;
            local_3c = fVar7;
            FUN_0801080e(auStack_44,&local_50);
          }
          iVar5 = DAT_0800be84;
          if ((*(char *)(DAT_0800be84 + 9) != '\0') && (-1 < (int)((uint)pbVar2[2] << 0x1e))) {
            if ((int)((uint)*(byte *)(iVar4 + 0x30) << 0x1e) < 0) {
              pbVar2[4] = pbVar2[4] | 8;
            }
            else {
              FUN_080128c8(uVar8,bVar3 & 0x30);
              FUN_08012adc(0x40800000,1);
            }
          }
          if ((*(char *)(iVar5 + 8) != '\0') && (-1 < (int)((uint)pbVar2[2] << 0x1e))) {
            FUN_08012988(bVar3 & 0xc0);
            FUN_08012adc(0x3f800000,1);
          }
          if (((*(byte *)(iVar4 + 0x30) & 0x12) == 0x10) && (-1 < (int)((uint)pbVar2[2] << 0x1e))) {
            local_50 = DAT_0800be90;
            local_48 = local_48 | bVar3 & 0xf0;
            local_4c = uVar8;
            FUN_0801080e(auStack_38,&local_50);
          }
          if (-1 < (int)((uint)pbVar2[2] << 0x1e)) {
            pbVar2[2] = pbVar2[2] | 0x10;
            FUN_0800e8d8(2);
          }
        }
      }
      else {
        DAT_0800be48[10] = 0;
        FUN_0800e876(auStack_44,DAT_0800be8c);
        if (-1 < (int)((uint)pbVar2[2] << 0x1e)) {
          FUN_0800a428(auStack_38,auStack_44,0xc);
          fVar7 = fVar7 + local_30;
          if (-1 < (int)((uint)(fVar7 < -5.0) << 0x1f)) {
            fVar7 = -5.0;
          }
        }
        if ((((int)((uint)*(byte *)(iVar4 + 0x30) << 0x1b) < 0) &&
            ((int)((uint)(local_3c < -5.0) << 0x1f) < 0)) &&
           (-1 < (int)((uint)*(byte *)(iVar4 + 0x30) << 0x1e))) {
          if ((int)((uint)(local_3c < fVar7) << 0x1f) < 0) {
            local_50 = DAT_0800be90;
            local_48 = local_48 | bVar3 & 0xf0;
            local_4c = uVar8;
            local_3c = fVar7;
            FUN_0801080e(auStack_44,&local_50);
          }
          local_48 = 6;
          local_4c = 0;
          FUN_080128c8(DAT_0800be34);
          FUN_08012988(0);
          if ((int)((uint)(local_3c < -5.0) << 0x1f) < 0) {
            local_3c = -5.0;
            local_50 = DAT_0800be94;
            FUN_0801080e(auStack_44,&local_50);
          }
        }
        else {
          FUN_080128c8(DAT_0800be34,0);
          FUN_08012988(0);
        }
        pbVar2[2] = pbVar2[2] & 0xfd | 4;
      }
    }
    FUN_0800b72c();
  }
  return extraout_r3;
}



// ==== FUN_0800b72c @ 0800b72c ====

undefined4 FUN_0800b72c(void)

{
  char cVar1;
  byte bVar2;
  byte *pbVar3;
  uint *puVar4;
  byte *pbVar5;
  byte *pbVar6;
  int iVar7;
  undefined4 uVar8;
  byte bVar9;
  undefined4 in_r3;
  byte bVar10;
  uint uVar11;
  uint uVar12;
  
  pbVar3 = DAT_0800be48;
  cVar1 = *DAT_0800be64;
  if (cVar1 != '\0') {
    *DAT_0800be48 = 1;
    FUN_0800c114(0xff,cVar1);
    if ((cVar1 == '\x01') || (cVar1 == '\x02')) {
      FUN_0800c144(0xff,1);
    }
    FUN_0800e8f8();
  }
  puVar4 = DAT_0800be68;
  uVar11 = *DAT_0800be68;
  if (uVar11 != 0) {
    uVar12 = 0;
    do {
      if (uVar11 == 0) break;
      if ((int)((uVar11 >> uVar12) << 0x1f) < 0) {
        FUN_0800cc64(uVar12);
        uVar11 = uVar11 & ~(1 << uVar12);
        *puVar4 = ~(1 << uVar12) & *puVar4;
      }
      uVar12 = uVar12 + 1 & 0xff;
    } while (uVar12 < 4);
  }
  uVar11 = (uint)*DAT_0800be50;
  if (*DAT_0800be6c != '\0') {
    uVar11 = uVar11 | 4;
    *DAT_0800be6c = '\0';
  }
  if (uVar11 != 0) {
    if ((int)(uVar11 << 0x1b) < 0) {
      pbVar3[1] = 1;
      return in_r3;
    }
    if ((uVar11 & 0xe8) != 0) {
      if ((*pbVar3 & 3) == 0) {
        if (((*pbVar3 & 0x28) != 0) && ((pbVar3[2] & 0xc0) == 0)) {
          FUN_08011df6();
          pbVar3[4] = 2;
          if ((*pbVar3 == 0x20) && (-1 < (int)(uVar11 << 0x18))) {
            pbVar3[2] = pbVar3[2] | 0x80;
          }
        }
        bVar2 = *pbVar3;
        if (bVar2 == 0) {
          pbVar3[2] = 1;
        }
        if (((int)(uVar11 << 0x19) < 0) && (-1 < (int)((uint)bVar2 << 0x1a))) {
          pbVar3[2] = pbVar3[2] | 0x40;
        }
        if (((int)(uVar11 << 0x1c) < 0) && ((bVar2 & 0xe0) == 0)) {
          *pbVar3 = 0x10;
        }
        if ((int)(uVar11 << 0x1a) < 0) {
          FUN_0800c144(0xff,6);
          if (-1 < (int)((uint)pbVar3[2] << 0x18)) {
            if ((*pbVar3 == 0x40) && ((int)((uint)pbVar3[2] << 0x1c) < 0)) {
              if ((int)((uint)pbVar3[4] << 0x1d) < 0) {
                FUN_08011df6();
                pbVar3[4] = 6;
                pbVar3[2] = pbVar3[2] & 0xfe;
              }
              pbVar3[2] = pbVar3[2] & 0xe3 | 2;
            }
            if (*pbVar3 != 0x80) {
              *pbVar3 = 0x40;
            }
          }
          pbVar3[2] = pbVar3[2] | 0x20;
        }
      }
      if ((int)(uVar11 << 0x18) < 0) {
        if (*pbVar3 == 1) {
          pbVar3[2] = pbVar3[2] | 5;
        }
        *pbVar3 = 0x80;
      }
      FUN_0800e8e2(0xe8);
    }
    if ((int)(uVar11 << 0x1e) < 0) {
      if ((uVar11 & 0x68) == 0) {
        if (*pbVar3 == 0x40) {
          uVar12 = (uint)pbVar3[2];
          if (-1 < (int)(uVar12 << 0x1a)) {
            if ((int)(uVar12 << 0x1b) < 0) {
              *pbVar3 = 0;
            }
            else if ((int)(uVar12 << 0x1d) < 0) {
              pbVar3[2] = pbVar3[2] | 8;
            }
          }
        }
        uVar12 = (uint)*pbVar3;
        if ((uVar12 == 0) || (((int)(uVar12 << 0x1b) < 0 && ((int)((uint)pbVar3[2] << 0x1f) < 0))))
        {
          if ((uVar12 == 0x10) && (pbVar3[10] != 0)) {
            pbVar3[10] = pbVar3[10] | 8;
          }
          else {
            pbVar3[4] = 0;
            iVar7 = FUN_08011602();
            if ((iVar7 == 0) || ((int)((uint)pbVar3[2] << 0x19) < 0)) {
              pbVar3[2] = 0;
              *pbVar3 = 0;
            }
            else {
              pbVar3[2] = 0;
              *pbVar3 = 8;
              FUN_08011ea4();
              FUN_08011aa0();
            }
          }
        }
      }
      FUN_0800e8e2(2);
    }
    if ((int)(uVar11 << 0x1d) < 0) {
      if ((((*pbVar3 & 0xd0) == 0) || (pbVar3[3] != 0)) || ((int)((uint)pbVar3[2] << 0x18) < 0)) {
        if ((int)((uint)pbVar3[2] << 0x18) < 0) {
          pbVar3[4] = 0;
          FUN_080115a8();
          FUN_08011da2();
          FUN_0800ecf2();
          FUN_08011a18();
        }
        if ((int)((uint)pbVar3[2] << 0x1a) < 0) {
          pbVar3[2] = pbVar3[2] & 0x7f | 1;
          *pbVar3 = 0x40;
        }
        else {
          pbVar3[2] = 0;
          *pbVar3 = 0;
        }
      }
      else {
        FUN_08011a54();
        if ((int)((uint)pbVar3[4] << 0x1e) < 0) {
          pbVar3[2] = pbVar3[2] | 1;
        }
        pbVar3[4] = pbVar3[4] & 0xf9;
      }
      FUN_0800e8e2(4);
    }
  }
  uVar11 = (uint)*DAT_0800be70;
  if (uVar11 != 0) {
    FUN_0800e914();
    pbVar5 = DAT_0800be74;
    bVar2 = pbVar3[7];
    *DAT_0800be74 = bVar2;
    if ((int)(uVar11 << 0x1f) < 0) {
      *pbVar5 = 100;
    }
    if ((int)(uVar11 << 0x1e) < 0) {
      *pbVar5 = *pbVar5 + 10;
    }
    if ((int)(uVar11 << 0x1d) < 0) {
      *pbVar5 = *pbVar5 - 10;
    }
    if ((int)(uVar11 << 0x1c) < 0) {
      *pbVar5 = *pbVar5 + 1;
    }
    if ((int)(uVar11 << 0x1b) < 0) {
      *pbVar5 = *pbVar5 - 1;
    }
    if (*pbVar5 < 200) {
      bVar9 = *pbVar5;
    }
    else {
      bVar9 = 200;
    }
    *pbVar5 = bVar9;
    if (*pbVar5 < 0xb) {
      bVar9 = 10;
    }
    else {
      bVar9 = *pbVar5;
    }
    *pbVar5 = bVar9;
    pbVar6 = DAT_0800be78;
    bVar9 = pbVar3[8];
    *DAT_0800be78 = bVar9;
    if ((int)(uVar11 << 0x1a) < 0) {
      *pbVar6 = 100;
    }
    if ((int)(uVar11 << 0x19) < 0) {
      *pbVar6 = *pbVar6 + 10;
    }
    if ((int)(uVar11 << 0x18) < 0) {
      *pbVar6 = *pbVar6 - 10;
    }
    if (*pbVar6 < 100) {
      bVar10 = *pbVar6;
    }
    else {
      bVar10 = 100;
    }
    *pbVar6 = bVar10;
    if (*pbVar6 < 0xb) {
      bVar10 = 10;
    }
    else {
      bVar10 = *pbVar6;
    }
    *pbVar6 = bVar10;
    if ((*pbVar5 != bVar2) || (*pbVar6 != bVar9)) {
      pbVar3[7] = *pbVar5;
      pbVar3[8] = *pbVar6;
      pbVar3[0xb] = 0;
      FUN_08011734();
      FUN_08011a54();
    }
  }
  bVar2 = *DAT_0800be7c;
  uVar11 = (uint)bVar2;
  if (uVar11 != 0) {
    FUN_0800e91c();
    pbVar5 = DAT_0800be80;
    bVar9 = pbVar3[9];
    *DAT_0800be80 = bVar9;
    if ((int)(uVar11 << 0x1f) < 0) {
      *pbVar5 = 100;
    }
    if ((int)(uVar11 << 0x1e) < 0) {
      *pbVar5 = *pbVar5 + 10;
    }
    if ((int)(uVar11 << 0x1d) < 0) {
      *pbVar5 = *pbVar5 - 10;
    }
    if ((int)(uVar11 << 0x1c) < 0) {
      *pbVar5 = *pbVar5 + 1;
    }
    if ((int)(uVar11 << 0x1b) < 0) {
      *pbVar5 = *pbVar5 - 1;
    }
    if (*pbVar5 < 200) {
      bVar10 = *pbVar5;
    }
    else {
      bVar10 = 200;
    }
    *pbVar5 = bVar10;
    if (*pbVar5 == 0) {
      bVar10 = 0;
    }
    else {
      bVar10 = *pbVar5;
    }
    *pbVar5 = bVar10;
    if (*pbVar5 != bVar9) {
      pbVar3[9] = *pbVar5;
      if (*pbVar3 == 0) {
        FUN_080128c8(*(undefined4 *)(DAT_0800be84 + 0xc),*(undefined1 *)(DAT_0800be84 + 9));
      }
      else {
        pbVar3[4] = pbVar3[4] | 8;
      }
      pbVar3[0xb] = 0;
    }
    if (((int)(uVar11 << 0x1a) < 0) && (*pbVar3 == 0x10)) {
      bVar9 = pbVar3[10];
      if (bVar9 == 0) {
        pbVar3[10] = 2;
      }
      else if ((int)((uint)bVar9 << 0x1f) < 0) {
        pbVar3[10] = bVar9 | 4;
      }
    }
    iVar7 = DAT_0800be84;
    if (((bVar2 & 0xc0) != 0) && ((*pbVar3 == 0 || ((*pbVar3 & 0x38) != 0)))) {
      uVar12 = (uint)*(byte *)(DAT_0800be84 + 8);
      if ((int)(uVar11 << 0x18) < 0) {
        if ((int)(uVar12 << 0x18) < 0) {
          uVar12 = uVar12 & 0xffffff7f;
        }
        else {
          uVar12 = uVar12 | 0x80;
        }
      }
      if ((int)(uVar11 << 0x19) < 0) {
        if ((int)(uVar12 << 0x19) < 0) {
          uVar12 = uVar12 & 0xffffffbf;
        }
        else {
          uVar12 = uVar12 | 0x40;
        }
      }
      FUN_08012988(uVar12);
      *(char *)(iVar7 + 8) = (char)uVar12;
    }
  }
  if ((*pbVar3 & 0xfc) != 0) {
    uVar8 = FUN_08011ea4(in_r3);
    return uVar8;
  }
  return in_r3;
}



// ==== FUN_0800bec0 @ 0800bec0 ====

void FUN_0800bec0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_0800dfc0(param_1,0x24);
  FUN_0800b190(param_1,param_2);
  FUN_0800dfc0(param_1,0x3d,param_4);
  return;
}



// ==== FUN_0800bee0 @ 0800bee0 ====

void FUN_0800bee0(undefined4 param_1)

{
  FUN_0800b154(param_1,&DAT_0800c0d0);
  return;
}



// ==== FUN_0800bee6 @ 0800bee6 ====

void FUN_0800bee6(undefined4 param_1)

{
  FUN_0800dfc0(param_1,0x5d);
  FUN_0800bee0(param_1);
  return;
}



// ==== FUN_0800bef8 @ 0800bef8 ====

void FUN_0800bef8(undefined4 param_1)

{
  FUN_0800b154(param_1,&DAT_0800c0d4);
  return;
}



// ==== FUN_0800befe @ 0800befe ====

void FUN_0800befe(undefined4 param_1)

{
  FUN_0800b154(param_1,&DAT_0800c0d8);
  return;
}



// ==== FUN_0800bf04 @ 0800bf04 ====

void FUN_0800bf04(undefined4 param_1,int param_2)

{
  int iVar1;
  
  for (iVar1 = 0; iVar1 < 3; iVar1 = iVar1 + 1) {
    FUN_0800b332(*(undefined4 *)(param_2 + iVar1 * 4),param_1);
    if (iVar1 < 2) {
      FUN_0800dfc0(param_1,0x2c);
    }
  }
  return;
}



// ==== FUN_0800bf30 @ 0800bf30 ====

void FUN_0800bf30(undefined4 param_1,undefined4 param_2,undefined1 param_3,undefined4 param_4)

{
  FUN_0800bec0();
  FUN_0800b190(param_1,param_3);
  FUN_0800bee0(param_1,param_4);
  return;
}



// ==== FUN_0800bf4c @ 0800bf4c ====

void FUN_0800bf4c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4,
                 undefined4 param_5)

{
  FUN_0800bec0();
  FUN_0800b254(param_1,param_2,param_4);
  FUN_0800bee0(param_2,param_5);
  return;
}



// ==== FUN_0800bf78 @ 0800bf78 ====

undefined4 FUN_0800bf78(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_2 == 0) {
    iVar1 = FUN_0800a5b2(0);
    if (iVar1 == 2) {
      *DAT_0800cc30 = 1;
      return param_4;
    }
    uVar2 = FUN_0800b154(param_1,&DAT_0800bfdc,param_4);
    return uVar2;
  }
  if (param_2 != 7) {
    if (param_2 == 199) {
      return param_4;
    }
    iVar1 = FUN_0800a5b2(0);
    if (iVar1 == 2) {
      *DAT_0800cc30 = 1;
    }
  }
  FUN_0800b154(param_1,s_error__0800bfe4);
  FUN_0800b190(param_1,param_2);
  uVar2 = FUN_0800bee0(param_1,param_4);
  return uVar2;
}



// ==== FUN_0800bfec @ 0800bfec ====

uint FUN_0800bfec(void)

{
  return *DAT_0800cc38 & 0xfff;
}



// ==== FUN_0800bff8 @ 0800bff8 ====

void FUN_0800bff8(void)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  puVar2 = DAT_0800cc40;
  puVar1 = DAT_0800cc3c;
  uVar5 = *DAT_0800cc3c;
  *DAT_0800cc40 = uVar5;
  uVar6 = puVar1[1];
  puVar2[1] = uVar6;
  uVar4 = puVar1[2];
  puVar2[2] = uVar4;
  uVar3 = DAT_0800cc44;
  *puVar2 = uVar5 ^ DAT_0800cc44;
  puVar2[1] = uVar6 ^ uVar3;
  puVar2[2] = uVar4 ^ uVar3;
  return;
}



// ==== FUN_0800c024 @ 0800c024 ====

void FUN_0800c024(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined1 auStack_4c [64];
  undefined4 uStack_c;
  
  uStack_c = param_4;
  if (param_1 == 0x3de) {
    FUN_0800a350(auStack_4c,0x40,0);
    FUN_0800d678(auStack_4c,s_ok__08X_08X_08X_0800c0dc,DAT_0800cc40[2],DAT_0800cc40[1],*DAT_0800cc40
                );
    FUN_0800b154(param_2,auStack_4c);
  }
  else if (param_1 == 0x3df) {
    FUN_0800a350(auStack_4c,0x40,0);
    uVar1 = FUN_0800bfec();
    FUN_0800d678(auStack_4c,s_ok__03X_0800c0f0,uVar1);
    FUN_0800b154(param_2,auStack_4c);
  }
  else if (param_1 == 999) {
    FUN_0800a350(auStack_4c,0x40,0);
    FUN_0800d678(auStack_4c,s_ok__04X_0800c0fc,*(undefined2 *)DAT_0800cc40);
    FUN_0800b154(param_2,auStack_4c);
  }
  else {
    FUN_0800a350(auStack_4c,0x40,0);
    FUN_0800d678(auStack_4c,s_error__d_0800c108,2);
    FUN_0800b154(param_2,auStack_4c);
  }
  return;
}



// ==== FUN_0800c114 @ 0800c114 ====

void FUN_0800c114(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 extraout_r1;
  int iVar1;
  
  FUN_0800b154(param_1,s_ALARM__0800c13c);
  FUN_0800b190(param_1,param_2);
  FUN_0800bee0(param_1);
  iVar1 = 500;
  while (iVar1 != 0) {
    FUN_08012df2(1000,param_4);
    param_4 = extraout_r1;
    iVar1 = iVar1 + -1;
  }
  return;
}



// ==== FUN_0800c144 @ 0800c144 ====

void FUN_0800c144(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_0800b154(param_1,s__MSG__0800c1f0);
  switch(param_2) {
  case 1:
    FUN_0800b154(param_1,s_Reset_to_continue_0800c1f8);
    break;
  case 2:
    FUN_0800b154(param_1,s___H____X__to_unlock_0800c20c);
    break;
  case 3:
    FUN_0800b154(param_1,s_Caution__Unlocked_0800c220);
    break;
  case 4:
    FUN_0800b154(param_1,s_Enabled_0800c234);
    break;
  case 5:
    FUN_0800b154(param_1,s_Disabled_0800c23c);
    break;
  case 6:
    FUN_0800b154(param_1,s_Check_Door_0800c248);
    break;
  case 7:
    FUN_0800b154(param_1,s_Check_Limits_0800c254);
    break;
  case 8:
    FUN_0800b154(param_1,s_Pgm_End_0800c264);
    break;
  case 9:
    FUN_0800b154(param_1,s_Restoring_defaults_0800c26c);
    break;
  case 10:
    FUN_0800b154(param_1,s_Restoring_spindle_0800c280);
    break;
  case 0xb:
    FUN_0800b154(param_1,s_Sleeping_0800c294);
  }
  FUN_0800bee6(param_1,param_4);
  return;
}



// ==== FUN_0800c2a0 @ 0800c2a0 ====

void FUN_0800c2a0(undefined4 param_1)

{
  FUN_0800b154(param_1,s_Grbl_1_1h______for_help__0800c2a8);
  return;
}



// ==== FUN_0800c2c8 @ 0800c2c8 ====

void FUN_0800c2c8(undefined4 param_1)

{
  FUN_0800b154(param_1,DAT_0800cc5c);
  return;
}



// ==== FUN_0800c2d0 @ 0800c2d0 ====

void FUN_0800c2d0(undefined4 param_1)

{
  int iVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint in_fpscr;
  undefined4 uVar6;
  
  iVar1 = DAT_0800cc60;
  pbVar2 = (byte *)(DAT_0800cc60 + 0x30);
  FUN_0800bf30(param_1,0,*(undefined1 *)(DAT_0800cc60 + 0x31));
  FUN_0800bf30(param_1,1,*(undefined1 *)(iVar1 + 0x32));
  FUN_0800bf30(param_1,2,*(undefined1 *)(iVar1 + 0x33));
  FUN_0800bf30(param_1,3,*(undefined1 *)(iVar1 + 0x34));
  FUN_0800bf30(param_1,4,*pbVar2 >> 2 & 1);
  FUN_0800bf30(param_1,5,*pbVar2 >> 6 & 1);
  FUN_0800bf30(param_1,6,*pbVar2 >> 7);
  FUN_0800bf30(param_1,10,*(undefined1 *)(iVar1 + 0x35));
  FUN_0800bf4c(*(undefined4 *)(iVar1 + 0x38),param_1,0xb,3);
  FUN_0800bf4c(*(undefined4 *)(iVar1 + 0x3c),param_1,0xc,3);
  FUN_0800bf30(param_1,0xd,*pbVar2 & 1);
  FUN_0800bf30(param_1,0x14,*pbVar2 >> 5 & 1);
  FUN_0800bf30(param_1,0x15,*pbVar2 >> 3 & 1);
  FUN_0800bf30(param_1,0x16,*pbVar2 >> 4 & 1);
  FUN_0800bf30(param_1,0x17,*(undefined1 *)(iVar1 + 0x40));
  FUN_0800bf4c(*(undefined4 *)(iVar1 + 0x44),param_1,0x18,3);
  FUN_0800bf4c(*(undefined4 *)(iVar1 + 0x48),param_1,0x19,3);
  FUN_0800bf30(param_1,0x1a,*(undefined2 *)(iVar1 + 0x4c));
  FUN_0800bf4c(*(undefined4 *)(iVar1 + 0x50),param_1,0x1b,3);
  uVar6 = VectorUnsignedToFloat((uint)*(ushort *)(iVar1 + 0x5c),(byte)(in_fpscr >> 0x16) & 3);
  FUN_0800bf4c(uVar6,param_1,0x1c,3);
  FUN_0800bf4c(*(undefined4 *)(iVar1 + 0x54),param_1,0x1e,0);
  FUN_0800bf4c(*(undefined4 *)(iVar1 + 0x58),param_1,0x1f,0);
  FUN_0800bf30(param_1,0x20,*pbVar2 >> 1 & 1);
  FUN_0800bf30(param_1,0x29,*(undefined1 *)(iVar1 + 0x5e));
  FUN_0800bf30(param_1,0x2a,*(undefined1 *)(iVar1 + 0x5f));
  FUN_0800bf30(param_1,0x2b,*(undefined1 *)(iVar1 + 0x61));
  FUN_0800bf30(param_1,0x2c,*(undefined1 *)(iVar1 + 0x60));
  FUN_0800bf30(param_1,0x2d,*(undefined1 *)(iVar1 + 0x62));
  FUN_0800bf4c(*(undefined4 *)(iVar1 + 100),param_1,0x5a,3);
  FUN_0800bf4c(*(undefined4 *)(iVar1 + 0x68),param_1,0x5b,3);
  iVar3 = 100;
  for (iVar4 = 0; iVar4 < 4; iVar4 = iVar4 + 1) {
    for (iVar5 = 0; iVar5 < 3; iVar5 = iVar5 + 1) {
      switch(iVar4) {
      case 0:
        FUN_0800bf4c(*(undefined4 *)(iVar1 + iVar5 * 4),param_1,iVar5 + iVar3 & 0xff,3);
        break;
      case 1:
        FUN_0800bf4c(*(undefined4 *)(iVar1 + iVar5 * 4 + 0xc),param_1,iVar5 + iVar3 & 0xff,3);
        break;
      case 2:
        FUN_0800bf4c(*(float *)(iVar1 + iVar5 * 4 + 0x18) / DAT_0800c508,param_1,
                     iVar5 + iVar3 & 0xff,3);
        break;
      case 3:
        FUN_0800bf4c(-*(float *)(iVar1 + iVar5 * 4 + 0x24),param_1,iVar5 + iVar3 & 0xff,3);
      }
    }
    iVar3 = iVar3 + 10;
  }
  return;
}



// ==== FUN_0800c50c @ 0800c50c ====

undefined4 FUN_0800c50c(undefined4 param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  byte bVar4;
  uint in_fpscr;
  
  uVar2 = 0;
  if (param_2 == 0) {
    FUN_0800bf30(param_1,0,*(undefined1 *)(DAT_0800d0a8 + 1));
    uVar2 = 1;
  }
  else if (param_2 == 1) {
    FUN_0800bf30(param_1,1,*(undefined1 *)(DAT_0800d0a8 + 2));
    uVar2 = 1;
  }
  else if (param_2 == 2) {
    FUN_0800bf30(param_1,2,*(undefined1 *)(DAT_0800d0a8 + 3));
    uVar2 = 1;
  }
  else if (param_2 == 3) {
    FUN_0800bf30(param_1,3,*(undefined1 *)(DAT_0800d0a8 + 4));
    uVar2 = 1;
  }
  else if (param_2 == 4) {
    FUN_0800bf30(param_1,4,*(byte *)(DAT_0800d0b0 + 0x30) >> 2 & 1);
    uVar2 = 1;
  }
  else if (param_2 == 5) {
    FUN_0800bf30(param_1,5,*(byte *)(DAT_0800d0b0 + 0x30) >> 6 & 1);
    uVar2 = 1;
  }
  else if (param_2 == 6) {
    FUN_0800bf30(param_1,6,*(byte *)(DAT_0800d0b0 + 0x30) >> 7);
    uVar2 = 1;
  }
  else if (param_2 == 10) {
    FUN_0800bf30(param_1,10,*(undefined1 *)(DAT_0800d0a8 + 5));
    uVar2 = 1;
  }
  else if (param_2 == 0xb) {
    FUN_0800bf4c(*(undefined4 *)(DAT_0800d0a8 + 8),param_1,0xb,3);
    uVar2 = 1;
  }
  else if (param_2 == 0xc) {
    FUN_0800bf4c(*(undefined4 *)(DAT_0800d0a8 + 0xc),param_1,0xc,3);
    uVar2 = 1;
  }
  else if (param_2 == 0xd) {
    FUN_0800bf30(param_1,0xd,*(byte *)(DAT_0800d0b0 + 0x30) & 1);
    uVar2 = 1;
  }
  else if (param_2 == 0x14) {
    FUN_0800bf30(param_1,0x14,*(byte *)(DAT_0800d0b0 + 0x30) >> 5 & 1);
    uVar2 = 1;
  }
  else if (param_2 == 0x15) {
    FUN_0800bf30(param_1,0x15,*(byte *)(DAT_0800d0b0 + 0x30) >> 3 & 1);
    uVar2 = 1;
  }
  else if (param_2 == 0x16) {
    FUN_0800bf30(param_1,0x16,*(byte *)(DAT_0800d0b0 + 0x30) >> 4 & 1);
    uVar2 = 1;
  }
  else if (param_2 == 0x17) {
    FUN_0800bf30(param_1,0x17,*(undefined1 *)(DAT_0800d0a8 + 0x10));
    uVar2 = 1;
  }
  else if (param_2 == 0x18) {
    FUN_0800bf4c(*(undefined4 *)(DAT_0800d0a8 + 0x14),param_1,0x18,3);
    uVar2 = 1;
  }
  else if (param_2 == 0x19) {
    FUN_0800bf4c(*(undefined4 *)(DAT_0800d0a8 + 0x18),param_1,0x19,3);
    uVar2 = 1;
  }
  else if (param_2 == 0x1a) {
    FUN_0800bf30(param_1,0x1a,*(undefined2 *)(DAT_0800d0a8 + 0x1c));
    uVar2 = 1;
  }
  else if (param_2 == 0x1b) {
    FUN_0800bf4c(*(undefined4 *)(DAT_0800d0a8 + 0x20),param_1,0x1b,3);
    uVar2 = 1;
  }
  else if (param_2 == 0x1c) {
    uVar2 = VectorUnsignedToFloat
                      ((uint)*(ushort *)(DAT_0800d0a8 + 0x2c),(byte)(in_fpscr >> 0x16) & 3);
    FUN_0800bf4c(uVar2,param_1,0x1c,3);
    uVar2 = 1;
  }
  else if (param_2 == 0x1e) {
    FUN_0800bf4c(*(undefined4 *)(DAT_0800d0a8 + 0x24),param_1,0x1e,0);
    uVar2 = 1;
  }
  else if (param_2 == 0x1f) {
    FUN_0800bf4c(*(undefined4 *)(DAT_0800d0a8 + 0x28),param_1,0x1f,0);
    uVar2 = 1;
  }
  else if (param_2 == 0x20) {
    FUN_0800bf30(param_1,0x20,*(byte *)(DAT_0800d0b0 + 0x30) >> 1 & 1);
    uVar2 = 1;
  }
  else if (param_2 == 0x29) {
    FUN_0800bf30(param_1,0x29,*(undefined1 *)(DAT_0800d0b0 + 0x5e));
    uVar2 = 1;
  }
  else if (param_2 == 0x2a) {
    FUN_0800bf30(param_1,0x2a,*(undefined1 *)(DAT_0800d0b8 + 1));
    uVar2 = 1;
  }
  else if (param_2 == 0x2b) {
    FUN_0800bf30(param_1,0x2b,*(undefined1 *)(DAT_0800d0b8 + 3));
    uVar2 = 1;
  }
  else if (param_2 == 0x2c) {
    FUN_0800bf30(param_1,0x2c,*(undefined1 *)(DAT_0800d0b8 + 2));
    uVar2 = 1;
  }
  else if (param_2 == 0x2d) {
    FUN_0800bf30(param_1,0x2d,*(undefined1 *)(DAT_0800d0b8 + 4));
    uVar2 = 1;
  }
  else if (param_2 == 0x5a) {
    FUN_0800bf4c(*(undefined4 *)(DAT_0800d0b0 + 100),param_1,0x5a,3);
    uVar2 = 1;
  }
  else if (param_2 == 0x5b) {
    FUN_0800bf4c(*(undefined4 *)(DAT_0800d0bc + 4),param_1,0x5b,3);
    uVar2 = 1;
  }
  else {
    uVar1 = 100;
    for (bVar4 = 0; bVar4 < 4; bVar4 = bVar4 + 1) {
      for (uVar3 = 0; uVar3 < 3; uVar3 = uVar3 + 1 & 0xff) {
        switch(bVar4) {
        case 0:
          if (param_2 == uVar3 + uVar1) {
            FUN_0800bf4c(*(undefined4 *)(DAT_0800d0b0 + uVar3 * 4),param_1,uVar3 + uVar1 & 0xff,3);
            return 1;
          }
          break;
        case 1:
          break;
        case 2:
          goto LAB_0800c826;
        case 3:
          goto LAB_0800c82c;
        default:
          goto switchD_0800c840_default;
        }
        if (param_2 == uVar3 + uVar1) {
          FUN_0800bf4c(*(undefined4 *)(DAT_0800d0b0 + uVar3 * 4 + 0xc),param_1,uVar3 + uVar1 & 0xff,
                       3);
          return 1;
        }
LAB_0800c826:
        if (param_2 == uVar3 + uVar1) {
          FUN_0800bf4c(*(float *)(DAT_0800d0b0 + uVar3 * 4 + 0x18) / DAT_0800cb58,param_1,
                       uVar3 + uVar1 & 0xff,3);
          return 1;
        }
LAB_0800c82c:
        if (param_2 == uVar3 + uVar1) {
          FUN_0800bf4c(-*(float *)(DAT_0800d0b0 + uVar3 * 4 + 0x24),param_1,uVar3 + uVar1 & 0xff,3);
          return 1;
        }
switchD_0800c840_default:
      }
      uVar1 = uVar1 + 10 & 0xff;
    }
  }
  return uVar2;
}



// ==== FUN_0800c8ca @ 0800c8ca ====

undefined8 FUN_0800c8ca(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_18 = param_1;
  uStack_14 = param_2;
  uStack_10 = param_3;
  uStack_c = param_4;
  FUN_0800b154(param_1,s__PRB__0800d0dc);
  FUN_0800e876(&uStack_18,DAT_0800d0c0);
  FUN_0800bf04(param_1,&uStack_18);
  FUN_0800dfc0(param_1,0x3a);
  FUN_0800b190(param_1,*(undefined1 *)(DAT_0800d0c4 + 5));
  FUN_0800bee6(param_1);
  return CONCAT44(uStack_14,uStack_18);
}



// ==== FUN_0800c904 @ 0800c904 ====

undefined8 FUN_0800c904(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  byte bVar2;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  bVar2 = 0;
  uStack_18 = param_2;
  uStack_14 = param_3;
  uStack_10 = param_4;
  while( true ) {
    if (7 < bVar2) {
      FUN_0800b154(param_1,s__G92__0800d0e4);
      iVar1 = DAT_0800d0c8;
      FUN_0800bf04(param_1,DAT_0800d0c8 + 0x34);
      FUN_0800bee6(param_1);
      FUN_0800b154(param_1,s__TLO__0800d0ec);
      FUN_0800b332(*(undefined4 *)(iVar1 + 0x40),param_1);
      FUN_0800bee6(param_1);
      FUN_0800c8ca(param_1);
      return CONCAT44(uStack_14,uStack_18);
    }
    iVar1 = FUN_080130ac(bVar2,&uStack_18);
    if (iVar1 == 0) break;
    FUN_0800b154(param_1,&DAT_0800cc28);
    if (bVar2 == 6) {
      FUN_0800b154(param_1,&DAT_0800cc2c);
    }
    else if (bVar2 == 7) {
      FUN_0800b154(param_1,&DAT_0800cc24);
    }
    else {
      FUN_0800b190(param_1,bVar2 + 0x36);
    }
    FUN_0800dfc0(param_1,0x3a);
    FUN_0800bf04(param_1,&uStack_18);
    FUN_0800bee6(param_1);
    bVar2 = bVar2 + 1;
  }
  FUN_0800bf78(param_1,7);
  return CONCAT44(uStack_14,uStack_18);
}



// ==== FUN_0800c9b8 @ 0800c9b8 ====

void FUN_0800c9b8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  byte *pbVar2;
  
  FUN_0800b154(param_1,s__GC_G_0800d0f4);
  pbVar2 = DAT_0800d0c8;
  if (*DAT_0800d0c8 < 0x8c) {
    FUN_0800b190(param_1);
  }
  else {
    FUN_0800b154(param_1,&DAT_0800cc34);
    FUN_0800b190(param_1,*pbVar2 + 0x76);
  }
  FUN_0800bef8(param_1);
  FUN_0800b190(param_1,pbVar2[6] + 0x36);
  FUN_0800bef8(param_1);
  FUN_0800b190(param_1,pbVar2[4] + 0x11);
  FUN_0800bef8(param_1);
  FUN_0800b190(param_1,'\x15' - pbVar2[2]);
  FUN_0800bef8(param_1);
  FUN_0800b190(param_1,pbVar2[3] + 0x5a);
  FUN_0800bef8(param_1);
  FUN_0800b190(param_1,'^' - pbVar2[1]);
  if (pbVar2[7] == 0) goto LAB_0800ca78;
  FUN_0800befe(param_1);
  bVar1 = pbVar2[7];
  if (bVar1 != 2) {
    if (bVar1 == 3) {
      FUN_0800dfc0(param_1,0x30);
      goto LAB_0800ca78;
    }
    if (bVar1 != 0x1e) goto LAB_0800ca78;
  }
  FUN_0800b190(param_1);
LAB_0800ca78:
  FUN_0800befe(param_1);
  bVar1 = pbVar2[9];
  if (bVar1 == 0) {
    FUN_0800dfc0(param_1,0x35);
  }
  else if (bVar1 == 0x10) {
    FUN_0800dfc0(param_1,0x33);
  }
  else if (bVar1 == 0x20) {
    FUN_0800dfc0(param_1,0x34);
  }
  if (pbVar2[8] == 0) {
    FUN_0800befe(param_1);
    FUN_0800dfc0(param_1,0x39);
  }
  else {
    if ((int)((uint)pbVar2[8] << 0x18) < 0) {
      FUN_0800befe(param_1);
      FUN_0800dfc0(param_1,0x37);
    }
    if ((int)((uint)pbVar2[8] << 0x19) < 0) {
      FUN_0800befe(param_1);
      FUN_0800dfc0(param_1,0x38);
    }
  }
  FUN_0800b154(param_1,&DAT_0800cc48);
  FUN_0800b190(param_1,pbVar2[0x14]);
  FUN_0800b154(param_1,&DAT_0800cc4c);
  FUN_0800b370(*(undefined4 *)(pbVar2 + 0x10),param_1);
  FUN_0800b154(param_1,&DAT_0800cc50);
  FUN_0800b254(*(undefined4 *)(pbVar2 + 0xc),param_1,0);
  FUN_0800bee6(param_1,param_4);
  return;
}



// ==== FUN_0800cb26 @ 0800cb26 ====

void FUN_0800cb26(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_0800b154(param_1,&DAT_0800cc54);
  FUN_0800b190(param_1,param_2);
  FUN_0800dfc0(param_1,0x3d);
  FUN_0800b154(param_1,param_3);
  FUN_0800bee0(param_1);
  return;
}



// ==== FUN_0800cb5c @ 0800cb5c ====

void FUN_0800cb5c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_0800dfc0(param_1,0x3e);
  FUN_0800b154(param_1,param_2);
  FUN_0800dfc0(param_1,0x3a);
  FUN_0800bf78(param_1,param_3);
  return;
}



// ==== FUN_0800cb86 @ 0800cb86 ====

void FUN_0800cb86(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_0800b154(param_1,s__VER_1_0_15_20240923__0800d0fc);
  FUN_0800b154(param_1,param_2);
  FUN_0800bee6(param_1);
  FUN_0800b154(param_1,s__OPT__0800d114);
  FUN_0800dfc0(param_1,0x56);
  FUN_0800dfc0(param_1,0x4d);
  FUN_0800dfc0(param_1,0x50);
  FUN_0800dfc0(param_1,0x2c);
  FUN_0800b190(param_1,0x1f);
  FUN_0800dfc0(param_1,0x2c);
  FUN_0800b1fe(param_1,0x1ff);
  FUN_0800b154(param_1,&DAT_0800cc58);
  FUN_0800b154(param_1,s__MSG_mechine_Sculpfun_iCube__0800d11c);
  FUN_0800b154(param_1,s__MSG_Mode_BT__0800d13c);
  FUN_0800b154(param_1,s__BT_VER__0800d14c);
  FUN_0800b154(param_1,DAT_0800d0cc);
  FUN_0800b154(param_1,&DAT_0800cc58,param_4);
  return;
}



// ==== FUN_0800cc64 @ 0800cc64 ====

void FUN_0800cc64(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  char *pcVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  float local_48 [6];
  undefined1 auStack_30 [12];
  undefined4 uStack_24;
  
  uStack_24 = param_4;
  FUN_0800a428(auStack_30,DAT_0800d0d0,0xc);
  FUN_0800e876(local_48,auStack_30);
  pcVar2 = DAT_0800d0d4;
  pbVar3 = DAT_0800d0c4;
  if (*DAT_0800d0c4 == 0) {
    iVar4 = FUN_0800a5a8();
    if (iVar4 == 2) {
      *(int *)(pcVar2 + 4) = *(int *)(pcVar2 + 4) + -1;
    }
    else {
      pcVar2[4] = '\0';
      pcVar2[5] = '\0';
      pcVar2[6] = '\0';
      pcVar2[7] = '\0';
    }
  }
  else if (*DAT_0800d0c4 == 8) {
    pcVar2[4] = '\x03';
    pcVar2[5] = '\0';
    pcVar2[6] = '\0';
    pcVar2[7] = '\0';
  }
  else {
    pcVar2[4] = '\0';
    pcVar2[5] = '\0';
    pcVar2[6] = '\0';
    pcVar2[7] = '\0';
  }
  FUN_0800dfc0(param_1,0x3c);
  bVar1 = *pbVar3;
  if (bVar1 == 0) {
    if (*(int *)(pcVar2 + 4) == 0) {
      FUN_0800b154(param_1,&DAT_0800d158);
    }
    else {
      FUN_0800b154(param_1,&DAT_0800cff4);
    }
  }
  else if (bVar1 == 1) {
    FUN_0800b154(param_1,s_Alarm_0800d170);
  }
  else if (bVar1 == 2) {
    FUN_0800b154(param_1,s_Check_0800d178);
  }
  else if (bVar1 == 4) {
    FUN_0800b154(param_1,&DAT_0800d168);
  }
  else if (bVar1 == 8) {
    FUN_0800b154(param_1,&DAT_0800cff4);
  }
  else {
    if (bVar1 == 0x10) {
      if (-1 < (int)((uint)pbVar3[2] << 0x18)) {
        FUN_0800b154(param_1,s_Hold__0800d160);
        if ((int)((uint)pbVar3[2] << 0x1f) < 0) {
          FUN_0800dfc0(param_1,0x30);
        }
        else {
          FUN_0800dfc0(param_1,0x31);
        }
        goto LAB_0800cdb4;
      }
    }
    else if (bVar1 != 0x20) {
      if (bVar1 == 0x40) {
        FUN_0800b154(param_1,s_Door__0800d180);
        uVar9 = (uint)pbVar3[2];
        if ((int)(uVar9 << 0x1c) < 0) {
          FUN_0800dfc0(param_1,0x33);
        }
        else if ((int)(uVar9 << 0x1d) < 0) {
          if ((int)(uVar9 << 0x1a) < 0) {
            FUN_0800dfc0(param_1,0x31);
          }
          else {
            FUN_0800dfc0(param_1,0x30);
          }
        }
        else {
          FUN_0800dfc0(param_1,0x32);
        }
      }
      else if (bVar1 == 0x80) {
        FUN_0800b154(param_1,s_Sleep_0800d188);
      }
      goto LAB_0800cdb4;
    }
    FUN_0800b154(param_1,&DAT_0800cff8);
  }
LAB_0800cdb4:
  iVar4 = DAT_0800d0b0;
  uVar9 = (uint)*(byte *)(DAT_0800d0b0 + 0x35);
  if ((-1 < (int)(uVar9 << 0x1f)) || (pbVar3[0xc] == 0)) {
    for (iVar5 = 0; iVar5 < 3; iVar5 = iVar5 + 1) {
      iVar7 = DAT_0800d0c8 + iVar5 * 4;
      local_48[iVar5 + 3] = *(float *)(iVar7 + 0x28) + *(float *)(iVar7 + 0x34);
      if (iVar5 == 2) {
        local_48[5] = local_48[5] + *(float *)(DAT_0800d0c8 + 0x40);
      }
      if (-1 < (int)(uVar9 << 0x1f)) {
        local_48[iVar5] = local_48[iVar5] - local_48[iVar5 + 3];
      }
    }
  }
  if ((int)(uVar9 << 0x1f) < 0) {
    FUN_0800b154(param_1,s__MPos__0800d190);
  }
  else {
    FUN_0800b154(param_1,s__WPos__0800d198);
  }
  FUN_0800bf04(param_1,local_48);
  if ((int)((uint)*(byte *)(iVar4 + 0x35) << 0x1e) < 0) {
    FUN_0800b154(param_1,&DAT_0800d1a0);
    uVar6 = FUN_08011a38();
    FUN_0800b190(param_1,uVar6);
    FUN_0800dfc0(param_1,0x2c);
    uVar6 = FUN_0800df98(param_1);
    FUN_0800b1fe(param_1,uVar6);
  }
  FUN_0800b154(param_1,&DAT_0800d1a8);
  FUN_0801276c();
  FUN_0800b370(param_1);
  FUN_0800dfc0(param_1,0x2c);
  FUN_0800b254(*(undefined4 *)(pbVar3 + 0x10),param_1,0);
  iVar5 = FUN_0800ff70();
  iVar7 = FUN_0800e43e();
  iVar8 = FUN_0800fe0e();
  if ((iVar7 != 0 || iVar5 != 0) || iVar8 != 0) {
    FUN_0800b154(param_1,&DAT_0800d1b0);
    if (iVar8 != 0) {
      FUN_0800dfc0(param_1,0x50);
    }
    if (iVar5 != 0) {
      if (iVar5 << 0x1f < 0) {
        FUN_0800dfc0(param_1,0x58);
      }
      if (iVar5 << 0x1e < 0) {
        FUN_0800dfc0(param_1,0x59);
      }
      if (iVar5 << 0x1d < 0) {
        FUN_0800dfc0(param_1,0x5a);
      }
    }
    if (iVar7 != 0) {
      if (iVar7 << 0x1f < 0) {
        FUN_0800dfc0(param_1,0x52);
      }
      if (iVar7 << 0x1e < 0) {
        FUN_0800dfc0(param_1,0x48);
      }
      if (iVar7 << 0x1d < 0) {
        FUN_0800dfc0(param_1,0x53);
      }
    }
  }
  if (pbVar3[0xc] == 0) {
    if ((*pbVar3 & 0x7c) == 0) {
      pbVar3[0xc] = 9;
    }
    else {
      pbVar3[0xc] = 0x1d;
    }
    if (pbVar3[0xb] == 0) {
      pbVar3[0xb] = 1;
    }
    FUN_0800b154(param_1,s__WCO__0800d1b8);
    FUN_0800bf04(param_1,local_48 + 3);
  }
  else {
    pbVar3[0xc] = pbVar3[0xc] - 1;
  }
  if (pbVar3[0xb] == 0) {
    if ((*pbVar3 & 0x7c) == 0) {
      pbVar3[0xb] = 9;
    }
    else {
      pbVar3[0xb] = 9;
    }
    FUN_0800b154(param_1,&DAT_0800d1c0);
    FUN_0800b190(param_1,pbVar3[7]);
    FUN_0800dfc0(param_1,0x2c);
    FUN_0800b190(param_1,pbVar3[8]);
    FUN_0800dfc0(param_1,0x2c);
    FUN_0800b190(param_1,pbVar3[9]);
    iVar5 = FUN_08012808();
    iVar7 = FUN_08012964();
    if (iVar7 != 0 || iVar5 != 0) {
      FUN_0800b154(param_1,&DAT_0800d0ac);
      if (iVar5 != 0) {
        if (iVar5 == 1) {
          FUN_0800dfc0(param_1,0x53);
        }
        else {
          FUN_0800dfc0(param_1,0x43);
        }
      }
      if (iVar7 << 0x19 < 0) {
        FUN_0800dfc0(param_1,0x46);
      }
      if (iVar7 << 0x18 < 0) {
        FUN_0800dfc0(param_1,0x4d);
      }
    }
  }
  else {
    pbVar3[0xb] = pbVar3[0xb] - 1;
  }
  iVar5 = FUN_0800a5b2(0);
  if (iVar5 == 2) {
    FUN_0800b154(param_1,&DAT_0800d1c8);
    FUN_0800ab98();
    FUN_0800b254(param_1,2);
    FUN_0800b154(param_1,&DAT_0800d0b4);
    FUN_0800b154(param_1,DAT_0800d0d8);
  }
  if (*pcVar2 == '\0') {
    *pcVar2 = '\x01';
    if (*(char *)(iVar4 + 0x62) == '\0') {
      FUN_0800b154(param_1,s__ROLLER_Off_0800d1f4);
    }
    else {
      FUN_0800b154(param_1,s__ROLLER_On_0800d1e8);
    }
  }
  else {
    *pcVar2 = '\0';
    if (*(char *)(iVar4 + 0x61) == '\0') {
      FUN_0800b154(param_1,s__FlCk_Off_0800d1dc);
    }
    else {
      FUN_0800b154(param_1,s__FlCk_On_0800d1d0);
    }
  }
  FUN_0800dfc0(param_1,0x3e);
  FUN_0800bee0(param_1);
  return;
}



// ==== FUN_0800d200 @ 0800d200 ====

undefined8 FUN_0800d200(int param_1)

{
  uint uVar1;
  
  if (param_1 != 0) {
    uVar1 = param_1 << LZCOUNT(param_1);
    return CONCAT44((0x420 - (LZCOUNT(param_1) + 3)) * 0x100000 + (uVar1 >> 0xb),uVar1 << 0x15);
  }
  return 0;
}



// ==== FUN_0800d21c @ 0800d21c ====

longlong FUN_0800d21c(uint param_1,uint param_2,uint param_3,uint param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint unaff_r5;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  
  uVar6 = param_2 >> 0x14 & 0x7ff;
  bVar12 = uVar6 == 0;
  if (!bVar12) {
    unaff_r5 = param_4 >> 0x14 & 0x7ff;
    bVar12 = unaff_r5 == 0;
  }
  if (!bVar12) {
    bVar12 = uVar6 == 0x7ff;
  }
  if (!bVar12) {
    bVar12 = unaff_r5 == 0x7ff;
  }
  if (bVar12) {
    uVar8 = param_4 >> 0x14 & 0x7ff;
    uVar11 = (param_2 ^ param_4) & 0x80000000;
    if (uVar6 == 0x7ff || uVar8 == 0x7ff) {
      bVar12 = (param_2 & 0x7fffffff) == 0;
      bVar13 = param_1 == 0 && bVar12;
      if (param_1 != 0 || !bVar12) {
        bVar13 = param_3 == 0 && (param_4 & 0x7fffffff) == 0;
      }
      if (bVar13) {
        param_2 = 0xffffffff;
      }
      uVar6 = param_4 * 2;
      uVar5 = param_4;
      if (uVar6 < 0xffe00001) {
        uVar6 = param_2 * 2;
        uVar5 = param_2;
      }
      if (uVar6 < 0xffe00001) goto LAB_0800d2a6;
      if (uVar6 < 0xffe00001) {
        return CONCAT44(uVar5,param_1);
      }
      goto LAB_0800d2d6;
    }
    bVar13 = (param_2 & 0x7fffffff) == 0;
    bVar12 = param_1 == 0 && bVar13;
    if (param_1 != 0 || !bVar13) {
      bVar12 = param_3 == 0 && (param_4 & 0x7fffffff) == 0;
    }
    uVar5 = uVar11;
    if (!bVar12) {
      if (uVar6 != 0) {
        param_4 = param_4 & 0x7fffffff;
        iVar7 = LZCOUNT(param_4);
        if (param_4 == 0) {
          iVar7 = LZCOUNT(param_3) + 0x20;
        }
        uVar3 = iVar7 - 0xb;
        if (uVar3 < 0x20) {
          uVar5 = param_4 << (uVar3 & 0xff) | param_3 >> (0x20 - uVar3 & 0xff);
        }
        else {
          uVar5 = param_3 << (iVar7 - 0x2bU & 0xff);
        }
        param_3 = param_3 << (uVar3 & 0xff);
        iVar7 = ((uVar6 + uVar8) - uVar3) + 1;
        goto LAB_0800d244;
      }
      if (uVar8 != 0) {
        uVar6 = param_1;
        uVar5 = param_2 << 0xc;
        if (param_2 << 0xc == 0) {
          uVar6 = 0;
          uVar8 = uVar8 - 0x14;
          uVar5 = param_1;
        }
        iVar9 = LZCOUNT(uVar5);
        iVar7 = uVar8 - iVar9;
        param_1 = uVar6 << iVar9 + 0xc;
        uVar6 = uVar5 << iVar9 | uVar6 >> (0x20U - (iVar9 + 0xc) & 0xff);
        uVar5 = param_4 & 0x1fffff | 0x100000;
        goto LAB_0800d250;
      }
    }
  }
  else {
    iVar7 = uVar6 + unaff_r5;
    uVar11 = (param_2 ^ param_4) & 0x80000000;
    uVar5 = param_4 & 0x1fffff | 0x100000;
LAB_0800d244:
    uVar6 = param_2 << 0xb | 0x80000000 | param_1 >> 0x15;
    param_1 = param_1 << 0xb;
LAB_0800d250:
    uVar1 = (ulonglong)uVar6 * (ulonglong)param_3 +
            ((ulonglong)param_1 * (ulonglong)param_3 >> 0x20);
    uVar3 = (uint)(uVar1 >> 0x20);
    lVar2 = (ulonglong)uVar5 * (ulonglong)param_1 + (uVar1 & 0xffffffff);
    uVar8 = (uint)lVar2;
    uVar4 = (uint)((ulonglong)lVar2 >> 0x20);
    if ((int)((ulonglong)param_1 * (ulonglong)param_3) != 0) {
      uVar8 = uVar8 | 1;
    }
    uVar1 = (ulonglong)uVar5 * (ulonglong)uVar6 +
            (ulonglong)CONCAT14(CARRY4(uVar3,uVar4),uVar3 + uVar4);
    uVar6 = (uint)uVar1;
    uVar5 = (uint)(uVar1 >> 0x20);
    bVar12 = (uVar1 & 0x10000000000000) != 0;
    if (!bVar12) {
      bVar13 = CARRY4(uVar8,uVar8);
      uVar8 = uVar8 * 2;
      bVar14 = CARRY4(uVar6,uVar6) || CARRY4(uVar6 * 2,(uint)bVar13);
      bVar12 = CARRY4(uVar5,uVar5) || CARRY4(uVar5 * 2,(uint)bVar14);
      uVar1 = CONCAT44(uVar5 * 2 + (uint)bVar14,uVar6 * 2 + (uint)bVar13);
    }
    uVar3 = (uint)(uVar1 >> 0x20);
    uVar6 = (uint)uVar1;
    iVar9 = iVar7 + -0x3ff + (uint)bVar12;
    if (iVar9 != 0 &&
        iVar9 < 0 == (SCARRY4(iVar7 + -0x400,1) != SCARRY4(iVar7 + -0x3ff,(uint)bVar12))) {
      bVar12 = 0x80000000 < uVar8 || uVar8 + 0x80000000 < (uint)((uVar1 & 1) != 0);
      iVar7 = uVar3 + iVar9 * 0x100000 + (uint)CARRY4(uVar6,(uint)bVar12);
      if (-1 < iVar7) {
        return CONCAT44(iVar7 - 0x100000U | uVar11,uVar6 + bVar12);
      }
LAB_0800d2a6:
      return (ulonglong)(uVar11 | 0x7ff00000) << 0x20;
    }
    uVar4 = -iVar9 + 1;
    uVar10 = -iVar9 - 0x1f;
    if ((int)uVar4 < 0x20) {
      bVar12 = (uVar8 & 1) != 0;
      uVar8 = uVar8 >> 1;
      if (bVar12) {
        uVar8 = uVar8 | 1;
      }
      uVar5 = 0x20 - uVar4 & 0xff;
      bVar12 = uVar5 == 0 && bVar12 || uVar5 != 0 && (uVar6 << uVar5 - 1 & 0x80000000) != 0;
      uVar8 = uVar8 + (uVar6 << uVar5);
      uVar5 = uVar6 >> (uVar4 & 0xff) | uVar3 << (0x20 - uVar4 & 0xff);
      uVar3 = uVar3 >> (uVar4 & 0xff);
LAB_0800d3b8:
      bVar12 = 0x80000000 < uVar8 || uVar8 + 0x80000000 < (uint)bVar12;
      return CONCAT44(uVar3 + uVar11 + CARRY4(uVar5,(uint)bVar12),uVar5 + bVar12);
    }
    uVar5 = uVar11;
    if ((int)uVar4 < 0x36) {
      uVar6 = uVar6 >> (uVar10 & 0xff);
      if (uVar8 != 0 || (uVar1 & 0x7fffffff) != 0) {
        uVar6 = uVar6 | 1;
      }
      uVar4 = uVar10 & 0xff;
      uVar5 = uVar3 >> uVar4;
      uVar8 = 0x20 - uVar10 & 0xff;
      bVar12 = uVar8 == 0 &&
               (uVar4 == 0 && (bool)((byte)(uVar1 >> 0x18) >> 7) ||
               uVar4 != 0 && (uVar3 >> uVar4 - 1 & 1) != 0) ||
               uVar8 != 0 && (uVar3 << uVar8 - 1 & 0x80000000) != 0;
      uVar8 = uVar6 | uVar3 << uVar8;
      uVar3 = 0;
      goto LAB_0800d3b8;
    }
  }
  param_1 = 0;
LAB_0800d2d6:
  return CONCAT44(uVar5,param_1);
}



// ==== FUN_0800d3c8 @ 0800d3c8 ====

ulonglong FUN_0800d3c8(uint param_1,uint param_2,uint param_3,uint param_4)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint unaff_r7;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  undefined1 in_CY;
  bool bVar15;
  
  uVar12 = param_2 ^ param_4;
  uVar13 = uVar12 & 0x80000000;
  uVar5 = param_2 >> 0x14 & 0x7ff;
  bVar15 = uVar5 == 0;
  if (!bVar15) {
    unaff_r7 = param_4 >> 0x14 & 0x7ff;
    bVar15 = unaff_r7 == 0;
  }
  if (!bVar15) {
    in_CY = 0x7fe < uVar5;
    bVar15 = uVar5 == 0x7ff;
  }
  if (!bVar15) {
    in_CY = 0x7fe < unaff_r7;
    bVar15 = unaff_r7 == 0x7ff;
  }
  if (bVar15) {
    if (uVar5 != 0x7ff) {
      unaff_r7 = param_4 >> 0x14 & 0x7ff;
    }
    if (uVar5 == 0x7ff || unaff_r7 == 0x7ff) {
      uVar5 = param_2 * 2;
      if (uVar5 < 0xffe00001) {
        uVar5 = param_4 * 2;
      }
      if (uVar5 == 0xffe00000) {
        uVar5 = param_2 << 1;
      }
      if (uVar5 < 0xffe00000) {
        if ((param_4 & 0x7fffffff) != 0x7ff00000) {
          uVar13 = uVar13 | 0x7ff00000;
        }
      }
      else {
        uVar13 = 0xffffffff;
      }
      return (ulonglong)uVar13 << 0x20;
    }
    bVar1 = (param_2 & 0x7fffffff) == 0;
    bVar15 = param_1 == 0 && bVar1;
    uVar8 = 0;
    if (param_1 != 0 || !bVar1) {
      uVar8 = param_3 | param_4 << 1;
      bVar15 = uVar8 == 0;
    }
    if (bVar15) {
      if (param_1 == 0 && (param_2 & 0x7fffffff) == 0) {
        if (param_3 == 0 && (param_4 & 0x7fffffff) == 0) {
          uVar13 = ~uVar8;
        }
        return CONCAT44(uVar13,uVar8);
      }
      return CONCAT44(uVar12,uVar8) & 0x80000000ffffffff | 0x7ff0000000000000;
    }
    if (unaff_r7 == 0) {
      uVar2 = param_3 * 2;
      iVar4 = param_4 * 2 + (uint)CARRY4(param_3,param_3);
      iVar11 = LZCOUNT(iVar4);
      if (iVar4 == 0) {
        iVar11 = LZCOUNT(uVar2) + 0x20;
      }
      uVar8 = iVar11 - 0xb;
      if (uVar8 < 0x20) {
        param_4 = iVar4 << (uVar8 & 0xff) | uVar2 >> (0x20 - uVar8 & 0xff);
      }
      else {
        param_4 = uVar2 << (iVar11 - 0x2bU & 0xff);
      }
      param_3 = uVar2 << (uVar8 & 0xff);
      if (uVar5 != 0) {
        iVar4 = uVar5 + uVar8 + -1;
        goto LAB_0800d3e8;
      }
    }
    else {
      uVar8 = -unaff_r7;
    }
    param_2 = param_2 & 0x7fffffff;
    iVar4 = LZCOUNT(param_2);
    if (param_2 == 0) {
      iVar4 = LZCOUNT(param_1) + 0x20;
    }
    uVar5 = iVar4 - 0xb;
    if (uVar5 < 0x20) {
      param_2 = param_2 << (uVar5 & 0xff) | param_1 >> (0x20 - uVar5 & 0xff);
    }
    else {
      param_2 = param_1 << (iVar4 - 0x2bU & 0xff);
    }
    param_1 = param_1 << (uVar5 & 0xff);
    iVar4 = uVar8 - uVar5;
  }
  else {
    iVar4 = (uVar5 - unaff_r7) - (uint)!(bool)in_CY;
  }
LAB_0800d3e8:
  param_2 = param_2 & 0xfffff;
  param_4 = param_4 & 0xfffff;
  uVar5 = param_1 - param_3;
  iVar11 = (param_2 - param_4) - (uint)(param_3 > param_1);
  uVar8 = param_4 | 0x100000;
  if (param_2 <= param_4 && (uint)(param_3 <= param_1) <= param_2 - param_4) {
    iVar4 = iVar4 + -1;
    bVar15 = CARRY4(uVar5,uVar5);
    uVar2 = uVar5 * 2;
    uVar5 = uVar2 + param_3;
    iVar11 = iVar11 * 2 + (uint)bVar15 + uVar8 + (uint)CARRY4(uVar2,param_3);
  }
  uVar3 = iVar11 << 0xb | uVar5 >> 0x15;
  uVar7 = uVar3 / uVar8;
  uVar3 = uVar3 - uVar8 * uVar7;
  uVar9 = (uint)((ulonglong)param_3 * (ulonglong)uVar7);
  uVar6 = (uint)((ulonglong)param_3 * (ulonglong)uVar7 >> 0x20);
  uVar5 = uVar5 * 0x800;
  uVar2 = uVar5 - uVar9;
  iVar11 = (uVar3 - uVar6) - (uint)(uVar9 > uVar5);
  if (uVar3 <= uVar6 && (uint)(uVar9 <= uVar5) <= uVar3 - uVar6) {
    uVar7 = uVar7 - 1;
    bVar15 = CARRY4(uVar2,param_3);
    uVar2 = uVar2 + param_3;
    iVar11 = iVar11 + uVar8 + (uint)bVar15;
  }
  uVar3 = iVar11 << 0xb | uVar2 >> 0x15;
  uVar14 = uVar3 / uVar8;
  uVar3 = uVar3 - uVar8 * uVar14;
  uVar9 = (uint)((ulonglong)param_3 * (ulonglong)uVar14);
  uVar6 = (uint)((ulonglong)param_3 * (ulonglong)uVar14 >> 0x20);
  uVar2 = uVar2 * 0x800;
  uVar5 = uVar2 - uVar9;
  iVar11 = (uVar3 - uVar6) - (uint)(uVar9 > uVar2);
  if (uVar3 <= uVar6 && (uint)(uVar9 <= uVar2) <= uVar3 - uVar6) {
    uVar14 = uVar14 - 1;
    bVar15 = CARRY4(uVar5,param_3);
    uVar5 = uVar5 + param_3;
    iVar11 = iVar11 + uVar8 + (uint)bVar15;
  }
  uVar3 = iVar11 << 10 | uVar5 >> 0x16;
  uVar9 = uVar3 / uVar8;
  uVar3 = uVar3 - uVar8 * uVar9;
  uVar10 = (uint)((ulonglong)param_3 * (ulonglong)uVar9);
  uVar6 = (uint)((ulonglong)param_3 * (ulonglong)uVar9 >> 0x20);
  uVar5 = uVar5 * 0x400;
  uVar2 = uVar5 - uVar10;
  iVar11 = (uVar3 - uVar6) - (uint)(uVar10 > uVar5);
  if (uVar3 <= uVar6 && (uint)(uVar10 <= uVar5) <= uVar3 - uVar6) {
    uVar9 = uVar9 - 1;
    bVar15 = CARRY4(uVar2,param_3);
    uVar2 = uVar2 + param_3;
    iVar11 = iVar11 + uVar8 + (uint)bVar15;
  }
  uVar3 = iVar11 << 0xb | uVar2 >> 0x15;
  uVar9 = uVar7 << 0x15 | uVar14 << 10 | uVar9;
  uVar7 = uVar3 / uVar8;
  uVar3 = uVar3 - uVar8 * uVar7;
  uVar14 = (uint)((ulonglong)param_3 * (ulonglong)uVar7);
  uVar6 = (uint)((ulonglong)param_3 * (ulonglong)uVar7 >> 0x20);
  uVar2 = uVar2 * 0x800;
  uVar5 = uVar2 - uVar14;
  iVar11 = (uVar3 - uVar6) - (uint)(uVar14 > uVar2);
  if (uVar3 <= uVar6 && (uint)(uVar14 <= uVar2) <= uVar3 - uVar6) {
    uVar7 = uVar7 - 1;
    bVar15 = CARRY4(uVar5,param_3);
    uVar5 = uVar5 + param_3;
    iVar11 = iVar11 + uVar8 + (uint)bVar15;
  }
  uVar2 = iVar11 << 0xb | uVar5 >> 0x15;
  uVar6 = uVar2 / uVar8;
  uVar2 = uVar2 - uVar8 * uVar6;
  uVar8 = (uint)((ulonglong)param_3 * (ulonglong)uVar6);
  uVar3 = (uint)((ulonglong)param_3 * (ulonglong)uVar6 >> 0x20);
  uVar5 = uVar5 * 0x800;
  uVar6 = uVar6 - (uVar2 <= uVar3 && (uint)(uVar8 <= uVar5) <= uVar2 - uVar3);
  if (uVar2 - uVar3 != (uint)(uVar8 > uVar5) || uVar5 - uVar8 != 0) {
    uVar6 = uVar6 | 1;
  }
  uVar5 = (uVar6 & 0xffc007ff | (uVar7 & 0x7ff) << 0xb) >> 2;
  iVar11 = iVar4 + 0x400;
  if (iVar11 == 0 || iVar4 < -0x400) {
    uVar3 = (uVar6 & 3) << 0x1d;
    uVar5 = uVar5 | uVar9 << 0x14;
    uVar8 = uVar9 >> 0xc | 0x100000;
    uVar2 = -iVar11 + 1;
    uVar6 = -iVar11 - 0x1f;
    if ((int)uVar2 < 0x20) {
      uVar9 = uVar2 & 0xff;
      uVar14 = uVar2 & 0xff;
      uVar12 = uVar8 >> (uVar2 & 0xff);
      uVar7 = uVar5 >> (uVar2 & 0xff) | uVar8 << (0x20 - uVar2 & 0xff);
      uVar6 = 0x20 - uVar2 & 0xff;
      bVar15 = uVar6 == 0 &&
               (uVar14 == 0 &&
                (uVar9 == 0 && 0x1f < uVar2 || uVar9 != 0 && (uVar5 >> uVar9 - 1 & 1) != 0) ||
               uVar14 != 0 && (uVar8 >> uVar14 - 1 & 1) != 0) ||
               uVar6 != 0 && (uVar5 << uVar6 - 1 & 0x80000000) != 0;
      uVar3 = uVar3 | uVar5 << uVar6;
    }
    else {
      if (0x34 < (int)uVar2) {
        return ((ulonglong)uVar12 & 0x80000000) << 0x20;
      }
      uVar7 = uVar8 >> (uVar6 & 0xff);
      uVar12 = 0x20 - uVar6 & 0xff;
      bVar15 = uVar12 != 0 && (uVar8 << uVar12 - 1 & 0x80000000) != 0;
      uVar3 = (uVar3 | uVar5 << 1) >> 1 | uVar5 >> (uVar6 & 0xff) | uVar8 << uVar12;
      uVar12 = 0;
    }
    bVar15 = 0x80000000 < uVar3 || uVar3 + 0x80000000 < (uint)bVar15;
    return CONCAT44(uVar12 + uVar13 + CARRY4(uVar7,(uint)bVar15),uVar7 + bVar15);
  }
  bVar15 = 0x80000000 < uVar6 * 0x40000000 ||
           uVar6 * 0x40000000 + 0x80000000 < (uint)((uVar6 & 4) != 0);
  uVar12 = uVar9 * 0x100000;
  uVar8 = (uVar9 >> 0xc) +
          iVar11 * 0x100000 + (uint)(CARRY4(uVar5,uVar12) || CARRY4(uVar5 + uVar12,(uint)bVar15));
  if ((int)(uVar8 + 0x100000) < 0) {
    return (ulonglong)(uVar13 | 0x7ff00000) << 0x20;
  }
  return CONCAT44(uVar8 | uVar13,uVar5 + uVar12 + bVar15);
}



// ==== FUN_0800d610 @ 0800d610 ====

ulonglong FUN_0800d610(uint param_1,uint param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  
  uVar7 = param_2 & 0x80000000;
  uVar2 = (param_2 - uVar7) + 0xc8000000;
  if ((int)uVar2 < 0x100000) {
    uVar3 = 9 - ((int)uVar2 >> 0x14);
    if (0x20 < uVar3) {
      return CONCAT44(uVar2,param_2) & 0xffffffff80000000;
    }
    uVar4 = param_2 * 0x400 | param_1 >> 0x16;
    bVar8 = (param_1 & 0x3fffff) != 0;
    bVar1 = CARRY4(uVar4 * 2,(uint)bVar8);
    uVar5 = uVar4 * 2 + (uint)bVar8 | 0x80000000;
    uVar2 = 0x20 - uVar3 & 0xff;
    bVar8 = (uVar5 << uVar2 - 1 & 0x80000000) != 0;
    uVar6 = uVar5 << uVar2;
    return CONCAT44((uVar6 + 0x80000000) -
                    (uint)((uVar2 != 0 || !CARRY4(uVar4,uVar4) && !bVar1) && (uVar2 == 0 || !bVar8))
                    ,(uVar5 >> (uVar3 & 0xff)) + uVar7 +
                     (uint)(0x80000000 < uVar6 ||
                           uVar6 + 0x80000000 <
                           (uint)(uVar2 == 0 && (CARRY4(uVar4,uVar4) || bVar1) ||
                                 uVar2 != 0 && bVar8)));
  }
  if (0xfefffff < uVar2) {
    uVar3 = 0xffffffff;
    if (-1 < (int)((param_2 - uVar7) + 0xfffff)) {
      uVar3 = uVar7 | 0x7f800000;
    }
    return CONCAT44(uVar2,uVar3);
  }
  bVar1 = (param_1 & 0x20000000) != 0;
  uVar3 = param_1 * 8;
  return CONCAT44((uVar3 + 0x80000000) - (uint)!bVar1,
                  (uVar7 | uVar2 * 8) +
                  (param_1 >> 0x1d) + (uint)(0x80000000 < uVar3 || uVar3 + 0x80000000 < (uint)bVar1)
                 );
}



// ==== FUN_0800d678 @ 0800d678 ====

int FUN_0800d678(undefined1 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined1 *local_1c;
  undefined4 *local_18;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  local_18 = &uStack_8;
  local_1c = param_1;
  uStack_8 = param_3;
  uStack_4 = param_4;
  iVar1 = FUN_0801353e((int)&DAT_0800d6b4 + DAT_0800d6b4,&local_1c,param_2,&local_18,0);
  *local_1c = 0;
  if (-1 < iVar1) {
    iVar1 = (int)local_1c - (int)param_1;
  }
  return iVar1;
}



// ==== FUN_0800d6b8 @ 0800d6b8 ====

longlong FUN_0800d6b8(uint param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = (param_1 & 0x7fffffff) >> 0x17;
  if (uVar4 == 0) {
    uVar4 = param_1 & 0x80000000;
    iVar1 = param_1 << 8;
    iVar3 = 0;
    if (iVar1 != 0) {
      uVar2 = iVar1 << LZCOUNT(iVar1);
      uVar4 = uVar4 + 0x38000000 + LZCOUNT(iVar1) * -0x100000 + (uVar2 >> 0xb);
      iVar3 = uVar2 << 0x15;
    }
    return CONCAT44(uVar4,iVar3);
  }
  if (uVar4 == 0xff) {
    if ((param_1 & 0x7fffff) == 0) {
      param_1 = param_1 | 0x700000;
    }
    else {
      param_1 = 0x7fffffff;
    }
    return (ulonglong)param_1 << 0x20;
  }
  return CONCAT44(((int)param_1 >> 3 & 0x8fffffffU) + 0x38000000,param_1 << 0x1d);
}



// ==== FUN_0800d700 @ 0800d700 ====

longlong FUN_0800d700(int *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  if (param_1 == (int *)0x0) {
    return CONCAT44(param_4,1);
  }
  param_1[10] = 0;
  if (*(char *)((int)param_1 + 0x51) == '\0') {
    *(undefined1 *)(param_1 + 0x14) = 0;
    FUN_080143e2(param_1);
  }
  *(undefined1 *)((int)param_1 + 0x51) = 2;
  *(uint *)*param_1 = *(uint *)*param_1 & 0xffffffbf;
  *(uint *)*param_1 =
       param_1[1] | param_1[2] | param_1[3] | param_1[4] | param_1[5] | param_1[6] & 0x200U |
       param_1[7] | param_1[8] | param_1[10];
  *(uint *)(*param_1 + 4) = (uint)param_1[6] >> 0x10 & 4 | param_1[9];
  *(uint *)(*param_1 + 0x1c) = *(uint *)(*param_1 + 0x1c) & 0xfffff7ff;
  param_1[0x15] = 0;
  *(undefined1 *)((int)param_1 + 0x51) = 1;
  return (ulonglong)param_4 << 0x20;
}



// ==== FUN_0800d782 @ 0800d782 ====

undefined8 FUN_0800d782(int *param_1,int param_2,int param_3,int param_4,uint param_5)

{
  undefined2 uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  int *piVar6;
  undefined4 uVar7;
  int local_28;
  
  bVar2 = true;
  uVar7 = 0;
  piVar6 = param_1 + 0x14;
  local_28 = param_3;
  if ((char)*piVar6 == '\x01') {
    uVar7 = 2;
    goto LAB_0800d974;
  }
  *(char *)piVar6 = '\x01';
  iVar3 = FUN_080143e4();
  if ((*(char *)((int)param_1 + 0x51) == '\x01') ||
     (((param_1[1] == 0x104 && (param_1[2] == 0)) && (*(char *)((int)param_1 + 0x51) == '\x04')))) {
    if (((param_2 == 0) || (param_3 == 0)) || (param_4 == 0)) {
      uVar7 = 1;
    }
    else {
      if (*(char *)((int)param_1 + 0x51) != '\x04') {
        *(undefined1 *)((int)param_1 + 0x51) = 5;
      }
      param_1[0x15] = 0;
      param_1[0xe] = param_3;
      uVar1 = (undefined2)param_4;
      *(undefined2 *)((int)param_1 + 0x3e) = uVar1;
      *(undefined2 *)(param_1 + 0xf) = uVar1;
      param_1[0xc] = param_2;
      *(undefined2 *)((int)param_1 + 0x36) = uVar1;
      *(undefined2 *)(param_1 + 0xd) = uVar1;
      param_1[0x10] = 0;
      param_1[0x11] = 0;
      puVar5 = (uint *)*param_1;
      if (-1 < (int)(*puVar5 << 0x19)) {
        *puVar5 = *puVar5 | 0x40;
      }
      if (param_1[3] == 0x800) {
        if ((param_1[1] == 0) || (param_4 == 1)) {
          *(uint *)(*param_1 + 0xc) = (uint)*(ushort *)param_1[0xc];
          param_1[0xc] = param_1[0xc] + 2;
          *(short *)((int)param_1 + 0x36) = *(short *)((int)param_1 + 0x36) + -1;
        }
        do {
          if ((*(short *)((int)param_1 + 0x36) == 0) && (*(short *)((int)param_1 + 0x3e) == 0))
          goto LAB_0800d93c;
          if (((*(int *)(*param_1 + 8) << 0x1e < 0) && (*(short *)((int)param_1 + 0x36) != 0)) &&
             (bVar2)) {
            *(uint *)(*param_1 + 0xc) = (uint)*(ushort *)param_1[0xc];
            param_1[0xc] = param_1[0xc] + 2;
            *(short *)((int)param_1 + 0x36) = *(short *)((int)param_1 + 0x36) + -1;
            bVar2 = false;
          }
          if ((*(int *)(*param_1 + 8) << 0x1f < 0) && (*(short *)((int)param_1 + 0x3e) != 0)) {
            *(short *)param_1[0xe] = (short)*(undefined4 *)(*param_1 + 0xc);
            param_1[0xe] = param_1[0xe] + 2;
            *(short *)((int)param_1 + 0x3e) = *(short *)((int)param_1 + 0x3e) + -1;
            bVar2 = true;
          }
          iVar4 = FUN_080143e4();
        } while (((uint)(iVar4 - iVar3) < param_5) || (param_5 == 0xffffffff));
      }
      else {
        if ((param_1[1] == 0) || (param_4 == 1)) {
          *(undefined1 *)(*param_1 + 0xc) = *(undefined1 *)param_1[0xc];
          param_1[0xc] = param_1[0xc] + 1;
          *(short *)((int)param_1 + 0x36) = *(short *)((int)param_1 + 0x36) + -1;
        }
        do {
          if ((*(short *)((int)param_1 + 0x36) == 0) && (*(short *)((int)param_1 + 0x3e) == 0))
          goto LAB_0800d93c;
          if ((*(int *)(*param_1 + 8) << 0x1e < 0) &&
             ((*(short *)((int)param_1 + 0x36) != 0 && (bVar2)))) {
            *(undefined1 *)(*param_1 + 0xc) = *(undefined1 *)param_1[0xc];
            param_1[0xc] = param_1[0xc] + 1;
            *(short *)((int)param_1 + 0x36) = *(short *)((int)param_1 + 0x36) + -1;
            bVar2 = false;
          }
          if ((*(int *)(*param_1 + 8) << 0x1f < 0) && (*(short *)((int)param_1 + 0x3e) != 0)) {
            *(char *)param_1[0xe] = (char)*(undefined4 *)(*param_1 + 0xc);
            param_1[0xe] = param_1[0xe] + 1;
            *(short *)((int)param_1 + 0x3e) = *(short *)((int)param_1 + 0x3e) + -1;
            bVar2 = true;
          }
          iVar4 = FUN_080143e4();
        } while ((((uint)(iVar4 - iVar3) < param_5) || (param_5 == 0xffffffff)) && (param_5 != 0));
      }
      uVar7 = 3;
    }
  }
  else {
    uVar7 = 2;
  }
  goto LAB_0800d96a;
LAB_0800d93c:
  iVar3 = FUN_0800da10(param_1,param_5,iVar3);
  if (iVar3 == 0) {
    if (param_1[2] == 0) {
      local_28 = *(int *)(*param_1 + 8);
    }
  }
  else {
    uVar7 = 1;
    param_1[0x15] = 0x20;
  }
LAB_0800d96a:
  *(undefined1 *)((int)param_1 + 0x51) = 1;
  *(char *)piVar6 = '\0';
LAB_0800d974:
  return CONCAT44(local_28,uVar7);
}



// ==== FUN_0800d978 @ 0800d978 ====

undefined4 FUN_0800d978(int *param_1,uint param_2,uint param_3,uint param_4,int param_5)

{
  int iVar1;
  
  do {
    if (((*(uint *)(*param_1 + 8) & param_2) == param_2) == param_3) {
      return 0;
    }
  } while ((param_4 == 0xffffffff) ||
          ((iVar1 = FUN_080143e4(), (uint)(iVar1 - param_5) < param_4 && (param_4 != 0))));
  *(uint *)(*param_1 + 4) = *(uint *)(*param_1 + 4) & 0xffffff1f;
  if ((param_1[1] == 0x104) && ((param_1[2] == 0x8000 || (param_1[2] == 0x400)))) {
    *(uint *)*param_1 = *(uint *)*param_1 & 0xffffffbf;
  }
  if (param_1[10] == 0x2000) {
    *(uint *)*param_1 = *(uint *)*param_1 & 0xffffdfff;
    *(uint *)*param_1 = *(uint *)*param_1 | 0x2000;
  }
  *(undefined1 *)((int)param_1 + 0x51) = 1;
  *(undefined1 *)(param_1 + 0x14) = 0;
  return 3;
}



// ==== FUN_0800da10 @ 0800da10 ====

longlong FUN_0800da10(int *param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (int)(((ulonglong)*DAT_0800da6c / 0x18) / (ulonglong)DAT_0800da70) * 1000;
  if (param_1[1] == 0x104) {
    iVar1 = FUN_0800d978(param_1,0x80,0,param_2,param_3,param_4);
    uVar2 = param_3;
    if (iVar1 != 0) {
      param_1[0x15] = param_1[0x15] | 0x20;
      return CONCAT44(param_3,3);
    }
  }
  else {
    do {
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
    } while (*(int *)(*param_1 + 8) << 0x18 < 0);
  }
  return (ulonglong)uVar2 << 0x20;
}



// ==== FUN_0800da74 @ 0800da74 ====

void FUN_0800da74(uint param_1,char param_2)

{
  if (-1 < (int)param_1) {
    *(char *)(DAT_0800dc58 + param_1) = param_2 << 4;
    return;
  }
  *(char *)(DAT_0800dc5c + (param_1 & 0xf) + -4) = param_2 << 4;
  return;
}



// ==== FUN_0800da8e @ 0800da8e ====

undefined8 FUN_0800da8e(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  uint uVar2;
  
  puVar1 = DAT_0800dc60;
  uVar2 = param_1 - 1;
  if (uVar2 < 0x1000000) {
    DAT_0800dc60[1] = uVar2;
    FUN_0800da74(0xffffffff,0xf);
    puVar1[2] = 0;
    *puVar1 = 7;
  }
  return CONCAT44(param_4,~-(uint)(uVar2 < 0x1000000) >> 0x1f);
}



// ==== FUN_0800dabc @ 0800dabc ====

void FUN_0800dabc(void)

{
  int iVar1;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  FUN_0800a350(&local_38,0x30,0);
  FUN_0800a350(&local_4c,0x14,0);
  *DAT_0800dc64 = *DAT_0800dc64 | 0x10000000;
  *DAT_0800dc68 = *DAT_0800dc68 & 0xffff3fff | 0x8000;
  local_38 = 1;
  local_34 = 0x10000;
  local_20 = 2;
  local_1c = 0x400000;
  local_18 = 4;
  local_14 = 0x54;
  local_10 = 2;
  local_c = 4;
  iVar1 = FUN_080143f0(&local_38);
  if (iVar1 != 0) {
    FUN_0800dc7c();
  }
  local_4c = 0xf;
  local_48 = 2;
  local_44 = 0;
  local_40 = 0x1000;
  local_3c = 0;
  iVar1 = FUN_0800de38(&local_4c,2);
  if (iVar1 != 0) {
    FUN_0800dc7c();
  }
  local_4c = 0xf;
  local_48 = 2;
  local_44 = 0;
  local_40 = 0x1000;
  local_3c = 0;
  iVar1 = FUN_0800de38(&local_4c,2);
  if (iVar1 != 0) {
    FUN_0800dc7c();
  }
  FUN_0800da8e(DAT_0800dc6c);
  FUN_0800db8a();
  return;
}



// ==== FUN_0800db8a @ 0800db8a ====

uint FUN_0800db8a(void)

{
  uint *puVar1;
  
  puVar1 = DAT_0800dc70;
  *DAT_0800dc70 = *DAT_0800dc70 | 1;
  *puVar1 = *puVar1 | 2;
  *puVar1 = *puVar1 | 4;
  *puVar1 = *puVar1 | 8;
  puVar1[5] = puVar1[5] | 0x10;
  puVar1[5] = puVar1[5] | 0x1000;
  puVar1[4] = puVar1[4] | 0x4000;
  puVar1[4] = puVar1[4] | 0x8000;
  return puVar1[4] & 0x8000;
}



// ==== FUN_0800dc42 @ 0800dc42 ====

int FUN_0800dc42(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  byte bVar1;
  short sVar2;
  byte *pbVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined2 *puVar9;
  uint *puVar10;
  ushort *puVar11;
  
  pbVar3 = DAT_08012788;
  iVar8 = DAT_08012784;
  if (param_1 == DAT_0800dc74) {
    FUN_08015a42(DAT_08012788[3]);
    iVar8 = FUN_080171bc(0x1e);
    return iVar8;
  }
  if (param_1 == DAT_0800dc78) {
    if (DAT_08012788[5] == 0) {
      puVar11 = (ushort *)(DAT_08012784 + 0x56);
      FUN_080159ea((char)*(undefined2 *)(DAT_08012784 + 0x58));
      FUN_08015a42((char)*puVar11);
      uVar4 = DAT_0801278c;
      FUN_080166d8(DAT_0801278c,0);
      FUN_080166d0(uVar4,*(byte *)(iVar8 + 0x55) - 1);
      FUN_080166e4(uVar4);
      FUN_080166ee();
      pbVar3[5] = 1;
      if (*(int *)(iVar8 + 0x70) == 0) {
        if (pbVar3[1] == *pbVar3) {
          FUN_08011b12();
          if (*(char *)(*(int *)(iVar8 + 0x6c) + 0x11) != '\0') {
            thunk_FUN_08016826(0);
          }
          FUN_0800e8d8(4);
          *DAT_080127a8 = 1;
          return param_4;
        }
        iVar6 = iVar8 + (uint)*pbVar3 * 8;
        *(int *)(iVar8 + 0x70) = iVar6 + 0x1a8;
        FUN_080166d0(DAT_08012790,*(ushort *)(iVar6 + 0x1aa) - 1);
        puVar9 = *(undefined2 **)(iVar8 + 0x70);
        *(undefined2 *)(iVar8 + 0x68) = *puVar9;
        bVar1 = *(byte *)(puVar9 + 2);
        if ((uint)*(byte *)(iVar8 + 0x6a) != (uint)bVar1) {
          *(byte *)(iVar8 + 0x6a) = bVar1;
          *(uint *)(iVar8 + 0x6c) = iVar8 + (uint)bVar1 * 0x14 + 0x7c;
          uVar7 = *(uint *)(*(int *)(iVar8 + 0x6c) + 0xc) >> 1;
          *(uint *)(iVar8 + 0x50) = uVar7;
          *(uint *)(iVar8 + 0x4c) = uVar7;
          *(uint *)(iVar8 + 0x48) = uVar7;
        }
        puVar10 = *(uint **)(iVar8 + 0x6c);
        *(ushort *)(iVar8 + 0x58) = (ushort)(byte)((byte)puVar10[4] ^ pbVar3[4]);
        *(uint *)(iVar8 + 0x5c) = *puVar10 >> *(sbyte *)((int)puVar9 + 5);
        *(uint *)(iVar8 + 0x60) = puVar10[1] >> *(sbyte *)(*(int *)(iVar8 + 0x70) + 5);
        *(uint *)(iVar8 + 100) = puVar10[2] >> (uint)*(byte *)(*(int *)(iVar8 + 0x70) + 5);
        thunk_FUN_08016826(*(undefined2 *)(*(int *)(iVar8 + 0x70) + 6));
      }
      if (*DAT_080127a0 == '\x01') {
        FUN_0800fe2c();
      }
      *puVar11 = 0;
      uVar7 = *(uint *)(iVar8 + 0x5c) + *(int *)(iVar8 + 0x48);
      *(uint *)(iVar8 + 0x48) = uVar7;
      piVar5 = DAT_080127a4;
      iVar6 = *(int *)(iVar8 + 0x6c);
      if (*(uint *)(iVar6 + 0xc) < uVar7) {
        *puVar11 = 1;
        *(uint *)(iVar8 + 0x48) = uVar7 - *(int *)(iVar6 + 0xc);
        if ((int)((uint)*(byte *)(iVar6 + 0x10) << 0x1f) < 0) {
          *piVar5 = *piVar5 + -1;
        }
        else {
          *piVar5 = *piVar5 + 1;
        }
      }
      uVar7 = *(int *)(iVar8 + 0x60) + *(int *)(iVar8 + 0x4c);
      *(uint *)(iVar8 + 0x4c) = uVar7;
      if (*(uint *)(iVar6 + 0xc) < uVar7) {
        *puVar11 = *puVar11 | 2;
        *(uint *)(iVar8 + 0x4c) = uVar7 - *(int *)(iVar6 + 0xc);
        if ((int)((uint)*(byte *)(iVar6 + 0x10) << 0x1e) < 0) {
          piVar5[1] = piVar5[1] + -1;
        }
        else {
          piVar5[1] = piVar5[1] + 1;
        }
      }
      uVar7 = *(int *)(iVar8 + 100) + *(int *)(iVar8 + 0x50);
      *(uint *)(iVar8 + 0x50) = uVar7;
      if (*(uint *)(iVar6 + 0xc) < uVar7) {
        *puVar11 = *puVar11 | 4;
        *(uint *)(iVar8 + 0x50) = uVar7 - *(int *)(iVar6 + 0xc);
        if ((int)((uint)*(byte *)(iVar6 + 0x10) << 0x1d) < 0) {
          piVar5[2] = piVar5[2] + -1;
        }
        else {
          piVar5[2] = piVar5[2] + 1;
        }
      }
      if (*DAT_08012798 == '\x04') {
        *puVar11 = *puVar11 & (ushort)(byte)DAT_08012798[6];
      }
      sVar2 = *(short *)(iVar8 + 0x68) + -1;
      *(short *)(iVar8 + 0x68) = sVar2;
      if (sVar2 == 0) {
        *(undefined4 *)(iVar8 + 0x70) = 0;
        bVar1 = *pbVar3;
        *pbVar3 = bVar1 + 1;
        if ((byte)(bVar1 + 1) == 0x10) {
          *pbVar3 = 0;
        }
      }
      *puVar11 = *puVar11 ^ (ushort)pbVar3[3];
      pbVar3[5] = 0;
    }
    return param_4;
  }
  return param_1;
}



// ==== FUN_0800dc7c @ 0800dc7c ====

void FUN_0800dc7c(void)

{
  disableIRQinterrupts();
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// ==== FUN_0800dc80 @ 0800dc80 ====

uint FUN_0800dc80(uint *param_1,uint *param_2,undefined4 param_3,uint param_4)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint local_18;
  
  local_18 = param_4;
  for (uVar3 = 0; uVar3 < 0x10; uVar3 = uVar3 + 1) {
    uVar7 = 1 << (uVar3 & 0xff);
    uVar2 = *param_2 & uVar7;
    if (uVar2 == uVar7) {
      uVar4 = uVar3 << 1;
      uVar5 = ~(3 << (uVar4 & 0xff));
      uVar6 = param_2[1];
      if ((((uVar6 == 1) || (uVar6 == 2)) || (uVar6 == 0x11)) || (uVar6 == 0x12)) {
        param_1[2] = param_2[3] << (uVar4 & 0xff) | param_1[2] & uVar5;
        param_1[1] = param_1[1] & ~uVar7 | ((param_2[1] & 0x1f) >> 4) << (uVar3 & 0xff);
      }
      param_1[3] = param_1[3] & uVar5 | param_2[2] << (uVar4 & 0xff);
      if ((param_2[1] == 2) || (param_2[1] == 0x12)) {
        iVar8 = (uVar3 & 7) << 2;
        param_1[(uVar3 >> 3) + 8] =
             param_2[4] << iVar8 | param_1[(uVar3 >> 3) + 8] & ~(0xf << iVar8);
      }
      *param_1 = *param_1 & uVar5 | ((byte)param_2[1] & 3) << (uVar4 & 0xff);
      puVar1 = DAT_0800de20;
      if ((int)(param_2[1] << 3) < 0) {
        *DAT_0800de20 = *DAT_0800de20 | 0x4000;
        local_18 = *puVar1 & 0x4000;
        iVar8 = (uVar3 & 3) << 2;
        if (param_1 == DAT_0800de28) {
          iVar9 = 0;
        }
        else if (param_1 == DAT_0800de2c) {
          iVar9 = 1;
        }
        else if (param_1 == DAT_0800de30) {
          iVar9 = 2;
        }
        else if (param_1 == DAT_0800de34) {
          iVar9 = 3;
        }
        else if (param_1 == DAT_0800de18) {
          iVar9 = 4;
        }
        else {
          iVar9 = 7;
        }
        *(uint *)(DAT_0800de24 + (uVar3 >> 2) * 4) =
             iVar9 << iVar8 | *(uint *)(DAT_0800de24 + (uVar3 >> 2) * 4) & ~(0xf << iVar8);
        puVar1 = DAT_0800de1c;
        uVar7 = ~uVar2;
        uVar4 = *DAT_0800de1c & uVar7;
        if ((int)(param_2[1] << 0xf) < 0) {
          uVar4 = uVar4 | uVar2;
        }
        *DAT_0800de1c = uVar4;
        uVar4 = puVar1[1] & uVar7;
        if ((int)(param_2[1] << 0xe) < 0) {
          uVar4 = uVar4 | uVar2;
        }
        puVar1[1] = uVar4;
        uVar4 = puVar1[2] & uVar7;
        if ((int)(param_2[1] << 0xb) < 0) {
          uVar4 = uVar4 | uVar2;
        }
        puVar1[2] = uVar4;
        uVar7 = puVar1[3] & uVar7;
        if ((int)(param_2[1] << 10) < 0) {
          uVar7 = uVar7 | uVar2;
        }
        puVar1[3] = uVar7;
      }
    }
  }
  return local_18;
}



// ==== FUN_0800ddfa @ 0800ddfa ====

uint FUN_0800ddfa(int param_1,uint param_2)

{
  return ~-(uint)((param_2 & *(uint *)(param_1 + 0x10)) == 0) >> 0x1f;
}



// ==== FUN_0800de0a @ 0800de0a ====

void FUN_0800de0a(int param_1,int param_2,int param_3)

{
  if (param_3 != 0) {
    *(int *)(param_1 + 0x18) = param_2;
    return;
  }
  *(int *)(param_1 + 0x18) = param_2 << 0x10;
  return;
}



// ==== FUN_0800de38 @ 0800de38 ====

/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_0800de38(byte *param_1,uint param_2)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  puVar1 = DAT_0800df7c;
  if ((param_1 != (byte *)0x0) &&
     ((param_2 <= (*DAT_0800df7c & 0xf) ||
      (*(char *)DAT_0800df7c = (char)param_2, (*puVar1 & 0xf) == param_2)))) {
    piVar2 = DAT_0800df80;
    if (*(int *)param_1 << 0x1e < 0) {
      if (*(int *)param_1 << 0x1d < 0) {
        DAT_0800df80[2] = DAT_0800df80[2] | 0x1c00;
      }
      if ((int)((uint)*param_1 << 0x1c) < 0) {
        piVar2[2] = piVar2[2] | 0xe000;
      }
      piVar2[2] = piVar2[2] & 0xffffff0fU | *(uint *)(param_1 + 8);
    }
    if ((int)((uint)*param_1 << 0x1f) < 0) {
      uVar3 = *(uint *)(param_1 + 4);
      if (uVar3 == 1) {
        iVar5 = *piVar2 << 0xe;
      }
      else if ((uVar3 == 2) || (uVar3 == 3)) {
        iVar5 = *piVar2 << 6;
      }
      else {
        iVar5 = *piVar2 << 0x1e;
      }
      if (-1 < iVar5) {
        return 1;
      }
      piVar2[2] = uVar3 | piVar2[2] & 0xfffffffcU;
      iVar5 = FUN_080143e4();
      while ((piVar2[2] & 0xcU) != *(int *)(param_1 + 4) * 4) {
        iVar4 = FUN_080143e4();
        if (5000 < (uint)(iVar4 - iVar5)) {
          return 3;
        }
      }
    }
    if (((*puVar1 & 0xf) <= param_2) ||
       (*(char *)puVar1 = (char)param_2, (*puVar1 & 0xf) == param_2)) {
      if ((int)((uint)*param_1 << 0x1d) < 0) {
        piVar2[2] = piVar2[2] & 0xffffe3ffU | *(uint *)(param_1 + 0xc);
      }
      if ((int)((uint)*param_1 << 0x1c) < 0) {
        piVar2[2] = piVar2[2] & 0xffff1fffU | *(int *)(param_1 + 0x10) << 3;
      }
      uVar3 = FUN_08014718();
      *DAT_0800df88 = uVar3 >> *(sbyte *)(DAT_0800df84 + ((piVar2[2] & 0xffU) >> 4));
      FUN_0801477c(*DAT_0800df8c);
      return 0;
    }
  }
  return 1;
}



// ==== FUN_0800df48 @ 0800df48 ====

undefined4 FUN_0800df48(void)

{
  return *DAT_0800df88;
}



// ==== FUN_0800df4e @ 0800df4e ====

undefined8 FUN_0800df4e(void)

{
  uint uVar1;
  undefined4 unaff_r7;
  
  uVar1 = FUN_0800df48();
  return CONCAT44(unaff_r7,uVar1 >> *(sbyte *)(DAT_0800df94 + ((*DAT_0800df90 & 0x1fff) >> 10)));
}



// ==== FUN_0800df64 @ 0800df64 ====

undefined8 FUN_0800df64(void)

{
  uint uVar1;
  undefined4 unaff_r7;
  
  uVar1 = FUN_0800df48();
  return CONCAT44(unaff_r7,uVar1 >> *(sbyte *)(DAT_0800df94 + ((*DAT_0800df90 & 0xffff) >> 0xd)));
}



// ==== FUN_0800df98 @ 0800df98 ====

int FUN_0800df98(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = DAT_0800e290 + param_1 * 0x208;
  uVar2 = *(uint *)(iVar1 + 0x204);
  uVar3 = *(uint *)(iVar1 + 0x200);
  if (uVar2 <= uVar3) {
    return uVar2 + (0x200 - uVar3);
  }
  return uVar2 - uVar3;
}



// ==== FUN_0800dfc0 @ 0800dfc0 ====

undefined4 FUN_0800dfc0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  if ((param_1 == 0) || (param_1 == 0xff)) {
    FUN_08014ad0(param_2);
    do {
      iVar1 = FUN_08014aec();
    } while (iVar1 == 0);
  }
  if ((param_1 == 2) || (param_1 == 0xff)) {
    FUN_08014b24(param_2);
    do {
      iVar1 = FUN_08014b40();
    } while (iVar1 == 0);
  }
  if ((param_1 == 1) || (param_1 == 0xff)) {
    FUN_08014afa(param_2);
    do {
      iVar1 = FUN_08014b16();
    } while (iVar1 == 0);
  }
  return param_4;
}



// ==== FUN_0800e00e @ 0800e00e ====

undefined1 FUN_0800e00e(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar2 = DAT_0800e290 + param_1 * 0x208;
  iVar3 = *(int *)(iVar2 + 0x204);
  if (iVar3 != *(int *)(iVar2 + 0x200)) {
    uVar1 = *(undefined1 *)(iVar2 + iVar3);
    uVar4 = iVar3 + 1;
    if (0x1ff < uVar4) {
      uVar4 = 0;
    }
    *(uint *)(iVar2 + 0x204) = uVar4;
    return uVar1;
  }
  return 0xff;
}



// ==== FUN_0800e03a @ 0800e03a ====

undefined8 FUN_0800e03a(uint param_1,uint param_2)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  undefined8 uVar6;
  char local_c;
  
  pbVar2 = DAT_0800e938;
  local_c = (char)param_2;
  uVar3 = param_2 & 0xff;
  if (uVar3 == 0x18) {
    uVar6 = FUN_08010860(param_1,param_2);
    return uVar6;
  }
  if (uVar3 == 0x21) {
    uVar6 = FUN_0800e8d8(8,param_1,param_2);
    return uVar6;
  }
  if (uVar3 == 0x3f) {
    *DAT_0800e294 = 1 << (param_1 & 0xff) | *DAT_0800e294;
    return CONCAT44(param_2,param_1);
  }
  if (uVar3 == 0x7e) {
    uVar6 = FUN_0800e8d8(2,param_1,param_2);
    return uVar6;
  }
  if ((param_2 & 0xff) < 0x80) {
    iVar4 = FUN_0800a5a8();
    if (iVar4 == 2) {
      if ((local_c == '\r') || (local_c == '\n')) {
        FUN_0800b154(param_1,s_error__0800e29f + 1);
        FUN_0800b190(param_1,0x78);
        FUN_0800b154(param_1,&DAT_0800e28c);
        FUN_0800b154(param_1,s_SD_card_job_running_0800e2a8);
        if (*DAT_0800e298 == 0) {
          uVar6 = FUN_0800a5a0(0,param_1,param_2);
          return uVar6;
        }
      }
    }
    else {
      iVar4 = DAT_0800e290 + param_1 * 0x208;
      puVar5 = (uint *)(iVar4 + 0x200);
      uVar3 = *puVar5 + 1;
      if (0x1ff < uVar3) {
        uVar3 = 0;
      }
      if (uVar3 != *(uint *)(iVar4 + 0x204)) {
        *(char *)(iVar4 + *puVar5) = local_c;
        *puVar5 = uVar3;
        return CONCAT44(param_2,param_1);
      }
    }
  }
  else {
    uVar3 = param_2 & 0xff;
    if (uVar3 == 0x84) {
      uVar6 = FUN_0800e8d8(0x20,param_1,param_2);
      return uVar6;
    }
    if (uVar3 != 0x85) {
      if (uVar3 == 0x90) {
        uVar3 = 1;
      }
      else if (uVar3 == 0x91) {
        uVar3 = 2;
      }
      else if (uVar3 == 0x92) {
        uVar3 = 4;
      }
      else if (uVar3 == 0x93) {
        uVar3 = 8;
      }
      else if (uVar3 == 0x94) {
        uVar3 = 0x10;
      }
      else if (uVar3 == 0x95) {
        uVar3 = 0x20;
      }
      else if (uVar3 == 0x96) {
        uVar3 = 0x40;
      }
      else {
        if (uVar3 != 0x97) {
          if (uVar3 == 0x99) {
            uVar6 = FUN_0800e90a(1,param_1,param_2);
            return uVar6;
          }
          if (uVar3 == 0x9a) {
            uVar6 = FUN_0800e90a(2,param_1,param_2);
            return uVar6;
          }
          if (uVar3 == 0x9b) {
            uVar6 = FUN_0800e90a(4,param_1,param_2);
            return uVar6;
          }
          if (uVar3 == 0x9c) {
            uVar6 = FUN_0800e90a(8,param_1,param_2);
            return uVar6;
          }
          if (uVar3 == 0x9d) {
            uVar6 = FUN_0800e90a(0x10,param_1,param_2);
            return uVar6;
          }
          if (uVar3 == 0x9e) {
            uVar6 = FUN_0800e90a(0x20,param_1,param_2);
            return uVar6;
          }
          if (uVar3 == 0xa0) {
            uVar6 = FUN_0800e90a(0x40,param_1,param_2);
            return uVar6;
          }
          if (uVar3 != 0xa1) {
            return CONCAT44(param_2,param_1);
          }
          uVar6 = FUN_0800e90a(0x80,param_1,param_2);
          return uVar6;
        }
        uVar3 = 0x80;
      }
      bVar1 = *DAT_0800e938;
      *DAT_0800e938 = (byte)(uVar3 | bVar1);
      return CONCAT44(pbVar2,uVar3 | bVar1);
    }
    if ((int)((uint)*DAT_0800e298 << 0x1a) < 0) {
      uVar6 = FUN_0800e8d8(0x40,param_1,param_2);
      return uVar6;
    }
  }
  return CONCAT44(param_2,param_1);
}



// ==== FUN_0800e218 @ 0800e218 ====

void FUN_0800e218(void)

{
  int iVar1;
  int iVar2;
  
  for (iVar1 = 0; iVar1 < 4; iVar1 = iVar1 + 1) {
    iVar2 = DAT_0800e290 + iVar1 * 0x208;
    *(undefined4 *)(iVar2 + 0x200) = *(undefined4 *)(iVar2 + 0x204);
  }
  return;
}



// ==== FUN_0800e236 @ 0800e236 ====

void FUN_0800e236(undefined1 *param_1)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = FUN_08014c18();
  uVar2 = FUN_0800df98(3);
  if (uVar1 < uVar2) {
    while (uVar2 = uVar1 - 1, uVar1 != 0) {
      piVar3 = (int *)(DAT_0800e290 + 0x818);
      iVar4 = *piVar3;
      iVar5 = iVar4 + 1;
      if (0x1ff < iVar5) {
        iVar5 = 0;
      }
      uVar1 = uVar2;
      if (iVar5 != *(int *)(DAT_0800e290 + 0x81c)) {
        *(undefined1 *)(DAT_0800e290 + iVar4 + 0x618) = *param_1;
        *piVar3 = iVar5;
        param_1 = param_1 + 1;
      }
    }
  }
  return;
}



// ==== FUN_0800e27a @ 0800e27a ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0800e27a(void)

{
  undefined4 uVar1;
  undefined4 unaff_r7;
  
  FUN_0800e218();
  uVar1 = FUN_08014d22(1);
  *_DAT_0800e29c = uVar1;
  return unaff_r7;
}



// ==== FUN_0800e2c0 @ 0800e2c0 ====

undefined4 FUN_0800e2c0(byte *param_1,byte *param_2,int param_3)

{
  while( true ) {
    if (param_3 == 0) {
      return 0;
    }
    if (*param_1 != *param_2) break;
    if (*param_1 == 0) {
      return 0;
    }
    param_2 = param_2 + 1;
    param_3 = param_3 + -1;
    param_1 = param_1 + 1;
  }
  if (*param_2 <= *param_1) {
    return 1;
  }
  return 0xffffffff;
}



// ==== FUN_0800e2ec @ 0800e2ec ====

uint FUN_0800e2ec(char *param_1,undefined4 *param_2,uint param_3,undefined4 *param_4)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  char cVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  uint uVar11;
  uint uVar12;
  uint unaff_r11;
  bool bVar13;
  bool bVar14;
  
  pcVar8 = param_1;
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = 0;
  }
  while (iVar4 = FUN_08015218(*pcVar8), iVar2 = DAT_0800e3a4, iVar4 != 0) {
    pcVar8 = pcVar8 + 1;
  }
  cVar1 = *pcVar8;
  if (cVar1 == '-' || cVar1 == '+') {
    cVar7 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  }
  else {
    cVar7 = '+';
  }
  if ((((int)param_3 < 0) || (param_3 == 1)) || (0x24 < (int)param_3)) {
    if (param_2 == (undefined4 *)0x0) {
      return 0;
    }
    *param_2 = param_1;
    return 0;
  }
  pcVar9 = pcVar8;
  if ((int)param_3 < 1) {
    if (*pcVar8 != '0') {
      param_3 = 10;
      goto LAB_0800e382;
    }
    if ((byte)(pcVar8[1] | 0x20U) != 0x78) {
      param_3 = 8;
      goto LAB_0800e382;
    }
    param_3 = 0x10;
  }
  else {
    bVar13 = param_3 == 0x10;
    if (bVar13) {
      cVar1 = *pcVar8;
    }
    bVar14 = bVar13 && cVar1 == '0';
    if (bVar13 && cVar1 == '0') {
      bVar14 = (byte)(pcVar8[1] | 0x20U) == 0x78;
    }
    if (!bVar14) goto LAB_0800e382;
  }
  pcVar8 = pcVar8 + 2;
  pcVar9 = pcVar8;
LAB_0800e382:
  for (; *pcVar8 == '0'; pcVar8 = pcVar8 + 1) {
  }
  iVar4 = (int)&DAT_0800e3a4 + DAT_0800e3a4;
  pcVar10 = pcVar8;
  uVar3 = 0;
  uVar12 = 0;
  while( true ) {
    uVar11 = uVar3;
    uVar5 = FUN_0801522c(*pcVar10);
    iVar6 = FUN_08015240(iVar2 + 0x800e3cc,uVar5,param_3);
    if (iVar6 == 0) break;
    unaff_r11 = iVar6 - (uint)(byte)((char)iVar4 + 0x28) & 0xff;
    pcVar10 = pcVar10 + 1;
    uVar3 = param_3 * uVar11 + unaff_r11;
    uVar12 = uVar11;
  }
  if (pcVar9 == pcVar10) {
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = param_1;
    }
    return 0;
  }
  if (((int)(pcVar10 + (-(uint)*(byte *)(iVar4 + param_3) - (int)pcVar8)) < 0) ||
     ((((int)(pcVar10 + (-(uint)*(byte *)(iVar4 + param_3) - (int)pcVar8)) < 1 &&
       (unaff_r11 <= uVar11)) && ((uVar11 - unaff_r11) / param_3 == uVar12)))) {
    if (cVar7 == '-') {
      uVar11 = -uVar11;
    }
  }
  else {
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = 1;
    }
    uVar11 = 0xffffffff;
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = pcVar10;
    return uVar11;
  }
  return uVar11;
}



// ==== thunk_FUN_0800e430 @ 0800e42e ====

void thunk_FUN_0800e430(undefined4 param_1)

{
  FUN_0800e2ec(param_1,0,10,0);
  return;
}



// ==== FUN_0800e430 @ 0800e430 ====

void FUN_0800e430(undefined4 param_1)

{
  FUN_0800e2ec(param_1,0,10,0);
  return;
}



// ==== FUN_0800e43c @ 0800e43c ====

void FUN_0800e43c(void)

{
  return;
}



// ==== FUN_0800e43e @ 0800e43e ====

undefined4 FUN_0800e43e(void)

{
  return 0;
}



// ==== FUN_0800e442 @ 0800e442 ====

undefined4 FUN_0800e442(void)

{
  return 0;
}



// ==== FUN_0800e446 @ 0800e446 ====

undefined4 FUN_0800e446(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  byte bVar3;
  
  for (bVar3 = 0; bVar3 < 2; bVar3 = bVar3 + 1) {
    iVar2 = FUN_08013056(bVar3,param_1);
    if (iVar2 == 0) {
      *param_1 = '\0';
      FUN_0800cb5c(0,param_1,7);
    }
    else if (*param_1 != '\0') {
      uVar1 = FUN_0800ed60(0,param_1);
      FUN_0800cb5c(0,param_1,uVar1);
    }
  }
  return param_4;
}



// ==== FUN_0800e84c @ 0800e84c ====

undefined4 FUN_0800e84c(void)

{
  undefined4 unaff_r7;
  
  FUN_0800b6da();
  *(undefined1 *)(DAT_0800e928 + 0xc) = 0;
  return unaff_r7;
}



// ==== FUN_0800e85a @ 0800e85a ====

float FUN_0800e85a(int param_1,int param_2)

{
  uint in_fpscr;
  float fVar1;
  
  fVar1 = (float)VectorSignedToFloat(*(undefined4 *)(param_1 + param_2 * 4),
                                     (byte)(in_fpscr >> 0x16) & 3);
  return fVar1 / *(float *)(DAT_0800e92c + param_2 * 4);
}



// ==== FUN_0800e876 @ 0800e876 ====

undefined4 FUN_0800e876(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  undefined4 uVar2;
  
  for (bVar1 = 0; bVar1 < 3; bVar1 = bVar1 + 1) {
    uVar2 = FUN_0800e85a(param_2,bVar1);
    *(undefined4 *)(param_1 + (uint)bVar1 * 4) = uVar2;
  }
  return param_4;
}



// ==== FUN_0800e89e @ 0800e89e ====

undefined4 FUN_0800e89e(int param_1)

{
  uint uVar1;
  float fVar2;
  
  uVar1 = 0;
  while( true ) {
    if (2 < uVar1) {
      return 0;
    }
    fVar2 = *(float *)(param_1 + uVar1 * 4);
    if ((0.0 < fVar2) ||
       ((int)((uint)(fVar2 < *(float *)(DAT_0800e92c + uVar1 * 4 + 0x24)) << 0x1f) < 0)) break;
    uVar1 = uVar1 + 1 & 0xff;
  }
  return 1;
}



// ==== FUN_0800e8d8 @ 0800e8d8 ====

void FUN_0800e8d8(byte param_1)

{
  *DAT_0800e930 = param_1 | *DAT_0800e930;
  return;
}



// ==== FUN_0800e8e2 @ 0800e8e2 ====

void FUN_0800e8e2(byte param_1)

{
  *DAT_0800e930 = *DAT_0800e930 & ~param_1;
  return;
}



// ==== FUN_0800e8ee @ 0800e8ee ====

void FUN_0800e8ee(byte param_1)

{
  *DAT_0800e934 = param_1 | *DAT_0800e934;
  return;
}



// ==== FUN_0800e8f8 @ 0800e8f8 ====

void FUN_0800e8f8(void)

{
  *DAT_0800e934 = 0;
  return;
}



// ==== FUN_0800e90a @ 0800e90a ====

void FUN_0800e90a(byte param_1)

{
  *DAT_0800e93c = param_1 | *DAT_0800e93c;
  return;
}



// ==== FUN_0800e914 @ 0800e914 ====

void FUN_0800e914(void)

{
  *DAT_0800e938 = 0;
  return;
}



// ==== FUN_0800e91c @ 0800e91c ====

void FUN_0800e91c(void)

{
  *DAT_0800e93c = 0;
  return;
}



// ==== FUN_0800ead4 @ 0800ead4 ====

void FUN_0800ead4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = DAT_0800ec28;
  FUN_0800b154(param_1,DAT_0800ec28);
  FUN_0800b154(param_1,s___ESP0__help__0800ec60);
  FUN_0800b154(param_1,iVar1 + 0x40);
  FUN_0800b154(param_1,s___ESP210__report_sdcard_path_0800ec70);
  FUN_0800b154(param_1,iVar1 + 100);
  FUN_0800b154(param_1,iVar1 + 0x8c);
  FUN_0800b154(param_1,iVar1 + 0xb0);
  FUN_0800b154(param_1,iVar1 + 0xd8);
  FUN_0800b154(param_1,iVar1 + 0x100);
  FUN_0800b154(param_1,iVar1 + 0x124);
  FUN_0800b154(param_1,s___ESP504_baud____set_bt_baud_0800ec90);
  FUN_0800b154(param_1,iVar1 + 0x148);
  FUN_0800b154(param_1,iVar1 + 0x16c,param_4);
  return;
}



// ==== FUN_0800eb60 @ 0800eb60 ====

void FUN_0800eb60(undefined4 param_1,int *param_2)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = thunk_FUN_0800e430();
  bVar1 = false;
  if (iVar2 == 0x2580) {
    bVar1 = true;
  }
  else if (iVar2 == 0x3840) {
    bVar1 = true;
  }
  else if (iVar2 == 0x4b00) {
    bVar1 = true;
  }
  else if (iVar2 == 0x9600) {
    bVar1 = true;
  }
  else if (iVar2 == 56000) {
    bVar1 = true;
  }
  else if (iVar2 == 0xe100) {
    bVar1 = true;
  }
  else if (iVar2 == 0x1c200) {
    bVar1 = true;
  }
  else if (iVar2 == 0x1f400) {
    bVar1 = true;
  }
  else if (iVar2 == 0x38400) {
    bVar1 = true;
  }
  else if (iVar2 == DAT_0800ec2c) {
    bVar1 = true;
  }
  else if (iVar2 == 0x3e800) {
    bVar1 = true;
  }
  else if (iVar2 == 0x70800) {
    bVar1 = true;
  }
  else if (iVar2 == DAT_0800ec30) {
    bVar1 = true;
  }
  else if (iVar2 == 0x7d000) {
    bVar1 = true;
  }
  else if (iVar2 == 0xe1000) {
    bVar1 = true;
  }
  else if (iVar2 == DAT_0800ec34) {
    bVar1 = true;
  }
  else if (iVar2 == DAT_0800ec38) {
    bVar1 = true;
  }
  if (bVar1) {
    *param_2 = iVar2;
  }
  return;
}



// ==== FUN_0800ecb0 @ 0800ecb0 ====

char * FUN_0800ecb0(char *param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  
  cVar1 = *param_2;
  pcVar2 = param_1;
  while( true ) {
    param_2 = param_2 + 1;
    *pcVar2 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = *param_2;
    pcVar2 = pcVar2 + 1;
  }
  return param_1;
}



// ==== FUN_0800ecc8 @ 0800ecc8 ====

void FUN_0800ecc8(void)

{
  int iVar1;
  
  iVar1 = DAT_0800ecfc;
  FUN_0800a350(DAT_0800ecfc,0x44,0);
  iVar1 = FUN_080130ac(*(undefined1 *)(iVar1 + 6),iVar1 + 0x28);
  if (iVar1 == 0) {
    FUN_0800bf78(0xff,7);
    return;
  }
  return;
}



// ==== FUN_0800ecf2 @ 0800ecf2 ====

void FUN_0800ecf2(void)

{
  FUN_0800e876(DAT_0800ed04,DAT_0800ed00);
  return;
}



// ==== FUN_0800ed08 @ 0800ed08 ====

undefined4 FUN_0800ed08(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  
  pcVar4 = (char *)0x0;
  for (pcVar5 = param_1; iVar3 = (int)*pcVar5, iVar3 != 0; pcVar5 = pcVar5 + 1) {
    iVar2 = FUN_08015218(iVar3);
    if (((iVar2 == 0) && (iVar3 != 0xd)) && (iVar3 != 0x25)) {
      if (iVar3 == 0x28) {
        pcVar4 = pcVar5 + 1;
      }
      else if (iVar3 == 0x29) {
        if (pcVar4 != (char *)0x0) {
          pcVar4 = (char *)0x0;
          *pcVar5 = '\0';
        }
      }
      else {
        if (iVar3 == 0x3b) break;
        if (pcVar4 == (char *)0x0) {
          cVar1 = FUN_0801537a();
          *param_1 = cVar1;
          param_1 = param_1 + 1;
        }
      }
    }
  }
  *param_1 = '\0';
  return param_4;
}



// ==== FUN_0800ed60 @ 0800ed60 ====

undefined8 FUN_0800ed60(uint param_1,char *param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  char *pcVar3;
  byte bVar4;
  ushort uVar5;
  ushort uVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  float fVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  char cVar18;
  uint in_fpscr;
  undefined4 uVar19;
  float fVar20;
  undefined4 extraout_s1;
  undefined4 extraout_s1_00;
  undefined4 extraout_s1_01;
  undefined4 extraout_s1_02;
  float fVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  byte bVar24;
  uint uVar25;
  byte local_60;
  undefined1 local_5f;
  uint local_5c;
  float local_58;
  uint local_54;
  undefined4 local_50;
  undefined4 local_4c;
  byte local_48;
  float afStack_44 [3];
  
  FUN_0800ed08(param_2);
  pbVar1 = DAT_0800f990;
  FUN_0800a350(DAT_0800f990,0x40,0);
  FUN_0800a408(pbVar1 + 1,DAT_0800f994,0xb);
  iVar12 = 0;
  uVar25 = 0;
  uVar17 = 0;
  uVar14 = 0;
  uVar15 = 0;
  uVar16 = 0;
  cVar18 = *param_2;
  if (cVar18 == '$') {
    pbVar1[1] = 1;
    pbVar1[2] = 0;
  }
  local_5c = (uint)(cVar18 == '$');
  if ((int)(local_5c << 0x1f) < 0) {
    local_60 = 3;
  }
  else {
    local_60 = 0;
  }
LAB_0800edd8:
  iVar7 = (int)param_2[local_60];
  if (iVar7 == 0) goto LAB_0800f1ee;
  if (0x19 < iVar7 - 0x41U) {
    iVar12 = 1;
    goto LAB_0800fdc6;
  }
  local_60 = local_60 + 1;
  iVar8 = FUN_080129cc(param_2,&local_60,&local_58);
  if (iVar8 == 0) {
    iVar12 = 2;
    goto LAB_0800fdc6;
  }
  uVar9 = FUN_0800d6b8(local_58);
  uVar19 = FUN_08015298(uVar9);
  bVar4 = FUN_080152e0(uVar19,extraout_s1);
  uVar13 = (uint)bVar4;
  fVar20 = (float)VectorUnsignedToFloat(uVar13,(byte)(in_fpscr >> 0x16) & 3);
  uVar9 = FUN_0800d6b8((local_58 - fVar20) * DAT_0800ee78);
  uVar9 = FUN_08015390(uVar9);
  uVar5 = FUN_080152e0(uVar9,extraout_s1_00);
  uVar10 = (uint)uVar5;
  if (iVar7 == 0x47) {
    if (uVar13 < 4) {
LAB_0800ef04:
      if (iVar12 != 0) {
LAB_0800ef86:
        iVar12 = 0x18;
        goto LAB_0800fdc6;
      }
      iVar12 = 2;
LAB_0800ef0a:
      iVar7 = 1;
      pbVar1[1] = bVar4;
      if (uVar13 == 0x26) {
        if ((((uVar10 == 0x14) || (uVar10 == 0x1e)) || (uVar10 == 0x28)) || (uVar10 == 0x32)) {
          pbVar1[1] = (char)(uVar10 / 10) + bVar4 + 100;
          uVar10 = 0;
          goto LAB_0800efbe;
        }
        goto LAB_0800f3e6;
      }
    }
    else if (uVar13 == 4) {
LAB_0800eedc:
      iVar7 = 0;
      *pbVar1 = bVar4;
      if (((uVar13 == 0x1c) || (uVar13 == 0x1e)) || (uVar13 == 0x5c)) {
        if ((uVar10 != 0) && (uVar10 != 10)) goto LAB_0800f3e6;
        *pbVar1 = (char)uVar5 + bVar4;
        uVar10 = 0;
      }
    }
    else {
      if (uVar13 == 10) {
LAB_0800eed2:
        if (uVar10 == 0) {
          if (iVar12 != 0) goto LAB_0800ef86;
          iVar12 = 1;
        }
        goto LAB_0800eedc;
      }
      if (uVar13 - 0x11 < 3) {
        iVar7 = 2;
        pbVar1[5] = bVar4 - 0x11;
      }
      else if (uVar13 - 0x14 < 2) {
        iVar7 = 6;
        pbVar1[3] = 0x15 - bVar4;
      }
      else {
        if ((uVar13 == 0x1c) || (uVar13 == 0x1e)) goto LAB_0800eed2;
        if (uVar13 == 0x26) goto LAB_0800ef04;
        if (uVar13 == 0x28) {
          iVar7 = 7;
        }
        else if ((uVar13 == 0x2b) || (uVar13 == 0x31)) {
          iVar7 = 8;
          if (iVar12 != 0) goto LAB_0800ef86;
          iVar12 = 3;
          if (uVar13 == 0x31) {
            pbVar1[6] = 0;
          }
          else {
            if (uVar10 != 10) goto LAB_0800f3e6;
            pbVar1[6] = 1;
          }
LAB_0800efa6:
          uVar10 = 0;
        }
        else {
          if (uVar13 == 0x35) goto LAB_0800eedc;
          if (uVar13 - 0x36 < 6) {
            iVar7 = 9;
            pbVar1[7] = bVar4 - 0x36;
          }
          else if (uVar13 == 0x3d) {
            iVar7 = 10;
            if (uVar10 != 0) goto LAB_0800f3e6;
          }
          else {
            if (uVar13 == 0x50) goto LAB_0800ef0a;
            if (uVar13 - 0x5a < 2) {
              if (uVar10 != 0) {
                iVar7 = 4;
                if ((uVar10 == 10) && (uVar13 != 0x5a)) goto LAB_0800efa6;
                goto LAB_0800f3e6;
              }
              iVar7 = 3;
              pbVar1[4] = bVar4 + 0xa6;
            }
            else {
              if (uVar13 == 0x5c) goto LAB_0800eed2;
              if (1 < uVar13 - 0x5d) goto LAB_0800f3e6;
              iVar7 = 5;
              pbVar1[2] = 0x5e - bVar4;
            }
          }
        }
      }
    }
LAB_0800efbe:
    if (uVar10 != 0) {
LAB_0800efc2:
      iVar12 = 0x17;
      goto LAB_0800fdc6;
    }
  }
  else {
    if (iVar7 != 0x4d) {
      if (iVar7 == 0x46) {
        iVar7 = 0;
        *(float *)(pbVar1 + 0xc) = local_58;
      }
      else if (iVar7 == 0x49) {
        iVar7 = 1;
        *(float *)(pbVar1 + 0x10) = local_58;
        uVar14 = uVar14 | 1;
      }
      else if (iVar7 == 0x4a) {
        iVar7 = 2;
        *(float *)(pbVar1 + 0x14) = local_58;
        uVar14 = uVar14 | 2;
      }
      else if (iVar7 == 0x4b) {
        iVar7 = 3;
        *(float *)(pbVar1 + 0x18) = local_58;
        uVar14 = uVar14 | 4;
      }
      else if (iVar7 == 0x4c) {
        iVar7 = 4;
        pbVar1[0x1c] = bVar4;
      }
      else if (iVar7 == 0x4e) {
        iVar7 = 5;
        uVar9 = FUN_080152e0(uVar19,extraout_s1);
        *(undefined4 *)(pbVar1 + 0x20) = uVar9;
      }
      else if (iVar7 == 0x50) {
        iVar7 = 6;
        *(float *)(pbVar1 + 0x24) = local_58;
      }
      else if (iVar7 == 0x52) {
        iVar7 = 7;
        *(float *)(pbVar1 + 0x28) = local_58;
      }
      else if (iVar7 == 0x53) {
        iVar7 = 8;
        *(float *)(pbVar1 + 0x2c) = local_58;
      }
      else if (iVar7 == 0x54) {
        iVar7 = 9;
        uVar10 = in_fpscr & 0xfffffff | (uint)(local_58 < DAT_0800f384) << 0x1f;
        in_fpscr = uVar10 | (uint)(NAN(local_58) || NAN(DAT_0800f384)) << 0x1c;
        if ((byte)(uVar10 >> 0x1f) == ((byte)(in_fpscr >> 0x1c) & 1)) {
          iVar12 = 0x26;
          goto LAB_0800fdc6;
        }
        pbVar1[0x30] = bVar4;
      }
      else if (iVar7 == 0x58) {
        iVar7 = 10;
        *(float *)(pbVar1 + 0x34) = local_58;
        uVar17 = uVar17 | 1;
      }
      else if (iVar7 == 0x59) {
        iVar7 = 0xb;
        *(float *)(pbVar1 + 0x38) = local_58;
        uVar17 = uVar17 | 2;
      }
      else {
        if (iVar7 != 0x5a) goto LAB_0800f3e6;
        iVar7 = 0xc;
        *(float *)(pbVar1 + 0x3c) = local_58;
        uVar17 = uVar17 | 4;
      }
      if (((int)uVar16 >> iVar7) << 0x1f < 0) {
        iVar12 = 0x19;
        goto LAB_0800fdc6;
      }
      if (((0x361 >> iVar7) << 0x1f < 0) && (in_fpscr = in_fpscr & 0xfffffff, local_58 < 0.0)) {
        iVar12 = 4;
        goto LAB_0800fdc6;
      }
      uVar16 = 1 << iVar7 & 0xffffU | uVar16;
      goto LAB_0800edd8;
    }
    if (uVar10 != 0) goto LAB_0800efc2;
    if (uVar13 < 3) {
LAB_0800efe4:
      iVar7 = 0xb;
      if (uVar13 == 0) {
        pbVar1[8] = 3;
      }
      else if (uVar13 != 1) {
        pbVar1[8] = bVar4;
      }
    }
    else {
      if (uVar13 - 3 < 3) {
        iVar7 = 0xc;
        if (uVar13 == 3) {
          pbVar1[10] = 0x10;
        }
        else if (2 < uVar13) {
          if (uVar13 == 5) {
            pbVar1[10] = 0;
          }
          else if (uVar13 < 5) {
            pbVar1[10] = 0x20;
          }
        }
        goto LAB_0800f070;
      }
      if (2 < uVar13 - 7) {
        if (uVar13 - 7 == 0x17) goto LAB_0800efe4;
        goto LAB_0800f3e6;
      }
      iVar7 = 0xd;
      if (uVar13 == 7) {
        if (*(char *)(DAT_0800fa34 + 0x60) != '\0') {
          pbVar1[9] = pbVar1[9] | 0x80;
        }
      }
      else if (6 < uVar13) {
        if (uVar13 == 9) {
          pbVar1[9] = 0;
        }
        else if ((uVar13 < 9) && (*(char *)(DAT_0800fa34 + 0x60) != '\0')) {
          pbVar1[9] = pbVar1[9] | 0x40;
        }
      }
    }
  }
LAB_0800f070:
  if (((int)uVar15 >> iVar7) << 0x1f < 0) {
    iVar12 = 0x15;
    goto LAB_0800fdc6;
  }
  uVar15 = uVar15 | 1 << iVar7 & 0xffffU;
  goto LAB_0800edd8;
LAB_0800f1ee:
  if ((uVar17 != 0) && (iVar12 == 0)) {
    iVar12 = 2;
  }
  if (((int)(uVar16 << 0x1a) < 0) && (DAT_0800fdd4 <= *(int *)(pbVar1 + 0x20))) {
    iVar12 = 0x1b;
    goto LAB_0800fdc6;
  }
  if ((int)(local_5c << 0x1f) < 0) {
    if ((int)(uVar16 << 0x1f) < 0) {
LAB_0800f256:
      if (pbVar1[3] == 1) {
        uVar22 = FUN_0800d6b8(*(undefined4 *)(pbVar1 + 0xc));
        FUN_0800d21c((int)uVar22,(int)((ulonglong)uVar22 >> 0x20),0x66666666,DAT_0800fdd8);
        uVar9 = FUN_0800d610();
        *(undefined4 *)(pbVar1 + 0xc) = uVar9;
      }
      goto LAB_0800f286;
    }
LAB_0800f648:
    iVar12 = 0x16;
    goto LAB_0800fdc6;
  }
  if (pbVar1[2] == 1) {
    if ((((iVar12 == 2) && (pbVar1[1] != 0x50)) && (pbVar1[1] != 0)) && (-1 < (int)(uVar16 << 0x1f))
       ) goto LAB_0800f648;
  }
  else if (DAT_0800f994[1] == 0) {
    if ((int)(uVar16 << 0x1f) < 0) goto LAB_0800f256;
    *(undefined4 *)(pbVar1 + 0xc) = *(undefined4 *)(DAT_0800f994 + 0x10);
  }
LAB_0800f286:
  if (-1 < (int)(uVar16 << 0x17)) {
    *(undefined4 *)(pbVar1 + 0x2c) = *(undefined4 *)(DAT_0800f994 + 0xc);
  }
  if (*pbVar1 == 4) {
    if ((int)(uVar16 << 0x19) < 0) {
      uVar16 = uVar16 & 0xffbf;
      goto LAB_0800f2ac;
    }
LAB_0800f394:
    iVar12 = 0x1c;
    goto LAB_0800fdc6;
  }
LAB_0800f2ac:
  if (pbVar1[5] == 0) {
    local_54 = 0;
    iVar7 = 1;
    local_5f = 2;
  }
  else if (pbVar1[5] == 1) {
    local_54 = 2;
    iVar7 = 0;
    local_5f = 1;
  }
  else {
    local_54 = 1;
    iVar7 = 2;
    local_5f = 0;
  }
  if (pbVar1[3] == 1) {
    for (uVar10 = 0; (int)uVar10 < 3; uVar10 = uVar10 + 1) {
      if (((int)uVar17 >> (uVar10 & 0xff)) << 0x1f < 0) {
        uVar22 = FUN_0800d6b8(*(undefined4 *)(pbVar1 + uVar10 * 4 + 0x34));
        FUN_0800d21c((int)uVar22,(int)((ulonglong)uVar22 >> 0x20),0x66666666,DAT_0800fdd8);
        uVar9 = FUN_0800d610();
        *(undefined4 *)(pbVar1 + uVar10 * 4 + 0x34) = uVar9;
      }
    }
  }
  pbVar2 = DAT_0800f994;
  if (((iVar12 == 3) && (pbVar1[6] == 1)) && (uVar17 != 4)) {
    iVar12 = 0x25;
    goto LAB_0800fdc6;
  }
  FUN_0800a428(afStack_44,DAT_0800f994 + 0x28,0xc);
  if ((int)(uVar15 << 0x16) < 0) {
    bVar4 = pbVar1[7];
    if (6 < bVar4) {
LAB_0800f3ba:
      iVar12 = 0x1d;
      goto LAB_0800fdc6;
    }
    if ((pbVar2[6] == bVar4) || (iVar8 = FUN_080130ac(bVar4,afStack_44), iVar8 != 0))
    goto LAB_0800f372;
LAB_0800fd9c:
    iVar12 = 7;
  }
  else {
LAB_0800f372:
    if (*pbVar1 == 10) {
      if (uVar17 != 0) {
        if ((uVar16 & 0x50) == 0) goto LAB_0800f394;
        uVar9 = FUN_0800d6b8(*(undefined4 *)(pbVar1 + 0x24));
        uVar9 = FUN_08015298(uVar9);
        bVar4 = FUN_080152e0(uVar9,extraout_s1_01);
        if (6 < bVar4) goto LAB_0800f3ba;
        if ((pbVar1[0x1c] != 0x14) && ((pbVar1[0x1c] != 2 || ((int)(uVar16 << 0x18) < 0)))) {
LAB_0800f3e6:
          iVar12 = 0x14;
          goto LAB_0800fdc6;
        }
        uVar16 = uVar16 & 0xffffffaf;
        if (bVar4 == 0) {
          bVar4 = pbVar1[7];
        }
        else {
          bVar4 = bVar4 - 1;
        }
        uVar25 = (uint)bVar4;
        iVar8 = FUN_080130ac(bVar4,pbVar1 + 0x10);
        if (iVar8 != 0) {
          for (uVar10 = 0; (int)uVar10 < 3; uVar10 = uVar10 + 1) {
            if (((int)uVar17 >> (uVar10 & 0xff)) << 0x1f < 0) {
              if (pbVar1[0x1c] == 0x14) {
                *(float *)(pbVar1 + uVar10 * 4 + 0x10) =
                     (*(float *)(pbVar2 + uVar10 * 4 + 0x1c) -
                     *(float *)(pbVar2 + uVar10 * 4 + 0x34)) -
                     *(float *)(pbVar1 + uVar10 * 4 + 0x34);
                if (uVar10 == 2) {
                  *(float *)(pbVar1 + 0x18) = *(float *)(pbVar1 + 0x18) - *(float *)(pbVar2 + 0x40);
                }
              }
              else {
                *(float *)(pbVar1 + uVar10 * 4 + 0x10) = *(float *)(pbVar1 + uVar10 * 4 + 0x34);
              }
            }
          }
          goto LAB_0800f5fe;
        }
        goto LAB_0800fd9c;
      }
LAB_0800f954:
      iVar12 = 0x1a;
      goto LAB_0800fdc6;
    }
    if (*pbVar1 == 0x5c) {
      if (uVar17 == 0) goto LAB_0800f954;
      for (uVar10 = 0; (int)uVar10 < 3; uVar10 = uVar10 + 1) {
        if (((int)uVar17 >> (uVar10 & 0xff)) << 0x1f < 0) {
          *(float *)(pbVar1 + uVar10 * 4 + 0x34) =
               (*(float *)(pbVar2 + uVar10 * 4 + 0x1c) - afStack_44[uVar10]) -
               *(float *)(pbVar1 + uVar10 * 4 + 0x34);
          if (uVar10 == 2) {
            *(float *)(pbVar1 + 0x3c) = *(float *)(pbVar1 + 0x3c) - *(float *)(pbVar2 + 0x40);
          }
        }
        else {
          *(undefined4 *)(pbVar1 + uVar10 * 4 + 0x34) = *(undefined4 *)(pbVar2 + uVar10 * 4 + 0x34);
        }
      }
    }
    else {
      if ((iVar12 != 3) && (uVar17 != 0)) {
        for (uVar10 = 0; (int)uVar10 < 3; uVar10 = uVar10 + 1) {
          if (((int)uVar17 >> (uVar10 & 0xff)) << 0x1f < 0) {
            if (*pbVar1 != 0x35) {
              if (pbVar1[4] == 0) {
                *(float *)(pbVar1 + uVar10 * 4 + 0x34) =
                     afStack_44[uVar10] + *(float *)(pbVar2 + uVar10 * 4 + 0x34) +
                     *(float *)(pbVar1 + uVar10 * 4 + 0x34);
                if (uVar10 == 2) {
                  *(float *)(pbVar1 + 0x3c) = *(float *)(pbVar1 + 0x3c) + *(float *)(pbVar2 + 0x40);
                }
              }
              else {
                *(float *)(pbVar1 + uVar10 * 4 + 0x34) =
                     *(float *)(pbVar1 + uVar10 * 4 + 0x34) + *(float *)(pbVar2 + uVar10 * 4 + 0x1c)
                ;
              }
            }
          }
          else {
            *(undefined4 *)(pbVar1 + uVar10 * 4 + 0x34) =
                 *(undefined4 *)(pbVar2 + uVar10 * 4 + 0x1c);
          }
        }
      }
      bVar4 = *pbVar1;
      if ((bVar4 == 0x1c) || (bVar4 == 0x1e)) {
        if (bVar4 == 0x1c) {
          iVar8 = FUN_080130ac(6,pbVar1 + 0x10);
        }
        else {
          iVar8 = FUN_080130ac(7,pbVar1 + 0x10);
        }
        if (iVar8 == 0) goto LAB_0800fd9c;
        if (uVar17 == 0) {
          iVar12 = 0;
        }
        else {
          for (uVar10 = 0; (int)uVar10 < 3; uVar10 = uVar10 + 1) {
            if (-1 < ((int)uVar17 >> (uVar10 & 0xff)) << 0x1f) {
              *(undefined4 *)(pbVar1 + uVar10 * 4 + 0x10) =
                   *(undefined4 *)(pbVar2 + uVar10 * 4 + 0x1c);
            }
          }
        }
      }
      else if (((bVar4 == 0x35) && (pbVar1[1] != 0)) && (pbVar1[1] != 1)) {
        iVar12 = 0x1e;
        goto LAB_0800fdc6;
      }
    }
LAB_0800f5fe:
    uVar5 = (ushort)uVar16;
    bVar4 = pbVar1[1];
    if (bVar4 == 0x50) {
      if (uVar17 != 0) {
        iVar12 = 0x1f;
        goto LAB_0800fdc6;
      }
    }
    else if (iVar12 == 2) {
      if (bVar4 == 0) {
        if (uVar17 == 0) {
          iVar12 = 0;
        }
      }
      else {
        if (*(float *)(pbVar1 + 0xc) == 0.0) goto LAB_0800f648;
        if (bVar4 == 1) {
          if (uVar17 == 0) {
            iVar12 = 0;
          }
          goto LAB_0800f62c;
        }
        if (bVar4 != 2) {
          if (bVar4 == 3) goto LAB_0800f686;
          if (bVar4 != 0x8c) {
            if (bVar4 != 0x8d) {
              if (bVar4 == 0x8e) goto LAB_0800f93e;
              if (bVar4 != 0x8f) goto LAB_0800f62c;
            }
            local_5c = local_5c & 0xff | 0x10;
          }
LAB_0800f93e:
          if ((bVar4 == 0x8e) || (bVar4 == 0x8f)) {
            local_5c = local_5c & 0xff | 8;
          }
          if (uVar17 == 0) goto LAB_0800f954;
          iVar8 = FUN_0800a4b8(pbVar2 + 0x1c,pbVar1 + 0x34,0xc);
          if (iVar8 != 0) goto LAB_0800f62c;
          goto LAB_0800f96c;
        }
        local_5c = local_5c & 0xff | 4;
LAB_0800f686:
        if (uVar17 == 0) goto LAB_0800f954;
        uVar10 = 1 << iVar7 | 1 << (local_54 & 0xff);
        if ((uVar17 & uVar10) == 0) {
          iVar12 = 0x20;
          goto LAB_0800fdc6;
        }
        fVar20 = *(float *)(pbVar1 + local_54 * 4 + 0x34) - *(float *)(pbVar2 + local_54 * 4 + 0x1c)
        ;
        fVar21 = *(float *)(pbVar1 + iVar7 * 4 + 0x34) - *(float *)(pbVar2 + iVar7 * 4 + 0x1c);
        if ((int)(uVar16 << 0x18) < 0) {
          uVar5 = uVar5 & 0xff7f;
          iVar8 = FUN_0800a4b8(pbVar2 + 0x1c,pbVar1 + 0x34,0xc);
          if (iVar8 == 0) goto LAB_0800f96c;
          if (pbVar1[3] == 1) {
            uVar22 = FUN_0800d6b8(*(undefined4 *)(pbVar1 + 0x28));
            FUN_0800d21c((int)uVar22,(int)((ulonglong)uVar22 >> 0x20),0x66666666,DAT_0800fdd8);
            uVar9 = FUN_0800d610();
            *(undefined4 *)(pbVar1 + 0x28) = uVar9;
          }
          uVar9 = *(undefined4 *)(pbVar1 + 0x28);
          uVar22 = FUN_0800d6b8(uVar9);
          uVar22 = FUN_0800d21c((int)uVar22,(int)((ulonglong)uVar22 >> 0x20),0,DAT_0800fddc);
          uVar23 = FUN_0800d6b8(uVar9);
          uVar22 = FUN_0800d21c((int)uVar23,(int)((ulonglong)uVar23 >> 0x20),(int)uVar22,
                                (int)((ulonglong)uVar22 >> 0x20));
          uVar23 = FUN_0800d6b8(fVar20 * fVar20);
          uVar22 = FUN_08015570((int)uVar22,(int)((ulonglong)uVar22 >> 0x20),(int)uVar23,
                                (int)((ulonglong)uVar23 >> 0x20));
          uVar23 = FUN_0800d6b8(fVar21 * fVar21);
          FUN_08015570((int)uVar22,(int)((ulonglong)uVar22 >> 0x20),(int)uVar23,
                       (int)((ulonglong)uVar23 >> 0x20));
          fVar11 = (float)FUN_0800d610();
          if ((int)((uint)(fVar11 < 0.0) << 0x1f) < 0) {
            iVar12 = 0x22;
            goto LAB_0800fdc6;
          }
          uVar9 = FUN_0800d6b8();
          uVar9 = FUN_08015654(uVar9);
          uVar19 = FUN_08012b3a(fVar20);
          uVar22 = FUN_0800d6b8(uVar19);
          uVar22 = FUN_0800d3c8(uVar9,extraout_s1_02,(int)uVar22,(int)((ulonglong)uVar22 >> 0x20));
          fVar11 = (float)FUN_0800d610((int)uVar22,(uint)((ulonglong)uVar22 >> 0x20) ^ 0x80000000);
          if (pbVar1[1] == 3) {
            fVar11 = -fVar11;
          }
          if ((int)((uint)(*(float *)(pbVar1 + 0x28) < 0.0) << 0x1f) < 0) {
            fVar11 = -fVar11;
            *(float *)(pbVar1 + 0x28) = -*(float *)(pbVar1 + 0x28);
          }
          *(float *)(pbVar1 + local_54 * 4 + 0x10) = (fVar20 - fVar21 * fVar11) * 0.5;
          *(float *)(pbVar1 + iVar7 * 4 + 0x10) = (fVar21 + fVar20 * fVar11) * 0.5;
        }
        else {
          if ((uVar14 & uVar10) == 0) {
            iVar12 = 0x23;
            goto LAB_0800fdc6;
          }
          uVar5 = uVar5 & 0xfff1;
          if (pbVar1[3] == 1) {
            for (uVar16 = 0; (int)uVar16 < 3; uVar16 = uVar16 + 1) {
              if (((int)uVar14 >> (uVar16 & 0xff)) << 0x1f < 0) {
                uVar22 = FUN_0800d6b8(*(undefined4 *)(pbVar1 + uVar16 * 4 + 0x10));
                FUN_0800d21c((int)uVar22,(int)((ulonglong)uVar22 >> 0x20),0x66666666,DAT_0800fdd8);
                uVar9 = FUN_0800d610();
                *(undefined4 *)(pbVar1 + uVar16 * 4 + 0x10) = uVar9;
              }
            }
          }
          fVar20 = (float)FUN_08012b3a(fVar20 - *(float *)(pbVar1 + local_54 * 4 + 0x10));
          uVar9 = FUN_08012b3a(*(undefined4 *)(pbVar1 + local_54 * 4 + 0x10));
          *(undefined4 *)(pbVar1 + 0x28) = uVar9;
          fVar21 = *(float *)(pbVar1 + 0x28);
          uVar22 = FUN_0800d6b8(fVar20 - fVar21);
          fVar20 = (float)FUN_0800d610((int)uVar22,(uint)((ulonglong)uVar22 >> 0x20) & 0x7fffffff);
          if (DAT_0800fa2c <= fVar20) {
            cVar18 = DAT_0800fa30 <= fVar20;
            if (fVar20 < DAT_0800fa30) {
              uVar22 = FUN_0800d6b8();
              uVar23 = FUN_0800d6b8(fVar21);
              uVar23 = FUN_0800d21c((int)uVar23,(int)((ulonglong)uVar23 >> 0x20),DAT_0800fde0,
                                    DAT_0800fde4);
              FUN_08015758((int)uVar23,(int)((ulonglong)uVar23 >> 0x20),(int)uVar22,
                           (int)((ulonglong)uVar22 >> 0x20));
              if (cVar18 != '\0') goto LAB_0800f62c;
            }
LAB_0800f96c:
            iVar12 = 0x21;
            goto LAB_0800fdc6;
          }
        }
      }
    }
LAB_0800f62c:
    if ((int)(local_5c << 0x1f) < 0) {
      uVar6 = 0xffde;
    }
    else {
      uVar6 = (ushort)DAT_0800fde8;
    }
    uVar5 = uVar5 & uVar6;
    if (iVar12 != 0) {
      uVar5 = uVar5 & 0xe3ff;
    }
    if (uVar5 != 0) {
      iVar12 = 0x24;
      goto LAB_0800fdc6;
    }
    FUN_0800a350(&local_50,0xc,0);
    if ((int)(local_5c << 0x1f) < 0) {
      if (((uVar15 & 0xffffffb6) == 0) && ((*pbVar1 == 0x35 || (*pbVar1 == 0)))) {
        local_4c = *(undefined4 *)(pbVar2 + 0xc);
        local_48 = pbVar2[9] | pbVar2[8];
        iVar12 = FUN_0801578c(&local_50,pbVar1);
        if (iVar12 == 0) {
          FUN_0800a428(pbVar2 + 0x1c,pbVar1 + 0x34,0xc);
        }
      }
      else {
        iVar12 = 0x10;
      }
      goto LAB_0800fdc6;
    }
    if ((int)((uint)*(byte *)(DAT_0800fa34 + 0x30) << 0x1e) < 0) {
      bVar4 = pbVar1[1];
      if (((bVar4 != 1) && (bVar4 != 2)) && (bVar4 != 3)) {
        local_5c = local_5c & 0xff | 0x40;
      }
      if ((uVar17 == 0) || (iVar12 != 2)) {
        if (pbVar2[9] == 0x10) {
          bVar4 = *pbVar2;
          if (((bVar4 == 1) || (bVar4 == 2)) || (bVar4 == 3)) {
            if ((int)(local_5c << 0x19) < 0) {
              local_5c = local_5c & 0xff | 0x20;
            }
          }
          else if (-1 < (int)(local_5c << 0x19)) {
            local_5c = local_5c & 0xff | 0x20;
          }
        }
      }
      else {
        local_5c = local_5c & 0xff | 0x80;
      }
    }
    *(undefined4 *)(pbVar2 + 0x18) = *(undefined4 *)(pbVar1 + 0x20);
    bVar4 = pbVar1[2];
    pbVar2[1] = bVar4;
    if (bVar4 != 0) {
      local_48 = local_48 | 8;
    }
    local_50 = *(undefined4 *)(pbVar1 + 0xc);
    *(undefined4 *)(pbVar2 + 0x10) = local_50;
    if ((*(float *)(pbVar2 + 0xc) != *(float *)(pbVar1 + 0x2c)) || ((int)(local_5c << 0x1a) < 0)) {
      if ((pbVar2[9] != 0) && (-1 < (int)(local_5c << 0x18))) {
        if ((int)(local_5c << 0x19) < 0) {
          FUN_08012900(DAT_0800fdd0);
        }
        else {
          FUN_08012900();
        }
      }
      *(undefined4 *)(pbVar2 + 0xc) = *(undefined4 *)(pbVar1 + 0x2c);
    }
    if (-1 < (int)(local_5c << 0x19)) {
      local_4c = *(undefined4 *)(pbVar2 + 0xc);
    }
    pbVar2[0x14] = pbVar1[0x30];
    if (pbVar2[9] != pbVar1[10]) {
      FUN_08012900(local_4c);
      pbVar2[9] = pbVar1[10];
    }
    local_48 = local_48 | pbVar2[9];
    if (pbVar2[8] != pbVar1[9]) {
      FUN_080129ac();
      pbVar2[8] = pbVar1[9];
    }
    local_48 = local_48 | pbVar2[8];
    if (*pbVar1 == 4) {
      FUN_080106de(*(undefined4 *)(pbVar1 + 0x24));
    }
    pbVar2[4] = pbVar1[5];
    pbVar2[2] = pbVar1[3];
    if (iVar12 == 3) {
      bVar4 = pbVar1[6];
      pbVar2[5] = bVar4;
      if (bVar4 == 0) {
        pbVar1[0x3c] = 0;
        pbVar1[0x3d] = 0;
        pbVar1[0x3e] = 0;
        pbVar1[0x3f] = 0;
      }
      if (*(float *)(pbVar2 + 0x40) != *(float *)(pbVar1 + 0x3c)) {
        *(float *)(pbVar2 + 0x40) = *(float *)(pbVar1 + 0x3c);
        FUN_0800e84c();
      }
    }
    if (pbVar2[6] != pbVar1[7]) {
      pbVar2[6] = pbVar1[7];
      FUN_0800a428(pbVar2 + 0x28,afStack_44,0xc);
      FUN_0800e84c();
    }
    bVar24 = (byte)uVar25;
    pbVar2[3] = pbVar1[4];
    bVar4 = *pbVar1;
    if (bVar4 == 10) {
      FUN_08012eba(uVar25 & 0xff,pbVar1 + 0x10);
      if (pbVar2[6] == bVar24) {
        FUN_0800a428(pbVar2 + 0x28,pbVar1 + 0x10,0xc);
        FUN_0800e84c();
      }
    }
    else if ((bVar4 == 0x1c) || (bVar4 == 0x1e)) {
      local_48 = local_48 | 1;
      if (iVar12 != 0) {
        FUN_08010328(pbVar1 + 0x34,&local_50);
      }
      FUN_08010328(pbVar1 + 0x10,&local_50);
      FUN_0800a428(pbVar2 + 0x1c,pbVar1 + 0x10,0xc);
    }
    else if (bVar4 == 0x26) {
      FUN_08012eba(6,pbVar2 + 0x1c);
    }
    else if (bVar4 == 0x28) {
      FUN_08012eba(7,pbVar2 + 0x1c);
    }
    else if (bVar4 == 0x5c) {
      FUN_0800a428(pbVar2 + 0x34,pbVar1 + 0x34,0xc);
      FUN_0800e84c();
    }
    else if (bVar4 == 0x66) {
      FUN_0800a350(pbVar2 + 0x34,0xc,0);
      FUN_0800e84c();
    }
    bVar4 = pbVar1[1];
    *pbVar2 = bVar4;
    if ((bVar4 != 0x50) && (iVar12 == 2)) {
      iVar12 = 0;
      if (bVar4 == 1) {
        FUN_08010328(pbVar1 + 0x34,&local_50);
      }
      else if (bVar4 == 0) {
        local_48 = local_48 | 1;
        FUN_08010328(pbVar1 + 0x34,&local_50);
      }
      else if ((bVar4 == 2) || (bVar4 == 3)) {
        FUN_08010394(*(undefined4 *)(pbVar1 + 0x28),pbVar1 + 0x34,&local_50,pbVar2 + 0x1c,
                     pbVar1 + 0x10,local_54 & 0xff,iVar7,local_5f,(int)local_5c >> 2 & 1);
      }
      else {
        local_48 = local_48 | 4;
        iVar12 = FUN_08010740(pbVar1 + 0x34,&local_50,local_5c & 0xff);
      }
      if (iVar12 == 0) {
        FUN_0800a428(pbVar2 + 0x1c,pbVar1 + 0x34,0xc);
      }
      else if (iVar12 == 1) {
        FUN_0800ecf2();
      }
    }
    bVar4 = pbVar1[8];
    pbVar2[7] = bVar4;
    if (bVar4 != 0) {
      FUN_0800b6da();
      pcVar3 = DAT_0800fdec;
      if (pbVar2[7] == 3) {
        if (*DAT_0800fdec != '\x02') {
          FUN_0800e8d8(8);
          FUN_0800b714();
        }
      }
      else {
        *pbVar2 = 1;
        pbVar2[4] = 0;
        pbVar2[3] = 0;
        pbVar2[1] = 0;
        pbVar2[6] = 0;
        pbVar2[8] = 0;
        pbVar2[9] = 0;
        *DAT_0800fdf0 = 100;
        pcVar3[7] = 'd';
        *DAT_0800fdf4 = 100;
        pcVar3[8] = 'd';
        *DAT_0800fdf8 = 100;
        pcVar3[9] = 'd';
        if (*pcVar3 != '\x02') {
          iVar12 = FUN_080130ac(0,pbVar2 + 0x28);
          if (iVar12 == 0) goto LAB_0800fd9c;
          FUN_0800e84c();
          FUN_080128c8(DAT_0800fdd0,0);
          FUN_08012988(0);
        }
        FUN_0800c144(param_1 & 0xff,8);
      }
      pbVar2[7] = 0;
    }
    iVar12 = 0;
  }
LAB_0800fdc6:
  return CONCAT44(param_1,iVar12);
}



// ==== FUN_0800fdfc @ 0800fdfc ====

void FUN_0800fdfc(void)

{
  *DAT_0800fee8 = *(byte *)(DAT_0800fee4 + 0x30) >> 7 ^ 1;
  return;
}



// ==== FUN_0800fe0e @ 0800fe0e ====

undefined8 FUN_0800fe0e(void)

{
  int iVar1;
  undefined4 unaff_r7;
  undefined8 uVar2;
  
  if (*DAT_0800fee8 != '\0') {
    iVar1 = FUN_08015ad6();
    return CONCAT44(unaff_r7,-(uint)(iVar1 == 0) >> 0x1f);
  }
  uVar2 = FUN_08015ad6(unaff_r7);
  return uVar2;
}



// ==== FUN_0800fe2c @ 0800fe2c ====

undefined4 FUN_0800fe2c(void)

{
  int iVar1;
  undefined4 unaff_r7;
  
  iVar1 = FUN_0800fe0e();
  if (iVar1 != 0) {
    *DAT_0800feec = 0;
    FUN_0800a428(DAT_0800fef4,DAT_0800fef0,0xc);
    *DAT_0800fef8 = *DAT_0800fef8 | 0x40;
  }
  return unaff_r7;
}



// ==== FUN_0800fe52 @ 0800fe52 ====

undefined1 FUN_0800fe52(void)

{
  return *(undefined1 *)(DAT_0800fefc + 2);
}



// ==== FUN_0800fe58 @ 0800fe58 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0800fe58(void)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar3;
  
  puVar1 = DAT_0800fefc;
  switch(*DAT_0800fefc) {
  case 1:
    iVar3 = FUN_08015ad6();
    if (iVar3 == 0) {
      uVar2 = FUN_0801607e();
      *(undefined4 *)(puVar1 + 0xc) = uVar2;
      *puVar1 = 2;
      return;
    }
    break;
  case 2:
    iVar3 = FUN_08015ad6();
    if (iVar3 == 0) {
      iVar3 = FUN_0801607e();
      *(int *)(puVar1 + 0x10) = iVar3;
      if ((uint)(iVar3 - *(int *)(puVar1 + 0xc)) < 100) {
        return;
      }
      FUN_0800b172(0xff,s__MSG_Probe_triggered__0800ff03 + 1);
      *_DAT_0800ff00 = 1;
      FUN_08011b12();
      FUN_08010860();
      puVar1[2] = 1;
      uVar2 = FUN_0801607e();
      *(undefined4 *)(puVar1 + 4) = uVar2;
      *puVar1 = 3;
      return;
    }
    goto LAB_0800fed8;
  case 3:
    iVar3 = FUN_08015ad6();
    if (iVar3 == 1) {
      *puVar1 = 4;
      return;
    }
    break;
  case 4:
    iVar3 = FUN_08015ad6();
    if (iVar3 != 1) {
      return;
    }
LAB_0800fed8:
    *puVar1 = 1;
    *(undefined4 *)(puVar1 + 0xc) = 0;
    *(undefined4 *)(puVar1 + 0x10) = 0;
  }
  return;
}



// ==== FUN_0800ff1c @ 0800ff1c ====

undefined8 FUN_0800ff1c(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_10;
  int local_c;
  
  FUN_080157ec();
  if ((int)((uint)*(byte *)(DAT_080102f0 + 0x30) << 0x1c) < 0) {
    FUN_08015842();
  }
  else {
    thunk_FUN_08015858();
  }
  iVar1 = DAT_080102f4;
  local_10 = param_3;
  local_c = param_4;
  if (*(int *)(DAT_080102f4 + 4) == 0) {
    uVar2 = FUN_08014cca(10,4,0);
    *(undefined4 *)(iVar1 + 4) = uVar2;
    local_c = iVar1 + 8;
    local_10 = 5;
    FUN_08015c18(&LAB_0800ffc8_1,s_limitCheckTask_08010317 + 1,0x102,0);
  }
  return CONCAT44(local_c,local_10);
}



// ==== thunk_FUN_08015858 @ 0800ff6c ====

void thunk_FUN_08015858(void)

{
  FUN_080171bc(0x17);
  return;
}



// ==== FUN_0800ff70 @ 0800ff70 ====

uint FUN_0800ff70(void)

{
  byte bVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  
  uVar2 = DAT_08015c08;
  bVar1 = *(byte *)(DAT_080102f0 + 0x30);
  uVar3 = FUN_0800ddfa(DAT_08015c08,0x200);
  iVar4 = FUN_0800ddfa(uVar2,0x100);
  uVar3 = uVar3 | iVar4 << 1;
  if ((bVar1 & 0x40) != 0) {
    uVar3 = ~uVar3;
  }
  return uVar3 & 3;
}



// ==== FUN_0800ff80 @ 0800ff80 ====

undefined4 FUN_0800ff80(void)

{
  int *piVar1;
  undefined4 unaff_r7;
  
  piVar1 = DAT_080102f8;
  if (*DAT_080102f8 << 0x16 < 0) {
    *DAT_080102f8 = 0x200;
  }
  if (*piVar1 << 0x17 < 0) {
    *piVar1 = 0x100;
  }
  if (((*DAT_080102fc != '\x01') && (*DAT_080102fc != '\x04')) && (*DAT_08010300 == '\0')) {
    FUN_08014e32(*(undefined4 *)(DAT_080102f4 + 4),&stack0xfffffff8,0);
  }
  return unaff_r7;
}



// ==== FUN_0801000a @ 0801000a ====

undefined1 FUN_0801000a(void)

{
  return *DAT_080102f4;
}



// ==== FUN_08010010 @ 08010010 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_08010010(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  char cVar9;
  bool bVar10;
  char cVar11;
  bool bVar12;
  float fVar13;
  undefined4 extraout_s1;
  undefined4 uVar14;
  float fVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  byte local_54 [4];
  float local_50 [5];
  undefined1 local_3c;
  
  iVar2 = DAT_080102fc;
  if (*(char *)(DAT_080102fc + 1) == '\0') {
    FUN_0800a350(local_50 + 3,0xc,0);
    local_3c = 6;
    fVar13 = DAT_080102ec;
    for (uVar7 = 0; iVar3 = DAT_08010310, iVar1 = DAT_080102f0, bVar12 = 2 < uVar7, (int)uVar7 < 3;
        uVar7 = uVar7 + 1) {
      bVar4 = FUN_08013520(uVar7);
      local_54[uVar7] = bVar4;
      uVar6 = uVar7 & 0xff;
      cVar11 = uVar6 == 0 && bVar12 || uVar6 != 0 && (1 << uVar6 - 1 & 0x80000000U) != 0;
      if ((param_1 & 1 << uVar6) != 0) {
        fVar15 = *(float *)(DAT_08010308 + uVar7 * 4);
        uVar17 = FUN_0800d6b8(fVar13);
        uVar16 = FUN_0800d6b8(fVar15);
        uVar16 = FUN_0800d21c((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),0,DAT_0801030c);
        FUN_08015758((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),(int)uVar17,
                     (int)((ulonglong)uVar17 >> 0x20));
        if (cVar11 != '\0') {
          fVar13 = fVar15 * -1.5;
        }
      }
    }
    bVar12 = true;
    pbVar8 = (byte *)(DAT_080102f0 + 0x40);
    uVar14 = *(undefined4 *)(DAT_080102f0 + 0x48);
    cVar11 = '\x03';
    do {
      FUN_0800e876(local_50,iVar3);
      bVar4 = 0;
      cVar9 = '\0';
      for (uVar7 = 0; (int)uVar7 < 3; uVar7 = uVar7 + 1) {
        uVar6 = 1 << (uVar7 & 0xff);
        if ((param_1 & 0xff & uVar6) != 0) {
          cVar9 = cVar9 + '\x01';
          *(undefined4 *)(iVar3 + uVar7 * 4) = 0;
          if ((*pbVar8 & uVar6) == 0) {
            if (bVar12) {
              local_50[uVar7] = fVar13;
            }
            else {
              local_50[uVar7] = -fVar13;
            }
          }
          else if (bVar12) {
            local_50[uVar7] = -fVar13;
          }
          else {
            local_50[uVar7] = fVar13;
          }
          bVar4 = bVar4 | local_54[uVar7];
        }
      }
      uVar17 = FUN_0800d6b8(uVar14);
      uVar14 = FUN_0800d200(cVar9);
      uVar14 = FUN_08015654(uVar14);
      FUN_0800d21c(uVar14,extraout_s1,(int)uVar17,(int)((ulonglong)uVar17 >> 0x20));
      local_50[3] = (float)FUN_0800d610();
      *(byte *)(iVar2 + 6) = bVar4;
      FUN_08011788(local_50,local_50 + 3);
      *(undefined1 *)(iVar2 + 4) = 4;
      FUN_08011ea4();
      FUN_08011aa0();
      do {
        if (bVar12) {
          iVar5 = FUN_0800ff70();
          for (uVar7 = 0; (int)uVar7 < 3; uVar7 = uVar7 + 1) {
            if (((bVar4 & local_54[uVar7]) != 0) && ((iVar5 >> (uVar7 & 0xff)) << 0x1f < 0)) {
              bVar4 = bVar4 & ~local_54[uVar7];
            }
          }
          *(byte *)(iVar2 + 6) = bVar4;
        }
        FUN_08011ea4();
        if ((*_DAT_08010314 & 0x34) != 0) {
          uVar7 = (uint)*_DAT_08010314;
          if ((int)(uVar7 << 0x1b) < 0) {
            FUN_0800e8ee(6);
          }
          if ((int)(uVar7 << 0x1a) < 0) {
            FUN_0800e8ee(7);
          }
          if ((!bVar12) && (uVar6 = FUN_0800ff70(), (uVar6 & param_1 & 0xff) != 0)) {
            FUN_0800e8ee(8);
          }
          if ((bVar12) && ((int)(uVar7 << 0x1d) < 0)) {
            FUN_0800e8ee(9);
          }
          if (*DAT_08010300 != '\0') {
            FUN_08010860();
            FUN_0800b714();
            return param_4;
          }
          FUN_0800e8e2(4);
          break;
        }
      } while ((bVar4 & 7) != 0);
      FUN_08011da2();
      thunk_FUN_08015da6(*(undefined2 *)(iVar1 + 0x4c));
      bVar12 = (bool)(bVar12 ^ 1);
      fVar15 = *(float *)(iVar1 + 0x50);
      if (bVar12) {
        uVar14 = *(undefined4 *)(iVar1 + 0x44);
        fVar13 = fVar15 * 5.0;
      }
      else {
        uVar14 = *(undefined4 *)(iVar1 + 0x48);
        fVar13 = fVar15;
      }
      bVar10 = cVar11 != '\0';
      cVar11 = cVar11 + -1;
    } while (bVar10);
    for (uVar7 = 0; (int)uVar7 < 3; uVar7 = uVar7 + 1) {
      uVar6 = 1 << (uVar7 & 0xff);
      if ((param_1 & 0xff & uVar6) != 0) {
        fVar13 = *(float *)(iVar1 + uVar7 * 4);
        if ((*pbVar8 & uVar6) == 0) {
          uVar14 = FUN_0800d6b8(-(fVar15 * fVar13));
          FUN_0801654c(uVar14);
        }
        else {
          uVar14 = FUN_0800d6b8((*(float *)(iVar1 + 0x24 + uVar7 * 4) + fVar15) * fVar13);
          FUN_0801654c(uVar14);
        }
        *(undefined4 *)(iVar3 + uVar7 * 4) = 0;
      }
    }
    *(undefined1 *)(iVar2 + 4) = 0;
  }
  return param_4;
}



// ==== FUN_080102ac @ 080102ac ====

void FUN_080102ac(void)

{
  char *pcVar1;
  int iVar2;
  
  iVar2 = FUN_0800e89e();
  pcVar1 = DAT_080102fc;
  if (iVar2 == 0) {
    return;
  }
  DAT_080102fc[3] = '\x01';
  if (*pcVar1 == '\b') {
    FUN_0800e8d8(8);
    do {
      FUN_0800b714();
      if (pcVar1[1] != '\0') {
        return;
      }
    } while (*pcVar1 != '\0');
  }
  FUN_08010860();
  FUN_0800e8ee(2);
  FUN_0800b714();
  return;
}



// ==== FUN_08010328 @ 08010328 ====

undefined4 FUN_08010328(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar2 = DAT_080108f4;
  pcVar1 = DAT_080108f0;
  if (((int)((uint)*(byte *)(DAT_080108f4 + 0x30) << 0x1a) < 0) && (*DAT_080108f0 != ' ')) {
    FUN_080102ac(param_1);
  }
  if (*pcVar1 == '\x02') {
    return param_4;
  }
  while( true ) {
    FUN_0800b714();
    if (pcVar1[1] != '\0') {
      return param_4;
    }
    iVar3 = FUN_0801164a();
    if (iVar3 == 0) break;
    FUN_0800b6fe();
  }
  iVar3 = FUN_08011788(param_1,param_2);
  if (((iVar3 == 0) && ((int)((uint)*(byte *)(iVar2 + 0x30) << 0x1e) < 0)) &&
     ((int)((uint)*(byte *)(param_2 + 8) << 0x1b) < 0)) {
    uVar4 = FUN_08012900(*(undefined4 *)(param_2 + 4),0x10,param_4);
    return uVar4;
  }
  return param_4;
}



// ==== FUN_08010394 @ 08010394 ====

/* WARNING: Heritage AFTER dead removal. Example location: s1 : 0x08010440 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

int FUN_08010394(float param_1,undefined4 param_2,int param_3,float *param_4,int param_5,int param_6
                ,uint param_7,uint param_8,int param_9,int param_10)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  float fVar4;
  int iVar5;
  uint uVar6;
  byte bVar7;
  uint in_fpscr;
  uint uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 extraout_s1;
  undefined4 extraout_s1_00;
  undefined4 extraout_s1_01;
  float fVar12;
  undefined4 extraout_s1_02;
  undefined4 extraout_s1_03;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  
  fVar9 = *(float *)(param_6 + param_7 * 4);
  fVar18 = *(float *)(param_5 + param_7 * 4) + fVar9;
  fVar11 = *(float *)(param_6 + param_8 * 4);
  fVar17 = *(float *)(param_5 + param_8 * 4) + fVar11;
  fVar9 = -fVar9;
  fVar11 = -fVar11;
  fVar19 = *(float *)(param_3 + param_7 * 4) - fVar18;
  fVar20 = *(float *)(param_3 + param_8 * 4) - fVar17;
  uVar1 = FUN_0800d6b8(fVar9 * fVar19 + fVar11 * fVar20);
  uVar2 = FUN_0800d6b8(fVar9 * fVar20 - fVar11 * fVar19);
  uVar1 = FUN_08015352(uVar2,param_2,uVar1);
  fVar19 = (float)FUN_0800d610(uVar1,extraout_s1);
  if (param_10 == 0) {
    uVar8 = in_fpscr & 0xfffffff | (uint)(fVar19 < DAT_0801073c) << 0x1f |
            (uint)(fVar19 == DAT_0801073c) << 0x1e | (uint)(DAT_0801073c <= fVar19) << 0x1d;
    if ((int)uVar8 < 0) {
      uVar21 = FUN_0800d6b8();
      FUN_080153f4((int)uVar21,(int)((ulonglong)uVar21 >> 0x20),DAT_080108f8,DAT_08010900);
      fVar19 = (float)FUN_0800d610();
    }
  }
  else {
    uVar3 = in_fpscr & 0xfffffff | (uint)(fVar19 < DAT_08010738) << 0x1f;
    uVar8 = uVar3 | (uint)(NAN(fVar19) || NAN(DAT_08010738)) << 0x1c;
    if ((byte)(uVar3 >> 0x1f) == ((byte)(uVar8 >> 0x1c) & 1)) {
      uVar21 = FUN_0800d6b8();
      FUN_080153f4((int)uVar21,(int)((ulonglong)uVar21 >> 0x20),DAT_080108f8,DAT_080108fc);
      fVar19 = (float)FUN_0800d610();
    }
  }
  uVar21 = FUN_0800d6b8(fVar19);
  uVar21 = FUN_0800d21c((int)uVar21,(int)((ulonglong)uVar21 >> 0x20),0,DAT_08010904);
  uVar22 = FUN_0800d6b8();
  uVar21 = FUN_0800d21c((int)uVar22,(int)((ulonglong)uVar22 >> 0x20),(int)uVar21,
                        (int)((ulonglong)uVar21 >> 0x20));
  uVar1 = FUN_0800d6b8((param_1 * 2.0 - *(float *)(DAT_080108f4 + 0x3c)) *
                       *(float *)(DAT_080108f4 + 0x3c));
  uVar1 = FUN_08015654(uVar1);
  uVar1 = FUN_0800d3c8((int)uVar21,(uint)((ulonglong)uVar21 >> 0x20) & 0x7fffffff,uVar1,
                       extraout_s1_00);
  uVar1 = FUN_08016590(uVar1);
  uVar3 = FUN_080152e0(uVar1,extraout_s1_01);
  uVar3 = uVar3 & 0xffff;
  if (uVar3 != 0) {
    fVar20 = (float)VectorUnsignedToFloat(uVar3,(byte)(uVar8 >> 0x16) & 3);
    if ((int)((uint)*(byte *)(param_4 + 2) << 0x1c) < 0) {
      *param_4 = fVar20 * *param_4;
      *(byte *)(param_4 + 2) = *(byte *)(param_4 + 2) & 0xf7;
    }
    fVar19 = fVar19 / fVar20;
    fVar12 = *(float *)(param_3 + param_9 * 4);
    fVar14 = *(float *)(param_5 + param_9 * 4);
    fVar16 = 2.0 - fVar19 * fVar19;
    uVar21 = FUN_0800d6b8(fVar19);
    uVar21 = FUN_0800d21c((int)uVar21,(int)((ulonglong)uVar21 >> 0x20),DAT_08010908,DAT_0801090c);
    uVar22 = FUN_0800d6b8(fVar16);
    uVar22 = FUN_080153f4((int)uVar22,(int)((ulonglong)uVar22 >> 0x20),0,DAT_08010910);
    FUN_0800d21c((int)uVar22,(int)((ulonglong)uVar22 >> 0x20),(int)uVar21,
                 (int)((ulonglong)uVar21 >> 0x20));
    fVar4 = (float)FUN_0800d610();
    fVar16 = fVar16 * 0.5;
    bVar7 = 0;
    uVar6 = 1;
    while( true ) {
      if (uVar3 <= uVar6) break;
      if (bVar7 < 0xc) {
        fVar10 = fVar9 * fVar4;
        fVar9 = fVar9 * fVar16 - fVar11 * fVar4;
        bVar7 = bVar7 + 1;
        fVar11 = fVar10 + fVar11 * fVar16;
      }
      else {
        fVar11 = (float)VectorUnsignedToFloat(uVar6,(byte)(uVar8 >> 0x16) & 3);
        uVar1 = FUN_0800d6b8(fVar11 * fVar19);
        uVar2 = FUN_08015362(uVar1);
        fVar11 = (float)FUN_0800d610(uVar2,extraout_s1_02);
        uVar1 = FUN_0801536e(uVar1);
        fVar10 = (float)FUN_0800d610(uVar1,extraout_s1_03);
        fVar13 = *(float *)(param_6 + (param_7 & 0xff) * 4);
        fVar15 = *(float *)(param_6 + (param_8 & 0xff) * 4);
        fVar9 = fVar15 * fVar10 - fVar13 * fVar11;
        fVar11 = -(fVar13 * fVar10) - fVar15 * fVar11;
        bVar7 = 0;
      }
      *(float *)(param_5 + (param_7 & 0xff) * 4) = fVar18 + fVar9;
      *(float *)(param_5 + (param_8 & 0xff) * 4) = fVar17 + fVar11;
      *(float *)(param_5 + param_9 * 4) =
           *(float *)(param_5 + param_9 * 4) + (fVar12 - fVar14) / fVar20;
      FUN_08010328(param_5,param_4);
      if (*(char *)(DAT_080108f0 + 1) != '\0') {
        return param_3;
      }
      uVar6 = uVar6 + 1 & 0xffff;
    }
  }
  iVar5 = FUN_08010328(param_3,param_4,param_3);
  return iVar5;
}



// ==== FUN_080106de @ 080106de ====

undefined4 FUN_080106de(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 unaff_r7;
  
  if (*DAT_080108f0 != '\x02') {
    FUN_0800b6da();
    uVar1 = FUN_08012adc(param_1,0,unaff_r7);
    return uVar1;
  }
  return unaff_r7;
}



// ==== FUN_0801070c @ 0801070c ====

undefined4 FUN_0801070c(void)

{
  undefined4 uVar1;
  undefined4 unaff_r7;
  
  thunk_FUN_08015858();
  FUN_08010010(3);
  FUN_0800b714();
  if (*(char *)(DAT_080108f0 + 1) == '\0') {
    FUN_0800ecf2();
    FUN_08011a18();
    uVar1 = FUN_0800ff1c(unaff_r7);
    return uVar1;
  }
  return unaff_r7;
}



// ==== FUN_08010740 @ 08010740 ====

uint FUN_08010740(undefined4 param_1,undefined4 param_2,uint param_3)

{
  char *pcVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  
  pcVar1 = DAT_080108f0;
  if (*DAT_080108f0 == '\x02') {
    uVar3 = 0;
  }
  else {
    FUN_0800b6da();
    if (pcVar1[1] == '\0') {
      pcVar1[5] = '\0';
      FUN_0800fdfc(param_3 >> 3 & 1);
      iVar4 = FUN_0800fe0e();
      if (iVar4 == 0) {
        FUN_08010328(param_1,param_2);
        pcVar2 = DAT_08010914;
        *DAT_08010914 = '\x01';
        FUN_0800e8d8(2);
        do {
          FUN_0800b714();
          if (pcVar1[1] != '\0') goto LAB_080107bc;
        } while (*pcVar1 != '\0');
        if (*pcVar2 == '\x01') {
          if ((param_3 >> 4 & 1) == 0) {
            FUN_0800e8ee(5);
          }
          else {
            FUN_0800a428(DAT_0801091c,DAT_08010918,0xc);
          }
        }
        else {
          pcVar1[5] = '\x01';
        }
        *pcVar2 = '\0';
        FUN_0800fdfc();
        FUN_0800b714();
        FUN_08011da2();
        FUN_080115a8();
        FUN_08011a18();
        FUN_0800c8ca(0xff);
        uVar3 = ~-(uint)(pcVar1[5] == '\0') >> 0x1f;
      }
      else {
        FUN_0800e8ee(4);
        FUN_0800b714();
        FUN_0800fdfc(0);
        uVar3 = 2;
      }
    }
    else {
LAB_080107bc:
      uVar3 = 2;
    }
  }
  return uVar3;
}



// ==== FUN_0801080e @ 0801080e ====

void FUN_0801080e(void)

{
  byte *pbVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = DAT_080108f0;
  if (*(char *)(DAT_080108f0 + 1) == '\0') {
    iVar4 = FUN_08011788();
    if (iVar4 == 0) {
      *(byte *)(iVar3 + 4) = *(byte *)(iVar3 + 4) & 0xfb;
      FUN_0800b72c();
      return;
    }
    *(byte *)(iVar3 + 4) = *(byte *)(iVar3 + 4) & 0xfe | 4;
    FUN_08011e2c();
    FUN_08011ea4();
    FUN_08011aa0();
    while (FUN_0800b72c(), pbVar2 = DAT_08012784, *(char *)(iVar3 + 1) == '\0') {
      if (-1 < (int)((uint)*(byte *)(iVar3 + 4) << 0x1d)) {
        if ((int)((uint)DAT_08012784[1] << 0x1e) < 0) {
          pbVar1 = DAT_08012784 + 0x14;
          *(byte **)(DAT_08012784 + 0x78) = DAT_08012784 + (uint)*pbVar1 * 0x14 + 0x7c;
          *pbVar2 = *pbVar1;
          *(undefined4 *)(pbVar2 + 8) = *(undefined4 *)(pbVar2 + 0x18);
          *(undefined4 *)(pbVar2 + 4) = *(undefined4 *)(pbVar2 + 0x20);
          *(float *)(pbVar2 + 0xc) = *(float *)(pbVar2 + 0x1c);
          pbVar2[1] = 3;
          *(float *)(pbVar2 + 0x10) = 1.25 / *(float *)(pbVar2 + 0x1c);
        }
        else {
          DAT_08012784[1] = 0;
        }
        pbVar2[0x74] = 0;
        pbVar2[0x75] = 0;
        pbVar2[0x76] = 0;
        pbVar2[0x77] = 0;
        return;
      }
    }
  }
  return;
}



// ==== FUN_08010860 @ 08010860 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08010860(void)

{
  char *pcVar1;
  int iVar2;
  
  if ((int)((uint)*DAT_08010920 << 0x1b) < 0) {
    return;
  }
  FUN_0800e8d8(0x10);
  FUN_08012818();
  FUN_08012982();
  iVar2 = FUN_0800a5b2(0);
  if (iVar2 == 2) {
    if (*DAT_08010924 != '\0') {
      FUN_0800b154(0,s_SdFileQuit_0801092f + 1);
    }
    FUN_0800ace8();
  }
  pcVar1 = DAT_08010924;
  if ((*(char *)(DAT_08010928 + 0x27a) != '\0') &&
     (FUN_0800bf78(*DAT_08010924,0x83), *pcVar1 != '\0')) {
    FUN_0800bf78(0,0x83);
  }
  if (((*DAT_080108f0 & 0x2c) == 0) && ((DAT_080108f0[4] & 6) == 0)) {
    return;
  }
  if (*DAT_080108f0 == 4) {
    if (*_DAT_0801092c == '\0') {
      FUN_0800e8ee(6);
    }
  }
  else {
    FUN_0800e8ee(3);
  }
  FUN_08011b12();
  return;
}



// ==== FUN_0801093c @ 0801093c ====

longlong FUN_0801093c(char *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = FUN_0800a5b2(1);
  iVar1 = DAT_08010eb0;
  if (iVar2 != 0) {
    return CONCAT44(param_4,0x3c);
  }
  if ((*DAT_08010eac != '\x01') && (*DAT_08010eac == '\0')) {
    FUN_0800a350(DAT_08010eb0,0x40,0);
    FUN_0800a428(iVar1,&DAT_08010c04,3);
    if (*param_1 != '/') {
      FUN_0800b3c0(iVar1,&DAT_08010c08);
    }
    uVar3 = FUN_0800b3c0(iVar1,param_1);
    iVar2 = FUN_08009868(iVar1 + 0x40,uVar3,10);
    if (iVar2 == 0) {
      FUN_0800a5a0(4);
      *(undefined4 *)(iVar1 + 0x27c) = 0;
      FUN_0800a350(iVar1 + 0x274,6,0);
      *(undefined1 *)(iVar1 + 0x286) = 0;
      *(undefined2 *)(iVar1 + 0x284) = 0;
      *(undefined4 *)(iVar1 + 0x27c) = 0;
      *(undefined4 *)(iVar1 + 0x280) = 0;
      *(undefined1 *)(iVar1 + 0x329c) = 1;
      *(undefined4 *)(iVar1 + 0x270) = 0;
      *(char *)(iVar1 + 0x27a) = *DAT_08010eb4 + '\x01';
      FUN_0800b172(0,s_start_upload_08010ed3 + 1);
      FUN_08015e40(*DAT_08010eb8);
      FUN_08015e40(*DAT_08010ebc);
      FUN_08015e40(*DAT_08010ec0);
      return (ulonglong)param_4 << 0x20;
    }
    FUN_08009e52(iVar1 + 0x40);
    return CONCAT44(param_4,0x3e);
  }
  return CONCAT44(param_4,8);
}



// ==== FUN_08010a12 @ 08010a12 ====

undefined8 FUN_08010a12(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  uint *puVar5;
  undefined8 uVar6;
  undefined4 uStack_18;
  undefined1 local_14;
  
  iVar2 = DAT_08010eb0;
  *(undefined4 *)(DAT_08010eb0 + 0x270) = 0;
  puVar5 = (uint *)(iVar2 + 0x3294);
  if (*(char *)(iVar2 + 0x329e) == '\0') {
    cVar1 = *(char *)(iVar2 + 0x329c);
    local_14 = (undefined1)param_1;
    if (cVar1 == '\x02') {
      *(undefined1 *)
       (iVar2 + (uint)*(byte *)(iVar2 + 0x285) * 0x1000 + *(int *)(iVar2 + 0x27c) + 0x287) =
           local_14;
      uVar4 = *(int *)(iVar2 + 0x27c) + 1;
      *(uint *)(iVar2 + 0x27c) = uVar4;
      if (*(uint *)(iVar2 + 0x3298) <= uVar4) {
        *(undefined4 *)(iVar2 + 0x27c) = 0;
        *(byte *)(iVar2 + 0x284) =
             *(byte *)(iVar2 + 0x284) | (byte)(1 << (uint)*(byte *)(iVar2 + 0x285));
        *(uint *)(iVar2 + (uint)*(byte *)(iVar2 + 0x285) * 4 + 0x3288) = *(uint *)(iVar2 + 0x3298);
        bVar3 = *(char *)(iVar2 + 0x285) + 1;
        *(byte *)(iVar2 + 0x285) = bVar3;
        if (2 < bVar3) {
          *(undefined1 *)(iVar2 + 0x285) = 0;
        }
        *DAT_08010ec4 = *DAT_08010ec4 + 1;
        uVar4 = *puVar5;
        if (uVar4 == 0) {
          *(undefined4 *)(iVar2 + 0x3298) = 0;
          *(undefined1 *)(iVar2 + 0x329c) = 3;
        }
        else if (uVar4 < 0x1000) {
          *(uint *)(iVar2 + 0x3298) = uVar4;
          *puVar5 = 0;
        }
        else {
          *puVar5 = uVar4 - 0x1000;
          *(undefined4 *)(iVar2 + 0x3298) = 0x1000;
        }
LAB_08010b6a:
        *(char *)(iVar2 + 0x329d) = *(char *)(iVar2 + 0x329d) + '\x01';
        return CONCAT44(param_1,uStack_18);
      }
    }
    else if (cVar1 == '\x01') {
      if (5 < *(uint *)(iVar2 + 0x27c)) {
        uVar6 = FUN_0800b154(0,s_head_rec_fail_08010f00,uStack_18,param_1);
        return uVar6;
      }
      *(undefined1 *)(*(uint *)(iVar2 + 0x27c) + iVar2 + 0x274) = local_14;
      uVar4 = *(int *)(iVar2 + 0x27c) + 1;
      *(uint *)(iVar2 + 0x27c) = uVar4;
      if (5 < uVar4) {
        if ((*(char *)(iVar2 + 0x274) == '\n') && (*(char *)(iVar2 + 0x275) == -0x60)) {
          uVar4 = (uint)*(byte *)(iVar2 + 0x276) * 0x1000000;
          *puVar5 = uVar4;
          uVar4 = uVar4 + (uint)*(byte *)(iVar2 + 0x277) * 0x10000;
          *puVar5 = uVar4;
          uVar4 = uVar4 + (uint)*(byte *)(iVar2 + 0x278) * 0x100;
          *puVar5 = uVar4;
          *puVar5 = uVar4 + *(byte *)(iVar2 + 0x279);
          *DAT_08010ec4 = 0;
        }
        else {
          *(undefined1 *)(iVar2 + 0x329c) = 5;
          FUN_0800b154(0,s_upload_file_begin_error_08010ee4);
        }
        goto LAB_08010b6a;
      }
    }
    else if (cVar1 == '\x04') {
      if (5 < *(uint *)(iVar2 + 0x27c)) {
        uVar6 = FUN_0800b154(0,s_tail_rec_fail_08010f3c,uStack_18,param_1);
        return uVar6;
      }
      *(undefined1 *)(*(uint *)(iVar2 + 0x27c) + iVar2 + 0x274) = local_14;
      uVar4 = *(int *)(iVar2 + 0x27c) + 1;
      *(uint *)(iVar2 + 0x27c) = uVar4;
      if (1 < uVar4) {
        if ((*(char *)(iVar2 + 0x274) == -0x60) && (*(char *)(iVar2 + 0x275) == '\n')) {
          FUN_0800b154(0,s_Upload_file_finish_08010f10);
        }
        else {
          FUN_0800b154(0,s_upload_file_tail_error_08010f24);
          *(undefined1 *)(iVar2 + 0x329c) = 5;
        }
        goto LAB_08010b6a;
      }
    }
  }
  return CONCAT44(param_1,uStack_18);
}



// ==== FUN_08010b82 @ 08010b82 ====

undefined4 FUN_08010b82(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  iVar1 = DAT_08010eb0;
  puVar3 = (undefined4 *)(DAT_08010eb0 + 0x270);
  if (*(char *)(DAT_08010eb0 + 0x27a) != '\0') {
    FUN_08009e52(DAT_08010eb0 + 0x40);
    FUN_0800a5a0(0);
    *(undefined1 *)(iVar1 + 0x286) = 0;
    *(undefined2 *)(iVar1 + 0x284) = 0;
    *(undefined4 *)(iVar1 + 0x27c) = 0;
    *(undefined4 *)(iVar1 + 0x280) = 0;
    *(undefined1 *)(iVar1 + 0x27a) = 0;
    *(undefined2 *)(iVar1 + 0x329c) = 0;
    *puVar3 = 0;
    if (param_1 != 0) {
      FUN_0800a07c(iVar1);
    }
    *(undefined1 *)(iVar1 + 0x329e) = 0;
    puVar3 = DAT_08010eb8;
    iVar1 = FUN_08015dd8(*DAT_08010eb8);
    if (iVar1 == 3) {
      FUN_08015f12(*puVar3);
    }
    puVar3 = DAT_08010ebc;
    iVar1 = FUN_08015dd8(*DAT_08010ebc);
    if (iVar1 == 3) {
      FUN_08015f12(*puVar3);
    }
    puVar3 = DAT_08010ec0;
    iVar1 = FUN_08015dd8(*DAT_08010ec0);
    if (iVar1 == 3) {
      uVar2 = FUN_08015f12(*puVar3,param_4);
      return uVar2;
    }
  }
  return param_4;
}



// ==== FUN_08010c0c @ 08010c0c ====

void FUN_08010c0c(void)

{
  int iVar1;
  undefined1 *puVar2;
  int *piVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  
  iVar1 = DAT_08010eb0;
  puVar7 = (uint *)(DAT_08010eb0 + 0x3294);
  switch(*(undefined1 *)(DAT_08010eb0 + 0x329c)) {
  case 1:
    FUN_0800ac62();
    uVar5 = *puVar7;
    if ((uint)(*(int *)(DAT_08010ec8 + 0x10) << 10) <= uVar5) {
      FUN_08010b82(1);
      FUN_0800bf78(*DAT_08010eb4,0x83);
      return;
    }
    *(uint *)(iVar1 + 0x280) = uVar5 - 1 >> 0xc;
    if (uVar5 < 0x1000) {
      *(uint *)(iVar1 + 0x3298) = uVar5;
      *puVar7 = 0;
    }
    else {
      *puVar7 = uVar5 - 0x1000;
      *(undefined4 *)(iVar1 + 0x3298) = 0x1000;
    }
    *(undefined1 *)(iVar1 + 0x286) = 0;
    *(undefined4 *)(iVar1 + 0x27c) = 0;
    *(undefined2 *)(iVar1 + 0x284) = 0;
    FUN_0800a350(iVar1 + 0x274,6,0);
    *(undefined4 *)(iVar1 + 0x270) = 0;
    piVar3 = DAT_08010ecc;
    *DAT_08010ecc = 0;
    piVar3[1] = *(int *)(iVar1 + 0x280) + 1;
    *(undefined1 *)(iVar1 + 0x329c) = 2;
    FUN_0800bf78(*DAT_08010eb4,0);
    return;
  case 2:
    if (*(int *)(DAT_08010eb0 + 0x280) != 0) {
      FUN_0800bf78(*DAT_08010eb4,0);
      *DAT_08010ecc = *DAT_08010ecc + 1;
      *(int *)(iVar1 + 0x280) = *(int *)(iVar1 + 0x280) + -1;
    }
    uVar5 = (uint)*(byte *)(iVar1 + 0x286);
    if (((uint)*(byte *)(iVar1 + 0x284) & 1 << uVar5) != 0) {
      *(byte *)(iVar1 + 0x284) = *(byte *)(iVar1 + 0x284) & ~(byte)(1 << uVar5);
      iVar6 = FUN_08009c12(iVar1 + 0x40,iVar1 + 0x287 + uVar5 * 0x1000,
                           *(undefined4 *)(iVar1 + 0x3288 + uVar5 * 4),0);
      if (iVar6 == 0) {
        bVar4 = *(char *)(iVar1 + 0x286) + 1;
        *(byte *)(iVar1 + 0x286) = bVar4;
        if (bVar4 < 3) {
          return;
        }
        *(undefined1 *)(iVar1 + 0x286) = 0;
        return;
      }
LAB_08010d46:
      puVar2 = DAT_08010eb4;
      FUN_0800bf78(*DAT_08010eb4,0x83);
      *(undefined1 *)(iVar1 + 0x329e) = 1;
      thunk_FUN_08015da6(2000);
      FUN_08010b82(1);
      FUN_0800bf78(*puVar2,0x83);
      return;
    }
switchD_08010c22_caseD_5:
    puVar2 = DAT_08010eb4;
    FUN_0800bf78(*DAT_08010eb4,0x83);
    *(undefined1 *)(iVar1 + 0x329e) = 1;
    thunk_FUN_08015da6(2000);
    FUN_08010b82(1);
    FUN_0800bf78(*puVar2,0x83);
    FUN_08010860();
    return;
  case 3:
    uVar5 = (uint)*(byte *)(DAT_08010eb0 + 0x286);
    if (((uint)*(byte *)(DAT_08010eb0 + 0x284) & 1 << uVar5) != 0) {
      *(byte *)(DAT_08010eb0 + 0x284) = *(byte *)(DAT_08010eb0 + 0x284) & ~(byte)(1 << uVar5);
      iVar6 = FUN_08009c12(iVar1 + 0x40,iVar1 + 0x287 + uVar5 * 0x1000,
                           *(undefined4 *)(iVar1 + 0x3288 + uVar5 * 4),0);
      if (iVar6 != 0) goto LAB_08010d46;
      bVar4 = *(char *)(iVar1 + 0x286) + 1;
      *(byte *)(iVar1 + 0x286) = bVar4;
      if (2 < bVar4) {
        *(undefined1 *)(iVar1 + 0x286) = 0;
      }
    }
    *(undefined1 *)(iVar1 + 0x329c) = 4;
    FUN_0800bf78(*DAT_08010eb4,0);
    *DAT_08010ecc = *DAT_08010ecc + 1;
    return;
  case 4:
    FUN_08010b82(0);
    FUN_0800bf78(*DAT_08010eb4,0);
    return;
  case 5:
    goto switchD_08010c22_caseD_5;
  default:
    return;
  }
}



// ==== FUN_08010dd8 @ 08010dd8 ====

undefined4 FUN_08010dd8(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 in_r3;
  uint *puVar5;
  
  iVar3 = DAT_08010eb0;
  puVar5 = (uint *)(DAT_08010eb0 + 0x270);
  if ((*(char *)(DAT_08010eb0 + 0x27a) != '\0') &&
     (uVar2 = *puVar5, *puVar5 = uVar2 + 1, 0xf9 < uVar2 + 1)) {
    *puVar5 = 0;
    FUN_08009e52(iVar3 + 0x40);
    FUN_0800a5a0(0);
    FUN_0800bf78(*DAT_08010eb4,0x84);
    *(undefined1 *)(iVar3 + 0x27a) = 0;
    *(undefined2 *)(iVar3 + 0x329c) = 0;
    *puVar5 = 0;
    *(undefined4 *)(iVar3 + 0x27c) = 0;
    FUN_0800a07c(iVar3);
    puVar1 = DAT_08010eb8;
    iVar3 = FUN_08015dd8(*DAT_08010eb8);
    if (iVar3 == 3) {
      FUN_08015f12(*puVar1);
    }
    puVar1 = DAT_08010ebc;
    iVar3 = FUN_08015dd8(*DAT_08010ebc);
    if (iVar3 == 3) {
      FUN_08015f12(*puVar1);
    }
    puVar1 = DAT_08010ec0;
    iVar3 = FUN_08015dd8(*DAT_08010ec0);
    if (iVar3 == 3) {
      uVar4 = FUN_08015f12(*puVar1,in_r3);
      return uVar4;
    }
  }
  return in_r3;
}



// ==== FUN_08010e62 @ 08010e62 ====

undefined4 FUN_08010e62(void)

{
  int iVar1;
  undefined4 in_r3;
  
  iVar1 = DAT_08010eb0;
  if (*(char *)(DAT_08010eb0 + 0x329d) != '\0') {
    FUN_08010c0c();
    *(char *)(iVar1 + 0x329d) = *(char *)(iVar1 + 0x329d) + -1;
  }
  return in_r3;
}



// ==== FUN_08010e7c @ 08010e7c ====

void FUN_08010e7c(void)

{
  FUN_0800a350(DAT_08010eb0,0x32a0,0);
  return;
}



// ==== FUN_08010e8c @ 08010e8c ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08010e8c(void)

{
  undefined1 *puVar1;
  
  puVar1 = _DAT_08010ed0;
  FUN_0800a350(_DAT_08010ed0 + 4,0x20,0);
  *puVar1 = 1;
  FUN_0800b154(2,s_AT_VER_08010f4c);
  return;
}



// ==== FUN_08010f58 @ 08010f58 ====

void FUN_08010f58(void)

{
  undefined1 *puVar1;
  
  puVar1 = DAT_08011404;
  *DAT_08011404 = 0;
  *(undefined4 *)(puVar1 + 4) = 0;
  *(undefined4 *)(puVar1 + 0xc) = 0;
  *(undefined4 *)(puVar1 + 8) = 0;
  *(undefined4 *)(puVar1 + 0x10) = 0;
  *(undefined4 *)(puVar1 + 0x18) = 0;
  *(undefined4 *)(puVar1 + 0x14) = 0;
  *(undefined2 *)(puVar1 + 0x1c) = 0;
  puVar1[0x1e] = 0;
  *(undefined2 *)(puVar1 + 0x3c) = 0;
  puVar1[0x3e] = 0;
  puVar1[0x3f] = 1;
  puVar1[0x1f] = 0;
  puVar1[0x3f] = 0;
  puVar1[0x40] = 0;
  *(undefined2 *)(puVar1 + 0x42) = 0;
  *(undefined2 *)(puVar1 + 0x14c) = 0;
  return;
}



// ==== FUN_08010f92 @ 08010f92 ====

void FUN_08010f92(void)

{
  int iVar1;
  
  do {
    iVar1 = FUN_08014f90(*DAT_08011408,0xffffffff);
    if (iVar1 == 1) {
      FUN_0801129c(DAT_0801140c);
    }
    FUN_08015da6(1000);
  } while( true );
}



// ==== FUN_08010fb8 @ 08010fb8 ====

undefined8 FUN_08010fb8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = DAT_08011408;
  uVar1 = FUN_08014cca(1,0,3,param_4,param_3,param_4);
  *puVar2 = uVar1;
  FUN_08010f58();
  puVar2 = puVar2 + 1;
  uVar1 = 3;
  FUN_08015c18(DAT_08011410,s_Frame_task_0801141b + 1,0x400,0);
  return CONCAT44(puVar2,uVar1);
}



// ==== FUN_08010fea @ 08010fea ====

longlong FUN_08010fea(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  
  if (*DAT_08011414 == '\x01') {
    return CONCAT44(param_4,8);
  }
  if (*DAT_08011414 != '\0') {
    return CONCAT44(param_4,8);
  }
  FUN_08010f58();
  iVar1 = DAT_08011404;
  FUN_0800a350(DAT_08011404 + 0x48,0x80,0);
  FUN_0800ecb0(iVar1 + 0x48,param_1);
  *(undefined1 *)(iVar1 + 0x14d) = 1;
  return (ulonglong)param_4 << 0x20;
}



// ==== FUN_0801102c @ 0801102c ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0801102c(char *param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  iVar2 = DAT_08011404;
  *(undefined4 *)(DAT_08011404 + 0x20) = 0;
  pcVar3 = _DAT_08011418;
  while (((cVar1 = *param_1, cVar1 != '\n' && (cVar1 != '\0')) && (*(uint *)(iVar2 + 0x20) < 0x40)))
  {
    if (cVar1 == 'X') {
      FUN_0800a350(iVar2 + 0x28,10,0);
      *(int *)(iVar2 + 0x24) = iVar2 + 0x28;
      while( true ) {
        param_1 = param_1 + 1;
        cVar1 = *param_1;
        if (((cVar1 == ' ') || (cVar1 == '\r')) || ((cVar1 == '\n' || (cVar1 == '\0')))) break;
        **(char **)(iVar2 + 0x24) = *param_1;
        *(int *)(iVar2 + 0x24) = *(int *)(iVar2 + 0x24) + 1;
      }
      uVar5 = FUN_0801534a(iVar2 + 0x28);
      uVar4 = FUN_0800d610((int)uVar5,(int)((ulonglong)uVar5 >> 0x20));
      *(undefined4 *)(iVar2 + 0x14) = uVar4;
      if (*pcVar3 == '\0') {
        *(undefined4 *)(iVar2 + 0xc) = uVar4;
        *pcVar3 = '\x01';
      }
      else if (pcVar3[1] == '\0') {
        *(undefined4 *)(iVar2 + 4) = uVar4;
        pcVar3[1] = '\x01';
      }
    }
    if (*param_1 == 'Y') {
      FUN_0800a520(iVar2 + 0x32,10,0);
      *(int *)(iVar2 + 0x24) = iVar2 + 0x32;
      while( true ) {
        param_1 = param_1 + 1;
        cVar1 = *param_1;
        if (((cVar1 == ' ') || (cVar1 == '\r')) || ((cVar1 == '\n' || (cVar1 == '\0')))) break;
        **(char **)(iVar2 + 0x24) = *param_1;
        *(int *)(iVar2 + 0x24) = *(int *)(iVar2 + 0x24) + 1;
      }
      uVar5 = FUN_0801534a(iVar2 + 0x32);
      uVar4 = FUN_0800d610((int)uVar5,(int)((ulonglong)uVar5 >> 0x20));
      *(undefined4 *)(iVar2 + 0x18) = uVar4;
      if (pcVar3[2] == '\0') {
        *(undefined4 *)(iVar2 + 0x10) = uVar4;
        pcVar3[2] = '\x01';
      }
      else if (pcVar3[3] == '\0') {
        *(undefined4 *)(iVar2 + 8) = uVar4;
        pcVar3[3] = '\x01';
      }
    }
    param_1 = param_1 + 1;
    *(int *)(iVar2 + 0x20) = *(int *)(iVar2 + 0x20) + 1;
  }
  return;
}



// ==== FUN_08011142 @ 08011142 ====

undefined4 FUN_08011142(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  undefined8 uVar5;
  
  iVar2 = DAT_08011404;
  iVar3 = FUN_08015316(param_1,&DAT_080113ec);
  if (iVar3 == 0) {
    iVar3 = FUN_08015316(param_1,&DAT_080113f0);
    if (iVar3 != 0) {
      *(undefined1 *)(iVar2 + 0x1d) = 1;
    }
  }
  else {
    *(undefined1 *)(iVar2 + 0x1c) = 1;
  }
  *(undefined4 *)(iVar2 + 0x20) = 0;
  while (((cVar1 = *param_1, cVar1 != '\n' && (cVar1 != '\0')) && (*(uint *)(iVar2 + 0x20) < 0x3f)))
  {
    if (cVar1 == 'X') {
      FUN_0800a350(iVar2 + 0x28,10,0);
      *(int *)(iVar2 + 0x24) = iVar2 + 0x28;
      while( true ) {
        param_1 = param_1 + 1;
        iVar3 = (int)*param_1;
        if ((((iVar3 == 0x20) || (iVar3 == 0xd)) ||
            ((iVar3 == 10 || ((iVar3 == 0 || (9 < iVar3 - 0x30U)))))) && (iVar3 != 0x2e)) break;
        **(char **)(iVar2 + 0x24) = *param_1;
        *(int *)(iVar2 + 0x24) = *(int *)(iVar2 + 0x24) + 1;
      }
      uVar5 = FUN_0801534a(iVar2 + 0x28);
      fVar4 = (float)FUN_0800d610((int)uVar5,(int)((ulonglong)uVar5 >> 0x20));
      *(float *)(iVar2 + 0x14) = fVar4;
      if ((int)((uint)(*(float *)(iVar2 + 4) < fVar4) << 0x1f) < 0) {
        *(float *)(iVar2 + 4) = fVar4;
      }
      if ((int)((uint)(fVar4 < *(float *)(iVar2 + 0xc)) << 0x1f) < 0) {
        *(float *)(iVar2 + 0xc) = fVar4;
      }
    }
    if (*param_1 == 'Y') {
      FUN_0800a520(iVar2 + 0x32,10,0);
      *(int *)(iVar2 + 0x24) = iVar2 + 0x32;
      while( true ) {
        param_1 = param_1 + 1;
        iVar3 = (int)*param_1;
        if (((((iVar3 == 0x20) || (iVar3 == 0xd)) || (iVar3 == 10)) ||
            ((iVar3 == 0 || (9 < iVar3 - 0x30U)))) && (iVar3 != 0x2e)) break;
        **(char **)(iVar2 + 0x24) = *param_1;
        *(int *)(iVar2 + 0x24) = *(int *)(iVar2 + 0x24) + 1;
      }
      uVar5 = FUN_0801534a(iVar2 + 0x32);
      fVar4 = (float)FUN_0800d610((int)uVar5,(int)((ulonglong)uVar5 >> 0x20));
      *(float *)(iVar2 + 0x18) = fVar4;
      if ((int)((uint)(*(float *)(iVar2 + 8) < fVar4) << 0x1f) < 0) {
        *(float *)(iVar2 + 8) = fVar4;
      }
      if ((int)((uint)(fVar4 < *(float *)(iVar2 + 0x10)) << 0x1f) < 0) {
        *(float *)(iVar2 + 0x10) = fVar4;
      }
    }
    param_1 = param_1 + 1;
    *(int *)(iVar2 + 0x20) = *(int *)(iVar2 + 0x20) + 1;
  }
  *(undefined2 *)(iVar2 + 0x1c) = 0;
  return param_4;
}



// ==== FUN_0801129c @ 0801129c ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_0801129c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 uVar4;
  ulonglong uVar5;
  
  if ((*DAT_08011414 != '\0') && (*DAT_08011414 != '\x01')) {
    uVar3 = FUN_0801353e((int)&DAT_0801661c + DAT_0801661c,1,s_sys_no_idle_08011428,&stack0xffffffec
                        );
    return (ulonglong)uVar3;
  }
  FUN_0800ace8();
  FUN_0800ac9a(param_1);
  iVar2 = FUN_0800acc0();
  if (iVar2 == 0) {
    FUN_0800ace8();
    uVar5 = FUN_0800bf78(0xff,0x3e,param_4);
    return uVar5;
  }
  uVar3 = FUN_0800ad28();
  puVar1 = _DAT_08011418;
  *_DAT_08011418 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  FUN_0800a350(puVar1 + 8,0xff,0);
  do {
    iVar2 = FUN_0800ad0c(puVar1 + 8,0xfe);
    if (iVar2 == 0) {
LAB_0801132e:
      iVar2 = DAT_08011404;
      if ((*(float *)(DAT_08011404 + 4) == 0.0) && (*(float *)(DAT_08011404 + 8) == 0.0)) {
        puVar1[4] = 0;
      }
      else {
        puVar1[4] = 1;
      }
      FUN_0800ace8();
      if (puVar1[4] == '\0') {
        FUN_0800b154(0xff,s_NO_Bounds_0801144c);
        FUN_0800b154(0xff,&DAT_08011400);
        uVar4 = extraout_r1_00;
      }
      else {
        puVar1[4] = 0;
        FUN_0800b154(0xff,s_Bounds___08011440);
        FUN_0800b254(*(undefined4 *)(iVar2 + 0xc),0xff,2);
        FUN_0800b154(0xff,&DAT_080113f4);
        FUN_0800b254(*(undefined4 *)(iVar2 + 0x10),0xff,2);
        FUN_0800b154(0xff,&DAT_080113f8);
        FUN_0800b254(*(undefined4 *)(iVar2 + 4),0xff,2);
        FUN_0800b154(0xff,&DAT_080113f4);
        FUN_0800b254(*(undefined4 *)(iVar2 + 8),0xff,2);
        FUN_0800b154(0xff,&DAT_080113fc);
        uVar4 = extraout_r1;
      }
      *(undefined4 *)(iVar2 + 0xc) = 0;
      *(undefined4 *)(iVar2 + 0x10) = 0;
      *(undefined4 *)(iVar2 + 4) = 0;
      *(undefined4 *)(iVar2 + 8) = 0;
      return CONCAT44(uVar4,param_4);
    }
    if (uVar3 < 10) {
      uVar3 = FUN_0800ad28();
      iVar2 = FUN_08015316(puVar1 + 8,s_Bounds_08011438);
      if (iVar2 != 0) {
        FUN_0801102c(puVar1 + 8);
        goto LAB_0801132e;
      }
    }
    FUN_08011142(puVar1 + 8);
  } while( true );
}



// ==== FUN_080113dc @ 080113dc ====

longlong FUN_080113dc(void)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  uint uStack_20;
  undefined4 uStack_1c;
  int iStack_18;
  
  uVar2 = *DAT_08011408;
  iStack_18 = 0;
  uStack_1c = 0;
  bVar1 = false;
  uStack_20 = uVar2;
  while( true ) {
    FUN_08016b00();
    if (*(uint *)(uVar2 + 0x38) < *(uint *)(uVar2 + 0x3c)) {
      iVar3 = FUN_080150d4(uVar2,0,0);
      if (*(int *)(uVar2 + 0x24) != 0) {
        iVar3 = FUN_0801619a(uVar2 + 0x24);
      }
      if (iVar3 != 0) {
        *DAT_08015214 = 0x10000000;
        DataSynchronizationBarrier(0xf);
        InstructionSynchronizationBarrier(0xf);
      }
      FUN_08016b18();
      return CONCAT44(uStack_20,1);
    }
    if (iStack_18 == 0) break;
    if (!bVar1) {
      FUN_080161f8(&uStack_20);
      bVar1 = true;
    }
    FUN_08016b18();
    FUN_08015fc8();
    FUN_08016b00();
    if (*(char *)(uVar2 + 0x44) == -1) {
      *(char *)(uVar2 + 0x44) = '\0';
    }
    if (*(char *)(uVar2 + 0x45) == -1) {
      *(undefined1 *)(uVar2 + 0x45) = 0;
    }
    FUN_08016b18();
    iVar3 = FUN_08016206(&uStack_20,&iStack_18);
    if (iVar3 != 0) {
      FUN_0801516c(uVar2);
      FUN_08015fd4();
      return (ulonglong)uStack_20 << 0x20;
    }
    iVar3 = FUN_080151f4();
    if (iVar3 == 0) {
      FUN_0801516c(uVar2);
      FUN_08015fd4();
    }
    else {
      FUN_08016180(uVar2 + 0x10,iStack_18);
      FUN_0801516c(uVar2);
      iVar3 = FUN_08015fd4();
      if (iVar3 == 0) {
        *DAT_08015214 = 0x10000000;
        DataSynchronizationBarrier(0xf);
        InstructionSynchronizationBarrier(0xf);
      }
    }
  }
  FUN_08016b18();
  return (ulonglong)uStack_20 << 0x20;
}



// ==== FUN_08011458 @ 08011458 ====

char FUN_08011458(char param_1)

{
  param_1 = param_1 + '\x01';
  if (param_1 == ' ') {
    param_1 = '\0';
  }
  return param_1;
}



// ==== FUN_08011468 @ 08011468 ====

uint FUN_08011468(int param_1)

{
  if (param_1 == 0) {
    param_1 = 0x20;
  }
  return param_1 - 1U & 0xff;
}



// ==== FUN_08011474 @ 08011474 ====

undefined4 FUN_08011474(void)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  uint uVar4;
  undefined4 in_r3;
  int iVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  
  pbVar2 = DAT_08011a68;
  uVar4 = FUN_08011468(DAT_08011a68[1]);
  iVar3 = DAT_08011a70;
  bVar1 = pbVar2[3];
  if (uVar4 != bVar1) {
    iVar6 = DAT_08011a70 + (short)uVar4 * 0x34;
    fVar7 = *(float *)(iVar6 + 0x1c) * 2.0 * *(float *)(iVar6 + 0x20);
    if ((int)((uint)(*(float *)(iVar6 + 0x18) < fVar7) << 0x1f) < 0) {
      fVar7 = *(float *)(iVar6 + 0x18);
    }
    *(float *)(iVar6 + 0x14) = fVar7;
    uVar4 = FUN_08011468();
    if (uVar4 == bVar1) {
      if (uVar4 == *pbVar2) {
        FUN_08011df6();
      }
    }
    else {
      while (iVar5 = iVar6, uVar4 != pbVar2[3]) {
        iVar6 = iVar3 + (short)uVar4 * 0x34;
        uVar4 = FUN_08011468(uVar4);
        if (uVar4 == *pbVar2) {
          FUN_08011df6();
        }
        fVar7 = *(float *)(iVar6 + 0x18);
        if (*(float *)(iVar6 + 0x14) != fVar7) {
          fVar8 = *(float *)(iVar5 + 0x14) +
                  *(float *)(iVar6 + 0x1c) * 2.0 * *(float *)(iVar6 + 0x20);
          if ((int)((uint)(fVar8 < fVar7) << 0x1f) < 0) {
            *(float *)(iVar6 + 0x14) = fVar8;
          }
          else {
            *(float *)(iVar6 + 0x14) = fVar7;
          }
        }
      }
    }
    bVar1 = pbVar2[3];
    uVar4 = FUN_08011458();
    iVar6 = iVar3 + (short)(ushort)bVar1 * 0x34;
    while (uVar4 != pbVar2[1]) {
      iVar5 = iVar3 + (short)uVar4 * 0x34;
      if ((int)((uint)(*(float *)(iVar6 + 0x14) < *(float *)(iVar5 + 0x14)) << 0x1f) < 0) {
        fVar7 = *(float *)(iVar6 + 0x14) + *(float *)(iVar6 + 0x1c) * 2.0 * *(float *)(iVar6 + 0x20)
        ;
        if ((int)((uint)(fVar7 < *(float *)(iVar5 + 0x14)) << 0x1f) < 0) {
          *(float *)(iVar5 + 0x14) = fVar7;
          pbVar2[3] = (byte)uVar4;
        }
      }
      if (*(float *)(iVar5 + 0x14) == *(float *)(iVar5 + 0x18)) {
        pbVar2[3] = (byte)uVar4;
      }
      uVar4 = FUN_08011458();
      iVar6 = iVar5;
    }
  }
  return in_r3;
}



// ==== FUN_080115a8 @ 080115a8 ====

void FUN_080115a8(void)

{
  undefined1 *puVar1;
  
  FUN_0800a520(DAT_08011a6c,0x1c,0);
  puVar1 = DAT_08011a68;
  *DAT_08011a68 = 0;
  puVar1[1] = 0;
  puVar1[2] = 1;
  puVar1[3] = 0;
  return;
}



// ==== FUN_080115ce @ 080115ce ====

undefined4 FUN_080115ce(void)

{
  char cVar1;
  char *pcVar2;
  char cVar3;
  undefined4 in_r3;
  
  pcVar2 = DAT_08011a68;
  cVar1 = *DAT_08011a68;
  if (DAT_08011a68[1] != cVar1) {
    cVar3 = FUN_08011458(cVar1);
    if (cVar1 == pcVar2[3]) {
      pcVar2[3] = cVar3;
    }
    *pcVar2 = cVar3;
  }
  return in_r3;
}



// ==== FUN_080115ee @ 080115ee ====

int FUN_080115ee(void)

{
  return DAT_08011a70 + (short)(ushort)*(byte *)(DAT_08011a68 + 1) * 0x34;
}



// ==== FUN_08011602 @ 08011602 ====

int FUN_08011602(void)

{
  if (DAT_08011a68[1] == *DAT_08011a68) {
    return 0;
  }
  return DAT_08011a70 + (short)(ushort)*DAT_08011a68 * 0x34;
}



// ==== FUN_08011620 @ 08011620 ====

undefined4 FUN_08011620(void)

{
  undefined1 *puVar1;
  uint uVar2;
  
  puVar1 = DAT_08011a68;
  uVar2 = FUN_08011458(*DAT_08011a68);
  if (uVar2 == (byte)puVar1[1]) {
    return DAT_08011784;
  }
  return *(undefined4 *)((short)uVar2 * 0x34 + DAT_08011a70 + 0x14);
}



// ==== FUN_0801164a @ 0801164a ====

undefined4 FUN_0801164a(void)

{
  if (*DAT_08011a68 == DAT_08011a68[2]) {
    return 1;
  }
  return 0;
}



// ==== FUN_08011660 @ 08011660 ====

float FUN_08011660(int param_1)

{
  float fVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  fVar1 = *(float *)(param_1 + 0x2c);
  if ((int)((uint)*(byte *)(param_1 + 0x11) << 0x1f) < 0) {
    uVar2 = FUN_0800d6b8(fVar1);
    uVar3 = FUN_0800d200(*(undefined1 *)(DAT_08011a78 + 8));
    uVar3 = FUN_0800d21c((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),DAT_08011a7c,DAT_08011a74);
    FUN_0800d21c((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),(int)uVar2,
                 (int)((ulonglong)uVar2 >> 0x20));
    fVar1 = (float)FUN_0800d610();
  }
  else {
    if (-1 < (int)((uint)*(byte *)(param_1 + 0x11) << 0x1d)) {
      uVar2 = FUN_0800d6b8(fVar1);
      uVar3 = FUN_0800d200(*(undefined1 *)(DAT_08011a78 + 7));
      uVar3 = FUN_0800d21c((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),DAT_08011a7c,DAT_08011a74);
      FUN_0800d21c((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),(int)uVar2,
                   (int)((ulonglong)uVar2 >> 0x20));
      fVar1 = (float)FUN_0800d610();
    }
    if ((int)((uint)(*(float *)(param_1 + 0x28) < fVar1) << 0x1f) < 0) {
      fVar1 = *(float *)(param_1 + 0x28);
    }
  }
  if (fVar1 < DAT_08011a14) {
    fVar1 = 1.0;
  }
  return fVar1;
}



// ==== FUN_080116fe @ 080116fe ====

void FUN_080116fe(float param_1,float param_2,int param_3)

{
  if ((int)((uint)(param_2 < param_1) << 0x1f) < 0) {
    *(float *)(param_3 + 0x18) = param_2 * param_2;
  }
  else {
    *(float *)(param_3 + 0x18) = param_1 * param_1;
  }
  if ((int)((uint)(*(float *)(param_3 + 0x24) < *(float *)(param_3 + 0x18)) << 0x1f) < 0) {
    *(float *)(param_3 + 0x18) = *(float *)(param_3 + 0x24);
  }
  return;
}



// ==== FUN_08011734 @ 08011734 ====

void FUN_08011734(void)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  pbVar1 = DAT_08011a68;
  uVar2 = (uint)*DAT_08011a68;
  uVar5 = DAT_08011a34;
  while (uVar2 != pbVar1[1]) {
    iVar3 = DAT_08011a70 + (short)uVar2 * 0x34;
    uVar4 = FUN_08011660(iVar3);
    FUN_080116fe(uVar4,uVar5,iVar3);
    uVar2 = FUN_08011458(uVar2);
    uVar5 = uVar4;
  }
  *(undefined4 *)(pbVar1 + 0x1c) = uVar5;
  return;
}



// ==== FUN_08011788 @ 08011788 ====

undefined4 FUN_08011788(int param_1,float *param_2)

{
  char *pcVar1;
  int iVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  float fVar9;
  int iVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  uint in_fpscr;
  float fVar14;
  undefined4 extraout_s1;
  undefined4 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  float local_60 [6];
  int local_48 [6];
  
  pcVar1 = DAT_08011a68;
  iVar12 = DAT_08011a70 + (short)(ushort)(byte)DAT_08011a68[1] * 0x34;
  FUN_0800a350(iVar12,0x34,0);
  *(undefined1 *)(iVar12 + 0x11) = *(undefined1 *)(param_2 + 2);
  *(float *)(iVar12 + 0x30) = param_2[1];
  if ((int)((uint)*(byte *)(iVar12 + 0x11) << 0x1e) < 0) {
    FUN_0800a428(local_48,DAT_08011a80,0xc);
  }
  else {
    FUN_0800a428(local_48,pcVar1 + 4,0xc);
  }
  iVar2 = DAT_08011a84;
  for (iVar13 = 0; iVar13 < 3; iVar13 = iVar13 + 1) {
    uVar8 = FUN_0800d6b8(*(float *)(param_1 + iVar13 * 4) * *(float *)(iVar2 + iVar13 * 4));
    iVar5 = FUN_0801654c(uVar8);
    local_48[iVar13 + 3] = iVar5;
    iVar10 = local_48[iVar13];
    uVar6 = FUN_08016620();
    *(uint *)(iVar12 + iVar13 * 4) = uVar6;
    uVar7 = *(uint *)(iVar12 + 0xc);
    if (*(uint *)(iVar12 + 0xc) <= uVar6) {
      uVar7 = uVar6;
    }
    *(uint *)(iVar12 + 0xc) = uVar7;
    fVar9 = (float)VectorSignedToFloat(iVar5 - iVar10,(byte)(in_fpscr >> 0x16) & 3);
    fVar9 = fVar9 / *(float *)(iVar2 + iVar13 * 4);
    local_60[iVar13] = fVar9;
    in_fpscr = in_fpscr & 0xfffffff;
    if (fVar9 < 0.0) {
      bVar3 = thunk_FUN_08015a9e(iVar13);
      *(byte *)(iVar12 + 0x10) = bVar3 | *(byte *)(iVar12 + 0x10);
    }
  }
  if (*(int *)(iVar12 + 0xc) == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = FUN_08012b64(local_60);
    *(undefined4 *)(iVar12 + 0x20) = uVar8;
    uVar8 = FUN_08012bcc(iVar2 + 0x18,local_60);
    *(undefined4 *)(iVar12 + 0x1c) = uVar8;
    uVar8 = FUN_08012bcc(iVar2 + 0xc,local_60);
    *(undefined4 *)(iVar12 + 0x28) = uVar8;
    if ((int)((uint)*(byte *)(iVar12 + 0x11) << 0x1f) < 0) {
      *(undefined4 *)(iVar12 + 0x2c) = *(undefined4 *)(iVar12 + 0x28);
    }
    else {
      fVar9 = *param_2;
      *(float *)(iVar12 + 0x2c) = fVar9;
      if ((int)((uint)*(byte *)(iVar12 + 0x11) << 0x1c) < 0) {
        *(float *)(iVar12 + 0x2c) = fVar9 * *(float *)(iVar12 + 0x20);
      }
    }
    if ((pcVar1[1] == *pcVar1) || ((int)((uint)*(byte *)(iVar12 + 0x11) << 0x1e) < 0)) {
      *(undefined4 *)(iVar12 + 0x14) = 0;
      *(undefined4 *)(iVar12 + 0x24) = 0;
    }
    else {
      fVar9 = DAT_08011a9c;
      for (iVar13 = 0; iVar13 < 3; iVar13 = iVar13 + 1) {
        fVar9 = fVar9 - *(float *)(pcVar1 + iVar13 * 4 + 0x10) * local_60[iVar13];
        local_60[iVar13 + 3] = local_60[iVar13] - *(float *)(pcVar1 + iVar13 * 4 + 0x10);
      }
      if (fVar9 < DAT_08011a88) {
        cVar4 = DAT_08011a8c <= fVar9;
        if (DAT_08011a8c <= fVar9) {
          FUN_08012b64(local_60 + 3);
          fVar14 = (float)FUN_08012bcc(iVar2 + 0x18,local_60 + 3);
          uVar17 = DAT_08011a90;
          uVar16 = FUN_0800d6b8(fVar9);
          uVar11 = (undefined4)((ulonglong)uVar17 >> 0x20);
          uVar15 = (undefined4)uVar17;
          uVar17 = FUN_08015570(uVar15,uVar11,(int)uVar16,(int)((ulonglong)uVar16 >> 0x20));
          uVar8 = FUN_0800d21c((int)uVar17,(int)((ulonglong)uVar17 >> 0x20),0,DAT_08011a98);
          uVar8 = FUN_08015654(uVar8);
          fVar9 = (float)FUN_0800d610(uVar8,extraout_s1);
          uVar17 = FUN_0800d6b8(fVar14 * *(float *)(iVar2 + 0x38) * fVar9);
          uVar16 = FUN_0800d6b8(fVar9);
          uVar16 = FUN_08015570(uVar15,uVar11,(int)uVar16,(int)((ulonglong)uVar16 >> 0x20));
          FUN_0800d3c8((int)uVar17,(int)((ulonglong)uVar17 >> 0x20),(int)uVar16,
                       (int)((ulonglong)uVar16 >> 0x20));
          FUN_08015758();
          fVar9 = DAT_08011a9c;
          if (cVar4 != '\0') {
            fVar9 = (float)FUN_0800d610();
          }
          *(float *)(iVar12 + 0x24) = fVar9;
        }
        else {
          *(undefined4 *)(iVar12 + 0x24) = DAT_08011a34;
        }
      }
      else {
        *(undefined4 *)(iVar12 + 0x24) = 0;
      }
    }
    if (-1 < (int)((uint)*(byte *)(iVar12 + 0x11) << 0x1e)) {
      uVar8 = FUN_08011660(iVar12);
      FUN_080116fe(iVar12);
      *(undefined4 *)(pcVar1 + 0x1c) = uVar8;
      FUN_0800a428(pcVar1 + 0x10,local_60,0xc);
      FUN_0800a428(pcVar1 + 4,local_48 + 3,0xc);
      pcVar1[1] = pcVar1[2];
      cVar4 = FUN_08011458();
      pcVar1[2] = cVar4;
      FUN_08011474();
    }
    uVar8 = 1;
  }
  return uVar8;
}



// ==== FUN_08011a18 @ 08011a18 ====

void FUN_08011a18(void)

{
  int iVar1;
  
  for (iVar1 = 0; iVar1 < 3; iVar1 = iVar1 + 1) {
    *(undefined4 *)(DAT_08011a68 + iVar1 * 4 + 4) = *(undefined4 *)(DAT_08011a80 + iVar1 * 4);
  }
  return;
}



// ==== FUN_08011a38 @ 08011a38 ====

char FUN_08011a38(void)

{
  byte bVar1;
  byte bVar2;
  
  bVar1 = DAT_08011a68[1];
  bVar2 = *DAT_08011a68;
  if (bVar2 <= bVar1) {
    return bVar2 + ('\x1f' - bVar1);
  }
  return (bVar2 - bVar1) + -1;
}



// ==== FUN_08011a54 @ 08011a54 ====

void FUN_08011a54(void)

{
  undefined4 unaff_r7;
  
  FUN_08011df6();
  DAT_08011a68[3] = *DAT_08011a68;
  FUN_08011474(unaff_r7);
  return;
}



// ==== FUN_08011aa0 @ 08011aa0 ====

void FUN_08011aa0(void)

{
  byte *pbVar1;
  int iVar2;
  undefined4 uVar3;
  
  pbVar1 = DAT_08012768;
  if ((int)((uint)*DAT_08012768 << 0x1d) < 0) {
    FUN_08015990(1);
  }
  else {
    FUN_08015990(0);
  }
  iVar2 = DAT_08012784;
  *(ushort *)(DAT_08012784 + 0x56) = (ushort)*(byte *)(DAT_08012788 + 3);
  *(byte *)(iVar2 + 0x55) = pbVar1[1] - 3;
  uVar3 = DAT_0801278c;
  FUN_080166d8(DAT_0801278c,0);
  FUN_080166d0(uVar3,*(byte *)(iVar2 + 0x55) - 1);
  FUN_080166de(uVar3);
  FUN_080166e4(uVar3);
  uVar3 = DAT_08012790;
  FUN_080166d0(DAT_08012790,*(ushort *)(*(int *)(iVar2 + 0x70) + 2) - 1);
  FUN_080166de(uVar3);
  FUN_080171ba(0x32);
  return;
}



// ==== FUN_08011b12 @ 08011b12 ====

void FUN_08011b12(void)

{
  byte *pbVar1;
  bool bVar2;
  
  FUN_080166ca();
  *(undefined1 *)(DAT_08012788 + 5) = 0;
  pbVar1 = DAT_08012768;
  bVar2 = false;
  if ((((DAT_08012768[2] != 0xff) || (*DAT_08012794 != '\0')) || (*DAT_08012798 == -0x80)) &&
     (*DAT_08012798 != '\x04')) {
    thunk_FUN_08015da6();
    bVar2 = true;
  }
  if ((int)((uint)*pbVar1 << 0x1d) < 0) {
    bVar2 = (bool)(bVar2 ^ 1);
  }
  if (bVar2) {
    FUN_08015990(1);
    return;
  }
  FUN_08015990(0);
  return;
}



// ==== FUN_08011d56 @ 08011d56 ====

undefined4 FUN_08011d56(void)

{
  int iVar1;
  byte *pbVar2;
  byte bVar3;
  undefined4 in_r3;
  byte bVar4;
  
  iVar1 = DAT_08012788;
  *(undefined1 *)(DAT_08012788 + 3) = 0;
  *(undefined1 *)(iVar1 + 4) = 0;
  pbVar2 = DAT_080127b0;
  for (bVar4 = 0; bVar4 < 3; bVar4 = bVar4 + 1) {
    if (((uint)*pbVar2 & 1 << (uint)bVar4) != 0) {
      bVar3 = thunk_FUN_08015aba(bVar4);
      *(byte *)(iVar1 + 3) = bVar3 | *(byte *)(iVar1 + 3);
    }
    if (((uint)pbVar2[1] & 1 << (uint)bVar4) != 0) {
      bVar3 = thunk_FUN_08015a9e(bVar4);
      *(byte *)(iVar1 + 4) = bVar3 | *(byte *)(iVar1 + 4);
    }
  }
  return in_r3;
}



// ==== FUN_08011da2 @ 08011da2 ====

undefined4 FUN_08011da2(void)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 in_r3;
  
  FUN_08011b12();
  iVar1 = DAT_08012784;
  FUN_0800a350(DAT_08012784,0x48,0);
  FUN_0800a350(iVar1 + 0x48,0x2c,0);
  *(undefined4 *)(iVar1 + 0x70) = 0;
  *(undefined4 *)(iVar1 + 0x74) = 0;
  puVar2 = DAT_08012788;
  *DAT_08012788 = 0;
  puVar2[1] = 0;
  puVar2[2] = 1;
  puVar2[5] = 0;
  FUN_08011d56();
  *(ushort *)(iVar1 + 0x58) = (ushort)(byte)puVar2[4];
  return in_r3;
}



// ==== FUN_08011de4 @ 08011de4 ====

void FUN_08011de4(void)

{
  undefined4 unaff_r7;
  
  FUN_08015980();
  FUN_08016628();
  FUN_08016676(unaff_r7);
  return;
}



// ==== FUN_08011df6 @ 08011df6 ====

void FUN_08011df6(void)

{
  int *piVar1;
  int iVar2;
  float fVar3;
  
  iVar2 = DAT_08012784;
  piVar1 = (int *)(DAT_08012784 + 0x74);
  if (*piVar1 != 0) {
    *(byte *)(DAT_08012784 + 1) = *(byte *)(DAT_08012784 + 1) | 1;
    fVar3 = *(float *)(iVar2 + 0x2c);
    *(float *)(*piVar1 + 0x14) = fVar3 * fVar3;
    *(undefined4 *)(iVar2 + 0x74) = 0;
  }
  return;
}



// ==== FUN_08011e1a @ 08011e1a ====

char FUN_08011e1a(char param_1)

{
  if ((char)(param_1 + '\x01') == '\x0f') {
    return '\0';
  }
  return param_1 + '\x01';
}



// ==== FUN_08011e2c @ 08011e2c ====

void FUN_08011e2c(void)

{
  undefined1 *puVar1;
  
  puVar1 = DAT_08012784;
  if ((int)((uint)(byte)DAT_08012784[1] << 0x1e) < 0) {
    DAT_08012784[0x14] = *DAT_08012784;
    *(undefined4 *)(puVar1 + 0x18) = *(undefined4 *)(puVar1 + 8);
    *(undefined4 *)(puVar1 + 0x20) = *(undefined4 *)(puVar1 + 4);
    *(undefined4 *)(puVar1 + 0x1c) = *(undefined4 *)(puVar1 + 0xc);
  }
  puVar1[1] = puVar1[1] & 0xfe | 4;
  *(undefined4 *)(puVar1 + 0x74) = 0;
  return;
}



// ==== FUN_08011ea4 @ 08011ea4 ====

undefined4 FUN_08011ea4(void)

{
  char *pcVar1;
  byte bVar2;
  byte bVar3;
  char *pcVar4;
  undefined1 *puVar5;
  char *pcVar6;
  char cVar7;
  undefined2 uVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  short *psVar12;
  int iVar13;
  float fVar14;
  uint uVar15;
  undefined4 in_r3;
  int iVar16;
  uint in_fpscr;
  uint uVar17;
  undefined4 extraout_s1;
  undefined4 extraout_s1_00;
  undefined4 extraout_s1_01;
  undefined4 extraout_s1_02;
  undefined4 extraout_s1_03;
  undefined4 extraout_s1_04;
  undefined4 extraout_s1_05;
  undefined4 extraout_s1_06;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  
  pcVar4 = DAT_080127b4;
  puVar5 = DAT_08012784;
  if (-1 < (int)((uint)*(byte *)(DAT_08012798 + 4) << 0x1f)) {
    while (*DAT_08012788 != DAT_08012788[2]) {
      if (*(int *)(pcVar4 + 0x50) == 0) {
        if ((int)((uint)*(byte *)(DAT_08012798 + 4) << 0x1d) < 0) {
          uVar9 = FUN_080115ee();
          *(undefined4 *)(pcVar4 + 0x50) = uVar9;
        }
        else {
          uVar9 = FUN_08011602();
          *(undefined4 *)(pcVar4 + 0x50) = uVar9;
        }
        iVar13 = DAT_08012798;
        iVar16 = *(int *)(pcVar4 + 0x50);
        if (iVar16 == 0) {
          return in_r3;
        }
        bVar2 = puVar5[1];
        if ((int)((uint)bVar2 << 0x1f) < 0) {
          if ((int)((uint)bVar2 << 0x1d) < 0) {
            puVar5[1] = bVar2 & 0xfe;
          }
          else {
            puVar5[1] = 0;
          }
        }
        else {
          iVar10 = FUN_08011e1a(*puVar5);
          *puVar5 = (char)iVar10;
          *(undefined1 **)(pcVar4 + 0x54) = puVar5 + iVar10 * 0x14 + 0x7c;
          puVar5[iVar10 * 0x14 + 0x8c] = *(undefined1 *)(iVar16 + 0x10);
          for (iVar11 = 0; iVar11 < 3; iVar11 = iVar11 + 1) {
            *(int *)(puVar5 + iVar10 * 0x14 + 0x7c + iVar11 * 4) =
                 *(int *)(iVar16 + iVar11 * 4) << 3;
          }
          *(int *)(puVar5 + iVar10 * 0x14 + 0x88) = *(int *)(iVar16 + 0xc) << 3;
          fVar19 = (float)VectorUnsignedToFloat
                                    (*(undefined4 *)(iVar16 + 0xc),(byte)(in_fpscr >> 0x16) & 3);
          *(float *)(puVar5 + 8) = fVar19;
          fVar19 = fVar19 / *(float *)(iVar16 + 0x20);
          *(float *)(puVar5 + 0xc) = fVar19;
          *(float *)(puVar5 + 0x10) = 1.25 / fVar19;
          *(undefined4 *)(puVar5 + 4) = 0;
          if (((int)((uint)*(byte *)(iVar13 + 4) << 0x1e) < 0) ||
             ((int)((uint)(byte)puVar5[1] << 0x1c) < 0)) {
            fVar19 = *(float *)(pcVar4 + 0x10);
            *(float *)(pcVar4 + 8) = fVar19;
            *(float *)(iVar16 + 0x14) = fVar19 * fVar19;
            puVar5[1] = puVar5[1] & 0xf7;
          }
          else {
            uVar9 = FUN_0800d6b8(*(undefined4 *)(iVar16 + 0x14));
            uVar9 = FUN_08015654(uVar9);
            uVar9 = FUN_0800d610(uVar9,extraout_s1);
            *(undefined4 *)(pcVar4 + 8) = uVar9;
          }
          puVar5[iVar10 * 0x14 + 0x8d] = 0;
          if (((int)((uint)*(byte *)(DAT_080127b8 + 0x30) << 0x1e) < 0) &&
             ((int)((uint)*(byte *)(iVar16 + 0x11) << 0x1a) < 0)) {
            *(float *)(pcVar4 + 0x1c) = 1.0 / *(float *)(iVar16 + 0x2c);
            puVar5[iVar10 * 0x14 + 0x8d] = 1;
          }
        }
        pcVar4[4] = '\0';
        pcVar4[5] = '\0';
        pcVar4[6] = '\0';
        pcVar4[7] = '\0';
        fVar19 = 0.5 / *(float *)(iVar16 + 0x1c);
        bVar2 = *(byte *)(iVar13 + 4);
        if ((int)((uint)bVar2 << 0x1e) < 0) {
          *pcVar4 = '\x02';
          fVar19 = *(float *)(iVar16 + 0x20) - fVar19 * *(float *)(iVar16 + 0x14);
          in_fpscr = in_fpscr & 0xfffffff;
          if (0.0 <= fVar19) {
            *(float *)(pcVar4 + 4) = fVar19;
            pcVar4[0x10] = '\0';
            pcVar4[0x11] = '\0';
            pcVar4[0x12] = '\0';
            pcVar4[0x13] = '\0';
          }
          else {
            uVar9 = FUN_0800d6b8(*(float *)(iVar16 + 0x14) -
                                 *(float *)(iVar16 + 0x1c) * 2.0 * *(float *)(iVar16 + 0x20));
            uVar9 = FUN_08015654(uVar9);
            uVar9 = FUN_0800d610(uVar9,extraout_s1_00);
            *(undefined4 *)(pcVar4 + 0x10) = uVar9;
          }
        }
        else {
          *pcVar4 = '\0';
          *(undefined4 *)(pcVar4 + 0x14) = *(undefined4 *)(iVar16 + 0x20);
          fVar14 = DAT_080122f4;
          if ((int)((uint)bVar2 << 0x1d) < 0) {
            pcVar4[0x10] = '\0';
            pcVar4[0x11] = '\0';
            pcVar4[0x12] = '\0';
            pcVar4[0x13] = '\0';
          }
          else {
            fVar14 = (float)FUN_08011620();
            uVar9 = FUN_0800d6b8(fVar14);
            uVar9 = FUN_08015654(uVar9);
            uVar9 = FUN_0800d610(uVar9,extraout_s1_01);
            *(undefined4 *)(pcVar4 + 0x10) = uVar9;
          }
          fVar20 = (float)FUN_08011660(*(undefined4 *)(pcVar4 + 0x50));
          fVar21 = fVar20 * fVar20;
          iVar16 = *(int *)(pcVar4 + 0x50);
          fVar18 = *(float *)(iVar16 + 0x20);
          fVar22 = *(float *)(iVar16 + 0x14);
          fVar23 = (fVar18 + (fVar22 - fVar14) * fVar19) * 0.5;
          uVar17 = in_fpscr & 0xfffffff;
          if (fVar22 <= fVar21) {
            uVar15 = uVar17 | (uint)(fVar23 < 0.0) << 0x1f | (uint)(fVar23 == 0.0) << 0x1e;
            in_fpscr = uVar15 | (uint)NAN(fVar23) << 0x1c;
            bVar2 = (byte)(uVar15 >> 0x18);
            if ((bool)(bVar2 >> 6 & 1) || bVar2 >> 7 != ((byte)(in_fpscr >> 0x1c) & 1)) {
              pcVar4[0x14] = '\0';
              pcVar4[0x15] = '\0';
              pcVar4[0x16] = '\0';
              pcVar4[0x17] = '\0';
              *(undefined4 *)(pcVar4 + 0xc) = *(undefined4 *)(pcVar4 + 0x10);
            }
            else if (fVar18 <= fVar23) {
              *pcVar4 = '\x02';
              in_fpscr = uVar17;
            }
            else {
              fVar18 = (fVar21 - fVar14) * fVar19;
              *(float *)(pcVar4 + 0x18) = fVar18;
              if (fVar23 <= fVar18) {
                *(float *)(pcVar4 + 0x14) = fVar23;
                *(float *)(pcVar4 + 0x18) = fVar23;
                uVar26 = FUN_0800d6b8(*(undefined4 *)(iVar16 + 0x1c));
                uVar26 = FUN_0800d21c((int)uVar26,(int)((ulonglong)uVar26 >> 0x20),0,0x40000000);
                uVar27 = FUN_0800d6b8(fVar23);
                uVar26 = FUN_0800d21c((int)uVar27,(int)((ulonglong)uVar27 >> 0x20),(int)uVar26,
                                      (int)((ulonglong)uVar26 >> 0x20));
                uVar27 = FUN_0800d6b8(fVar14);
                uVar9 = FUN_080153f4((int)uVar27,(int)((ulonglong)uVar27 >> 0x20),(int)uVar26,
                                     (int)((ulonglong)uVar26 >> 0x20));
                uVar9 = FUN_08015654(uVar9);
                uVar9 = FUN_0800d610(uVar9,extraout_s1_03);
                *(undefined4 *)(pcVar4 + 0xc) = uVar9;
                in_fpscr = uVar17;
              }
              else {
                *(float *)(pcVar4 + 0xc) = fVar20;
                in_fpscr = uVar17 | (uint)(*(float *)(iVar16 + 0x14) == fVar21) << 0x1e;
                if ((byte)(in_fpscr >> 0x1e) == 0) {
                  *(float *)(pcVar4 + 0x14) =
                       *(float *)(pcVar4 + 0x14) + (*(float *)(iVar16 + 0x14) - fVar21) * fVar19;
                }
                else {
                  *pcVar4 = '\x01';
                }
              }
            }
          }
          else {
            fVar18 = fVar18 + (fVar21 - fVar22) * fVar19;
            *(float *)(pcVar4 + 0x14) = fVar18;
            in_fpscr = uVar17 | (uint)(fVar18 == 0.0) << 0x1e | (uint)(0.0 <= fVar18) << 0x1d;
            bVar2 = (byte)(in_fpscr >> 0x18);
            if ((bool)(bVar2 >> 5 & 1) && !(bool)(bVar2 >> 6)) {
              *(float *)(pcVar4 + 0x18) = (fVar21 - fVar14) * fVar19;
              *(float *)(pcVar4 + 0xc) = fVar20;
              *pcVar4 = '\x03';
            }
            else {
              *pcVar4 = '\x02';
              uVar9 = FUN_0800d6b8(*(float *)(iVar16 + 0x14) -
                                   *(float *)(iVar16 + 0x1c) * 2.0 * *(float *)(iVar16 + 0x20));
              uVar9 = FUN_08015654(uVar9);
              uVar9 = FUN_0800d610(uVar9,extraout_s1_02);
              *(undefined4 *)(pcVar4 + 0x10) = uVar9;
              puVar5[1] = puVar5[1] | 8;
            }
          }
        }
        *(byte *)(iVar13 + 4) = *(byte *)(iVar13 + 4) | 8;
      }
      bVar2 = DAT_08012788[1];
      psVar12 = (short *)(puVar5 + (uint)bVar2 * 8 + 0x1a8);
      puVar5[(uint)bVar2 * 8 + 0x1ac] = *puVar5;
      iVar13 = *(int *)(pcVar4 + 0x50);
      fVar21 = *(float *)(iVar13 + 0x20);
      uVar17 = in_fpscr & 0xfffffff;
      fVar19 = DAT_080124fc;
      fVar14 = DAT_080124fc;
      fVar20 = DAT_080122f4;
      fVar18 = fVar21 - *(float *)(puVar5 + 0x10);
      if (fVar21 - *(float *)(puVar5 + 0x10) < 0.0) {
        fVar18 = DAT_080122f4;
      }
      do {
        cVar7 = *pcVar4;
        if (cVar7 == '\0') {
          fVar23 = *(float *)(iVar13 + 0x1c) * fVar14;
          fVar24 = *(float *)(pcVar4 + 8);
          uVar26 = FUN_0800d6b8(fVar21);
          uVar27 = FUN_0800d6b8(fVar14);
          uVar28 = FUN_0800d6b8(fVar24);
          uVar29 = FUN_0800d6b8(fVar23);
          uVar29 = FUN_0800d21c((int)uVar29,(int)((ulonglong)uVar29 >> 0x20),0,DAT_080127c0);
          uVar28 = FUN_080153f4((int)uVar29,(int)((ulonglong)uVar29 >> 0x20),(int)uVar28,
                                (int)((ulonglong)uVar28 >> 0x20));
          uVar27 = FUN_0800d21c((int)uVar28,(int)((ulonglong)uVar28 >> 0x20),(int)uVar27,
                                (int)((ulonglong)uVar27 >> 0x20));
          FUN_08015570((int)uVar26,(int)((ulonglong)uVar26 >> 0x20),(int)uVar27,
                       (int)((ulonglong)uVar27 >> 0x20));
          fVar22 = (float)FUN_0800d610();
          fVar21 = *(float *)(pcVar4 + 0x14);
          uVar17 = uVar17 & 0xfffffff;
          if (fVar21 <= fVar22) {
            *(float *)(pcVar4 + 8) = fVar24 + fVar23;
          }
          else {
            fVar22 = *(float *)(pcVar4 + 0xc);
            uVar26 = FUN_0800d6b8(*(float *)(iVar13 + 0x20) - fVar21);
            uVar26 = FUN_0800d21c((int)uVar26,(int)((ulonglong)uVar26 >> 0x20),0,0x40000000);
            uVar27 = FUN_0800d6b8(fVar24 + fVar22);
            FUN_0800d3c8((int)uVar26,(int)((ulonglong)uVar26 >> 0x20),(int)uVar27,
                         (int)((ulonglong)uVar27 >> 0x20));
            fVar14 = (float)FUN_0800d610();
            uVar17 = uVar17 & 0xfffffff | (uint)(fVar21 == *(float *)(pcVar4 + 0x18)) << 0x1e;
            if ((byte)(uVar17 >> 0x1e) == 0) {
              *pcVar4 = '\x01';
            }
            else {
              *pcVar4 = '\x02';
            }
            *(float *)(pcVar4 + 8) = fVar22;
            fVar22 = fVar21;
          }
        }
        else if (cVar7 == '\x01') {
          fVar22 = fVar21 - *(float *)(pcVar4 + 0xc) * fVar14;
          fVar23 = *(float *)(pcVar4 + 0x18);
          if (fVar22 < fVar23) {
            fVar14 = (fVar21 - fVar23) / *(float *)(pcVar4 + 0xc);
            *pcVar4 = '\x02';
            fVar22 = fVar23;
          }
        }
        else {
          fVar23 = *(float *)(iVar13 + 0x1c) * fVar14;
          if (cVar7 == '\x03') {
            fVar24 = (float)*(undefined8 *)(pcVar4 + 8);
            fVar25 = (float)((ulonglong)*(undefined8 *)(pcVar4 + 8) >> 0x20);
            uVar15 = uVar17 | (uint)(fVar23 < fVar24 - fVar25) << 0x1f;
            uVar17 = uVar15 | (uint)(NAN(fVar23) || NAN(fVar24 - fVar25)) << 0x1c;
            if ((byte)(uVar15 >> 0x1f) == ((byte)(uVar17 >> 0x1c) & 1)) {
              fVar22 = *(float *)(pcVar4 + 0x14);
              uVar26 = FUN_0800d6b8(*(float *)(iVar13 + 0x20) - fVar22);
              uVar26 = FUN_0800d21c((int)uVar26,(int)((ulonglong)uVar26 >> 0x20),0,0x40000000);
              uVar27 = FUN_0800d6b8(fVar24 + fVar25);
              FUN_0800d3c8((int)uVar26,(int)((ulonglong)uVar26 >> 0x20),(int)uVar27,
                           (int)((ulonglong)uVar27 >> 0x20));
              fVar14 = (float)FUN_0800d610();
              *pcVar4 = '\x01';
              *(float *)(pcVar4 + 8) = fVar25;
            }
            else {
              uVar26 = FUN_0800d6b8(fVar21);
              uVar27 = FUN_0800d6b8(fVar14);
              uVar28 = FUN_0800d6b8(fVar24);
              uVar29 = FUN_0800d6b8(fVar23);
              uVar29 = FUN_0800d21c((int)uVar29,(int)((ulonglong)uVar29 >> 0x20),0,DAT_080127bc);
              uVar28 = FUN_080153f4((int)uVar29,(int)((ulonglong)uVar29 >> 0x20),(int)uVar28,
                                    (int)((ulonglong)uVar28 >> 0x20));
              uVar27 = FUN_0800d21c((int)uVar28,(int)((ulonglong)uVar28 >> 0x20),(int)uVar27,
                                    (int)((ulonglong)uVar27 >> 0x20));
              FUN_08015570((int)uVar26,(int)((ulonglong)uVar26 >> 0x20),(int)uVar27,
                           (int)((ulonglong)uVar27 >> 0x20));
              fVar22 = (float)FUN_0800d610();
              *(float *)(pcVar4 + 8) = fVar24 - fVar23;
            }
          }
          else {
            fVar25 = *(float *)(pcVar4 + 4);
            fVar24 = *(float *)(pcVar4 + 8);
            if (fVar23 < fVar24) {
              uVar26 = FUN_0800d6b8(fVar21);
              uVar27 = FUN_0800d6b8(fVar14);
              uVar28 = FUN_0800d6b8(fVar24);
              uVar29 = FUN_0800d6b8(fVar23);
              uVar29 = FUN_0800d21c((int)uVar29,(int)((ulonglong)uVar29 >> 0x20),0,DAT_080127bc);
              uVar28 = FUN_080153f4((int)uVar29,(int)((ulonglong)uVar29 >> 0x20),(int)uVar28,
                                    (int)((ulonglong)uVar28 >> 0x20));
              uVar27 = FUN_0800d21c((int)uVar28,(int)((ulonglong)uVar28 >> 0x20),(int)uVar27,
                                    (int)((ulonglong)uVar27 >> 0x20));
              FUN_08015570((int)uVar26,(int)((ulonglong)uVar26 >> 0x20),(int)uVar27,
                           (int)((ulonglong)uVar27 >> 0x20));
              fVar22 = (float)FUN_0800d610();
              uVar17 = uVar17 & 0xfffffff;
              if (fVar25 < fVar22) {
                *(float *)(pcVar4 + 8) = fVar24 - fVar23;
                goto LAB_08012546;
              }
            }
            fVar22 = *(float *)(pcVar4 + 0x10);
            uVar26 = FUN_0800d6b8(fVar21 - fVar25);
            uVar26 = FUN_0800d21c((int)uVar26,(int)((ulonglong)uVar26 >> 0x20),0,0x40000000);
            uVar27 = FUN_0800d6b8(fVar24 + fVar22);
            FUN_0800d3c8((int)uVar26,(int)((ulonglong)uVar26 >> 0x20),(int)uVar27,
                         (int)((ulonglong)uVar27 >> 0x20));
            fVar14 = (float)FUN_0800d610();
            *(float *)(pcVar4 + 8) = fVar22;
            fVar22 = fVar25;
          }
        }
LAB_08012546:
        fVar20 = fVar20 + fVar14;
        uVar17 = uVar17 & 0xfffffff;
        if (fVar19 <= fVar20) {
          if (fVar22 <= fVar18) break;
          uVar26 = FUN_0800d6b8(fVar19);
          FUN_080153f4((int)uVar26,(int)((ulonglong)uVar26 >> 0x20),DAT_080127c4,DAT_080127c8);
          fVar19 = (float)FUN_0800d610();
        }
        fVar14 = fVar19 - fVar20;
        uVar17 = uVar17 & 0xfffffff;
        fVar21 = fVar22;
      } while (*(float *)(pcVar4 + 4) < fVar22);
      iVar13 = DAT_08012798;
      if ((*(char *)(*(int *)(pcVar4 + 0x54) + 0x11) != '\0') ||
         ((int)((uint)*(byte *)(DAT_08012798 + 4) << 0x1c) < 0)) {
        if ((*(byte *)(*(int *)(pcVar4 + 0x50) + 0x11) & 0x30) == 0) {
          *(undefined4 *)(DAT_08012798 + 0x10) = 0;
          pcVar4[0x20] = '\0';
          pcVar4[0x21] = '\0';
        }
        else {
          fVar19 = *(float *)(*(int *)(pcVar4 + 0x50) + 0x30);
          if (*(char *)(*(int *)(pcVar4 + 0x54) + 0x11) != '\0') {
            fVar19 = *(float *)(pcVar4 + 8) * *(float *)(pcVar4 + 0x1c) * fVar19;
          }
          uVar8 = FUN_08012822(fVar19);
          *(undefined2 *)(pcVar4 + 0x20) = uVar8;
        }
        *(byte *)(iVar13 + 4) = *(byte *)(iVar13 + 4) & 0xf7;
      }
      *(undefined2 *)(puVar5 + (uint)bVar2 * 8 + 0x1ae) = *(undefined2 *)(pcVar4 + 0x20);
      fVar21 = *(float *)(puVar5 + 0xc) * fVar22;
      uVar9 = FUN_0800d6b8(fVar21);
      uVar9 = FUN_08016864(uVar9);
      fVar19 = (float)FUN_0800d610(uVar9,extraout_s1_04);
      uVar9 = FUN_0800d6b8(*(undefined4 *)(puVar5 + 8));
      uVar9 = FUN_08016864(uVar9);
      fVar14 = (float)FUN_0800d610(uVar9,extraout_s1_05);
      *psVar12 = (short)(int)(fVar14 - fVar19);
      if ((((int)(fVar14 - fVar19) & 0xffffU) == 0) &&
         ((int)((uint)*(byte *)(iVar13 + 4) << 0x1e) < 0)) {
        *(byte *)(iVar13 + 4) = *(byte *)(iVar13 + 4) | 1;
        if ((int)((uint)(byte)puVar5[1] << 0x1d) < 0) {
          return in_r3;
        }
        puVar5[1] = puVar5[1] | 2;
        return in_r3;
      }
      fVar14 = (fVar20 + *(float *)(puVar5 + 4)) / (fVar14 - fVar21);
      uVar9 = FUN_0800d6b8(fVar14 * DAT_0801279c);
      uVar9 = FUN_08016864(uVar9);
      uVar15 = FUN_080168cc(uVar9,extraout_s1_06);
      if (uVar15 < 0xa41) {
        puVar5[(uint)bVar2 * 8 + 0x1ad] = 0;
      }
      else {
        if (uVar15 < 0x1482) {
          puVar5[(uint)bVar2 * 8 + 0x1ad] = 1;
        }
        else if (uVar15 < 0x2904) {
          puVar5[(uint)bVar2 * 8 + 0x1ad] = 2;
        }
        else {
          puVar5[(uint)bVar2 * 8 + 0x1ad] = 3;
        }
        uVar15 = uVar15 >> puVar5[(uint)bVar2 * 8 + 0x1ad];
        *psVar12 = *psVar12 << puVar5[(uint)bVar2 * 8 + 0x1ad];
      }
      if (uVar15 < 0x10000) {
        *(short *)(puVar5 + (uint)bVar2 * 8 + 0x1aa) = (short)uVar15;
      }
      else {
        *(undefined2 *)(puVar5 + (uint)bVar2 * 8 + 0x1aa) = 0xffff;
      }
      pcVar6 = DAT_08012788;
      pcVar1 = DAT_08012788 + 2;
      DAT_08012788[1] = *pcVar1;
      cVar7 = *pcVar1 + '\x01';
      pcVar6[2] = cVar7;
      if (cVar7 == '\x10') {
        pcVar6[2] = '\0';
      }
      *(float *)(*(int *)(pcVar4 + 0x50) + 0x20) = fVar22;
      *(float *)(puVar5 + 8) = fVar19;
      *(float *)(puVar5 + 4) = (fVar19 - fVar21) * fVar14;
      in_fpscr = uVar17 & 0xfffffff | (uint)(fVar22 == *(float *)(pcVar4 + 4)) << 0x1e;
      if ((byte)(in_fpscr >> 0x1e) != 0) {
        bVar2 = *(byte *)(iVar13 + 4);
        uVar17 = uVar17 & 0xfffffff | (uint)(fVar22 < 0.0) << 0x1f | (uint)(fVar22 == 0.0) << 0x1e;
        in_fpscr = uVar17 | (uint)NAN(fVar22) << 0x1c;
        bVar3 = (byte)(uVar17 >> 0x18);
        if (!(bool)(bVar3 >> 6 & 1) && bVar3 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1)) {
          *(byte *)(iVar13 + 4) = bVar2 | 1;
          if ((int)((uint)(byte)puVar5[1] << 0x1d) < 0) {
            return in_r3;
          }
          puVar5[1] = puVar5[1] | 2;
          return in_r3;
        }
        if ((int)((uint)bVar2 << 0x1d) < 0) {
          *(byte *)(iVar13 + 4) = bVar2 | 1;
          return in_r3;
        }
        pcVar4[0x50] = '\0';
        pcVar4[0x51] = '\0';
        pcVar4[0x52] = '\0';
        pcVar4[0x53] = '\0';
        FUN_080115ce();
      }
    }
  }
  return in_r3;
}



// ==== FUN_0801276c @ 0801276c ====

undefined4 FUN_0801276c(void)

{
  if ((*DAT_08012798 & 0x7c) != 0) {
    return *(undefined4 *)(DAT_08012784 + 0x2c);
  }
  return DAT_080127ac;
}



// ==== FUN_080127cc @ 080127cc ====

void FUN_080127cc(void)

{
  int iVar1;
  
  iVar1 = DAT_08012944;
  *DAT_08012948 = DAT_0801293c / (*(float *)(DAT_08012944 + 0x54) - *(float *)(DAT_08012944 + 0x58))
  ;
  FUN_08016762();
  if (*(ushort *)(iVar1 + 0x5c) - 0xb < 0x2705) {
    FUN_080167fe();
  }
  FUN_08012818();
  return;
}



// ==== FUN_08012808 @ 08012808 ====

undefined8 FUN_08012808(void)

{
  int iVar1;
  undefined4 unaff_r7;
  
  iVar1 = FUN_0801682e();
  return CONCAT44(unaff_r7,~-(uint)(iVar1 == 0) >> 0x1f);
}



// ==== FUN_08012818 @ 08012818 ====

void FUN_08012818(void)

{
  FUN_08016826(0);
  return;
}



// ==== thunk_FUN_08016826 @ 0801281e ====

void thunk_FUN_08016826(undefined4 param_1)

{
  *(undefined4 *)(*DAT_08016854 + 0x34) = param_1;
  return;
}



// ==== FUN_08012822 @ 08012822 ====

undefined2 FUN_08012822(void)

{
  int iVar1;
  undefined2 uVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  undefined4 extraout_s1;
  float fVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  iVar1 = DAT_0801294c;
  uVar7 = FUN_0800d6b8();
  uVar8 = FUN_0800d200(*(undefined1 *)(iVar1 + 9));
  uVar8 = FUN_0800d21c((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),DAT_08012950,DAT_08012954);
  FUN_0800d21c((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),(int)uVar7,(int)((ulonglong)uVar7 >> 0x20)
              );
  fVar3 = (float)FUN_0800d610();
  fVar5 = *(float *)(DAT_08012944 + 0x54);
  fVar6 = *(float *)(DAT_08012944 + 0x58);
  if ((fVar5 <= fVar6) || (fVar5 <= fVar3)) {
    *(float *)(iVar1 + 0x10) = fVar5;
    uVar2 = 1000;
  }
  else if (fVar6 < fVar3) {
    *(float *)(iVar1 + 0x10) = fVar3;
    uVar4 = FUN_0800d6b8((fVar3 - fVar6) * *DAT_08012948);
    uVar4 = FUN_08016590(uVar4);
    uVar2 = FUN_080152e0(uVar4,extraout_s1);
  }
  else if (fVar3 == 0.0) {
    uVar2 = 0;
    *(undefined4 *)(iVar1 + 0x10) = 0;
  }
  else {
    *(float *)(iVar1 + 0x10) = fVar6;
    uVar2 = 0;
  }
  return uVar2;
}



// ==== FUN_080128c8 @ 080128c8 ====

void FUN_080128c8(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = DAT_0801294c;
  if (*(char *)(DAT_0801294c + 1) == '\0') {
    if (param_2 == 0) {
      *(undefined4 *)(DAT_0801294c + 0x10) = 0;
      FUN_08012818();
    }
    else {
      if (((int)((uint)*(byte *)(DAT_08012944 + 0x30) << 0x1e) < 0) && (param_2 == 0x20)) {
        param_1 = DAT_08012940;
      }
      FUN_08012822(param_1);
      thunk_FUN_08016826();
    }
    *(undefined1 *)(iVar1 + 0xb) = 0;
  }
  return;
}



// ==== FUN_08012900 @ 08012900 ====

void FUN_08012900(float param_1,undefined4 param_2)

{
  uint in_fpscr;
  undefined4 uVar1;
  
  if (*DAT_0801294c != '\x02') {
    FUN_0800b6da();
    uVar1 = VectorUnsignedToFloat((int)param_1 & 0xffff,(byte)(in_fpscr >> 0x16) & 3);
    FUN_080128c8(uVar1,param_2);
    return;
  }
  return;
}



// ==== FUN_08012958 @ 08012958 ====

void FUN_08012958(void)

{
  undefined4 unaff_r7;
  
  FUN_08015b2e();
  FUN_08012982(unaff_r7);
  return;
}



// ==== FUN_08012964 @ 08012964 ====

uint FUN_08012964(void)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  iVar1 = FUN_08015b9e();
  if (iVar1 == 1) {
    uVar2 = 0x40;
  }
  iVar1 = FUN_08015ba6();
  if (iVar1 == 1) {
    uVar2 = uVar2 | 0x80;
  }
  return uVar2;
}



// ==== FUN_08012982 @ 08012982 ====

void FUN_08012982(void)

{
  FUN_08015b80(0);
  return;
}



// ==== FUN_08012988 @ 08012988 ====

void FUN_08012988(uint param_1)

{
  int iVar1;
  
  iVar1 = DAT_080129c8;
  if (*(char *)(DAT_080129c8 + 1) == '\0') {
    if ((param_1 & 0xc0) == 0) {
      FUN_08015b80(0);
    }
    else {
      FUN_08015b80(1);
    }
    *(undefined1 *)(iVar1 + 0xb) = 0;
  }
  return;
}



// ==== FUN_080129ac @ 080129ac ====

void FUN_080129ac(undefined4 param_1)

{
  if (*DAT_080129c8 != '\x02') {
    FUN_0800b6da();
    FUN_08012988(param_1);
    return;
  }
  return;
}



// ==== FUN_080129cc @ 080129cc ====

undefined8 FUN_080129cc(int param_1,byte *param_2,float *param_3,undefined4 param_4)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  byte bVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  char cVar11;
  uint in_fpscr;
  float fVar12;
  undefined8 uVar13;
  
  pcVar8 = (char *)(param_1 + (uint)*param_2);
  pcVar9 = pcVar8 + 1;
  cVar4 = *pcVar8;
  bVar2 = false;
  if (cVar4 == '-') {
    bVar2 = true;
    cVar4 = *pcVar9;
    pcVar10 = pcVar8 + 2;
  }
  else {
    pcVar10 = pcVar9;
    if (cVar4 == '+') {
      pcVar10 = pcVar8 + 2;
      cVar4 = *pcVar9;
    }
  }
  iVar6 = 0;
  cVar11 = '\0';
  bVar7 = 0;
  bVar1 = false;
  do {
    uVar5 = (uint)(byte)(cVar4 - 0x30);
    if (uVar5 < 10) {
      bVar7 = bVar7 + 1;
      if (bVar7 < 9) {
        if (bVar1) {
          cVar11 = cVar11 + -1;
        }
        iVar6 = uVar5 + iVar6 * 10;
      }
      else if (!bVar1) {
        cVar11 = cVar11 + '\x01';
      }
    }
    else {
      if ((uVar5 != 0xfe) || (bVar1)) {
        if (bVar7 == 0) {
          uVar3 = 0;
        }
        else {
          fVar12 = (float)VectorUnsignedToFloat(iVar6,(byte)(in_fpscr >> 0x16) & 3);
          if (fVar12 != 0.0) {
            for (; cVar11 < -1; cVar11 = cVar11 + '\x02') {
              uVar13 = FUN_0800d6b8(fVar12);
              FUN_0800d21c((int)uVar13,(int)((ulonglong)uVar13 >> 0x20),DAT_08012c44,DAT_08012c48);
              fVar12 = (float)FUN_0800d610();
            }
            if (cVar11 < '\0') {
              uVar13 = FUN_0800d6b8(fVar12);
              FUN_0800d21c((int)uVar13,(int)((ulonglong)uVar13 >> 0x20),DAT_08012c4c,DAT_08012c50);
              fVar12 = (float)FUN_0800d610();
            }
            else {
              for (; '\0' < cVar11; cVar11 = cVar11 + -1) {
                fVar12 = fVar12 * 10.0;
              }
            }
          }
          if (bVar2) {
            *param_3 = -fVar12;
          }
          else {
            *param_3 = fVar12;
          }
          *param_2 = ((char)pcVar10 - (char)param_1) - 1;
          uVar3 = 1;
        }
        return CONCAT44(param_4,uVar3);
      }
      bVar1 = true;
    }
    cVar4 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while( true );
}



// ==== FUN_08012adc @ 08012adc ====

void FUN_08012adc(float param_1,char param_2)

{
  int iVar1;
  short sVar2;
  undefined4 uVar3;
  undefined4 extraout_s1;
  
  uVar3 = FUN_0800d6b8(param_1 * 20.0);
  uVar3 = FUN_08016864(uVar3);
  sVar2 = FUN_080152e0(uVar3,extraout_s1);
  iVar1 = DAT_08012c54;
  while ((sVar2 != 0 && (*(char *)(iVar1 + 1) == '\0'))) {
    if (param_2 == '\0') {
      FUN_0800b714();
    }
    else {
      FUN_0800b72c();
      if ((int)((uint)*(byte *)(iVar1 + 2) << 0x1e) < 0) {
        return;
      }
    }
    thunk_FUN_08015da6(0x32);
    sVar2 = sVar2 + -1;
  }
  return;
}



// ==== thunk_FUN_08015da6 @ 08012b36 ====

void thunk_FUN_08015da6(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_1 != 0) {
    FUN_08015fc8();
    FUN_080164d4(param_1,0);
    iVar1 = FUN_08015fd4();
  }
  if (iVar1 == 0) {
    *DAT_080164c8 = 0x10000000;
    DataSynchronizationBarrier(0xf);
    InstructionSynchronizationBarrier(0xf);
  }
  return;
}



// ==== FUN_08012b3a @ 08012b3a ====

undefined4 FUN_08012b3a(void)

{
  undefined4 uVar1;
  undefined4 unaff_r7;
  undefined8 in_d0;
  float fVar2;
  undefined4 extraout_s1;
  
  fVar2 = (float)((ulonglong)in_d0 >> 0x20);
  uVar1 = FUN_0800d6b8((float)in_d0 * (float)in_d0 + fVar2 * fVar2);
  uVar1 = FUN_08015654(uVar1);
  FUN_0800d610(uVar1,extraout_s1);
  return unaff_r7;
}



// ==== FUN_08012b64 @ 08012b64 ====

void FUN_08012b64(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  float fVar3;
  float *pfVar4;
  float fVar5;
  undefined4 extraout_s1;
  
  fVar3 = DAT_08012c3c;
  for (iVar1 = 0; iVar1 < 3; iVar1 = iVar1 + 1) {
    fVar5 = *(float *)(param_1 + iVar1 * 4);
    if (fVar5 != 0.0) {
      fVar3 = fVar3 + fVar5 * fVar5;
    }
  }
  uVar2 = FUN_0800d6b8(fVar3);
  uVar2 = FUN_08015654(uVar2);
  fVar3 = (float)FUN_0800d610(uVar2,extraout_s1);
  for (iVar1 = 0; iVar1 < 3; iVar1 = iVar1 + 1) {
    pfVar4 = (float *)(param_1 + iVar1 * 4);
    *pfVar4 = *pfVar4 * (1.0 / fVar3);
  }
  return;
}



// ==== FUN_08012bcc @ 08012bcc ====

undefined4 FUN_08012bcc(int param_1,int param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  float fVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar1 = DAT_08012c40;
  for (iVar3 = 0; iVar3 < 3; iVar3 = iVar3 + 1) {
    fVar5 = *(float *)(param_2 + iVar3 * 4);
    cVar4 = 0.0 <= fVar5;
    if (fVar5 != 0.0) {
      uVar6 = FUN_0800d6b8(*(float *)(param_1 + iVar3 * 4) / fVar5);
      uVar2 = (uint)((ulonglong)uVar6 >> 0x20) & 0x7fffffff;
      uVar7 = FUN_0800d6b8(uVar1);
      FUN_08015758((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),(int)uVar6,uVar2);
      if (cVar4 != '\0') {
        uVar1 = FUN_0800d610((int)uVar6,uVar2);
      }
    }
  }
  return uVar1;
}



// ==== FUN_08012c58 @ 08012c58 ====

longlong FUN_08012c58(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = DAT_08012e20;
  *(undefined1 *)(DAT_08012e20 + 0x1a) = 0;
  FUN_08012de6(0x8000000,0x8000,param_3,param_4,param_3,param_4);
  FUN_080168f0();
  FUN_0800bff8();
  uVar2 = 1;
  FUN_08015c18(&LAB_08012cec_1,s_grbl_task_08012e70,0xc00,0,1,iVar1 + 0x1c);
  FUN_0801690c();
  return (ulonglong)uVar2 << 0x20;
}



// ==== FUN_08012c96 @ 08012c96 ====

void FUN_08012c96(void)

{
  char *pcVar1;
  uint *puVar2;
  uint uVar3;
  
  do {
    FUN_08010dd8();
    puVar2 = DAT_08012e28;
    pcVar1 = DAT_08012e24;
    if (*DAT_08012e24 != '\0') {
      uVar3 = *DAT_08012e28;
      *DAT_08012e28 = uVar3 + 1;
      if (0x13 < uVar3 + 1) {
        *puVar2 = 0;
        *pcVar1 = '\0';
        FUN_08012edc();
      }
    }
    FUN_08015da6(10);
  } while( true );
}



// ==== FUN_08012cc4 @ 08012cc4 ====

undefined8 FUN_08012cc4(void)

{
  undefined4 uVar1;
  
  *DAT_08012e24 = 0;
  *DAT_08012e28 = 0;
  uVar1 = DAT_08012e2c;
  FUN_08015c18(DAT_08012e30,s_timeout_task_08012e7c,0x400,0);
  return CONCAT44(uVar1,3);
}



// ==== thunk_FUN_08015da6 @ 08012dde ====

void thunk_FUN_08015da6(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_1 != 0) {
    FUN_08015fc8();
    FUN_080164d4(param_1,0);
    iVar1 = FUN_08015fd4();
  }
  if (iVar1 == 0) {
    *DAT_080164c8 = 0x10000000;
    DataSynchronizationBarrier(0xf);
    InstructionSynchronizationBarrier(0xf);
  }
  return;
}



// ==== thunk_FUN_08015da6 @ 08012de2 ====

void thunk_FUN_08015da6(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_1 != 0) {
    FUN_08015fc8();
    FUN_080164d4(param_1,0);
    iVar1 = FUN_08015fd4();
  }
  if (iVar1 == 0) {
    *DAT_080164c8 = 0x10000000;
    DataSynchronizationBarrier(0xf);
    InstructionSynchronizationBarrier(0xf);
  }
  return;
}



// ==== FUN_08012de6 @ 08012de6 ====

void FUN_08012de6(uint param_1,uint param_2)

{
  *DAT_08012e50 = param_1 | param_2 & DAT_08012e4c;
  return;
}



// ==== FUN_08012df2 @ 08012df2 ====

void FUN_08012df2(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = 0;
  uVar1 = DAT_08012e54[1];
  do {
    do {
      uVar3 = DAT_08012e54[1];
    } while (uVar3 == uVar1);
    if (uVar3 < uVar1) {
      uVar2 = (uVar1 + uVar2) - uVar3;
    }
    else {
      uVar2 = uVar1 + ((*DAT_08012e54 + uVar2) - uVar3);
    }
    uVar1 = uVar3;
  } while (uVar2 < (uint)(param_1 * 0x54));
  return;
}



// ==== FUN_08012e8c @ 08012e8c ====

/* WARNING: Removing unreachable block (ram,0x08018836) */
/* WARNING: Removing unreachable block (ram,0x08018858) */
/* WARNING: Removing unreachable block (ram,0x08018830) */
/* WARNING: Removing unreachable block (ram,0x08018860) */
/* WARNING: Removing unreachable block (ram,0x0801888e) */
/* WARNING: Removing unreachable block (ram,0x0801887a) */
/* WARNING: Removing unreachable block (ram,0x08018898) */
/* WARNING: Removing unreachable block (ram,0x080188a8) */
/* WARNING: Removing unreachable block (ram,0x0801883a) */

void FUN_08012e8c(short param_1,char *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 extraout_r2;
  undefined4 extraout_r3;
  undefined4 unaff_r4;
  int iVar2;
  int iVar3;
  undefined4 unaff_r5;
  char cVar4;
  uint uVar5;
  bool bVar6;
  undefined4 uVar7;
  
  FUN_0800b6da();
  uVar1 = 0x50;
  iVar2 = param_1 * 0x51 + 0x300;
  iVar3 = 0x50;
  uVar5 = 0;
  bVar6 = false;
  uVar7 = param_4;
  while (!bVar6) {
    uVar5 = (uVar5 << 1 | (uVar5 << 1 & 0xff) >> 7) + *param_2 * 2;
    FUN_08016b68(iVar2,*param_2,uVar1,param_4,uVar7,unaff_r4,unaff_r5);
    param_2 = param_2 + 1;
    iVar2 = iVar2 + 1;
    iVar3 = iVar3 + -1;
    uVar1 = extraout_r2;
    param_4 = extraout_r3;
    bVar6 = iVar3 == 0;
  }
  FUN_08016b68(iVar2,uVar5 & 0xff,uVar1,param_4,uVar7,unaff_r4,unaff_r5);
  FUN_08018726(0);
  iVar3 = 0;
  iVar2 = DAT_08016968;
  cVar4 = '\x04';
  while( true ) {
    if (cVar4 == '\0') break;
    FUN_08018778(iVar2,iVar3,0x100);
    iVar3 = iVar3 + 0x100;
    iVar2 = iVar2 + 0x100;
    cVar4 = cVar4 + -1;
  }
  FUN_08018778(iVar2,iVar3,0);
  return;
}



// ==== FUN_08012eae @ 08012eae ====

/* WARNING: Removing unreachable block (ram,0x08018836) */
/* WARNING: Removing unreachable block (ram,0x08018858) */
/* WARNING: Removing unreachable block (ram,0x08018830) */
/* WARNING: Removing unreachable block (ram,0x08018860) */
/* WARNING: Removing unreachable block (ram,0x0801888e) */
/* WARNING: Removing unreachable block (ram,0x0801887a) */
/* WARNING: Removing unreachable block (ram,0x08018898) */
/* WARNING: Removing unreachable block (ram,0x080188a8) */
/* WARNING: Removing unreachable block (ram,0x0801883a) */

void FUN_08012eae(char *param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  bool bVar5;
  
  iVar2 = 0x3ae;
  iVar1 = 0x50;
  uVar4 = 0;
  bVar5 = false;
  while (!bVar5) {
    uVar4 = (uVar4 << 1 | (uVar4 << 1 & 0xff) >> 7) + *param_1 * 2;
    FUN_08016b68(iVar2,*param_1);
    param_1 = param_1 + 1;
    iVar2 = iVar2 + 1;
    iVar1 = iVar1 + -1;
    bVar5 = iVar1 == 0;
  }
  FUN_08016b68(iVar2,uVar4 & 0xff);
  FUN_08018726(0);
  iVar2 = 0;
  iVar1 = DAT_08016968;
  cVar3 = '\x04';
  while( true ) {
    if (cVar3 == '\0') break;
    FUN_08018778(iVar1,iVar2,0x100);
    iVar2 = iVar2 + 0x100;
    iVar1 = iVar1 + 0x100;
    cVar3 = cVar3 + -1;
  }
  FUN_08018778(iVar1,iVar2,0);
  return;
}



// ==== FUN_08012eba @ 08012eba ====

/* WARNING: Removing unreachable block (ram,0x08018836) */
/* WARNING: Removing unreachable block (ram,0x08018858) */
/* WARNING: Removing unreachable block (ram,0x08018830) */
/* WARNING: Removing unreachable block (ram,0x08018860) */
/* WARNING: Removing unreachable block (ram,0x0801888e) */
/* WARNING: Removing unreachable block (ram,0x0801887a) */
/* WARNING: Removing unreachable block (ram,0x08018898) */
/* WARNING: Removing unreachable block (ram,0x080188a8) */
/* WARNING: Removing unreachable block (ram,0x0801883a) */

void FUN_08012eba(short param_1,char *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 extraout_r2;
  undefined4 extraout_r3;
  undefined4 unaff_r4;
  int iVar2;
  int iVar3;
  undefined4 unaff_r5;
  char cVar4;
  uint uVar5;
  bool bVar6;
  undefined4 uVar7;
  
  FUN_0800b6da();
  uVar1 = 0xc;
  iVar2 = param_1 * 0xd + 0x200;
  iVar3 = 0xc;
  uVar5 = 0;
  bVar6 = false;
  uVar7 = param_4;
  while (!bVar6) {
    uVar5 = (uVar5 << 1 | (uVar5 << 1 & 0xff) >> 7) + *param_2 * 2;
    FUN_08016b68(iVar2,*param_2,uVar1,param_4,uVar7,unaff_r4,unaff_r5);
    param_2 = param_2 + 1;
    iVar2 = iVar2 + 1;
    iVar3 = iVar3 + -1;
    uVar1 = extraout_r2;
    param_4 = extraout_r3;
    bVar6 = iVar3 == 0;
  }
  FUN_08016b68(iVar2,uVar5 & 0xff,uVar1,param_4,uVar7,unaff_r4,unaff_r5);
  FUN_08018726(0);
  iVar3 = 0;
  iVar2 = DAT_08016968;
  cVar4 = '\x04';
  while( true ) {
    if (cVar4 == '\0') break;
    FUN_08018778(iVar2,iVar3,0x100);
    iVar3 = iVar3 + 0x100;
    iVar2 = iVar2 + 0x100;
    cVar4 = cVar4 + -1;
  }
  FUN_08018778(iVar2,iVar3,0);
  return;
}



// ==== FUN_08012edc @ 08012edc ====

/* WARNING: Removing unreachable block (ram,0x08018836) */
/* WARNING: Removing unreachable block (ram,0x08018858) */
/* WARNING: Removing unreachable block (ram,0x08018830) */
/* WARNING: Removing unreachable block (ram,0x08018860) */
/* WARNING: Removing unreachable block (ram,0x0801888e) */
/* WARNING: Removing unreachable block (ram,0x0801887a) */
/* WARNING: Removing unreachable block (ram,0x08018898) */
/* WARNING: Removing unreachable block (ram,0x080188a8) */
/* WARNING: Removing unreachable block (ram,0x0801883a) */

void FUN_08012edc(void)

{
  undefined4 uVar1;
  undefined4 extraout_r2;
  undefined4 extraout_r3;
  int iVar2;
  int iVar3;
  char *pcVar4;
  char cVar5;
  undefined4 unaff_r7;
  uint uVar6;
  bool bVar7;
  undefined4 uVar8;
  
  FUN_08016b68(0,0x19);
  uVar1 = 0x78;
  iVar3 = 1;
  iVar2 = 0x78;
  uVar6 = 0;
  bVar7 = false;
  pcVar4 = DAT_080134c8;
  uVar8 = unaff_r7;
  while (!bVar7) {
    uVar6 = (uVar6 << 1 | (uVar6 << 1 & 0xff) >> 7) + *pcVar4 * 2;
    FUN_08016b68(iVar3,*pcVar4,uVar1,unaff_r7,uVar8);
    pcVar4 = pcVar4 + 1;
    iVar3 = iVar3 + 1;
    iVar2 = iVar2 + -1;
    uVar1 = extraout_r2;
    unaff_r7 = extraout_r3;
    bVar7 = iVar2 == 0;
  }
  FUN_08016b68(iVar3,uVar6 & 0xff,uVar1,unaff_r7,uVar8);
  FUN_08018726(0);
  iVar3 = 0;
  iVar2 = DAT_08016968;
  cVar5 = '\x04';
  while( true ) {
    if (cVar5 == '\0') break;
    FUN_08018778(iVar2,iVar3,0x100);
    iVar3 = iVar3 + 0x100;
    iVar2 = iVar2 + 0x100;
    cVar5 = cVar5 + -1;
  }
  FUN_08018778(iVar2,iVar3,0);
  return;
}



// ==== FUN_08012ef8 @ 08012ef8 ====

undefined8 FUN_08012ef8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  byte bVar6;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  puVar4 = DAT_080134c8;
  uStack_18 = param_2;
  uStack_14 = param_3;
  uStack_10 = param_4;
  if (param_1 << 0x1f < 0) {
    puVar5 = DAT_080134c8 + 0xc;
    *(undefined1 *)puVar5 = 0;
    *(undefined1 *)((int)puVar4 + 0x31) = 10;
    *(undefined1 *)((int)puVar4 + 0x32) = 0x19;
    *(undefined1 *)((int)puVar4 + 0x33) = 0;
    *(undefined1 *)(puVar4 + 0xd) = 4;
    *(undefined1 *)puVar5 = 0x40;
    *(undefined1 *)((int)puVar4 + 0x35) = 1;
    puVar4[0xe] = DAT_080134cc;
    puVar4[0xf] = DAT_080134d0;
    *(undefined1 *)puVar5 = 0x58;
    *(undefined1 *)(puVar4 + 0x10) = 7;
    puVar4[0x11] = DAT_080134d4;
    puVar4[0x12] = DAT_080134d8;
    *(undefined2 *)(puVar4 + 0x13) = 0xfa;
    puVar4[0x14] = DAT_080134dc;
    puVar4[0x15] = DAT_080134e0;
    puVar4[0x16] = 0;
    *(undefined1 *)puVar5 = 0x5a;
    uVar1 = DAT_0801310c;
    *puVar4 = DAT_0801310c;
    puVar4[1] = uVar1;
    uVar2 = DAT_08013110;
    puVar4[2] = DAT_08013110;
    uVar3 = DAT_08013114;
    puVar4[3] = DAT_08013114;
    puVar4[4] = uVar3;
    puVar4[5] = DAT_080134e4;
    uVar3 = DAT_08013118;
    puVar4[6] = DAT_08013118;
    puVar4[7] = uVar3;
    puVar4[8] = DAT_080134e8;
    uVar3 = DAT_0801311c;
    puVar4[9] = DAT_0801311c;
    puVar4[10] = uVar3;
    puVar4[0xb] = DAT_080134ec;
    *(undefined2 *)(puVar4 + 0x17) = 1000;
    *(undefined1 *)((int)puVar4 + 0x5e) = 1;
    *(undefined1 *)((int)puVar4 + 0x5f) = 0;
    *(undefined1 *)((int)puVar4 + 0x61) = 0;
    *(undefined1 *)(puVar4 + 0x18) = 1;
    *(undefined1 *)((int)puVar4 + 0x62) = 0;
    puVar4[0x19] = uVar1;
    puVar4[0x1a] = uVar2;
    puVar4[0x1b] = 0x1c200;
    puVar4[0x1c] = 0x1c200;
    puVar4[0x1d] = 0xe1000;
    FUN_08012edc();
  }
  if (param_1 << 0x1e < 0) {
    FUN_0800a350(&uStack_18,0xc,0);
    for (bVar6 = 0; bVar6 < 8; bVar6 = bVar6 + 1) {
      FUN_08012eba(bVar6,&uStack_18);
    }
  }
  if (param_1 << 0x1d < 0) {
    FUN_08016b68(0x300,0);
    FUN_08016b68(0x301,0);
    FUN_08016b68(0x351,0);
    FUN_08016b68(0x352,0);
  }
  if (param_1 << 0x1c < 0) {
    FUN_08016b68(0x3ae,0);
    FUN_08016b68(0x3af,0);
  }
  return CONCAT44(uStack_14,uStack_18);
}



// ==== FUN_08013056 @ 08013056 ====

longlong FUN_08013056(undefined4 param_1,undefined1 *param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  
  iVar1 = FUN_08016bb8(param_2,(short)param_1 * 0x51 + 0x300,0x50);
  if (iVar1 == 0) {
    *param_2 = 0;
    FUN_08012e8c(param_1,param_2);
    return (ulonglong)param_4 << 0x20;
  }
  return CONCAT44(param_4,1);
}



// ==== FUN_08013088 @ 08013088 ====

undefined4 FUN_08013088(undefined1 *param_1)

{
  int iVar1;
  
  iVar1 = FUN_08016bb8(param_1,0x3ae,0x50);
  if (iVar1 == 0) {
    *param_1 = 0;
    FUN_08012eae(param_1);
    return 0;
  }
  return 1;
}



// ==== FUN_080130ac @ 080130ac ====

longlong FUN_080130ac(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  
  iVar1 = FUN_08016bb8(param_2,(short)param_1 * 0xd + 0x200,0xc);
  if (iVar1 == 0) {
    FUN_0800a350(param_2,0xc,0);
    FUN_08012eba(param_1,param_2);
    return (ulonglong)param_4 << 0x20;
  }
  return CONCAT44(param_4,1);
}



// ==== FUN_080130e4 @ 080130e4 ====

longlong FUN_080130e4(void)

{
  int iVar1;
  uint unaff_r7;
  
  iVar1 = thunk_FUN_08016962(0);
  if (iVar1 == 0x19) {
    iVar1 = FUN_08016bb8(DAT_080134c8,1,0x78);
    return CONCAT44(unaff_r7,~-(uint)(iVar1 == 0) >> 0x1f);
  }
  return (ulonglong)unaff_r7 << 0x20;
}



// ==== FUN_08013120 @ 08013120 ====

undefined4 FUN_08013120(float param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  undefined1 *puVar3;
  byte bVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 extraout_s1;
  
  if ((int)((uint)(param_1 < 0.0) << 0x1f) < 0) {
    uVar5 = 4;
  }
  else {
    if (param_2 < 100) {
      uVar5 = FUN_0800d6b8();
      uVar5 = FUN_08015298(uVar5);
      bVar4 = FUN_080152e0(uVar5,extraout_s1);
      iVar2 = DAT_080134c8;
      if (param_2 == 0) {
        if (bVar4 < 3) {
          return 6;
        }
        DAT_080134f4[1] = bVar4;
      }
      else if (param_2 == 1) {
        DAT_080134f4[2] = bVar4;
      }
      else if (param_2 == 2) {
        DAT_080134f4[3] = bVar4;
        FUN_08011d56();
      }
      else if (param_2 == 3) {
        DAT_080134f4[4] = bVar4;
        FUN_08011d56();
      }
      else if (param_2 == 4) {
        if (bVar4 == 0) {
          *DAT_080134f4 = *DAT_080134f4 & 0xfb;
        }
        else {
          *DAT_080134f4 = *DAT_080134f4 | 4;
        }
      }
      else if (param_2 == 5) {
        if (bVar4 == 0) {
          *DAT_080134f4 = *DAT_080134f4 & 0xbf;
        }
        else {
          *DAT_080134f4 = *DAT_080134f4 | 0x40;
        }
      }
      else if (param_2 == 6) {
        if (bVar4 == 0) {
          *DAT_080134f4 = *DAT_080134f4 & 0x7f;
        }
        else {
          *DAT_080134f4 = *DAT_080134f4 | 0x80;
        }
        FUN_0800fdfc(0);
      }
      else if (param_2 == 10) {
        DAT_080134f4[5] = bVar4;
      }
      else if (param_2 == 0xb) {
        *(float *)(DAT_080134f4 + 8) = param_1;
      }
      else if (param_2 == 0xc) {
        *(float *)(DAT_080134f4 + 0xc) = param_1;
      }
      else if (param_2 == 0xd) {
        if (bVar4 == 0) {
          *DAT_080134f4 = *DAT_080134f4 & 0xfe;
        }
        else {
          *DAT_080134f4 = *DAT_080134f4 | 1;
        }
        FUN_0800e84c();
      }
      else if (param_2 == 0x14) {
        bVar1 = *DAT_080134f4;
        if (bVar4 == 0) {
          *DAT_080134f4 = bVar1 & 0xdf;
        }
        else {
          if (-1 < (int)((uint)bVar1 << 0x1b)) {
            return 10;
          }
          *DAT_080134f4 = bVar1 | 0x20;
        }
      }
      else if (param_2 == 0x15) {
        if (bVar4 == 0) {
          *DAT_080134f4 = *DAT_080134f4 & 0xf7;
        }
        else {
          *DAT_080134f4 = *DAT_080134f4 | 8;
        }
        FUN_0800ff1c();
      }
      else if (param_2 == 0x16) {
        if (bVar4 == 0) {
          *DAT_080134f4 = *DAT_080134f4 & 0xcf;
        }
        else {
          *DAT_080134f4 = *DAT_080134f4 | 0x10;
        }
      }
      else if (param_2 == 0x17) {
        DAT_080134f4[0x10] = bVar4;
      }
      else if (param_2 == 0x18) {
        *(float *)(DAT_080134f4 + 0x14) = param_1;
      }
      else if (param_2 == 0x19) {
        *(float *)(DAT_080134f4 + 0x18) = param_1;
      }
      else if (param_2 == 0x1a) {
        *(ushort *)(DAT_080134f4 + 0x1c) = (ushort)bVar4;
      }
      else if (param_2 == 0x1b) {
        *(float *)(DAT_080134f4 + 0x20) = param_1;
      }
      else if (param_2 == 0x1c) {
        if (DAT_080134c0 <= param_1) {
          param_1 = DAT_080134c4;
        }
        if ((int)((uint)(param_1 < 10.0) << 0x1f) < 0) {
          param_1 = 10.0;
        }
        *(short *)(DAT_080134f4 + 0x2c) = (short)(int)param_1;
        FUN_080167fe((int)param_1 & 0xffff);
      }
      else if (param_2 == 0x1e) {
        *(float *)(DAT_080134f4 + 0x24) = param_1;
        FUN_080127cc();
      }
      else if (param_2 == 0x1f) {
        *(float *)(DAT_080134f4 + 0x28) = param_1;
        FUN_080127cc();
      }
      else if (param_2 == 0x20) {
        if (bVar4 == 0) {
          *DAT_080134f4 = *DAT_080134f4 & 0xfd;
        }
        else {
          *DAT_080134f4 = *DAT_080134f4 | 2;
        }
      }
      else if (param_2 == 0x29) {
        *(char *)(DAT_080134c8 + 0x5e) = (char)(int)param_1;
      }
      else if (param_2 == 0x2a) {
        *(char *)(DAT_080134f8 + 1) = (char)(int)param_1;
      }
      else if (param_2 == 0x2b) {
        *(char *)(DAT_080134f8 + 3) = (char)(int)param_1;
      }
      else if (param_2 == 0x2c) {
        *(char *)(DAT_080134f8 + 2) = (char)(int)param_1;
      }
      else if (param_2 == 0x2d) {
        *(char *)(DAT_080134c8 + 0x62) = (char)(int)param_1;
        if (((int)param_1 & 0xffU) == 0) {
          *(undefined4 *)(iVar2 + 4) = *(undefined4 *)(iVar2 + 100);
        }
        else {
          *(undefined4 *)(iVar2 + 4) = *(undefined4 *)(iVar2 + 0x68);
        }
        FUN_08015980();
      }
      else if (param_2 == 0x5a) {
        *(float *)(DAT_080134c8 + 100) = param_1;
        FUN_0801349e();
      }
      else {
        if (param_2 != 0x5b) {
          return 3;
        }
        *(float *)(DAT_080134fc + 4) = param_1;
        FUN_080134ae();
      }
    }
    else {
      uVar6 = param_2 - 100;
      bVar4 = 0;
      while (bVar4 < 4) {
        uVar7 = uVar6 & 0xff;
        if (uVar7 < 3) {
          switch(bVar4) {
          case 0:
            *(float *)(DAT_080134c8 + uVar7 * 4) = param_1;
            break;
          case 1:
            *(float *)(DAT_080134c8 + uVar7 * 4 + 0xc) = param_1;
            break;
          case 2:
            *(float *)(DAT_080134c8 + uVar7 * 4 + 0x18) = param_1 * DAT_08013454 * DAT_08013454;
            break;
          case 3:
            *(float *)(DAT_080134c8 + uVar7 * 4 + 0x24) = -param_1;
          }
          break;
        }
        bVar4 = bVar4 + 1;
        if (uVar7 < 10) {
          return 3;
        }
        if (bVar4 == 4) {
          return 3;
        }
        uVar6 = uVar6 - 10;
      }
    }
    puVar3 = DAT_080134f0;
    *DAT_080134f0 = 1;
    *(undefined4 *)(puVar3 + 4) = 0;
    uVar5 = 0;
  }
  return uVar5;
}



// ==== FUN_0801349e @ 0801349e ====

void FUN_0801349e(void)

{
  if (*(char *)(DAT_080134c8 + 0x62) == '\0') {
    *(undefined4 *)(DAT_080134c8 + 4) = *(undefined4 *)(DAT_080134c8 + 100);
  }
  return;
}



// ==== FUN_080134ae @ 080134ae ====

void FUN_080134ae(void)

{
  if (*(char *)(DAT_080134c8 + 0x62) != '\0') {
    *(undefined4 *)(DAT_080134c8 + 4) = *(undefined4 *)(DAT_080134c8 + 0x68);
  }
  return;
}



// ==== FUN_08013500 @ 08013500 ====

undefined4 FUN_08013500(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 unaff_r7;
  
  iVar1 = FUN_080130e4();
  if (iVar1 == 0) {
    FUN_0800bf78(0,7);
    uVar2 = FUN_08012ef8(0xff,unaff_r7);
    return uVar2;
  }
  return unaff_r7;
}



// ==== thunk_FUN_08015aba @ 0801351c ====

undefined4 thunk_FUN_08015aba(int param_1)

{
  if (param_1 == 0) {
    return 1;
  }
  if (param_1 == 1) {
    return 2;
  }
  if (param_1 == 2) {
    return 4;
  }
  return 8;
}



// ==== FUN_08013520 @ 08013520 ====

undefined4 FUN_08013520(int param_1)

{
  if (param_1 == 0) {
    return 1;
  }
  if (param_1 == 1) {
    return 2;
  }
  return 4;
}



// ==== thunk_FUN_08015a9e @ 08013534 ====

undefined4 thunk_FUN_08015a9e(int param_1)

{
  if (param_1 == 0) {
    return 1;
  }
  if (param_1 == 1) {
    return 2;
  }
  if (param_1 == 2) {
    return 4;
  }
  return 8;
}



// ==== FUN_08013538 @ 08013538 ====

uint FUN_08013538(uint param_1)

{
  return param_1 | 0x20;
}



// ==== FUN_0801353e @ 0801353e ====

/* WARNING: Type propagation algorithm not settling */

int FUN_0801353e(code *param_1,int param_2,byte *param_3,int *param_4,undefined1 param_5)

{
  short sVar1;
  code *pcVar2;
  code *pcVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  undefined2 *puVar7;
  undefined1 *puVar8;
  int *piVar9;
  undefined4 uVar10;
  byte bVar11;
  undefined *puVar12;
  uint uVar13;
  byte extraout_r2;
  byte bVar14;
  byte *pbVar15;
  uint *puVar16;
  undefined4 *puVar17;
  short sVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  byte *pbVar22;
  byte *pbVar23;
  uint uVar24;
  char cVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  int local_e8;
  uint local_e4;
  undefined8 local_e0;
  int local_d8;
  byte *local_d4;
  byte *local_d0;
  int local_cc;
  uint local_c8;
  int local_c4;
  int local_c0;
  int local_bc;
  uint local_b8;
  int local_b4;
  uint local_b0;
  int local_ac;
  ushort local_a8;
  byte local_a6;
  undefined1 local_a5;
  byte local_a0 [60];
  byte local_64 [7];
  byte local_5d [33];
  undefined4 local_3c;
  char local_38 [16];
  code *local_28;
  
  local_3c = &local_a6;
  local_a5 = param_5;
  local_b4 = 0;
  local_d8 = param_2;
  pcVar2 = param_1;
  do {
    while( true ) {
      local_28 = pcVar2;
      if (*param_3 == 0) {
        return local_b4;
      }
      if (*param_3 == 0x25) break;
      local_d8 = (*local_28)(local_d8,*param_3);
      if (local_d8 == 0) {
        return -1;
      }
      local_b4 = local_b4 + 1;
      param_3 = param_3 + 1;
      pcVar2 = local_28;
    }
    local_a8 = 0;
    local_cc = 0;
    local_c8 = 0;
    local_c4 = 0;
    local_c0 = 0;
    local_bc = 0;
    local_b8 = 0;
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            while( true ) {
              pbVar22 = param_3 + 1;
              bVar11 = *pbVar22;
              if (bVar11 != 0x20) break;
              local_a8 = local_a8 | 1;
              param_3 = pbVar22;
            }
            if (bVar11 != 0x23) break;
            local_a8 = local_a8 | 8;
            param_3 = pbVar22;
          }
          if (bVar11 != 0x2b) break;
          local_a8 = local_a8 | 2;
          param_3 = pbVar22;
        }
        if (bVar11 != 0x2d) break;
        local_a8 = local_a8 | 4;
        param_3 = pbVar22;
      }
      if (bVar11 != 0x30) break;
      local_a8 = local_a8 | 0x10;
      param_3 = pbVar22;
    }
    if (bVar11 == 0x2a) {
      local_ac = *(int *)*param_4;
      *param_4 = (int)((int *)*param_4 + 1);
      if (local_ac < 0) {
        local_ac = -local_ac;
        local_a8 = local_a8 | 4;
      }
      pbVar22 = param_3 + 2;
    }
    else {
      local_ac = 0;
      for (; *pbVar22 - 0x30 < 10; pbVar22 = pbVar22 + 1) {
        if (local_ac < DAT_080141d8) {
          local_ac = (uint)*pbVar22 + local_ac * 10 + -0x30;
        }
      }
    }
    if (*pbVar22 == 0x2e) {
      bVar11 = pbVar22[1];
      if (bVar11 == 0x2a) {
        local_b0 = *(uint *)*param_4;
        *param_4 = (int)((uint *)*param_4 + 1);
        pbVar22 = pbVar22 + 2;
      }
      else {
        if (bVar11 == 0x2d) {
          cVar25 = '-';
          pbVar22 = pbVar22 + 2;
        }
        else {
          cVar25 = '\0';
          pbVar22 = pbVar22 + 1;
        }
        local_b0 = 0;
        for (; *pbVar22 - 0x30 < 10; pbVar22 = pbVar22 + 1) {
          if ((cVar25 == '\0') && ((int)local_b0 < DAT_080141d8)) {
            local_b0 = ((uint)*pbVar22 + local_b0 * 10) - 0x30;
          }
        }
      }
    }
    else {
      local_b0 = 0xffffffff;
    }
    iVar4 = FUN_0800a588(s_hjltzL_080141dc,*pbVar22);
    uVar20 = local_b0;
    local_a6 = 0;
    pbVar23 = pbVar22;
    if (iVar4 != 0) {
      pbVar23 = pbVar22 + 1;
      local_a6 = *pbVar22;
    }
    if (local_a6 == 0x68) {
      if (*pbVar23 == 0x68) {
        local_a6 = 0x62;
LAB_080136b6:
        pbVar23 = pbVar23 + 1;
      }
    }
    else {
      bVar11 = local_a6;
      if (local_a6 == 0x6c) {
        bVar11 = *pbVar23;
      }
      if (local_a6 == 0x6c && bVar11 == 0x6c) {
        local_a6 = 0x71;
        goto LAB_080136b6;
      }
    }
    local_d0 = local_a0;
    param_3 = pbVar23 + 1;
    bVar11 = *pbVar23;
    uVar24 = (uint)bVar11;
    if (uVar24 == 0x25) {
      local_a0[0] = 0x25;
LAB_08014176:
      local_cc = 1;
      goto LAB_08014194;
    }
    if ((uVar24 == 0x41) || (uVar24 - 0x45 < 3)) {
LAB_080139fa:
      if (local_a6 == 0x4c) {
        iVar4 = *param_4;
      }
      else {
        iVar4 = *param_4;
      }
      puVar17 = (undefined4 *)(iVar4 + 7U & 0xfffffff8);
      *param_4 = (int)puVar17;
      uVar10 = *puVar17;
      uVar20 = puVar17[1];
      *param_4 = (int)(puVar17 + 2);
      if ((int)uVar20 < 0) {
        bVar14 = 0x2d;
LAB_08013a44:
        local_a0[local_cc] = bVar14;
        local_cc = local_cc + 1;
      }
      else {
        if ((int)((uint)local_a8 << 0x1e) < 0) {
          bVar14 = 0x2b;
          goto LAB_08013a44;
        }
        if ((int)((uint)local_a8 << 0x1f) < 0) {
          bVar14 = 0x20;
          goto LAB_08013a44;
        }
      }
      local_d4 = local_a0 + local_cc;
      if ((uVar24 | 0x20) != 0x61) {
        if ((int)local_b0 < 0) {
          local_b0 = 6;
        }
        else {
          uVar21 = local_b0;
          if (local_b0 == 0) {
            uVar21 = uVar24 | 0x20;
          }
          if (local_b0 == 0 && uVar21 == 0x67) {
            local_b0 = 1;
          }
        }
      }
      iVar4 = (int)(uVar20 << 1) >> 0x15;
      local_e0._0_4_ = uVar10;
      local_e0._4_4_ = uVar20;
      if ((iVar4 == -1) && ((uVar20 & 0xfffff) != 0)) {
        if (uVar24 - 0x61 < 0x1a) {
          puVar12 = &DAT_080143d0;
        }
        else {
          puVar12 = &DAT_080143d4;
        }
      }
      else {
        if ((iVar4 != -1) || ((uVar20 & 0xfffff) != 0)) {
          local_e0 = FUN_08016c38(uVar10,uVar20,&local_e8);
          uVar21 = (uint)(local_e0 >> 0x20);
          iVar4 = (int)local_e0;
          if ((uVar24 | 0x20) == 0x61) {
            *local_d4 = 0x30;
            if (uVar24 == 0x61) {
              bVar14 = 0x78;
            }
            else {
              bVar14 = 0x58;
            }
            local_d4[1] = bVar14;
            local_cc = local_cc + 2;
            local_d4 = local_d4 + 2;
          }
          if ((local_e0 & 0x7fffffff00000000) == 0 && iVar4 == 0) {
            iVar19 = 0;
            uVar21 = 0;
            pbVar22 = local_64;
          }
          else {
            uVar13 = uVar24 | 0x20;
            if (uVar13 == 0x61) {
              if ((int)local_b0 < 0) {
                local_e4 = 0x21;
              }
              else {
                local_e4 = local_b0 + 1;
              }
              cVar25 = 0xfffffffe < local_e4;
              iVar19 = local_e4 + 1;
              FUN_08015758(uVar10,uVar20,0,0);
              if (cVar25 == '\0') {
                uVar21 = uVar21 ^ 0x80000000;
              }
              uVar26 = CONCAT44(uVar21,iVar4);
              local_64[0] = extraout_r2;
              local_e8 = local_e8 + -4;
              pbVar22 = local_64 + 1;
              while (0 < iVar19) {
                cVar25 = '\x01';
                uVar26 = FUN_08016ca8((int)uVar26,(int)((ulonglong)uVar26 >> 0x20),0,0);
                if (cVar25 != '\0') break;
                uVar26 = FUN_08016cdc((int)uVar26,(int)((ulonglong)uVar26 >> 0x20),0x1c);
                iVar4 = FUN_080152e0();
                iVar19 = iVar19 + -7;
                if (0 < iVar19) {
                  uVar27 = FUN_08016e18();
                  uVar26 = FUN_08015570((int)uVar26,(int)((ulonglong)uVar26 >> 0x20),(int)uVar27,
                                        (int)((ulonglong)uVar27 >> 0x20));
                }
                pbVar22 = pbVar22 + 7;
                iVar6 = 7;
                while ((0 < iVar4 && (iVar6 = iVar6 + -1, -1 < iVar6))) {
                  pbVar22 = pbVar22 + -1;
                  *pbVar22 = (byte)iVar4 & 0xf;
                  iVar4 = iVar4 >> 4;
                }
                while (iVar6 = iVar6 + -1, -1 < iVar6) {
                  pbVar22 = pbVar22 + -1;
                  *pbVar22 = 0;
                }
                pbVar22 = pbVar22 + 7;
              }
              uVar20 = (int)pbVar22 - (int)(local_64 + 1);
              pbVar22 = local_64 + 1;
              uVar21 = uVar20;
              if ((int)local_e4 < (int)uVar20) {
                uVar21 = local_e4;
              }
              if (-1 < (int)uVar21) {
                if (((int)uVar21 < (int)uVar20) && (7 < local_64[uVar21 + 1])) {
                  bVar14 = 0xf;
                }
                else {
                  bVar14 = 0;
                }
                uVar20 = uVar21;
                pbVar23 = local_64 + uVar21;
                while( true ) {
                  if (*pbVar23 != bVar14) break;
                  uVar21 = uVar21 - 1;
                  uVar20 = uVar20 - 1;
                  pbVar23 = pbVar23 + -1;
                }
                if (bVar14 == 0xf) {
                  local_64[uVar20] = local_64[uVar20] + 1;
                }
                if ((int)(uVar20 - 1) < 0) {
                  local_e8 = local_e8 + 4;
                  pbVar22 = local_64;
                  uVar21 = uVar21 + 1;
                }
                iVar4 = uVar21 - 1;
                if (-1 < iVar4) {
                  pbVar23 = pbVar22 + iVar4;
                  do {
                    bVar14 = *pbVar23 + 0x30;
                    if (0x39 < (byte)(*pbVar23 + 0x30)) {
                      bVar14 = (bVar14 + bVar11) - 0x3a;
                    }
                    iVar4 = iVar4 + -1;
                    *pbVar23 = bVar14;
                    pbVar23 = pbVar23 + -1;
                  } while (-1 < iVar4);
                }
              }
              iVar19 = local_e8;
              if ((int)local_b0 < 0) {
                local_b0 = uVar21 - 1;
              }
            }
            else {
              local_e8 = (local_e8 * 0x7597) / DAT_0801435c;
              if (7 - local_e8 < 1) {
                uVar26 = FUN_08014314(0,DAT_08014360,-(7 - local_e8));
                uVar26 = FUN_0800d3c8(uVar10,uVar20 & 0x7fffffff,(int)uVar26,
                                      (int)((ulonglong)uVar26 >> 0x20));
              }
              else {
                uVar26 = FUN_08014314(uVar10,uVar20 & 0x7fffffff);
              }
              if (uVar13 == 0x66) {
                iVar4 = local_e8 + 10;
              }
              else {
                iVar4 = 6;
              }
              iVar4 = iVar4 + local_b0;
              if (0x14 < iVar4) {
                iVar4 = 0x14;
              }
              local_64[0] = 0x30;
              pbVar22 = local_64 + 1;
              while (0 < iVar4) {
                while( true ) {
                  uVar10 = (undefined4)((ulonglong)uVar26 >> 0x20);
                  uVar21 = FUN_080168cc((int)uVar26,uVar10);
                  iVar19 = 4;
                  uVar20 = uVar21;
                  pbVar23 = pbVar22 + 8;
                  do {
                    pbVar22 = pbVar23;
                    cVar25 = (char)(uVar20 / 10);
                    pbVar22[-1] = (char)uVar20 + cVar25 * -10 + 0x30;
                    uVar20 = (uVar20 / 10) / 10;
                    iVar19 = iVar19 + -1;
                    pbVar22[-2] = cVar25 + (char)uVar20 * -10 + 0x30;
                    pbVar23 = pbVar22 + -2;
                  } while (iVar19 != 0);
                  iVar4 = iVar4 + -8;
                  pbVar22 = pbVar22 + 6;
                  if (iVar4 < 1) break;
                  uVar27 = FUN_0800d200(uVar21);
                  uVar26 = FUN_08015570((int)uVar26,uVar10,(int)uVar27,
                                        (int)((ulonglong)uVar27 >> 0x20));
                  uVar26 = FUN_0800d21c((int)uVar26,(int)((ulonglong)uVar26 >> 0x20),0,DAT_08014364)
                  ;
                }
              }
              iVar4 = (int)pbVar22 - (int)(local_64 + 1);
              pbVar22 = local_64;
              while (pbVar22 = pbVar22 + 1, *pbVar22 == 0x30) {
                local_e8 = local_e8 + -1;
                iVar4 = iVar4 + -1;
              }
              if (uVar13 == 0x66) {
                iVar19 = local_e8 + 1;
              }
              else if (uVar13 == 0x65) {
                iVar19 = 1;
              }
              else {
                iVar19 = 0;
              }
              uVar20 = iVar19 + local_b0;
              if (iVar4 < (int)uVar20) {
                uVar20 = iVar4 - 1;
              }
              iVar19 = local_e8;
              uVar21 = uVar20;
              if (-1 < (int)uVar20) {
                if (((int)uVar20 < iVar4) && (0x34 < pbVar22[uVar20])) {
                  bVar11 = 0x39;
                }
                else {
                  bVar11 = 0x30;
                }
                pbVar23 = pbVar22 + -1 + uVar20;
                while( true ) {
                  uVar20 = uVar20 - 1;
                  if (*pbVar23 != bVar11) break;
                  uVar21 = uVar21 - 1;
                  pbVar23 = pbVar23 + -1;
                }
                if (bVar11 == 0x39) {
                  pbVar22[uVar20] = pbVar22[uVar20] + 1;
                }
                if ((int)uVar20 < 0) {
                  iVar19 = local_e8 + 1;
                  uVar21 = uVar21 + 1;
                  pbVar22 = pbVar22 + -1;
                  local_e8 = iVar19;
                }
              }
            }
          }
          iVar4 = FUN_08016e88();
          bVar11 = **(byte **)(iVar4 + 0x24);
          if ((short)uVar21 < 1) {
            uVar21 = 1;
            pbVar22 = &DAT_080143e0;
          }
          sVar1 = (short)uVar21;
          uVar20 = local_b0;
          if ((uVar24 | 0x20) == 0x66) {
LAB_08013df8:
            sVar18 = (short)(iVar19 + 1);
            iVar4 = (int)sVar18;
            if (iVar4 < 1) {
              local_d4[local_c8] = 0x30;
              if ((0 < (int)uVar20) ||
                 (uVar24 = local_c8 + 1, (int)((uint)(byte)local_a8 << 0x1c) < 0)) {
                local_d4[local_c8 + 1] = bVar11;
                uVar24 = local_c8 + 2;
              }
              local_c8 = uVar24;
              if ((int)(uVar20 + iVar4) < 0 != SCARRY4(uVar20,iVar4)) {
                sVar18 = -(short)uVar20;
              }
              local_bc = -(int)sVar18;
              uVar20 = uVar20 + (int)sVar18;
              if ((int)uVar20 < (int)sVar1) {
                uVar21 = uVar20;
              }
              iVar4 = (int)(short)uVar21;
              local_c4 = iVar4;
              FUN_0800a408(local_d4 + local_c8,pbVar22,iVar4);
              local_b8 = uVar20 - iVar4;
            }
            else if (sVar1 < sVar18) {
              FUN_0800a408(local_d4 + local_c8,pbVar22,(int)sVar1);
              local_c8 = (int)sVar1 + local_c8;
              local_bc = iVar4 - sVar1;
              local_b8 = uVar20;
              if ((0 < (int)uVar20) || ((int)((uint)(byte)local_a8 << 0x1c) < 0)) {
                local_d4[local_c8] = bVar11;
                local_c4 = local_c4 + 1;
              }
            }
            else {
              FUN_0800a408(local_d4 + local_c8,pbVar22,(int)sVar18);
              uVar21 = uVar21 - (iVar19 + 1);
              iVar19 = local_c8 + iVar4;
              if ((0 < (int)uVar20) || (local_c8 = iVar19, (int)((uint)(byte)local_a8 << 0x1c) < 0))
              {
                local_c8 = iVar19 + 1;
                local_d4[iVar19] = bVar11;
              }
              if ((int)uVar20 < (int)(short)uVar21) {
                uVar21 = uVar20;
              }
              sVar1 = (short)uVar21;
              FUN_0800a408(local_d4 + local_c8,pbVar22 + iVar4,(int)sVar1);
              local_c8 = (int)sVar1 + local_c8;
              local_bc = uVar20 - (int)sVar1;
            }
          }
          else {
            sVar18 = (short)iVar19;
            if ((uVar24 | 0x20) == 0x67) {
              if ((-5 < sVar18) && ((int)sVar18 < (int)local_b0)) {
                if ((-1 < (int)((uint)(byte)local_a8 << 0x1c)) && ((int)sVar1 <= (int)local_b0)) {
                  uVar20 = (int)sVar1;
                }
                uVar20 = uVar20 - (int)(short)(sVar18 + 1);
                if ((int)uVar20 < 0) {
                  uVar20 = 0;
                }
                goto LAB_08013df8;
              }
              if (((int)sVar1 < (int)local_b0) && (-1 < (int)((uint)(byte)local_a8 << 0x1c))) {
                uVar20 = (int)sVar1;
              }
              uVar20 = uVar20 - 1;
              if ((int)uVar20 < 0) {
                uVar20 = 0;
              }
              if (uVar24 == 0x67) {
                uVar24 = 0x65;
              }
              else {
                uVar24 = 0x45;
              }
            }
            else if (uVar24 == 0x61) {
              uVar24 = 0x70;
            }
            else if (uVar24 == 0x41) {
              uVar24 = 0x50;
            }
            uVar13 = local_c8 + 1;
            local_d4[local_c8] = *pbVar22;
            if ((0 < (int)uVar20) || ((int)((uint)(byte)local_a8 << 0x1c) < 0)) {
              local_c8 = local_c8 + 2;
              local_d4[uVar13] = bVar11;
              uVar13 = local_c8;
              if (0 < (int)uVar20) {
                uVar13 = uVar21 - 1;
                if ((int)uVar20 < (int)(short)(uVar21 - 1)) {
                  uVar13 = uVar20;
                }
                sVar1 = (short)uVar13;
                FUN_0800a408(local_d4 + local_c8,pbVar22 + 1,(int)sVar1);
                local_bc = uVar20 - (int)sVar1;
                uVar13 = (int)sVar1 + local_c8;
              }
            }
            local_c8 = uVar13;
            pbVar22 = local_d4 + local_c8;
            *pbVar22 = (byte)uVar24;
            if (sVar18 < 0) {
              pbVar22[1] = 0x2d;
              iVar19 = -(int)sVar18;
            }
            else {
              pbVar22[1] = 0x2b;
            }
            pbVar23 = pbVar22 + 2;
            iVar4 = 0;
            pcVar5 = local_38;
            while (0 < (short)iVar19) {
              iVar6 = (int)(short)iVar19 / 10;
              *pcVar5 = (char)iVar19 + (char)iVar6 * -10;
              iVar4 = iVar4 + 1;
              iVar19 = iVar6;
              pcVar5 = pcVar5 + 1;
            }
            pbVar15 = pbVar23;
            if ((iVar4 < 2) && ((uVar24 | 0x20) == 0x65)) {
              pbVar15 = pbVar22 + 3;
              *pbVar23 = 0x30;
            }
            pbVar22 = pbVar15;
            if (iVar4 == 0) {
              pbVar22 = pbVar15 + 1;
              *pbVar15 = 0x30;
            }
            else {
              for (; 0 < iVar4; iVar4 = iVar4 + -1) {
                *pbVar22 = local_38[iVar4 + -1] + 0x30;
                pbVar22 = pbVar22 + 1;
              }
            }
            local_c4 = (int)pbVar22 - (int)(local_d4 + local_c8);
          }
          if ((((byte)local_a8 & 0x14) == 0x10) &&
             (iVar4 = local_b8 + local_c4 + local_bc + local_c8 + local_cc, iVar4 < local_ac)) {
            local_c0 = local_ac - iVar4;
          }
          goto LAB_08014194;
        }
        if (uVar24 - 0x61 < 0x1a) {
          puVar12 = &DAT_080143d8;
        }
        else {
          puVar12 = &DAT_080143dc;
        }
      }
      local_c8 = 3;
      FUN_0800a408(local_d4,puVar12,3);
    }
    else {
      if (uVar24 == 0x58) goto LAB_08014030;
      if (uVar24 == 0x61) goto LAB_080139fa;
      if (uVar24 == 99) {
        local_a0[0] = (byte)*(undefined4 *)*param_4;
        *param_4 = (int)((undefined4 *)*param_4 + 1);
        goto LAB_08014176;
      }
      if (uVar24 == 100) {
LAB_080140c6:
        if (local_a6 == 0x62) {
          uVar10 = *(undefined4 *)*param_4;
          *param_4 = (int)((undefined4 *)*param_4 + 1);
          local_e0._0_4_ = (uint)(char)uVar10;
LAB_08014126:
          local_e0._4_4_ = (int)(uint)local_e0 >> 0x1f;
        }
        else {
          if (local_a6 == 0x68) {
            uVar10 = *(undefined4 *)*param_4;
            *param_4 = (int)((undefined4 *)*param_4 + 1);
            local_e0._0_4_ = (uint)(short)uVar10;
            goto LAB_08014126;
          }
          if ((local_a6 != 0x6a) && ((local_a6 == 0x6c || (local_a6 != 0x71)))) {
            local_e0._0_4_ = *(uint *)*param_4;
            *param_4 = (int)((uint *)*param_4 + 1);
            goto LAB_08014126;
          }
          puVar16 = (uint *)(*param_4 + 7U & 0xfffffff8);
          *param_4 = (int)puVar16;
          local_e0._0_4_ = *puVar16;
          local_e0._4_4_ = puVar16[1];
          *param_4 = (int)(puVar16 + 2);
        }
        if ((int)local_e0._4_4_ < 0) {
          bVar11 = 0x2d;
LAB_0801414c:
          local_a0[local_cc] = bVar11;
          local_cc = local_cc + 1;
        }
        else {
          if ((int)((uint)local_a8 << 0x1e) < 0) {
            bVar11 = 0x2b;
            goto LAB_0801414c;
          }
          if ((int)((uint)local_a8 << 0x1f) < 0) {
            bVar11 = 0x20;
            goto LAB_0801414c;
          }
        }
LAB_08014154:
        local_d4 = local_a0 + local_cc;
LAB_0801415e:
        FUN_08014200(&local_e0,uVar24);
      }
      else {
        if (uVar24 - 0x65 < 3) goto LAB_080139fa;
        if (uVar24 == 0x69) goto LAB_080140c6;
        if (uVar24 != 0x6e) {
          if (uVar24 == 0x6f) {
LAB_08014030:
            if (local_a6 == 0x62) {
              uVar20 = *(uint *)*param_4;
              *param_4 = (int)((uint *)*param_4 + 1);
              local_e0._0_4_ = uVar20 & 0xff;
LAB_08014090:
              local_e0._4_4_ = 0;
            }
            else {
              if (local_a6 == 0x68) {
                uVar20 = *(uint *)*param_4;
                *param_4 = (int)((uint *)*param_4 + 1);
                local_e0._0_4_ = uVar20 & 0xffff;
                goto LAB_08014090;
              }
              if ((local_a6 != 0x6a) && ((local_a6 == 0x6c || (local_a6 != 0x71)))) {
                local_e0._0_4_ = *(uint *)*param_4;
                *param_4 = (int)((uint *)*param_4 + 1);
                goto LAB_08014090;
              }
              puVar16 = (uint *)(*param_4 + 7U & 0xfffffff8);
              *param_4 = (int)puVar16;
              local_e0._0_4_ = *puVar16;
              local_e0._4_4_ = puVar16[1];
              *param_4 = (int)(puVar16 + 2);
            }
            if ((((int)((uint)(byte)local_a8 << 0x1c) < 0) &&
                (local_e0._4_4_ != 0 || (uint)local_e0 != 0)) && ((uVar24 | 0x20) == 0x78)) {
              local_a0[local_cc] = 0x30;
              local_a0[local_cc + 1] = bVar11;
              local_cc = local_cc + 2;
            }
            goto LAB_08014154;
          }
          if (uVar24 != 0x70) {
            if (uVar24 == 0x73) {
              pbVar22 = *(byte **)*param_4;
              *param_4 = (int)((undefined4 *)*param_4 + 1);
              local_d4 = pbVar22;
              if (pbVar22 == (byte *)0x0) {
                if (local_3c[1] != 0) {
                  pcVar5 = s_printf_s__bad__s_argument_080141e4;
                  goto LAB_08013756;
                }
                local_d4 = &DAT_080143cc;
              }
              else if ((int)local_b0 < 0) {
                local_c8 = FUN_08014c18(pbVar22);
              }
              else {
                iVar4 = FUN_08015240(pbVar22,0,local_b0);
                local_c8 = uVar20;
                if (iVar4 != 0) {
                  local_c8 = iVar4 - (int)pbVar22;
                }
              }
            }
            else {
              if ((uVar24 == 0x75) || (uVar24 == 0x78)) goto LAB_08014030;
              local_cc = 1;
              local_a0[0] = 0x25;
              if (uVar24 != 0) {
                local_cc = 2;
                local_a0[1] = bVar11;
              }
            }
            goto LAB_08014194;
          }
          local_e0._0_4_ = *(uint *)*param_4;
          *param_4 = (int)((uint *)*param_4 + 1);
          local_e0._4_4_ = 0;
          local_d4 = local_a0;
          uVar24 = 0x78;
          goto LAB_0801415e;
        }
        if (local_3c[1] == 0) {
          if (local_a6 != 0x62) {
            if (local_a6 == 0x68) {
              puVar7 = *(undefined2 **)*param_4;
              *param_4 = (int)((undefined4 *)*param_4 + 1);
              if (puVar7 != (undefined2 *)0x0) {
                *puVar7 = (short)local_b4;
                goto LAB_08014194;
              }
              pcVar5 = s_printf__bad__n_argument_080143b4;
            }
            else if (local_a6 == 0x6a) {
              piVar9 = *(int **)*param_4;
              *param_4 = (int)((int *)*param_4 + 1);
              if (piVar9 != (int *)0x0) {
LAB_080139b4:
                *piVar9 = local_b4;
                piVar9[1] = local_b4 >> 0x1f;
                goto LAB_08014194;
              }
              pcVar5 = s_printf__bad__n_argument_080143b4;
            }
            else if (local_a6 == 0x6c) {
              piVar9 = *(int **)*param_4;
              *param_4 = (int)((int *)*param_4 + 1);
              if (piVar9 != (int *)0x0) goto LAB_080139f4;
              pcVar5 = s_printf__bad__n_argument_080143b4;
            }
            else if (local_a6 == 0x71) {
              piVar9 = *(int **)*param_4;
              *param_4 = (int)((int *)*param_4 + 1);
              if (piVar9 != (int *)0x0) goto LAB_080139b4;
              pcVar5 = s_printf__bad__n_argument_080143b4;
            }
            else if (local_a6 == 0x74) {
              piVar9 = *(int **)*param_4;
              *param_4 = (int)((int *)*param_4 + 1);
              if (piVar9 != (int *)0x0) goto LAB_080139f4;
              pcVar5 = s_printf__bad__n_argument_080143b4;
            }
            else if (local_a6 == 0x7a) {
              piVar9 = *(int **)*param_4;
              *param_4 = (int)((int *)*param_4 + 1);
              if (piVar9 != (int *)0x0) goto LAB_080139f4;
              pcVar5 = s_printf__bad__n_argument_080143b4;
            }
            else {
              piVar9 = *(int **)*param_4;
              *param_4 = (int)((int *)*param_4 + 1);
              if (piVar9 != (int *)0x0) {
LAB_080139f4:
                *piVar9 = local_b4;
                goto LAB_08014194;
              }
              pcVar5 = s_printf__bad__n_argument_080143b4;
            }
            goto LAB_08013756;
          }
          puVar8 = *(undefined1 **)*param_4;
          *param_4 = (int)((undefined4 *)*param_4 + 1);
          if (puVar8 == (undefined1 *)0x0) {
            pcVar5 = s_printf__bad__n_argument_080143b4;
            goto LAB_08013756;
          }
          *puVar8 = (char)local_b4;
        }
        else {
          pcVar5 = s_printf_s___n_disallowed_0801439c;
LAB_08013756:
          iVar4 = FUN_08016bf8(pcVar5);
          if (iVar4 != -1) {
            return -1;
          }
        }
      }
    }
LAB_08014194:
    pcVar2 = local_28;
    iVar4 = (((((local_ac - local_cc) - local_c0) - local_c8) - local_bc) - local_c4) - local_b8;
    if (-1 < (int)((uint)(byte)local_a8 << 0x1d)) {
      local_e8 = CONCAT31(local_e8._1_3_,0x20);
      iVar19 = iVar4;
      if (0 < iVar4) {
        do {
          iVar6 = FUN_0801436c(pcVar2,&local_e0,&local_e8,1);
          if (iVar6 != 0) {
            return -1;
          }
          iVar19 = iVar19 + -1;
        } while (iVar19 != 0);
        local_28 = pcVar2;
      }
    }
    pcVar2 = local_28;
    pbVar22 = local_a0;
    iVar6 = local_c0;
    for (iVar19 = local_cc; local_c0 = iVar6, iVar19 != 0; iVar19 = iVar19 + -1) {
      local_d8 = (*pcVar2)(local_d8,*pbVar22);
      if (local_d8 == 0) {
        return -1;
      }
      local_b4 = local_b4 + 1;
      pbVar22 = pbVar22 + 1;
      iVar6 = local_c0;
    }
    local_e8._1_3_ = (undefined3)((uint)local_e8 >> 8);
    local_e8._0_1_ = 0x30;
    local_28 = pcVar2;
    pbVar22 = local_d4;
    uVar20 = local_c8;
    iVar19 = local_bc;
    pcVar3 = pcVar2;
    if (0 < iVar6) {
      do {
        iVar19 = FUN_0801436c(pcVar2,&local_e0,&local_e8,1);
        if (iVar19 != 0) {
          return -1;
        }
        iVar6 = iVar6 + -1;
        pbVar22 = local_d4;
        uVar20 = local_c8;
        iVar19 = local_bc;
      } while (iVar6 != 0);
    }
    for (; local_28 = pcVar3, local_bc = iVar19, uVar20 != 0; uVar20 = uVar20 - 1) {
      local_d8 = (*pcVar2)(local_d8,*pbVar22);
      if (local_d8 == 0) {
        return -1;
      }
      local_b4 = local_b4 + 1;
      pbVar22 = pbVar22 + 1;
      iVar19 = local_bc;
      pcVar3 = local_28;
    }
    local_e8 = CONCAT31(local_e8._1_3_,0x30);
    local_28 = pcVar2;
    if (0 < iVar19) {
      do {
        iVar6 = FUN_0801436c(pcVar2,&local_e0,&local_e8,1);
        if (iVar6 != 0) {
          return -1;
        }
        iVar19 = iVar19 + -1;
      } while (iVar19 != 0);
    }
    pbVar22 = local_d4 + local_c8;
    uVar20 = local_b8;
    local_28 = pcVar2;
    for (iVar19 = local_c4; local_b8 = uVar20, iVar19 != 0; iVar19 = iVar19 + -1) {
      local_d8 = (*pcVar2)(local_d8,*pbVar22);
      if (local_d8 == 0) {
        return -1;
      }
      local_b4 = local_b4 + 1;
      pbVar22 = pbVar22 + 1;
      uVar20 = local_b8;
    }
    local_e8._1_3_ = (undefined3)((uint)local_e8 >> 8);
    local_e8 = CONCAT31(local_e8._1_3_,0x30);
    local_28 = pcVar2;
    if (0 < (int)uVar20) {
      do {
        iVar19 = FUN_0801436c(pcVar2,&local_e0,&local_e8,1);
        if (iVar19 != 0) {
          return -1;
        }
        uVar20 = uVar20 - 1;
      } while (uVar20 != 0);
    }
    if ((int)((uint)(byte)local_a8 << 0x1d) < 0) {
      local_e8 = CONCAT31(local_e8._1_3_,0x20);
      local_28 = pcVar2;
      if (0 < iVar4) {
        do {
          iVar19 = FUN_0801436c(pcVar2,&local_e0,&local_e8,1);
          if (iVar19 != 0) {
            return -1;
          }
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
    }
  } while( true );
}



// ==== FUN_08014200 @ 08014200 ====

undefined8 FUN_08014200(int *param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int extraout_r2;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  bool bVar8;
  longlong lVar9;
  undefined4 local_28;
  int local_24;
  
  iVar4 = param_1[4];
  if (param_2 == 0x6f) {
    iVar5 = 8;
  }
  else {
    iVar5 = FUN_08013538();
    if (iVar5 == 0x78) {
      iVar5 = 0x10;
    }
    else {
      iVar5 = 10;
    }
  }
  iVar1 = *param_1;
  iVar2 = param_1[1];
  iVar6 = 0x3c;
  if ((param_2 == 100 || param_2 == 0x69) && (iVar2 < 0)) {
    bVar8 = iVar1 != 0;
    iVar1 = -iVar1;
    iVar2 = -iVar2 - (uint)bVar8;
  }
  lVar9 = CONCAT44(iVar2,iVar1);
  if ((iVar2 == 0 && iVar1 == 0) && (param_1[0xc] == 0)) {
    local_28 = param_3;
    local_24 = param_4;
    if ((iVar5 == 8) && ((int)((uint)*(byte *)(param_1 + 0xe) << 0x1c) < 0)) {
      *(undefined1 *)(iVar4 + 0x3b) = 0x30;
      iVar6 = 0x3b;
    }
  }
  else {
    local_28 = CONCAT31((int3)((uint)param_3 >> 8),(char)param_2);
    do {
      iVar1 = iVar6;
      uVar7 = (undefined4)((ulonglong)lVar9 >> 0x20);
      FUN_08016e94((int)lVar9,uVar7,iVar5,0);
      cVar3 = (char)(extraout_r2 + 0x30U);
      local_24 = iVar1 + -1;
      if (0x39 < (extraout_r2 + 0x30U & 0xff)) {
        cVar3 = cVar3 + (char)param_2 + -0x51;
      }
      *(char *)(iVar4 + local_24) = cVar3;
      lVar9 = FUN_08016e94((int)lVar9,uVar7,iVar5,0);
      iVar6 = local_24;
    } while ((lVar9 != 0) && ((uint)param_1[3] < (uint)(iVar4 + local_24)));
    if ((iVar5 == 8) &&
       (((int)((uint)*(byte *)(param_1 + 0xe) << 0x1c) < 0 && (*(char *)(iVar4 + local_24) != '0')))
       ) {
      iVar6 = iVar1 + -2;
      *(undefined1 *)(iVar4 + iVar6) = 0x30;
    }
  }
  iVar5 = 0x3c - iVar6;
  param_1[6] = iVar5;
  param_1[3] = iVar4 + iVar6;
  iVar4 = param_1[0xc];
  if (iVar4 <= iVar5) {
    if ((iVar4 < 0) && ((*(byte *)(param_1 + 0xe) & 0x14) == 0x10)) {
      iVar5 = ((param_1[0xd] - param_1[5]) - param_1[8]) - iVar5;
      if (0 < iVar5) {
        param_1[8] = iVar5;
      }
    }
    return CONCAT44(local_24,local_28);
  }
  param_1[8] = iVar4 - iVar5;
  *(ushort *)(param_1 + 0xe) = *(ushort *)(param_1 + 0xe) & 0xffef;
  return CONCAT44(local_24,local_28);
}



// ==== FUN_08014314 @ 08014314 ====

undefined8 FUN_08014314(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar3 = CONCAT44(param_2,param_1);
  uVar1 = 0;
  uVar2 = DAT_08014368;
  for (; param_3 != 0; param_3 = param_3 >> 1) {
    if (param_3 << 0x1f < 0) {
      uVar3 = FUN_0800d21c((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),uVar1,uVar2);
    }
    uVar4 = FUN_0800d21c(uVar1,uVar2,uVar1,uVar2);
    uVar2 = (undefined4)((ulonglong)uVar4 >> 0x20);
    uVar1 = (undefined4)uVar4;
  }
  return uVar3;
}



// ==== FUN_0801436c @ 0801436c ====

longlong FUN_0801436c(code *param_1,int param_2,undefined1 *param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = param_4;
  while( true ) {
    if (uVar2 == 0) {
      return (ulonglong)param_4 << 0x20;
    }
    iVar1 = (*param_1)(*(undefined4 *)(param_2 + 8),*param_3);
    *(int *)(param_2 + 8) = iVar1;
    if (iVar1 == 0) break;
    *(int *)(param_2 + 0x2c) = *(int *)(param_2 + 0x2c) + 1;
    uVar2 = uVar2 - 1;
    param_3 = param_3 + 1;
  }
  return CONCAT44(param_4,0xffffffff);
}



// ==== FUN_080143e2 @ 080143e2 ====

void FUN_080143e2(void)

{
  return;
}



// ==== FUN_080143e4 @ 080143e4 ====

undefined4 FUN_080143e4(void)

{
  return *(undefined4 *)(DAT_080143ec + 4);
}



// ==== FUN_080143f0 @ 080143f0 ====

undefined8 FUN_080143f0(byte *param_1,undefined4 param_2,uint param_3)

{
  uint *puVar1;
  undefined4 *puVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  bool bVar8;
  uint local_20;
  
  puVar1 = DAT_08014708;
  local_20 = param_3;
  if (param_1 == (byte *)0x0) {
LAB_080146fe:
    uVar6 = 1;
    goto LAB_08014704;
  }
  if ((int)((uint)*param_1 << 0x1f) < 0) {
    if (((DAT_08014708[2] & 0xc) != 4) &&
       (((DAT_08014708[2] & 0xc) != 8 || (-1 < (int)(DAT_08014708[1] << 9))))) {
      if (*(int *)(param_1 + 4) == 0x10000) {
        *DAT_08014708 = *DAT_08014708 | 0x10000;
      }
      else if (*(int *)(param_1 + 4) == 0x50000) {
        *DAT_08014708 = *DAT_08014708 | 0x40000;
        *puVar1 = *puVar1 | 0x10000;
      }
      else {
        *DAT_08014708 = *DAT_08014708 & 0xfffeffff;
        *puVar1 = *puVar1 & 0xfffbffff;
      }
      if (*(int *)(param_1 + 4) == 0) {
        iVar4 = FUN_080143e4();
        do {
          if (-1 < (int)(*puVar1 << 0xe)) goto LAB_0801442c;
          iVar5 = FUN_080143e4();
        } while ((uint)(iVar5 - iVar4) < 0x65);
      }
      else {
        iVar4 = FUN_080143e4();
        do {
          if ((int)(*puVar1 << 0xe) < 0) goto LAB_0801442c;
          iVar5 = FUN_080143e4();
        } while ((uint)(iVar5 - iVar4) < 0x65);
      }
      goto LAB_08014490;
    }
    if (((int)(*DAT_08014708 << 0xe) < 0) && (*(int *)(param_1 + 4) == 0)) goto LAB_080146fe;
  }
LAB_0801442c:
  if ((int)((uint)*param_1 << 0x1e) < 0) {
    if (((puVar1[2] & 0xc) != 0) && (((puVar1[2] & 0xc) != 8 || ((int)(puVar1[1] << 9) < 0)))) {
      if (*(int *)(param_1 + 0xc) == 0) {
        *DAT_08014710 = 0;
        iVar4 = FUN_080143e4();
        do {
          if (-1 < (int)(*puVar1 << 0x1e)) goto LAB_08014466;
          iVar5 = FUN_080143e4();
        } while ((uint)(iVar5 - iVar4) < 3);
      }
      else {
        *DAT_08014710 = 1;
        iVar4 = FUN_080143e4();
        do {
          if ((int)(*puVar1 << 0x1e) < 0) {
            *puVar1 = *puVar1 & 0xffffff07 | *(int *)(param_1 + 0x10) << 3;
            goto LAB_08014466;
          }
          iVar5 = FUN_080143e4();
        } while ((uint)(iVar5 - iVar4) < 3);
      }
      goto LAB_08014490;
    }
    if (((int)(*puVar1 << 0x1e) < 0) && (*(int *)(param_1 + 0xc) != 1)) goto LAB_080146fe;
    *puVar1 = *puVar1 & 0xffffff07 | *(int *)(param_1 + 0x10) << 3;
  }
LAB_08014466:
  if ((int)((uint)*param_1 << 0x1c) < 0) {
    if (*(int *)(param_1 + 0x14) == 0) {
      *DAT_0801470c = 0;
      iVar4 = FUN_080143e4();
      do {
        if (-1 < (int)(puVar1[0x1d] << 0x1e)) goto LAB_0801456e;
        iVar5 = FUN_080143e4();
      } while ((uint)(iVar5 - iVar4) < 3);
    }
    else {
      *DAT_0801470c = 1;
      iVar4 = FUN_080143e4();
      do {
        if ((int)(puVar1[0x1d] << 0x1e) < 0) goto LAB_0801456e;
        iVar5 = FUN_080143e4();
      } while ((uint)(iVar5 - iVar4) < 3);
    }
  }
  else {
LAB_0801456e:
    if (-1 < (int)((uint)*param_1 << 0x1d)) goto LAB_0801463c;
    bVar8 = -1 < (int)(puVar1[0x10] << 3);
    if (bVar8) {
      puVar1[0x10] = puVar1[0x10] | 0x10000000;
      local_20 = puVar1[0x10] & 0x10000000;
    }
    puVar3 = DAT_08014714;
    if ((int)(*DAT_08014714 << 0x17) < 0) {
LAB_080145be:
      if (*(int *)(param_1 + 8) == 1) {
        puVar1[0x1c] = puVar1[0x1c] | 1;
      }
      else if (*(int *)(param_1 + 8) == 5) {
        puVar1[0x1c] = puVar1[0x1c] | 4;
        puVar1[0x1c] = puVar1[0x1c] | 1;
      }
      else {
        puVar1[0x1c] = puVar1[0x1c] & 0xfffffffe;
        puVar1[0x1c] = puVar1[0x1c] & 0xfffffffb;
      }
      if (*(int *)(param_1 + 8) == 0) {
        iVar4 = FUN_080143e4();
        do {
          if (-1 < (int)(puVar1[0x1c] << 0x1e)) goto LAB_08014630;
          iVar5 = FUN_080143e4();
        } while ((uint)(iVar5 - iVar4) < 0x1389);
      }
      else {
        iVar4 = FUN_080143e4();
        do {
          if ((int)(puVar1[0x1c] << 0x1e) < 0) goto LAB_08014630;
          iVar5 = FUN_080143e4();
        } while ((uint)(iVar5 - iVar4) < 0x1389);
      }
    }
    else {
      *DAT_08014714 = *DAT_08014714 | 0x100;
      iVar4 = FUN_080143e4();
      do {
        if ((int)(*puVar3 << 0x17) < 0) goto LAB_080145be;
        iVar5 = FUN_080143e4();
      } while ((uint)(iVar5 - iVar4) < 3);
    }
  }
  goto LAB_08014490;
LAB_08014630:
  if (bVar8) {
    puVar1[0x10] = puVar1[0x10] & 0xefffffff;
  }
LAB_0801463c:
  puVar2 = DAT_08014710;
  iVar4 = *(int *)(param_1 + 0x18);
  if (iVar4 != 0) {
    if ((puVar1[2] & 0xc) != 8) {
      if (iVar4 == 2) {
        DAT_08014710[0x18] = 0;
        iVar4 = FUN_080143e4();
        do {
          if (-1 < (int)(*puVar1 << 6)) {
            puVar1[1] = *(uint *)(param_1 + 0x1c) | *(uint *)(param_1 + 0x20) |
                        *(int *)(param_1 + 0x24) << 6 |
                        ((*(uint *)(param_1 + 0x28) >> 1) - 1) * 0x10000 |
                        *(int *)(param_1 + 0x2c) << 0x18;
            puVar2[0x18] = 1;
            iVar4 = FUN_080143e4();
            goto LAB_08014696;
          }
          iVar5 = FUN_080143e4();
        } while ((uint)(iVar5 - iVar4) < 3);
      }
      else {
        DAT_08014710[0x18] = 0;
        iVar4 = FUN_080143e4();
        do {
          if (-1 < (int)(*puVar1 << 6)) goto LAB_08014702;
          iVar5 = FUN_080143e4();
        } while ((uint)(iVar5 - iVar4) < 3);
      }
      goto LAB_08014490;
    }
    if ((((iVar4 == 1) || (uVar7 = puVar1[1], (uVar7 & 0x400000) != *(uint *)(param_1 + 0x1c))) ||
        ((uVar7 & 0x3f) != *(uint *)(param_1 + 0x20))) ||
       ((((uVar7 & 0x7fc0) != *(uint *)(param_1 + 0x24) ||
         ((uVar7 & 0x30000) != *(uint *)(param_1 + 0x28))) ||
        ((uVar7 & 0xf000000) != *(uint *)(param_1 + 0x2c))))) goto LAB_080146fe;
  }
LAB_08014702:
  uVar6 = 0;
  goto LAB_08014704;
  while (iVar5 = FUN_080143e4(), (uint)(iVar5 - iVar4) < 3) {
LAB_08014696:
    if ((int)(*puVar1 << 6) < 0) goto LAB_08014702;
  }
LAB_08014490:
  uVar6 = 3;
LAB_08014704:
  return CONCAT44(local_20,uVar6);
}



// ==== FUN_08014718 @ 08014718 ====

uint FUN_08014718(void)

{
  longlong lVar1;
  uint *puVar2;
  uint uVar3;
  
  puVar2 = DAT_08014770;
  if ((DAT_08014770[1] & 0xc) == 4) {
    return DAT_08014774;
  }
  if ((DAT_08014770[1] & 0xc) != 8) {
    return DAT_08014778;
  }
  uVar3 = (*DAT_08014770 & 0x7fff) >> 6;
  if ((int)(*DAT_08014770 << 9) < 0) {
    lVar1 = (ulonglong)DAT_08014774 * (ulonglong)uVar3;
    uVar3 = FUN_08016e94((int)lVar1,(int)((ulonglong)lVar1 >> 0x20),*DAT_08014770 & 0x3f,0);
  }
  else {
    lVar1 = (ulonglong)DAT_08014778 * (ulonglong)uVar3;
    uVar3 = FUN_08016e94((int)lVar1,(int)((ulonglong)lVar1 >> 0x20),*DAT_08014770 & 0x3f,0);
  }
  return uVar3 / ((((*puVar2 & 0x3ffff) >> 0x10) + 1) * 2);
}



// ==== FUN_0801477c @ 0801477c ====

longlong FUN_0801477c(uint param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  char *pcVar1;
  int iVar2;
  
  pcVar1 = DAT_080147bc;
  iVar2 = thunk_FUN_0801716c((int)((ulonglong)*DAT_080147c0 /
                                  (1000 / (ulonglong)(uint)(int)*DAT_080147bc)));
  if (iVar2 != 0) {
    return CONCAT44(param_4,1);
  }
  if (param_1 < 0x10) {
    FUN_0801719c(0xffffffff,param_1,0);
    *(uint *)(pcVar1 + 8) = param_1;
    return (ulonglong)param_4 << 0x20;
  }
  return CONCAT44(param_4,1);
}



// ==== FUN_080147c4 @ 080147c4 ====

void FUN_080147c4(void)

{
  uint *puVar1;
  undefined4 uVar2;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  uint local_c;
  
  FUN_0800a350(&local_20,0x14,0);
  puVar1 = DAT_08014bf4;
  DAT_08014bf4[5] = DAT_08014bf4[5] | 0x10;
  *puVar1 = *puVar1 | 1;
  *puVar1 = *puVar1 | 1;
  puVar1[4] = puVar1[4] | 0x20000;
  *puVar1 = *puVar1 | 1;
  *puVar1 = *puVar1 | 1;
  puVar1[5] = puVar1[5] | 0x20;
  *puVar1 = *puVar1 | 1;
  *puVar1 = *puVar1 | 1;
  uVar2 = DAT_08014bf8;
  local_c = *puVar1 & 1;
  local_20 = 0x600;
  local_1c = 2;
  local_18 = 1;
  local_14 = 3;
  local_10 = 7;
  FUN_0800dc80(DAT_08014bf8,&local_20);
  local_20 = 0xc;
  local_1c = 2;
  local_18 = 1;
  local_14 = 3;
  local_10 = 7;
  FUN_0800dc80(uVar2,&local_20);
  local_20 = 0x1800;
  local_1c = 2;
  local_18 = 1;
  local_14 = 3;
  local_10 = 8;
  FUN_0800dc80(uVar2,&local_20);
  return;
}



// ==== FUN_080148fc @ 080148fc ====

void FUN_080148fc(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = DAT_08014bfc;
  *DAT_08014bfc = DAT_08014c08;
  puVar1[1] = 0x1c200;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0xc;
  puVar1[6] = 0;
  puVar1[7] = 0;
  iVar2 = FUN_080171dc();
  if (iVar2 != 0) {
    FUN_0800dc7c();
  }
  puVar1 = DAT_08014c00;
  *DAT_08014c00 = DAT_08014c0c;
  puVar1[1] = 0x1c200;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0xc;
  puVar1[6] = 0;
  puVar1[7] = 0;
  iVar2 = FUN_080171dc();
  if (iVar2 != 0) {
    FUN_0800dc7c();
  }
  puVar1 = DAT_08014c04;
  *DAT_08014c04 = DAT_08014c10;
  puVar1[1] = 0xe1000;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0xc;
  puVar1[6] = 0;
  puVar1[7] = 0;
  iVar2 = FUN_080171dc();
  if (iVar2 != 0) {
    FUN_0800dc7c();
    return;
  }
  return;
}



// ==== FUN_0801497e @ 0801497e ====

undefined4 FUN_0801497e(void)

{
  undefined4 unaff_r7;
  
  FUN_080147c4();
  FUN_080148fc();
  FUN_0801719c(0x25,1,0);
  FUN_080171ba(0x25);
  *(uint *)(*DAT_08014bfc + 0xc) = *(uint *)(*DAT_08014bfc + 0xc) | 0x20;
  FUN_0801719c(0x26,1,0);
  FUN_080171ba(0x26);
  *(uint *)(*DAT_08014c00 + 0xc) = *(uint *)(*DAT_08014c00 + 0xc) | 0x20;
  FUN_0801719c(0x47,1,0);
  FUN_080171ba(0x47);
  *(uint *)(*DAT_08014c04 + 0xc) = *(uint *)(*DAT_08014c04 + 0xc) | 0x20;
  return unaff_r7;
}



// ==== FUN_0801498e @ 0801498e ====

undefined4 FUN_0801498e(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = DAT_08014bfc;
  FUN_0801723a(DAT_08014bfc);
  *piVar1 = DAT_08014c08;
  piVar1[1] = param_1;
  piVar1[2] = 0;
  piVar1[3] = 0;
  piVar1[4] = 0;
  piVar1[5] = 0xc;
  piVar1[6] = 0;
  piVar1[7] = 0;
  iVar2 = FUN_080171dc(piVar1);
  if (iVar2 != 0) {
    FUN_0800dc7c();
  }
  FUN_0801719c(0x25,1,0);
  FUN_080171ba(0x25);
  *(uint *)(*piVar1 + 0xc) = *(uint *)(*piVar1 + 0xc) | 0x20;
  return param_4;
}



// ==== FUN_080149dc @ 080149dc ====

undefined4 FUN_080149dc(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = DAT_08014c00;
  FUN_0801723a(DAT_08014c00);
  *piVar1 = DAT_08014c0c;
  piVar1[1] = param_1;
  piVar1[2] = 0;
  piVar1[3] = 0;
  piVar1[4] = 0;
  piVar1[5] = 0xc;
  piVar1[6] = 0;
  piVar1[7] = 0;
  iVar2 = FUN_080171dc(piVar1);
  if (iVar2 != 0) {
    FUN_0800dc7c();
  }
  FUN_0801719c(0x26,1,0);
  FUN_080171ba(0x26);
  *(uint *)(*piVar1 + 0xc) = *(uint *)(*piVar1 + 0xc) | 0x20;
  return param_4;
}



// ==== FUN_08014a2a @ 08014a2a ====

undefined4 FUN_08014a2a(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = DAT_08014c04;
  FUN_0801723a(DAT_08014c04);
  *piVar1 = DAT_08014c10;
  piVar1[1] = param_1;
  piVar1[2] = 0;
  piVar1[3] = 0;
  piVar1[4] = 0;
  piVar1[5] = 0xc;
  piVar1[6] = 0;
  piVar1[7] = 0;
  iVar2 = FUN_080171dc(piVar1);
  if (iVar2 != 0) {
    FUN_0800dc7c();
  }
  FUN_0801719c(0x47,1,0);
  FUN_080171ba(0x47);
  *(uint *)(*piVar1 + 0xc) = *(uint *)(*piVar1 + 0xc) | 0x20;
  return param_4;
}



// ==== FUN_08014ad0 @ 08014ad0 ====

undefined4 FUN_08014ad0(undefined4 param_1)

{
  undefined4 uStack_8;
  
  uStack_8 = param_1;
  FUN_08017266(DAT_08014bfc,&uStack_8,1,1000);
  return uStack_8;
}



// ==== FUN_08014ae2 @ 08014ae2 ====

uint FUN_08014ae2(void)

{
  return *(uint *)(*DAT_08014bfc + 4) & 0xff;
}



// ==== FUN_08014aec @ 08014aec ====

uint FUN_08014aec(void)

{
  return *(uint *)*DAT_08014bfc >> 7 & 1;
}



// ==== FUN_08014afa @ 08014afa ====

undefined4 FUN_08014afa(undefined4 param_1)

{
  undefined4 uStack_8;
  
  uStack_8 = param_1;
  FUN_08017266(DAT_08014c00,&uStack_8,1,1000);
  return uStack_8;
}



// ==== FUN_08014b0c @ 08014b0c ====

uint FUN_08014b0c(void)

{
  return *(uint *)(*DAT_08014c00 + 4) & 0xff;
}



// ==== FUN_08014b16 @ 08014b16 ====

uint FUN_08014b16(void)

{
  return *(uint *)*DAT_08014c00 >> 7 & 1;
}



// ==== FUN_08014b24 @ 08014b24 ====

undefined4 FUN_08014b24(undefined4 param_1)

{
  undefined4 uStack_8;
  
  uStack_8 = param_1;
  FUN_08017266(DAT_08014c04,&uStack_8,1,1000);
  return uStack_8;
}



// ==== FUN_08014b36 @ 08014b36 ====

uint FUN_08014b36(void)

{
  return *(uint *)(*DAT_08014c04 + 4) & 0xff;
}



// ==== FUN_08014b40 @ 08014b40 ====

uint FUN_08014b40(void)

{
  return *(uint *)*DAT_08014c04 >> 7 & 1;
}



// ==== FUN_08014c18 @ 08014c18 ====

int FUN_08014c18(uint *param_1)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  
  puVar2 = param_1;
  while (((uint)puVar2 & 3) != 0) {
    puVar1 = (uint *)((int)puVar2 + 1);
    uVar4 = *puVar2;
    puVar2 = puVar1;
    if ((char)uVar4 == '\0') goto LAB_08014c4a;
  }
  uVar4 = *puVar2;
  while( true ) {
    uVar4 = uVar4 + 0xfefefeff & ~uVar4;
    uVar3 = uVar4 & 0x80808080;
    if (uVar3 != 0) break;
    puVar2 = puVar2 + 1;
    uVar4 = *puVar2;
  }
  puVar1 = (uint *)((int)puVar2 +
                   ((uint)LZCOUNT((uVar4 & 0x80) << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 |
                                  (uVar3 >> 0x10 & 0xff) << 8 | uVar3 >> 0x18) >> 3) + 1);
LAB_08014c4a:
  return (int)puVar1 - (int)((int)param_1 + 1);
}



// ==== FUN_08014c50 @ 08014c50 ====

undefined8 FUN_08014c50(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  FUN_08016b00();
  param_1[2] = *param_1 + param_1[0x10] * param_1[0xf];
  param_1[0xe] = 0;
  param_1[1] = *param_1;
  param_1[3] = *param_1 + param_1[0x10] * (param_1[0xf] + -1);
  *(undefined1 *)(param_1 + 0x11) = 0xff;
  *(undefined1 *)((int)param_1 + 0x45) = 0xff;
  if (param_2 == 0) {
    if ((param_1[4] != 0) && (iVar1 = FUN_0801619a(param_1 + 4), iVar1 != 0)) {
      *DAT_08015214 = 0x10000000;
      DataSynchronizationBarrier(0xf);
      InstructionSynchronizationBarrier(0xf);
    }
  }
  else {
    FUN_08017514(param_1 + 4);
    FUN_08017514(param_1 + 9);
  }
  FUN_08016b18();
  return CONCAT44(param_4,1);
}



// ==== FUN_08014cca @ 08014cca ====

undefined8 FUN_08014cca(int param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined4 local_18;
  
  iVar1 = FUN_080175a8(param_2 * param_1 + 0x48);
  local_18 = param_4;
  if (iVar1 != 0) {
    FUN_08014cf4(param_1,param_2,iVar1 + 0x48,param_3);
    local_18 = iVar1;
  }
  return CONCAT44(local_18,iVar1);
}



// ==== FUN_08014cf4 @ 08014cf4 ====

void FUN_08014cf4(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 *param_5)

{
  if (param_2 == 0) {
    *param_5 = param_5;
  }
  else {
    *param_5 = param_3;
  }
  param_5[0xf] = param_1;
  param_5[0x10] = param_2;
  FUN_08014c50(param_5,1);
  return;
}



// ==== FUN_08014d0e @ 08014d0e ====

longlong FUN_08014d0e(undefined4 *param_1,uint param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 *puStack_20;
  undefined4 uStack_1c;
  int local_18;
  
  if (param_1 == (undefined4 *)0x0) {
    return (ulonglong)param_2 << 0x20;
  }
  param_1[2] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  local_18 = 0;
  uStack_1c = 0;
  bVar1 = false;
  puStack_20 = param_1;
  while( true ) {
    FUN_08016b00();
    if ((uint)param_1[0xe] < (uint)param_1[0xf]) {
      iVar2 = FUN_080150d4(param_1,0,0);
      if (param_1[9] != 0) {
        iVar2 = FUN_0801619a(param_1 + 9);
      }
      if (iVar2 != 0) {
        *DAT_08015214 = 0x10000000;
        DataSynchronizationBarrier(0xf);
        InstructionSynchronizationBarrier(0xf);
      }
      FUN_08016b18();
      return CONCAT44(puStack_20,1);
    }
    if (local_18 == 0) break;
    if (!bVar1) {
      FUN_080161f8(&puStack_20);
      bVar1 = true;
    }
    FUN_08016b18();
    FUN_08015fc8();
    FUN_08016b00();
    if (*(char *)(param_1 + 0x11) == -1) {
      *(char *)(param_1 + 0x11) = '\0';
    }
    if (*(char *)((int)param_1 + 0x45) == -1) {
      *(undefined1 *)((int)param_1 + 0x45) = 0;
    }
    FUN_08016b18();
    iVar2 = FUN_08016206(&puStack_20,&local_18);
    if (iVar2 != 0) {
      FUN_0801516c(param_1);
      FUN_08015fd4();
      return ZEXT48(puStack_20) << 0x20;
    }
    iVar2 = FUN_080151f4();
    if (iVar2 == 0) {
      FUN_0801516c(param_1);
      FUN_08015fd4();
    }
    else {
      FUN_08016180(param_1 + 4,local_18);
      FUN_0801516c(param_1);
      iVar2 = FUN_08015fd4();
      if (iVar2 == 0) {
        *DAT_08015214 = 0x10000000;
        DataSynchronizationBarrier(0xf);
        InstructionSynchronizationBarrier(0xf);
      }
    }
  }
  FUN_08016b18();
  return ZEXT48(puStack_20) << 0x20;
}



// ==== FUN_08014d22 @ 08014d22 ====

undefined4 FUN_08014d22(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_08014cca(1,0,param_1);
  FUN_08014d0e();
  return uVar1;
}



// ==== FUN_08014e32 @ 08014e32 ====

undefined8 FUN_08014e32(int param_1,undefined4 param_2,undefined4 *param_3,int param_4)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar5 = 0;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    uVar5 = getBasePriority();
  }
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    setBasePriority(0x90);
  }
  DataSynchronizationBarrier(0xf);
  InstructionSynchronizationBarrier(0xf);
  if ((*(uint *)(param_1 + 0x38) < *(uint *)(param_1 + 0x3c)) || (param_4 == 2)) {
    cVar1 = *(char *)(param_1 + 0x45);
    FUN_080150d4(param_1,param_2,param_4);
    if (cVar1 == -1) {
      if (((*(int *)(param_1 + 0x24) != 0) && (iVar3 = FUN_0801619a(param_1 + 0x24), iVar3 != 0)) &&
         (param_3 != (undefined4 *)0x0)) {
        *param_3 = 1;
      }
    }
    else {
      *(char *)(param_1 + 0x45) = cVar1 + '\x01';
    }
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
  }
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    setBasePriority(uVar5);
  }
  return CONCAT44(param_4,uVar4);
}



// ==== FUN_08014e98 @ 08014e98 ====

longlong FUN_08014e98(uint param_1,undefined4 param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  uint uStack_20;
  undefined4 uStack_1c;
  int local_18;
  
  bVar1 = false;
  uStack_20 = param_1;
  uStack_1c = param_2;
  local_18 = param_3;
  while( true ) {
    FUN_08016b00();
    iVar2 = *(int *)(param_1 + 0x38);
    if (iVar2 != 0) {
      FUN_08015148(param_1,param_2);
      *(int *)(param_1 + 0x38) = iVar2 + -1;
      if ((*(int *)(param_1 + 0x10) != 0) && (iVar2 = FUN_0801619a(param_1 + 0x10), iVar2 != 0)) {
        *DAT_08015214 = 0x10000000;
        DataSynchronizationBarrier(0xf);
        InstructionSynchronizationBarrier(0xf);
      }
      FUN_08016b18();
      return CONCAT44(uStack_20,1);
    }
    if (local_18 == 0) break;
    if (!bVar1) {
      FUN_080161f8(&uStack_20);
      bVar1 = true;
    }
    FUN_08016b18();
    FUN_08015fc8();
    FUN_08016b00();
    if (*(char *)(param_1 + 0x44) == -1) {
      *(char *)(param_1 + 0x44) = '\0';
    }
    if (*(char *)(param_1 + 0x45) == -1) {
      *(undefined1 *)(param_1 + 0x45) = 0;
    }
    FUN_08016b18();
    iVar2 = FUN_08016206(&uStack_20,&local_18);
    if (iVar2 == 0) {
      iVar2 = FUN_080151dc();
      if (iVar2 == 0) {
        FUN_0801516c(param_1);
        FUN_08015fd4();
      }
      else {
        FUN_08016180(param_1 + 0x24,local_18);
        FUN_0801516c(param_1);
        iVar2 = FUN_08015fd4();
        if (iVar2 == 0) {
          *DAT_08015214 = 0x10000000;
          DataSynchronizationBarrier(0xf);
          InstructionSynchronizationBarrier(0xf);
        }
      }
    }
    else {
      FUN_0801516c(param_1);
      FUN_08015fd4();
      iVar2 = FUN_080151dc(param_1);
      if (iVar2 != 0) {
        return (ulonglong)uStack_20 << 0x20;
      }
    }
  }
  FUN_08016b18();
  return (ulonglong)uStack_20 << 0x20;
}



// ==== FUN_08014f90 @ 08014f90 ====

undefined4 FUN_08014f90(int *param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 auStack_20 [8];
  int *piStack_18;
  int local_14;
  
  bVar1 = false;
  iVar4 = 0;
  piStack_18 = param_1;
  local_14 = param_2;
  while( true ) {
    FUN_08016b00();
    if (param_1[0xe] != 0) {
      param_1[0xe] = param_1[0xe] + -1;
      if (*param_1 == 0) {
        iVar4 = FUN_080164aa();
        param_1[2] = iVar4;
      }
      if ((param_1[4] != 0) && (iVar4 = FUN_0801619a(param_1 + 4), iVar4 != 0)) {
        *DAT_08015214 = 0x10000000;
        DataSynchronizationBarrier(0xf);
        InstructionSynchronizationBarrier(0xf);
      }
      FUN_08016b18();
      return 1;
    }
    if (local_14 == 0) break;
    if (!bVar1) {
      FUN_080161f8(auStack_20);
      bVar1 = true;
    }
    FUN_08016b18();
    FUN_08015fc8();
    FUN_08016b00();
    if ((char)param_1[0x11] == -1) {
      *(char *)(param_1 + 0x11) = '\0';
    }
    if (*(char *)((int)param_1 + 0x45) == -1) {
      *(undefined1 *)((int)param_1 + 0x45) = 0;
    }
    FUN_08016b18();
    iVar2 = FUN_08016206(auStack_20,&local_14);
    if (iVar2 == 0) {
      iVar2 = FUN_080151dc();
      if (iVar2 == 0) {
        FUN_0801516c(param_1);
        FUN_08015fd4();
      }
      else {
        if (*param_1 == 0) {
          FUN_08016b00();
          iVar4 = FUN_08016342(param_1[2]);
          FUN_08016b18();
        }
        FUN_08016180(param_1 + 9,local_14);
        FUN_0801516c(param_1);
        iVar2 = FUN_08015fd4();
        if (iVar2 == 0) {
          *DAT_08015214 = 0x10000000;
          DataSynchronizationBarrier(0xf);
          InstructionSynchronizationBarrier(0xf);
        }
      }
    }
    else {
      FUN_0801516c(param_1);
      FUN_08015fd4();
      iVar2 = FUN_080151dc(param_1);
      if (iVar2 != 0) {
        if (iVar4 != 0) {
          FUN_08016b00();
          uVar3 = FUN_080150c0(param_1);
          FUN_0801643e(param_1[2],uVar3);
          FUN_08016b18();
        }
        return 0;
      }
    }
  }
  FUN_08016b18();
  return 0;
}



// ==== FUN_080150c0 @ 080150c0 ====

int FUN_080150c0(int param_1)

{
  if (*(int *)(param_1 + 0x24) != 0) {
    return 7 - **(int **)(param_1 + 0x30);
  }
  return 0;
}



// ==== FUN_080150d4 @ 080150d4 ====

undefined8 FUN_080150d4(uint *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  uVar2 = param_1[0xe];
  if (param_1[0x10] == 0) {
    if (*param_1 == 0) {
      uVar3 = FUN_080163cc(param_1[2]);
      param_1[2] = 0;
    }
  }
  else if (param_3 == 0) {
    FUN_0800a408(param_1[1]);
    uVar1 = param_1[1];
    param_1[1] = uVar1 + param_1[0x10];
    if (param_1[2] <= uVar1 + param_1[0x10]) {
      param_1[1] = *param_1;
    }
  }
  else {
    FUN_0800a408(param_1[3]);
    uVar1 = param_1[3];
    param_1[3] = uVar1 - param_1[0x10];
    if (uVar1 - param_1[0x10] < *param_1) {
      param_1[3] = param_1[2] - param_1[0x10];
    }
    if ((param_3 == 2) && (uVar2 != 0)) {
      uVar2 = uVar2 - 1;
    }
  }
  param_1[0xe] = uVar2 + 1;
  return CONCAT44(param_4,uVar3);
}



// ==== FUN_08015148 @ 08015148 ====

void FUN_08015148(undefined4 *param_1,undefined4 param_2)

{
  uint uVar1;
  
  if (param_1[0x10] != 0) {
    uVar1 = param_1[0x10] + param_1[3];
    param_1[3] = uVar1;
    if ((uint)param_1[2] <= uVar1) {
      param_1[3] = *param_1;
    }
    FUN_0800a408(param_2,param_1[3],param_1[0x10]);
    return;
  }
  return;
}



// ==== FUN_0801516c @ 0801516c ====

void FUN_0801516c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  char cVar2;
  
  FUN_08016b00();
  cVar2 = *(char *)(param_1 + 0x45);
  while (('\0' < cVar2 && (*(int *)(param_1 + 0x24) != 0))) {
    iVar1 = FUN_0801619a(param_1 + 0x24);
    if (iVar1 != 0) {
      FUN_08016256();
    }
    cVar2 = cVar2 + -1;
  }
  *(undefined1 *)(param_1 + 0x45) = 0xff;
  FUN_08016b18();
  FUN_08016b00();
  cVar2 = *(char *)(param_1 + 0x44);
  while (('\0' < cVar2 && (*(int *)(param_1 + 0x10) != 0))) {
    iVar1 = FUN_0801619a(param_1 + 0x10);
    if (iVar1 != 0) {
      FUN_08016256();
    }
    cVar2 = cVar2 + -1;
  }
  *(char *)(param_1 + 0x44) = -1;
  FUN_08016b18(param_4);
  return;
}



// ==== FUN_080151dc @ 080151dc ====

uint FUN_080151dc(int param_1)

{
  int iVar1;
  
  FUN_08016b00();
  iVar1 = *(int *)(param_1 + 0x38);
  FUN_08016b18();
  return -(uint)(iVar1 == 0) >> 0x1f;
}



// ==== FUN_080151f4 @ 080151f4 ====

bool FUN_080151f4(int param_1)

{
  int iVar1;
  int iVar2;
  
  FUN_08016b00();
  iVar1 = *(int *)(param_1 + 0x38);
  iVar2 = *(int *)(param_1 + 0x3c);
  FUN_08016b18();
  return iVar1 == iVar2;
}



// ==== FUN_08015218 @ 08015218 ====

void FUN_08015218(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_08016e84();
                    /* WARNING: Could not recover jumptable at 0x0801522a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar1 + 0x20))(param_1);
  return;
}



// ==== FUN_0801522c @ 0801522c ====

void FUN_0801522c(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_08016e84();
                    /* WARNING: Could not recover jumptable at 0x0801523e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar1 + 0x28))(param_1);
  return;
}



// ==== FUN_08015240 @ 08015240 ====

char * FUN_08015240(uint *param_1,char param_2,uint param_3)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  bool bVar6;
  
  while (((uint)param_1 & 3) != 0) {
    bVar6 = param_3 == 0;
    param_3 = param_3 - 1;
    bVar5 = param_3 == 0;
    if (bVar6) goto LAB_08015290;
    puVar1 = (uint *)((int)param_1 + 1);
    uVar2 = *param_1;
    param_1 = puVar1;
    if (param_2 == (char)uVar2) goto LAB_08015294;
  }
  uVar2 = param_3 - 8;
  if (7 < param_3) {
    uVar2 = param_3 - 4;
    puVar1 = param_1;
    do {
      param_1 = puVar1;
      bVar5 = 3 < uVar2;
      uVar2 = uVar2 - 4;
      uVar4 = uVar2;
      if (bVar5) {
        uVar4 = *param_1 ^ CONCAT22(CONCAT11(param_2,param_2),CONCAT11(param_2,param_2));
        uVar4 = uVar4 + 0xfefefeff & ~uVar4 & 0x80808080;
      }
      puVar1 = param_1 + 1;
    } while (uVar4 == 0);
  }
  iVar3 = uVar2 + 8;
  puVar1 = param_1;
  do {
    param_1 = (uint *)((int)puVar1 + 1);
    bVar6 = iVar3 != 0;
    iVar3 = iVar3 + -1;
    bVar5 = iVar3 == 0;
    if (bVar6) {
      bVar5 = param_2 == (char)*puVar1;
    }
    puVar1 = param_1;
  } while (bVar6 && !bVar5);
LAB_08015290:
  puVar1 = param_1;
  if (!bVar5) {
    puVar1 = (uint *)0x1;
  }
LAB_08015294:
  return (char *)((int)puVar1 + -1);
}



// ==== FUN_08015298 @ 08015298 ====

undefined4 FUN_08015298(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_080152a8();
  return uVar1;
}



// ==== FUN_080152a8 @ 080152a8 ====

longlong FUN_080152a8(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_2 >> 0x14 & 0x7ff;
  uVar2 = uVar1 - 0x3fe;
  if (uVar2 == 0 || uVar1 < 0x3fe) {
    param_2 = param_2 & 0x80000000;
    param_1 = 0;
  }
  else if ((int)uVar2 < 0x35) {
    if ((int)uVar2 < 0x15) {
      return (ulonglong)(param_2 & ~(0x1fffffU >> (uVar2 & 0xff))) << 0x20;
    }
    return CONCAT44(param_2,param_1 & ~(0xffffffffU >> (uVar1 - 0x413 & 0xff)));
  }
  return CONCAT44(param_2,param_1);
}



// ==== FUN_080152e0 @ 080152e0 ====

uint FUN_080152e0(uint param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = (param_2 & 0x7fffffff) >> 0x14;
  iVar2 = -uVar3;
  iVar4 = iVar2 + 0x41e;
  uVar1 = (int)param_2 >> 0x1f;
  if (iVar4 != 0 && uVar3 < 0x41f) {
    uVar3 = UnsignedSaturate(iVar4,7);
    UnsignedDoesSaturate(iVar4,7);
    return ((param_2 << 0xb | param_1 >> 0x15 | 0x80000000) >> (uVar3 & 0xff)) + uVar1 ^ uVar1;
  }
  uVar3 = 0;
  if (iVar2 != -0x7ff) {
    uVar3 = ~uVar1 ^ 0x80000000;
  }
  return uVar3;
}



// ==== FUN_08015316 @ 08015316 ====

void FUN_08015316(char *param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  
  cVar1 = *param_2;
  if (cVar1 == '\0') {
    return;
  }
  do {
    param_1 = (char *)FUN_0800a588(param_1,cVar1);
    pcVar2 = param_1;
    pcVar3 = param_2;
    if (param_1 == (char *)0x0) {
      return;
    }
    do {
      pcVar3 = pcVar3 + 1;
      if (*pcVar3 == '\0') {
        return;
      }
      pcVar2 = pcVar2 + 1;
    } while (*pcVar2 == *pcVar3);
    param_1 = param_1 + 1;
  } while( true );
}



// ==== FUN_0801534a @ 0801534a ====

undefined4 FUN_0801534a(void)

{
  undefined4 unaff_r7;
  
  FUN_08017a8c();
  return unaff_r7;
}



// ==== FUN_08015352 @ 08015352 ====

undefined4 FUN_08015352(void)

{
  undefined4 unaff_r7;
  
  FUN_08017a94();
  return unaff_r7;
}



// ==== FUN_08015362 @ 08015362 ====

undefined4 FUN_08015362(void)

{
  undefined4 unaff_r7;
  
  FUN_08017fb4();
  return unaff_r7;
}



// ==== FUN_0801536e @ 0801536e ====

undefined4 FUN_0801536e(void)

{
  undefined4 unaff_r7;
  
  FUN_08017fb8();
  return unaff_r7;
}



// ==== FUN_0801537a @ 0801537a ====

void FUN_0801537a(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_08016e84();
                    /* WARNING: Could not recover jumptable at 0x0801538c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar1 + 0x2c))(param_1);
  return;
}



// ==== FUN_08015390 @ 08015390 ====

undefined4 FUN_08015390(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_080153a0();
  return uVar1;
}



// ==== FUN_080153a0 @ 080153a0 ====

longlong FUN_080153a0(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_2 >> 0x14 & 0x7ff;
  uVar2 = uVar1 - 0x3fe;
  if (uVar2 == 0 || uVar1 < 0x3fe) {
    param_2 = param_2 & 0x80000000;
    if (uVar2 == 0) {
      param_2 = param_2 | 0x3ff00000;
    }
    param_1 = 0;
  }
  else if ((int)uVar2 < 0x35) {
    if (0x14 < (int)uVar2) {
      uVar1 = 0xffffffff >> (uVar1 - 0x413 & 0xff);
      param_1 = param_1 & ~(uVar1 >> 1);
      return CONCAT44(param_2 + CARRY4(param_1,uVar1),param_1 + uVar1 & ~uVar1);
    }
    uVar1 = 0x1fffff >> (uVar2 & 0xff);
    return (ulonglong)((param_2 & ~(uVar1 >> 1)) + uVar1 & ~uVar1) << 0x20;
  }
  return CONCAT44(param_2,param_1);
}



// ==== FUN_080153f4 @ 080153f4 ====

longlong FUN_080153f4(uint param_1,uint param_2,uint param_3,uint param_4)

{
  bool bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  bool bVar11;
  
  if (-1 < (int)(param_2 ^ param_4)) {
    uVar5 = param_1 - param_3;
    iVar9 = (param_2 - param_4) - (uint)(param_3 > param_1);
    if (param_2 <= param_4 && (uint)(param_3 <= param_1) <= param_2 - param_4) {
      bVar11 = param_1 < uVar5;
      param_1 = param_1 - uVar5;
      param_2 = (param_2 - iVar9) - (uint)bVar11;
      bVar11 = CARRY4(param_3,uVar5);
      param_3 = param_3 + uVar5;
      param_4 = param_4 + iVar9 + (uint)bVar11;
    }
    if (param_2 << 1 < 0xffe00000 && 0x1fffff < param_4 * 2) {
      uVar5 = (param_2 >> 0x14) - (param_4 >> 0x14);
      if (0x35 < (int)uVar5) goto LAB_0801564a;
      param_4 = (param_4 << 0xb | 0x80000000) >> 0xb;
    }
    else {
      if (0xffdfffff < param_2 << 1) {
        return CONCAT44(param_2,param_1);
      }
      if (param_3 == 0 && (param_4 & 0x7fffffff) == 0) {
LAB_0801564a:
        return CONCAT44(param_2,param_1);
      }
      if (param_2 * 2 < 0x200000) {
        bVar11 = CARRY4(param_1,param_3);
        param_1 = param_1 + param_3;
        param_2 = param_2 + (param_4 & 0x7fffffff) + (uint)bVar11;
        goto LAB_0801564a;
      }
      param_4 = param_4 & 0x7fffffff;
      uVar5 = (param_2 >> 0x14) - 1;
      if (0x34 < (int)uVar5) goto LAB_0801564a;
    }
    uVar8 = (int)(param_2 << 0xb | 0x80000000) >> 0xb;
    uVar10 = uVar5 - 0x20;
    if (uVar10 == 0 || (int)uVar5 < 0x20) {
      uVar4 = param_3 >> (uVar5 & 0xff);
      uVar3 = (param_3 >> (uVar5 & 0x1f) | param_3 << 0x20 - (uVar5 & 0x1f)) ^ uVar4;
      uVar10 = param_4 >> (uVar5 & 0x1f) | param_4 << 0x20 - (uVar5 & 0x1f);
      uVar6 = (uVar10 << (uVar5 & 0xff)) >> (uVar5 & 0xff);
      uVar4 = uVar4 ^ uVar10 ^ uVar6;
      uVar5 = param_1 + uVar4;
      uVar10 = uVar8 + uVar6 + (uint)CARRY4(param_1,uVar4);
      if (!CARRY4(uVar8,uVar6) && !CARRY4(uVar8 + uVar6,(uint)CARRY4(param_1,uVar4)))
      goto LAB_08015600;
    }
    else {
      uVar4 = param_4 >> (uVar10 & 0xff);
      uVar3 = (param_4 >> (uVar10 & 0x1f) | param_4 << 0x20 - (uVar10 & 0x1f)) ^ uVar4;
      if (param_3 != 0) {
        uVar3 = uVar3 | 1;
      }
      uVar5 = param_1 + uVar4;
      uVar10 = uVar8 + CARRY4(param_1,uVar4);
      if (!CARRY4(uVar8,(uint)CARRY4(param_1,uVar4))) goto LAB_08015600;
    }
    uVar8 = uVar10 & 1;
    uVar10 = uVar10 >> 1;
    bVar2 = (byte)uVar5;
    uVar5 = (uint)(uVar8 != 0) << 0x1f | uVar5 >> 1;
    uVar8 = uVar3 & 1;
    uVar3 = (uint)(bVar2 & 1) << 0x1f | uVar3 >> 1;
    if (uVar8 != 0) {
      uVar3 = uVar3 | 1;
    }
LAB_08015600:
    bVar11 = 0x80000000 < uVar3 || uVar3 + 0x80000000 < (uint)((uVar5 & 1) != 0);
    uVar8 = uVar10 + 0x100000 + (param_2 & 0xfff00000) + (uint)CARRY4(uVar5,(uint)bVar11);
    if (0xffdfffff < uVar8 * 2) {
      return (ulonglong)(uVar8 & 0xfff00000) << 0x20;
    }
    return CONCAT44(uVar8,uVar5 + bVar11);
  }
  param_4 = param_4 ^ 0x80000000;
  uVar5 = param_1 - param_3;
  if (param_2 <= param_4 && (uint)(param_3 <= param_1) <= param_2 - param_4) {
    uVar8 = (param_2 - param_4) - (uint)(param_3 > param_1) ^ 0x80000000;
    bVar11 = param_1 < uVar5;
    param_1 = param_1 - uVar5;
    param_2 = (param_2 - uVar8) - (uint)bVar11;
    bVar11 = CARRY4(param_3,uVar5);
    param_3 = param_3 + uVar5;
    param_4 = param_4 + uVar8 + (uint)bVar11;
  }
  uVar5 = param_2;
  if (param_2 << 1 < 0xffe00000 && 0x1fffff < param_4 * 2) {
    uVar8 = param_2 >> 0x14;
    uVar10 = uVar8 - (param_4 >> 0x14);
    if (0x36 < (int)uVar10) goto LAB_0801552a;
    uVar4 = param_4 << 0xb | 0x80000000;
    if ((int)uVar10 < 2) {
      uVar4 = uVar4 | param_3 >> 0x15;
      if (uVar10 == 1) {
        param_3 = param_3 << 10;
        uVar4 = uVar4 >> 1;
      }
      else {
        param_3 = param_3 << 0xb;
      }
      uVar10 = param_1 >> 0x15;
      uVar5 = param_1 * 0x800;
      param_1 = uVar5 - param_3;
      uVar10 = ((param_2 << 0xb | 0x80000000 | uVar10) - uVar4) - (uint)(uVar5 < param_3);
      uVar5 = uVar8 << 0x14;
      if (-1 < (int)uVar10) {
        if (uVar10 == 0) {
          iVar9 = LZCOUNT(param_1);
          uVar10 = param_1 << iVar9;
          uVar5 = 0;
          if (uVar10 == 0) goto LAB_0801552a;
          param_1 = 0;
          iVar9 = iVar9 + 0x20;
        }
        else {
          iVar9 = LZCOUNT(uVar10);
          uVar10 = uVar10 << iVar9 | param_1 >> (0x20U - iVar9 & 0xff);
          param_1 = param_1 << iVar9;
        }
        uVar4 = -((int)param_2 >> 0x1f) | uVar8 << 0x15;
        uVar5 = uVar4 + iVar9 * -0x200000;
        uVar6 = uVar5 & 0xfffffffe;
        uVar8 = ((int)param_2 >> 0x1f) * -0x80000000;
        uVar5 = uVar5 >> 1 | uVar8;
        if (uVar4 < (uint)(iVar9 * 0x200000) || uVar6 == 0) {
          uVar6 = 0x200000 - uVar6 >> 0x15;
          uVar5 = uVar10 >> (uVar6 & 0x1f);
          uVar4 = uVar10 << 0x20 - (uVar6 & 0x1f);
          uVar10 = uVar10 >> (uVar6 & 0xff);
          param_1 = param_1 >> (uVar6 & 0xff) ^ (uVar5 | uVar4) ^ uVar10;
          uVar5 = uVar8;
        }
      }
      uVar8 = param_1 >> 0xb | uVar10 << 0x15;
      bVar11 = (param_1 >> 10 & 1) != 0 && (param_1 >> 0xb & 1) != 0;
      param_1 = uVar8 + bVar11;
      uVar5 = uVar5 + ((uVar10 & 0x7fffffff) >> 0xb) + (uint)CARRY4(uVar8,(uint)bVar11);
      goto LAB_0801552a;
    }
    uVar4 = uVar4 >> 0xb;
LAB_080154c0:
    uVar8 = param_2 >> 0x14;
    uVar5 = (param_2 << 0xb | 0x80000000) >> 0xb;
    uVar6 = uVar10 - 0x20;
    if (uVar6 == 0 || (int)uVar10 < 0x20) {
      uVar6 = param_3 >> (uVar10 & 0xff);
      uVar7 = (param_3 >> (uVar10 & 0x1f) | param_3 << 0x20 - (uVar10 & 0x1f)) ^ uVar6;
      uVar3 = uVar4 >> (uVar10 & 0xff);
      uVar4 = uVar6 ^ (uVar4 >> (uVar10 & 0x1f) | uVar4 << 0x20 - (uVar10 & 0x1f)) ^ uVar3;
      uVar10 = (param_1 - uVar4) - (uint)(uVar7 != 0);
      uVar5 = (uVar5 - uVar3) - (uint)(param_1 <= uVar4 && (uint)(uVar7 == 0) <= param_1 - uVar4);
    }
    else {
      uVar3 = uVar4 >> (uVar6 & 0xff);
      uVar7 = (param_3 | param_3 << 0x10) >> 0x10 | uVar4 << (0x20 - uVar6 & 0xff);
      uVar10 = (param_1 - uVar3) - (uint)(uVar7 != 0);
      uVar5 = uVar5 - (param_1 <= uVar3 && (uint)(uVar7 == 0) <= param_1 - uVar3);
    }
    uVar4 = -uVar7;
    if (((uVar5 & 0x100000) == 0) && (uVar8 = uVar8 - 1, (uVar8 & 0x7ff) != 0)) {
      bVar1 = (uVar4 & 0x80000000) != 0;
      uVar4 = uVar7 * -2;
      uVar6 = uVar10 * 2;
      bVar11 = CARRY4(uVar10,uVar10);
      uVar10 = uVar10 * 2 + (uint)bVar1;
      uVar5 = uVar5 * 2 + (uint)(bVar11 || CARRY4(uVar6,(uint)bVar1));
    }
    bVar11 = 0x80000000 < uVar4 || uVar4 + 0x80000000 < (uint)((uVar10 & 1) != 0);
    param_1 = uVar10 + bVar11;
    uVar5 = (uVar5 & 0xffefffff) + uVar8 * 0x100000 + (uint)CARRY4(uVar10,(uint)bVar11);
  }
  else {
    if (0xffdfffff < param_2 * 2) {
      if (param_2 * 2 != 0xffe00000 || 0xffdfffff < param_4 << 1) {
        uVar5 = 0xffffffff;
      }
      goto LAB_0801552a;
    }
    uVar4 = param_4 & 0x7fffffff;
    if (param_3 != 0 || (param_4 & 0x7fffffff) != 0) {
      if (0x3fffff < param_2 * 2) {
        uVar10 = (param_2 >> 0x14) - 1;
        if (0x34 < (int)uVar10) goto LAB_0801552a;
        goto LAB_080154c0;
      }
      bVar11 = param_1 < param_3;
      param_1 = param_1 - param_3;
      uVar5 = (param_2 - uVar4) - (uint)bVar11;
    }
    if (param_1 == 0 && (uVar5 & 0x7fffffff) == 0) {
      uVar5 = 0;
    }
  }
LAB_0801552a:
  return CONCAT44(uVar5,param_1);
}



// ==== FUN_08015570 @ 08015570 ====

longlong FUN_08015570(uint param_1,uint param_2,uint param_3,uint param_4)

{
  bool bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  bool bVar11;
  
  if ((int)(param_2 ^ param_4) < 0) {
    param_4 = param_4 ^ 0x80000000;
    uVar6 = param_1 - param_3;
    iVar10 = (param_2 - param_4) - (uint)(param_3 > param_1);
    if (param_2 <= param_4 && (uint)(param_3 <= param_1) <= param_2 - param_4) {
      bVar11 = param_1 < uVar6;
      param_1 = param_1 - uVar6;
      param_2 = (param_2 - iVar10) - (uint)bVar11;
      bVar11 = CARRY4(param_3,uVar6);
      param_3 = param_3 + uVar6;
      param_4 = param_4 + iVar10 + (uint)bVar11;
    }
    if (param_2 << 1 < 0xffe00000 && 0x1fffff < param_4 * 2) {
      uVar6 = (param_2 >> 0x14) - (param_4 >> 0x14);
      if (0x35 < (int)uVar6) goto LAB_0801564a;
      param_4 = (param_4 << 0xb | 0x80000000) >> 0xb;
    }
    else {
      if (0xffdfffff < param_2 << 1) {
        return CONCAT44(param_2,param_1);
      }
      if (param_3 == 0 && (param_4 & 0x7fffffff) == 0) {
LAB_0801564a:
        return CONCAT44(param_2,param_1);
      }
      if (param_2 * 2 < 0x200000) {
        bVar11 = CARRY4(param_1,param_3);
        param_1 = param_1 + param_3;
        param_2 = param_2 + (param_4 & 0x7fffffff) + (uint)bVar11;
        goto LAB_0801564a;
      }
      param_4 = param_4 & 0x7fffffff;
      uVar6 = (param_2 >> 0x14) - 1;
      if (0x34 < (int)uVar6) goto LAB_0801564a;
    }
    uVar3 = (int)(param_2 << 0xb | 0x80000000) >> 0xb;
    uVar8 = uVar6 - 0x20;
    if (uVar8 == 0 || (int)uVar6 < 0x20) {
      uVar4 = param_3 >> (uVar6 & 0xff);
      uVar9 = (param_3 >> (uVar6 & 0x1f) | param_3 << 0x20 - (uVar6 & 0x1f)) ^ uVar4;
      uVar8 = param_4 >> (uVar6 & 0x1f) | param_4 << 0x20 - (uVar6 & 0x1f);
      uVar5 = (uVar8 << (uVar6 & 0xff)) >> (uVar6 & 0xff);
      uVar4 = uVar4 ^ uVar8 ^ uVar5;
      uVar6 = param_1 + uVar4;
      uVar8 = uVar3 + uVar5 + (uint)CARRY4(param_1,uVar4);
      if (!CARRY4(uVar3,uVar5) && !CARRY4(uVar3 + uVar5,(uint)CARRY4(param_1,uVar4)))
      goto LAB_08015600;
    }
    else {
      uVar4 = param_4 >> (uVar8 & 0xff);
      uVar9 = (param_4 >> (uVar8 & 0x1f) | param_4 << 0x20 - (uVar8 & 0x1f)) ^ uVar4;
      if (param_3 != 0) {
        uVar9 = uVar9 | 1;
      }
      uVar6 = param_1 + uVar4;
      uVar8 = uVar3 + CARRY4(param_1,uVar4);
      if (!CARRY4(uVar3,(uint)CARRY4(param_1,uVar4))) goto LAB_08015600;
    }
    uVar3 = uVar8 & 1;
    uVar8 = uVar8 >> 1;
    bVar2 = (byte)uVar6;
    uVar6 = (uint)(uVar3 != 0) << 0x1f | uVar6 >> 1;
    uVar3 = uVar9 & 1;
    uVar9 = (uint)(bVar2 & 1) << 0x1f | uVar9 >> 1;
    if (uVar3 != 0) {
      uVar9 = uVar9 | 1;
    }
LAB_08015600:
    bVar11 = 0x80000000 < uVar9 || uVar9 + 0x80000000 < (uint)((uVar6 & 1) != 0);
    uVar3 = uVar8 + 0x100000 + (param_2 & 0xfff00000) + (uint)CARRY4(uVar6,(uint)bVar11);
    if (0xffdfffff < uVar3 * 2) {
      return (ulonglong)(uVar3 & 0xfff00000) << 0x20;
    }
    return CONCAT44(uVar3,uVar6 + bVar11);
  }
  uVar6 = param_1 - param_3;
  if (param_2 <= param_4 && (uint)(param_3 <= param_1) <= param_2 - param_4) {
    uVar3 = (param_2 - param_4) - (uint)(param_3 > param_1) ^ 0x80000000;
    bVar11 = param_1 < uVar6;
    param_1 = param_1 - uVar6;
    param_2 = (param_2 - uVar3) - (uint)bVar11;
    bVar11 = CARRY4(param_3,uVar6);
    param_3 = param_3 + uVar6;
    param_4 = param_4 + uVar3 + (uint)bVar11;
  }
  uVar6 = param_2;
  if (param_2 << 1 < 0xffe00000 && 0x1fffff < param_4 * 2) {
    uVar3 = param_2 >> 0x14;
    uVar8 = uVar3 - (param_4 >> 0x14);
    if (0x36 < (int)uVar8) goto LAB_0801552a;
    uVar4 = param_4 << 0xb | 0x80000000;
    if ((int)uVar8 < 2) {
      uVar4 = uVar4 | param_3 >> 0x15;
      if (uVar8 == 1) {
        param_3 = param_3 << 10;
        uVar4 = uVar4 >> 1;
      }
      else {
        param_3 = param_3 << 0xb;
      }
      uVar8 = param_1 >> 0x15;
      uVar6 = param_1 * 0x800;
      param_1 = uVar6 - param_3;
      uVar8 = ((param_2 << 0xb | 0x80000000 | uVar8) - uVar4) - (uint)(uVar6 < param_3);
      uVar6 = uVar3 << 0x14;
      if (-1 < (int)uVar8) {
        if (uVar8 == 0) {
          iVar10 = LZCOUNT(param_1);
          uVar8 = param_1 << iVar10;
          uVar6 = 0;
          if (uVar8 == 0) goto LAB_0801552a;
          param_1 = 0;
          iVar10 = iVar10 + 0x20;
        }
        else {
          iVar10 = LZCOUNT(uVar8);
          uVar8 = uVar8 << iVar10 | param_1 >> (0x20U - iVar10 & 0xff);
          param_1 = param_1 << iVar10;
        }
        uVar4 = -((int)param_2 >> 0x1f) | uVar3 << 0x15;
        uVar6 = uVar4 + iVar10 * -0x200000;
        uVar5 = uVar6 & 0xfffffffe;
        uVar3 = ((int)param_2 >> 0x1f) * -0x80000000;
        uVar6 = uVar6 >> 1 | uVar3;
        if (uVar4 < (uint)(iVar10 * 0x200000) || uVar5 == 0) {
          uVar5 = 0x200000 - uVar5 >> 0x15;
          uVar6 = uVar8 >> (uVar5 & 0x1f);
          uVar4 = uVar8 << 0x20 - (uVar5 & 0x1f);
          uVar8 = uVar8 >> (uVar5 & 0xff);
          param_1 = param_1 >> (uVar5 & 0xff) ^ (uVar6 | uVar4) ^ uVar8;
          uVar6 = uVar3;
        }
      }
      uVar3 = param_1 >> 0xb | uVar8 << 0x15;
      bVar11 = (param_1 >> 10 & 1) != 0 && (param_1 >> 0xb & 1) != 0;
      param_1 = uVar3 + bVar11;
      uVar6 = uVar6 + ((uVar8 & 0x7fffffff) >> 0xb) + (uint)CARRY4(uVar3,(uint)bVar11);
      goto LAB_0801552a;
    }
    uVar4 = uVar4 >> 0xb;
LAB_080154c0:
    uVar3 = param_2 >> 0x14;
    uVar6 = (param_2 << 0xb | 0x80000000) >> 0xb;
    uVar5 = uVar8 - 0x20;
    if (uVar5 == 0 || (int)uVar8 < 0x20) {
      uVar5 = param_3 >> (uVar8 & 0xff);
      uVar7 = (param_3 >> (uVar8 & 0x1f) | param_3 << 0x20 - (uVar8 & 0x1f)) ^ uVar5;
      uVar9 = uVar4 >> (uVar8 & 0xff);
      uVar4 = uVar5 ^ (uVar4 >> (uVar8 & 0x1f) | uVar4 << 0x20 - (uVar8 & 0x1f)) ^ uVar9;
      uVar8 = (param_1 - uVar4) - (uint)(uVar7 != 0);
      uVar6 = (uVar6 - uVar9) - (uint)(param_1 <= uVar4 && (uint)(uVar7 == 0) <= param_1 - uVar4);
    }
    else {
      uVar9 = uVar4 >> (uVar5 & 0xff);
      uVar7 = (param_3 | param_3 << 0x10) >> 0x10 | uVar4 << (0x20 - uVar5 & 0xff);
      uVar8 = (param_1 - uVar9) - (uint)(uVar7 != 0);
      uVar6 = uVar6 - (param_1 <= uVar9 && (uint)(uVar7 == 0) <= param_1 - uVar9);
    }
    uVar4 = -uVar7;
    if (((uVar6 & 0x100000) == 0) && (uVar3 = uVar3 - 1, (uVar3 & 0x7ff) != 0)) {
      bVar1 = (uVar4 & 0x80000000) != 0;
      uVar4 = uVar7 * -2;
      uVar5 = uVar8 * 2;
      bVar11 = CARRY4(uVar8,uVar8);
      uVar8 = uVar8 * 2 + (uint)bVar1;
      uVar6 = uVar6 * 2 + (uint)(bVar11 || CARRY4(uVar5,(uint)bVar1));
    }
    bVar11 = 0x80000000 < uVar4 || uVar4 + 0x80000000 < (uint)((uVar8 & 1) != 0);
    param_1 = uVar8 + bVar11;
    uVar6 = (uVar6 & 0xffefffff) + uVar3 * 0x100000 + (uint)CARRY4(uVar8,(uint)bVar11);
  }
  else {
    if (0xffdfffff < param_2 * 2) {
      if (param_2 * 2 != 0xffe00000 || 0xffdfffff < param_4 << 1) {
        uVar6 = 0xffffffff;
      }
      goto LAB_0801552a;
    }
    uVar4 = param_4 & 0x7fffffff;
    if (param_3 != 0 || (param_4 & 0x7fffffff) != 0) {
      if (0x3fffff < param_2 * 2) {
        uVar8 = (param_2 >> 0x14) - 1;
        if (0x34 < (int)uVar8) goto LAB_0801552a;
        goto LAB_080154c0;
      }
      bVar11 = param_1 < param_3;
      param_1 = param_1 - param_3;
      uVar6 = (param_2 - uVar4) - (uint)bVar11;
    }
    if (param_1 == 0 && (uVar6 & 0x7fffffff) == 0) {
      uVar6 = 0;
    }
  }
LAB_0801552a:
  return CONCAT44(uVar6,param_1);
}



// ==== FUN_08015654 @ 08015654 ====

undefined4 FUN_08015654(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_08015664();
  return uVar1;
}



// ==== FUN_08015664 @ 08015664 ====

undefined8 FUN_08015664(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  bool bVar10;
  
  uVar5 = param_2 >> 0x14;
  if (uVar5 == 0) {
    if (param_1 == 0 && param_2 == 0) goto LAB_08015706;
    iVar3 = LZCOUNT(param_2);
    if (param_2 == 0) {
      iVar3 = LZCOUNT(param_1) + 0x20;
    }
    uVar5 = iVar3 - 0xb;
    if (uVar5 < 0x20) {
      uVar2 = param_2 << (uVar5 & 0xff) | param_1 >> (0x20 - uVar5 & 0xff);
    }
    else {
      uVar2 = param_1 << (iVar3 - 0x2bU & 0xff);
    }
    param_1 = param_1 << (uVar5 & 0xff);
    uVar5 = 1 - uVar5;
  }
  else {
    if (0x7fe < uVar5) {
      if ((uVar5 != 0x7ff && (param_1 != 0 || (param_2 & 0x7fffffff) != 0)) &&
         (param_2 < 0xfff00001)) {
        return CONCAT44(~uVar5,param_1);
      }
      goto LAB_08015706;
    }
    uVar2 = param_2 & ~(uVar5 << 0x14) | 0x100000;
  }
  if ((uVar5 + 0x3fd & 1) != 0) {
    bVar9 = CARRY4(param_1,param_1);
    param_1 = param_1 * 2;
    uVar2 = uVar2 * 2 + (uint)bVar9;
  }
  uVar1 = param_1 << 2;
  uVar7 = 0x300000;
  uVar6 = 0;
  uVar4 = 0x80000000;
  iVar3 = (uVar2 << 2 | param_1 >> 0x1e) - 0x900000;
  uVar2 = 0x100000;
  while( true ) {
    for (; -1 < iVar3; iVar3 = (iVar3 * 2 + (uint)bVar9) - uVar8) {
      uVar8 = uVar2 >> 1;
      if ((uVar2 & 1) != 0) goto LAB_080156e0;
      iVar3 = iVar3 - uVar7;
      uVar7 = uVar7 + uVar8;
      bVar9 = CARRY4(uVar1,uVar1);
      uVar1 = uVar1 * 2;
      uVar2 = uVar8;
    }
    uVar8 = uVar2 >> 1;
    if ((uVar2 & 1) != 0) break;
    iVar3 = iVar3 + uVar7;
    uVar7 = uVar7 - uVar8;
    bVar9 = CARRY4(uVar1,uVar1);
    uVar1 = uVar1 * 2;
    iVar3 = (iVar3 * 2 + (uint)bVar9) - uVar8;
    uVar2 = uVar8;
  }
  do {
    bVar9 = CARRY4(uVar1,uVar6);
    uVar8 = uVar1 + uVar6;
    iVar3 = iVar3 + uVar7;
    bVar10 = uVar6 < uVar4;
    uVar6 = uVar6 - uVar4;
    uVar7 = (uVar7 - (uVar2 >> 1)) - (uint)bVar10;
    uVar1 = uVar8 * 2 - uVar4;
    for (iVar3 = (((iVar3 + (uint)bVar9) * 2 + (uint)CARRY4(uVar8,uVar8)) - (uVar2 >> 1)) -
                 (uint)(uVar8 * 2 < uVar4); -1 < iVar3;
        iVar3 = (((iVar3 - (uint)bVar9) * 2 + (uint)CARRY4(uVar8,uVar8)) - (uVar2 >> 1)) -
                (uint)(uVar8 * 2 < uVar4)) {
      uVar4 = uVar4 >> 1;
      if (uVar4 == 0) {
        bVar9 = 0xfffffffe < uVar6;
        uVar6 = uVar6 + 1;
        uVar7 = uVar7 + (uVar2 >> 1) + (uint)bVar9;
        goto LAB_080156fa;
      }
LAB_080156e0:
      bVar9 = uVar1 < uVar6;
      uVar8 = uVar1 - uVar6;
      iVar3 = iVar3 - uVar7;
      bVar10 = CARRY4(uVar6,uVar4);
      uVar6 = uVar6 + uVar4;
      uVar7 = uVar7 + (uVar2 >> 1) + (uint)bVar10;
      uVar1 = uVar8 * 2 - uVar4;
    }
    uVar4 = uVar4 >> 1;
  } while (uVar4 != 0);
LAB_080156fa:
  param_1 = (uint)((uVar7 & 1) != 0) << 0x1f | uVar6 >> 1;
  param_2 = (uVar7 >> 1) + (uVar5 + 0x3fd >> 1) * 0x100000;
LAB_08015706:
  return CONCAT44(param_2,param_1);
}



// ==== FUN_08015758 @ 08015758 ====

void FUN_08015758(undefined4 param_1,uint param_2,undefined4 param_3,uint param_4)

{
  if ((-1 < (int)(param_2 | param_4)) && (param_4 * 2 < 0xffe00001)) {
    return;
  }
  return;
}



// ==== FUN_0801578c @ 0801578c ====

longlong FUN_0801578c(undefined4 *param_1,int param_2,undefined4 param_3,uint param_4)

{
  char *pcVar1;
  int iVar2;
  
  *param_1 = *(undefined4 *)(param_2 + 0xc);
  *(byte *)(param_1 + 2) = *(byte *)(param_1 + 2) | 4;
  if (((int)((uint)*(byte *)(DAT_080157e4 + 0x30) << 0x1a) < 0) &&
     (iVar2 = FUN_0800e89e(param_2 + 0x34), iVar2 != 0)) {
    return CONCAT44(param_4,0xf);
  }
  FUN_08010328(param_2 + 0x34,param_1);
  pcVar1 = DAT_080157e8;
  if ((*DAT_080157e8 == '\0') && (iVar2 = FUN_08011602(), iVar2 != 0)) {
    *pcVar1 = ' ';
    FUN_08011ea4();
    FUN_08011aa0();
  }
  return (ulonglong)param_4 << 0x20;
}



// ==== FUN_080157ec @ 080157ec ====

void FUN_080157ec(void)

{
  undefined4 uVar1;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  FUN_0800a350(&local_1c,0x14,0);
  *DAT_08015c00 = *DAT_08015c00 | 4;
  uVar1 = DAT_08015c08;
  local_18 = DAT_08015c04;
  local_14 = 1;
  local_1c = 0x200;
  FUN_0800dc80(DAT_08015c08,&local_1c);
  local_1c = 0x100;
  FUN_0800dc80(uVar1,&local_1c);
  return;
}



// ==== FUN_08015842 @ 08015842 ====

void FUN_08015842(void)

{
  undefined4 unaff_r7;
  
  FUN_0801719c(0x17,1,0);
  FUN_080171ba(0x17,unaff_r7);
  return;
}



// ==== FUN_08015858 @ 08015858 ====

void FUN_08015858(void)

{
  FUN_080171bc(0x17);
  return;
}



// ==== FUN_0801588e @ 0801588e ====

void FUN_0801588e(void)

{
  uint *puVar1;
  undefined4 uVar2;
  undefined4 in_r3;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 uStack_10;
  
  uStack_10 = in_r3;
  FUN_0800a350(&local_24,0x14,0);
  puVar1 = DAT_08015c00;
  *DAT_08015c00 = *DAT_08015c00 | 2;
  *puVar1 = *puVar1 | 4;
  uVar2 = DAT_08015c0c;
  local_20 = 1;
  local_1c = 0;
  local_18 = 3;
  local_24 = 0x200;
  FUN_0800dc80(DAT_08015c0c,&local_24);
  local_24 = 0x200;
  FUN_0800dc80(uVar2,&local_24);
  local_24 = 0x200;
  FUN_0800dc80(uVar2,&local_24);
  return;
}



// ==== FUN_08015902 @ 08015902 ====

void FUN_08015902(void)

{
  undefined4 uVar1;
  undefined4 in_r3;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 uStack_c;
  
  uVar1 = DAT_08015c0c;
  local_1c = 1;
  local_18 = 0;
  local_14 = 3;
  local_20 = 0x80;
  uStack_c = in_r3;
  FUN_0800dc80(DAT_08015c0c,&local_20);
  local_20 = 0x20;
  FUN_0800dc80(uVar1,&local_20);
  local_20 = 4;
  FUN_0800dc80(DAT_08015c08,&local_20);
  return;
}



// ==== FUN_08015940 @ 08015940 ====

void FUN_08015940(void)

{
  undefined4 uVar1;
  undefined4 in_r3;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 uStack_c;
  
  uVar1 = DAT_08015c0c;
  local_1c = 1;
  local_18 = 0;
  local_14 = 3;
  local_20 = 0x100;
  uStack_c = in_r3;
  FUN_0800dc80(DAT_08015c0c,&local_20);
  local_20 = 0x40;
  FUN_0800dc80(uVar1,&local_20);
  local_20 = 2;
  FUN_0800dc80(DAT_08015c08,&local_20);
  return;
}



// ==== FUN_08015980 @ 08015980 ====

void FUN_08015980(void)

{
  undefined4 unaff_r7;
  
  FUN_0801588e();
  FUN_08015902();
  FUN_08015940(unaff_r7);
  return;
}



// ==== FUN_08015990 @ 08015990 ====

void FUN_08015990(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_08015c0c;
  if (param_1 != 0) {
    FUN_0800de0a(DAT_08015c0c,0x200,1);
    FUN_0800de0a(uVar1,0x200,1);
    FUN_0800de0a(uVar1,0x200,1);
    return;
  }
  FUN_0800de0a(DAT_08015c0c,0x200,0);
  FUN_0800de0a(uVar1,0x200,0);
  FUN_0800de0a(uVar1,0x200,0);
  return;
}



// ==== FUN_080159ea @ 080159ea ====

void FUN_080159ea(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  uVar1 = DAT_08015c0c;
  if (param_1 << 0x1f < 0) {
    FUN_0800de0a(DAT_08015c0c,0x80,1);
  }
  else {
    FUN_0800de0a(DAT_08015c0c,0x80,0);
  }
  if (param_1 << 0x1e < 0) {
    FUN_0800de0a(uVar1,0x20,1);
  }
  else {
    FUN_0800de0a(uVar1,0x20,0);
  }
  if (param_1 << 0x1d < 0) {
    FUN_0800de0a(DAT_08015c08,4,1,param_4);
    return;
  }
  FUN_0800de0a(DAT_08015c08,4,0,param_4);
  return;
}



// ==== FUN_08015a42 @ 08015a42 ====

void FUN_08015a42(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  uVar1 = DAT_08015c0c;
  if (param_1 << 0x1f < 0) {
    FUN_0800de0a(DAT_08015c0c,0x100,1);
  }
  else {
    FUN_0800de0a(DAT_08015c0c,0x100,0);
  }
  if (param_1 << 0x1e < 0) {
    FUN_0800de0a(uVar1,0x40,1);
  }
  else {
    FUN_0800de0a(uVar1,0x40,0);
  }
  if (param_1 << 0x1d < 0) {
    FUN_0800de0a(DAT_08015c08,2,1,param_4);
    return;
  }
  FUN_0800de0a(DAT_08015c08,2,0,param_4);
  return;
}



// ==== FUN_08015a9e @ 08015a9e ====

undefined4 FUN_08015a9e(int param_1)

{
  if (param_1 == 0) {
    return 1;
  }
  if (param_1 == 1) {
    return 2;
  }
  if (param_1 == 2) {
    return 4;
  }
  return 8;
}



// ==== FUN_08015aba @ 08015aba ====

undefined4 FUN_08015aba(int param_1)

{
  if (param_1 == 0) {
    return 1;
  }
  if (param_1 == 1) {
    return 2;
  }
  if (param_1 == 2) {
    return 4;
  }
  return 8;
}



// ==== FUN_08015ad6 @ 08015ad6 ====

undefined4 FUN_08015ad6(void)

{
  return 0;
}



// ==== FUN_08015ada @ 08015ada ====

void FUN_08015ada(void)

{
  uint *puVar1;
  undefined4 uVar2;
  undefined4 extraout_r3;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  FUN_0800a350(&local_1c,0x14,0);
  puVar1 = DAT_08015c00;
  *DAT_08015c00 = *DAT_08015c00 | 2;
  uVar2 = DAT_08015c0c;
  FUN_0800de0a(DAT_08015c0c,8,0,extraout_r3,*puVar1 & 2);
  local_18 = 1;
  local_14 = 0;
  local_1c = 8;
  FUN_0800dc80(uVar2,&local_1c);
  FUN_0800de0a(uVar2,8,0);
  return;
}



// ==== FUN_08015b2e @ 08015b2e ====

void FUN_08015b2e(void)

{
  undefined4 uVar1;
  undefined4 in_r3;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 uStack_10;
  
  *DAT_08015c00 = *DAT_08015c00 | 1;
  uStack_10 = in_r3;
  FUN_08015b80(0);
  uVar1 = DAT_08015c10;
  local_20 = 1;
  local_1c = 0;
  local_18 = 3;
  local_24 = 0x8000;
  FUN_0800dc80(DAT_08015c10,&local_24);
  local_24 = 0x8000;
  FUN_0800dc80(uVar1,&local_24);
  FUN_08015b80(0);
  return;
}



// ==== FUN_08015b80 @ 08015b80 ====

void FUN_08015b80(int param_1)

{
  if (param_1 != 0) {
    FUN_0800de0a(DAT_08015c10,0x8000,1);
    return;
  }
  FUN_0800de0a(DAT_08015c10,0x8000,0);
  return;
}



// ==== FUN_08015b9e @ 08015b9e ====

undefined4 FUN_08015b9e(void)

{
  return 0;
}



// ==== FUN_08015ba6 @ 08015ba6 ====

undefined4 FUN_08015ba6(void)

{
  return 0;
}



// ==== FUN_08015bae @ 08015bae ====

void FUN_08015bae(void)

{
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  FUN_0800a350(&local_1c,0x14,0);
  *DAT_08015c00 = *DAT_08015c00 | 4;
  local_18 = 0;
  local_14 = 0;
  local_1c = 0x10;
  local_10 = 2;
  FUN_0800dc80(DAT_08015c08,&local_1c);
  return;
}



// ==== FUN_08015bee @ 08015bee ====

undefined8 FUN_08015bee(void)

{
  byte bVar1;
  undefined4 unaff_r7;
  
  bVar1 = FUN_0800ddfa(DAT_08015c08,0x10);
  return CONCAT44(unaff_r7,(uint)bVar1);
}



// ==== FUN_08015c18 @ 08015c18 ====

undefined4
FUN_08015c18(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = param_4;
  iVar1 = FUN_080175a8(param_3 << 2);
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_080175a8(0x54);
    if (iVar2 == 0) {
      FUN_08017648(iVar1);
    }
    else {
      *(int *)(iVar2 + 0x30) = iVar1;
    }
  }
  if (iVar2 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    FUN_08015c7c(param_1,param_2,param_3,param_4,param_5,param_6,iVar2,0,uVar3);
    FUN_08015d22(iVar2);
    uVar3 = 1;
  }
  return uVar3;
}



// ==== FUN_08015c7c @ 08015c7c ====

void FUN_08015c7c(undefined4 param_1,int param_2,int param_3,undefined4 param_4,uint param_5,
                 undefined4 *param_6,undefined4 *param_7)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  FUN_0800a350(param_7[0xc],param_3 << 2,0xa5);
  iVar1 = param_7[0xc];
  if (param_2 == 0) {
    *(undefined1 *)(param_7 + 0xd) = 0;
  }
  else {
    for (uVar3 = 0;
        (uVar3 < 0x10 &&
        (*(undefined1 *)((int)(param_7 + 0xd) + uVar3) = *(undefined1 *)(param_2 + uVar3),
        *(char *)(param_2 + uVar3) != '\0')); uVar3 = uVar3 + 1) {
    }
    *(undefined1 *)((int)param_7 + 0x43) = 0;
  }
  if (6 < param_5) {
    param_5 = 6;
  }
  param_7[0xb] = param_5;
  param_7[0x11] = param_5;
  param_7[0x12] = 0;
  FUN_0801752e(param_7 + 1);
  FUN_0801752e(param_7 + 6);
  param_7[4] = param_7;
  param_7[6] = 7 - param_5;
  param_7[9] = param_7;
  param_7[0x13] = 0;
  *(undefined1 *)(param_7 + 0x14) = 0;
  uVar2 = FUN_08016a94((iVar1 + param_3 * 4) - 4U & 0xfffffff8,param_1,param_4);
  *param_7 = uVar2;
  if (param_6 != (undefined4 *)0x0) {
    *param_6 = param_7;
  }
  return;
}



// ==== FUN_08015d22 @ 08015d22 ====

undefined4 FUN_08015d22(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  
  FUN_08016b00();
  iVar1 = DAT_080164c4;
  *(int *)(DAT_080164c4 + 0x4c) = *(int *)(DAT_080164c4 + 0x4c) + 1;
  if (*(int *)(iVar1 + 0x28) == 0) {
    *(int *)(iVar1 + 0x28) = param_1;
    if (*(int *)(iVar1 + 0x4c) == 1) {
      FUN_0801626c();
    }
  }
  else if ((*(int *)(iVar1 + 0x58) == 0) &&
          (*(uint *)(*(int *)(iVar1 + 0x28) + 0x2c) <= *(uint *)(param_1 + 0x2c))) {
    *(int *)(iVar1 + 0x28) = param_1;
  }
  *(int *)(iVar1 + 0x68) = *(int *)(iVar1 + 0x68) + 1;
  uVar2 = *(uint *)(param_1 + 0x2c);
  *(uint *)(iVar1 + 0x54) = *(uint *)(iVar1 + 0x54) | 1 << (uVar2 & 0xff);
  FUN_08017534(DAT_080164c0 + uVar2 * 0x14,param_1 + 4);
  FUN_08016b18();
  if ((*(int *)(iVar1 + 0x58) != 0) &&
     (*(uint *)(*(int *)(iVar1 + 0x28) + 0x2c) < *(uint *)(param_1 + 0x2c))) {
    *DAT_080164c8 = 0x10000000;
    DataSynchronizationBarrier(0xf);
    InstructionSynchronizationBarrier(0xf);
  }
  return param_4;
}



// ==== FUN_08015da6 @ 08015da6 ====

void FUN_08015da6(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_1 != 0) {
    FUN_08015fc8();
    FUN_080164d4(param_1,0);
    iVar1 = FUN_08015fd4();
  }
  if (iVar1 == 0) {
    *DAT_080164c8 = 0x10000000;
    DataSynchronizationBarrier(0xf);
    InstructionSynchronizationBarrier(0xf);
  }
  return;
}



// ==== FUN_08015dd8 @ 08015dd8 ====

undefined4 FUN_08015dd8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = DAT_080164c4;
  if (param_1 == *(int *)(DAT_080164c4 + 0x28)) {
    uVar2 = 0;
  }
  else {
    FUN_08016b00();
    iVar3 = *(int *)(param_1 + 0x14);
    iVar5 = *(int *)(iVar1 + 0x2c);
    iVar4 = *(int *)(iVar1 + 0x30);
    FUN_08016b18();
    if ((iVar3 == iVar5) || (iVar3 == iVar4)) {
      uVar2 = 2;
    }
    else if (iVar3 == iVar1 + 0x38) {
      if (*(int *)(param_1 + 0x28) == 0) {
        if (*(char *)(param_1 + 0x50) == '\x01') {
          uVar2 = 2;
        }
        else {
          uVar2 = 3;
        }
      }
      else {
        uVar2 = 2;
      }
    }
    else if ((iVar3 == iVar1 + 0x14) || (iVar3 == 0)) {
      uVar2 = 4;
    }
    else {
      uVar2 = 1;
    }
  }
  return uVar2;
}



// ==== FUN_08015e40 @ 08015e40 ====

undefined4 FUN_08015e40(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  FUN_08016b00();
  iVar1 = DAT_080164c4;
  if (param_1 == 0) {
    param_1 = *(int *)(DAT_080164c4 + 0x28);
  }
  iVar2 = FUN_08017580(param_1 + 4);
  if ((iVar2 == 0) && (*(int *)(DAT_080164cc + *(uint *)(param_1 + 0x2c) * 0x14) == 0)) {
    *(uint *)(iVar1 + 0x54) = *(uint *)(iVar1 + 0x54) & ~(1 << (*(uint *)(param_1 + 0x2c) & 0xff));
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    FUN_08017580(param_1 + 0x18);
  }
  FUN_08017534(iVar1 + 0x38,param_1 + 4);
  if (*(char *)(param_1 + 0x50) == '\x01') {
    *(undefined1 *)(param_1 + 0x50) = 0;
  }
  FUN_08016b18();
  if (*(int *)(iVar1 + 0x58) != 0) {
    FUN_08016b00();
    FUN_08016306();
    FUN_08016b18();
  }
  if (param_1 != *(int *)(iVar1 + 0x28)) {
    return param_4;
  }
  if (*(int *)(iVar1 + 0x58) != 0) {
    *DAT_080164c8 = 0x10000000;
    DataSynchronizationBarrier(0xf);
    InstructionSynchronizationBarrier(0xf);
    return param_4;
  }
  if (*(int *)(iVar1 + 0x38) == *(int *)(iVar1 + 0x4c)) {
    *(undefined4 *)(iVar1 + 0x28) = 0;
    return param_4;
  }
  uVar3 = FUN_0801613c(param_4);
  return uVar3;
}



// ==== FUN_08015eee @ 08015eee ====

undefined4 FUN_08015eee(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (((*(int *)(param_1 + 0x14) == DAT_080164c4 + 0x38) &&
      (*(int *)(param_1 + 0x28) != DAT_080164c4)) && (*(int *)(param_1 + 0x28) == 0)) {
    uVar1 = 1;
  }
  return uVar1;
}



// ==== FUN_08015f12 @ 08015f12 ====

undefined4 FUN_08015f12(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  
  iVar1 = DAT_080164c4;
  if ((param_1 != *(int *)(DAT_080164c4 + 0x28)) && (param_1 != 0)) {
    FUN_08016b00();
    iVar2 = FUN_08015eee(param_1);
    if (iVar2 != 0) {
      FUN_08017580(param_1 + 4);
      uVar3 = *(uint *)(param_1 + 0x2c);
      *(uint *)(iVar1 + 0x54) = *(uint *)(iVar1 + 0x54) | 1 << (uVar3 & 0xff);
      FUN_08017534(DAT_080164c0 + uVar3 * 0x14,param_1 + 4);
      if (*(uint *)(*(int *)(iVar1 + 0x28) + 0x2c) <= *(uint *)(param_1 + 0x2c)) {
        *DAT_080164c8 = 0x10000000;
        DataSynchronizationBarrier(0xf);
        InstructionSynchronizationBarrier(0xf);
      }
    }
    uVar4 = FUN_08016b18(param_4);
    return uVar4;
  }
  return param_4;
}



// ==== FUN_08015f7c @ 08015f7c ====

longlong FUN_08015f7c(void)

{
  bool bVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  uint unaff_r7;
  
  iVar2 = DAT_080164c4;
  uVar4 = DAT_080164c4 + 0x9c;
  iVar5 = FUN_08015c18(&DAT_08016265,s_IDLE_08016543 + 1,0x400,0);
  if (iVar5 == 1) {
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      setBasePriority(0x90);
    }
    DataSynchronizationBarrier(0xf);
    InstructionSynchronizationBarrier(0xf);
    *(undefined4 *)(iVar2 + 0x6c) = 0xffffffff;
    *(undefined4 *)(iVar2 + 0x58) = 1;
    *(undefined4 *)(iVar2 + 0x50) = 0;
    puVar3 = DAT_08016b54;
    *DAT_08016b54 = *DAT_08016b54 | 0xf00000;
    *puVar3 = *puVar3 | 0xf0000000;
    FUN_0801892c();
    *DAT_08016b58 = 0;
    FUN_080189e8();
    *DAT_08016b5c = *DAT_08016b5c | 0xc0000000;
    FUN_080189c8();
    return (ulonglong)unaff_r7 << 0x20;
  }
  return (ulonglong)uVar4 << 0x20;
}



// ==== FUN_08015fc8 @ 08015fc8 ====

void FUN_08015fc8(void)

{
  *(int *)(DAT_080164c4 + 0x70) = *(int *)(DAT_080164c4 + 0x70) + 1;
  return;
}



// ==== FUN_08015fd4 @ 08015fd4 ====

undefined4 FUN_08015fd4(void)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  iVar4 = 0;
  uVar5 = 0;
  FUN_08016b00();
  piVar1 = DAT_080164c4;
  DAT_080164c4[0x1c] = DAT_080164c4[0x1c] + -1;
  if ((piVar1[0x1c] == 0) && (piVar1[0x13] != 0)) {
    while (*piVar1 != 0) {
      iVar4 = *(int *)(piVar1[3] + 0xc);
      FUN_08017580(iVar4 + 0x18);
      FUN_08017580(iVar4 + 4);
      uVar2 = *(uint *)(iVar4 + 0x2c);
      piVar1[0x15] = piVar1[0x15] | 1 << (uVar2 & 0xff);
      FUN_08017534(DAT_080164cc + uVar2 * 0x14,iVar4 + 4);
      if (*(uint *)(piVar1[10] + 0x2c) <= *(uint *)(iVar4 + 0x2c)) {
        piVar1[0x18] = 1;
      }
    }
    if (iVar4 != 0) {
      FUN_08016306();
    }
    iVar4 = piVar1[0x17];
    if (iVar4 != 0) {
      do {
        iVar3 = FUN_08016086();
        if (iVar3 != 0) {
          piVar1[0x18] = 1;
        }
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      piVar1[0x17] = 0;
    }
    if (piVar1[0x18] != 0) {
      uVar5 = 1;
      *DAT_080164c8 = 0x10000000;
      DataSynchronizationBarrier(0xf);
      InstructionSynchronizationBarrier(0xf);
    }
  }
  FUN_08016b18();
  return uVar5;
}



// ==== FUN_0801607e @ 0801607e ====

undefined4 FUN_0801607e(void)

{
  return *(undefined4 *)(DAT_080164c4 + 0x50);
}



// ==== FUN_08016086 @ 08016086 ====

undefined8 FUN_08016086(void)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 in_r3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  
  iVar1 = DAT_080164c4;
  uVar6 = 0;
  if (*(int *)(DAT_080164c4 + 0x70) == 0) {
    uVar4 = *(int *)(DAT_080164c4 + 0x50) + 1;
    *(uint *)(DAT_080164c4 + 0x50) = uVar4;
    if (uVar4 == 0) {
      uVar2 = *(undefined4 *)(iVar1 + 0x2c);
      *(undefined4 *)(iVar1 + 0x2c) = *(undefined4 *)(iVar1 + 0x30);
      *(undefined4 *)(iVar1 + 0x30) = uVar2;
      *(int *)(iVar1 + 100) = *(int *)(iVar1 + 100) + 1;
      FUN_08016306();
    }
    if (*(uint *)(iVar1 + 0x6c) <= uVar4) {
      while (**(int **)(iVar1 + 0x2c) != 0) {
        iVar5 = *(int *)(*(int *)(*(int *)(iVar1 + 0x2c) + 0xc) + 0xc);
        if (uVar4 < *(uint *)(iVar5 + 4)) {
          *(uint *)(iVar1 + 0x6c) = *(uint *)(iVar5 + 4);
          goto LAB_0801610e;
        }
        FUN_08017580(iVar5 + 4);
        if (*(int *)(iVar5 + 0x28) != 0) {
          FUN_08017580(iVar5 + 0x18);
        }
        uVar3 = *(uint *)(iVar5 + 0x2c);
        *(uint *)(iVar1 + 0x54) = *(uint *)(iVar1 + 0x54) | 1 << (uVar3 & 0xff);
        FUN_08017534(DAT_080164cc + uVar3 * 0x14,iVar5 + 4);
        if (*(uint *)(*(int *)(iVar1 + 0x28) + 0x2c) <= *(uint *)(iVar5 + 0x2c)) {
          uVar6 = 1;
        }
      }
      *(undefined4 *)(iVar1 + 0x6c) = 0xffffffff;
    }
LAB_0801610e:
    if (1 < *(uint *)(DAT_080164cc + *(int *)(*(int *)(iVar1 + 0x28) + 0x2c) * 0x14)) {
      uVar6 = 1;
    }
    if (*(int *)(iVar1 + 0x60) != 0) {
      uVar6 = 1;
    }
  }
  else {
    *(int *)(DAT_080164c4 + 0x5c) = *(int *)(DAT_080164c4 + 0x5c) + 1;
  }
  return CONCAT44(in_r3,uVar6);
}



// ==== FUN_0801613c @ 0801613c ====

void FUN_0801613c(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = DAT_080164c4;
  if (*(int *)(DAT_080164c4 + 0x70) != 0) {
    *(undefined4 *)(DAT_080164c4 + 0x60) = 1;
    return;
  }
  *(undefined4 *)(DAT_080164c4 + 0x60) = 0;
  iVar2 = DAT_080164cc + (0x1f - LZCOUNT(*(undefined4 *)(iVar1 + 0x54))) * 0x14;
  iVar3 = *(int *)(*(int *)(iVar2 + 4) + 4);
  *(int *)(iVar2 + 4) = iVar3;
  if (iVar3 == iVar2 + 8) {
    *(undefined4 *)(iVar2 + 4) = *(undefined4 *)(iVar3 + 4);
  }
  *(undefined4 *)(iVar1 + 0x28) = *(undefined4 *)(*(int *)(iVar2 + 4) + 0xc);
  return;
}



// ==== FUN_08016180 @ 08016180 ====

void FUN_08016180(undefined4 param_1,undefined4 param_2)

{
  FUN_0801754c(param_1,*(int *)(DAT_080164c4 + 0x28) + 0x18);
  FUN_080164d4(param_2,1);
  return;
}



// ==== FUN_0801619a @ 0801619a ====

longlong FUN_0801619a(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(*(int *)(param_1 + 0xc) + 0xc);
  FUN_08017580(iVar3 + 0x18);
  iVar1 = DAT_080164c4;
  if (*(int *)(DAT_080164c4 + 0x70) == 0) {
    FUN_08017580(iVar3 + 4);
    uVar2 = *(uint *)(iVar3 + 0x2c);
    *(uint *)(iVar1 + 0x54) = *(uint *)(iVar1 + 0x54) | 1 << (uVar2 & 0xff);
    FUN_08017534(DAT_080164cc + uVar2 * 0x14,iVar3 + 4);
  }
  else {
    FUN_08017534(DAT_080164c4,iVar3 + 0x18);
  }
  if (*(uint *)(*(int *)(iVar1 + 0x28) + 0x2c) < *(uint *)(iVar3 + 0x2c)) {
    *(undefined4 *)(iVar1 + 0x60) = 1;
    return CONCAT44(param_4,1);
  }
  return (ulonglong)param_4 << 0x20;
}



// ==== FUN_080161f8 @ 080161f8 ====

void FUN_080161f8(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = DAT_080164c4;
  *param_1 = *(undefined4 *)(DAT_080164c4 + 100);
  param_1[1] = *(undefined4 *)(iVar1 + 0x50);
  return;
}



// ==== FUN_08016206 @ 08016206 ====

undefined8 FUN_08016206(int *param_1,uint *param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  
  FUN_08016b00();
  uVar1 = *(uint *)(DAT_080164c4 + 0x50) - param_1[1];
  uVar3 = *param_2;
  if (uVar3 == 0xffffffff) {
    uVar2 = 0;
  }
  else if ((*(int *)(DAT_080164c4 + 100) == *param_1) ||
          (*(uint *)(DAT_080164c4 + 0x50) < (uint)param_1[1])) {
    if (uVar1 < uVar3) {
      *param_2 = uVar3 - uVar1;
      FUN_080161f8(param_1);
      uVar2 = 0;
    }
    else {
      *param_2 = 0;
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 1;
  }
  FUN_08016b18();
  return CONCAT44(param_4,uVar2);
}



// ==== FUN_08016256 @ 08016256 ====

void FUN_08016256(void)

{
  *(undefined4 *)(DAT_080164c4 + 0x60) = 1;
  return;
}



// ==== FUN_0801626c @ 0801626c ====

undefined4 FUN_0801626c(void)

{
  int iVar1;
  undefined4 in_r3;
  uint uVar2;
  
  for (uVar2 = 0; iVar1 = DAT_080164c4, uVar2 < 7; uVar2 = uVar2 + 1) {
    FUN_08017514(DAT_080164c0 + uVar2 * 0x14);
  }
  FUN_08017514(DAT_080164c4 + 0x74);
  FUN_08017514(iVar1 + 0x88);
  FUN_08017514(iVar1);
  FUN_08017514(iVar1 + 0x14);
  FUN_08017514(iVar1 + 0x38);
  *(int *)(iVar1 + 0x2c) = iVar1 + 0x74;
  *(int *)(iVar1 + 0x30) = iVar1 + 0x88;
  return in_r3;
}



// ==== FUN_08016306 @ 08016306 ====

void FUN_08016306(void)

{
  if (**(int **)(DAT_080164c4 + 0x2c) == 0) {
    *(undefined4 *)(DAT_080164c4 + 0x6c) = 0xffffffff;
    return;
  }
  *(undefined4 *)(DAT_080164c4 + 0x6c) =
       *(undefined4 *)(*(int *)(*(int *)(*(int *)(DAT_080164c4 + 0x2c) + 0xc) + 0xc) + 4);
  return;
}



// ==== FUN_08016326 @ 08016326 ====

undefined4 FUN_08016326(void)

{
  if (*(int *)(DAT_080164d0 + 0x58) == 0) {
    return 1;
  }
  if (*(int *)(DAT_080164d0 + 0x70) == 0) {
    return 2;
  }
  return 0;
}



// ==== FUN_08016342 @ 08016342 ====

undefined4 FUN_08016342(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  
  iVar1 = DAT_080164c4;
  uVar3 = 0;
  if (param_1 != 0) {
    if (*(uint *)(param_1 + 0x2c) < *(uint *)(*(int *)(DAT_080164c4 + 0x28) + 0x2c)) {
      if (-1 < *(int *)(param_1 + 0x18)) {
        *(int *)(param_1 + 0x18) = 7 - *(int *)(*(int *)(DAT_080164c4 + 0x28) + 0x2c);
      }
      iVar2 = DAT_080164cc;
      if (*(int *)(param_1 + 0x14) == *(uint *)(param_1 + 0x2c) * 0x14 + DAT_080164cc) {
        iVar4 = FUN_08017580(param_1 + 4);
        if (iVar4 == 0) {
          *(uint *)(iVar1 + 0x54) =
               *(uint *)(iVar1 + 0x54) & ~(1 << (*(uint *)(param_1 + 0x2c) & 0xff));
        }
        uVar5 = *(uint *)(*(int *)(iVar1 + 0x28) + 0x2c);
        *(uint *)(param_1 + 0x2c) = uVar5;
        *(uint *)(iVar1 + 0x54) = 1 << (uVar5 & 0xff) | *(uint *)(iVar1 + 0x54);
        FUN_08017534(iVar2 + uVar5 * 0x14,param_1 + 4);
      }
      else {
        *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(*(int *)(iVar1 + 0x28) + 0x2c);
      }
      uVar3 = 1;
    }
    else if (*(uint *)(param_1 + 0x44) < *(uint *)(*(int *)(DAT_080164c4 + 0x28) + 0x2c)) {
      uVar3 = 1;
    }
  }
  return uVar3;
}



// ==== FUN_080163cc @ 080163cc ====

undefined4 FUN_080163cc(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  
  uVar3 = 0;
  if (param_1 != 0) {
    iVar2 = *(int *)(param_1 + 0x48) + -1;
    *(int *)(param_1 + 0x48) = iVar2;
    iVar1 = DAT_080164cc;
    if ((*(int *)(param_1 + 0x2c) != *(int *)(param_1 + 0x44)) && (iVar2 == 0)) {
      iVar2 = FUN_08017580(param_1 + 4);
      if ((iVar2 == 0) && (*(int *)(iVar1 + *(uint *)(param_1 + 0x2c) * 0x14) == 0)) {
        *(uint *)(DAT_080164d0 + 0x54) =
             *(uint *)(DAT_080164d0 + 0x54) & ~(1 << (*(uint *)(param_1 + 0x2c) & 0xff));
      }
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x44);
      *(int *)(param_1 + 0x18) = 7 - *(int *)(param_1 + 0x44);
      uVar4 = *(uint *)(param_1 + 0x2c);
      *(uint *)(DAT_080164d0 + 0x54) = *(uint *)(DAT_080164d0 + 0x54) | 1 << (uVar4 & 0xff);
      FUN_08017534(iVar1 + uVar4 * 0x14,param_1 + 4);
      uVar3 = 1;
    }
  }
  return uVar3;
}



// ==== FUN_0801643e @ 0801643e ====

undefined4 FUN_0801643e(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  
  if (param_1 != 0) {
    if (param_2 < *(uint *)(param_1 + 0x44)) {
      param_2 = *(uint *)(param_1 + 0x44);
    }
    uVar3 = *(uint *)(param_1 + 0x2c);
    if ((uVar3 != param_2) && (*(int *)(param_1 + 0x48) == 1)) {
      *(uint *)(param_1 + 0x2c) = param_2;
      if (-1 < *(int *)(param_1 + 0x18)) {
        *(uint *)(param_1 + 0x18) = 7 - param_2;
      }
      iVar2 = DAT_080164d0;
      iVar1 = DAT_080164cc;
      if (*(int *)(param_1 + 0x14) == uVar3 * 0x14 + DAT_080164cc) {
        iVar4 = FUN_08017580(param_1 + 4);
        if (iVar4 == 0) {
          *(uint *)(iVar2 + 0x54) =
               *(uint *)(iVar2 + 0x54) & ~(1 << (*(uint *)(param_1 + 0x2c) & 0xff));
        }
        uVar3 = *(uint *)(param_1 + 0x2c);
        *(uint *)(iVar2 + 0x54) = *(uint *)(iVar2 + 0x54) | 1 << (uVar3 & 0xff);
        uVar5 = FUN_08017534(iVar1 + uVar3 * 0x14,param_1 + 4,param_4);
        return uVar5;
      }
    }
  }
  return param_4;
}



// ==== FUN_080164aa @ 080164aa ====

undefined4 FUN_080164aa(void)

{
  int iVar1;
  
  iVar1 = DAT_080164d0;
  if (*(int *)(DAT_080164d0 + 0x28) != 0) {
    *(int *)(*(int *)(DAT_080164d0 + 0x28) + 0x48) =
         *(int *)(*(int *)(DAT_080164d0 + 0x28) + 0x48) + 1;
  }
  return *(undefined4 *)(iVar1 + 0x28);
}



// ==== FUN_080164d4 @ 080164d4 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_080164d4(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  
  iVar1 = _DAT_08016540;
  uVar5 = *(uint *)(_DAT_08016540 + 0x50);
  iVar2 = FUN_08017580(*(int *)(_DAT_08016540 + 0x28) + 4);
  if (iVar2 == 0) {
    *(uint *)(iVar1 + 0x54) =
         *(uint *)(iVar1 + 0x54) & ~(1 << (*(uint *)(*(int *)(iVar1 + 0x28) + 0x2c) & 0xff));
  }
  if ((param_1 == -1) && (param_2 != 0)) {
    uVar3 = FUN_08017534(iVar1 + 0x38,*(int *)(iVar1 + 0x28) + 4,param_4);
    return uVar3;
  }
  uVar4 = param_1 + uVar5;
  *(uint *)(*(int *)(iVar1 + 0x28) + 4) = uVar4;
  if (uVar4 < uVar5) {
    uVar3 = FUN_0801754c(*(undefined4 *)(iVar1 + 0x30),*(int *)(iVar1 + 0x28) + 4,param_4);
    return uVar3;
  }
  FUN_0801754c(*(undefined4 *)(iVar1 + 0x2c),*(int *)(iVar1 + 0x28) + 4);
  if (uVar4 < *(uint *)(iVar1 + 0x6c)) {
    *(uint *)(iVar1 + 0x6c) = uVar4;
  }
  return param_4;
}



// ==== FUN_0801654c @ 0801654c ====

uint FUN_0801654c(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  iVar4 = ((param_2 & 0x7fffffff) >> 0x14) - 0x3fe;
  if (iVar4 < 0) {
    return 0;
  }
  uVar5 = -iVar4 + 0x20;
  uVar1 = (int)param_2 >> 0x1f;
  if (uVar5 != 0 && iVar4 < 0x21) {
    uVar3 = param_2 << 0xb | param_1 >> 0x15 | 0x80000000;
    uVar2 = uVar5 & 0xff;
    uVar5 = (uVar3 >> (uVar5 & 0xff)) + uVar1 +
            (uint)(uVar2 == 0 && (param_2 & 0x200000) != 0 ||
                  uVar2 != 0 && (uVar3 >> uVar2 - 1 & 1) != 0);
    if (-1 < (int)uVar5) {
      return uVar5 ^ uVar1;
    }
    return uVar5 - 1;
  }
  uVar5 = 0;
  if (-iVar4 != -0x401) {
    uVar5 = ~uVar1 ^ 0x80000000;
  }
  return uVar5;
}



// ==== FUN_08016590 @ 08016590 ====

undefined4 FUN_08016590(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_080165a0();
  return uVar1;
}



// ==== FUN_080165a0 @ 080165a0 ====

longlong FUN_080165a0(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  
  uVar1 = param_2 >> 0x14 & 0x7ff;
  uVar2 = uVar1 - 0x3fe;
  uVar3 = param_2;
  if (uVar2 == 0 || uVar1 < 0x3fe) {
    if (param_1 != 0 || (param_2 & 0x7fffffff) != 0) {
      uVar3 = 0xbff00000;
    }
    if (-1 < (int)param_2) {
      uVar3 = 0;
    }
    param_1 = 0;
  }
  else if ((int)uVar2 < 0x35) {
    if (0x14 < (int)uVar2) {
      uVar3 = 0xffffffff >> (uVar1 - 0x413 & 0xff);
      if ((int)param_2 < 0) {
        bVar4 = CARRY4(param_1,uVar3);
        param_1 = param_1 + uVar3;
        param_2 = param_2 + bVar4;
      }
      return CONCAT44(param_2,param_1 & ~uVar3);
    }
    uVar3 = 0x1fffff >> (uVar2 & 0xff);
    if ((int)param_2 < 0) {
      param_2 = param_2 + uVar3 + (uint)(param_1 != 0);
    }
    return (ulonglong)(param_2 & ~uVar3) << 0x20;
  }
  return CONCAT44(uVar3,param_1);
}



// ==== FUN_08016620 @ 08016620 ====

int FUN_08016620(int param_1)

{
  if (param_1 < 0) {
    param_1 = -param_1;
  }
  return param_1;
}



// ==== FUN_08016628 @ 08016628 ====

undefined4 FUN_08016628(void)

{
  int *piVar1;
  uint *puVar2;
  
  *DAT_08016838 = *DAT_08016838 | 8;
  piVar1 = DAT_0801683c;
  *DAT_0801683c = DAT_08016840;
  piVar1[3] = 0;
  piVar1[1] = 3;
  piVar1[4] = 0;
  piVar1[2] = 0;
  FUN_08017fbc(piVar1);
  FUN_0801719c(0x32,0);
  FUN_080171bc(0x32);
  *(uint *)(*piVar1 + 0xc) = *(uint *)(*piVar1 + 0xc) | 1;
  puVar2 = (uint *)*piVar1;
  if ((puVar2[2] & 7) != 6) {
    *puVar2 = *puVar2 | 1;
  }
  return 0;
}



// ==== FUN_08016676 @ 08016676 ====

undefined4 FUN_08016676(void)

{
  int *piVar1;
  uint *puVar2;
  
  *DAT_08016838 = *DAT_08016838 | 4;
  piVar1 = DAT_08016844;
  *DAT_08016844 = DAT_08016848;
  piVar1[3] = 0;
  piVar1[1] = 0x53;
  piVar1[4] = 0;
  piVar1[2] = 0;
  FUN_08017fbc(piVar1);
  FUN_0801719c(0x1e,0);
  FUN_080171bc(0x1e);
  *(uint *)(*piVar1 + 0xc) = *(uint *)(*piVar1 + 0xc) | 1;
  puVar2 = (uint *)*piVar1;
  if ((puVar2[2] & 7) != 6) {
    *puVar2 = *puVar2 | 1;
  }
  return 0;
}



// ==== FUN_080166ca @ 080166ca ====

void FUN_080166ca(void)

{
  FUN_080171bc(0x32);
  return;
}



// ==== FUN_080166d0 @ 080166d0 ====

void FUN_080166d0(int *param_1,int param_2)

{
  *(int *)(*param_1 + 0x2c) = param_2;
  param_1[3] = param_2;
  return;
}



// ==== FUN_080166d8 @ 080166d8 ====

void FUN_080166d8(int *param_1,undefined4 param_2)

{
  *(undefined4 *)(*param_1 + 0x24) = param_2;
  return;
}



// ==== FUN_080166de @ 080166de ====

undefined4 FUN_080166de(int *param_1)

{
  int *piVar1;
  
  piVar1 = param_1 + 0xf;
  if ((char)*piVar1 == '\x01') {
    return 2;
  }
  *(char *)piVar1 = '\x01';
  *(undefined1 *)((int)param_1 + 0x3d) = 2;
  *(undefined4 *)(*param_1 + 0x14) = 1;
  *(undefined1 *)((int)param_1 + 0x3d) = 1;
  *(char *)piVar1 = '\0';
  return 0;
}



// ==== FUN_080166e4 @ 080166e4 ====

void FUN_080166e4(int *param_1)

{
  *(undefined4 *)(*param_1 + 0x10) = 0xfffffffe;
  return;
}



// ==== FUN_080166ee @ 080166ee ====

void FUN_080166ee(void)

{
  FUN_080171ba(0x1e);
  return;
}



// ==== FUN_08016706 @ 08016706 ====

void FUN_08016706(void)

{
  uint *puVar1;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  FUN_0800a350(&local_1c,0x14,0);
  puVar1 = DAT_0801684c;
  *DAT_0801684c = *DAT_0801684c | 2;
  puVar1[4] = puVar1[4] | 2;
  local_1c = 0x10;
  local_18 = 2;
  local_14 = 0;
  local_10 = 3;
  local_c = 2;
  FUN_0800dc80(DAT_08016850,&local_1c);
  return;
}



// ==== FUN_08016762 @ 08016762 ====

void FUN_08016762(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 in_r3;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 uStack_c;
  
  uStack_c = in_r3;
  FUN_0800a350(&local_30,8,0);
  FUN_0800a350(&local_28,0x1c,0);
  FUN_08016706();
  puVar1 = DAT_08016854;
  *DAT_08016854 = DAT_08016858;
  puVar1[1] = DAT_0801685c / (int)(uint)*(ushort *)(DAT_08016860 + 0x5c) + -1;
  puVar1[2] = 0;
  puVar1[3] = 999;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  iVar2 = FUN_08018012(puVar1);
  if (iVar2 != 0) {
    FUN_0800dc7c();
  }
  local_30 = 0;
  local_2c = 0;
  iVar2 = FUN_0801844c(puVar1,&local_30);
  if (iVar2 != 0) {
    FUN_0800dc7c();
  }
  local_28 = 0x60;
  local_24 = 0;
  local_20 = 0;
  local_1c = 8;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  iVar2 = FUN_080181d2(puVar1,&local_28,0);
  if (iVar2 != 0) {
    FUN_0800dc7c();
  }
  FUN_08018046(puVar1,0);
  return;
}



// ==== FUN_080167fe @ 080167fe ====

void FUN_080167fe(uint param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_08016854;
  *(uint *)(DAT_08016854 + 4) = DAT_0801685c / param_1 - 1;
  iVar2 = FUN_08018012(iVar1);
  if (iVar2 != 0) {
    FUN_0800dc7c();
  }
  FUN_08018046(iVar1,0);
  return;
}



// ==== FUN_08016826 @ 08016826 ====

void FUN_08016826(undefined4 param_1)

{
  *(undefined4 *)(*DAT_08016854 + 0x34) = param_1;
  return;
}



// ==== FUN_0801682e @ 0801682e ====

undefined4 FUN_0801682e(void)

{
  return *(undefined4 *)(*DAT_08016854 + 0x34);
}



// ==== FUN_08016864 @ 08016864 ====

undefined4 FUN_08016864(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_08016874();
  return uVar1;
}



// ==== FUN_08016874 @ 08016874 ====

longlong FUN_08016874(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  
  uVar1 = param_2 >> 0x14 & 0x7ff;
  uVar2 = uVar1 - 0x3fe;
  uVar3 = param_2;
  if (uVar2 == 0 || uVar1 < 0x3fe) {
    if (param_1 != 0 || (param_2 & 0x7fffffff) != 0) {
      uVar3 = 0x3ff00000;
    }
    if ((int)param_2 < 0) {
      uVar3 = 0x80000000;
    }
    param_1 = 0;
  }
  else if ((int)uVar2 < 0x35) {
    if (0x14 < (int)uVar2) {
      uVar3 = 0xffffffff >> (uVar1 - 0x413 & 0xff);
      if (-1 < (int)param_2) {
        bVar4 = CARRY4(param_1,uVar3);
        param_1 = param_1 + uVar3;
        param_2 = param_2 + bVar4;
      }
      return CONCAT44(param_2,param_1 & ~uVar3);
    }
    uVar3 = 0x1fffff >> (uVar2 & 0xff);
    if (-1 < (int)param_2) {
      param_2 = param_2 + uVar3 + (uint)(param_1 != 0);
    }
    return (ulonglong)(param_2 & ~uVar3) << 0x20;
  }
  return CONCAT44(uVar3,param_1);
}



// ==== FUN_080168cc @ 080168cc ====

uint FUN_080168cc(uint param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = 0x41e - (param_2 >> 0x14);
  if (-1 < iVar2) {
    uVar1 = UnsignedSaturate(iVar2,7);
    UnsignedDoesSaturate(iVar2,7);
    return (param_1 >> 0x15 | param_2 << 0xb | 0x80000000) >> (uVar1 & 0xff);
  }
  return ~((int)param_2 >> 0x1f);
}



// ==== FUN_080168f0 @ 080168f0 ====

void FUN_080168f0(void)

{
  undefined4 unaff_r7;
  
  FUN_080184c8();
  FUN_0800dabc();
  FUN_0801497e();
  FUN_08016762();
  FUN_08018604(unaff_r7);
  return;
}



// ==== FUN_0801690c @ 0801690c ====

longlong FUN_0801690c(void)

{
  uint unaff_r7;
  
  FUN_08015f7c();
  return (ulonglong)unaff_r7 << 0x20;
}



// ==== FUN_08016930 @ 08016930 ====

undefined4 FUN_08016930(void)

{
  undefined4 in_r3;
  ushort uVar1;
  char *pcVar2;
  
  pcVar2 = DAT_08016968;
  uVar1 = 0;
  FUN_08018604();
  FUN_080188ac(pcVar2,0,0x400);
  if (*pcVar2 == '\x19') {
    return in_r3;
  }
  for (; uVar1 < 0x400; uVar1 = uVar1 + 1) {
    *pcVar2 = -1;
    pcVar2 = pcVar2 + 1;
  }
  return in_r3;
}



// ==== FUN_08016962 @ 08016962 ====

undefined1 FUN_08016962(int param_1)

{
  return *(undefined1 *)(DAT_08016968 + param_1);
}



// ==== FUN_08016a0c @ 08016a0c ====

undefined8 FUN_08016a0c(void)

{
  undefined4 uVar1;
  
  FUN_08015bae();
  uVar1 = DAT_08016a40;
  FUN_08015c18(DAT_08016a44,s_sensor_task_08016a74,0x100,0);
  return CONCAT44(uVar1,4);
}



// ==== FUN_08016a80 @ 08016a80 ====

void FUN_08016a80(void)

{
  *(int *)(DAT_08016a90 + 4) = *(int *)(DAT_08016a90 + 4) + (int)*DAT_08016a90;
  return;
}



// ==== FUN_08016a94 @ 08016a94 ====

int FUN_08016a94(int param_1,uint param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + -4) = 0x1000000;
  *(uint *)(param_1 + -8) = param_2 & 0xfffffffe;
  *(undefined **)(param_1 + -0xc) = &DAT_08016abd;
  *(undefined4 *)(param_1 + -0x20) = param_3;
  *(undefined4 *)(param_1 + -0x24) = 0xfffffffd;
  return param_1 + -0x44;
}



// ==== FUN_08016b00 @ 08016b00 ====

void FUN_08016b00(void)

{
  bool bVar1;
  
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(0x90);
  }
  DataSynchronizationBarrier(0xf);
  InstructionSynchronizationBarrier(0xf);
  *DAT_08016b58 = *DAT_08016b58 + 1;
  return;
}



// ==== FUN_08016b18 @ 08016b18 ====

int FUN_08016b18(void)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = *DAT_08016b58 + -1;
  *DAT_08016b58 = iVar2;
  if (iVar2 == 0) {
    iVar2 = 0;
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      setBasePriority(0);
    }
  }
  return iVar2;
}



// ==== FUN_08016b2a @ 08016b2a ====

undefined4 FUN_08016b2a(void)

{
  bool bVar1;
  int iVar2;
  undefined4 unaff_r7;
  
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(0x90);
  }
  DataSynchronizationBarrier(0xf);
  InstructionSynchronizationBarrier(0xf);
  iVar2 = FUN_08016086(0x90);
  if (iVar2 != 0) {
    *DAT_08016b60 = 0x10000000;
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(0);
  }
  return unaff_r7;
}



// ==== thunk_FUN_08016962 @ 08016b64 ====

undefined1 thunk_FUN_08016962(int param_1)

{
  return *(undefined1 *)(DAT_08016968 + param_1);
}



// ==== FUN_08016b68 @ 08016b68 ====

void FUN_08016b68(int param_1,undefined1 param_2)

{
  *(undefined1 *)(DAT_08016b70 + param_1) = param_2;
  return;
}



// ==== FUN_08016bb8 @ 08016bb8 ====

longlong FUN_08016bb8(undefined1 *param_1,int param_2,int param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    iVar1 = thunk_FUN_08016962(param_2);
    param_2 = param_2 + 1;
    uVar3 = (uVar3 << 1 | (uVar3 << 1 & 0xff) >> 7) + iVar1 * 2;
    *param_1 = (char)iVar1;
    param_1 = param_1 + 1;
  }
  uVar2 = thunk_FUN_08016962(param_2);
  if ((uVar3 & 0xff) == uVar2) {
    return CONCAT44(param_4,1);
  }
  return (ulonglong)param_4 << 0x20;
}



// ==== FUN_08016bf8 @ 08016bf8 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_08016bf8(char *param_1)

{
  undefined4 unaff_r7;
  
  if (param_1 == (char *)0x0) {
    param_1 = s_constraint_handler__bad_message_08016c17 + 1;
  }
  if ((code *)*_DAT_08016c14 == (code *)0x0) {
    FUN_08018a04(param_1);
  }
  else {
    (*(code *)*_DAT_08016c14)(param_1,0,0x22);
  }
  return CONCAT44(unaff_r7,0x22);
}



// ==== FUN_08016c38 @ 08016c38 ====

void FUN_08016c38(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 extraout_r2;
  
  FUN_08016c44();
  *param_3 = extraout_r2;
  return;
}



// ==== FUN_08016c44 @ 08016c44 ====

undefined8 FUN_08016c44(uint param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = (param_2 & 0x7fffffff) >> 0x14;
  if (uVar3 == 0) {
    if (param_1 != 0 || (param_2 & 0x7fffffff) != 0) {
      uVar3 = param_2 & ~(param_2 & 0x80000000);
      iVar1 = LZCOUNT(uVar3);
      if (uVar3 == 0) {
        iVar1 = LZCOUNT(param_1) + 0x20;
      }
      uVar2 = iVar1 - 0xb;
      if (0x1f < uVar2) {
        uVar3 = param_1 << (iVar1 - 0x2bU & 0xff);
      }
      else {
        uVar3 = uVar3 << (uVar2 & 0xff);
      }
      uVar3 = uVar3 | param_2 & 0x80000000;
      if (0x1f >= uVar2) {
        uVar3 = uVar3 | param_1 >> (0x20 - uVar2 & 0xff);
      }
      return CONCAT44(uVar3 + 0x3fd00000,param_1 << (uVar2 & 0xff));
    }
  }
  else if (param_2 << 1 < 0xffe00000) {
    return CONCAT44(param_2 + (uVar3 - 0x3fe) * -0x100000,param_1);
  }
  return CONCAT44(param_2,param_1);
}



// ==== FUN_08016ca8 @ 08016ca8 ====

void FUN_08016ca8(undefined4 param_1,uint param_2,undefined4 param_3,uint param_4)

{
  if ((-1 < (int)(param_2 | param_4)) && (param_2 * 2 < 0xffe00001)) {
    return;
  }
  return;
}



// ==== FUN_08016cdc @ 08016cdc ====

longlong FUN_08016cdc(uint param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  
  if ((int)param_3 < 0) {
    uVar7 = -param_3;
    uVar6 = param_2 >> 0x14 & 0x7ff;
    if (uVar6 != 0) {
      if (uVar6 == 0x7ff) goto LAB_08016d52;
      if (uVar7 < uVar6) {
        return CONCAT44(param_2 + param_3 * 0x100000,param_1);
      }
      uVar7 = (uVar7 - uVar6) + 1;
      param_2 = param_2 & ~(uVar6 << 0x14) | 0x100000;
    }
    if (param_1 == 0 && (param_2 & 0x7fffffff) == 0) goto LAB_08016d52;
    uVar6 = param_2 & 0x80000000;
    if ((int)uVar7 < 0x36) {
      param_2 = param_2 ^ uVar6;
      uVar8 = uVar7 - 0x20;
      if ((int)uVar7 < 0x20) {
        uVar2 = uVar7 & 0xff;
        uVar5 = param_1 >> (uVar7 & 0xff) | param_2 << (0x20 - uVar7 & 0xff);
        uVar3 = uVar7 & 0xff;
        uVar8 = param_2 >> (uVar7 & 0xff);
        uVar1 = 0x20 - uVar7 & 0xff;
        bVar9 = uVar1 == 0 &&
                (uVar3 == 0 &&
                 (uVar2 == 0 && 0x1f < uVar7 || uVar2 != 0 && (param_1 >> uVar2 - 1 & 1) != 0) ||
                uVar3 != 0 && (param_2 >> uVar3 - 1 & 1) != 0) ||
                uVar1 != 0 && (param_1 << uVar1 - 1 & 0x80000000) != 0;
        param_1 = param_1 << uVar1;
      }
      else {
        uVar7 = param_1 >> (uVar8 & 0xff);
        if ((param_1 & 0x7fffffff) != 0) {
          uVar7 = uVar7 | 1;
        }
        uVar5 = param_2 >> (uVar8 & 0xff);
        uVar8 = 0x20 - uVar8 & 0xff;
        bVar9 = uVar8 == 0 && (param_1 & 0x80000000) != 0 ||
                uVar8 != 0 && (param_2 << uVar8 - 1 & 0x80000000) != 0;
        param_1 = uVar7 | param_2 << uVar8;
        uVar8 = 0;
      }
      bVar9 = 0x80000000 < param_1 || param_1 + 0x80000000 < (uint)bVar9;
      iVar4 = uVar5 + bVar9;
      uVar6 = uVar8 + uVar6 + CARRY4(uVar5,(uint)bVar9);
      if (param_1 == 0) {
        return CONCAT44(uVar6,iVar4);
      }
    }
    else {
      iVar4 = 0;
    }
    goto code_r0x08016d08;
  }
  uVar7 = param_2 >> 0x14 & 0x7ff;
  if (uVar7 != 0) {
    if (uVar7 == 0x7ff) goto LAB_08016d52;
    uVar7 = uVar7 + param_3;
LAB_08016cf0:
    if (uVar7 < 0x7ff) {
      return CONCAT44(param_2 + param_3 * 0x100000,param_1);
    }
    uVar6 = param_2 & 0x80000000 | 0x7ff00000;
    iVar4 = 0;
code_r0x08016d08:
    return CONCAT44(uVar6,iVar4);
  }
  if (param_1 == 0 && (param_2 & 0x7fffffff) == 0) goto LAB_08016d52;
  uVar7 = param_2 & 0x80000000;
  param_2 = param_2 ^ uVar7;
  if (param_2 == 0) {
    uVar6 = LZCOUNT(param_1) + 0x15;
    if (uVar6 < 0x20) goto LAB_08016d20;
    if (0x1f < param_3) {
      param_3 = param_3 - 0x20;
      uVar6 = LZCOUNT(param_1) - 0xb;
      if (param_3 <= uVar6) {
        return (ulonglong)(param_1 << (param_3 & 0xff) | uVar7) << 0x20;
      }
      param_3 = param_3 - uVar6;
      param_2 = param_1 << (uVar6 & 0xff) | uVar7;
      param_1 = 0;
      uVar7 = param_3 + 1;
      goto LAB_08016cf0;
    }
  }
  else {
    uVar6 = LZCOUNT(param_2) - 0xb;
LAB_08016d20:
    if (uVar6 < param_3) {
      param_3 = param_3 - uVar6;
      param_2 = (param_2 << (uVar6 & 0xff) | uVar7) + (param_1 >> (0x20 - uVar6 & 0xff));
      param_1 = param_1 << (uVar6 & 0xff);
      uVar7 = param_3 + 1;
      goto LAB_08016cf0;
    }
  }
  param_2 = param_2 << (param_3 & 0xff) | uVar7 | param_1 >> (0x20 - param_3 & 0xff);
  param_1 = param_1 << (param_3 & 0xff);
LAB_08016d52:
  return CONCAT44(param_2,param_1);
}



// ==== FUN_08016e18 @ 08016e18 ====

undefined8 FUN_08016e18(uint param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = param_1 & 0x80000000;
  iVar2 = 0;
  if (param_1 != 0) {
    if ((int)uVar3 < 0) {
      param_1 = -param_1;
    }
    uVar1 = param_1 << LZCOUNT(param_1);
    uVar3 = (uVar3 | (0x420 - (LZCOUNT(param_1) + 3)) * 0x100000) + (uVar1 >> 0xb);
    iVar2 = uVar1 << 0x15;
  }
  return CONCAT44(uVar3,iVar2);
}



// ==== FUN_08016e84 @ 08016e84 ====

undefined4 FUN_08016e84(void)

{
  return DAT_08016e8c;
}



// ==== FUN_08016e88 @ 08016e88 ====

undefined4 FUN_08016e88(void)

{
  return DAT_08016e90;
}



// ==== FUN_08016e94 @ 08016e94 ====

ulonglong FUN_08016e94(uint param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  
  if (param_4 != 0) {
    if (param_2 <= param_4 && (uint)(param_3 <= param_1) <= param_2 - param_4) {
      return 0;
    }
    if (0xffff < param_4) {
      uVar11 = param_2 / param_4;
      param_2 = param_2 - param_4 * uVar11;
      uVar4 = (uint)((ulonglong)param_3 * (ulonglong)uVar11 >> 0x20);
      if (param_2 <= uVar4 &&
          (uint)((uint)((ulonglong)param_3 * (ulonglong)uVar11) <= param_1) <= param_2 - uVar4) {
        uVar11 = uVar11 - 1;
      }
      return (ulonglong)uVar11;
    }
    uVar4 = LZCOUNT(param_4) - 0xf;
    uVar7 = LZCOUNT(param_4) - LZCOUNT(param_2);
    uVar11 = param_3 << (uVar4 & 0xff);
    uVar4 = 0x20 - uVar4 & 0x1f;
    uVar4 = ((param_4 ^ param_3) >> uVar4 | (param_4 ^ param_3) << 0x20 - uVar4) ^ uVar11;
    uVar10 = uVar7 - 0xf;
    if (uVar7 < 0xf || uVar10 == 0) {
LAB_08016f38:
      uVar7 = LZCOUNT(param_2) + -0xf + uVar7;
      uVar10 = param_1 << (uVar7 & 0xff);
      uVar7 = 0x20 - uVar7 & 0x1f;
      uVar7 = ((param_2 ^ param_1) >> uVar7 | (param_2 ^ param_1) << 0x20 - uVar7) ^ uVar10;
      uVar1 = uVar7 / uVar4;
      uVar7 = uVar7 - uVar4 * uVar1;
      uVar4 = (uint)((ulonglong)uVar11 * (ulonglong)uVar1 >> 0x20);
      if (uVar7 <= uVar4 &&
          (uint)((uint)((ulonglong)uVar11 * (ulonglong)uVar1) <= uVar10) <= uVar7 - uVar4) {
        uVar1 = uVar1 - 1;
      }
      return (ulonglong)uVar1;
    }
LAB_08016fc6:
    uVar1 = param_1 << LZCOUNT(param_2);
    uVar7 = 0x20U - LZCOUNT(param_2) & 0x1f;
    uVar2 = ((param_2 ^ param_1) >> uVar7 | (param_2 ^ param_1) << 0x20 - uVar7) ^ uVar1;
    uVar12 = uVar2 / uVar4;
    uVar2 = uVar2 - uVar4 * uVar12;
    uVar5 = (uint)((ulonglong)uVar11 * (ulonglong)uVar12);
    uVar8 = (uint)((ulonglong)uVar11 * (ulonglong)uVar12 >> 0x20);
    uVar7 = uVar1 - uVar5;
    uVar3 = (uVar2 - uVar8) - (uint)(uVar5 > uVar1);
    if (uVar2 <= uVar8 && (uint)(uVar5 <= uVar1) <= uVar2 - uVar8) {
      uVar12 = uVar12 - 1;
      bVar13 = CARRY4(uVar7,uVar11);
      uVar7 = uVar7 + uVar11;
      uVar3 = uVar3 + uVar4 + (uint)bVar13;
    }
    if (0xe < uVar10) {
      uVar10 = uVar10 - 0xf;
      uVar2 = uVar3 << 0xf | uVar7 >> 0x11;
      uVar9 = uVar2 / uVar4;
      uVar2 = uVar2 - uVar4 * uVar9;
      uVar5 = (uint)((ulonglong)uVar11 * (ulonglong)uVar9);
      uVar8 = (uint)((ulonglong)uVar11 * (ulonglong)uVar9 >> 0x20);
      uVar1 = uVar7 * 0x8000;
      uVar7 = uVar1 - uVar5;
      uVar3 = (uVar2 - uVar8) - (uint)(uVar5 > uVar1);
      if (uVar2 <= uVar8 && (uint)(uVar5 <= uVar1) <= uVar2 - uVar8) {
        uVar9 = uVar9 - 1;
        bVar13 = CARRY4(uVar7,uVar11);
        uVar7 = uVar7 + uVar11;
        uVar3 = uVar3 + uVar4 + (uint)bVar13;
      }
      uVar12 = uVar9 | uVar12 << 0xf;
    }
    if (uVar10 != 0) {
      uVar2 = uVar7 << (uVar10 & 0xff);
      uVar1 = 0x20 - uVar10 & 0x1f;
      uVar7 = ((uVar3 ^ uVar7) >> uVar1 | (uVar3 ^ uVar7) << 0x20 - uVar1) ^ uVar2;
      uVar1 = uVar7 / uVar4;
      uVar7 = uVar7 - uVar4 * uVar1;
      uVar4 = (uint)((ulonglong)uVar11 * (ulonglong)uVar1 >> 0x20);
      if (uVar7 <= uVar4 &&
          (uint)((uint)((ulonglong)uVar11 * (ulonglong)uVar1) <= uVar2) <= uVar7 - uVar4) {
        uVar1 = uVar1 - 1;
      }
      return CONCAT44(uVar12 >> (0x20 - uVar10 & 0xff),uVar12 << (uVar10 & 0xff) | uVar1);
    }
    return (ulonglong)uVar12;
  }
  if (param_2 == 0) {
    if (2 < param_3) {
      return (ulonglong)(param_1 / param_3);
    }
  }
  else {
    if (0xffff < param_3) {
      if (param_3 < 0x1000000) {
        uVar11 = (param_2 - param_3 * (param_2 / param_3)) * 0x100 | param_1 >> 0x18;
        uVar7 = uVar11 / param_3;
        uVar4 = uVar7 | param_1 << 8;
        uVar11 = (uVar11 - param_3 * uVar7) * 0x100 | uVar4 >> 0x18;
        uVar7 = uVar11 / param_3;
        uVar4 = uVar7 | uVar4 << 8;
        uVar11 = (uVar11 - param_3 * uVar7) * 0x100 | uVar4 >> 0x18;
        uVar7 = uVar11 / param_3;
        uVar4 = uVar7 | uVar4 << 8;
        return CONCAT44(param_2 / param_3,
                        ((uVar11 - param_3 * uVar7) * 0x100 | uVar4 >> 0x18) / param_3 | uVar4 << 8)
        ;
      }
      uVar11 = 0xf - LZCOUNT(param_3);
      iVar6 = LZCOUNT(param_3) - LZCOUNT(param_2);
      uVar4 = param_3 >> (uVar11 & 0xff);
      uVar11 = uVar11 & 0x1f;
      uVar7 = iVar6 + 0x20;
      uVar11 = (param_3 >> uVar11 | param_3 << 0x20 - uVar11) ^ uVar4;
      uVar10 = iVar6 + 0x11;
      if (uVar7 < 0xf || uVar10 == 0) goto LAB_08016f38;
      goto LAB_08016fc6;
    }
    if (2 < param_3) {
      uVar4 = (param_2 - param_3 * (param_2 / param_3)) * 0x10000 | param_1 >> 0x10;
      uVar11 = uVar4 / param_3;
      return CONCAT44(param_2 / param_3,
                      (param_1 & 0xffff | (uVar4 - param_3 * uVar11) * 0x10000) / param_3 |
                      uVar11 << 0x10);
    }
  }
  if (param_3 == 0) {
    return CONCAT44(param_2,param_1);
  }
  if (param_3 == 2) {
    return CONCAT44(param_2 >> 1,(uint)((param_2 & 1) != 0) << 0x1f | param_1 >> 1);
  }
  return CONCAT44(param_2,param_1);
}



// ==== FUN_080170c4 @ 080170c4 ====

void FUN_080170c4(uint param_1)

{
  *DAT_080171c0 = (param_1 & 7) << 8 | *DAT_080171c0 & 0xf8ff | DAT_080171c4;
  return;
}



// ==== FUN_080170de @ 080170de ====

uint FUN_080170de(void)

{
  return (*DAT_080171c0 & 0x7ff) >> 8;
}



// ==== FUN_0801711c @ 0801711c ====

void FUN_0801711c(uint param_1,char param_2)

{
  if (-1 < (int)param_1) {
    *(char *)(DAT_080171d0 + param_1) = param_2 << 4;
    return;
  }
  *(char *)(DAT_080171d4 + (param_1 & 0xf) + -4) = param_2 << 4;
  return;
}



// ==== FUN_08017136 @ 08017136 ====

uint FUN_08017136(uint param_1,uint param_2,uint param_3)

{
  uint uVar1;
  
  param_1 = param_1 & 7;
  uVar1 = 7 - param_1;
  if (4 < uVar1) {
    uVar1 = 4;
  }
  if (param_1 + 4 < 7) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 - 3;
  }
  return (1 << (param_1 & 0xff)) - 1U & param_3 |
         (param_2 & (1 << (uVar1 & 0xff)) - 1U) << (param_1 & 0xff);
}



// ==== FUN_0801716c @ 0801716c ====

undefined8 FUN_0801716c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  uint uVar2;
  
  puVar1 = DAT_080171d8;
  uVar2 = param_1 - 1;
  if (uVar2 < 0x1000000) {
    DAT_080171d8[1] = uVar2;
    FUN_0801711c(0xffffffff,0xf);
    puVar1[2] = 0;
    *puVar1 = 7;
  }
  return CONCAT44(param_4,~-(uint)(uVar2 < 0x1000000) >> 0x1f);
}



// ==== thunk_FUN_080170c4 @ 0801719a ====

void thunk_FUN_080170c4(uint param_1)

{
  *DAT_080171c0 = (param_1 & 7) << 8 | *DAT_080171c0 & 0xf8ff | DAT_080171c4;
  return;
}



// ==== FUN_0801719c @ 0801719c ====

void FUN_0801719c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_080170de();
  uVar1 = FUN_08017136(uVar1,param_2,param_3);
  FUN_0801711c(param_1,uVar1);
  return;
}



// ==== FUN_080171ba @ 080171ba ====

void FUN_080171ba(uint param_1)

{
  if (-1 < (int)param_1) {
    *(int *)(DAT_080171c8 + (param_1 >> 5) * 4) = 1 << (param_1 & 0x1f);
  }
  return;
}



// ==== FUN_080171bc @ 080171bc ====

void FUN_080171bc(uint param_1)

{
  if (-1 < (int)param_1) {
    *(int *)(DAT_080171cc + (param_1 >> 5) * 4) = 1 << (param_1 & 0x1f);
    DataSynchronizationBarrier(0xf);
    InstructionSynchronizationBarrier(0xf);
  }
  return;
}



// ==== thunk_FUN_0801716c @ 080171be ====

undefined8 thunk_FUN_0801716c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  uint uVar2;
  
  puVar1 = DAT_080171d8;
  uVar2 = param_1 - 1;
  if (uVar2 < 0x1000000) {
    DAT_080171d8[1] = uVar2;
    FUN_0801711c(0xffffffff,0xf);
    puVar1[2] = 0;
    *puVar1 = 7;
  }
  return CONCAT44(param_4,~-(uint)(uVar2 < 0x1000000) >> 0x1f);
}



// ==== FUN_080171dc @ 080171dc ====

longlong FUN_080171dc(int *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  if (param_1 == (int *)0x0) {
    return CONCAT44(param_4,1);
  }
  if (*(char *)((int)param_1 + 0x39) == '\0') {
    *(undefined1 *)(param_1 + 0xe) = 0;
    FUN_08018a0e(param_1);
  }
  *(undefined1 *)((int)param_1 + 0x39) = 0x24;
  *(uint *)(*param_1 + 0xc) = *(uint *)(*param_1 + 0xc) & 0xffffdfff;
  FUN_08017398(param_1);
  *(uint *)(*param_1 + 0x10) = *(uint *)(*param_1 + 0x10) & 0xffffb7ff;
  *(uint *)(*param_1 + 0x14) = *(uint *)(*param_1 + 0x14) & 0xffffffd5;
  *(uint *)(*param_1 + 0xc) = *(uint *)(*param_1 + 0xc) | 0x2000;
  param_1[0xf] = 0;
  *(undefined1 *)((int)param_1 + 0x39) = 0x20;
  *(undefined1 *)((int)param_1 + 0x3a) = 0x20;
  return (ulonglong)param_4 << 0x20;
}



// ==== FUN_0801723a @ 0801723a ====

undefined4 FUN_0801723a(int *param_1)

{
  if (param_1 == (int *)0x0) {
    return 1;
  }
  *(undefined1 *)((int)param_1 + 0x39) = 0x24;
  *(uint *)(*param_1 + 0xc) = *(uint *)(*param_1 + 0xc) & 0xffffdfff;
  FUN_08018a10();
  param_1[0xf] = 0;
  *(undefined1 *)((int)param_1 + 0x39) = 0;
  *(undefined1 *)((int)param_1 + 0x3a) = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  return 0;
}



// ==== FUN_08017266 @ 08017266 ====

undefined8 FUN_08017266(int *param_1,ushort *param_2,int param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = param_1 + 0xe;
  if (*(char *)((int)param_1 + 0x39) == ' ') {
    if ((param_2 == (ushort *)0x0) || (param_3 == 0)) {
      uVar1 = 1;
      goto LAB_0801732e;
    }
    if ((char)*piVar3 != '\x01') {
      *(char *)piVar3 = '\x01';
      param_1[0xf] = 0;
      *(undefined1 *)((int)param_1 + 0x39) = 0x21;
      uVar1 = FUN_080143e4();
      *(short *)(param_1 + 9) = (short)param_3;
      *(short *)((int)param_1 + 0x26) = (short)param_3;
      *(char *)piVar3 = '\0';
      while (*(short *)((int)param_1 + 0x26) != 0) {
        *(short *)((int)param_1 + 0x26) = *(short *)((int)param_1 + 0x26) + -1;
        if (param_1[2] == 0x1000) {
          iVar2 = FUN_08017332(param_1,0x80,0,uVar1);
          if (iVar2 != 0) {
            uVar1 = 3;
            goto LAB_0801732e;
          }
          *(uint *)(*param_1 + 4) = *param_2 & 0x1ff;
          if (param_1[4] == 0) {
            param_2 = param_2 + 1;
          }
          else {
            param_2 = (ushort *)((int)param_2 + 1);
          }
        }
        else {
          iVar2 = FUN_08017332(param_1,0x80,0,uVar1);
          if (iVar2 != 0) {
            uVar1 = 3;
            goto LAB_0801732e;
          }
          *(uint *)(*param_1 + 4) = (uint)(byte)*param_2;
          param_2 = (ushort *)((int)param_2 + 1);
        }
      }
      iVar2 = FUN_08017332(param_1,0x40,0,uVar1);
      if (iVar2 == 0) {
        *(undefined1 *)((int)param_1 + 0x39) = 0x20;
        uVar1 = 0;
      }
      else {
        uVar1 = 3;
      }
      goto LAB_0801732e;
    }
  }
  uVar1 = 2;
LAB_0801732e:
  return CONCAT44(param_4,uVar1);
}



// ==== FUN_08017332 @ 08017332 ====

undefined4 FUN_08017332(int *param_1,uint param_2,uint param_3,int param_4,uint param_5)

{
  int iVar1;
  
  do {
    if (((*(uint *)*param_1 & param_2) == param_2) != param_3) {
      return 0;
    }
  } while ((param_5 == 0xffffffff) ||
          ((param_5 != 0 && (iVar1 = FUN_080143e4(), (uint)(iVar1 - param_4) <= param_5))));
  *(uint *)(*param_1 + 0xc) = *(uint *)(*param_1 + 0xc) & 0xfffffe5f;
  *(uint *)(*param_1 + 0x14) = *(uint *)(*param_1 + 0x14) & 0xfffffffe;
  *(undefined1 *)((int)param_1 + 0x39) = 0x20;
  *(undefined1 *)((int)param_1 + 0x3a) = 0x20;
  *(undefined1 *)(param_1 + 0xe) = 0;
  return 3;
}



// ==== FUN_08017398 @ 08017398 ====

void FUN_08017398(int *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  *(uint *)(*param_1 + 0x10) = *(uint *)(*param_1 + 0x10) & 0xffffcfff | param_1[3];
  *(uint *)(*param_1 + 0xc) =
       *(uint *)(*param_1 + 0xc) & DAT_08017508 | param_1[2] | param_1[4] | param_1[5] | param_1[7];
  *(uint *)(*param_1 + 0x14) = *(uint *)(*param_1 + 0x14) & 0xfffffcff | param_1[6];
  iVar1 = *param_1;
  if (param_1[7] != 0x8000) {
    if ((iVar1 != DAT_0801750c) && (iVar1 != DAT_08017510)) {
      uVar2 = FUN_0800df4e();
      uVar2 = FUN_08016e94((int)((ulonglong)uVar2 * 0x19),(int)((ulonglong)uVar2 * 0x19 >> 0x20),
                           param_1[1] << 2,(uint)param_1[1] >> 0x1e);
      uVar3 = ((uVar2 % 100) * 0x10 + 0x32) / 100;
      *(uint *)(*param_1 + 8) = (uVar3 & 0xf) + (uVar3 & 0xf0) + (uVar2 / 100) * 0x10;
      return;
    }
    uVar2 = FUN_0800df64();
    uVar2 = FUN_08016e94((int)((ulonglong)uVar2 * 0x19),(int)((ulonglong)uVar2 * 0x19 >> 0x20),
                         param_1[1] << 2,(uint)param_1[1] >> 0x1e);
    uVar3 = ((uVar2 % 100) * 0x10 + 0x32) / 100;
    *(uint *)(*param_1 + 8) = (uVar3 & 0xf) + (uVar3 & 0xf0) + (uVar2 / 100) * 0x10;
    return;
  }
  if ((iVar1 != DAT_0801750c) && (iVar1 != DAT_08017510)) {
    uVar2 = FUN_0800df4e();
    uVar2 = FUN_08016e94((int)((ulonglong)uVar2 * 0x19),(int)((ulonglong)uVar2 * 0x19 >> 0x20),
                         param_1[1] << 1,(uint)param_1[1] >> 0x1f);
    uVar3 = ((uVar2 % 100) * 8 + 0x32) / 100;
    *(uint *)(*param_1 + 8) = (uVar3 & 7) + (uVar3 & 0xf8) * 2 + (uVar2 / 100) * 0x10;
    return;
  }
  uVar2 = FUN_0800df64();
  uVar2 = FUN_08016e94((int)((ulonglong)uVar2 * 0x19),(int)((ulonglong)uVar2 * 0x19 >> 0x20),
                       param_1[1] << 1,(uint)param_1[1] >> 0x1f);
  uVar3 = ((uVar2 % 100) * 8 + 0x32) / 100;
  *(uint *)(*param_1 + 8) = (uVar3 & 7) + (uVar3 & 0xf8) * 2 + (uVar2 / 100) * 0x10;
  return;
}



// ==== FUN_08017514 @ 08017514 ====

void FUN_08017514(undefined4 *param_1)

{
  param_1[1] = param_1 + 2;
  param_1[2] = 0xffffffff;
  param_1[3] = param_1 + 2;
  param_1[4] = param_1 + 2;
  *param_1 = 0;
  return;
}



// ==== FUN_0801752e @ 0801752e ====

void FUN_0801752e(int param_1)

{
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}



// ==== FUN_08017534 @ 08017534 ====

void FUN_08017534(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_1[1];
  *(int *)(param_2 + 4) = iVar1;
  *(undefined4 *)(param_2 + 8) = *(undefined4 *)(iVar1 + 8);
  *(int *)(*(int *)(iVar1 + 8) + 4) = param_2;
  *(int *)(iVar1 + 8) = param_2;
  *(int **)(param_2 + 0x10) = param_1;
  *param_1 = *param_1 + 1;
  return;
}



// ==== FUN_0801754c @ 0801754c ====

void FUN_0801754c(int *param_1,uint *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint *puVar3;
  
  if (*param_2 == 0xffffffff) {
    puVar3 = (uint *)param_1[4];
  }
  else {
    puVar1 = (uint *)(param_1 + 2);
    do {
      puVar3 = puVar1;
      puVar1 = (uint *)puVar3[1];
    } while (*(uint *)puVar3[1] <= *param_2);
  }
  uVar2 = puVar3[1];
  param_2[1] = uVar2;
  *(uint **)(uVar2 + 8) = param_2;
  param_2[2] = (uint)puVar3;
  puVar3[1] = (uint)param_2;
  param_2[4] = (uint)param_1;
  *param_1 = *param_1 + 1;
  return;
}



// ==== FUN_08017580 @ 08017580 ====

int FUN_08017580(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x10);
  *(undefined4 *)(*(int *)(param_1 + 4) + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(*(int *)(param_1 + 8) + 4) = *(undefined4 *)(param_1 + 4);
  if (piVar1[1] == param_1) {
    piVar1[1] = *(int *)(param_1 + 8);
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  *piVar1 = *piVar1 + -1;
  return *piVar1;
}



// ==== FUN_080175a8 @ 080175a8 ====

undefined8 FUN_080175a8(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  
  iVar7 = 0;
  FUN_08015fc8();
  piVar1 = DAT_08017724;
  if (DAT_08017724[2] == 0) {
    FUN_08017684();
  }
  if ((param_1 & piVar1[5]) == 0) {
    uVar6 = param_1;
    if ((param_1 != 0) && (uVar6 = param_1 + 8, (uVar6 & 7) != 0)) {
      uVar6 = (param_1 + 0x10) - (uVar6 & 7);
    }
    if ((uVar6 != 0) && (uVar6 <= (uint)piVar1[3])) {
      piVar2 = piVar1;
      piVar3 = (int *)*piVar1;
      do {
        piVar8 = piVar3;
        piVar4 = piVar2;
        if (uVar6 <= (uint)piVar8[1]) break;
        piVar2 = piVar8;
        piVar3 = (int *)*piVar8;
      } while ((int *)*piVar8 != (int *)0x0);
      if (piVar8 != (int *)piVar1[2]) {
        iVar7 = *piVar4 + 8;
        *piVar4 = *piVar8;
        if (0x10 < piVar8[1] - uVar6) {
          *(uint *)((int)piVar8 + uVar6 + 4) = piVar8[1] - uVar6;
          piVar8[1] = uVar6;
          FUN_080176d2((int)piVar8 + uVar6);
        }
        uVar5 = piVar8[1];
        piVar1[3] = piVar1[3] - uVar5;
        uVar6 = piVar1[3];
        if ((uint)piVar1[4] < (uint)piVar1[3]) {
          uVar6 = piVar1[4];
        }
        piVar1[4] = uVar6;
        piVar8[1] = uVar5 | piVar1[5];
        *piVar8 = 0;
      }
    }
  }
  FUN_08015fd4();
  return CONCAT44(param_4,iVar7);
}



// ==== FUN_08017648 @ 08017648 ====

undefined4 FUN_08017648(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = DAT_08017724;
  if (param_1 == 0) {
    return 0;
  }
  if (((*(uint *)(param_1 + -4) & *(uint *)(DAT_08017724 + 0x14)) != 0) &&
     (*(int *)(param_1 + -8) == 0)) {
    *(uint *)(param_1 + -4) = *(uint *)(param_1 + -4) & ~*(uint *)(DAT_08017724 + 0x14);
    FUN_08015fc8();
    *(int *)(iVar1 + 0xc) = *(int *)(param_1 + -4) + *(int *)(iVar1 + 0xc);
    FUN_080176d2((int *)(param_1 + -8));
    uVar2 = FUN_08015fd4(param_4);
    return uVar2;
  }
  return param_4;
}



// ==== FUN_08017684 @ 08017684 ====

void FUN_08017684(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  
  puVar1 = DAT_08017724;
  iVar2 = 0x6c00;
  puVar5 = DAT_08017724 + 6;
  if (((uint)(DAT_08017724 + 6) & 7) != 0) {
    puVar5 = (undefined4 *)((int)DAT_08017724 + 0x1fU & 0xfffffff8);
    iVar2 = (int)(DAT_08017724 + 6) + (0x6c00 - (int)puVar5);
  }
  *DAT_08017724 = puVar5;
  puVar1[1] = 0;
  puVar3 = (undefined4 *)((int)puVar5 + iVar2 + -8 & 0xfffffff8);
  puVar1[2] = puVar3;
  puVar3[1] = 0;
  *puVar3 = 0;
  puVar5[1] = (int)puVar3 - (int)puVar5;
  *puVar5 = puVar3;
  uVar4 = puVar5[1];
  puVar1[4] = uVar4;
  puVar1[3] = uVar4;
  puVar1[5] = 0x80000000;
  return;
}



// ==== FUN_080176d2 @ 080176d2 ====

void FUN_080176d2(uint *param_1)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  
  puVar1 = DAT_08017724;
  puVar2 = DAT_08017724;
  do {
    puVar3 = puVar2;
    puVar2 = (uint *)*puVar3;
  } while ((uint *)*puVar3 < param_1);
  if ((uint *)((int)puVar3 + puVar3[1]) == param_1) {
    puVar3[1] = param_1[1] + puVar3[1];
    param_1 = puVar3;
  }
  uVar4 = *puVar3;
  if ((int)param_1 + param_1[1] == uVar4) {
    if (uVar4 == puVar1[2]) {
      *param_1 = puVar1[2];
    }
    else {
      param_1[1] = *(int *)(uVar4 + 4) + param_1[1];
      *param_1 = *(uint *)*puVar3;
    }
  }
  else {
    *param_1 = uVar4;
  }
  if (puVar3 != param_1) {
    *puVar3 = (uint)param_1;
  }
  return;
}



// ==== FUN_08017728 @ 08017728 ====

ulonglong FUN_08017728(int param_1,uint param_2,int param_3,uint *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  undefined4 local_30 [2];
  
  uVar8 = CONCAT44(param_2,param_1);
  if (((param_3 != 0) && ((param_2 & 0x7fffffff) != 0 || param_1 != 0)) &&
     (((int)(param_2 << 1) >> 0x15 != -1 || ((param_2 & 0xfffff) != 0)))) {
    if (param_3 < 0) {
      uVar3 = -param_3;
      puVar5 = (undefined4 *)((int)&DAT_08017904 + DAT_08017904);
      iVar4 = 8;
      uVar7 = DAT_08017908;
      while( true ) {
        uVar2 = (undefined4)((ulonglong)uVar7 >> 0x20);
        if (uVar3 == 0 || iVar4 == 0) break;
        if ((int)(uVar3 << 0x1f) < 0) {
          uVar7 = FUN_0800d21c((int)uVar7,uVar2,*puVar5,puVar5[1]);
        }
        uVar3 = uVar3 >> 1;
        puVar5 = puVar5 + 2;
        iVar4 = iVar4 + -1;
      }
      uVar6 = FUN_08016c38(param_1,param_2,local_30);
      uVar1 = local_30[0];
      uVar7 = FUN_0800d3c8((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),(int)uVar7,uVar2);
      uVar8 = FUN_08016cdc((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),uVar1);
      if (((uVar8 & 0x7fffffff00000000) != 0 || (int)uVar8 != 0) &&
         ((((int)(uVar8 >> 0x20) << 1) >> 0x15 != -1 || ((uVar8 & 0xfffff00000000) != 0)))) {
        for (; uVar3 != 0; uVar3 = uVar3 - 1) {
          uVar7 = FUN_08016c38((int)uVar8,(int)(uVar8 >> 0x20),local_30);
          uVar2 = local_30[0];
          uVar7 = FUN_0800d21c((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),DAT_08017a50,DAT_08017a54)
          ;
          uVar8 = FUN_08016cdc((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),uVar2);
          if (((uVar8 & 0x7fffffff00000000) == 0 && (int)uVar8 == 0) ||
             ((((int)(uVar8 >> 0x20) << 1) >> 0x15 == -1 && ((uVar8 & 0xfffff00000000) == 0))))
          break;
        }
      }
    }
    else if (0 < param_3) {
      puVar5 = (undefined4 *)((int)&DAT_08017904 + DAT_08017904);
      iVar4 = 8;
      uVar7 = DAT_08017908;
      do {
        if (param_3 << 0x1f < 0) {
          uVar7 = FUN_0800d21c((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),*puVar5,puVar5[1]);
        }
        param_3 = param_3 >> 1;
        puVar5 = puVar5 + 2;
        iVar4 = iVar4 + -1;
      } while ((0 < param_3) && (iVar4 != 0));
      uVar6 = FUN_08016c38(param_1,param_2,local_30);
      uVar2 = local_30[0];
      uVar7 = FUN_0800d21c((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),(int)uVar6,
                           (int)((ulonglong)uVar6 >> 0x20));
      uVar8 = FUN_08016cdc((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),uVar2);
      if (((uVar8 & 0x7fffffff00000000) != 0 || (int)uVar8 != 0) &&
         ((((int)(uVar8 >> 0x20) << 1) >> 0x15 != -1 || ((uVar8 & 0xfffff00000000) != 0)))) {
        while( true ) {
          if (param_3 < 1) break;
          uVar7 = FUN_08016c38((int)uVar8,(int)(uVar8 >> 0x20),local_30);
          uVar2 = local_30[0];
          uVar7 = FUN_0800d21c((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),DAT_08017a58,DAT_08017a7c)
          ;
          uVar8 = FUN_08016cdc((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),uVar2);
          if (((uVar8 & 0x7fffffff00000000) == 0 && (int)uVar8 == 0) ||
             ((((int)(uVar8 >> 0x20) << 1) >> 0x15 == -1 && ((uVar8 & 0xfffff00000000) == 0))))
          break;
          param_3 = param_3 + -1;
        }
      }
    }
    if ((((uVar8 & 0x7fffffff00000000) == 0 && (int)uVar8 == 0) ||
        ((((int)(uVar8 >> 0x20) << 1) >> 0x15 == -1 && ((uVar8 & 0xfffff00000000) == 0)))) &&
       (param_4 != (uint *)0x0)) {
      *param_4 = *param_4 | 1;
    }
  }
  return uVar8;
}



// ==== FUN_08017a8c @ 08017a8c ====

/* WARNING: Removing unreachable block (ram,0x08017926) */
/* WARNING: Removing unreachable block (ram,0x08017928) */

ulonglong FUN_08017a8c(undefined4 param_1)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_24;
  
  local_24 = param_1;
  uVar2 = FUN_08018a12(&local_24);
  uVar3 = uVar2 & 0xfffffff7;
  if (uVar3 == 1) {
    iVar4 = FUN_08018b34(param_1,local_24,0,&local_3c,2);
    uVar6 = DAT_08017a80;
    if ((iVar4 != 0) && (uVar6 = FUN_08016e18(local_38), uVar1 = DAT_08017a5c, 1 < iVar4)) {
      iVar4 = iVar4 + -1;
      puVar5 = &uStack_34;
      do {
        uVar7 = FUN_0800d21c((int)uVar6,(int)(uVar6 >> 0x20),(int)uVar1,
                             (int)((ulonglong)uVar1 >> 0x20));
        uVar8 = FUN_08016e18(*puVar5);
        uVar6 = FUN_080153f4((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),(int)uVar7,
                             (int)((ulonglong)uVar7 >> 0x20));
        iVar4 = iVar4 + -1;
        puVar5 = puVar5 + 1;
      } while (iVar4 != 0);
    }
  }
  else {
    if (uVar3 != 2) {
      uVar6 = DAT_08017a6c;
      if ((uVar3 != 3) && (uVar6 = DAT_08017a74, uVar3 != 4)) {
        uVar6 = DAT_08017a80;
      }
      goto LAB_08017a30;
    }
    iVar4 = FUN_08018cec(param_1,local_24,0,&local_3c,2);
    uVar6 = DAT_08017a80;
    if ((iVar4 != 0) && (uVar6 = FUN_08016e18(local_38), uVar1 = DAT_08017a64, 1 < iVar4)) {
      iVar4 = iVar4 + -1;
      puVar5 = &uStack_34;
      do {
        uVar7 = FUN_0800d21c((int)uVar6,(int)(uVar6 >> 0x20),(int)uVar1,
                             (int)((ulonglong)uVar1 >> 0x20));
        uVar8 = FUN_08016e18(*puVar5);
        uVar6 = FUN_080153f4((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),(int)uVar7,
                             (int)((ulonglong)uVar7 >> 0x20));
        iVar4 = iVar4 + -1;
        puVar5 = puVar5 + 1;
      } while (iVar4 != 0);
    }
    uVar6 = FUN_08016cdc((int)uVar6,(int)(uVar6 >> 0x20),local_3c);
    local_3c = 0;
  }
  uVar6 = FUN_08017728((int)uVar6,(int)(uVar6 >> 0x20),local_3c,0);
LAB_08017a30:
  if (((int)uVar2 >> 3 & 1U) != 0) {
    uVar6 = ((ulonglong)((uint)(uVar6 >> 0x20) ^ 0x80000000) << 0x20) + (uVar6 & 0xffffffff);
  }
  return uVar6;
}



// ==== FUN_08017a94 @ 08017a94 ====

ulonglong FUN_08017a94(int param_1,uint param_2,int param_3,uint param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 uVar7;
  int unaff_r4;
  uint uVar8;
  uint unaff_r5;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  undefined4 unaff_lr;
  char cVar9;
  char cVar10;
  bool bVar11;
  ulonglong uVar12;
  undefined4 uVar13;
  undefined8 unaff_d8;
  undefined4 uVar14;
  undefined8 unaff_d9;
  ulonglong uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  iVar6 = (int)(param_4 << 1) >> 0x15;
  iVar4 = param_3;
  iVar1 = unaff_r4;
  if (iVar6 != -1) {
    iVar4 = (int)(param_2 << 1) >> 0x15;
    iVar1 = param_1;
    unaff_r5 = param_2;
  }
  if (iVar6 == -1 || iVar4 == -1) {
    uVar3 = (int)(param_2 << 1) >> 0x15;
    if (((uVar3 == 0xffffffff) && (uVar8 = param_2, (param_2 & 0xfffff) != 0)) ||
       ((iVar6 == -1 && (param_1 = param_3, uVar8 = param_4, (param_4 & 0xfffff) != 0)))) {
      return CONCAT44(uVar8,param_1);
    }
    uVar12 = DAT_08017ba4;
    if (((iVar6 == -1) && ((param_4 & 0xfffff) == 0 && uVar3 == 0xffffffff)) &&
       ((param_2 & 0xfffff) == 0)) {
      uVar12 = DAT_08017bac;
    }
    uVar8 = (param_2 >> 0x1f) << 3;
    if ((int)param_4 < 0) {
      uVar8 = uVar8 ^ 6;
    }
    cVar9 = 0xfffffffe < uVar3;
    if ((uVar3 != 0xffffffff) || (cVar9 = (param_2 & 0x100000) != 0, (param_2 & 0xfffff) != 0))
    goto LAB_08017b8a;
  }
  else {
    if ((int)param_2 < 0) {
      param_2 = unaff_r5 & 0x7fffffff;
      uVar8 = 8;
      param_1 = iVar1;
    }
    else {
      uVar8 = 0;
    }
    cVar9 = (param_4 >> 0x1e & 1) != 0;
    if ((int)param_4 < 0) {
      param_4 = param_4 & 0x7fffffff;
      uVar8 = uVar8 ^ 6;
    }
    uVar15 = FUN_08015758(param_3,param_4,param_1,param_2);
    if (cVar9 != '\0') {
      bVar11 = (uVar15 & 0x7fffffff00000000) == 0;
      if (bVar11) {
        cVar9 = '\x01';
      }
      uVar12 = DAT_08017ba4;
      if (!bVar11 || (int)uVar15 != 0) {
        uVar12 = FUN_0800d3c8(param_1,param_2,param_3,param_4);
      }
      goto LAB_08017b8a;
    }
    uVar12 = FUN_0800d3c8();
  }
  uVar8 = uVar8 ^ 2;
LAB_08017b8a:
  uVar15 = (uVar12 & 0xffffffff00000000) + (uVar12 & 0xffffffff);
  uVar7 = (undefined4)(uVar15 >> 0x20);
  uVar13 = (undefined4)uVar15;
  cVar10 = '\x01';
  FUN_08019338(0,DAT_080190c0,uVar13,uVar7,unaff_d8,unaff_d9,unaff_r4,unaff_r6,unaff_r7,unaff_lr);
  uVar12 = DAT_0801906c;
  if (cVar10 == '\0') {
    FUN_08016ca8(uVar13,uVar7,DAT_08019074,DAT_08019078);
    if (!(bool)cVar9 || (bool)cVar10) {
      uVar2 = (undefined4)((ulonglong)DAT_0801907c >> 0x20);
      uVar14 = (undefined4)DAT_0801907c;
      uVar16 = FUN_0800d21c(uVar14,uVar2,uVar13,uVar7);
      uVar16 = FUN_080153f4((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),0,DAT_08019084);
      uVar17 = FUN_080153f4(uVar14,uVar2,uVar13,uVar7);
      uVar15 = FUN_0800d3c8((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),(int)uVar17,
                            (int)((ulonglong)uVar17 >> 0x20));
      uVar8 = uVar8 | 1;
    }
    uVar3 = (uint)(uVar15 >> 0x20);
    uVar7 = (undefined4)uVar15;
    bVar11 = false;
    FUN_08016ca8(uVar7,uVar3 & 0x7fffffff,1,0x3e400000);
    uVar12 = uVar15;
    if (!(bool)cVar9 || bVar11) {
      uVar16 = FUN_0800d21c(uVar7,uVar3,uVar7,uVar3);
      uVar2 = (undefined4)((ulonglong)uVar16 >> 0x20);
      uVar13 = (undefined4)uVar16;
      uVar16 = FUN_0800d21c(uVar13,uVar2,uVar7,uVar3);
      uVar17 = FUN_0800d21c(DAT_08019088,DAT_0801908c,uVar13,uVar2);
      uVar17 = FUN_080153f4((int)uVar17,(int)((ulonglong)uVar17 >> 0x20),DAT_08019090,DAT_08019094);
      uVar17 = FUN_0800d21c((int)uVar17,(int)((ulonglong)uVar17 >> 0x20),uVar13,uVar2);
      uVar17 = FUN_080153f4((int)uVar17,(int)((ulonglong)uVar17 >> 0x20),DAT_08019098,DAT_0801909c);
      uVar16 = FUN_0800d21c((int)uVar17,(int)((ulonglong)uVar17 >> 0x20),(int)uVar16,
                            (int)((ulonglong)uVar16 >> 0x20));
      uVar16 = FUN_080153f4((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),uVar7,uVar3);
      uVar17 = FUN_0800d21c(DAT_080190a0,DAT_080190a4,uVar13,uVar2);
      uVar17 = FUN_080153f4((int)uVar17,(int)((ulonglong)uVar17 >> 0x20),DAT_080190a8,DAT_080190ac);
      uVar17 = FUN_0800d21c((int)uVar17,(int)((ulonglong)uVar17 >> 0x20),uVar13,uVar2);
      uVar17 = FUN_080153f4((int)uVar17,(int)((ulonglong)uVar17 >> 0x20),DAT_080190b0,DAT_080190b4);
      uVar17 = FUN_0800d21c((int)uVar17,(int)((ulonglong)uVar17 >> 0x20),uVar13,uVar2);
      uVar17 = FUN_080153f4((int)uVar17,(int)((ulonglong)uVar17 >> 0x20),DAT_080190b8,DAT_080190bc);
      uVar17 = FUN_0800d21c((int)uVar17,(int)((ulonglong)uVar17 >> 0x20),uVar13,uVar2);
      uVar17 = FUN_080153f4((int)uVar17,(int)((ulonglong)uVar17 >> 0x20),0,DAT_080190c0);
      uVar12 = FUN_0800d3c8((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),(int)uVar17,
                            (int)((ulonglong)uVar17 >> 0x20));
    }
  }
  if ((int)(uVar8 << 0x1e) < 0) {
    uVar12 = ((ulonglong)((uint)(uVar12 >> 0x20) ^ 0x80000000) << 0x20) + (uVar12 & 0xffffffff);
  }
  if ((uVar8 & 7) != 0) {
    puVar5 = (undefined4 *)((int)&DAT_08019068 + (uVar8 & 7) * 8 + DAT_08019068);
    uVar12 = FUN_080153f4((int)uVar12,(int)(uVar12 >> 0x20),*puVar5,puVar5[1]);
  }
  if ((int)(uVar8 << 0x1c) < 0) {
    uVar12 = ((ulonglong)((uint)(uVar12 >> 0x20) ^ 0x80000000) << 0x20) + (uVar12 & 0xffffffff);
  }
  return uVar12;
}



// ==== FUN_08017fb4 @ 08017fb4 ====

ulonglong FUN_08017fb4(int param_1,uint param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  char cVar7;
  char in_CY;
  ulonglong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  
  uVar8 = CONCAT44(param_2,param_1);
  uVar9 = FUN_0800d21c(DAT_08017f24,DAT_08017f28,param_1,param_2);
  uVar1 = (uint)((ulonglong)uVar9 >> 0x20);
  uVar5 = (undefined4)uVar9;
  FUN_08015758(uVar5,uVar1 & 0x7fffffff,DAT_08017f2c,DAT_08017f30);
  uVar4 = (uint)((ulonglong)DAT_08017f1c >> 0x20);
  if (in_CY == '\0') {
    FUN_080153f4(uVar5,uVar1,(int)DAT_08017f1c,uVar1 & 0x80000000 | uVar4);
    uVar1 = FUN_080152e0();
    if (uVar1 != 0) {
      uVar9 = FUN_08016e18();
      uVar9 = FUN_0800d21c((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),0,DAT_08017f38);
      uVar2 = (undefined4)((ulonglong)uVar9 >> 0x20);
      uVar5 = (undefined4)uVar9;
      uVar9 = FUN_0800d21c(0x50000000,DAT_08017f3c,uVar5,uVar2);
      uVar9 = FUN_080153f4((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),param_1,param_2);
      uVar10 = FUN_0800d21c(0x60000000,DAT_08017f40,uVar5,uVar2);
      uVar9 = FUN_080153f4((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),(int)uVar9,
                           (int)((ulonglong)uVar9 >> 0x20));
      uVar10 = FUN_0800d21c(0x20000000,DAT_08017f44,uVar5,uVar2);
      uVar9 = FUN_080153f4((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),(int)uVar9,
                           (int)((ulonglong)uVar9 >> 0x20));
      uVar10 = FUN_0800d21c(0,DAT_08017f48,uVar5,uVar2);
      uVar9 = FUN_080153f4((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),(int)uVar9,
                           (int)((ulonglong)uVar9 >> 0x20));
      uVar10 = FUN_0800d21c(0x20000000,DAT_08017f34,uVar5,uVar2);
      uVar8 = FUN_080153f4((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),(int)uVar9,
                           (int)((ulonglong)uVar9 >> 0x20));
    }
    goto LAB_08017df2;
  }
  if ((int)(param_2 << 1) >> 0x15 == -1) {
    if ((param_2 & 0xfffff) != 0) {
      return uVar8;
    }
    return 0x7fffffffffffffff;
  }
  if ((param_2 & 0x7fffffff) == 0 && param_1 == 0) {
    return DAT_08017f4c;
  }
  uVar11 = FUN_080153f4(uVar5,uVar1,(int)DAT_08017f1c,uVar1 & 0x80000000 | uVar4);
  uVar1 = (uint)(uVar11 >> 0x20);
  if (((uVar11 & 0x7fffffff00000000) != 0 || (int)(uint)uVar11 < 0) || (uVar11 & 0x7fffffff) != 0) {
    iVar6 = -((uVar1 & 0x7fffffff) >> 0x14);
    uVar4 = iVar6 + 0x433;
    if ((int)uVar4 < 0x35) {
      if ((int)uVar4 < 0x21) {
        if (uVar4 != 0x20) {
          if (0 < (int)uVar4) {
            uVar11 = CONCAT44(uVar1,((uint)uVar11 >> (uVar4 & 0xff)) << (uVar4 & 0xff));
          }
          goto LAB_08017d42;
        }
      }
      else {
        uVar4 = iVar6 + 0x413;
        uVar1 = (uVar1 >> (uVar4 & 0xff)) << (uVar4 & 0xff);
      }
      uVar11 = (ulonglong)uVar1 << 0x20;
    }
    else {
      uVar11 = (ulonglong)(uVar1 & 0x80000000) << 0x20;
    }
  }
LAB_08017d42:
  uVar5 = (undefined4)(uVar11 >> 0x20);
  iVar6 = (int)uVar11;
  if ((uVar11 & 0x7fffffff00000000) != 0 || iVar6 != 0) {
    uVar9 = FUN_0800d21c(0,DAT_08017f38,iVar6,uVar5);
    uVar3 = (undefined4)((ulonglong)uVar9 >> 0x20);
    uVar2 = (undefined4)uVar9;
    uVar9 = FUN_0800d21c(0x50000000,DAT_08017f3c,uVar2,uVar3);
    uVar9 = FUN_080153f4((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),param_1,param_2);
    uVar10 = FUN_0800d21c(0x60000000,DAT_08017f40,uVar2,uVar3);
    uVar9 = FUN_080153f4((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),(int)uVar9,
                         (int)((ulonglong)uVar9 >> 0x20));
    uVar10 = FUN_0800d21c(0x20000000,DAT_08017f44,uVar2,uVar3);
    uVar9 = FUN_080153f4((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),(int)uVar9,
                         (int)((ulonglong)uVar9 >> 0x20));
    uVar10 = FUN_0800d21c(0,DAT_08017f48,uVar2,uVar3);
    uVar9 = FUN_080153f4((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),(int)uVar9,
                         (int)((ulonglong)uVar9 >> 0x20));
    uVar10 = FUN_0800d21c(0x20000000,DAT_08017f34,uVar2,uVar3);
    uVar8 = FUN_080153f4((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),(int)uVar9,
                         (int)((ulonglong)uVar9 >> 0x20));
  }
  uVar1 = FUN_080152e0(iVar6,uVar5);
LAB_08017df2:
  cVar7 = 0xfffffffe < (uVar1 & 3);
  iVar6 = (uVar1 & 3) + 1;
  uVar1 = (uint)(uVar8 >> 0x20);
  uVar5 = (undefined4)uVar8;
  FUN_08015758(uVar5,uVar1 & 0x7fffffff,0,0x3e400000);
  if (cVar7 == '\0') {
    if (iVar6 * -0x80000000 < 0) {
      uVar8 = DAT_08017f4c;
    }
  }
  else {
    uVar9 = FUN_0800d21c(uVar5,uVar1,uVar5,uVar1);
    uVar3 = (undefined4)((ulonglong)uVar9 >> 0x20);
    uVar2 = (undefined4)uVar9;
    if (iVar6 * -0x80000000 < 0) {
      uVar9 = FUN_0800d21c(DAT_08017f54,DAT_08017f58,uVar2,uVar3);
      uVar9 = FUN_080153f4((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),DAT_08017f5c,DAT_08017f60);
      uVar9 = FUN_0800d21c((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),uVar2,uVar3);
      uVar9 = FUN_080153f4((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),DAT_08017f64,DAT_08017f68);
      uVar9 = FUN_0800d21c((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),uVar2,uVar3);
      uVar9 = FUN_080153f4((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),DAT_08017f6c,DAT_08017f70);
      uVar9 = FUN_0800d21c((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),uVar2,uVar3);
      uVar9 = FUN_080153f4((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),DAT_08017f74,DAT_08017f78);
      uVar9 = FUN_0800d21c((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),uVar2,uVar3);
      uVar9 = FUN_080153f4((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),0xffffffae,DAT_08017f7c);
      uVar9 = FUN_0800d21c((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),uVar2,uVar3);
      uVar5 = 0;
      uVar1 = DAT_08017f80;
    }
    else {
      uVar9 = FUN_0800d21c(uVar2,uVar3,uVar5,uVar1);
      uVar10 = FUN_0800d21c(DAT_08017f84,DAT_08017f88,uVar2,uVar3);
      uVar10 = FUN_080153f4((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),DAT_08017f8c,DAT_08017f90);
      uVar10 = FUN_0800d21c((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),uVar2,uVar3);
      uVar10 = FUN_080153f4((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),DAT_08017f94,DAT_08017f98);
      uVar10 = FUN_0800d21c((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),uVar2,uVar3);
      uVar10 = FUN_080153f4((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),DAT_08017f9c,DAT_08017fa0);
      uVar10 = FUN_0800d21c((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),uVar2,uVar3);
      uVar10 = FUN_080153f4((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),DAT_08017fa4,DAT_08017fa8);
      uVar10 = FUN_0800d21c((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),uVar2,uVar3);
      uVar10 = FUN_080153f4((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),DAT_08017fac,DAT_08017fb0);
      uVar9 = FUN_0800d21c((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),(int)uVar9,
                           (int)((ulonglong)uVar9 >> 0x20));
    }
    uVar8 = FUN_080153f4((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),uVar5,uVar1);
  }
  if (iVar6 * 0x40000000 < 0) {
    uVar8 = ((ulonglong)((uint)(uVar8 >> 0x20) ^ 0x80000000) << 0x20) + (uVar8 & 0xffffffff);
  }
  return uVar8;
}



// ==== FUN_08017fb8 @ 08017fb8 ====

/* WARNING: Removing unreachable block (ram,0x08017cd8) */

ulonglong FUN_08017fb8(int param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  char cVar7;
  char in_CY;
  ulonglong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  
  uVar8 = CONCAT44(param_2,param_1);
  uVar9 = FUN_0800d21c(DAT_08017f24,DAT_08017f28,param_1,param_2);
  uVar4 = (uint)((ulonglong)uVar9 >> 0x20);
  uVar6 = (undefined4)uVar9;
  FUN_08015758(uVar6,uVar4 & 0x7fffffff,DAT_08017f2c,DAT_08017f30);
  uVar5 = (uint)((ulonglong)DAT_08017f1c >> 0x20);
  if (in_CY == '\0') {
    FUN_080153f4(uVar6,uVar4,(int)DAT_08017f1c,uVar4 & 0x80000000 | uVar5);
    iVar1 = FUN_080152e0();
    if (iVar1 != 0) {
      uVar9 = FUN_08016e18();
      uVar9 = FUN_0800d21c((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),0,DAT_08017f38);
      uVar2 = (undefined4)((ulonglong)uVar9 >> 0x20);
      uVar6 = (undefined4)uVar9;
      uVar9 = FUN_0800d21c(0x50000000,DAT_08017f3c,uVar6,uVar2);
      uVar9 = FUN_080153f4((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),param_1,param_2);
      uVar10 = FUN_0800d21c(0x60000000,DAT_08017f40,uVar6,uVar2);
      uVar9 = FUN_080153f4((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),(int)uVar9,
                           (int)((ulonglong)uVar9 >> 0x20));
      uVar10 = FUN_0800d21c(0x20000000,DAT_08017f44,uVar6,uVar2);
      uVar9 = FUN_080153f4((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),(int)uVar9,
                           (int)((ulonglong)uVar9 >> 0x20));
      uVar10 = FUN_0800d21c(0,DAT_08017f48,uVar6,uVar2);
      uVar9 = FUN_080153f4((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),(int)uVar9,
                           (int)((ulonglong)uVar9 >> 0x20));
      uVar10 = FUN_0800d21c(0x20000000,DAT_08017f34,uVar6,uVar2);
      uVar8 = FUN_080153f4((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),(int)uVar9,
                           (int)((ulonglong)uVar9 >> 0x20));
    }
    goto LAB_08017df2;
  }
  if ((int)(param_2 << 1) >> 0x15 == -1) {
    if ((param_2 & 0xfffff) != 0) {
      return uVar8;
    }
    return 0x7fffffffffffffff;
  }
  if ((param_2 & 0x7fffffff) == 0 && param_1 == 0) {
    return uVar8;
  }
  uVar11 = FUN_080153f4(uVar6,uVar4,(int)DAT_08017f1c,uVar4 & 0x80000000 | uVar5);
  uVar4 = (uint)(uVar11 >> 0x20);
  if (((uVar11 & 0x7fffffff00000000) != 0 || (int)(uint)uVar11 < 0) || (uVar11 & 0x7fffffff) != 0) {
    iVar1 = -((uVar4 & 0x7fffffff) >> 0x14);
    uVar5 = iVar1 + 0x433;
    if ((int)uVar5 < 0x35) {
      if ((int)uVar5 < 0x21) {
        if (uVar5 != 0x20) {
          if (0 < (int)uVar5) {
            uVar11 = CONCAT44(uVar4,((uint)uVar11 >> (uVar5 & 0xff)) << (uVar5 & 0xff));
          }
          goto LAB_08017d42;
        }
      }
      else {
        uVar5 = iVar1 + 0x413;
        uVar4 = (uVar4 >> (uVar5 & 0xff)) << (uVar5 & 0xff);
      }
      uVar11 = (ulonglong)uVar4 << 0x20;
    }
    else {
      uVar11 = (ulonglong)(uVar4 & 0x80000000) << 0x20;
    }
  }
LAB_08017d42:
  uVar6 = (undefined4)(uVar11 >> 0x20);
  iVar1 = (int)uVar11;
  if ((uVar11 & 0x7fffffff00000000) != 0 || iVar1 != 0) {
    uVar9 = FUN_0800d21c(0,DAT_08017f38,iVar1,uVar6);
    uVar3 = (undefined4)((ulonglong)uVar9 >> 0x20);
    uVar2 = (undefined4)uVar9;
    uVar9 = FUN_0800d21c(0x50000000,DAT_08017f3c,uVar2,uVar3);
    uVar9 = FUN_080153f4((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),param_1,param_2);
    uVar10 = FUN_0800d21c(0x60000000,DAT_08017f40,uVar2,uVar3);
    uVar9 = FUN_080153f4((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),(int)uVar9,
                         (int)((ulonglong)uVar9 >> 0x20));
    uVar10 = FUN_0800d21c(0x20000000,DAT_08017f44,uVar2,uVar3);
    uVar9 = FUN_080153f4((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),(int)uVar9,
                         (int)((ulonglong)uVar9 >> 0x20));
    uVar10 = FUN_0800d21c(0,DAT_08017f48,uVar2,uVar3);
    uVar9 = FUN_080153f4((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),(int)uVar9,
                         (int)((ulonglong)uVar9 >> 0x20));
    uVar10 = FUN_0800d21c(0x20000000,DAT_08017f34,uVar2,uVar3);
    uVar8 = FUN_080153f4((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),(int)uVar9,
                         (int)((ulonglong)uVar9 >> 0x20));
  }
  iVar1 = FUN_080152e0(iVar1,uVar6);
LAB_08017df2:
  cVar7 = '\0';
  uVar4 = (uint)(uVar8 >> 0x20);
  uVar6 = (undefined4)uVar8;
  FUN_08015758(uVar6,uVar4 & 0x7fffffff,0,0x3e400000);
  if (cVar7 == '\0') {
    if (iVar1 << 0x1f < 0) {
      uVar8 = DAT_08017f4c;
    }
  }
  else {
    uVar9 = FUN_0800d21c(uVar6,uVar4,uVar6,uVar4);
    uVar3 = (undefined4)((ulonglong)uVar9 >> 0x20);
    uVar2 = (undefined4)uVar9;
    if (iVar1 << 0x1f < 0) {
      uVar9 = FUN_0800d21c(DAT_08017f54,DAT_08017f58,uVar2,uVar3);
      uVar9 = FUN_080153f4((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),DAT_08017f5c,DAT_08017f60);
      uVar9 = FUN_0800d21c((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),uVar2,uVar3);
      uVar9 = FUN_080153f4((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),DAT_08017f64,DAT_08017f68);
      uVar9 = FUN_0800d21c((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),uVar2,uVar3);
      uVar9 = FUN_080153f4((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),DAT_08017f6c,DAT_08017f70);
      uVar9 = FUN_0800d21c((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),uVar2,uVar3);
      uVar9 = FUN_080153f4((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),DAT_08017f74,DAT_08017f78);
      uVar9 = FUN_0800d21c((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),uVar2,uVar3);
      uVar9 = FUN_080153f4((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),0xffffffae,DAT_08017f7c);
      uVar9 = FUN_0800d21c((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),uVar2,uVar3);
      uVar6 = 0;
      uVar4 = DAT_08017f80;
    }
    else {
      uVar9 = FUN_0800d21c(uVar2,uVar3,uVar6,uVar4);
      uVar10 = FUN_0800d21c(DAT_08017f84,DAT_08017f88,uVar2,uVar3);
      uVar10 = FUN_080153f4((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),DAT_08017f8c,DAT_08017f90);
      uVar10 = FUN_0800d21c((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),uVar2,uVar3);
      uVar10 = FUN_080153f4((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),DAT_08017f94,DAT_08017f98);
      uVar10 = FUN_0800d21c((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),uVar2,uVar3);
      uVar10 = FUN_080153f4((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),DAT_08017f9c,DAT_08017fa0);
      uVar10 = FUN_0800d21c((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),uVar2,uVar3);
      uVar10 = FUN_080153f4((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),DAT_08017fa4,DAT_08017fa8);
      uVar10 = FUN_0800d21c((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),uVar2,uVar3);
      uVar10 = FUN_080153f4((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),DAT_08017fac,DAT_08017fb0);
      uVar9 = FUN_0800d21c((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),(int)uVar9,
                           (int)((ulonglong)uVar9 >> 0x20));
    }
    uVar8 = FUN_080153f4((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),uVar6,uVar4);
  }
  if (iVar1 << 0x1e < 0) {
    uVar8 = ((ulonglong)((uint)(uVar8 >> 0x20) ^ 0x80000000) << 0x20) + (uVar8 & 0xffffffff);
  }
  return uVar8;
}



// ==== FUN_08017fbc @ 08017fbc ====

longlong FUN_08017fbc(undefined4 *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  if (param_1 == (undefined4 *)0x0) {
    return CONCAT44(param_4,1);
  }
  if (*(char *)((int)param_1 + 0x3d) == '\0') {
    *(undefined1 *)(param_1 + 0xf) = 0;
    FUN_080190c4(param_1);
  }
  *(undefined1 *)((int)param_1 + 0x3d) = 2;
  FUN_0801824c(*param_1,param_1 + 1);
  *(undefined1 *)((int)param_1 + 0x3d) = 1;
  return (ulonglong)param_4 << 0x20;
}



// ==== FUN_08018012 @ 08018012 ====

longlong FUN_08018012(undefined4 *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  if (param_1 == (undefined4 *)0x0) {
    return CONCAT44(param_4,1);
  }
  if (*(char *)((int)param_1 + 0x3d) == '\0') {
    *(undefined1 *)(param_1 + 0xf) = 0;
    FUN_080190c6(param_1);
  }
  *(undefined1 *)((int)param_1 + 0x3d) = 2;
  FUN_0801824c(*param_1,param_1 + 1);
  *(undefined1 *)((int)param_1 + 0x3d) = 1;
  return (ulonglong)param_4 << 0x20;
}



// ==== FUN_08018046 @ 08018046 ====

undefined4 FUN_08018046(int *param_1,undefined4 param_2)

{
  int iVar1;
  uint *puVar2;
  
  FUN_0801842c(*param_1,param_2,1);
  iVar1 = *param_1;
  if (iVar1 == DAT_0801807c) {
    *(uint *)(iVar1 + 0x44) = *(uint *)(iVar1 + 0x44) | 0x8000;
  }
  puVar2 = (uint *)*param_1;
  if ((puVar2[2] & 7) != 6) {
    *puVar2 = *puVar2 | 1;
  }
  return 0;
}



// ==== FUN_080181d2 @ 080181d2 ====

undefined4 FUN_080181d2(undefined4 *param_1,undefined4 param_2,int param_3)

{
  char *pcVar1;
  
  pcVar1 = (char *)(param_1 + 0xf);
  if (*pcVar1 != '\x01') {
    *pcVar1 = '\x01';
    *(undefined1 *)((int)param_1 + 0x3d) = 2;
    if (param_3 == 0) {
      FUN_080182d0(*param_1);
    }
    else if (param_3 == 4) {
      FUN_08018320(*param_1);
    }
    else if (param_3 == 8) {
      FUN_08018376(*param_1);
    }
    else if (param_3 == 0xc) {
      FUN_080183ca(*param_1);
    }
    *(undefined1 *)((int)param_1 + 0x3d) = 1;
    *pcVar1 = '\0';
    return 0;
  }
  return 2;
}



// ==== FUN_0801824c @ 0801824c ====

void FUN_0801824c(uint *param_1,uint *param_2)

{
  uint *puVar1;
  uint uVar2;
  
  puVar1 = DAT_0801840c;
  uVar2 = *param_1;
  if ((((param_1 == DAT_0801840c) || (param_1 == (uint *)0x40000000)) || (param_1 == DAT_08018410))
     || ((param_1 == DAT_08018414 || (param_1 == DAT_08018418)))) {
    uVar2 = uVar2 & 0xffffff8f | param_2[1];
  }
  if (((param_1 == DAT_0801840c) || (param_1 == (uint *)0x40000000)) ||
     ((param_1 == DAT_08018410 ||
      ((((param_1 == DAT_08018414 || (param_1 == DAT_08018418)) || (param_1 == DAT_0801841c)) ||
       ((param_1 == DAT_08018420 || (param_1 == DAT_08018424)))))))) {
    uVar2 = uVar2 & 0xfffffcff | param_2[3];
  }
  *param_1 = uVar2 & 0xffffff7f | param_2[5];
  param_1[0xb] = param_2[2];
  param_1[10] = *param_2;
  if (param_1 == puVar1) {
    *DAT_08018428 = param_2[4];
  }
  param_1[5] = 1;
  return;
}



// ==== FUN_080182d0 @ 080182d0 ====

void FUN_080182d0(int param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) & 0xfffffffe;
  uVar3 = *(uint *)(param_1 + 4);
  uVar1 = *param_2;
  uVar2 = *(uint *)(param_1 + 0x20) & 0xfffffffd | param_2[2];
  if (param_1 == DAT_0801840c) {
    uVar2 = (uVar2 & 0xfffffff7 | param_2[3]) & 0xfffffffb;
    uVar3 = uVar3 & 0xfffffcff | param_2[5] | param_2[6];
  }
  *(uint *)(param_1 + 4) = uVar3;
  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) & 0xffffff8c | uVar1;
  *(uint *)(param_1 + 0x34) = param_2[1];
  *(uint *)(param_1 + 0x20) = uVar2;
  return;
}



// ==== FUN_08018320 @ 08018320 ====

void FUN_08018320(int param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) & 0xffffffef;
  uVar3 = *(uint *)(param_1 + 4);
  iVar1 = *param_2;
  uVar2 = *(uint *)(param_1 + 0x20) & 0xffffffdf | param_2[2] << 4;
  if (param_1 == DAT_0801840c) {
    uVar2 = (uVar2 & 0xffffff7f | param_2[3] << 4) & 0xffffffbf;
    uVar3 = uVar3 & 0xfffff3ff | (param_2[5] | param_2[6]) << 2;
  }
  *(uint *)(param_1 + 4) = uVar3;
  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) & 0xffff8cff | iVar1 << 8;
  *(int *)(param_1 + 0x38) = param_2[1];
  *(uint *)(param_1 + 0x20) = uVar2;
  return;
}



// ==== FUN_08018376 @ 08018376 ====

void FUN_08018376(int param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) & 0xfffffeff;
  uVar3 = *(uint *)(param_1 + 4);
  uVar1 = *param_2;
  uVar2 = *(uint *)(param_1 + 0x20) & 0xfffffdff | param_2[2] << 8;
  if (param_1 == DAT_0801840c) {
    uVar2 = (uVar2 & 0xfffff7ff | param_2[3] << 8) & 0xfffffbff;
    uVar3 = uVar3 & 0xffffcfff | (param_2[5] | param_2[6]) << 4;
  }
  *(uint *)(param_1 + 4) = uVar3;
  *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) & 0xffffff8c | uVar1;
  *(uint *)(param_1 + 0x3c) = param_2[1];
  *(uint *)(param_1 + 0x20) = uVar2;
  return;
}



// ==== FUN_080183ca @ 080183ca ====

void FUN_080183ca(int param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) & 0xffffefff;
  uVar1 = *(uint *)(param_1 + 4);
  iVar2 = *param_2;
  iVar3 = param_2[2];
  if (param_1 == DAT_0801840c) {
    uVar1 = uVar1 & 0xffffbfff | param_2[5] << 6;
  }
  *(uint *)(param_1 + 4) = uVar1;
  *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) & 0xffff8cff | iVar2 << 8;
  *(int *)(param_1 + 0x40) = param_2[1];
  *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) & 0xffffdfff | iVar3 << 0xc;
  return;
}



// ==== FUN_0801842c @ 0801842c ====

void FUN_0801842c(int param_1,uint param_2,int param_3)

{
  *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) & ~(1 << (param_2 & 0x1f));
  *(uint *)(param_1 + 0x20) = param_3 << (param_2 & 0x1f) | *(uint *)(param_1 + 0x20);
  return;
}



// ==== FUN_0801844c @ 0801844c ====

undefined4 FUN_0801844c(int *param_1,uint *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  piVar3 = param_1 + 0xf;
  if ((char)*piVar3 == '\x01') {
    uVar1 = 2;
  }
  else {
    *(char *)piVar3 = '\x01';
    *(undefined1 *)((int)param_1 + 0x3d) = 2;
    iVar4 = *param_1;
    *(uint *)(iVar4 + 4) = *(uint *)(iVar4 + 4) & 0xffffff8f | *param_2;
    iVar2 = *param_1;
    if ((((iVar2 == DAT_080184b4) || (iVar2 == 0x40000000)) || (iVar2 == DAT_080184b8)) ||
       (((iVar2 == DAT_080184bc || (iVar2 == DAT_080184c0)) || (iVar2 == DAT_080184c4)))) {
      *(uint *)(iVar2 + 8) = *(uint *)(iVar4 + 8) & 0xffffff7f | param_2[1];
    }
    *(undefined1 *)((int)param_1 + 0x3d) = 1;
    uVar1 = 0;
    *(char *)piVar3 = '\0';
  }
  return uVar1;
}



// ==== FUN_080184c8 @ 080184c8 ====

longlong FUN_080184c8(void)

{
  uint *puVar1;
  uint unaff_r7;
  
  puVar1 = DAT_080184f8;
  *DAT_080184f8 = *DAT_080184f8 | 0x200;
  *puVar1 = *puVar1 | 0x400;
  *puVar1 = *puVar1 | 0x100;
  thunk_FUN_080170c4(3);
  FUN_0801477c(0xf);
  FUN_080190d4();
  return (ulonglong)unaff_r7 << 0x20;
}



// ==== FUN_080184fc @ 080184fc ====

void FUN_080184fc(void)

{
  undefined4 uVar1;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  FUN_0800a350(&local_1c,0x14,0);
  *DAT_0801890c = *DAT_0801890c | 1;
  uVar1 = DAT_08018910;
  local_c = 5;
  local_18 = 2;
  local_14 = 0;
  local_10 = 3;
  local_1c = 0x20;
  FUN_0800dc80(DAT_08018910,&local_1c);
  local_1c = 0x40;
  FUN_0800dc80(uVar1,&local_1c);
  local_1c = 0x80;
  FUN_0800dc80(uVar1,&local_1c);
  local_18 = 1;
  local_14 = 1;
  local_10 = 3;
  local_1c = 0x10;
  FUN_0800dc80(uVar1,&local_1c);
  return;
}



// ==== FUN_08018576 @ 08018576 ====

/* WARNING: Removing unreachable block (ram,0x080185c8) */

undefined4 FUN_08018576(void)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  
  puVar1 = DAT_08018914;
  *DAT_08018914 = *DAT_08018914 | 0x1000;
  puVar2 = DAT_08018918;
  uVar4 = *puVar1;
  *(undefined1 *)(DAT_08018918 + 4) = 0;
  puVar2[3] = 10;
  *puVar2 = 0;
  puVar2[2] = 0;
  FUN_080184fc();
  puVar3 = DAT_0801891c;
  DAT_0801891c[0xc] = 0;
  *puVar3 = 0;
  *(undefined4 *)(puVar3 + 4) = 8;
  *(undefined4 *)(puVar3 + 8) = 0;
  uVar5 = FUN_0801929c(DAT_08018920,puVar3,uVar4 & 0x1000);
  return uVar5;
}



// ==== FUN_080185ca @ 080185ca ====

void FUN_080185ca(void)

{
  FUN_0800de0a(DAT_08018910,0x10,0);
  return;
}



// ==== FUN_080185d6 @ 080185d6 ====

void FUN_080185d6(void)

{
  FUN_0800de0a(DAT_08018910,0x10,1);
  return;
}



// ==== FUN_080185fc @ 080185fc ====

undefined8 FUN_080185fc(undefined4 param_1)

{
  byte bVar1;
  undefined4 unaff_r7;
  
  bVar1 = (**(code **)(DAT_08018920 + 0x6c))(param_1);
  return CONCAT44(unaff_r7,(uint)bVar1);
}



// ==== FUN_08018604 @ 08018604 ====

void FUN_08018604(void)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = DAT_08018920;
  *(undefined2 *)(DAT_08018920 + 0x58) = 0;
  *(undefined4 *)(iVar2 + 0x60) = DAT_08018924;
  *(undefined4 *)(iVar2 + 0x6c) = DAT_08018928;
  FUN_080192f8();
  FUN_080186f8();
  puVar1 = DAT_08018918;
  uVar3 = FUN_08018676();
  *puVar1 = uVar3;
  uVar3 = uVar3 & 0xffff;
  if ((uVar3 == 0x3015) || (uVar3 == 0x4015)) {
    puVar1[2] = 0x800;
    return;
  }
  if (uVar3 == 0x4017) {
    puVar1[2] = 0x2000;
    return;
  }
  if (uVar3 != 0x4018) {
    if (uVar3 != 0x4019) {
      puVar1[2] = 0;
      return;
    }
    puVar1[2] = 0x8000;
    return;
  }
  puVar1[2] = 0x4000;
  return;
}



// ==== FUN_08018676 @ 08018676 ====

uint FUN_08018676(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  FUN_080185ca();
  FUN_080185fc(0x9f);
  iVar1 = FUN_080185fc(0xff);
  iVar2 = FUN_080185fc(0xff);
  uVar3 = FUN_080185fc(0xff);
  FUN_080185d6();
  return iVar1 << 0x10 | iVar2 << 8 | uVar3;
}



// ==== FUN_080186a6 @ 080186a6 ====

undefined1 FUN_080186a6(int param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  
  if (param_1 == 2) {
    uVar2 = 0x35;
  }
  else if (param_1 == 3) {
    uVar2 = 0x15;
  }
  else {
    uVar2 = 5;
  }
  FUN_080185ca();
  FUN_080185fc(uVar2);
  uVar1 = FUN_080185fc(0xff);
  FUN_080185d6();
  return uVar1;
}



// ==== FUN_080186d8 @ 080186d8 ====

void FUN_080186d8(void)

{
  undefined4 unaff_r7;
  
  FUN_080185ca();
  FUN_080185fc(6);
  FUN_080185d6(unaff_r7);
  return;
}



// ==== FUN_080186ea @ 080186ea ====

undefined4 FUN_080186ea(void)

{
  int iVar1;
  undefined4 unaff_r7;
  
  do {
    iVar1 = FUN_080186a6(1);
  } while (iVar1 << 0x1f < 0);
  return unaff_r7;
}



// ==== FUN_080186f8 @ 080186f8 ====

void FUN_080186f8(void)

{
  int iVar1;
  
  FUN_080185ca();
  FUN_080185fc(0x15);
  iVar1 = FUN_080185fc(0xff);
  FUN_080185d6();
  if (-1 < iVar1 << 0x1f) {
    FUN_080185ca();
    FUN_080185fc(0xb7);
    FUN_080185d6();
    return;
  }
  return;
}



// ==== FUN_08018726 @ 08018726 ====

void FUN_08018726(uint param_1)

{
  FUN_080186d8();
  FUN_080186ea();
  FUN_080185ca();
  FUN_080185fc(0x20);
  if (*(int *)(DAT_08018918 + 8) == 0x8000) {
    FUN_080185fc(param_1 >> 0x18);
  }
  FUN_080185fc(param_1 >> 0x10 & 0xff);
  FUN_080185fc((param_1 & 0xffff) >> 8);
  FUN_080185fc(param_1 & 0xff);
  FUN_080185d6();
  FUN_080186ea();
  return;
}



// ==== FUN_08018778 @ 08018778 ====

void FUN_08018778(undefined1 *param_1,uint param_2,uint param_3)

{
  FUN_080186d8();
  FUN_080185ca();
  FUN_080185fc(2);
  if (*(int *)(DAT_08018918 + 8) == 0x8000) {
    FUN_080185fc(param_2 >> 0x18);
  }
  FUN_080185fc(param_2 >> 0x10 & 0xff);
  FUN_080185fc((param_2 & 0xffff) >> 8);
  FUN_080185fc(param_2 & 0xff);
  if (0x100 < param_3) {
    param_3 = 0x100;
  }
  while (param_3 != 0) {
    FUN_080185fc(*param_1);
    param_1 = param_1 + 1;
    param_3 = param_3 - 1;
  }
  FUN_080185d6();
  FUN_080186ea();
  return;
}



// ==== FUN_080188ac @ 080188ac ====

void FUN_080188ac(undefined1 *param_1,uint param_2,int param_3)

{
  undefined1 uVar1;
  int local_10;
  
  FUN_080185ca();
  FUN_080185fc(3);
  if (*(int *)(DAT_08018918 + 8) == 0x8000) {
    FUN_080185fc(param_2 >> 0x18);
  }
  FUN_080185fc(param_2 >> 0x10 & 0xff);
  FUN_080185fc((param_2 & 0xffff) >> 8);
  FUN_080185fc(param_2 & 0xff);
  local_10 = param_3;
  while( true ) {
    if (local_10 == 0) break;
    uVar1 = FUN_080185fc(0xff);
    *param_1 = uVar1;
    param_1 = param_1 + 1;
    local_10 = local_10 + -1;
  }
  FUN_080185d6(0xffffffff);
  return;
}



// ==== FUN_0801892c @ 0801892c ====

void FUN_0801892c(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_0801894c;
  *DAT_0801894c = 0;
  puVar1[2] = 0;
  puVar1[1] = *DAT_08018950 / 1000 - 1;
  *puVar1 = 7;
  return;
}



// ==== FUN_080189c8 @ 080189c8 ====

void FUN_080189c8(void)

{
  bool bVar1;
  char cVar2;
  
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setMainStackPointer(*(undefined4 *)*DAT_080189fc);
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setThreadModePrivileged(1);
    bVar1 = (bool)isThreadMode();
    if (bVar1) {
      cVar2 = isUsingMainStack();
      setStackMode(cVar2 == '\x01');
    }
  }
  enableIRQinterrupts();
  enableFIQinterrupts();
  DataSynchronizationBarrier(0xf);
  InstructionSynchronizationBarrier(0xf);
  software_interrupt(0);
  *DAT_08018a00 = *DAT_08018a00 | 0xf00000;
  return;
}



// ==== FUN_080189e8 @ 080189e8 ====

void FUN_080189e8(void)

{
  *DAT_08018a00 = *DAT_08018a00 | 0xf00000;
  return;
}



// ==== FUN_08018a04 @ 08018a04 ====

void FUN_08018a04(void)

{
  FUN_08019310(1);
  return;
}



// ==== FUN_08018a0e @ 08018a0e ====

void FUN_08018a0e(void)

{
  return;
}



// ==== FUN_08018a10 @ 08018a10 ====

void FUN_08018a10(void)

{
  return;
}



// ==== FUN_08018a12 @ 08018a12 ====

undefined8 FUN_08018a12(int *param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint extraout_r2;
  uint uVar4;
  byte *pbVar5;
  byte *pbVar6;
  uint uVar7;
  byte *pbVar8;
  bool bVar9;
  bool bVar10;
  
  pbVar5 = (byte *)*param_1;
  uVar7 = 0;
  while (iVar2 = FUN_08015218(*pbVar5), iVar2 != 0) {
    pbVar5 = pbVar5 + 1;
  }
  bVar1 = *pbVar5;
  if (bVar1 == 0x2d) {
    uVar7 = 8;
  }
  if (bVar1 == 0x2d || bVar1 == 0x2b) {
    pbVar5 = pbVar5 + 1;
  }
  bVar1 = *pbVar5;
  if ((bVar1 | 0x20) == 0x6e) {
    bVar1 = pbVar5[1] | 0x20;
    bVar9 = bVar1 == 0x61;
    if (bVar9) {
      bVar1 = pbVar5[2] | 0x20;
    }
    if (bVar9 && bVar1 == 0x6e) {
      pbVar6 = pbVar5 + 3;
      uVar7 = 4;
      pbVar5 = pbVar6;
      if (*pbVar6 == 0x28) {
        do {
          do {
            pbVar8 = pbVar5;
            pbVar5 = pbVar8 + 1;
            bVar1 = *pbVar5;
            iVar2 = FUN_08019324((uint)bVar1);
          } while (iVar2 != 0);
        } while ((bVar1 - 0x30 < 10) || (*pbVar5 == 0x5f));
        if (*pbVar5 == 0x29) {
          pbVar6 = pbVar8 + 2;
        }
      }
    }
    else {
      pbVar6 = (byte *)*param_1;
      uVar7 = 0;
    }
  }
  else {
    if ((bVar1 | 0x20) != 0x69) {
      bVar9 = bVar1 == 0x30;
      if (bVar9) {
        bVar1 = pbVar5[1] | 0x20;
      }
      if (bVar9 && bVar1 == 0x78) {
        pbVar6 = pbVar5 + 2;
        if (*pbVar6 == 0x2e) {
          pbVar6 = pbVar5 + 3;
        }
        uVar3 = (uint)*pbVar6;
        bVar9 = 5 < uVar3 - 0x61;
        uVar4 = extraout_r2;
        if (bVar9) {
          uVar4 = uVar3 - 0x41;
        }
        bVar10 = bVar9 && 5 < uVar4;
        if (bVar9 && 5 < uVar4) {
          bVar10 = 9 < uVar3 - 0x30;
        }
        if (!bVar10) {
          pbVar5 = pbVar5 + 2;
          uVar7 = uVar7 | 2;
          goto LAB_08018b2c;
        }
      }
      uVar7 = uVar7 | 1;
      goto LAB_08018b2c;
    }
    bVar1 = pbVar5[1] | 0x20;
    bVar9 = bVar1 == 0x6e;
    if (bVar9) {
      bVar1 = pbVar5[2] | 0x20;
    }
    if (bVar9 && bVar1 == 0x66) {
      pbVar6 = pbVar5 + 3;
      bVar1 = *pbVar6 | 0x20;
      uVar7 = uVar7 | 3;
      bVar9 = bVar1 == 0x69;
      if (bVar9) {
        bVar1 = pbVar5[4] | 0x20;
      }
      if (bVar9 && bVar1 == 0x6e) {
        bVar1 = pbVar5[5] | 0x20;
        bVar9 = bVar1 == 0x69;
        if (bVar9) {
          bVar1 = pbVar5[6] | 0x20;
        }
        if ((bVar9 && bVar1 == 0x74) && ((pbVar5[7] | 0x20) == 0x79)) {
          pbVar6 = pbVar5 + 8;
        }
      }
    }
    else {
      pbVar6 = (byte *)*param_1;
      uVar7 = 0;
    }
  }
  pbVar5 = pbVar6;
  if (param_2 != (int *)0x0) {
    *param_2 = (int)pbVar6;
  }
LAB_08018b2c:
  *param_1 = (int)pbVar5;
  return CONCAT44(param_4,uVar7);
}



// ==== FUN_08018b34 @ 08018b34 ====

int FUN_08018b34(byte *param_1,byte *param_2,undefined4 *param_3,int *param_4,int param_5)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  int iVar6;
  byte *pbVar7;
  int iVar8;
  char acStack_59 [49];
  byte *local_28;
  
  bVar1 = false;
  param_5 = param_5 * 9;
  iVar8 = 0;
  if (0x2d < param_5) {
    param_5 = 0x2d;
  }
  *param_4 = 0;
  param_4[1] = 0;
  bVar2 = false;
  for (; *param_2 == 0x30; param_2 = param_2 + 1) {
    bVar2 = true;
  }
  iVar6 = 0;
  local_28 = param_1;
  for (; *param_2 - 0x30 < 10; param_2 = param_2 + 1) {
    if (iVar6 < param_5) {
      acStack_59[iVar6 + 1] = *param_2 - 0x30;
      iVar6 = iVar6 + 1;
    }
    else {
      *param_4 = *param_4 + 1;
      if (*param_2 != 0x30) {
        bVar1 = true;
      }
    }
    bVar2 = true;
  }
  iVar3 = FUN_08016e88();
  if (*param_2 == **(byte **)(iVar3 + 0x24)) {
    param_2 = param_2 + 1;
  }
  if (iVar6 == 0) {
    for (; *param_2 == 0x30; param_2 = param_2 + 1) {
      *param_4 = *param_4 + -1;
      bVar2 = true;
    }
  }
  while( true ) {
    bVar5 = *param_2;
    if (9 < bVar5 - 0x30) break;
    if (iVar6 < param_5) {
      acStack_59[iVar6 + 1] = bVar5 - 0x30;
      iVar6 = iVar6 + 1;
      *param_4 = *param_4 + -1;
    }
    else if (bVar5 != 0x30) {
      bVar1 = true;
    }
    param_2 = param_2 + 1;
    bVar2 = true;
  }
  if (bVar1) {
    acStack_59[param_5] = acStack_59[param_5] + '\x01';
  }
  for (; 0 < iVar6; iVar6 = iVar6 + -1) {
    if (acStack_59[iVar6] != '\0') goto LAB_08018c1e;
    *param_4 = *param_4 + 1;
  }
  if (iVar6 == 0) {
    acStack_59[1] = 0;
    iVar6 = 1;
  }
LAB_08018c1e:
  pbVar7 = param_2;
  if (bVar2) {
    iVar4 = (9 - iVar6) + (iVar6 / 9) * 9;
    iVar3 = 0;
    if (iVar4 != (iVar4 / 9) * 9) {
      iVar8 = 1;
    }
    for (; iVar3 < iVar6; iVar3 = iVar3 + 1) {
      if (iVar4 == (iVar4 / 9) * 9) {
        iVar8 = iVar8 + 1;
        param_4[iVar8] = (uint)(byte)acStack_59[iVar3 + 1];
      }
      else {
        param_4[iVar8] = (uint)(byte)acStack_59[iVar3 + 1] + param_4[iVar8] * 10;
      }
      iVar4 = iVar4 + 1;
    }
    if ((*param_2 | 0x20) == 0x65) {
      pbVar7 = param_2 + 1;
      if (*pbVar7 == 0x2b || *pbVar7 == 0x2d) {
        bVar5 = *pbVar7;
        pbVar7 = param_2 + 2;
      }
      else {
        bVar5 = 0x2b;
      }
      bVar1 = false;
      iVar6 = 0;
      for (; *pbVar7 - 0x30 < 10; pbVar7 = pbVar7 + 1) {
        if (iVar6 < DAT_08018ce8) {
          iVar6 = (uint)*pbVar7 + iVar6 * 10 + -0x30;
        }
        bVar1 = true;
      }
      if (bVar5 == 0x2d) {
        iVar6 = -iVar6;
      }
      *param_4 = iVar6 + *param_4;
      if (!bVar1) {
        pbVar7 = param_2;
      }
    }
  }
  if (param_3 != (undefined4 *)0x0) {
    if (!bVar2) {
      pbVar7 = local_28;
    }
    *param_3 = pbVar7;
  }
  return iVar8;
}



// ==== FUN_08018cec @ 08018cec ====

int FUN_08018cec(byte *param_1,byte *param_2,undefined4 *param_3,int *param_4,int param_5)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  int iVar6;
  byte *pbVar7;
  int iVar8;
  undefined4 local_54;
  byte local_50 [40];
  byte *local_28;
  
  param_5 = param_5 * 7;
  iVar8 = 0;
  if (0x23 < param_5) {
    param_5 = 0x23;
  }
  *param_4 = 0;
  param_4[1] = 0;
  bVar1 = false;
  for (; *param_2 == 0x30; param_2 = param_2 + 1) {
    bVar1 = true;
  }
  local_54 = s_0123456789abcdefABCDEF_08018ec4;
  iVar6 = 0;
  local_28 = param_1;
  while (iVar3 = FUN_08015240(s_0123456789abcdefABCDEF_08018ec4,*param_2,0x16), iVar3 != 0) {
    if (param_5 < iVar6) {
      *param_4 = *param_4 + 1;
    }
    else {
      local_50[iVar6] = (&DAT_08018edc)[iVar3 - (int)local_54];
      iVar6 = iVar6 + 1;
    }
    param_2 = param_2 + 1;
    bVar1 = true;
  }
  iVar3 = FUN_08016e88();
  if (*param_2 == **(byte **)(iVar3 + 0x24)) {
    param_2 = param_2 + 1;
  }
  if (iVar6 == 0) {
    for (; *param_2 == 0x30; param_2 = param_2 + 1) {
      *param_4 = *param_4 + -1;
      bVar1 = true;
    }
  }
  while (iVar3 = FUN_08015240(s_0123456789abcdefABCDEF_08018ec4,*param_2,0x16), iVar3 != 0) {
    if (iVar6 <= param_5) {
      local_50[iVar6] = (&DAT_08018edc)[iVar3 - (int)local_54];
      iVar6 = iVar6 + 1;
      *param_4 = *param_4 + -1;
    }
    param_2 = param_2 + 1;
    bVar1 = true;
  }
  if (param_5 < iVar6) {
    if (7 < local_50[param_5]) {
      local_50[param_5 + -1] = local_50[param_5 + -1] + 1;
    }
    *param_4 = *param_4 + 1;
    iVar6 = param_5;
  }
  for (; 0 < iVar6; iVar6 = iVar6 + -1) {
    if (local_50[iVar6 + -1] != 0) goto LAB_08018df2;
    *param_4 = *param_4 + 1;
  }
  if (iVar6 == 0) {
    local_50[0] = 0;
    iVar6 = 1;
  }
LAB_08018df2:
  *param_4 = *param_4 << 2;
  pbVar7 = param_2;
  if (bVar1) {
    iVar4 = (7 - iVar6) + (iVar6 / 7) * 7;
    iVar3 = 0;
    if (iVar4 != (iVar4 / 7) * 7) {
      iVar8 = 1;
    }
    for (; iVar3 < iVar6; iVar3 = iVar3 + 1) {
      if (iVar4 == (iVar4 / 7) * 7) {
        iVar8 = iVar8 + 1;
        param_4[iVar8] = (uint)local_50[iVar3];
      }
      else {
        param_4[iVar8] = (uint)local_50[iVar3] + param_4[iVar8] * 0x10;
      }
      iVar4 = iVar4 + 1;
    }
    if ((*param_2 | 0x20) == 0x70) {
      pbVar7 = param_2 + 1;
      if (*pbVar7 == 0x2b || *pbVar7 == 0x2d) {
        bVar5 = *pbVar7;
        pbVar7 = param_2 + 2;
      }
      else {
        bVar5 = 0x2b;
      }
      bVar2 = false;
      iVar6 = 0;
      for (; *pbVar7 - 0x30 < 10; pbVar7 = pbVar7 + 1) {
        if (iVar6 < DAT_08018ec0) {
          iVar6 = (uint)*pbVar7 + iVar6 * 10 + -0x30;
        }
        bVar2 = true;
      }
      if (bVar5 == 0x2d) {
        iVar6 = -iVar6;
      }
      *param_4 = iVar6 + *param_4;
      if (!bVar2) {
        pbVar7 = param_2;
      }
    }
  }
  if (param_3 != (undefined4 *)0x0) {
    if (!bVar1) {
      pbVar7 = local_28;
    }
    *param_3 = pbVar7;
  }
  return iVar8;
}



// ==== FUN_080190c4 @ 080190c4 ====

void FUN_080190c4(void)

{
  return;
}



// ==== FUN_080190c6 @ 080190c6 ====

void FUN_080190c6(void)

{
  return;
}



// ==== FUN_080190c8 @ 080190c8 ====

void FUN_080190c8(void)

{
  return;
}



// ==== FUN_080190ca @ 080190ca ====

void FUN_080190ca(void)

{
  return;
}



// ==== FUN_080190cc @ 080190cc ====

void FUN_080190cc(void)

{
  return;
}



// ==== FUN_080190ce @ 080190ce ====

void FUN_080190ce(void)

{
  return;
}



// ==== FUN_080190d0 @ 080190d0 ====

void FUN_080190d0(void)

{
  return;
}



// ==== FUN_080190d4 @ 080190d4 ====

void FUN_080190d4(void)

{
  uint *puVar1;
  
  puVar1 = DAT_08019114;
  DAT_08019114[1] = DAT_08019114[1] | 0x4000;
  *puVar1 = *puVar1 | 0x10000000;
  FUN_0801719c(0xfffffffe,0xf,0);
  return;
}



// ==== FUN_08019118 @ 08019118 ====

void FUN_08019118(undefined4 *param_1,undefined4 param_2)

{
  switch(param_2) {
  case 0:
    DAT_080192fc[1] = DAT_080192fc[1] | 0x1000;
    *param_1 = DAT_08019300;
    break;
  case 1:
    *DAT_080192fc = *DAT_080192fc | 0x4000;
    *param_1 = DAT_08019304;
    break;
  case 2:
    *DAT_080192fc = *DAT_080192fc | 0x8000;
    *param_1 = DAT_08019308;
    break;
  case 3:
    DAT_080192fc[1] = DAT_080192fc[1] | 0x2000;
    *param_1 = DAT_0801930c;
  }
  return;
}



// ==== FUN_080191a0 @ 080191a0 ====

void FUN_080191a0(int param_1,undefined4 param_2)

{
  switch(param_2) {
  case 0:
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
    return;
  case 1:
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x10) = 2;
    return;
  case 2:
    *(undefined4 *)(param_1 + 0x14) = 1;
    *(undefined4 *)(param_1 + 0x10) = 0;
    return;
  case 3:
    *(undefined4 *)(param_1 + 0x14) = 1;
    *(undefined4 *)(param_1 + 0x10) = 2;
  }
  return;
}



// ==== FUN_080191d4 @ 080191d4 ====

void FUN_080191d4(int param_1,undefined4 param_2)

{
  switch(param_2) {
  case 0:
    *(undefined4 *)(param_1 + 4) = 0x104;
    *(undefined4 *)(param_1 + 8) = 0;
    return;
  case 1:
    *(undefined4 *)(param_1 + 4) = 0x104;
    *(undefined4 *)(param_1 + 8) = 0x8000;
    return;
  case 2:
    *(undefined4 *)(param_1 + 4) = 0x104;
    *(undefined4 *)(param_1 + 8) = 0x400;
    return;
  case 3:
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    return;
  case 4:
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0x8000;
    return;
  case 5:
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0x400;
  }
  return;
}



// ==== FUN_0801922a @ 0801922a ====

void FUN_0801922a(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x1c) = param_2;
  return;
}



// ==== FUN_0801922e @ 0801922e ====

void FUN_0801922e(int param_1,int param_2)

{
  if (param_2 == 1) {
    *(undefined4 *)(param_1 + 0xc) = 0x800;
    return;
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}



// ==== FUN_08019240 @ 08019240 ====

void FUN_08019240(int param_1,int param_2)

{
  if (param_2 == 1) {
    *(undefined4 *)(param_1 + 0x20) = 0x80;
    return;
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  return;
}



// ==== FUN_08019250 @ 08019250 ====

void FUN_08019250(int param_1,int param_2)

{
  if (param_2 == 1) {
    *(undefined4 *)(param_1 + 0x24) = 0x10;
    return;
  }
  *(undefined4 *)(param_1 + 0x24) = 0;
  return;
}



// ==== FUN_08019260 @ 08019260 ====

void FUN_08019260(int param_1)

{
  *(undefined4 *)(param_1 + 0x18) = 0x200;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 7;
  return;
}



// ==== FUN_0801927c @ 0801927c ====

undefined8 FUN_0801927c(undefined4 param_1,undefined4 param_2)

{
  byte local_c [4];
  undefined4 uStack_8;
  
  local_c[0] = 0;
  uStack_8 = param_2;
  FUN_0800d782(param_1,&uStack_8,local_c,1);
  return CONCAT44(1000,(uint)local_c[0]);
}



// ==== FUN_0801929c @ 0801929c ====

void FUN_0801929c(undefined4 *param_1,undefined1 *param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_08019118(param_1,*param_2,param_3,param_4,param_4);
  FUN_0801922a(param_1,*(undefined4 *)(param_2 + 4));
  FUN_080191a0(param_1,param_2[8]);
  FUN_080191d4(param_1,param_2[0xb]);
  FUN_0801922e(param_1,param_2[9]);
  FUN_08019240(param_1,param_2[10]);
  FUN_08019250(param_1,param_2[0xc]);
  FUN_08019260(param_1);
  FUN_0800d700(param_1);
  *(uint *)*param_1 = *(uint *)*param_1 | 0x40;
  return;
}



// ==== FUN_080192f8 @ 080192f8 ====

void FUN_080192f8(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x080192fa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x60))();
  return;
}



// ==== FUN_08019310 @ 08019310 ====

void FUN_08019310(void)

{
  do {
    software_bkpt(0xab);
  } while( true );
}



// ==== FUN_08019324 @ 08019324 ====

void FUN_08019324(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_08016e84();
                    /* WARNING: Could not recover jumptable at 0x08019336. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar1 + 0x10))(param_1);
  return;
}



// ==== FUN_08019338 @ 08019338 ====

void FUN_08019338(int param_1,int param_2,int param_3,int param_4)

{
  if ((param_1 == param_3) && (param_2 == param_4)) {
    return;
  }
  return;
}



// ==== FUN_08019ac4 @ 08019ac4 ====

undefined8 FUN_08019ac4(undefined4 param_1)

{
  undefined4 local_8;
  
  local_8 = param_1;
  FUN_08017266(DAT_08019ad8,&local_8,1,1000);
  return CONCAT44(local_8,local_8);
}



// ==== FUN_08019adc @ 08019adc ====

int FUN_08019adc(int param_1,undefined1 *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (param_2 == (undefined1 *)0x0) {
    return 0;
  }
  if ((param_1 == 1) || (param_1 == 2)) {
    while( true ) {
      if (param_3 == 0) {
        return iVar2;
      }
      iVar1 = FUN_08019ac4(*param_2);
      if (iVar1 < 0) break;
      iVar2 = iVar2 + 1;
      param_3 = param_3 + -1;
      param_2 = param_2 + 1;
    }
  }
  return -1;
}



// ==== FUN_08019b60 @ 08019b60 ====

void FUN_08019b60(void)

{
  *DAT_08019b74 = *DAT_08019b74 | 0xf00000;
  *DAT_08019b78 = 0x8000000;
  return;
}



// ==== FUN_08019bd8 @ 08019bd8 ====

ulonglong FUN_08019bd8(undefined4 param_1)

{
  int iVar1;
  undefined4 unaff_r7;
  undefined4 uVar2;
  
  if ((int)&DAT_08019c10 + DAT_08019c10 != (int)&DAT_08019c14 + DAT_08019c14) {
    return CONCAT44(unaff_r7,param_1);
  }
  uVar2 = CONCAT31((int3)((uint)unaff_r7 >> 8),(char)param_1);
  iVar1 = FUN_08019adc(1,&stack0xfffffff8,1);
  if (iVar1 == 1) {
    return CONCAT44(uVar2,param_1) & 0xffffffff000000ff;
  }
  return CONCAT44(uVar2,0xffffffff);
}



// ==== FUN_08019c60 @ 08019c60 ====

void FUN_08019c60(uint *param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int unaff_r9;
  
  while( true ) {
    puVar1 = param_1 + 1;
    uVar3 = *param_1;
    if (uVar3 == 0) break;
    param_1 = param_1 + 2;
    puVar4 = (undefined4 *)*puVar1;
    if ((int)puVar4 << 0x1f < 0) {
      puVar4 = (undefined4 *)((int)puVar4 + unaff_r9 + -1);
    }
    do {
      puVar5 = puVar4;
      uVar2 = uVar3;
      puVar4 = puVar5 + 1;
      *puVar5 = 0;
      uVar3 = uVar2 - 4;
    } while (3 < uVar2 - 4);
    if ((int)(uVar2 * 0x40000000) < 0) {
      *(undefined2 *)puVar4 = 0;
      puVar4 = (undefined4 *)((int)puVar5 + 6);
    }
    if ((int)(uVar2 * -0x80000000) < 0) {
      *(undefined1 *)puVar4 = 0;
    }
  }
  return;
}



// ==== FUN_08019c98 @ 08019c98 ====

void FUN_08019c98(void)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = (int *)((int)&DAT_08019cbc + DAT_08019cbc);
  for (piVar1 = (int *)((int)&DAT_08019cb8 + DAT_08019cb8); piVar1 != piVar2;
      piVar1 = (int *)(*(code *)((int)piVar1 + *piVar1))(piVar1 + 1)) {
  }
  return;
}



// ==== FUN_08019cc0 @ 08019cc0 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_08019cc0(void)

{
  _DAT_e000ed88 = _DAT_e000ed88 | 0xf00000;
  DataSynchronizationBarrier(0xf);
  InstructionSynchronizationBarrier(0xf);
  return 0x2040000;
}



// ==== FUN_08019d04 @ 08019d04 ====

undefined4 FUN_08019d04(void)

{
  int iVar1;
  
  iVar1 = FUN_08019d22();
  if (iVar1 != 0) {
    FUN_08019c98();
  }
  FUN_08012c58(0);
  thunk_FUN_08019d2c();
  return 1;
}



// ==== FUN_08019d22 @ 08019d22 ====

undefined4 FUN_08019d22(void)

{
  return 1;
}



// ==== thunk_FUN_08019d2c @ 08019d26 ====

void thunk_FUN_08019d2c(undefined4 param_1)

{
  do {
    FUN_08019310(param_1);
  } while( true );
}



// ==== FUN_08019d2c @ 08019d2c ====

void FUN_08019d2c(undefined4 param_1)

{
  do {
    FUN_08019310(param_1);
  } while( true );
}



