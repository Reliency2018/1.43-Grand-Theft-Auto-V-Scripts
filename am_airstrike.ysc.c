#region Local Var
	int iLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	int iLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	float fLocal_15 = 0f;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	int iLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	char* sLocal_21 = NULL;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	float fLocal_29 = 0f;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	int iLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	bool bLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	bool bLocal_58 = 0;
	int iLocal_59 = 0;
	vector3 vLocal_60 = { 0f, 0f, 0f };
	vector3 vLocal_61 = { 0f, 0f, 0f };
	float fLocal_62 = 0f;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 16;
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
	var uLocal_211 = 0;
	var uLocal_212 = 0;
	var uLocal_213 = 0;
	var uLocal_214 = 0;
	var uLocal_215 = 0;
	var uLocal_216 = 0;
	var uLocal_217 = 0;
	var uLocal_218 = 0;
	var uLocal_219 = 0;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
	var uLocal_226 = 0;
	var uLocal_227 = 0;
	var uLocal_228 = 0;
	var uLocal_229 = 0;
	var uLocal_230 = 0;
	var uLocal_231 = 0;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	int iLocal_234 = 0;
	int iLocal_235 = 0;
	int iLocal_236 = 0;
	int iLocal_237 = 0;
	struct<57> Local_238 = { 0, 0, 0, -1281684762, 0, 0, -163714847, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_239 = 0;
	struct<5> Local_240[2];
	struct<21> Local_241 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
#endregion

void __EntryFunction__()//Position - 0x0
{
	iLocal_0 = 3;
	iLocal_3 = 1;
	iLocal_4 = 134;
	iLocal_5 = 134;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 1;
	iLocal_9 = 134;
	iLocal_10 = 1;
	iLocal_11 = 12;
	iLocal_12 = 12;
	fLocal_15 = 0,001f;
	iLocal_18 = -1;
	sLocal_21 = "NULL";
	fLocal_24 = 80f;
	fLocal_25 = 140f;
	fLocal_26 = 180f;
	fLocal_29 = 0f;
	fLocal_33 = -0,0375f;
	fLocal_34 = 0,17f;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	if (unk_0x3A711520F83BAE98())
	{
		func_102(ScriptParam_241);
	}
	while (true)
	{
		func_101();
		if (func_91())
		{
			func_87();
		}
		if (unk_0x3A711520F83BAE98())
		{
			func_86();
			switch (func_85(unk_0x622FF3AE4B1D07C3()))
			{
				case 0:
					if (func_84() > 0)
					{
						Local_240[unk_0x622FF3AE4B1D07C3() /*5*/] = 2;
					}
					break;
				
				case 2:
					if (func_84() == 3)
					{
						Local_240[unk_0x622FF3AE4B1D07C3() /*5*/] = 3;
					}
					break;
				
				case 3:
					func_87();
					break;
			}
			if (unk_0x8E1421E2A2A2FBD4())
			{
				switch (func_84())
				{
					case 0:
						Local_238 = 2;
						break;
					
					case 2:
						func_1();
						break;
					
					case 3:
						break;
					}
				}
		}
	}
}

void func_1()//Position - 0x125
{
	switch (Local_238.f_1)
	{
		case 0:
			func_25();
			break;
		
		case 1:
			func_24();
			break;
	}
	if (Local_238.f_2.f_2 == 3 && iLocal_57 == 0)
	{
		Local_238 = 3;
	}
	func_17();
	if (Local_238.f_53 && Local_238.f_50 < 10)
	{
		func_12();
	}
	if (Local_238.f_50 >= 10)
	{
		if (!func_11(&uLocal_65))
		{
			func_10(&uLocal_65, 0, 0);
		}
		else if (func_9(&uLocal_65, 10000, 0))
		{
			Local_238 = 3;
		}
	}
	if (func_8())
	{
		Local_238 = 3;
	}
	if (Local_238.f_55 == 1)
	{
		if (!Local_238.f_56)
		{
			if (((!unk_0xF491DD47B88AA84E() || func_7("AIRSTRIKE_1")) || func_7("AIRSTRIKE_2")) || func_7("AIRSTRIKE_4"))
			{
				func_6("AIRSTRIKE_3", -1);
				Local_238.f_56 = 1;
			}
		}
	}
	if (bLocal_52)
	{
		if (!func_3(unk_0x9EB17624F44A8DA4(), 1))
		{
			Local_238 = 3;
		}
	}
	else if (func_3(unk_0x9EB17624F44A8DA4(), 1) || func_2())
	{
		Local_238 = 3;
	}
	if (unk_0xA8113D347D14630F())
	{
		Local_238 = 3;
	}
}

bool func_2()//Position - 0x240
{
	return unk_0xC80D31E4B587871C(Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_39.f_18, 0);
}

int func_3(int iParam0, bool bParam1)//Position - 0x25C
{
	if (bParam1)
	{
		if (func_4(iParam0))
		{
			return 1;
		}
	}
	if (Global_1595693[iParam0 /*680*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_4(int iParam0)//Position - 0x288
{
	return func_5(iParam0);
}

bool func_5(int iParam0)//Position - 0x296
{
	return unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_13.f_1, 0);
}

void func_6(char* sParam0, int iParam1)//Position - 0x2B0
{
	unk_0x67129637F30DEB3F(sParam0);
	unk_0x376CFA11DE0FE521(0, 0, 1, iParam1);
}

bool func_7(char* sParam0)//Position - 0x2C7
{
	unk_0x5BE7193BC62CE2CE(sParam0);
	return unk_0x0683D2027E169355(0);
}

bool func_8()//Position - 0x2DA
{
	return Global_1312416;
}

int func_9(var uParam0, int iParam1, bool bParam2)//Position - 0x2E6
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_10(uParam0, bParam2, 0);
	if (unk_0x3A711520F83BAE98() && !bParam2)
	{
		if (unk_0xB89BB11E0945F6F0(unk_0x38F6270C9AE5FE40(unk_0xD1952A425B78FFC0(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0xB89BB11E0945F6F0(unk_0x38F6270C9AE5FE40(unk_0x53C562FD2B9E3AB0(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_10(var uParam0, bool bParam1, bool bParam2)//Position - 0x344
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x3A711520F83BAE98() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0xD1952A425B78FFC0();
			}
			else
			{
				*uParam0 = unk_0xEBD55014C579F626();
			}
		}
		else
		{
			*uParam0 = unk_0x53C562FD2B9E3AB0();
		}
		uParam0->f_1 = 1;
	}
}

bool func_11(var uParam0)//Position - 0x389
{
	return uParam0->f_1;
}

void func_12()//Position - 0x395
{
	vector3 vVar0;
	vector3 vVar1;
	int iVar2;
	
	iVar2 = 200;
	if (func_16(vLocal_61))
	{
		if (func_14(Local_238.f_2))
		{
			vLocal_61 = { unk_0xB3328BA8976B416C(unk_0xF32FBF2453AC1753(Local_238.f_2), 1) };
			vLocal_61.z = (vLocal_61.z - 5f);
		}
	}
	switch (Local_238.f_50)
	{
		case 0:
			if (!func_11(&(Local_238.f_51)))
			{
				if (!unk_0xC80D31E4B587871C(iLocal_237, Local_238.f_50))
				{
					vVar0 = { Local_240[unk_0x622FF3AE4B1D07C3() /*5*/].f_2 };
					vVar0.z = vLocal_61.z;
					vVar1 = { Local_240[unk_0x622FF3AE4B1D07C3() /*5*/].f_2 };
					vVar1 = { vVar1 + Vector(0f, 0,1f, 0,1f) };
					unk_0x7367FB97975F1E29(vVar1 + Vector(10f, 0f, 0f), &(vVar1.f_2), 0, 0);
					vVar1.z = (vVar1.z - 25f);
					unk_0x05AC8E29B1D3F768(vVar0, vVar1, iVar2, 1, joaat("weapon_airstrike_rocket"), unk_0xFC1458A37D98B502(), 1, 0, -1f, unk_0xFC1458A37D98B502(), 1, 1, 0, 0, 0, 0);
					func_10(&(Local_238.f_51), 0, 0);
					iLocal_57 = 1;
					unk_0x872F1C1F8587CCC7(&iLocal_237, Local_238.f_50);
				}
			}
			else if (func_9(&(Local_238.f_51), 750, 0))
			{
				func_13(&(Local_238.f_51));
				Local_238.f_50++;
			}
			break;
		
		case 1:
			if (!func_11(&(Local_238.f_51)))
			{
				if (!unk_0xC80D31E4B587871C(iLocal_237, Local_238.f_50))
				{
					vVar0 = { Local_240[unk_0x622FF3AE4B1D07C3() /*5*/].f_2 + Vector(0f, 5f, 5f) };
					vVar0.z = vLocal_61.z;
					vVar1 = { Local_240[unk_0x622FF3AE4B1D07C3() /*5*/].f_2 + Vector(0f, 5f, 5f) };
					vVar1 = { vVar1 + Vector(0f, 0,1f, 0,1f) };
					unk_0x7367FB97975F1E29(vVar1 + Vector(10f, 0f, 0f), &(vVar1.f_2), 0, 0);
					vVar1.z = (vVar1.z - 25f);
					unk_0x05AC8E29B1D3F768(vVar0, vVar1, iVar2, 1, joaat("weapon_airstrike_rocket"), unk_0x47BA76CE3C825A08(Local_238.f_2.f_3), 1, 0, -1f, unk_0xFC1458A37D98B502(), 1, 0, 0, 0, 0, 0);
					func_10(&(Local_238.f_51), 0, 0);
					unk_0x872F1C1F8587CCC7(&iLocal_237, Local_238.f_50);
				}
			}
			else if (func_9(&(Local_238.f_51), 500, 0))
			{
				func_13(&(Local_238.f_51));
				Local_238.f_50++;
			}
			break;
		
		case 2:
			if (!func_11(&(Local_238.f_51)))
			{
				if (!unk_0xC80D31E4B587871C(iLocal_237, Local_238.f_50))
				{
					vVar0 = { Local_240[unk_0x622FF3AE4B1D07C3() /*5*/].f_2 + Vector(0f, -5f, -5f) };
					vVar0.z = vLocal_61.z;
					vVar1 = { Local_240[unk_0x622FF3AE4B1D07C3() /*5*/].f_2 + Vector(0f, -5f, -5f) };
					vVar1 = { vVar1 + Vector(0f, 0,1f, 0,1f) };
					unk_0x7367FB97975F1E29(vVar1 + Vector(10f, 0f, 0f), &(vVar1.f_2), 0, 0);
					vVar1.z = (vVar1.z - 25f);
					unk_0x05AC8E29B1D3F768(vVar0, vVar1, iVar2, 1, joaat("weapon_airstrike_rocket"), unk_0x47BA76CE3C825A08(Local_238.f_2.f_3), 1, 0, -1f, unk_0xFC1458A37D98B502(), 1, 0, 0, 0, 0, 0);
					func_10(&(Local_238.f_51), 0, 0);
					unk_0x872F1C1F8587CCC7(&iLocal_237, Local_238.f_50);
				}
			}
			else if (func_9(&(Local_238.f_51), 500, 0))
			{
				func_13(&(Local_238.f_51));
				Local_238.f_50++;
			}
			break;
		
		case 3:
			if (!func_11(&(Local_238.f_51)))
			{
				if (!unk_0xC80D31E4B587871C(iLocal_237, Local_238.f_50))
				{
					vVar0 = { Local_240[unk_0x622FF3AE4B1D07C3() /*5*/].f_2 + Vector(0f, 5f, -5f) };
					vVar0.z = vLocal_61.z;
					vVar1 = { Local_240[unk_0x622FF3AE4B1D07C3() /*5*/].f_2 + Vector(0f, 5f, -5f) };
					vVar1 = { vVar1 + Vector(0f, 0,1f, 0,1f) };
					unk_0x7367FB97975F1E29(vVar1 + Vector(10f, 0f, 0f), &(vVar1.f_2), 0, 0);
					vVar1.z = (vVar1.z - 25f);
					unk_0x05AC8E29B1D3F768(vVar0, vVar1, iVar2, 1, joaat("weapon_airstrike_rocket"), unk_0x47BA76CE3C825A08(Local_238.f_2.f_3), 1, 0, -1f, unk_0xFC1458A37D98B502(), 1, 0, 0, 0, 0, 0);
					func_10(&(Local_238.f_51), 0, 0);
					unk_0x872F1C1F8587CCC7(&iLocal_237, Local_238.f_50);
				}
			}
			else if (func_9(&(Local_238.f_51), 750, 0))
			{
				func_13(&(Local_238.f_51));
				Local_238.f_50++;
			}
			break;
		
		case 4:
			if (!func_11(&(Local_238.f_51)))
			{
				if (!unk_0xC80D31E4B587871C(iLocal_237, Local_238.f_50))
				{
					vVar0 = { Local_240[unk_0x622FF3AE4B1D07C3() /*5*/].f_2 + Vector(0f, -5f, 5f) };
					vVar0.z = vLocal_61.z;
					vVar1 = { Local_240[unk_0x622FF3AE4B1D07C3() /*5*/].f_2 + Vector(0f, -5f, 5f) };
					vVar1 = { vVar1 + Vector(0f, 0,1f, 0,1f) };
					unk_0x7367FB97975F1E29(vVar1 + Vector(10f, 0f, 0f), &(vVar1.f_2), 0, 0);
					vVar1.z = (vVar1.z - 25f);
					unk_0x05AC8E29B1D3F768(vVar0, vVar1, iVar2, 1, joaat("weapon_airstrike_rocket"), unk_0x47BA76CE3C825A08(Local_238.f_2.f_3), 1, 0, -1f, unk_0xFC1458A37D98B502(), 1, 0, 0, 0, 0, 0);
					func_10(&(Local_238.f_51), 0, 0);
					unk_0x872F1C1F8587CCC7(&iLocal_237, Local_238.f_50);
				}
			}
			else if (func_9(&(Local_238.f_51), 500, 0))
			{
				func_13(&(Local_238.f_51));
				Local_238.f_50++;
			}
			break;
		
		case 5:
			if (!func_11(&(Local_238.f_51)))
			{
				if (!unk_0xC80D31E4B587871C(iLocal_237, Local_238.f_50))
				{
					vVar0 = { Local_240[unk_0x622FF3AE4B1D07C3() /*5*/].f_2 + Vector(0f, 5f, 10f) };
					vVar0.z = vLocal_61.z;
					vVar1 = { Local_240[unk_0x622FF3AE4B1D07C3() /*5*/].f_2 + Vector(0f, 5f, 10f) };
					vVar1 = { vVar1 + Vector(0f, 0,1f, 0,1f) };
					unk_0x7367FB97975F1E29(vVar1 + Vector(10f, 0f, 0f), &(vVar1.f_2), 0, 0);
					vVar1.z = (vVar1.z - 25f);
					unk_0x05AC8E29B1D3F768(vVar0, vVar1, iVar2, 1, joaat("weapon_airstrike_rocket"), unk_0x47BA76CE3C825A08(Local_238.f_2.f_3), 1, 0, -1f, unk_0xFC1458A37D98B502(), 1, 0, 0, 0, 0, 0);
					func_10(&(Local_238.f_51), 0, 0);
					unk_0x872F1C1F8587CCC7(&iLocal_237, Local_238.f_50);
				}
			}
			else if (func_9(&(Local_238.f_51), 750, 0))
			{
				func_13(&(Local_238.f_51));
				Local_238.f_50++;
			}
			break;
		
		case 6:
			if (!func_11(&(Local_238.f_51)))
			{
				if (!unk_0xC80D31E4B587871C(iLocal_237, Local_238.f_50))
				{
					vVar0 = { Local_240[unk_0x622FF3AE4B1D07C3() /*5*/].f_2 + Vector(0f, 10f, 10f) };
					vVar0.z = vLocal_61.z;
					vVar1 = { Local_240[unk_0x622FF3AE4B1D07C3() /*5*/].f_2 + Vector(0f, 10f, 10f) };
					vVar1 = { vVar1 + Vector(0f, 0,1f, 0,1f) };
					unk_0x7367FB97975F1E29(vVar1 + Vector(10f, 0f, 0f), &(vVar1.f_2), 0, 0);
					vVar1.z = (vVar1.z - 25f);
					unk_0x05AC8E29B1D3F768(vVar0, vVar1, iVar2, 1, joaat("weapon_airstrike_rocket"), unk_0x47BA76CE3C825A08(Local_238.f_2.f_3), 1, 0, -1f, unk_0xFC1458A37D98B502(), 1, 0, 0, 0, 0, 0);
					func_10(&(Local_238.f_51), 0, 0);
					unk_0x872F1C1F8587CCC7(&iLocal_237, Local_238.f_50);
				}
			}
			else if (func_9(&(Local_238.f_51), 500, 0))
			{
				func_13(&(Local_238.f_51));
				Local_238.f_50++;
			}
			break;
		
		case 7:
			if (!func_11(&(Local_238.f_51)))
			{
				if (!unk_0xC80D31E4B587871C(iLocal_237, Local_238.f_50))
				{
					vVar0 = { Local_240[unk_0x622FF3AE4B1D07C3() /*5*/].f_2 + Vector(0f, -10f, -10f) };
					vVar0.z = vLocal_61.z;
					vVar1 = { Local_240[unk_0x622FF3AE4B1D07C3() /*5*/].f_2 + Vector(0f, -10f, -10f) };
					vVar1 = { vVar1 + Vector(0f, 0,1f, 0,1f) };
					unk_0x7367FB97975F1E29(vVar1 + Vector(10f, 0f, 0f), &(vVar1.f_2), 0, 0);
					vVar1.z = (vVar1.z - 25f);
					unk_0x05AC8E29B1D3F768(vVar0, vVar1, iVar2, 1, joaat("weapon_airstrike_rocket"), unk_0x47BA76CE3C825A08(Local_238.f_2.f_3), 1, 0, -1f, unk_0xFC1458A37D98B502(), 1, 0, 0, 0, 0, 0);
					func_10(&(Local_238.f_51), 0, 0);
					unk_0x872F1C1F8587CCC7(&iLocal_237, Local_238.f_50);
				}
			}
			else if (func_9(&(Local_238.f_51), 500, 0))
			{
				func_13(&(Local_238.f_51));
				Local_238.f_50++;
			}
			break;
		
		case 8:
			if (!func_11(&(Local_238.f_51)))
			{
				if (!unk_0xC80D31E4B587871C(iLocal_237, Local_238.f_50))
				{
					vVar0 = { Local_240[unk_0x622FF3AE4B1D07C3() /*5*/].f_2 + Vector(0f, 10f, -10f) };
					vVar0.z = vLocal_61.z;
					vVar1 = { Local_240[unk_0x622FF3AE4B1D07C3() /*5*/].f_2 + Vector(0f, 10f, -10f) };
					vVar1 = { vVar1 + Vector(0f, 0,1f, 0,1f) };
					unk_0x7367FB97975F1E29(vVar1 + Vector(10f, 0f, 0f), &(vVar1.f_2), 0, 0);
					vVar1.z = (vVar1.z - 25f);
					unk_0x05AC8E29B1D3F768(vVar0, vVar1, iVar2, 1, joaat("weapon_airstrike_rocket"), unk_0x47BA76CE3C825A08(Local_238.f_2.f_3), 1, 0, -1f, unk_0xFC1458A37D98B502(), 1, 0, 0, 0, 0, 0);
					func_10(&(Local_238.f_51), 0, 0);
					unk_0x872F1C1F8587CCC7(&iLocal_237, Local_238.f_50);
				}
			}
			else if (func_9(&(Local_238.f_51), 500, 0))
			{
				func_13(&(Local_238.f_51));
				Local_238.f_50++;
			}
			break;
		
		case 9:
			if (!func_11(&(Local_238.f_51)))
			{
				if (!unk_0xC80D31E4B587871C(iLocal_237, Local_238.f_50))
				{
					vVar0 = { Local_240[unk_0x622FF3AE4B1D07C3() /*5*/].f_2 + Vector(0f, -10f, 10f) };
					vVar0.z = vLocal_61.z;
					vVar1 = { Local_240[unk_0x622FF3AE4B1D07C3() /*5*/].f_2 + Vector(0f, -10f, 10f) };
					vVar1 = { vVar1 + Vector(0f, 0,1f, 0,1f) };
					unk_0x7367FB97975F1E29(vVar1 + Vector(10f, 0f, 0f), &(vVar1.f_2), 0, 0);
					vVar1.z = (vVar1.z - 25f);
					unk_0x05AC8E29B1D3F768(vVar0, vVar1, iVar2, 1, joaat("weapon_airstrike_rocket"), unk_0x47BA76CE3C825A08(Local_238.f_2.f_3), 1, 0, -1f, unk_0xFC1458A37D98B502(), 1, 0, 0, 0, 0, 0);
					Local_238.f_50++;
					iLocal_57 = 0;
					unk_0x872F1C1F8587CCC7(&iLocal_237, Local_238.f_50);
				}
			}
			break;
	}
}

