#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	float fLocal_14 = 0f;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	int iLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	int iLocal_20 = 0;
	char* sLocal_21 = NULL;
	float fLocal_22 = 0f;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
	struct<62> Local_37 = { 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	int iLocal_45 = 0;
	var uLocal_46 = 16;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	var uLocal_175 = 0;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	var uLocal_178 = 0;
	var uLocal_179 = 0;
	var uLocal_180 = 0;
	var uLocal_181 = 0;
	var uLocal_182 = 0;
	var uLocal_183 = 0;
	var uLocal_184 = 0;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	var uLocal_195 = 0;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	var uLocal_203 = 0;
	var uLocal_204 = 0;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	int iLocal_211 = 0;
	int iLocal_212 = 0;
	char[] cLocal_213[8] = 0;
	var uLocal_214 = 0;
	int iLocal_215 = 0;
	int iLocal_216 = 0;
	int iLocal_217 = 0;
	int iLocal_218 = 0;
	int iLocal_219 = 0;
	var uLocal_220[2] = { 0, 0 };
	var uLocal_221[6] = { 0, 0, 0, 0, 0, 0 };
	var uLocal_222[6] = { 0, 0, 0, 0, 0, 0 };
	var uLocal_223[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_224 = 0;
	int iLocal_225 = 0;
	int iLocal_226 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	iLocal_2 = 1;
	iLocal_3 = 134;
	iLocal_4 = 134;
	iLocal_5 = 1;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 134;
	iLocal_9 = 1;
	iLocal_10 = 12;
	iLocal_11 = 12;
	fLocal_14 = 0,001f;
	iLocal_17 = -1;
	iLocal_20 = 3;
	sLocal_21 = "NULL";
	fLocal_22 = 0f;
	fLocal_26 = -0,0375f;
	fLocal_27 = 0,17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_211 = -1;
	iLocal_212 = -1;
	StringCopy(&cLocal_213, "PMGAUD", 8);
	iLocal_215 = -1;
	iLocal_216 = -1;
	unk_0xBC03901A15107317(1);
	if (unk_0x7D9C4B359376D38A(3))
	{
		func_56(2);
		func_55();
	}
	func_48();
	while (true)
	{
		system::wait(0);
		if (func_47())
		{
			iLocal_212 = -1;
		}
		else if (iLocal_212 == -1)
		{
			iLocal_212 = unk_0x53C562FD2B9E3AB0();
		}
		func_1();
	}
}

void func_1()//Position - 0xBF
{
	struct<2> Var0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	
	switch (iLocal_36)
	{
		case 0:
			unk_0xBCBC53983EC3B1BA("PGANG", 0);
			if (unk_0x9F0887BCBFCF3C2F(0))
			{
				iVar1 = 0;
				while (iVar1 <= 5)
				{
					if (unk_0x6ADD12BF4D6D2587(Global_103265.f_225[iVar1]))
					{
						uLocal_221[iVar1] = Global_103265.f_225[iVar1];
						Global_103265.f_225[iVar1] = 0;
						unk_0xDD29FF4BAB8AFF9C(uLocal_221[iVar1], true, 1);
						if (iLocal_226 == 0)
						{
							iLocal_226 = unk_0x82FF3DFBC3965CC0(uLocal_221[iVar1]);
						}
						if (!unk_0x3AB6A1A9084FB0A4(uLocal_221[iVar1]))
						{
							unk_0xCE93FCB8A8D8DF0B(uLocal_221[iVar1], iLocal_224);
							unk_0x4F9A62E773100FDC(uLocal_221[iVar1], 1);
							unk_0xD1D0B4122585CC63(uLocal_221[iVar1], 0);
							unk_0xBB3CC641B6AED5E5(uLocal_221[iVar1], 5);
							unk_0x3811A0FC01E02FC1(uLocal_221[iVar1], 1);
							func_46(uLocal_221[iVar1], 20f, 5f, 90f, -80f, 80f);
							if (iLocal_45 == 0)
							{
								unk_0x4F9A62E773100FDC(uLocal_221[iVar1], 2);
							}
							uLocal_223[iVar1] = func_43(uLocal_221[iVar1], 1, 145);
						}
					}
					iVar1++;
				}
				iVar1 = 0;
				while (iVar1 <= 1)
				{
					if (unk_0x6ADD12BF4D6D2587(Global_103265.f_222[iVar1]))
					{
						uLocal_220[iVar1] = Global_103265.f_222[iVar1];
						Global_103265.f_222[iVar1] = 0;
						unk_0xDD29FF4BAB8AFF9C(uLocal_220[iVar1], true, 1);
						if (iLocal_225 == 0)
						{
							iLocal_225 = unk_0x82FF3DFBC3965CC0(uLocal_220[iVar1]);
						}
					}
					iVar1++;
				}
				StringCopy(&Var0, "START_", 16);
				StringConCat(&Var0, &(Local_37.f_61), 16);
				func_42(&Var0, 7500, 1);
				iLocal_36++;
			}
			break;
		
		case 1:
			bVar3 = true;
			iVar1 = 0;
			while (iVar1 <= 5)
			{
				if (!bVar2)
				{
					if (uLocal_222[iVar1] > 0)
					{
						bVar2 = true;
					}
				}
				if (unk_0x6ADD12BF4D6D2587(uLocal_221[iVar1]) && !unk_0x3AB6A1A9084FB0A4(uLocal_221[iVar1]))
				{
					bVar3 = false;
				}
				iVar1++;
			}
			if (bVar2)
			{
				unk_0x7D1BE399F484E23E(unk_0x9EB17624F44A8DA4());
			}
			if (bVar3)
			{
				if (unk_0xC308146F18B10A6F(unk_0x9EB17624F44A8DA4(), 0))
				{
					if (!iLocal_217)
					{
						func_42("LOSE_WANTED", 7500, 1);
						iLocal_217 = 1;
					}
				}
				else
				{
					func_41();
				}
			}
			break;
	}
	switch (iLocal_45)
	{
		case 1:
			func_39();
			break;
		
		case 0:
			func_9();
			break;
	}
	iVar1 = 0;
	while (iVar1 <= 5)
	{
		if (unk_0x6ADD12BF4D6D2587(uLocal_221[iVar1]))
		{
			if (unk_0x3AB6A1A9084FB0A4(uLocal_221[iVar1]))
			{
				unk_0x486F346ADFE56674(&(uLocal_221[iVar1]));
			}
			else if (func_6(uLocal_221[iVar1], func_7(func_8()), 1) > 100f && func_5(unk_0xFC1458A37D98B502(), uLocal_221[iVar1], 1) > 300f)
			{
				func_4();
			}
			else if (iLocal_219 && func_6(uLocal_221[iVar1], func_7(func_8()), 1) > 50f)
			{
				if (func_2())
				{
					if (!iLocal_218)
					{
						StringCopy(&Var0, "ESC_", 16);
						StringConCat(&Var0, &(Local_37.f_61), 16);
						func_42(&Var0, 7500, 1);
						iLocal_218 = 1;
					}
				}
			}
		}
		if (unk_0xA6DECE14FC9A8C51(uLocal_223[iVar1]))
		{
			if (!unk_0x6ADD12BF4D6D2587(uLocal_221[iVar1]) || unk_0x3AB6A1A9084FB0A4(uLocal_221[iVar1]))
			{
				unk_0xE30CF11C0EE14316(&(uLocal_223[iVar1]));
			}
		}
		iVar1++;
	}
}

int func_2()//Position - 0x410
{
	if (unk_0x23F2F89E3D1CB7C4())
	{
		return 0;
	}
	if (unk_0x248C9865A96D3EA4())
	{
		if (func_47() && !func_3())
		{
			return 0;
		}
	}
	return 1;
}

int func_3()//Position - 0x440
{
	if (Global_16767 == 1)
	{
		return 1;
	}
	return 0;
}

void func_4()//Position - 0x457
{
	func_56(2);
	func_55();
}

float func_5(int iParam0, int iParam1, bool bParam2)//Position - 0x468
{
	vector3 vVar0;
	vector3 vVar1;
	
	if (!unk_0x191BE1BC8F26F3C1(iParam0, 0))
	{
		vVar0 = { unk_0xB3328BA8976B416C(iParam0, 1) };
	}
	else
	{
		vVar0 = { unk_0xB3328BA8976B416C(iParam0, 0) };
	}
	if (!unk_0x191BE1BC8F26F3C1(iParam1, 0))
	{
		vVar1 = { unk_0xB3328BA8976B416C(iParam1, 1) };
	}
	else
	{
		vVar1 = { unk_0xB3328BA8976B416C(iParam1, 0) };
	}
	return unk_0xBE3C4023003180FC(vVar0, vVar1, bParam2);
}

float func_6(int iParam0, vector3 vParam1, bool bParam2)//Position - 0x4C6
{
	vector3 vVar0;
	
	if (!unk_0x191BE1BC8F26F3C1(iParam0, 0))
	{
		vVar0 = { unk_0xB3328BA8976B416C(iParam0, 1) };
	}
	else
	{
		vVar0 = { unk_0xB3328BA8976B416C(iParam0, 0) };
	}
	return unk_0xBE3C4023003180FC(vVar0, vParam1, bParam2);
}

Vector3 func_7(int iParam0)//Position - 0x500
{
	switch (iParam0)
	{
		case 2:
			return 2147,317f, 4795,208f, 40,08961f;
			break;
		
		case 9:
			return 1524,329f, -2108,269f, 75,7248f;
			break;
		
		case 10:
			return -1172,195f, -1577,427f, 3,38152f;
			break;
		
		case 1:
			return 898,3718f, -177,0764f, 72,68348f;
			break;
		
		case 4:
			return 1191,302f, 2672,064f, 36,73154f;
			break;
		
		case 3:
			return -1584,333f, 5193,487f, 2,95912f;
			break;
		
		case 0:
			return 408,3429f, -1623,836f, 28,29278f;
			break;
		
		case 8:
			return -1339,489f, -21,19435f, 50,34566f;
			break;
		
		case 5:
			return 336,207f, 172,4251f, 102,2055f;
			break;
		
		case 6:
			return 394,5495f, -703,3795f, 28,27281f;
			break;
		
		case 7:
			return -1413,184f, -206,0555f, 46,29474f;
			break;
		
		case 11:
			return -560,3809f, 274,5476f, 82,02014f;
			break;
		
		case 12:
			return 221,0845f, 340,7849f, 104,5883f;
			break;
		
		case 13:
			return -296,7154f, 6259,732f, 30,49339f;
			break;
		
		case 14:
			return -2201,402f, 4291f, 47,32429f;
			break;
	}
	return 10f, 10f, 10f;
}

int func_8()//Position - 0x6B3
{
	return Global_103265.f_20;
}

void func_9()//Position - 0x6C1
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	char cVar5[16];
	
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (unk_0x6ADD12BF4D6D2587(uLocal_221[iVar0]) && !unk_0x3AB6A1A9084FB0A4(uLocal_221[iVar0]))
		{
			switch (uLocal_222[iVar0])
			{
				case 0:
					if (func_37(iVar0))
					{
						iLocal_211 = 0;
						uLocal_222[iVar0]++;
					}
					break;
				
				case 1:
					iVar2 = 0;
					iVar1 = 0;
					while (iVar1 <= 5)
					{
						if (unk_0x6ADD12BF4D6D2587(uLocal_221[iVar1]) && !unk_0x3AB6A1A9084FB0A4(uLocal_221[iVar1]))
						{
							iVar2++;
						}
						iVar1++;
					}
					if (iVar2 <= 2)
					{
						uLocal_222[iVar0]++;
					}
					break;
				
				case 2:
					break;
			}
			if (uLocal_222[iVar0] > 0)
			{
				iVar3 = 0;
				unk_0x5AD8564EFD5BEC2E(uLocal_221[iVar0], &iVar3, 1);
				if (iVar3 == joaat("weapon_molotov"))
				{
					if (unk_0xA8388473C755363D(uLocal_221[iVar0], joaat("weapon_microsmg"), 0))
					{
						unk_0x385A213BEB355C2B(uLocal_221[iVar0], joaat("weapon_microsmg"), true);
					}
					else
					{
						unk_0x9E058151726E58DE(uLocal_221[iVar0], joaat("weapon_microsmg"), -1, true, true);
					}
				}
			}
			switch (uLocal_222[iVar0])
			{
				case 0:
					func_33(uLocal_221[iVar0], Local_37[iVar0 /*10*/].f_4);
					break;
				
				case 1:
					if (!func_32(uLocal_221[iVar0], 780511057, 1))
					{
						unk_0xD7F5B2902EBBD04E(uLocal_221[iVar0], unk_0xFC1458A37D98B502(), 0, 16);
					}
					break;
				
				case 2:
					if (!func_32(uLocal_221[iVar0], 1805844857, 1))
					{
						unk_0xD68E88A8E0BE8697(uLocal_221[iVar0], unk_0xFC1458A37D98B502(), 1000f, -1, 1, 0);
					}
					break;
				}
		}
		iVar0++;
	}
	switch (iLocal_211)
	{
		case 0:
			if (func_31())
			{
				iVar4 = func_30();
				if (iVar4 != -1 && !unk_0x33B1D0D0C92D4F18(uLocal_221[iVar4]))
				{
					func_28(uLocal_221[iVar4], "SUSPECT_SPOTTED", 10);
					StringCopy(&cVar5, "", 16);
					iLocal_211++;
				}
			}
			break;
		
		case 1:
			if (func_31())
			{
				cVar5 = { func_27("START") };
				if (func_10(&uLocal_46, &cLocal_213, &cVar5, 8, 0, 0, 0))
				{
					StringCopy(&cVar5, "", 16);
					iLocal_211++;
				}
			}
			break;
		
		case 2:
			if (func_31())
			{
				iVar4 = func_30();
				if (iVar4 != -1 && !unk_0x33B1D0D0C92D4F18(uLocal_221[iVar4]))
				{
					func_28(uLocal_221[iVar4], "SHOUT_THREATEN", 10);
					StringCopy(&cVar5, "", 16);
					iLocal_211++;
				}
			}
			break;
		
		case 3:
			if ((func_31() && (unk_0x53C562FD2B9E3AB0() - iLocal_212) > 3000) && !unk_0x33B1D0D0C92D4F18(unk_0xFC1458A37D98B502()))
			{
				func_28(unk_0xFC1458A37D98B502(), "BLIND_RAGE", 10);
				iLocal_211++;
			}
			break;
		
		case 4:
			if (func_31() && (unk_0x53C562FD2B9E3AB0() - iLocal_212) > 1000)
			{
				iVar4 = func_30();
				if (iVar4 != -1 && !unk_0x33B1D0D0C92D4F18(uLocal_221[iVar4]))
				{
					if (uLocal_222[iVar4] == 2)
					{
						func_28(uLocal_221[iVar4], "GENERIC_INSULT", 10);
						StringCopy(&cVar5, "", 16);
						iLocal_211 = (iLocal_211 - 1);
					}
					else
					{
						func_28(uLocal_221[iVar4], "SHOUT_THREATEN", 10);
						StringCopy(&cVar5, "", 16);
						iLocal_211 = (iLocal_211 - 1);
					}
				}
			}
			break;
	}
}