void func_13(var uParam0)//Position - 0xD81
{
	uParam0->f_1 = 0;
}

int func_14(var uParam0)//Position - 0xD8E
{
	if (unk_0x93C304998B457C45(uParam0))
	{
		return !func_15(unk_0xF32FBF2453AC1753(uParam0));
	}
	return 0;
}

int func_15(int iParam0)//Position - 0xDAE
{
	if (unk_0x6ADD12BF4D6D2587(iParam0))
	{
		if (unk_0x191BE1BC8F26F3C1(iParam0, 0))
		{
			return 1;
		}
		else if (!unk_0xB8DE76287EDC4957(iParam0, 0))
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_16(vector3 vParam0)//Position - 0xDE7
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

void func_17()//Position - 0xE11
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar2;
	int iVar3;
	int iVar4;
	
	if (func_14(Local_238.f_2))
	{
		iVar0 = unk_0xF32FBF2453AC1753(Local_238.f_2);
		vVar2 = { unk_0xB3328BA8976B416C(iVar0, 1) };
	}
	if (!iLocal_59)
	{
		if (!func_16(Local_240[unk_0x622FF3AE4B1D07C3() /*5*/].f_2))
		{
			vVar1 = { Local_240[unk_0x622FF3AE4B1D07C3() /*5*/].f_2 };
		}
		else if (func_23(unk_0x9EB17624F44A8DA4(), 1, 1))
		{
			vVar1 = { unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1) };
		}
	}
	if (bLocal_58)
	{
		if (!iLocal_59)
		{
			if (func_14(Local_238.f_2))
			{
				if (!unk_0x0C88267282FD588F(iVar0, vLocal_60, 75f, 75f, 1000f, 0, 1, 0))
				{
					fLocal_62 = unk_0xBE3C4023003180FC(vVar2, vVar1, 0);
				}
				else
				{
					iLocal_59 = 1;
				}
			}
			else
			{
				iLocal_59 = 1;
			}
		}
		else
		{
			fLocal_62 = (fLocal_62 - 3,75f);
		}
		iVar3 = system::floor(fLocal_62);
		if (fLocal_62 <= 200f)
		{
			iVar4 = 6;
		}
		else
		{
			iVar4 = 1;
		}
		if (fLocal_62 >= 0f)
		{
			func_18(iVar3, "AIRSTRIKE_2", -1, iVar4, 2, 0, "AIRSTRIKE_6", 0, 0f, 0, 0, iVar4, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1);
		}
	}
}

void func_18(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24)//Position - 0xF28
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_22(6, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1359035.f_1 = 1;
		func_21(6, iVar0);
		Global_1359035.f_3770[iVar0] = iParam0;
		StringCopy(&(Global_1359035.f_3770.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1359035.f_3770.f_183[iVar0] = iParam3;
		Global_1359035.f_3770.f_172[iVar0] = iParam2;
		Global_1359035.f_3770.f_260[iVar0] = iParam4;
		Global_1359035.f_3770.f_271[iVar0] = iParam5;
		StringCopy(&(Global_1359035.f_3770.f_282[iVar0 /*16*/]), sParam6, 64);
		Global_1359035.f_3770.f_443[iVar0] = iParam7;
		Global_1359035.f_3770.f_454[iVar0] = fParam8;
		Global_1359035.f_3770.f_497[iVar0] = iParam9;
		Global_1359035.f_3770.f_508[iVar0] = iParam10;
		Global_1359035.f_3770.f_205[iVar0] = iParam11;
		Global_1359035.f_3770.f_216[iVar0] = iParam12;
		Global_1359035.f_3770.f_227[iVar0] = iParam13;
		Global_1359035.f_3770.f_238[iVar0] = iParam14;
		Global_1359035.f_3770.f_249[iVar0] = iParam15;
		Global_1359035.f_3770.f_519[iVar0] = iParam16;
		Global_1359035.f_3770.f_530[iVar0] = iParam17;
		Global_1359035.f_3770.f_541[iVar0] = iParam18;
		Global_1359035.f_3770.f_552[iVar0] = iParam19;
		Global_1359035.f_3770.f_563[iVar0] = iParam20;
		Global_1359035.f_3770.f_574[iVar0] = iParam21;
		Global_1359035.f_3770.f_585[iVar0] = iParam22;
		Global_1359035.f_3770.f_596[iVar0] = iParam23;
		Global_1359035.f_3770.f_607[iVar0] = iParam24;
		if (iParam15 == 5 && func_20())
		{
			Global_1359035.f_1088 = 1;
		}
		if (unk_0xB9D80B12FE4456A5())
		{
			iVar2 = 0;
			unk_0x5113D2C928A121B2(&iVar3, &iVar4);
			if (iVar3 == 1280 && iVar4 >= 960)
			{
				iVar2 = 1;
			}
			if (iParam0 > 99999999)
			{
				Global_1359035.f_1092 = 1;
			}
			else if (iParam0 > 9999999 || iVar2)
			{
				Global_1359035.f_1091 = 1;
			}
			else if (iParam0 > 999)
			{
				Global_1359035.f_1088 = 1;
			}
			if (func_19())
			{
				Global_1359035.f_1092 = 1;
			}
		}
	}
}

int func_19()//Position - 0x118A
{
	int iVar0;
	var uVar1;
	
	if (unk_0xB9D80B12FE4456A5())
	{
		unk_0x5113D2C928A121B2(&iVar0, &uVar1);
		if (iVar0 <= 1024)
		{
			return 1;
		}
	}
	return 0;
}

int func_20()//Position - 0x11AE
{
	if (((unk_0xC45D692E0BD4797B() == 8 || unk_0xC45D692E0BD4797B() == 9) || unk_0xC45D692E0BD4797B() == 10) || unk_0xC45D692E0BD4797B() == 12)
	{
		return 1;
	}
	return 0;
}

void func_21(int iParam0, int iParam1)//Position - 0x11EC
{
	unk_0x872F1C1F8587CCC7(&(Global_1359035.f_6119[iParam0]), iParam1);
}

bool func_22(int iParam0, int iParam1)//Position - 0x1205
{
	return unk_0xC80D31E4B587871C(Global_1359035.f_6119[iParam0], iParam1);
}

int func_23(int iParam0, bool bParam1, bool bParam2)//Position - 0x121E
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0x552F39AE86E07792(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0x5BEF7A5AB8F17255(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2436181.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

void func_24()//Position - 0x1268
{
}

void func_25()//Position - 0x1270
{
	vector3 vVar0;
	bool bVar1;
	
	func_82();
	if (unk_0x6ADD12BF4D6D2587(unk_0xFC1458A37D98B502()))
	{
		if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
		{
			if (!iLocal_56)
			{
				if (unk_0x8F38E94BBF3404CD(joaat("cellphone_flashhand")) <= 0)
				{
					bVar1 = !func_81();
					unk_0x9E058151726E58DE(unk_0xFC1458A37D98B502(), joaat("weapon_flare"), 1, bVar1, bVar1);
					unk_0x385A213BEB355C2B(unk_0xFC1458A37D98B502(), joaat("weapon_flare"), bVar1);
					iLocal_56 = 1;
				}
			}
			else if (unk_0xC492DC1BED3ED556(unk_0xFC1458A37D98B502(), joaat("weapon_flare"), 100f, &(Local_240[unk_0x622FF3AE4B1D07C3() /*5*/].f_2), 1))
			{
				if (func_80(Local_240[unk_0x622FF3AE4B1D07C3() /*5*/].f_2, 0f, 0f, 0f, 0))
				{
					Local_240[unk_0x622FF3AE4B1D07C3() /*5*/].f_2 = { vVar0 };
				}
				if (func_7("AIRSTRIKE_1"))
				{
					unk_0x3E80C2F7BC665259(1);
				}
				if (!iLocal_55)
				{
					if (!func_79(Local_238.f_2.f_3))
					{
						if (func_14(Local_238.f_2))
						{
							func_78();
							unk_0xB8E08BD5B184DF4E(unk_0x47BA76CE3C825A08(Local_238.f_2.f_3));
							unk_0xAB30B1CF01A198C1(unk_0x47BA76CE3C825A08(Local_238.f_2.f_3), uLocal_49);
							unk_0x23C906EF22FD3A29(unk_0xF32FBF2453AC1753(Local_238.f_2), system::round(50f));
							iLocal_55 = 1;
						}
					}
				}
			}
			else if (!iLocal_54)
			{
				if (!unk_0xF491DD47B88AA84E())
				{
					if (func_77(unk_0xFC1458A37D98B502()))
					{
						func_6("AIRSTRIKE_4", -1);
					}
					else
					{
						func_6("AIRSTRIKE_1", -1);
					}
					iLocal_54 = 1;
				}
			}
		}
	}
	func_49();
	func_26();
}

void func_26()//Position - 0x13BF
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	
	switch (Local_238.f_2.f_2)
	{
		case 0:
			func_48();
			break;
		
		case 1:
			func_48();
			break;
		
		case 2:
			if (func_14(Local_238.f_2))
			{
				bLocal_58 = true;
				iVar0 = unk_0xF32FBF2453AC1753(Local_238.f_2);
				if (!unk_0xA6DECE14FC9A8C51(iLocal_47))
				{
					iLocal_47 = unk_0xCA43F0FC44D9B846(iVar0);
					unk_0x4B4040A0EC7DBA81(iLocal_47, 16);
					unk_0x62BD54E491535B76(iLocal_47, "AIRSTRIKE_5");
					unk_0x9C27373CC69ECF87(iLocal_47, 0);
				}
				else
				{
					unk_0xE83839908A240D2E(iLocal_47, system::ceil(unk_0xF0371FE6E2BF9599(iVar0)));
				}
				if (!iLocal_53)
				{
					if (!func_16(Local_240[unk_0x622FF3AE4B1D07C3() /*5*/].f_2))
					{
						vVar3 = { Local_240[unk_0x622FF3AE4B1D07C3() /*5*/].f_2 };
					}
					else
					{
						vVar3 = { vLocal_60 };
					}
					if (unk_0xBE3C4023003180FC(vVar3, unk_0xB3328BA8976B416C(iVar0, 1), 1) <= (60f * 5f))
					{
						unk_0x0B4A780BA5AD6575(unk_0xF32FBF2453AC1753(Local_238.f_2));
						iLocal_53 = 1;
					}
				}
				if (!iLocal_235)
				{
					if (!Local_238.f_54)
					{
						if (!func_79(Local_238.f_2.f_3))
						{
							if (!func_16(Local_240[unk_0x622FF3AE4B1D07C3() /*5*/].f_2))
							{
								if (unk_0xBE3C4023003180FC(func_47(unk_0x9EB17624F44A8DA4()), unk_0xB3328BA8976B416C(unk_0xF32FBF2453AC1753(Local_238.f_2.f_3), 1), 0) <= 250f)
								{
									if (unk_0xBE3C4023003180FC(vVar3, unk_0xB3328BA8976B416C(iVar0, 1), 1) >= (60f * 2,5f))
									{
										func_30(&uLocal_69, "CT_AUD", "MPCT_ASarr", 12, 0, 0, 0);
										iLocal_235 = 1;
									}
								}
							}
						}
					}
				}
				if (Local_238.f_50 < 10)
				{
					if (!Local_238.f_53)
					{
						if (!func_16(Local_240[unk_0x622FF3AE4B1D07C3() /*5*/].f_2))
						{
							if (func_29() == 2)
							{
								if (!func_11(&uLocal_63))
								{
									func_10(&uLocal_63, 0, 0);
								}
								else if (func_9(&uLocal_63, 7500, 0))
								{
									Local_238.f_53 = 1;
								}
								vVar1 = { Local_240[unk_0x622FF3AE4B1D07C3() /*5*/].f_2 - Vector(1000f, 25f, 25f) };
								vVar2 = { Local_240[unk_0x622FF3AE4B1D07C3() /*5*/].f_2 + Vector(1000f, 25f, 25f) };
								vVar1.z = -200f;
								vVar2.z = 1500f;
								if (unk_0x0C88267282FD588F(iVar0, Local_240[unk_0x622FF3AE4B1D07C3() /*5*/].f_2, 75f, 75f, 1000f, 0, 1, 0) && unk_0xAB0762B9CCAA2B6F(vVar1, vVar2, joaat("weapon_flare"), 0))
								{
									Local_238.f_53 = 1;
								}
							}
							else if (func_29() == 1)
							{
								Local_238.f_53 = 1;
								Local_238.f_50 = 100;
							}
						}
						else if (unk_0x0C88267282FD588F(iVar0, vLocal_60, 75f, 75f, 1000f, 0, 1, 0))
						{
							Local_238.f_53 = 1;
							Local_238.f_50 = 100;
							Local_238.f_54 = 1;
							if (!iLocal_236)
							{
								func_30(&uLocal_69, "CT_AUD", "MPCT_ASflr", 12, 0, 0, 0);
								iLocal_236 = 1;
							}
						}
					}
				}
			}
			if (!func_14(Local_238.f_2) || func_79(Local_238.f_2.f_3))
			{
				func_27();
			}
			break;
		
		case 3:
			func_48();
			break;
	}
}

void func_27()//Position - 0x16B2
{
	int iVar0;
	
	if (!func_79(Local_238.f_2.f_3))
	{
		if (func_28(Local_238.f_2.f_3))
		{
			if (unk_0xE53FD7AF7F25C0A8(Local_238.f_2.f_3))
			{
				iVar0 = unk_0x47BA76CE3C825A08(Local_238.f_2.f_3);
				unk_0xE01CE1EBCD7EE551(iVar0, 0, 0);
			}
		}
	}
}

int func_28(var uParam0)//Position - 0x16F6
{
	if (unk_0x0070DE1A1E73C71C(uParam0))
	{
		return 1;
	}
	if (unk_0x8E1421E2A2A2FBD4())
	{
		unk_0x04092215B40E1262(uParam0);
	}
	return 0;
}

int func_29()//Position - 0x171A
{
	if (Local_238.f_55 == 1)
	{
		return Local_238.f_55;
	}
	else if (Local_238.f_55 == 2)
	{
		return Local_238.f_55;
	}
	if (!unk_0xD42907FA80A6F327(Local_240[unk_0x622FF3AE4B1D07C3() /*5*/].f_2 + Vector(0,5f, 0f, 0f)))
	{
		Local_238.f_55 = 1;
		return Local_238.f_55;
	}
	Local_238.f_55 = 2;
	return Local_238.f_55;
}

int func_30(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x1775
{
	func_46(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	Global_2621441 = 1;
	return func_31(sParam2, iParam3, 0);
}

int func_31(char* sParam0, int iParam1, bool bParam2)//Position - 0x17C3
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
					func_45();
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
		if (func_44(8, -1))
		{
			return 0;
		}
		Global_15832 = { Global_15826 };
		func_43();
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
				func_36();
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
				if (func_35())
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
			if (func_34())
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
			func_33();
			Global_15766 = bParam2;
		}
		Global_15758 = iParam1;
		StringCopy(&Global_15375, sParam0, 24);
		Global_14622 = 0;
		func_32();
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
		func_45();
	}
	return 0;
}

void func_32()//Position - 0x1A8F
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

void func_33()//Position - 0x1AC0
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

int func_34()//Position - 0x1B55
{
	if (Global_14453.f_1 == 1 || Global_14453.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_35()//Position - 0x1B7C
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

void func_36()//Position - 0x1C15
{
	if (func_42(14))
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
		Global_14453 = func_37();
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

var func_37()//Position - 0x1CB7
{
	func_38();
	return Global_104555.f_2353.f_539.f_4301;
}

void func_38()//Position - 0x1CD0
{
	int iVar0;
	
	if (unk_0x6ADD12BF4D6D2587(unk_0xFC1458A37D98B502()))
	{
		if (func_41(Global_104555.f_2353.f_539.f_4301) != unk_0x82FF3DFBC3965CC0(unk_0xFC1458A37D98B502()))
		{
			iVar0 = func_40(unk_0xFC1458A37D98B502());
			if (func_39(iVar0) && (!func_42(14) || Global_103506))
			{
				if (Global_104555.f_2353.f_539.f_4301 != iVar0 && func_39(Global_104555.f_2353.f_539.f_4301))
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

bool func_39(int iParam0)//Position - 0x1DCD
{
	return iParam0 < 3;
}

int func_40(int iParam0)//Position - 0x1DD9
{
	int iVar0;
	int iVar1;
	
	if (unk_0x6ADD12BF4D6D2587(iParam0))
	{
		iVar1 = unk_0x82FF3DFBC3965CC0(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_41(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_41(int iParam0)//Position - 0x1E16
{
	if (func_39(iParam0))
	{
		return Global_104555.f_28020[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_42(int iParam0)//Position - 0x1E40
{
	return Global_35861 == iParam0;
}

void func_43()//Position - 0x1E4E
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

bool func_44(int iParam0, int iParam1)//Position - 0x1EA5
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

void func_45()//Position - 0x1EE0
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

void func_46(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)//Position - 0x1F37
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

Vector3 func_47(int iParam0)//Position - 0x1F8D
{
	return unk_0xB3328BA8976B416C(unk_0x25D049AAC4603E65(iParam0), 0);
}

void func_48()//Position - 0x1FA0
{
	if (unk_0xA6DECE14FC9A8C51(iLocal_47))
	{
		unk_0xE30CF11C0EE14316(&iLocal_47);
	}
}

void func_49()//Position - 0x1FB7
{
	switch (Local_238.f_2.f_2)
	{
		case 0:
			func_76(1);
			break;
		
		case 1:
			if (func_50())
			{
				func_76(2);
			}
			break;
		
		case 2:
			if (!func_14(Local_238.f_2))
			{
				if (func_79(Local_238.f_2.f_3))
				{
					func_76(3);
				}
			}
			else if (func_79(Local_238.f_2.f_3))
			{
				func_76(3);
			}
			break;
		
		case 3:
			break;
	}
}

int func_50()//Position - 0x2032
{
	if (!func_11(&uLocal_67))
	{
		func_10(&uLocal_67, 0, 0);
	}
	else if (func_75(Local_238.f_2.f_1) && func_75(Local_238.f_2.f_3.f_1))
	{
		if (func_9(&uLocal_67, 3000, 0))
		{
			if (func_54() && func_51())
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_51()//Position - 0x208F
{
	if ((!unk_0x93C304998B457C45(Local_238.f_2.f_3) && func_75(Local_238.f_2.f_3.f_1)) && unk_0x93C304998B457C45(Local_238.f_2))
	{
		if (func_14(Local_238.f_2))
		{
			if (func_53(&(Local_238.f_2.f_3), Local_238.f_2, 22, Local_238.f_2.f_3.f_1, -1, 1, 1, 1))
			{
				unk_0x771A86309E0CA47B(unk_0x47BA76CE3C825A08(Local_238.f_2.f_3), 1);
				unk_0xCE93FCB8A8D8DF0B(unk_0x47BA76CE3C825A08(Local_238.f_2.f_3), Global_1574758);
				unk_0x230697B667C63948(unk_0x47BA76CE3C825A08(Local_238.f_2.f_3), 0);
				unk_0xE9B3D12A64CC7C1A(unk_0x47BA76CE3C825A08(Local_238.f_2.f_3), 1);
				func_52();
				unk_0xAB30B1CF01A198C1(unk_0x47BA76CE3C825A08(Local_238.f_2.f_3), uLocal_48);
				unk_0x23C906EF22FD3A29(unk_0xF32FBF2453AC1753(Local_238.f_2), system::round(50f));
			}
		}
	}
	if (!unk_0x93C304998B457C45(Local_238.f_2.f_3))
	{
		return 0;
	}
	unk_0x14776E43F90DD454(Local_238.f_2.f_3.f_1);
	return 1;
}

void func_52()//Position - 0x2174
{
	if (!iLocal_50)
	{
		if (func_14(Local_238.f_2))
		{
			unk_0x6931076730A4AC5D(&uLocal_48);
			unk_0x1A7A03CE00E217F2(0, unk_0xF32FBF2453AC1753(Local_238.f_2), 0, 0, vLocal_60 + Vector((50f + 5f), 0f, 0f), 4, 60f, 15f, -1f, system::ceil((50f + 5f)), 20, 1);
			unk_0x1A7A03CE00E217F2(0, unk_0xF32FBF2453AC1753(Local_238.f_2), 0, 0, Local_238.f_2.f_14, 4, 60f, 25f, -1f, system::ceil((50f + 5f)), 20, 1);
			unk_0x1B16DD5C115FE009(uLocal_48);
			iLocal_50 = 1;
		}
	}
}

int func_53(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7)//Position - 0x2204
{
	if (!unk_0x7A419CA188B4A665(1))
	{
		return 0;
	}
	if (!unk_0x93C304998B457C45(uParam1))
	{
		return 0;
	}
	if (!unk_0xB8DE76287EDC4957(unk_0xF32FBF2453AC1753(uParam1), 0))
	{
		return 0;
	}
	*uParam0 = unk_0xABF6E3937F555048(unk_0x00D1A9572426E8DD(unk_0xF32FBF2453AC1753(uParam1), iParam2, iParam3, iParam4, iParam6, bParam5));
	if (unk_0x93C304998B457C45(*uParam0))
	{
		unk_0xFBA991D3A851E195(unk_0x47BA76CE3C825A08(*uParam0), iParam7);
		if (unk_0x0D4BF24EE51A419A(unk_0x47BA76CE3C825A08(*uParam0)))
		{
			if (bParam5)
			{
				unk_0x9CE66BFF230839CE(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

int func_54()//Position - 0x228C
{
	vector3 vVar0;
	float fVar1;
	
	if (!unk_0x93C304998B457C45(Local_238.f_2))
	{
		if (func_75(Local_238.f_2.f_1))
		{
			if (unk_0x8028488F650E6677("AIRSTRIKE_FLYOVER", 0))
			{
				func_71(&vVar0, &fVar1);
				if (func_56(vVar0, 6f, 1f, 1f, 5f, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
				{
					if (func_55(&(Local_238.f_2), Local_238.f_2.f_1, vVar0, fVar1, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
					{
						Local_238.f_2.f_14 = { vVar0 * Vector(0f, -1f, -1f) };
						unk_0x4BEFCD5DAE410A90(unk_0xF32FBF2453AC1753(Local_238.f_2), 2);
						unk_0xEDC33A771FAEB393(unk_0xF32FBF2453AC1753(Local_238.f_2), false);
						unk_0x42B3DBD52AED7B7D(unk_0xF32FBF2453AC1753(Local_238.f_2), 1);
						unk_0x764B52EA8B8FFFA3(unk_0xF32FBF2453AC1753(Local_238.f_2));
						unk_0xFB2E9855F95E3BD3(unk_0xF32FBF2453AC1753(Local_238.f_2), 60f);
						unk_0xA15269351F50F113(unk_0xF32FBF2453AC1753(Local_238.f_2), 1, 1, 0);
						unk_0x5ADBCA6519416DD6(unk_0xF32FBF2453AC1753(Local_238.f_2), 1000);
						unk_0xFBA991D3A851E195(unk_0xF32FBF2453AC1753(Local_238.f_2), 0);
						unk_0x39748EEC52404AFA(unk_0xF32FBF2453AC1753(Local_238.f_2), 3);
						unk_0xE8F6B4FEEC285633(unk_0xF32FBF2453AC1753(Local_238.f_2));
						unk_0x14776E43F90DD454(Local_238.f_2.f_1);
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_55(var uParam0, int iParam1, vector3 vParam2, float fParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, bool bParam13)//Position - 0x23AA
{
	float fVar0;
	int iVar1;
	
	if (!unk_0x3B0047CED068C463(iParam1))
	{
		return 0;
	}
	if (!unk_0x49DB840E3FC89FEE(1))
	{
		return 0;
	}
	fVar0 = 1,5f;
	if (iParam1 == -32878452)
	{
		fVar0 = 20f;
	}
	if (bParam9)
	{
		unk_0x9B8406983378711E(vParam2, fVar0, 0, 0, 0, 0, false, 0);
	}
	iVar1 = unk_0xEA60F3B426BB095B(iParam1, vParam2, fParam3, iParam5, iParam4, iParam12);
	if (unk_0x6ADD12BF4D6D2587(iVar1))
	{
		*uParam0 = unk_0x278BFDB9CDC5B182(iVar1);
		Global_2512808.f_5827 = iVar1;
		if (unk_0x93C304998B457C45(*uParam0))
		{
			if (bParam13)
			{
				unk_0xB2CBFA871D3387B6(iVar1, 1);
			}
			unk_0xFBA991D3A851E195(iVar1, iParam8);
			if (unk_0x0D4BF24EE51A419A(iVar1))
			{
				if (bParam6)
				{
					unk_0x9CE66BFF230839CE(*uParam0, 1);
				}
				else
				{
					unk_0x9CE66BFF230839CE(*uParam0, 0);
				}
				if (bParam11)
				{
					unk_0xB8D999BCBD1CD195(*uParam0, unk_0x9EB17624F44A8DA4(), 1);
				}
			}
			unk_0xD2557AC67FBCFB9D(iVar1, bParam7);
			unk_0xB2B20F580CFB38F4(iVar1, 1);
			if (bParam10)
			{
				unk_0x27344352C09F0519(iVar1);
				unk_0x30C37143C720F2AA(iVar1, 5, 5, 1f);
			}
			return 1;
		}
	}
	return 0;
}

int func_56(vector3 vParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, bool bParam6, int iParam7, float fParam8, bool bParam9, int iParam10, bool bParam11, float fParam12, bool bParam13, float fParam14, bool bParam15, int iParam16)//Position - 0x24A4
{
	Global_2405047.f_2 = 0;
	if (fParam1 > 0f)
	{
		if (unk_0x717FFCE23DE4C8C8(vParam0, fParam1))
		{
			return 0;
		}
	}
	if (fParam2 > 0f)
	{
		if (unk_0x0D3330EAF6340496(vParam0.x, vParam0.y, (vParam0.z + 1f), fParam2) || unk_0x0D3330EAF6340496(vParam0, fParam2))
		{
			return 0;
		}
	}
	if (fParam3 > 0f)
	{
		if (unk_0x83A4DE08E23A2F1F(vParam0, fParam3, iParam16))
		{
			return 0;
		}
	}
	Global_2405047.f_2++;
	if (bParam11)
	{
		if (unk_0xAA0BDFF32B6BC02A(vParam0, 2,5f) > 0)
		{
			return 0;
		}
	}
	Global_2405047.f_2++;
	if (fParam12 > 0f)
	{
		if (func_64(vParam0, fParam12, 1, 1, bParam13, bParam15, bParam9, bParam13))
		{
			return 0;
		}
	}
	Global_2405047.f_2++;
	if (bParam6)
	{
		if (fParam4 > 0f)
		{
			if (func_57(vParam0, fParam4, iParam5, iParam7, fParam8, bParam9, iParam10, fParam14, bParam15))
			{
				return 0;
			}
		}
	}
	Global_2405047.f_2++;
	return 1;
}

int func_57(vector3 vParam0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6, float fParam7, bool bParam8)//Position - 0x25B5
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam2 && !bParam5)
	{
		if (func_23(unk_0x9EB17624F44A8DA4(), 1, 1))
		{
			if (!unk_0x3E9CABD07B829173())
			{
				fVar2 = fParam4;
				if (fParam7 > 0f)
				{
					fVar2 = fParam7;
				}
				if (unk_0xBE3C4023003180FC(func_62(unk_0x9EB17624F44A8DA4()), vParam0, 1) <= (fVar2 + fParam1))
				{
					if (unk_0x9E06F0EE20F58CED(vParam0, fParam1))
					{
						return 1;
					}
				}
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (func_23(iVar1, 1, 1))
		{
			if (!func_59(iVar1, 0) && unk_0xEF6677A51D3956A4(unk_0x9EB17624F44A8DA4(), iVar1))
			{
				if (iParam2 == 1 || (iParam2 == 0 && iVar1 != unk_0x9EB17624F44A8DA4()))
				{
					if ((func_58(iVar1) || !bParam8) && !Global_2422736[iVar1 /*420*/].f_274)
					{
						fVar2 = fParam4;
						if (fParam7 > 0f)
						{
							if (!unk_0x917EE18109C5ACEA(iVar1) == -1)
							{
								if (unk_0x917EE18109C5ACEA(iVar1) == unk_0x917EE18109C5ACEA(unk_0x9EB17624F44A8DA4()))
								{
									fVar2 = fParam7;
								}
							}
						}
						if (!bParam5)
						{
							if ((iParam3 || (iParam3 == 0 && unk_0x917EE18109C5ACEA(iVar1) != unk_0x917EE18109C5ACEA(unk_0x9EB17624F44A8DA4()))) || unk_0x917EE18109C5ACEA(iVar1) == -1)
							{
								if (unk_0xBE3C4023003180FC(func_62(iVar1), vParam0, 1) <= (fVar2 + fParam1))
								{
									if (unk_0x10D876445A75F2DC(iVar1, vParam0, fParam1))
									{
										return 1;
									}
								}
							}
						}
						else if (unk_0x917EE18109C5ACEA(iVar1) != iParam6 || unk_0x917EE18109C5ACEA(iVar1) == -1)
						{
							if (unk_0xBE3C4023003180FC(func_62(iVar1), vParam0, 1) <= (fVar2 + fParam1))
							{
								if (unk_0x10D876445A75F2DC(iVar1, vParam0, fParam1))
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_58(int iParam0)//Position - 0x276D
{
	if (unk_0xCF308053A6212001(unk_0x25D049AAC4603E65(iParam0)) || Global_2422736[iParam0 /*420*/].f_260)
	{
		return 1;
	}
	return 0;
}

bool func_59(int iParam0, int iParam1)//Position - 0x2799
{
	bool bVar0;
	
	if (iParam0 == unk_0x9EB17624F44A8DA4())
	{
		bVar0 = func_60(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1595693[iParam0 /*680*/].f_211 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x552F39AE86E07792(iParam0))
		{
			bVar0 = unk_0x917EE18109C5ACEA(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_60(int iParam0, bool bParam1)//Position - 0x27E4
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_61();
	}
	if (Global_1312834[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312730[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_61()//Position - 0x2825
{
	return Global_1312736;
}

Vector3 func_62(int iParam0)//Position - 0x2831
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((func_63() && Global_1595693[iVar0 /*680*/].f_673) && !func_16(Global_1595693[iVar0 /*680*/].f_674))
	{
		return Global_1595693[iVar0 /*680*/].f_674;
	}
	return func_47(iParam0);
}

var func_63()//Position - 0x2884
{
	return Global_2447174.f_16;
}

int func_64(vector3 vParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, var uParam7)//Position - 0x2892
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam6 == 1 && unk_0x9EB17624F44A8DA4() != iVar1) || iParam6 == 0)
		{
			if (func_23(iVar1, bParam2, bParam3))
			{
				if (unk_0xEF6677A51D3956A4(unk_0x9EB17624F44A8DA4(), iVar1))
				{
					if (!bParam5 || (!unk_0x3AB6A1A9084FB0A4(unk_0x25D049AAC4603E65(iVar1)) && func_58(iVar1)))
					{
						if ((!bParam4 || (bParam4 == 1 && unk_0x917EE18109C5ACEA(unk_0x9EB17624F44A8DA4()) != unk_0x917EE18109C5ACEA(iVar1))) || unk_0x917EE18109C5ACEA(unk_0x9EB17624F44A8DA4()) == -1)
						{
							if (((unk_0x917EE18109C5ACEA(unk_0x9EB17624F44A8DA4()) == -1 && uParam7) && bParam4) && func_65(iVar1))
							{
							}
							else if (unk_0x6ADD12BF4D6D2587(unk_0x25D049AAC4603E65(iVar1)))
							{
								if (unk_0xBE3C4023003180FC(func_47(iVar1), vParam0, 1) < fParam1)
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_65(int iParam0)//Position - 0x298E
{
	if (func_70(unk_0x9EB17624F44A8DA4(), iParam0))
	{
		return 1;
	}
	Global_2492157 = { func_69(iParam0) };
	if (unk_0xFFE9B6D8F03AC353(&Global_2492157))
	{
		return 1;
	}
	if (func_66(unk_0x9EB17624F44A8DA4(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_66(int iParam0, int iParam1)//Position - 0x29D5
{
	int iVar0;
	
	iVar0 = func_68(iParam0);
	if (!iVar0 == func_67())
	{
		if (iVar0 == func_68(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_67()//Position - 0x2A00
{
	return -1;
}

int func_68(int iParam0)//Position - 0x2A09
{
	if (iParam0 != func_67())
	{
		return Global_1627537[iParam0 /*532*/].f_11;
	}
	return func_67();
}

struct<13> func_69(int iParam0)//Position - 0x2A2C
{
	struct<13> Var0;
	
	unk_0x1D52B46CB20A5CF3(iParam0, &Var0, 13);
	return Var0;
}

int func_70(int iParam0, int iParam1)//Position - 0x2A43
{
	if (unk_0x15DBBAF9E2085C7A())
	{
		Global_2492157 = { func_69(iParam0) };
		Global_2492170 = { func_69(iParam1) };
		if (unk_0xA84F967541249268(&Global_2492157))
		{
			if (unk_0xA84F967541249268(&Global_2492170))
			{
				unk_0x5CF21D71A8C4CFA6(&Global_2492087, 35, &Global_2492157);
				unk_0x5CF21D71A8C4CFA6(&Global_2492122, 35, &Global_2492170);
				if (Global_2492087 == Global_2492122)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_71(var uParam0, var uParam1)//Position - 0x2AB0
{
	float fVar0;
	
	*uParam0 = { func_73(vLocal_60 + Vector(200f, 0f, 0f), 600f, 600f, (200f / 2f)) };
	fVar0 = unk_0x357310BDD94111AA((*uParam0 - 600f), (uParam0->f_1 - 600f), (*uParam0 + 600f), (uParam0->f_1 + 600f));
	if (uParam0->f_2 < fVar0)
	{
		uParam0->f_2 = fVar0;
	}
	*uParam1 = func_72(*uParam0, vLocal_60);
}

float func_72(struct<2> Param0, var uParam1, struct<2> Param2, var uParam3)//Position - 0x2B28
{
	return unk_0xA67DD8488EBA5F6D((Param2 - Param0), (Param2.f_1 - Param0.f_1));
}

Vector3 func_73(vector3 vParam0, float fParam1, float fParam2, float fParam3)//Position - 0x2B42
{
	vector3 vVar0;
	float fVar1;
	
	vVar0 = { unk_0x5B811202FCBE9E9D(-1f, 1f), unk_0x5B811202FCBE9E9D(-1f, 1f), 0f };
	fVar1 = (fParam3 / 2f);
	vVar0 = { func_74(vVar0, unk_0x5B811202FCBE9E9D(fParam1, fParam2)) };
	vVar0.z = unk_0x5B811202FCBE9E9D(-fVar1, fVar1);
	return vParam0 + vVar0;
}

Vector3 func_74(vector3 vParam0, float fParam1)//Position - 0x2B8B
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

bool func_75(int iParam0)//Position - 0x2BC2
{
	if (iParam0 == 0)
	{
		return 1;
	}
	unk_0x6FF834D85E2DD4C6(iParam0);
	return unk_0x9A0B2ED5055D3F0B(iParam0);
}

void func_76(int iParam0)//Position - 0x2BE0
{
	Local_238.f_2.f_2 = iParam0;
}

int func_77(int iParam0)//Position - 0x2BF0
{
	int iVar0;
	
	if (unk_0xFCB32314B66A3503(iParam0))
	{
		iVar0 = unk_0xDFD115BB10FE46A9(iParam0, 0);
		if (unk_0xB8DE76287EDC4957(iVar0, 0))
		{
			if (unk_0x317536BCEA8FA6B0(iVar0, -1, 0) == iParam0)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_78()//Position - 0x2C26
{
	if (!iLocal_51)
	{
		if (func_14(Local_238.f_2))
		{
			unk_0x6931076730A4AC5D(&uLocal_49);
			unk_0x1A7A03CE00E217F2(0, unk_0xF32FBF2453AC1753(Local_238.f_2), 0, 0, Local_240[unk_0x622FF3AE4B1D07C3() /*5*/].f_2 + Vector((50f + 5f), 0f, 0f), 4, 60f, 15f, -1f, system::ceil((50f + 5f)), 20, 1);
			unk_0x1A7A03CE00E217F2(0, unk_0xF32FBF2453AC1753(Local_238.f_2), 0, 0, Local_238.f_2.f_14, 4, 60f, 25f, -1f, system::ceil((50f + 5f)), 20, 1);
			unk_0x1B16DD5C115FE009(uLocal_49);
			iLocal_51 = 1;
		}
	}
}

int func_79(var uParam0)//Position - 0x2CBF
{
	if (unk_0x93C304998B457C45(uParam0))
	{
		return unk_0x3AB6A1A9084FB0A4(unk_0x47BA76CE3C825A08(uParam0));
	}
	return 1;
}

bool func_80(vector3 vParam0, vector3 vParam1, bool bParam2)//Position - 0x2CDE
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

bool func_81()//Position - 0x2D25
{
	return Global_92885.f_315 > 0;
}

void func_82()//Position - 0x2D36
{
	if (!iLocal_234)
	{
		if (!func_79(Local_238.f_2.f_3))
		{
			func_83(&uLocal_69, 3, unk_0x47BA76CE3C825A08(Local_238.f_2.f_3), "FM_Pilot_Air", 1, 1);
			iLocal_234 = 1;
		}
	}
}

void func_83(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x2D6B
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

int func_84()//Position - 0x2E06
{
	return Local_238;
}

int func_85(int iParam0)//Position - 0x2E10
{
	return Local_240[iParam0 /*5*/];
}

void func_86()//Position - 0x2E1F
{
}

void func_87()//Position - 0x2E27
{
	if (unk_0x93C304998B457C45(Local_238.f_2.f_3) && unk_0x93C304998B457C45(Local_238.f_2))
	{
		if (func_14(Local_238.f_2) && !func_79(Local_238.f_2.f_3))
		{
			unk_0x1A7A03CE00E217F2(unk_0x47BA76CE3C825A08(Local_238.f_2.f_3), unk_0xF32FBF2453AC1753(Local_238.f_2), 0, unk_0xFC1458A37D98B502(), 1f, 1f, 1f, 8, 60f, 1000f, -1f, 400, 400, 1);
		}
	}
	func_89(func_90(1, 1), 11, func_67());
	func_88();
}

void func_88()//Position - 0x2EAA
{
	unk_0x96A3D9A8A4C7AFD4();
}

void func_89(int iParam0, int iParam1, var uParam2)//Position - 0x2EB6
{
	struct<4> Var0;
	
	Var0 = -332158592;
	Var0.f_1 = unk_0x9EB17624F44A8DA4();
	Var0.f_3 = iParam1;
	Var0.f_2 = uParam2;
	if (!iParam0 == 0)
	{
		unk_0x5A26F0BDEE9F8260(1, &Var0, 6, iParam0);
	}
}

int func_90(int iParam0, bool bParam1)//Position - 0x2EEE
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = unk_0xF6A72924028F588B(iVar1);
		if (func_23(iVar2, 0, 0))
		{
			if (iVar2 != unk_0x9EB17624F44A8DA4() || iParam0)
			{
				if (bParam1)
				{
					unk_0x872F1C1F8587CCC7(&uVar0, iVar1);
				}
				else if (!func_59(iVar2, 0))
				{
					unk_0x872F1C1F8587CCC7(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_91()//Position - 0x2F53
{
	var uVar0;
	
	func_98(&uVar0);
	if (Global_1312831 == 0)
	{
		if (!unk_0x3A711520F83BAE98())
		{
			return 1;
		}
	}
	if (func_97())
	{
		return 1;
	}
	if (Global_2459061)
	{
		return 1;
	}
	if (func_96())
	{
		return 1;
	}
	if (func_95(157))
	{
		if (!func_94())
		{
			return 1;
		}
	}
	if (func_95(155))
	{
		return 1;
	}
	if (!unk_0xDEC0EB6EAE9BC575())
	{
		return 1;
	}
	if (func_92() != 0)
	{
		if (unk_0x8F38E94BBF3404CD(func_92()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_92()//Position - 0x2FDD
{
	switch (func_93())
	{
		case 0:
			return joaat("freemode");
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_93()//Position - 0x3011
{
	return Global_25233;
}

bool func_94()//Position - 0x301C
{
	return Global_2447174.f_586;
}

int func_95(int iParam0)//Position - 0x302B
{
	if (unk_0xDC2E57BF710DF393(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_96()//Position - 0x3042
{
	return Global_2456830;
}

bool func_97()//Position - 0x304E
{
	return Global_2447174.f_581;
}

void func_98(var uParam0)//Position - 0x305D
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	
	iVar0 = 0;
	while (iVar0 < unk_0xAAEEFEC091D0E30B(1))
	{
		iVar1 = unk_0xA387B84DA2EB1BEE(1, iVar0);
		if (iVar1 == 171)
		{
			unk_0x575EF325DA5E3F04(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case -1155637934:
					func_99(iVar0);
					break;
				
				case 1662227603:
					unk_0x575EF325DA5E3F04(1, iVar0, &vVar3, 4);
					if (vVar3.z == 1204917378)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_99(int iParam0)//Position - 0x30D0
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (unk_0x575EF325DA5E3F04(1, iParam0, &vVar0, 3))
	{
		if (func_23(vVar0.y, 1, 1))
		{
			iVar1 = unk_0x25D049AAC4603E65(vVar0.y);
			if (unk_0x6ADD12BF4D6D2587(iVar1))
			{
				if (unk_0x88DDBE9908752BF0(iVar1, 0))
				{
					iVar2 = unk_0xDFD115BB10FE46A9(iVar1, 0);
					if (unk_0x1FE6625767FB8CBF(iVar2, vVar0.z) && unk_0x8C504A60C2F379BD())
					{
						if (func_100(iVar2, &bVar3))
						{
							unk_0x38CCEC620E3BB265(iVar2, vVar0.z);
						}
						if (bVar3)
						{
							unk_0x5380482A432E314E(&iVar2);
						}
					}
				}
			}
		}
	}
}

int func_100(int iParam0, var uParam1)//Position - 0x3151
{
	if (unk_0x6ADD12BF4D6D2587(iParam0))
	{
		if (!unk_0x9761C10D57B68069(iParam0))
		{
			if (unk_0x828686E167EA3FD3(iParam0))
			{
				if (!unk_0x3C4FA7AE145B3F72(unk_0x82FF3DFBC3965CC0(iParam0)))
				{
					unk_0xDD29FF4BAB8AFF9C(iParam0, 0, 1);
					*uParam1 = 1;
				}
			}
		}
		if (unk_0xCB234F3DD6FF9368(iParam0, 0))
		{
			if (unk_0xA0BF73C5030D3F60(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_101()//Position - 0x31B0
{
	system::wait(0);
}

void func_102(struct<21> Param0)//Position - 0x31BD
{
	func_108(func_109(Param0), Param0);
	unk_0xBC60D873F181A18E(1);
	unk_0x7BC094E5B24A760D(1);
	func_106(0, -1, 0);
	unk_0x6E3ED3AE1C20445F(&Local_238, 58);
	unk_0xE7BC983D1386C9EE(&Local_240, 11);
	unk_0x941BE77305BB5695(0);
	if (!func_105())
	{
		func_87();
	}
	if (unk_0x6ADD12BF4D6D2587(unk_0xFC1458A37D98B502()))
	{
		vLocal_60 = { unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 0) };
	}
	if (func_3(unk_0x9EB17624F44A8DA4(), 1))
	{
		bLocal_52 = true;
	}
	func_103(64, 1);
	Local_240[unk_0x622FF3AE4B1D07C3() /*5*/] = 0;
}

void func_103(int iParam0, bool bParam1)//Position - 0x3240
{
	int iVar0;
	
	iVar0 = 0;
	if (bParam1)
	{
		iVar0 = -1;
	}
	switch (iParam0)
	{
		case 59:
			Global_2097152[func_104() /*12130*/].f_7676.f_19 = iVar0;
			break;
		
		case 19:
			Global_2097152[func_104() /*12130*/].f_7676.f_18 = iVar0;
			break;
		
		case 74:
			Global_2097152[func_104() /*12130*/].f_7676.f_12 = iVar0;
			break;
		
		case 29:
			Global_2097152[func_104() /*12130*/].f_7676.f_14 = iVar0;
			break;
		
		case 8:
			Global_2097152[func_104() /*12130*/].f_7676.f_15 = iVar0;
			break;
		
		case 31:
			Global_2097152[func_104() /*12130*/].f_7676.f_16 = iVar0;
			break;
		
		case 3:
			Global_2097152[func_104() /*12130*/].f_7676.f_20 = iVar0;
			break;
		
		case 6:
			Global_2097152[func_104() /*12130*/].f_7676.f_17 = iVar0;
			break;
		
		case 103:
		case 104:
		case 98:
		case 105:
			Global_2097152[func_104() /*12130*/].f_7676.f_23 = iVar0;
			break;
		
		case 76:
			Global_2097152[func_104() /*12130*/].f_7676.f_24 = iVar0;
			break;
		
		case 93:
			Global_2097152[func_104() /*12130*/].f_7676.f_25 = iVar0;
			break;
		
		case 61:
		case 62:
		case 63:
		case 64:
		case 77:
		case 81:
			Global_2097152[func_104() /*12130*/].f_7676.f_26 = iVar0;
			break;
		
		case 65:
		case 75:
		case 95:
			Global_2097152[func_104() /*12130*/].f_7676.f_27 = iVar0;
			break;
			break;
		
		case 97:
			Global_2097152[func_104() /*12130*/].f_7676.f_29 = iVar0;
			break;
		
		case 88:
			Global_2097152[func_104() /*12130*/].f_7676.f_28 = iVar0;
			break;
		
		case 100:
			Global_2097152[func_104() /*12130*/].f_7676.f_31 = iVar0;
			break;
		
		case 106:
			Global_2097152[func_104() /*12130*/].f_7676.f_32 = iVar0;
			break;
		
		case 99:
			Global_2097152[func_104() /*12130*/].f_7676.f_30 = iVar0;
			break;
	}
}

int func_104()//Position - 0x347F
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

int func_105()//Position - 0x348C
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!unk_0x3A711520F83BAE98())
		{
			return 0;
		}
		if (unk_0x6303B0CB83943C5E())
		{
			return 1;
		}
		if (func_97())
		{
			return 0;
		}
		if (func_95(155))
		{
			return 0;
		}
		if (iVar0 >= 3600)
		{
			return 0;
		}
		system::wait(0);
	}
	return 0;
}

int func_106(int iParam0, int iParam1, bool bParam2)//Position - 0x34E5
{
	int iVar0;
	
	iVar0 = unk_0x8A8E6DE54B880941();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_88();
			}
			else
			{
				return 0;
			}
		}
		if (!func_107())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x3A711520F83BAE98())
				{
					if (!bParam2)
					{
						func_88();
					}
					else
					{
						return 0;
					}
				}
				if (func_97())
				{
					if (!bParam2)
					{
						func_88();
					}
					else
					{
						return 0;
					}
				}
				if (func_95(155))
				{
					if (!bParam2)
					{
						func_88();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0x6CF53DE0FDF04073())
			{
				if (!bParam2)
				{
					func_88();
				}
				else
				{
					return 0;
				}
			}
		}
		system::wait(0);
		iVar0 = unk_0x8A8E6DE54B880941();
	}
	if (iParam1 > -1)
	{
		Global_1312500 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x3A711520F83BAE98())
		{
			if (!bParam2)
			{
				func_88();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0x6CF53DE0FDF04073())
	{
		if (!bParam2)
		{
			func_88();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_107()//Position - 0x35FA
{
	return Global_1312831;
}

void func_108(int iParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5)//Position - 0x3606
{
	if (!unk_0x3A711520F83BAE98())
	{
		func_88();
	}
	unk_0xAEA89A7E72415961(iParam0, 0, Param1.f_16);
}

int func_109(int iParam0)//Position - 0x3625
{
	switch (iParam0)
	{
		case 3:
			return 2;
		
		case 1:
			return 32;
		
		case 32:
			return 32;
		
		case 33:
			return 32;
		
		case 34:
			return 32;
		
		case 35:
			return 32;
		
		case 36:
			return 32;
		
		case 37:
			return 32;
		
		case 38:
			return 32;
		
		case 39:
			return 32;
		
		case 40:
			return 32;
		
		case 41:
			return 32;
		
		case 42:
			return 32;
		
		case 43:
			return 32;
		
		case 44:
			return 32;
		
		case 45:
			return 32;
		
		case 46:
			return 32;
		
		case 47:
			return 32;
		
		case 48:
			return 32;
		
		case 49:
			return 32;
		
		case 50:
			return 4;
		
		case 51:
			return 32;
		
		case 52:
			return 32;
		
		case 53:
			return 32;
		
		case 54:
			return 32;
		
		case 55:
			return 32;
		
		case 56:
			return 32;
		
		case 57:
			return 32;
		
		case 58:
			return 32;
		
		case 59:
			return 32;
		
		case 60:
			return 32;
		
		case 61:
			return 32;
		
		case 62:
			return 32;
		
		case 63:
			return 32;
		
		case 64:
			return 4;
		
		case 65:
			return 32;
		
		case 66:
			return 4;
		
		case 67:
			return 4;
		
		case 68:
			return 32;
		
		case 69:
			return 32;
		
		case 70:
			return 4;
		
		case 71:
			return 32;
		
		case 72:
			return 32;
		
		case 73:
		case 74:
			return 4;
		
		case 75:
			return 32;
		
		case 76:
			return 32;
		
		case 77:
			return 32;
		
		case 78:
			return 32;
		
		case 79:
			return 32;
		
		case 80:
			return 32;
		
		case 81:
			return 32;
		
		case 82:
			return 32;
		
		case 84:
			return 32;
		
		case 83:
			return 32;
		
		case 85:
			return 32;
		
		case 86:
			return 32;
		
		case 87:
			return 32;
		
		case 88:
			return 32;
		
		case 89:
			return 32;
		
		case 90:
			return 8;
		
		case 91:
			return 32;
		
		case 92:
			return 8;
		
		case 93:
			return 8;
		
		case 101:
			return 8;
		
		case 94:
			return 8;
		
		case 95:
			return 32;
		
		case 96:
			return 32;
		
		case 97:
			return 32;
		
		case 98:
			return 8;
		
		case 99:
			return 32;
		
		case 100:
			return 32;
		
		case 102:
			return 32;
		
		case 103:
			return 32;
		
		case 104:
			return 32;
		
		case 105:
			return 8;
		
		case 106:
			return 8;
		
		case 107:
			return 8;
		
		case 108:
			return 8;
		
		case 109:
			return 8;
		
		case 110:
			return 8;
		
		case 111:
			return 8;
		
		case 112:
			return 8;
		
		case 12:
			return 32;
		
		case 4:
			return 16;
		
		case 13:
			return 32;
		
		case 5:
			return 16;
		
		case 6:
			return 2;
		
		case 8:
			return 2;
		
		case 9:
			return 2;
		
		case 7:
			return 16;
		
		case 10:
			return 2;
		
		case 11:
			return 4;
		
		case 15:
			return 32;
		
		case 16:
			return 32;
		
		case 27:
			return 2;
		
		case 25:
			return 2;
		
		case 26:
			return 2;
		
		case 18:
			return 32;
		
		case 28:
			return 32;
		
		case 29:
			return 2;
		
		case 30:
			return 32;
		
		case 31:
			return 32;
		
		case 17:
			return 2;
		
		case 113:
			return 32;
		
		case 114:
			return 32;
		
		case 19:
			return 32;
		
		case 22:
			return 32;
		
		case 23:
			return 32;
		
		case 24:
			return 32;
		
		case 20:
			return 2;
		
		case 0:
			return 0;
		
		case 21:
			return 32;
		
		case 125:
			return 32;
		
		case 126:
			return 32;
		
		case 115:
			return 32;
		
		case 116:
			return 32;
		
		case 120:
			return 32;
		
		case 118:
			return 32;
		
		case 119:
			return 32;
		
		case 123:
			return 32;
		
		case 124:
			return 32;
		
		case 121:
			return 32;
		
		case 122:
			return 32;
		
		case 127:
			return 32;
		
		case 128:
			return 32;
		
		case 129:
			return 32;
		
		case 130:
			return 32;
		
		case 131:
			return 2;
		
		case 136:
			return 1;
		
		case 132:
			return 2;
		
		case 133:
			return 4;
		
		case 134:
			return 2;
		
		case 135:
			return 2;
		
		case 117:
			return 1;
		
		case 137:
			return 2;
		
		case 138:
		case 139:
		case 140:
		case 141:
		case 142:
		case 143:
			return 0;
		
		case 147:
			return 1;
		
		case 144:
			return 4;
		
		case 145:
			return 16;
		
		case 146:
			return 32;
		
		default:
	}
	return 0;
}