bool func_10(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0xA2D
{
	func_26(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_15763 = 0;
	Global_15765 = 0;
	Global_15770 = 0;
	Global_16747 = 0;
	Global_16749 = 0;
	Global_16753 = 0;
	Global_2621441 = 0;
	return func_11(sParam2, iParam3, 0);
}

int func_11(char* sParam0, int iParam1, bool bParam2)//Position - 0xA7B
{
	Global_15757 = 0;
	if (Global_15756 == 0 || Global_15758 == 2)
	{
		if (Global_15756 != 0)
		{
			if (iParam1 > Global_15758)
			{
				if (Global_15763 == 0)
				{
					unk_0xB31CEFB00C146C91(false);
					Global_14453.f_1 = 3;
					Global_15756 = 0;
					Global_15757 = 1;
					Global_15809 = 0;
					Global_15752 = 0;
					Global_15753 = 0;
					Global_15767 = 0;
					Global_15766 = 0;
					Global_14452 = 0;
				}
				else
				{
					func_25();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x42111BD51D233AAB())
		{
			return 0;
		}
		if (func_24(8, -1))
		{
			return 0;
		}
		Global_15832 = { Global_15826 };
		func_23();
		Global_15045 = { Global_15210 };
		Global_15762 = Global_15763;
		Global_15769 = Global_15770;
		Global_2621442 = Global_2621441;
		Global_15771 = { Global_15787 };
		Global_15764 = Global_15765;
		Global_16746 = Global_16747;
		Global_16754 = { Global_16760 };
		Global_16748 = Global_16749;
		Global_16750 = Global_16751;
		Global_16752 = Global_16753;
		Global_15375.f_370 = Global_16745;
		Global_15375.f_368 = Global_16743;
		Global_15375.f_369 = Global_16744;
		Global_15752 = Global_15753;
		if (Global_15762)
		{
			unk_0x0EE72DB1CD8A3B86(&Global_2323, 20);
			unk_0x0EE72DB1CD8A3B86(&Global_2324, 17);
			unk_0x0EE72DB1CD8A3B86(&Global_2325, 0);
			if (bParam2)
			{
				func_16();
				if (Global_3128[Global_14453 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_14453.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_14419 == 1)
			{
				return 0;
			}
			if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
			{
				if (unk_0x596A22C5FEBABAC1(unk_0xFC1458A37D98B502()))
				{
					return 0;
				}
				if (func_15())
				{
					return 0;
				}
				if (unk_0xCA87B182A4F3C252(unk_0xFC1458A37D98B502()))
				{
					return 0;
				}
				if (unk_0x9F887157983E8EFC(unk_0xFC1458A37D98B502()))
				{
					return 0;
				}
				if (unk_0xA9287933382DAD33(unk_0xFC1458A37D98B502()))
				{
					return 0;
				}
				if (unk_0x63D4520BD966ECD5(unk_0xFC1458A37D98B502(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_70856)
				{
					if (unk_0x0BA31FF7931F3DD3(unk_0xFC1458A37D98B502()))
					{
						return 0;
					}
					if (unk_0x5EDC8E26D8E9BD2A(unk_0x9EB17624F44A8DA4()))
					{
						return 0;
					}
					if (unk_0x0A1D4A2F0A088C25(unk_0xFC1458A37D98B502()))
					{
						return 0;
					}
					if (unk_0x8E1DC2E7000CD6A1(unk_0x9EB17624F44A8DA4()))
					{
						return 0;
					}
				}
			}
			if (func_14())
			{
				return 0;
			}
			else
			{
				switch (Global_14453.f_1)
				{
					case 7:
						return 0;
						break;
					
					case 8:
						return 0;
						break;
					
					case 9:
						break;
					
					case 10:
						break;
					
					default:
						break;
				}
				if (unk_0xC80D31E4B587871C(Global_2323, 9))
				{
					return 0;
				}
			}
			func_13();
			Global_15766 = bParam2;
		}
		Global_15758 = iParam1;
		StringCopy(&Global_15375, sParam0, 24);
		Global_14622 = 0;
		func_12();
		return 1;
	}
	if (Global_15756 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_15758 || iParam1 == Global_15758)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_25();
	}
	return 0;
}

void func_12()//Position - 0xD47
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14624[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0xB31CEFB00C146C91(false);
	Global_15756 = 1;
}

void func_13()//Position - 0xD78
{
	Global_15809 = Global_15808;
	Global_15803 = Global_15804;
	Global_15850 = { Global_15838 };
	Global_15856 = { Global_15844 };
	Global_15811 = Global_15810;
	Global_15880 = { Global_15862 };
	Global_15886 = { Global_15868 };
	Global_15892 = { Global_15874 };
	Global_15898 = { Global_15904 };
	Global_1638 = Global_1639;
	Global_1640 = Global_1641;
	Global_15767 = Global_15768;
	Global_15769 = Global_15770;
	Global_15771 = { Global_15787 };
	Global_15760 = Global_15761;
	Global_16772 = 0;
	Global_15805 = 0;
	Global_15806 = 0;
	unk_0x0EE72DB1CD8A3B86(&Global_2324, 16);
}

int func_14()//Position - 0xE0D
{
	if (Global_14453.f_1 == 1 || Global_14453.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_15()//Position - 0xE34
{
	int iVar0;
	int iVar1;
	
	if (Global_70856)
	{
		iVar0 = 0;
		unk_0x5AD8564EFD5BEC2E(unk_0xFC1458A37D98B502(), &iVar1, 1);
		if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x689303135DD1F2F5() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
	{
		if (unk_0xBAEC0BAAC7E135C7(unk_0xFC1458A37D98B502(), 78, 1))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_16()//Position - 0xECD
{
	if (func_22(14))
	{
		if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
		{
			if (unk_0x82FF3DFBC3965CC0(unk_0xFC1458A37D98B502()) == Global_104555.f_28020[0 /*29*/])
			{
				Global_14453 = 0;
			}
			else if (unk_0x82FF3DFBC3965CC0(unk_0xFC1458A37D98B502()) == Global_104555.f_28020[1 /*29*/])
			{
				Global_14453 = 1;
			}
			else if (unk_0x82FF3DFBC3965CC0(unk_0xFC1458A37D98B502()) == Global_104555.f_28020[2 /*29*/])
			{
				Global_14453 = 2;
			}
			else
			{
				Global_14453 = 0;
			}
		}
	}
	else
	{
		Global_14453 = func_17();
		if (Global_14453 == 145)
		{
			Global_14453 = 3;
		}
		if (Global_70856)
		{
			Global_14453 = 3;
		}
		if (Global_14453 > 3)
		{
			Global_14453 = 3;
		}
	}
}

int func_17()//Position - 0xF6F
{
	func_18();
	return Global_104555.f_2353.f_539.f_4301;
}

void func_18()//Position - 0xF88
{
	int iVar0;
	
	if (unk_0x6ADD12BF4D6D2587(unk_0xFC1458A37D98B502()))
	{
		if (func_21(Global_104555.f_2353.f_539.f_4301) != unk_0x82FF3DFBC3965CC0(unk_0xFC1458A37D98B502()))
		{
			iVar0 = func_20(unk_0xFC1458A37D98B502());
			if (func_19(iVar0) && (!func_22(14) || Global_103506))
			{
				if (Global_104555.f_2353.f_539.f_4301 != iVar0 && func_19(Global_104555.f_2353.f_539.f_4301))
				{
					Global_104555.f_2353.f_539.f_4302 = Global_104555.f_2353.f_539.f_4301;
				}
				Global_104555.f_2353.f_539.f_4303 = iVar0;
				Global_104555.f_2353.f_539.f_4301 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_104555.f_2353.f_539.f_4301 != 145)
			{
				Global_104555.f_2353.f_539.f_4303 = Global_104555.f_2353.f_539.f_4301;
			}
			return;
		}
	}
	Global_104555.f_2353.f_539.f_4301 = 145;
}

bool func_19(int iParam0)//Position - 0x1085
{
	return iParam0 < 3;
}

int func_20(int iParam0)//Position - 0x1091
{
	int iVar0;
	int iVar1;
	
	if (unk_0x6ADD12BF4D6D2587(iParam0))
	{
		iVar1 = unk_0x82FF3DFBC3965CC0(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_21(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_21(int iParam0)//Position - 0x10CE
{
	if (func_19(iParam0))
	{
		return Global_104555.f_28020[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_22(int iParam0)//Position - 0x10F8
{
	return Global_35861 == iParam0;
}

void func_23()//Position - 0x1106
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_15045[iVar0 /*10*/] = 0;
		StringCopy(&(Global_15045[iVar0 /*10*/].f_1), "", 24);
		Global_15045[iVar0 /*10*/].f_7 = 0;
		Global_15045[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_15045.f_161 = -99;
	Global_15045.f_162 = { 0f, 0f, 0f };
}

bool func_24(int iParam0, int iParam1)//Position - 0x115D
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1357530.f_203[iParam1];
			}
			break;
	}
	return unk_0xC80D31E4B587871C(Global_1357530.f_1048, iParam0);
}

void func_25()//Position - 0x1198
{
	unk_0x495EB1DD7306493A();
	Global_16767 = 0;
	if ((unk_0x0DBDCC9C5537E157() || Global_14453.f_1 == 9) || Global_14452 == 1)
	{
		unk_0xB31CEFB00C146C91(false);
		Global_15756 = 6;
		Global_14453.f_1 = 3;
		return;
	}
	if (unk_0x42111BD51D233AAB())
	{
		unk_0xB31CEFB00C146C91(true);
		Global_15756 = 6;
		return;
	}
}

void func_26(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)//Position - 0x11EF
{
	Global_15210 = { *uParam0 };
	Global_1639 = iParam1;
	StringCopy(&Global_15826, sParam2, 24);
	Global_16745 = uParam5;
	if (iParam3 == 0)
	{
		Global_16743 = 1;
		Global_16741 = 0;
	}
	else
	{
		Global_16743 = 0;
		Global_16741 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16744 = 1;
		Global_16742 = 0;
	}
	else
	{
		Global_16744 = 0;
		Global_16742 = 1;
	}
}

struct<4> func_27(char* sParam0)//Position - 0x1245
{
	struct<4> Var0;
	
	StringCopy(&Var0, sParam0, 16);
	switch (func_17())
	{
		case 0:
			StringConCat(&Var0, "_M", 16);
			break;
		
		case 1:
			StringConCat(&Var0, "_F", 16);
			break;
		
		case 2:
			StringConCat(&Var0, "_T", 16);
			break;
	}
	return Var0;
}

void func_28(int iParam0, char* sParam1, int iParam2)//Position - 0x1290
{
	unk_0x74D45BB07BD51F8B(iParam0, sParam1, func_29(iParam2), 1);
}

int func_29(int iParam0)//Position - 0x12A7
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			return "SPEECH_PARAMS_STANDARD";
		
		case 1:
			return "SPEECH_PARAMS_ALLOW_REPEAT";
		
		case 2:
			return "SPEECH_PARAMS_BEAT";
		
		case 3:
			return "SPEECH_PARAMS_FORCE";
		
		case 4:
			return "SPEECH_PARAMS_FORCE_FRONTEND";
		
		case 5:
			return "SPEECH_PARAMS_FORCE_NO_REPEAT_FRONTEND";
		
		case 6:
			return "SPEECH_PARAMS_FORCE_NORMAL";
		
		case 7:
			return "SPEECH_PARAMS_FORCE_NORMAL_CLEAR";
		
		case 8:
			return "SPEECH_PARAMS_FORCE_NORMAL_CRITICAL";
		
		case 9:
			return "SPEECH_PARAMS_FORCE_SHOUTED";
		
		case 10:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR";
		
		case 11:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL";
		
		case 12:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY";
		
		case 13:
			return "SPEECH_PARAMS_MEGAPHONE";
		
		case 14:
			return "SPEECH_PARAMS_HELI";
		
		case 15:
			return "SPEECH_PARAMS_FORCE_MEGAPHONE";
		
		case 16:
			return "SPEECH_PARAMS_FORCE_HELI";
		
		case 17:
			return "SPEECH_PARAMS_INTERRUPT";
		
		case 18:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED";
		
		case 19:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CLEAR";
		
		case 20:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CRITICAL";
		
		case 21:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE";
		
		case 22:
			return "SPEECH_PARAMS_INTERRUPT_FRONTEND";
		
		case 23:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE_FRONTEND";
		
		case 24:
			return "SPEECH_PARAMS_ADD_BLIP";
		
		case 25:
			return "SPEECH_PARAMS_ADD_BLIP_ALLOW_REPEAT";
		
		case 26:
			return "SPEECH_PARAMS_ADD_BLIP_FORCE";
		
		case 27:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED";
		
		case 28:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED_FORCE";
		
		case 29:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT";
		
		case 30:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT_FORCE";
		
		case 31:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED";
		
		case 32:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CLEAR";
		
		case 33:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CRITICAL";
		
		case 34:
			return "SPEECH_PARAMS_SHOUTED";
		
		case 35:
			return "SPEECH_PARAMS_SHOUTED_CLEAR";
		
		case 36:
			return "SPEECH_PARAMS_SHOUTED_CRITICAL";
		
		default:
	}
	iVar0 = 0;
	return iVar0;
}

int func_30()//Position - 0x1496
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	
	iVar0 = -1;
	fVar2 = 999999f;
	iVar1 = 0;
	while (iVar1 <= 5)
	{
		if (unk_0x6ADD12BF4D6D2587(uLocal_221[iVar1]) && !unk_0x3AB6A1A9084FB0A4(uLocal_221[iVar1]))
		{
			fVar3 = func_5(uLocal_221[iVar1], unk_0xFC1458A37D98B502(), 1);
			if (fVar3 < 30f && fVar3 < fVar2)
			{
				iVar0 = iVar1;
				fVar2 = fVar3;
			}
		}
		iVar1++;
	}
	return iVar0;
}

int func_31()//Position - 0x150A
{
	if (func_47())
	{
		return 0;
	}
	if (unk_0x248C9865A96D3EA4())
	{
		if (unk_0x23F2F89E3D1CB7C4())
		{
			return 0;
		}
	}
	return 1;
}

int func_32(int iParam0, int iParam1, bool bParam2)//Position - 0x1530
{
	int iVar0;
	
	iVar0 = unk_0x78F50AA8F955BEFC(iParam0, iParam1);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return 1;
	}
	else if (!bParam2)
	{
		if (iVar0 == 2 || iVar0 == 3)
		{
			return 1;
		}
	}
	return 0;
}

void func_33(int iParam0, vector3 vParam1)//Position - 0x1576
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	unk_0x5AD8564EFD5BEC2E(iParam0, &iVar0, 1);
	if (!func_36(vParam1))
	{
		unk_0x5AD8564EFD5BEC2E(iParam0, &iVar1, 1);
		if (iVar0 == joaat("weapon_molotov"))
		{
			if (iVar1 != joaat("weapon_molotov"))
			{
				unk_0x385A213BEB355C2B(iParam0, joaat("weapon_molotov"), true);
			}
			if (unk_0x78F50AA8F955BEFC(iParam0, 242628503) != 1 && unk_0x78F50AA8F955BEFC(iParam0, 242628503) != 0)
			{
				unk_0x6931076730A4AC5D(&iVar2);
				unk_0x270054D97CD161A8(0, unk_0x63A6486593EC7EC3(1000, 6000));
				unk_0xF9C00E6FE467972A(0, func_34(vParam1, 1f), 0, 0);
				unk_0x270054D97CD161A8(0, unk_0x63A6486593EC7EC3(1000, 6000));
				unk_0xF9C00E6FE467972A(0, func_34(vParam1, 1f), 0, 0);
				unk_0x270054D97CD161A8(0, unk_0x63A6486593EC7EC3(1000, 6000));
				unk_0xF9C00E6FE467972A(0, func_34(vParam1, 1f), 0, 0);
				unk_0x270054D97CD161A8(0, unk_0x63A6486593EC7EC3(1000, 6000));
				unk_0xF9C00E6FE467972A(0, func_34(vParam1, 1f), 0, 0);
				unk_0x270054D97CD161A8(0, unk_0x63A6486593EC7EC3(1000, 6000));
				unk_0xF9C00E6FE467972A(0, func_34(vParam1, 1f), 0, 0);
				unk_0x270054D97CD161A8(0, unk_0x63A6486593EC7EC3(1000, 6000));
				unk_0xF9C00E6FE467972A(0, func_34(vParam1, 1f), 0, 0);
				unk_0x270054D97CD161A8(0, unk_0x63A6486593EC7EC3(1000, 6000));
				unk_0xF9C00E6FE467972A(0, func_34(vParam1, 1f), 0, 0);
				unk_0x270054D97CD161A8(0, unk_0x63A6486593EC7EC3(1000, 6000));
				unk_0xF9C00E6FE467972A(0, func_34(vParam1, 1f), 0, 0);
				unk_0xDFD7CAAA70F1F7D2(iVar2, 1);
				unk_0x1B16DD5C115FE009(iVar2);
				unk_0xAB30B1CF01A198C1(iParam0, iVar2);
				unk_0xFAA3EF7FF92E1F9E(&iVar2);
			}
		}
		else if (unk_0x78F50AA8F955BEFC(iParam0, -653332088) != 1 && unk_0x78F50AA8F955BEFC(iParam0, -653332088) != 0)
		{
			unk_0x517BE2428CAF5092(iParam0, vParam1, -1, -687903391);
		}
	}
	else if (unk_0x78F50AA8F955BEFC(iParam0, -982327190) != 1 && unk_0x78F50AA8F955BEFC(iParam0, -982327190) != 0)
	{
		unk_0x270054D97CD161A8(iParam0, -1);
	}
}

Vector3 func_34(vector3 vParam0, float fParam1)//Position - 0x175A
{
	vector3 vVar0;
	
	vVar0 = { unk_0x5B811202FCBE9E9D(-1f, 1f), unk_0x5B811202FCBE9E9D(-1f, 1f), unk_0x5B811202FCBE9E9D(-1f, 1f) };
	return vParam0 + func_35(vVar0, unk_0x5B811202FCBE9E9D(0f, fParam1));
}

Vector3 func_35(vector3 vParam0, float fParam1)//Position - 0x178C
{
	float fVar0;
	
	if (fParam1 == 0f)
	{
		return 0f, 0f, 0f;
	}
	fVar0 = system::vmag(vParam0);
	if (fVar0 != 0f)
	{
		return vParam0 * FtoV((fParam1 / fVar0));
	}
	return 0f, 0f, 0f;
}

int func_36(vector3 vParam0)//Position - 0x17C3
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

int func_37(int iParam0)//Position - 0x17ED
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if ((unk_0x6ADD12BF4D6D2587(uLocal_221[iVar0]) && !unk_0x3AB6A1A9084FB0A4(uLocal_221[iVar0])) && uLocal_222[iVar0] > 0)
		{
			iLocal_219 = 1;
		}
		iVar0++;
	}
	if (((((((((((func_38(Global_103265.f_35, 134217728) || unk_0x46D8E79A1B95ACE2(uLocal_221[iParam0], unk_0xFC1458A37D98B502())) || unk_0x619798B7505A54CD(unk_0x9EB17624F44A8DA4(), uLocal_221[iParam0])) || unk_0x9479D23F28CA059C(uLocal_221[iParam0])) || unk_0x5679106BC7ED79EE(unk_0xB3328BA8976B416C(uLocal_221[iParam0], 1), 15f, 1)) || unk_0x4FB2BF5239979F9A(unk_0xB3328BA8976B416C(uLocal_221[iParam0], 1), 15f, 1, 1)) || unk_0x4E69510C44147A5C(21, unk_0xB3328BA8976B416C(uLocal_221[iParam0], 1), 15f)) || unk_0x4E69510C44147A5C(10, unk_0xB3328BA8976B416C(uLocal_221[iParam0], 1), 15f)) || unk_0x4E69510C44147A5C(7, unk_0xB3328BA8976B416C(uLocal_221[iParam0], 1), 15f)) || unk_0x4E69510C44147A5C(0, unk_0xB3328BA8976B416C(uLocal_221[iParam0], 1), 15f)) || unk_0x4E69510C44147A5C(1, unk_0xB3328BA8976B416C(uLocal_221[iParam0], 1), 15f)) || iLocal_219)
	{
		return 1;
	}
	return 0;
}

bool func_38(var uParam0, int iParam1)//Position - 0x195A
{
	return (uParam0 && iParam1) != 0;
}

void func_39()//Position - 0x1969
{
	int iVar0;
	var uVar1[2];
	int iVar2;
	vector3 vVar3[24];
	int iVar4;
	bool bVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	bool bVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	char cVar13[16];
	
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (unk_0x6ADD12BF4D6D2587(uLocal_220[iVar0]) && unk_0xB8DE76287EDC4957(uLocal_220[iVar0], 0))
		{
			iVar2 = 0;
			while (iVar2 <= 5)
			{
				if (unk_0x6ADD12BF4D6D2587(uLocal_221[iVar2]) && !unk_0x3AB6A1A9084FB0A4(uLocal_221[iVar2]))
				{
					if (Local_37[iVar2 /*10*/].f_8 != -1 && Local_37[iVar2 /*10*/].f_8 == iVar0)
					{
						if (!unk_0xA8D0477084E86A92(uLocal_221[iVar2], uLocal_220[iVar0], 0))
						{
							uVar1[iVar0]++;
						}
					}
				}
				iVar2++;
			}
		}
		StringCopy(&cVar3, "iPedsGettingToVeh[", 24);
		StringIntConCat(&cVar3, iVar0, 24);
		StringConCat(&cVar3, "]: ", 24);
		StringIntConCat(&cVar3, uVar1[iVar0], 24);
		unk_0x72903DCF9B54141D(&cVar3, 0,05f, (0,25f + (IntToFloat(iVar0) * 0,025f)), 0f, 255, 255, 255, 255);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (unk_0x6ADD12BF4D6D2587(uLocal_221[iVar0]) && !unk_0x3AB6A1A9084FB0A4(uLocal_221[iVar0]))
		{
			switch (uLocal_222[iVar0])
			{
				case 0:
					if (func_37(iVar0))
					{
						iLocal_211 = 0;
						uLocal_222[iVar0]++;
					}
					break;
				
				case 1:
					if (Local_37[iVar0 /*10*/].f_8 == -1)
					{
						if (!unk_0xBAEC0BAAC7E135C7(uLocal_221[iVar0], 286, 1))
						{
							unk_0xAE01EF4BC84AFE7C(uLocal_221[iVar0], 286, true);
						}
					}
					else
					{
						bVar5 = false;
						if (unk_0x88DDBE9908752BF0(uLocal_221[iVar0], 0))
						{
							iVar6 = unk_0xDFD115BB10FE46A9(uLocal_221[iVar0], 0);
							iVar4 = 0;
							while (iVar4 <= 1)
							{
								if (!bVar5)
								{
									if (uLocal_220[iVar4] == iVar6)
									{
										if (uVar1[iVar4] == 0)
										{
											bVar5 = true;
										}
									}
								}
								iVar4++;
							}
							if (bVar5)
							{
								if (iLocal_215 == -1 && func_40(uLocal_221[iVar0], 0) == -1)
								{
									iLocal_215 = iVar0;
								}
								uLocal_222[iVar0]++;
							}
						}
					}
					break;
				
				case 2:
					if (iLocal_215 != -1)
					{
						iLocal_216 = iLocal_215;
						if (unk_0x6ADD12BF4D6D2587(uLocal_221[iLocal_215]))
						{
							if (unk_0x88DDBE9908752BF0(uLocal_221[iLocal_215], 0))
							{
								iVar7 = unk_0xDFD115BB10FE46A9(uLocal_221[iLocal_215], 0);
							}
						}
					}
					if ((((((((iLocal_215 == -1 || !unk_0x6ADD12BF4D6D2587(uLocal_221[iLocal_215])) || unk_0x3AB6A1A9084FB0A4(uLocal_221[iLocal_215])) || !unk_0x6ADD12BF4D6D2587(iVar7)) || !unk_0xB8DE76287EDC4957(iVar7, 0)) || unk_0x36CA14E4AEA7AA81(iVar7, 0, 1)) || unk_0x36CA14E4AEA7AA81(iVar7, 1, 1)) || unk_0x36CA14E4AEA7AA81(iVar7, 4, 1)) || unk_0x36CA14E4AEA7AA81(iVar7, 5, 1))
					{
						iVar8 = -1;
						bVar9 = false;
						iVar4 = 0;
						while (iVar4 <= 5)
						{
							if (unk_0x6ADD12BF4D6D2587(uLocal_221[iVar4]) && !unk_0x3AB6A1A9084FB0A4(uLocal_221[iVar4]))
							{
								if (func_40(uLocal_221[iVar4], 0) == -1)
								{
									if (iVar8 == -1 || !bVar9)
									{
										bVar9 = true;
										iVar8 = iVar4;
									}
								}
								else if (!bVar9)
								{
									iVar8 = iVar4;
								}
							}
							iVar4++;
						}
						if (iVar8 != -1)
						{
							iLocal_215 = iVar8;
						}
					}
					break;
			}
			if (uLocal_222[iVar0] > 0)
			{
				iVar10 = 0;
				unk_0x5AD8564EFD5BEC2E(uLocal_221[iVar0], &iVar10, 1);
				if (iVar10 == joaat("weapon_molotov"))
				{
					if (unk_0xA8388473C755363D(uLocal_221[iVar0], joaat("weapon_microsmg"), 0))
					{
						unk_0x385A213BEB355C2B(uLocal_221[iVar0], joaat("weapon_microsmg"), true);
					}
					else
					{
						unk_0x9E058151726E58DE(uLocal_221[iVar0], joaat("weapon_microsmg"), -1, true, true);
					}
				}
			}
			switch (uLocal_222[iVar0])
			{
				case 0:
					func_33(uLocal_221[iVar0], Local_37[iVar0 /*10*/].f_4);
					break;
				
				case 1:
					if (Local_37[iVar0 /*10*/].f_8 == -1)
					{
						if (!func_32(uLocal_221[iVar0], 780511057, 1))
						{
							unk_0xD7F5B2902EBBD04E(uLocal_221[iVar0], unk_0xFC1458A37D98B502(), 0, 16);
						}
					}
					else if (uLocal_220[Local_37[iVar0 /*10*/].f_8] == 0 || Local_37[iVar0 /*10*/].f_9 == -2)
					{
					}
					else if (!unk_0xA8D0477084E86A92(uLocal_221[iVar0], uLocal_220[Local_37[iVar0 /*10*/].f_8], 0))
					{
						if (func_5(uLocal_221[iVar0], uLocal_220[Local_37[iVar0 /*10*/].f_8], 1) > 4f)
						{
							if (!func_32(uLocal_221[iVar0], 780511057, 1))
							{
								unk_0x31285BC066B7B5D6(uLocal_221[iVar0], uLocal_220[Local_37[iVar0 /*10*/].f_8], 0f, 0f, 0f, 4f, 0);
								unk_0xD7F5B2902EBBD04E(uLocal_221[iVar0], unk_0xFC1458A37D98B502(), 0, 16);
							}
						}
						else if (!func_32(uLocal_221[iVar0], -1794415470, 1))
						{
							unk_0x6F8C8278B7C06889(uLocal_221[iVar0], uLocal_220[Local_37[iVar0 /*10*/].f_8], -1, Local_37[iVar0 /*10*/].f_9, 2f, 1, 0);
						}
					}
					else if (!func_32(uLocal_221[iVar0], 538064912, 1))
					{
						unk_0x0E90EA4A8DE270F7(uLocal_221[iVar0], unk_0xFC1458A37D98B502(), 1101004800);
					}
					break;
				
				case 2:
					if (unk_0x88DDBE9908752BF0(uLocal_221[iVar0], 0))
					{
						if (iLocal_215 == iVar0)
						{
							if (func_40(uLocal_221[iVar0], 0) != -1)
							{
								if (!func_32(uLocal_221[iVar0], 355471868, 1))
								{
									unk_0x09DC36247844A9E1(uLocal_221[iVar0], unk_0xDFD115BB10FE46A9(uLocal_221[iVar0], 0), 0);
								}
							}
							else if (!func_32(uLocal_221[iVar0], -1273030092, 1) || iLocal_215 != iLocal_216)
							{
								unk_0xD2C269DBF147B406(uLocal_221[iVar0], unk_0xDFD115BB10FE46A9(uLocal_221[iVar0], 0), unk_0xFC1458A37D98B502(), 8, 40f, 786468, 1000f, 0f, 1);
							}
							else if (unk_0x78F50AA8F955BEFC(uLocal_221[iVar0], -1273030092) == 1)
							{
								if (!unk_0x4890D16618AA3B9C(uLocal_221[iVar0]))
								{
									unk_0x3D625AB3CFE71DF3(uLocal_221[iVar0], unk_0xFC1458A37D98B502(), 0, 0f, 0f, 0f, 1000f, 100, 1, -753768974);
								}
							}
						}
						else if (func_40(uLocal_221[iVar0], 0) == -1)
						{
							if (!func_32(uLocal_221[iVar0], -1273030092, 1) || iLocal_215 != iLocal_216)
							{
								unk_0x704F59A957541E38(uLocal_221[iVar0], unk_0xDFD115BB10FE46A9(uLocal_221[iVar0], 0), unk_0xDFD115BB10FE46A9(uLocal_221[iLocal_215], 0), -1, 40f, 786468, -1f, 20, 20f);
							}
							else if (unk_0x78F50AA8F955BEFC(uLocal_221[iVar0], -1273030092) == 1)
							{
								if (!unk_0x4890D16618AA3B9C(uLocal_221[iVar0]))
								{
									unk_0x3D625AB3CFE71DF3(uLocal_221[iVar0], unk_0xFC1458A37D98B502(), 0, 0f, 0f, 0f, 1000f, 100, 1, -753768974);
								}
							}
						}
						else
						{
							iVar11 = unk_0x317536BCEA8FA6B0(unk_0xDFD115BB10FE46A9(uLocal_221[iVar0], 0), -1, 0);
							if (!unk_0x6ADD12BF4D6D2587(iVar11) || unk_0x3AB6A1A9084FB0A4(iVar11))
							{
								if (!func_32(uLocal_221[iVar0], 355471868, 1))
								{
									unk_0x09DC36247844A9E1(uLocal_221[iVar0], unk_0xDFD115BB10FE46A9(uLocal_221[iVar0], 0), 0);
								}
							}
							else if (!func_32(uLocal_221[iVar0], 2104565373, 1) || iLocal_215 != iLocal_216)
							{
								unk_0x3D625AB3CFE71DF3(uLocal_221[iVar0], unk_0xFC1458A37D98B502(), 0, 0f, 0f, 0f, 1000f, 100, 1, -753768974);
							}
						}
					}
					break;
				}
		}
		iVar0++;
	}
	switch (iLocal_211)
	{
		case 0:
			if (func_31())
			{
				iVar12 = func_30();
				if (iVar12 != -1 && !unk_0x33B1D0D0C92D4F18(uLocal_221[iVar12]))
				{
					func_28(uLocal_221[iVar12], "SUSPECT_SPOTTED", 10);
					StringCopy(&cVar13, "", 16);
					iLocal_211++;
				}
			}
			break;
		
		case 1:
			if (func_31())
			{
				cVar13 = { func_27("START") };
				if (func_10(&uLocal_46, &cLocal_213, &cVar13, 8, 0, 0, 0))
				{
					StringCopy(&cVar13, "", 16);
					iLocal_211++;
				}
			}
			break;
		
		case 2:
			if (func_31())
			{
				iVar12 = func_30();
				if (iVar12 != -1 && !unk_0x33B1D0D0C92D4F18(uLocal_221[iVar12]))
				{
					func_28(uLocal_221[iVar12], "SHOUT_THREATEN", 10);
					StringCopy(&cVar13, "", 16);
					iLocal_211++;
				}
			}
			break;
		
		case 3:
			if ((func_31() && (unk_0x53C562FD2B9E3AB0() - iLocal_212) > 3000) && !unk_0x33B1D0D0C92D4F18(unk_0xFC1458A37D98B502()))
			{
				func_28(unk_0xFC1458A37D98B502(), "BLIND_RAGE", 10);
				iLocal_211++;
			}
			break;
		
		case 4:
			if (func_31() && (unk_0x53C562FD2B9E3AB0() - iLocal_212) > 1000)
			{
				iVar12 = func_30();
				if (iVar12 != -1 && !unk_0x33B1D0D0C92D4F18(uLocal_221[iVar12]))
				{
					if (unk_0x88DDBE9908752BF0(uLocal_221[iVar12], 0))
					{
						func_28(uLocal_221[iVar12], "GENERIC_INSULT", 10);
						StringCopy(&cVar13, "", 16);
						iLocal_211 = (iLocal_211 - 1);
					}
					else
					{
						func_28(uLocal_221[iVar12], "SHOUT_THREATEN", 10);
						StringCopy(&cVar13, "", 16);
						iLocal_211 = (iLocal_211 - 1);
					}
				}
			}
			break;
	}
}

int func_40(int iParam0, int iParam1)//Position - 0x228C
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!unk_0x3AB6A1A9084FB0A4(iParam0))
	{
		if (unk_0x88DDBE9908752BF0(iParam0, iParam1))
		{
			iVar0 = unk_0xDFD115BB10FE46A9(iParam0, iParam1);
			if (unk_0x6ADD12BF4D6D2587(iVar0))
			{
				iVar1 = unk_0xF82225DEA5272C6B(unk_0x82FF3DFBC3965CC0(iVar0));
				if (iVar1 == 1)
				{
					iVar3 = -1;
					return iVar3;
				}
				iVar2 = 0;
				while (iVar2 < iVar1)
				{
					iVar3 = (iVar2 - 1);
					if (!unk_0x8EE3A848975DDF21(iVar0, iVar3, 0))
					{
						if (unk_0x317536BCEA8FA6B0(iVar0, iVar3, 0) == iParam0)
						{
							return iVar3;
						}
					}
					iVar2++;
				}
			}
		}
	}
	return iVar3;
}

void func_41()//Position - 0x2311
{
	func_56(1);
	func_55();
}

void func_42(char* sParam0, int iParam1, int iParam2)//Position - 0x2322
{
	iParam2 = iParam2;
	unk_0xCFFAC52CF8717D56(sParam0);
	unk_0x4D0B431E65A53BFC(iParam1, 1);
}

int func_43(int iParam0, bool bParam1, int iParam2)//Position - 0x233B
{
	int iVar0;
	
	iVar0 = func_44(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0xA6DECE14FC9A8C51(iVar0)) && unk_0xA1800C71952C596F(&(Global_104555.f_28020[iParam2 /*29*/].f_3)))
	{
		unk_0x62BD54E491535B76(iVar0, &(Global_104555.f_28020[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_44(int iParam0, bool bParam1, bool bParam2)//Position - 0x238D
{
	int iVar0;
	
	if (!unk_0x6ADD12BF4D6D2587(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0xCA43F0FC44D9B846(iParam0);
	if (unk_0x8A3FF8E81B40BB75(iParam0))
	{
		unk_0xA5D25D3F884FF516(iVar0, func_45(unk_0x3A711520F83BAE98(), 1f, 1f));
		if (!bParam2)
		{
			unk_0xDB6E56C09E5CF0AA(iVar0, bParam1);
		}
		else
		{
			unk_0x0C71C8E276E3EC54(iVar0, 2);
		}
	}
	else if (unk_0x52C56492660097C7(iParam0))
	{
		unk_0xA5D25D3F884FF516(iVar0, func_45(unk_0x3A711520F83BAE98(), 0,7f, 0,7f));
		unk_0xDB6E56C09E5CF0AA(iVar0, bParam1);
	}
	else if (unk_0x0423B20CB20B7901(iParam0))
	{
		unk_0xA5D25D3F884FF516(iVar0, func_45(unk_0x3A711520F83BAE98(), 0,7f, 0,7f));
	}
	return iVar0;
}

float func_45(bool bParam0, float fParam1, float fParam2)//Position - 0x2431
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_46(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)//Position - 0x2448
{
	if (!unk_0x3AB6A1A9084FB0A4(iParam0))
	{
		unk_0x253DB96AF5D6551B(iParam0, fParam1);
		unk_0x471F966B9F527DA3(iParam0, fParam2);
		unk_0x0223236997E1A137(iParam0, (fParam3 / 2f));
		unk_0x2C18191093123E39(iParam0, fParam4);
		unk_0x7EDC2382770DE785(iParam0, fParam5);
	}
}

int func_47()//Position - 0x2484
{
	if (Global_15756 != 0 || unk_0x42111BD51D233AAB())
	{
		return 1;
	}
	return 0;
}

void func_48()//Position - 0x24A6
{
	int iVar0;
	
	switch (func_17())
	{
		case 0:
			func_54(&uLocal_46, 0, unk_0xFC1458A37D98B502(), "MICHAEL", 0, 1);
			break;
		
		case 1:
			func_54(&uLocal_46, 1, unk_0xFC1458A37D98B502(), "FRANKLIN", 0, 1);
			break;
		
		case 2:
			func_54(&uLocal_46, 2, unk_0xFC1458A37D98B502(), "TREVOR", 0, 1);
			break;
	}
	unk_0x94BD6F0436473406(0,1f);
	unk_0x1D29C781A978C4FB(3, false);
	unk_0xC1CEF375B44856F4(0);
	iLocal_45 = func_52();
	switch (func_8())
	{
		case 11:
			iVar0 = 0;
			break;
		
		case 12:
			iVar0 = 1;
			break;
		
		case 13:
			iVar0 = 2;
			break;
		
		case 14:
			iVar0 = 0;
			break;
	}
	func_51(&(Local_37[0 /*10*/]), func_8(), 0);
	func_51(&(Local_37[1 /*10*/]), func_8(), 1);
	func_51(&(Local_37[2 /*10*/]), func_8(), 2);
	func_51(&(Local_37[3 /*10*/]), func_8(), 3);
	func_51(&(Local_37[4 /*10*/]), func_8(), 4);
	func_51(&(Local_37[5 /*10*/]), func_8(), 5);
	StringCopy(&(Local_37.f_61), func_50(iVar0), 16);
	StringCopy(&(Local_37.f_65), func_49(iVar0), 16);
	unk_0x4DE114E3C7F8B7C2("relGang", &iLocal_224);
	unk_0xF96119FCCD4D1889(5, 1862763509, iLocal_224);
	unk_0xF96119FCCD4D1889(5, iLocal_224, 1862763509);
	unk_0xF96119FCCD4D1889(5, iLocal_224, -1533126372);
	switch (iVar0)
	{
		case 0:
			unk_0xF96119FCCD4D1889(5, 1862763509, 296331235);
			unk_0xF96119FCCD4D1889(1, iLocal_224, 296331235);
			unk_0xF96119FCCD4D1889(1, 296331235, iLocal_224);
			break;
		
		case 1:
			unk_0xF96119FCCD4D1889(5, 1862763509, -1033021910);
			unk_0xF96119FCCD4D1889(1, iLocal_224, -1033021910);
			unk_0xF96119FCCD4D1889(1, -1033021910, iLocal_224);
			break;
		
		case 2:
			unk_0xF96119FCCD4D1889(5, 1862763509, 1782292358);
			unk_0xF96119FCCD4D1889(1, iLocal_224, 1782292358);
			unk_0xF96119FCCD4D1889(1, 1782292358, iLocal_224);
			break;
	}
}

char* func_49(int iParam0)//Position - 0x2694
{
	switch (iParam0)
	{
		case 1:
			return "BALLA1";
			break;
		
		case 2:
			return "KOREANGUY";
			break;
		
		case 0:
			return "VAGOS";
			break;
		
		default:
			return "";
			break;
	}
	return "";
}

char* func_50(int iParam0)//Position - 0x26DF
{
	switch (iParam0)
	{
		case 1:
			return "BAL";
			break;
		
		case 2:
			return "KOR";
			break;
		
		case 0:
			return "VAG";
			break;
		
		default:
			return "";
			break;
	}
	return "";
}

void func_51(var uParam0, int iParam1, int iParam2)//Position - 0x272A
{
	switch (iParam1)
	{
		case 11:
			switch (iParam2)
			{
				case 0:
					*uParam0 = { -543,6415f, 303,5388f, 82,0202f };
					uParam0->f_3 = 231,5559f;
					uParam0->f_4 = { 0f, 0f, 0f };
					uParam0->f_7 = joaat("weapon_pumpshotgun");
					uParam0->f_8 = -1;
					uParam0->f_9 = -2;
					break;
				
				case 1:
					*uParam0 = { -563,5045f, 303,3635f, 82,192f };
					uParam0->f_3 = 191,6703f;
					uParam0->f_4 = { -561,9358f, 293,7914f, 84,1827f };
					uParam0->f_7 = joaat("weapon_microsmg");
					uParam0->f_8 = 0;
					uParam0->f_9 = -1;
					break;
				
				case 2:
					*uParam0 = { -547,9926f, 299,531f, 82,0218f };
					uParam0->f_3 = 170,2791f;
					uParam0->f_4 = { -550,0999f, 292,7203f, 87,8903f };
					uParam0->f_7 = joaat("weapon_assaultrifle");
					uParam0->f_8 = -1;
					uParam0->f_9 = -2;
					break;
				
				case 3:
					*uParam0 = { -551,7525f, 301,2135f, 82,1226f };
					uParam0->f_3 = 132,7229f;
					uParam0->f_4 = { -561,2323f, 294,0457f, 87,6588f };
					uParam0->f_7 = joaat("weapon_microsmg");
					uParam0->f_8 = 1;
					uParam0->f_9 = -1;
					break;
				
				case 4:
					*uParam0 = { -549,7384f, 303,0894f, 82,0981f };
					uParam0->f_3 = 167,5811f;
					uParam0->f_4 = { -552,8337f, 292,7388f, 88,2295f };
					uParam0->f_7 = joaat("weapon_molotov");
					uParam0->f_8 = 0;
					uParam0->f_9 = 0;
					break;
				
				case 5:
					*uParam0 = { -558,4697f, 303,0401f, 82,2333f };
					uParam0->f_3 = 161,0839f;
					uParam0->f_4 = { -561,9985f, 293,9765f, 87,8096f };
					uParam0->f_7 = joaat("weapon_molotov");
					uParam0->f_8 = 1;
					uParam0->f_9 = 0;
					break;
			}
			break;
		
		case 12:
			switch (iParam2)
			{
				case 0:
					*uParam0 = { 231,2834f, 345,2137f, 104,3893f };
					uParam0->f_3 = 324,6404f;
					uParam0->f_4 = { 0f, 0f, 0f };
					uParam0->f_7 = joaat("weapon_sawnoffshotgun");
					uParam0->f_8 = -1;
					uParam0->f_9 = -2;
					break;
				
				case 1:
					*uParam0 = { 236,5094f, 339,3164f, 104,5298f };
					uParam0->f_3 = 112,7911f;
					uParam0->f_4 = { 230,1282f, 337,069f, 106,8048f };
					uParam0->f_7 = joaat("weapon_microsmg");
					uParam0->f_8 = 0;
					uParam0->f_9 = -1;
					break;
				
				case 2:
					*uParam0 = { 224,3295f, 348,2992f, 104,4469f };
					uParam0->f_3 = 165,7146f;
					uParam0->f_4 = { 221,6486f, 340,3152f, 106,6212f };
					uParam0->f_7 = joaat("weapon_assaultrifle");
					uParam0->f_8 = 1;
					uParam0->f_9 = -1;
					break;
				
				case 3:
					*uParam0 = { 234,1038f, 341,6698f, 104,5309f };
					uParam0->f_3 = 110,0142f;
					uParam0->f_4 = { 223,9347f, 338,3914f, 106,8137f };
					uParam0->f_7 = joaat("weapon_microsmg");
					uParam0->f_8 = -1;
					uParam0->f_9 = -2;
					break;
				
				case 4:
					*uParam0 = { 228,9968f, 344,3681f, 104,5384f };
					uParam0->f_3 = 153,6073f;
					uParam0->f_4 = { 224,4416f, 336,0886f, 106,1191f };
					uParam0->f_7 = joaat("weapon_molotov");
					uParam0->f_8 = 0;
					uParam0->f_9 = 0;
					break;
				
				case 5:
					*uParam0 = { 221,382f, 346,3744f, 104,5675f };
					uParam0->f_3 = 165,8422f;
					uParam0->f_4 = { 219,6116f, 340,9911f, 106,4532f };
					uParam0->f_7 = joaat("weapon_microsmg");
					uParam0->f_8 = 1;
					uParam0->f_9 = 0;
					break;
			}
			break;
		
		case 13:
			switch (iParam2)
			{
				case 0:
					*uParam0 = { -325,1079f, 6263,833f, 30,4151f };
					uParam0->f_3 = 195,9702f;
					uParam0->f_4 = { 0f, 0f, 0f };
					uParam0->f_7 = joaat("weapon_sawnoffshotgun");
					uParam0->f_8 = -1;
					uParam0->f_9 = -2;
					break;
				
				case 1:
					*uParam0 = { -312,9843f, 6250,115f, 30,4899f };
					uParam0->f_3 = 319,1074f;
					uParam0->f_4 = { -308,3476f, 6254,857f, 32,6941f };
					uParam0->f_7 = joaat("weapon_assaultrifle");
					uParam0->f_8 = 0;
					uParam0->f_9 = 0;
					break;
				
				case 2:
					*uParam0 = { -326,1756f, 6268,338f, 30,4714f };
					uParam0->f_3 = 261,9836f;
					uParam0->f_4 = { -312,8552f, 6265,857f, 43,5835f };
					uParam0->f_7 = joaat("weapon_molotov");
					uParam0->f_8 = 1;
					uParam0->f_9 = -1;
					break;
				
				case 3:
					*uParam0 = { -323,9344f, 6259,659f, 30,3539f };
					uParam0->f_3 = 292,4941f;
					uParam0->f_4 = { -313,3472f, 6263,395f, 42,7414f };
					uParam0->f_7 = joaat("weapon_molotov");
					uParam0->f_8 = 1;
					uParam0->f_9 = 0;
					break;
				
				case 4:
					*uParam0 = { -318,7812f, 6259,576f, 30,5161f };
					uParam0->f_3 = 295,0701f;
					uParam0->f_4 = { -313,766f, 6261,479f, 32,6516f };
					uParam0->f_7 = joaat("weapon_microsmg");
					uParam0->f_8 = 0;
					uParam0->f_9 = -1;
					break;
				
				case 5:
					*uParam0 = { -314,925f, 6255,542f, 30,5164f };
					uParam0->f_3 = 309,7791f;
					uParam0->f_4 = { -310,572f, 6258,45f, 32,6648f };
					uParam0->f_7 = joaat("weapon_pumpshotgun");
					uParam0->f_8 = -1;
					uParam0->f_9 = -2;
					break;
			}
			break;
		
		case 14:
			switch (iParam2)
			{
				case 0:
					*uParam0 = { -2215,32f, 4275,046f, 46,475f };
					uParam0->f_3 = 16,955f;
					uParam0->f_4 = { 0f, 0f, 0f };
					uParam0->f_7 = joaat("weapon_pumpshotgun");
					uParam0->f_8 = -1;
					uParam0->f_9 = -2;
					break;
				
				case 1:
					*uParam0 = { -2195,425f, 4262,31f, 47,2741f };
					uParam0->f_3 = 241,4366f;
					uParam0->f_4 = { -2185,362f, 4256,376f, 48,4082f };
					uParam0->f_7 = joaat("weapon_molotov");
					uParam0->f_8 = 1;
					uParam0->f_9 = 0;
					break;
				
				case 2:
					*uParam0 = { -2200,848f, 4268,19f, 47,3093f };
					uParam0->f_3 = 331,1949f;
					uParam0->f_4 = { -2196,575f, 4275,129f, 49,0669f };
					uParam0->f_7 = joaat("weapon_assaultrifle");
					uParam0->f_8 = -1;
					uParam0->f_9 = -2;
					break;
				
				case 3:
					*uParam0 = { -2202,818f, 4294,149f, 47,4518f };
					uParam0->f_3 = 263,7257f;
					uParam0->f_4 = { -2192,783f, 4289,572f, 50,3251f };
					uParam0->f_7 = joaat("weapon_molotov");
					uParam0->f_8 = 0;
					uParam0->f_9 = 0;
					break;
				
				case 4:
					*uParam0 = { -2196,271f, 4265,064f, 47,3446f };
					uParam0->f_3 = 325,4524f;
					uParam0->f_4 = { -2191,183f, 4271,747f, 49,867f };
					uParam0->f_7 = joaat("weapon_pumpshotgun");
					uParam0->f_8 = 1;
					uParam0->f_9 = -1;
					break;
				
				case 5:
					*uParam0 = { -2204,492f, 4290,059f, 47,3773f };
					uParam0->f_3 = 269,5739f;
					uParam0->f_4 = { -2193,017f, 4292,669f, 54,873f };
					uParam0->f_7 = joaat("weapon_microsmg");
					uParam0->f_8 = 0;
					uParam0->f_9 = -1;
					break;
			}
			break;
	}
}

int func_52()//Position - 0x2E91
{
	return func_53(Global_103265.f_20, Global_103265.f_29);
}

int func_53(var uParam0, int iParam1)//Position - 0x2EA9
{
	uParam0 = uParam0;
	switch (iParam1)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			return 1;
			break;
	}
	return 0;
}

void func_54(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x2ED7
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_70856)
	{
		if (!unk_0x3AB6A1A9084FB0A4(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x4ACB9D202CFF8727(iParam2, 0);
			}
			else
			{
				unk_0x4ACB9D202CFF8727(iParam2, 1);
			}
		}
		if (!unk_0x3AB6A1A9084FB0A4(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0xC672DBF4ABE19DFB(iParam2, 0);
			}
			else
			{
				unk_0xC672DBF4ABE19DFB(iParam2, 1);
			}
		}
	}
}

void func_55()//Position - 0x2F72
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (unk_0x6ADD12BF4D6D2587(uLocal_221[iVar0]))
		{
			if (!unk_0x3AB6A1A9084FB0A4(uLocal_221[iVar0]) && !unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
			{
				unk_0xD68E88A8E0BE8697(uLocal_221[iVar0], unk_0xFC1458A37D98B502(), 1000f, -1, 0, 1);
			}
			unk_0x486F346ADFE56674(&(uLocal_221[iVar0]));
		}
		if (unk_0xA6DECE14FC9A8C51(uLocal_223[iVar0]))
		{
			unk_0xE30CF11C0EE14316(&(uLocal_223[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (unk_0x6ADD12BF4D6D2587(uLocal_220[iVar0]))
		{
			unk_0x5380482A432E314E(&(uLocal_220[iVar0]));
		}
		iVar0++;
	}
	unk_0xDF1ACFD53102CEB0(iLocal_225, false);
	unk_0x2E4932E63763FE26(iLocal_226, false);
	unk_0x94BD6F0436473406(1f);
	unk_0x1D29C781A978C4FB(3, true);
	unk_0xC1CEF375B44856F4(1);
	unk_0x96A3D9A8A4C7AFD4();
}

void func_56(int iParam0)//Position - 0x3041
{
	Global_103265.f_22 = iParam0;
}

