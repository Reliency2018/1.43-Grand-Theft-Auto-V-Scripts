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
	char* sLocal_20 = NULL;
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	int iLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	float fLocal_47 = 0f;
	float fLocal_48 = 0f;
	float fLocal_49 = 0f;
	float fLocal_50 = 0f;
	vector3 vLocal_51 = { 0f, 0f, 0f };
	vector3 vLocal_52 = { 0f, 0f, 0f };
	vector3 vLocal_53 = { 0f, 0f, 0f };
	float fLocal_54 = 0f;
	vector3 vLocal_55 = { 0f, 0f, 0f };
	float fLocal_56 = 0f;
	vector3 vLocal_57 = { 0f, 0f, 0f };
	vector3 vLocal_58 = { 0f, 0f, 0f };
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	char* sLocal_67 = NULL;
	char* sLocal_68 = NULL;
	int iLocal_69 = 0;
	vector3 vLocal_70 = { 0f, 0f, 0f };
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	char* sLocal_74 = NULL;
	char* sLocal_75 = NULL;
	char* sLocal_76 = NULL;
	char* sLocal_77 = NULL;
	int iLocal_78 = 0;
	struct<2> Local_79 = { 0, 5 } ;
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
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 5;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
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
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0,0375f;
	fLocal_26 = 0,17f;
	iLocal_28 = 3;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	fLocal_47 = (175f * 175f);
	fLocal_48 = (5f * 5f);
	fLocal_49 = (5f * 5f);
	fLocal_50 = (2f * 2f);
	vLocal_51 = { -1011,737f, -480,254f, 39,0734f };
	vLocal_52 = { -1003,078f, -477,962f, 49,1374f };
	vLocal_53 = { -1018,376f, -483,9436f, 36,0964f };
	fLocal_54 = 114,7664f;
	vLocal_55 = { -1005,191f, -478,2104f, 49,0262f };
	fLocal_56 = 80,6659f;
	vLocal_57 = { 1f, 1f, 2f };
	vLocal_58 = { -596,05f, 2088,56f, 130,59f };
	sLocal_67 = "FOUND_CLUE";
	sLocal_68 = "NOIR_FILTER_SOUNDS";
	iLocal_71 = 7;
	sLocal_74 = "missmurder";
	sLocal_75 = "idle";
	sLocal_76 = "MM_LETREAD";
	sLocal_77 = "MM_LETCANC";
	if (unk_0x7D9C4B359376D38A(83))
	{
		func_82();
	}
	func_75(ScriptParam_79.f_1[0 /*3*/]);
	while (true)
	{
		func_74();
		if (func_69())
		{
			func_1();
		}
		else
		{
			func_82();
		}
		system::wait(0);
	}
}

void func_1()//Position - 0x15D
{
	switch (iLocal_71)
	{
		case 0:
		case 1:
		case 2:
		case 3:
			if (!func_68(iLocal_71))
			{
				if (((func_65() && !func_64()) && func_63()) && !func_62(0))
				{
					if (iLocal_73 != 0)
					{
						if (unk_0x06BD400240B31A5D(iLocal_73))
						{
							func_60(iLocal_71, 1, 0);
						}
					}
				}
			}
			break;
		
		case 4:
			if (func_59(iLocal_66))
			{
				unk_0x91AD7123A61E33F8(iLocal_66, 0,75f);
			}
			if (!func_68(4))
			{
				if ((func_65() && func_63()) && !func_62(0))
				{
					func_60(4, 1, 0);
				}
			}
			break;
		
		case 5:
			if (func_55())
			{
				func_29();
			}
			if (((!func_68(5) && iLocal_61 == 4) && func_63()) && !func_62(0))
			{
				func_60(5, 1, 0);
			}
			break;
		
		case 6:
			if (!func_28(3))
			{
				if (unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), -580,8914f, 2033,12f, 130,5113f, -578,4783f, 2035,029f, 127,5615f, 0,75f, 0, true, 0))
				{
					func_27(3, 1);
				}
			}
			if (unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), -580,2305f, 2032,054f, 130,2928f, -577,6669f, 2033,917f, 127,5157f, 0,75f, 0, true, 0))
			{
				if (func_28(3))
				{
					func_18(-595,1746f, 2085,768f, 136,8813f, -601,5754f, 2106,162f, 125,4619f, 20,5f, -602,8466f, 2115,511f, 126,4209f, 128,0735f, 13,5f, 22,2f, 5,7f, 1, 0, 1, 1, 0);
					func_27(3, 0);
				}
			}
			if (!func_28(2))
			{
				if (unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), -580,2305f, 2032,054f, 130,2928f, -577,6669f, 2033,917f, 127,5157f, 0,75f, 0, true, 0) || unk_0x3E9CABD07B829173())
				{
					unk_0xA25B44929E552182(vLocal_58, 200f, -1241212535, 0);
					func_27(2, 1);
				}
			}
			if (func_65() && !func_64())
			{
				unk_0x4FB260623DD93924(0, 54, 1);
				if (func_16(6))
				{
					if ((!func_68(6) && func_63()) && !func_62(0))
					{
						func_7(134, 4, 1);
						func_60(6, 1, 0);
						func_27(1, 1);
					}
				}
				if (func_6())
				{
					if (!func_5(0))
					{
						if (unk_0xE8C126B7ADBB9D63(0, 51))
						{
							func_3();
						}
						func_2("MM_TOGGLE", 10);
					}
				}
			}
			if (func_28(1))
			{
				if (unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), -594,9976f, 2089,005f, 130,3449f, -597,1125f, 2088,365f, 133,3035f, 1f, 0, true, 0))
				{
					func_2("MM_HELP", 10000);
					func_27(1, 0);
				}
			}
			break;
	}
}

void func_2(char* sParam0, int iParam1)//Position - 0x449
{
	unk_0x67129637F30DEB3F(sParam0);
	unk_0x376CFA11DE0FE521(0, 0, true, iParam1);
}

void func_3()//Position - 0x460
{
	switch (Global_104555.f_10019.f_134)
	{
		case 0:
			Global_104555.f_10019.f_134 = 1;
			break;
		
		case 1:
			Global_104555.f_10019.f_134 = 2;
			unk_0xCE884D09B465A1AA(func_4());
			unk_0x4AFBCBFDE748D4E0(-1, "ON", "NOIR_FILTER_SOUNDS", true);
			break;
		
		case 2:
			Global_104555.f_10019.f_134 = 0;
			break;
	}
}

char* func_4()//Position - 0x4C3
{
	switch (Global_104555.f_10019.f_134)
	{
		case 1:
			return "NG_filmnoir_BW02";
		
		case 2:
			return "NG_filmnoir_BW01";
		
		default:
	}
	return "";
}

int func_5(int iParam0)//Position - 0x4F4
{
	if (iParam0 == 1)
	{
		if (Global_14453.f_1 > 3)
		{
			if (unk_0xC80D31E4B587871C(Global_2323, 14))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x8F38E94BBF3404CD(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14453.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

bool func_6()//Position - 0x54E
{
	return Global_104555.f_10019.f_133 == 127;
}

void func_7(int iParam0, int iParam1, bool bParam2)//Position - 0x562
{
	Global_3009 = iParam0;
	if (Global_117[iParam0 /*10*/].f_8 != 140)
	{
		func_9();
		if (iParam1 == 4)
		{
			Global_104555.f_28020[iParam0 /*29*/].f_12[0] = 1;
			Global_104555.f_28020[iParam0 /*29*/].f_12[1] = 1;
			Global_104555.f_28020[iParam0 /*29*/].f_12[2] = 1;
			Global_104555.f_28020[iParam0 /*29*/].f_24[0] = 1;
			Global_104555.f_28020[iParam0 /*29*/].f_24[1] = 1;
			Global_104555.f_28020[iParam0 /*29*/].f_24[2] = 1;
		}
		else
		{
			if (Global_104555.f_28020[iParam0 /*29*/].f_12[iParam1] == 1 && Global_104555.f_28020[iParam0 /*29*/].f_24[iParam1] == 1)
			{
				bParam2 = false;
			}
			Global_104555.f_28020[iParam0 /*29*/].f_12[iParam1] = 1;
			Global_104555.f_28020[iParam0 /*29*/].f_24[iParam1] = 1;
		}
		if (bParam2)
		{
			if (!Global_70856)
			{
				if (iParam1 != 4)
				{
					if (Global_14453 != iParam1)
					{
						Global_2982[iParam1 /*4*/] = { Global_104555.f_28020[iParam0 /*29*/].f_3 };
						Global_2999[iParam1] = 1;
						Global_3004[iParam1] = iParam0;
					}
					else if (iParam0 == Global_14453)
					{
					}
					else
					{
						Global_2933[1 /*6*/] = { Global_104555.f_28020[iParam0 /*29*/].f_3 };
						Global_2933[1 /*6*/].f_5 = iParam1;
						func_8();
					}
				}
				else
				{
					Global_2933[1 /*6*/] = { Global_104555.f_28020[iParam0 /*29*/].f_3 };
					Global_2933[1 /*6*/].f_5 = iParam1;
					func_8();
				}
			}
			else
			{
				Global_2933[1 /*6*/] = { Global_104555.f_28020[iParam0 /*29*/].f_3 };
				Global_2933[1 /*6*/].f_5 = iParam1;
				func_8();
			}
		}
	}
}

void func_8()//Position - 0x70C
{
	char cVar0[64];
	char cVar1[64];
	char* sVar2;
	
	StringCopy(&cVar0, unk_0xB2E1B414DD88808E(&(Global_104555.f_28020[Global_3009 /*29*/].f_7)), 64);
	if (Global_3028 == 0)
	{
		unk_0xE3C33644878DCCFD("");
		StringCopy(&cVar1, unk_0xB2E1B414DD88808E(&(Global_2933[1 /*6*/])), 64);
		sVar2 = unk_0xB2E1B414DD88808E("CELL_253");
		unk_0x9F42263EE935D84B(&cVar0, &cVar0, 0, 3, sVar2, &cVar1);
	}
	else
	{
		unk_0xE3C33644878DCCFD("CELL_255");
		unk_0xA6D2B267C377D7B2(&(Global_2933[1 /*6*/]));
		unk_0x9F42263EE935D84B(&cVar0, &cVar0, 0, 3, "", 0);
	}
	unk_0x0EE72DB1CD8A3B86(&Global_2323, 0);
}

void func_9()//Position - 0x789
{
	if (func_15(14))
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
		Global_14453 = func_10();
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

int func_10()//Position - 0x82B
{
	func_11();
	return Global_104555.f_2353.f_539.f_4301;
}

void func_11()//Position - 0x844
{
	int iVar0;
	
	if (unk_0x6ADD12BF4D6D2587(unk_0xFC1458A37D98B502()))
	{
		if (func_14(Global_104555.f_2353.f_539.f_4301) != unk_0x82FF3DFBC3965CC0(unk_0xFC1458A37D98B502()))
		{
			iVar0 = func_13(unk_0xFC1458A37D98B502());
			if (func_12(iVar0) && (!func_15(14) || Global_103506))
			{
				if (Global_104555.f_2353.f_539.f_4301 != iVar0 && func_12(Global_104555.f_2353.f_539.f_4301))
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

bool func_12(int iParam0)//Position - 0x941
{
	return iParam0 < 3;
}

int func_13(int iParam0)//Position - 0x94D
{
	int iVar0;
	int iVar1;
	
	if (unk_0x6ADD12BF4D6D2587(iParam0))
	{
		iVar1 = unk_0x82FF3DFBC3965CC0(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_14(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_14(int iParam0)//Position - 0x98A
{
	if (func_12(iParam0))
	{
		return Global_104555.f_28020[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_15(int iParam0)//Position - 0x9B4
{
	return Global_35861 == iParam0;
}

bool func_16(int iParam0)//Position - 0x9C2
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == 0)
	{
		return 1;
	}
	iVar1 = unk_0x53E140A02F0B3D1A(Global_104555.f_10019.f_133, 0, (iVar0 - 1));
	return iVar1 == (func_17(2, iVar0) - 1);
}

int func_17(int iParam0, int iParam1)//Position - 0x9FB
{
	if (iParam1 == 0)
	{
		return 1;
	}
	return (iParam0 * func_17(iParam0, (iParam1 - 1)));
}

void func_18(vector3 vParam0, vector3 vParam1, float fParam2, vector3 vParam3, float fParam4, vector3 vParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)//Position - 0xA1D
{
	func_19(vParam0, vParam1, fParam2, vParam3, fParam4, vParam5, bParam6, bParam7, bParam8, bParam9, bParam10);
}

void func_19(vector3 vParam0, vector3 vParam1, float fParam2, vector3 vParam3, float fParam4, vector3 vParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)//Position - 0xA47
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	vector3 vVar4;
	vector3 vVar5;
	vector3 vVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	if (bParam7)
	{
		bParam7 = false;
	}
	bVar2 = true;
	iVar3 = 0;
	iVar0 = unk_0xC733212BF9066BDF();
	if (unk_0x6ADD12BF4D6D2587(iVar0))
	{
		if (!unk_0x9761C10D57B68069(iVar0))
		{
			unk_0xDD29FF4BAB8AFF9C(iVar0, true, 0);
			iVar3 = 1;
		}
		if (unk_0xB8DE76287EDC4957(iVar0, 0))
		{
			if (bParam10)
			{
				func_26(iVar0);
			}
			if (unk_0x0F3033474C49912D(iVar0, vParam0, vParam1, fParam2, 0, true, 0))
			{
				bVar1 = true;
			}
			else
			{
				vVar6 = { unk_0xB3328BA8976B416C(iVar0, 1) };
				if ((vVar6.z > vParam0.z && vVar6.z < vParam1.z) || (vVar6.z > vParam1.z && vVar6.z < vParam0.z))
				{
					if (func_23(iVar0, vParam0, vParam1, fParam2))
					{
						bVar1 = true;
					}
				}
			}
			if (unk_0xB8DE76287EDC4957(iVar0, 0))
			{
				if (unk_0xB0DA749C8A7CCBBF(iVar0, joaat("taxi")))
				{
					if (unk_0x317536BCEA8FA6B0(iVar0, -1, 0) != unk_0xFC1458A37D98B502() && unk_0x317536BCEA8FA6B0(iVar0, -1, 0) != 0)
					{
						if (unk_0xBE3C4023003180FC(vParam0 + vParam1 / Vector(2f, 2f, 2f), unk_0xB3328BA8976B416C(iVar0, 1), true) < 20f)
						{
							bVar1 = true;
							bVar2 = false;
						}
					}
				}
			}
			if (bParam8)
			{
				if (func_21(iVar0, func_10(), 1))
				{
					bVar1 = false;
				}
			}
			if (bVar1)
			{
				if (!func_20(vParam5))
				{
					if (unk_0xB8DE76287EDC4957(iVar0, 0))
					{
						iVar7 = unk_0x82FF3DFBC3965CC0(iVar0);
						unk_0x830C2FE029F90C3F(iVar0, &vVar4, &vVar5);
						if (unk_0xF9DDB1C0875FD9E0(iVar7))
						{
							vParam5.x = (vParam5.x + 3f);
							vParam5.y = (vParam5.y + 3f);
						}
						if (((iVar7 == joaat("zentorno") || iVar7 == joaat("btype")) || iVar7 == joaat("dubsta3")) || iVar7 == joaat("monster"))
						{
							vParam5 = { vParam5 * Vector(1,1f, 1,1f, 1,1f) };
						}
						else if (iVar7 == joaat("t20") || iVar7 == joaat("virgo"))
						{
							vParam5 = { vParam5 * Vector(1,2f, 1,2f, 1,2f) };
						}
						if ((vVar5.x - vVar4.x) > vParam5.x)
						{
							bVar2 = false;
						}
						else if ((vVar5.y - vVar4.y) > vParam5.y)
						{
							bVar2 = false;
						}
						else if ((vVar5.z - vVar4.z) > vParam5.z)
						{
							bVar2 = false;
						}
					}
				}
				if (unk_0xB8DE76287EDC4957(iVar0, 0))
				{
					if (bVar2)
					{
						unk_0x9B8406983378711E(vParam3, 5f, 0, 0, 0, 0, false, 0);
						unk_0x48ED7B2293A96722(iVar0, fParam4);
						unk_0xBD8D47FDC6902B2D(iVar0, vParam3, 1, false, 0, 1);
						unk_0xACE486395AA1867D(iVar0, 1084227584);
						if (bParam9)
						{
							unk_0xA15269351F50F113(iVar0, false, true, 0);
							unk_0x6147908AB85766AA(iVar0, 1);
						}
					}
					else
					{
						if (!unk_0x9761C10D57B68069(iVar0) || !unk_0xCB234F3DD6FF9368(iVar0, 1))
						{
							unk_0xDD29FF4BAB8AFF9C(iVar0, true, 1);
						}
						if (unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iVar0, 0))
						{
							unk_0xBD8D47FDC6902B2D(unk_0xFC1458A37D98B502(), unk_0xB3328BA8976B416C(iVar0, 1), 1, false, 0, 1);
						}
						unk_0xC91FE17AD7353B70(&iVar0);
					}
				}
			}
			if (bParam6)
			{
				unk_0xBC489554C806C640(vParam0, vParam1, fParam2, 0, 0, 0, 0, 0, 0);
			}
			if (iVar3 == 1)
			{
				if (unk_0x6ADD12BF4D6D2587(iVar0))
				{
					if (unk_0x9761C10D57B68069(iVar0))
					{
						unk_0x5380482A432E314E(&iVar0);
					}
				}
			}
		}
		else
		{
			if (!unk_0x9761C10D57B68069(iVar0))
			{
				unk_0xDD29FF4BAB8AFF9C(iVar0, true, 0);
			}
			iVar8 = unk_0x317536BCEA8FA6B0(iVar0, -1, 0);
			if (unk_0x6ADD12BF4D6D2587(iVar8) && !unk_0x3AB6A1A9084FB0A4(iVar8))
			{
				unk_0xBD8D47FDC6902B2D(iVar8, unk_0xB3328BA8976B416C(iVar8, 1), 1, false, 0, 1);
			}
			iVar9 = unk_0xF82225DEA5272C6B(unk_0x82FF3DFBC3965CC0(iVar0));
			if (iVar9 <= 2)
			{
				iVar8 = unk_0x317536BCEA8FA6B0(iVar0, 0, 0);
				if (unk_0x6ADD12BF4D6D2587(iVar8) && !unk_0x3AB6A1A9084FB0A4(iVar8))
				{
					unk_0xBD8D47FDC6902B2D(iVar8, unk_0xB3328BA8976B416C(iVar8, 1), 1, false, 0, 1);
				}
			}
			if (iVar9 <= 4)
			{
				iVar8 = unk_0x317536BCEA8FA6B0(iVar0, 1, 0);
				if (unk_0x6ADD12BF4D6D2587(iVar8) && !unk_0x3AB6A1A9084FB0A4(iVar8))
				{
					unk_0xBD8D47FDC6902B2D(iVar8, unk_0xB3328BA8976B416C(iVar8, 1), 1, false, 0, 1);
				}
				iVar8 = unk_0x317536BCEA8FA6B0(iVar0, 2, 0);
				if (unk_0x6ADD12BF4D6D2587(iVar8) && !unk_0x3AB6A1A9084FB0A4(iVar8))
				{
					unk_0xBD8D47FDC6902B2D(iVar8, unk_0xB3328BA8976B416C(iVar8, 1), 1, false, 0, 1);
				}
			}
			unk_0xC91FE17AD7353B70(&iVar0);
		}
	}
}

int func_20(vector3 vParam0)//Position - 0xE3B
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

int func_21(int iParam0, int iParam1, bool bParam2)//Position - 0xE65
{
	int iVar0;
	char* sVar1;
	int iVar2;
	
	if (!unk_0x6ADD12BF4D6D2587(iParam0) || !unk_0xB8DE76287EDC4957(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_22(iParam1, iVar0, &sVar1, &iVar2))
	{
		if (!bParam2 || unk_0xC80D31E4B587871C(Global_104555.f_7199[iVar2], 0))
		{
			if (unk_0x7840B5C83A85E7C6(&sVar1, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_22(int iParam0, int iParam1, char* sParam2, var uParam3)//Position - 0xED6
{
	StringCopy(sParam2, "", 32);
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Michael - Beverly Hills", 32);
				*uParam3 = 0;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 1;
				return 1;
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Franklin - Aunt", 32);
				*uParam3 = 5;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Franklin - Hills", 32);
				*uParam3 = 6;
				return 1;
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 2;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - City", 32);
				*uParam3 = 3;
				return 1;
			}
			else if (iParam1 == 2)
			{
				StringCopy(sParam2, "Trevor - Stripclub", 32);
				*uParam3 = 4;
				return 1;
			}
			break;
	}
	return 0;
}

int func_23(int iParam0, vector3 vParam1, vector3 vParam2, float fParam3)//Position - 0xFA7
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	vector3 vVar5;
	vector3 vVar6[4];
	struct<2> Var7;
	struct<2> Var8;
	
	if (unk_0xB8DE76287EDC4957(iParam0, 0))
	{
		vParam1.z = vParam2.z;
		vVar0 = { func_25(vParam1 - vParam2) };
		vVar1 = { vVar0 };
		vVar0.x = -vVar1.y;
		vVar0.y = vVar1.x;
		vVar0.z = 0f;
		vVar2 = { vParam1 - vVar0 * FtoV((fParam3 / 2f)) };
		vVar3 = { vParam1 + vVar0 * FtoV((fParam3 / 2f)) };
		vVar4 = { vParam2 - vVar0 * FtoV((fParam3 / 2f)) };
		vVar5 = { vParam2 + vVar0 * FtoV((fParam3 / 2f)) };
		unk_0x04FE252E98FAA4C3(unk_0x82FF3DFBC3965CC0(iParam0), &Var7, &Var8);
		vVar6[0 /*3*/] = { unk_0x3F90543934DCD7E6(iParam0, Var7, Var7.f_1, 0f) };
		vVar6[1 /*3*/] = { unk_0x3F90543934DCD7E6(iParam0, Var7, Var8.f_1, 0f) };
		vVar6[2 /*3*/] = { unk_0x3F90543934DCD7E6(iParam0, Var8, Var7.f_1, 0f) };
		vVar6[3 /*3*/] = { unk_0x3F90543934DCD7E6(iParam0, Var8, Var8.f_1, 0f) };
		if (((((((((((((((func_24(vVar6[0 /*3*/], vVar6[1 /*3*/], vVar2, vVar3) || func_24(vVar6[0 /*3*/], vVar6[1 /*3*/], vVar3, vVar5)) || func_24(vVar6[0 /*3*/], vVar6[1 /*3*/], vVar4, vVar5)) || func_24(vVar6[0 /*3*/], vVar6[1 /*3*/], vVar2, vVar4)) || func_24(vVar6[1 /*3*/], vVar6[3 /*3*/], vVar2, vVar3)) || func_24(vVar6[1 /*3*/], vVar6[3 /*3*/], vVar3, vVar5)) || func_24(vVar6[1 /*3*/], vVar6[3 /*3*/], vVar4, vVar5)) || func_24(vVar6[1 /*3*/], vVar6[3 /*3*/], vVar2, vVar4)) || func_24(vVar6[3 /*3*/], vVar6[2 /*3*/], vVar2, vVar3)) || func_24(vVar6[3 /*3*/], vVar6[2 /*3*/], vVar3, vVar5)) || func_24(vVar6[3 /*3*/], vVar6[2 /*3*/], vVar4, vVar5)) || func_24(vVar6[3 /*3*/], vVar6[2 /*3*/], vVar2, vVar4)) || func_24(vVar6[2 /*3*/], vVar6[0 /*3*/], vVar2, vVar3)) || func_24(vVar6[2 /*3*/], vVar6[0 /*3*/], vVar3, vVar5)) || func_24(vVar6[2 /*3*/], vVar6[0 /*3*/], vVar4, vVar5)) || func_24(vVar6[2 /*3*/], vVar6[0 /*3*/], vVar2, vVar4))
		{
			return 1;
		}
	}
	return 0;
}

int func_24(struct<2> Param0, var uParam1, struct<2> Param2, var uParam3, struct<2> Param4, var uParam5, struct<2> Param6, var uParam7)//Position - 0x129D
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	
	fVar0 = Param0;
	fVar1 = Param0.f_1;
	fVar2 = Param2;
	fVar3 = Param2.f_1;
	fVar4 = Param4;
	fVar5 = Param4.f_1;
	fVar6 = Param6;
	fVar7 = Param6.f_1;
	fVar8 = (fVar2 - fVar0);
	fVar9 = (fVar3 - fVar1);
	fVar10 = (fVar6 - fVar4);
	fVar11 = (fVar7 - fVar5);
	fVar12 = (((-fVar9 * (fVar0 - fVar4)) + (fVar8 * (fVar1 - fVar5))) / ((-fVar10 * fVar9) + (fVar8 * fVar11)));
	fVar13 = (((fVar10 * (fVar1 - fVar5)) - (fVar11 * (fVar0 - fVar4))) / ((-fVar10 * fVar9) + (fVar8 * fVar11)));
	if (((fVar12 >= 0f && fVar12 <= 1f) && fVar13 >= 0f) && fVar13 <= 1f)
	{
		return 1;
	}
	return 0;
}

Vector3 func_25(vector3 vParam0)//Position - 0x1351
{
	float fVar0;
	float fVar1;
	
	fVar0 = system::vmag(vParam0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		vParam0 = { vParam0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		vParam0.x = 0f;
		vParam0.y = 0f;
		vParam0.z = 0f;
	}
	return vParam0;
}

void func_26(int iParam0)//Position - 0x1390
{
	if (unk_0x6ADD12BF4D6D2587(iParam0))
	{
		if (unk_0xB8DE76287EDC4957(iParam0, 0))
		{
			if (unk_0xA7B0253B80B52B2B(iParam0) <= 200f)
			{
				unk_0xB38E13EF2EC6F0E9(iParam0, 500f);
			}
			if (unk_0x32DFD9C17763ABE0(iParam0) <= 700f)
			{
				unk_0xB38E13EF2EC6F0E9(iParam0, 900f);
			}
			if (unk_0xDE523AF6F7B269AB(iParam0) < 200)
			{
				unk_0xB38E13EF2EC6F0E9(iParam0, 500f);
			}
		}
	}
}

void func_27(int iParam0, bool bParam1)//Position - 0x13F5
{
	if (bParam1)
	{
		unk_0x872F1C1F8587CCC7(&iLocal_78, iParam0);
	}
	else
	{
		unk_0x0EE72DB1CD8A3B86(&iLocal_78, iParam0);
	}
}

bool func_28(int iParam0)//Position - 0x1415
{
	return unk_0xC80D31E4B587871C(iLocal_78, iParam0);
}

void func_29()//Position - 0x1425
{
	int iVar0;
	
	switch (iLocal_60)
	{
		case 0:
			if (!unk_0x5A0744D504CC705F())
			{
				if (unk_0x0C88267282FD588F(unk_0xFC1458A37D98B502(), vLocal_51, vLocal_57, true, true, 0))
				{
					if (func_54())
					{
						iLocal_60 = 2;
						func_53(0, 800);
					}
				}
			}
			break;
		
		case 1:
			func_52();
			if (!unk_0xA8113D347D14630F())
			{
				if (unk_0x0C88267282FD588F(unk_0xFC1458A37D98B502(), vLocal_52, vLocal_57, true, true, 0))
				{
					func_48(0);
					iLocal_60 = 3;
					func_53(0, 800);
				}
				func_43();
				if (func_59(unk_0xFC1458A37D98B502()))
				{
					if (unk_0x5AD8564EFD5BEC2E(unk_0xFC1458A37D98B502(), &iVar0, 1))
					{
						if (iVar0 != joaat("weapon_unarmed"))
						{
							unk_0x385A213BEB355C2B(unk_0xFC1458A37D98B502(), joaat("weapon_unarmed"), false);
						}
					}
					unk_0x5C57ECBE59C08573(unk_0xFC1458A37D98B502(), 1f);
					unk_0x4FB260623DD93924(0, 37, 1);
					unk_0x4FB260623DD93924(0, 24, 1);
					unk_0x4FB260623DD93924(0, 22, 1);
					unk_0x4FB260623DD93924(0, 141, 1);
					unk_0x4FB260623DD93924(0, 140, 1);
					unk_0x4FB260623DD93924(0, 142, 1);
					unk_0x4FB260623DD93924(0, 257, 1);
					unk_0x4FB260623DD93924(0, 25, 1);
					unk_0x4FB260623DD93924(0, 37, 1);
					unk_0x4FB260623DD93924(0, 44, 1);
				}
			}
			break;
		
		case 2:
			func_52();
			if (unk_0x3E9CABD07B829173())
			{
				func_39(24, 0);
				func_38(unk_0xFC1458A37D98B502(), vLocal_55, fLocal_56);
				unk_0xBB9A3C553EECB180(0f);
				unk_0x7C9705890EF6612E(0f, 1065353216);
				unk_0x385A213BEB355C2B(unk_0xFC1458A37D98B502(), joaat("weapon_unarmed"), true);
				unk_0xB926B9A87AB986E6(unk_0x9EB17624F44A8DA4(), 0, 0);
				unk_0xCFB8D84F848CAA39(unk_0x9EB17624F44A8DA4(), 0);
				func_37(1);
				func_18(-1023,439f, -479,5592f, 35,81806f, -1014,383f, -495,1239f, 40,10796f, 18,5f, -1024,096f, -485,1923f, 35,9779f, 209,0203f, func_36(), 1, 0, 1, 1, 0);
				unk_0x32C900DD9B686F75(vLocal_55, 20f, 0);
				func_33(24, &iLocal_59);
				unk_0xFF9ADA7B95619F7E(iLocal_59);
				iLocal_72 = (unk_0x53C562FD2B9E3AB0() + 40000);
				while ((!unk_0x64D098EABB2F6F13() || !unk_0x1A595E6882473810(iLocal_59)) && iLocal_72 > unk_0x53C562FD2B9E3AB0())
				{
					system::wait(0);
				}
				unk_0x81BCCFFE3F019672();
				if (iLocal_72 <= unk_0x53C562FD2B9E3AB0())
				{
					unk_0xA1451353A1AED1A5(iLocal_59);
					func_38(unk_0xFC1458A37D98B502(), vLocal_53, fLocal_54);
					func_53(1, 800);
					iLocal_60 = 0;
				}
				else
				{
					func_53(1, 800);
					iLocal_60 = 1;
					func_32();
				}
			}
			break;
		
		case 3:
			func_52();
			func_48(0);
			if (unk_0x3E9CABD07B829173())
			{
				func_38(unk_0xFC1458A37D98B502(), vLocal_53, fLocal_54);
				func_39(24, 1);
				unk_0xA1451353A1AED1A5(iLocal_59);
				unk_0xBB9A3C553EECB180(0f);
				unk_0x7C9705890EF6612E(0f, 1065353216);
				func_37(0);
				func_31();
				func_30(vLocal_53, 30f, 12, 5000, 0, 0);
				func_53(1, 800);
				iLocal_60 = 0;
			}
			break;
	}
}

void func_30(vector3 vParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)//Position - 0x16D4
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x5D45879FC4CB78CD(vParam0, iParam1, iParam2, 127);
	if (unk_0xB774D40D7819292F(iVar0))
	{
		iVar1 = (unk_0x53C562FD2B9E3AB0() + iParam3);
		while (!unk_0xC548195DB18979E1(iVar0) && unk_0x53C562FD2B9E3AB0() < iVar1)
		{
			if (bParam5)
			{
				func_48(0);
			}
			if (bParam4)
			{
				func_52();
			}
			system::wait(0);
		}
		if (unk_0x53C562FD2B9E3AB0() < iVar1)
		{
		}
		unk_0x48B475D0F512A41A(iVar0);
	}
}

void func_31()//Position - 0x1744
{
	if (unk_0xB9D80B12FE4456A5())
	{
		if (func_28(0))
		{
			unk_0xDFAC9ADC0F004412();
			func_27(0, 0);
		}
	}
}

void func_32()//Position - 0x1765
{
	if (unk_0xB9D80B12FE4456A5())
	{
		if (!func_28(0))
		{
			unk_0x1338C63C6C9CC948("MYSTERY LETTER CAM");
			func_27(0, 1);
		}
	}
}

var func_33(int iParam0, int iParam1)//Position - 0x178C
{
	struct<5> Var0;
	
	Var0 = { func_34(iParam0) };
	*iParam1 = unk_0xC0765AFBFA616644(Var0, Var0.f_3);
	return Var0.f_4;
}

struct<5> func_34(int iParam0)//Position - 0x17B1
{
	struct<5> Var0;
	vector3 vVar1;
	
	switch (iParam0)
	{
		case 0:
			Var0 = { -447,4833f, 280,3197f, 77,5215f };
			Var0.f_3 = "v_comedy";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 1:
			Var0 = { -1906,786f, -573,7576f, 19,0773f };
			Var0.f_3 = "v_psycheoffice";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 2:
			Var0 = { 1399,973f, 1148,756f, 113,3336f };
			Var0.f_3 = "v_ranch";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 3:
			Var0 = { -598,6379f, -1608,399f, 26,0108f };
			Var0.f_3 = "v_recycle";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 4:
			Var0 = { -556,5089f, 286,3181f, 81,1763f };
			Var0.f_3 = "v_rockclub";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 5:
			Var0 = { -111,7116f, -11,912f, 69,5196f };
			Var0.f_3 = "v_janitor";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 6:
			Var0 = { 1274,934f, -1714,726f, 53,7715f };
			Var0.f_3 = "v_lesters";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 7:
			Var0 = { 147,433f, -2201,37f, 3,688f };
			Var0.f_3 = "v_torture";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 8:
			Var0 = { 320,9934f, 265,2515f, 82,1221f };
			Var0.f_3 = "v_cinema";
			Var0.f_4 = "v_cinema (Vinewood)";
			break;
		
		case 9:
			Var0 = { -1425,564f, -244,3f, 15,8053f };
			Var0.f_3 = "v_cinema";
			Var0.f_4 = "v_cinema (Morningwood)";
			break;
		
		case 10:
			Var0 = { 377,153f, -717,567f, 10,0536f };
			Var0.f_3 = "v_cinema";
			Var0.f_4 = "v_cinema (Downtown)";
			break;
		
		case 11:
			Var0 = { 245,1564f, 370,211f, 104,7382f };
			Var0.f_3 = "v_epsilonism";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 12:
			Var0 = { 173,1176f, -1003,279f, -99,9999f };
			Var0.f_3 = "v_garages";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 13:
			Var0 = { 199,9715f, -999,6678f, -100f };
			Var0.f_3 = "v_garagem";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 14:
			Var0 = { 228,6058f, -992,0537f, -99,9999f };
			Var0.f_3 = "v_garagel";
			Var0.f_3 = "hei_dlc_garage_high_new";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 15:
			Var0 = { 1854,254f, 3686,739f, 33,2671f };
			Var0.f_3 = "v_sheriff";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 16:
			Var0 = { -444,8907f, 6013,587f, 30,7164f };
			Var0.f_3 = "v_sheriff2";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 17:
			Var0 = { 3522,845f, 3707,965f, 19,9918f };
			Var0.f_3 = "v_lab";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 18:
			Var0 = { 717,2994f, -974,4271f, 23,9142f };
			Var0.f_3 = "v_sweat";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 19:
			Var0 = { 717,299f, -974,4271f, 23,9142f };
			Var0.f_3 = "v_sweatempty";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 20:
			Var0 = { 2449,785f, 4983,825f, 45,8106f };
			Var0.f_3 = "v_farmhouse";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 22:
			Var0 = { 1087,195f, -1988,445f, 28,649f };
			Var0.f_3 = "v_foundry";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 23:
			Var0 = { 982,233f, -2160,382f, 28,4761f };
			Var0.f_3 = "v_abattoir";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 21:
			Var0 = { 479,0568f, -1316,825f, 28,2038f };
			Var0.f_3 = "v_chopshop";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 24:
			Var0 = { -1005,663f, -478,3461f, 49,0265f };
			Var0.f_3 = "v_58_sol_office";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 25:
			vVar1 = { func_35(1, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (1)";
			break;
		
		case 26:
			vVar1 = { func_35(2, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (2)";
			break;
		
		case 27:
			vVar1 = { func_35(3, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (3)";
			break;
		
		case 28:
			vVar1 = { func_35(4, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (4)";
			break;
		
		case 29:
			vVar1 = { func_35(5, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (5)";
			break;
		
		case 30:
			vVar1 = { func_35(6, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (6)";
			break;
		
		case 31:
			vVar1 = { func_35(7, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (7)";
			break;
		
		case 32:
			Var0 = { Global_1049531[34 /*1951*/].f_146.f_1517 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (8)";
			break;
		
		case 33:
			vVar1 = { func_35(35, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (9)";
			break;
		
		case 34:
			vVar1 = { func_35(36, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (10)";
			break;
		
		case 35:
			vVar1 = { func_35(37, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (11)";
			break;
		
		case 36:
			vVar1 = { func_35(38, 0) };
			Var0 = { -20,1f, -580,8f, 91,3f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (12)";
			break;
		
		case 37:
			vVar1 = { func_35(39, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (13)";
			break;
		
		case 38:
			vVar1 = { func_35(40, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (14)";
			break;
		
		case 39:
			vVar1 = { func_35(41, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (15)";
			break;
		
		case 40:
			vVar1 = { func_35(42, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (16)";
			break;
		
		case 41:
			vVar1 = { func_35(43, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (17)";
			break;
		
		case 42:
			Var0 = { -470,3754f, -698,5207f, 51,5276f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (18)";
			break;
		
		case 43:
			Var0 = { -460,6133f, -691,5562f, 69,9067f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (19)";
			break;
		
		case 44:
			Var0 = { 300,633f, -997,4288f, -99,9727f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (20)";
			break;
		
		case 49:
			Var0 = { -171,3969f, 494,2671f, 134,4935f };
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (1)";
			break;
		
		case 50:
			Var0 = { 339,4982f, 434,0887f, 146,2206f };
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (2)";
			break;
		
		case 51:
			Var0 = { -761,3884f, 615,7333f, 140,9805f };
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (3)";
			break;
		
		case 52:
			Var0 = { -678,1752f, 591,0076f, 142,2196f };
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (4)";
			break;
		
		case 53:
			Var0 = { 120,0541f, 553,793f, 181,0943f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (5)";
			break;
		
		case 54:
			Var0 = { -571,4039f, 655,2008f, 142,6293f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (7)";
			break;
		
		case 55:
			Var0 = { -742,2565f, 587,6547f, 143,0577f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (8)";
			break;
		
		case 56:
			Var0 = { -857,2222f, 685,051f, 149,6502f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (10)";
			break;
		
		case 57:
			Var0 = { -1287,65f, 443,2707f, 94,6919f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (12)";
			break;
		
		case 58:
			Var0 = { 374,2012f, 416,9688f, 142,5991f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (13)";
			break;
		
		case 45:
			Var0 = { -16,29585f, -684,0385f, 33,50832f };
			Var0.f_3 = "dt1_03_carpark";
			Var0.f_4 = "dt1_03_carpark";
			break;
		
		case 46:
			Var0 = { 341,1f, -1000f, -99,2f };
			Var0.f_3 = "v_apart_midspaz";
			Var0.f_4 = "v_apart_midspaz";
			break;
		
		case 47:
			Var0 = { 199,9716f, -1018,954f, -100f };
			Var0.f_3 = "v_garagem_sp";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 48:
			Var0 = { -1388,001f, -618,4197f, 30,8196f };
			Var0.f_3 = "v_bahama";
			Var0.f_4 = Var0.f_3;
			break;
	}
	switch (iParam0)
	{
		case 59:
			Var0 = { -787,7805f, 334,9232f, 215,8384f };
			Var0.f_3 = "apa_v_mp_h_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 60:
			Var0 = { -787,7805f, 334,9232f, 215,8384f };
			Var0.f_3 = "apa_v_mp_h_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 61:
			Var0 = { -787,7805f, 334,9232f, 215,8384f };
			Var0.f_3 = "apa_v_mp_h_03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 62:
			Var0 = { -787,7805f, 334,9232f, 215,8384f };
			Var0.f_3 = "apa_v_mp_h_04";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 63:
			Var0 = { -787,7805f, 334,9232f, 215,8384f };
			Var0.f_3 = "apa_v_mp_h_05";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 64:
			Var0 = { -787,7805f, 334,9232f, 215,8384f };
			Var0.f_3 = "apa_v_mp_h_06";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 65:
			Var0 = { -787,7805f, 334,9232f, 215,8384f };
			Var0.f_3 = "apa_v_mp_h_07";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 66:
			Var0 = { -787,7805f, 334,9232f, 215,8384f };
			Var0.f_3 = "apa_v_mp_h_08";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 67:
			Var0 = { -773,2258f, 322,8252f, 194,8862f };
			Var0.f_3 = "apa_v_mp_h_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 68:
			Var0 = { -773,2258f, 322,8252f, 194,8862f };
			Var0.f_3 = "apa_v_mp_h_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 69:
			Var0 = { -773,2258f, 322,8252f, 194,8862f };
			Var0.f_3 = "apa_v_mp_h_03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 70:
			Var0 = { -773,2258f, 322,8252f, 194,8862f };
			Var0.f_3 = "apa_v_mp_h_04";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 71:
			Var0 = { -773,2258f, 322,8252f, 194,8862f };
			Var0.f_3 = "apa_v_mp_h_05";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 72:
			Var0 = { -773,2258f, 322,8252f, 194,8862f };
			Var0.f_3 = "apa_v_mp_h_06";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 73:
			Var0 = { -773,2258f, 322,8252f, 194,8862f };
			Var0.f_3 = "apa_v_mp_h_07";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 74:
			Var0 = { -773,2258f, 322,8252f, 194,8862f };
			Var0.f_3 = "apa_v_mp_h_08";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 75:
			Var0 = { -787,7805f, 334,9232f, 186,1134f };
			Var0.f_3 = "apa_v_mp_h_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 76:
			Var0 = { -787,7805f, 334,9232f, 186,1134f };
			Var0.f_3 = "apa_v_mp_h_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 77:
			Var0 = { -787,7805f, 334,9232f, 186,1134f };
			Var0.f_3 = "apa_v_mp_h_03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 78:
			Var0 = { -787,7805f, 334,9232f, 186,1134f };
			Var0.f_3 = "apa_v_mp_h_04";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 79:
			Var0 = { -787,7805f, 334,9232f, 186,1134f };
			Var0.f_3 = "apa_v_mp_h_05";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 80:
			Var0 = { -787,7805f, 334,9232f, 186,1134f };
			Var0.f_3 = "apa_v_mp_h_06";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 81:
			Var0 = { -787,7805f, 334,9232f, 186,1134f };
			Var0.f_3 = "apa_v_mp_h_07";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 82:
			Var0 = { -787,7805f, 334,9232f, 186,1134f };
			Var0.f_3 = "apa_v_mp_h_08";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 83:
			vVar1 = { func_35(87, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 84:
			vVar1 = { func_35(87, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 85:
			vVar1 = { func_35(87, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 86:
			vVar1 = { func_35(87, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 87:
			vVar1 = { func_35(87, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 88:
			vVar1 = { func_35(87, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 89:
			vVar1 = { func_35(87, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 90:
			vVar1 = { func_35(87, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 91:
			vVar1 = { func_35(87, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 92:
			vVar1 = { func_35(88, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 93:
			vVar1 = { func_35(88, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 94:
			vVar1 = { func_35(88, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 95:
			vVar1 = { func_35(88, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 96:
			vVar1 = { func_35(88, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 97:
			vVar1 = { func_35(88, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 98:
			vVar1 = { func_35(88, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 99:
			vVar1 = { func_35(88, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 100:
			vVar1 = { func_35(88, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 101:
			vVar1 = { func_35(89, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 102:
			vVar1 = { func_35(89, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 103:
			vVar1 = { func_35(89, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 104:
			vVar1 = { func_35(89, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 105:
			vVar1 = { func_35(89, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 106:
			vVar1 = { func_35(89, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 107:
			vVar1 = { func_35(89, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 108:
			vVar1 = { func_35(89, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 109:
			vVar1 = { func_35(89, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 110:
			vVar1 = { func_35(90, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 111:
			vVar1 = { func_35(90, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 112:
			vVar1 = { func_35(90, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 113:
			vVar1 = { func_35(90, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 114:
			vVar1 = { func_35(90, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 115:
			vVar1 = { func_35(90, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 116:
			vVar1 = { func_35(90, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 117:
			vVar1 = { func_35(90, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 118:
			vVar1 = { func_35(90, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 119:
			vVar1 = { func_35(91, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "bkr_biker_dlc_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 120:
			vVar1 = { func_35(97, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "bkr_biker_dlc_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 121:
			vVar1 = { func_35(103, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 122:
			vVar1 = { func_35(104, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 123:
			vVar1 = { func_35(105, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 124:
			vVar1 = { func_35(106, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 125:
			vVar1 = { func_35(107, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 126:
			vVar1 = { func_35(108, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 127:
			vVar1 = { func_35(109, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 128:
			vVar1 = { func_35(110, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 129:
			vVar1 = { func_35(111, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 130:
			vVar1 = { func_35(112, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 131:
			vVar1 = { func_35(113, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 132:
			vVar1 = { func_35(114, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 133:
			vVar1 = { func_35(103, 1) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 134:
			vVar1 = { func_35(106, 1) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 135:
			vVar1 = { func_35(109, 1) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 136:
			vVar1 = { func_35(112, 1) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 137:
			Var0 = { 938,3077f, -3196,112f, -100f };
			Var0.f_3 = "gr_grdlc_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 138:
			Var0 = { 512,5f, 4852f, -62,6f };
			Var0.f_3 = "xm_x17dlc_int_sub";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 139:
			Var0 = { 2047f, 2942f, -61,9f };
			Var0.f_3 = "xm_x17dlc_int_facility";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 140:
			Var0 = { -1047,6f, -232,3503f, 38,0135f };
			Var0.f_3 = "v_faceoffice";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 22:
			Var0 = { 1100f, -2004f, 37f };
			Var0.f_3 = "v_foundry";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 141:
			Var0 = { 361f, 6306f, -159f };
			Var0.f_3 = "xm_x17dlc_int_silo_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 142:
			Var0 = { 305f, 6298f, -160f };
			Var0.f_3 = "xm_x17dlc_int_silo_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 143:
			Var0 = { 244f, 6163f, -159f };
			Var0.f_3 = "xm_x17dlc_int_lab";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 144:
			Var0 = { 2168f, 2920f, -84f };
			Var0.f_3 = "xm_x17dlc_int_facility2";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 145:
			Var0 = { 446f, 5922f, -158f };
			Var0.f_3 = "xm_x17dlc_int_bse_tun";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 146:
			Var0 = { 252f, 5972f, -156f };
			Var0.f_3 = "xm_x17dlc_int_base_loop";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 147:
			Var0 = { 682f, 5959f, -152f };
			Var0.f_3 = "xm_x17dlc_int_base_ent";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 148:
			Var0 = { 551f, 5939f, -158f };
			Var0.f_3 = "xm_x17dlc_int_base";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 149:
			Var0 = { 520,0001f, 4750f, -70f };
			Var0.f_3 = "xm_x17dlc_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 150:
			Var0 = { -1266,802f, -3014,849f, -49,4903f };
			Var0.f_3 = "sm_smugdlc_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 151:
			Var0 = { 974,9203f, -3000,065f, -40,647f };
			Var0.f_3 = "imp_impexp_intwaremed";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 152:
			Var0 = { 969,5376f, -3000,411f, -48,647f };
			Var0.f_3 = "imp_impexp_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 153:
			Var0 = { 1094,997f, -3100,012f, -39,9999f };
			Var0.f_3 = "ex_int_warehouse_s_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 154:
			Var0 = { 1059,995f, -3100f, -39,9999f };
			Var0.f_3 = "ex_int_warehouse_m_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 155:
			Var0 = { 1010,008f, -3100f, -39,9999f };
			Var0.f_3 = "ex_int_warehouse_l_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 156:
			Var0 = { 372,6707f, 405,5235f, 144,5326f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 157:
			Var0 = { -282,0588f, -955,17f, 85,3036f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 158:
			Var0 = { 342,7946f, -997,4225f, -99,7444f };
			Var0.f_3 = "v_apart_midspaz";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 159:
			Var0 = { 260,3268f, -997,4298f, -100,0086f };
			Var0.f_3 = "v_studio_lo";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 160:
			Var0 = { 108,2369f, -753,5364f, 233,1523f };
			Var0.f_3 = "v_fib01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 161:
			Var0 = { 135,3226f, -746,3677f, 253,1523f };
			Var0.f_3 = "v_fib03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 162:
			Var0 = { 108,2572f, -753,5342f, 44,7548f };
			Var0.f_3 = "v_office_lobby";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 163:
			Var0 = { 228,6161f, -992,053f, -99,9999f };
			Var0.f_3 = "heist_dlc_garage_high_new";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 164:
			Var0 = { 199,9716f, -999,6678f, -100f };
			Var0.f_3 = "v_garagem";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 165:
			Var0 = { 173,1165f, -1003,28f, -99,9999f };
			Var0.f_3 = "v_garages";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 166:
			Var0 = { 575f, 4750f, -60f };
			Var0.f_3 = "xm_v_apart_midspaz";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 167:
			Var0 = { 600f, 4750f, -60f };
			Var0.f_3 = "xm_v_studio_lo";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 168:
			Var0 = { 630f, 4750f, -60f };
			Var0.f_3 = "xm_v_garagem";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 169:
			Var0 = { 1257f, 4796,7f, -39,1f };
			Var0.f_3 = "xm_x17dlc_int_tun_entry";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 170:
			Var0 = { 694,4f, 5898,9f, -152,3f };
			Var0.f_3 = "xm_x17dlc_int_tun_straight";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 171:
			Var0 = { 1121,8f, 5516,3f, -101,3f };
			Var0.f_3 = "xm_x17dlc_int_tun_straight";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 172:
			Var0 = { 1279,6f, 5233,2f, -80,3f };
			Var0.f_3 = "xm_x17dlc_int_tun_straight";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 173:
			Var0 = { 1158,6f, 5467,1f, -101,3f };
			Var0.f_3 = "xm_x17dlc_int_tun_slope_flat";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 174:
			Var0 = { 705,9f, 5838,5f, -152,3f };
			Var0.f_3 = "xm_x17dlc_int_tun_slope_flat";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 175:
			Var0 = { 1316,5f, 5184f, -80,3f };
			Var0.f_3 = "xm_x17dlc_int_tun_slope_flat";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 176:
			Var0 = { 1248f, 5276,1f, -80,3f };
			Var0.f_3 = "xm_x17dlc_int_tun_flat_slope";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 177:
			Var0 = { 1090,2f, 5559,2f, -101,3f };
			Var0.f_3 = "xm_x17dlc_int_tun_flat_slope";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 178:
			Var0 = { 1261f, 4808,6f, -39,3f };
			Var0.f_3 = "xm_x17dlc_int_tun_flat_slope";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 179:
			Var0 = { 721,8f, 5781,4f, -146,7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 180:
			Var0 = { 780,8f, 5703,4f, -136,7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 181:
			Var0 = { 868,1f, 5659,2f, -126,7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 182:
			Var0 = { 1218,2f, 5321,2f, -85,7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 183:
			Var0 = { 1278,5f, 4859,7f, -44,7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 184:
			Var0 = { 1187,2f, 5419,8f, -96,4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 185:
			Var0 = { 1344,7f, 5136,4f, -75,4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 186:
			Var0 = { 1363,4f, 5039,5f, -65,4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 187:
			Var0 = { 1049,3f, 5602,1f, -107,4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 188:
			Var0 = { 1337,8f, 4944,3f, -55,4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 189:
			Var0 = { 961,5f, 5646,9f, -117,4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 190:
			Var0 = { 345,0041f, 4842,001f, -59,9997f };
			Var0.f_3 = "xm_x17dlc_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 191:
			Var0 = { 279,9322f, -1337,49f, 23,7419f };
			Var0.f_3 = "v_coroner";
			Var0.f_4 = Var0.f_3;
			break;
		
		default:
			break;
	}
	return Var0;
}

struct<6> func_35(int iParam0, bool bParam1)//Position - 0x3A1F
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case -1:
			Var0 = { -794,9184f, 339,6266f, 200,4135f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 1:
			Var0 = { -794,9184f, 339,6266f, 200,4135f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 2:
			Var0 = { -761,0982f, 317,6259f, 169,5963f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 3:
			Var0 = { -761,1888f, 317,6295f, 216,0503f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 4:
			Var0 = { -795,3856f, 340,0188f, 152,7941f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 61:
			Var0 = { -778,5056f, 332,3779f, 212,1968f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 5:
			Var0 = { -258,1807f, -950,6853f, 70,0239f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		
		case 6:
			Var0 = { -285,0051f, -957,6552f, 85,3035f };
			Var0.f_3 = { 0f, 0f, -110f };
			break;
		
		case 7:
			Var0 = { -1471,882f, -530,7484f, 62,34918f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		
		case 34:
			Var0 = { -1471,882f, -530,7484f, 49,72156f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		
		case 62:
			Var0 = { -1463,15f, -540,2369f, 74,2439f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		
		case 35:
			Var0 = { -885,3702f, -451,4775f, 119,327f };
			Var0.f_3 = { 0f, 0f, 27,55617f };
			break;
		
		case 36:
			Var0 = { -913,0385f, -438,4284f, 114,3997f };
			Var0.f_3 = { 0f, 0f, -153,3093f };
			break;
		
		case 37:
			Var0 = { -892,5499f, -430,4789f, 88,25368f };
			Var0.f_3 = { 0f, 0f, 116,9193f };
			break;
		
		case 38:
			Var0 = { -35,0462f, -576,317f, 82,90739f };
			Var0.f_3 = { 0f, 0f, 160f };
			break;
		
		case 39:
			Var0 = { -10,3788f, -590,7431f, 93,02542f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		
		case 65:
			Var0 = { -22,2487f, -589,1461f, 80,2305f };
			Var0.f_3 = { 0f, 0f, 69,88f };
			break;
		
		case 40:
			Var0 = { -900,6311f, -376,7462f, 78,27306f };
			Var0.f_3 = { 0f, 0f, 26,92611f };
			break;
		
		case 41:
			Var0 = { -929,483f, -374,5104f, 102,2329f };
			Var0.f_3 = { 0f, 0f, -152,5531f };
			break;
		
		case 63:
			Var0 = { -914,4202f, -375,8189f, 114,4743f };
			Var0.f_3 = { 0f, 0f, -63f };
			break;
		
		case 42:
			Var0 = { -617,1647f, 64,6042f, 100,8196f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 43:
			Var0 = { -584,2015f, 42,7133f, 86,4187f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 64:
			Var0 = { -609,5665f, 50,2203f, 98,3998f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 73:
			Var0 = { -171,3969f, 494,2671f, 134,4935f };
			Var0.f_3 = { 0f, 0f, 11f };
			break;
		
		case 74:
			Var0 = { 339,4982f, 434,0887f, 146,2206f };
			Var0.f_3 = { 0f, 0f, -63,5f };
			break;
		
		case 75:
			Var0 = { -761,3884f, 615,7333f, 140,9805f };
			Var0.f_3 = { 0f, 0f, -71,5f };
			break;
		
		case 76:
			Var0 = { -678,1752f, 591,0076f, 142,2196f };
			Var0.f_3 = { 0f, 0f, 40,5f };
			break;
		
		case 77:
			Var0 = { 120,0541f, 553,793f, 181,0943f };
			Var0.f_3 = { 0f, 0f, 6f };
			break;
		
		case 78:
			Var0 = { -571,4039f, 655,2008f, 142,6293f };
			Var0.f_3 = { 0f, 0f, -14,5f };
			break;
		
		case 79:
			Var0 = { -742,2565f, 587,6547f, 143,0577f };
			Var0.f_3 = { 0f, 0f, -29f };
			break;
		
		case 80:
			Var0 = { -857,2222f, 685,051f, 149,6502f };
			Var0.f_3 = { 0f, 0f, 4,5f };
			break;
		
		case 81:
			Var0 = { -1287,65f, 443,2707f, 94,6919f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 82:
			Var0 = { 374,2012f, 416,9688f, 142,6977f };
			Var0.f_3 = { 0f, 0f, -14f };
			break;
		
		case 83:
			Var0 = { -787,7805f, 334,9232f, 186,1134f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 84:
			Var0 = { -787,7805f, 334,9232f, 215,8384f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 85:
			Var0 = { -773,2258f, 322,8252f, 194,8862f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 86:
			Var0 = { -1573,098f, -4085,806f, 9,7851f };
			Var0.f_3 = { 0f, 0f, 162f };
			break;
		
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 66:
		case 67:
		case 68:
		case 69:
			Var0 = { 342,8157f, -997,4288f, -100f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 70:
		case 71:
		case 72:
			Var0 = { 260,3297f, -997,4288f, -100f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 87:
			Var0 = { -1572,187f, -570,8315f, 109,9879f };
			Var0.f_3 = { 0f, 0f, -54f };
			break;
		
		case 88:
			Var0 = { -1383,954f, -476,7112f, 73,507f };
			Var0.f_3 = { 0f, 0f, 8f };
			break;
		
		case 89:
			Var0 = { -138,0029f, -629,739f, 170,2854f };
			Var0.f_3 = { 0f, 0f, -84f };
			break;
		
		case 90:
			Var0 = { -74,8895f, -817,6883f, 244,8508f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
			Var0 = { 1100,764f, -3159,384f, -34,9342f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 97:
		case 98:
		case 99:
		case 100:
		case 101:
		case 102:
			Var0 = { 1005,806f, -3157,67f, -36,0897f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 103:
			if (!bParam1)
			{
				Var0 = { -1576,571f, -569,7595f, 85,5f };
				Var0.f_3 = { 0f, 0f, 36,1f };
			}
			else
			{
				Var0 = { -1578,022f, -576,4251f, 104,2f };
				Var0.f_3 = { 0f, 0f, -144,04f };
			}
			break;
		
		case 104:
			if (!bParam1)
			{
				Var0 = { -1571,254f, -566,5865f, 85,5f };
				Var0.f_3 = { 0f, 0f, -53,9f };
			}
			else
			{
				Var0 = { -1578,022f, -576,4251f, 104,2f };
				Var0.f_3 = { 0f, 0f, -144,04f };
			}
			break;
		
		case 105:
			if (!bParam1)
			{
				Var0 = { -1568,098f, -571,9171f, 85,5f };
				Var0.f_3 = { 0f, 0f, -143,9f };
			}
			else
			{
				Var0 = { -1578,022f, -576,4251f, 104,2f };
				Var0.f_3 = { 0f, 0f, -144,04f };
			}
			break;
		
		case 106:
			if (!bParam1)
			{
				Var0 = { -1384,518f, -475,8657f, 56,1f };
				Var0.f_3 = { 0f, 0f, 98,7f };
			}
			else
			{
				Var0 = { -1391,245f, -473,9638f, 77,2f };
				Var0.f_3 = { 0f, 0f, 98,86f };
			}
			break;
		
		case 107:
			if (!bParam1)
			{
				Var0 = { -1384,538f, -475,8829f, 48,1f };
				Var0.f_3 = { 0f, 0f, 98,7f };
			}
			else
			{
				Var0 = { -1391,245f, -473,9638f, 77,2f };
				Var0.f_3 = { 0f, 0f, 98,86f };
			}
			break;
		
		case 108:
			if (!bParam1)
			{
				Var0 = { -1378,994f, -477,2481f, 56,1f };
				Var0.f_3 = { 0f, 0f, -81,1f };
			}
			else
			{
				Var0 = { -1391,245f, -473,9638f, 77,2f };
				Var0.f_3 = { 0f, 0f, 98,86f };
			}
			break;
		
		case 109:
			if (!bParam1)
			{
				Var0 = { -186,5683f, -576,4624f, 135f };
				Var0.f_3 = { 0f, 0f, 96,16f };
			}
			else
			{
				Var0 = { -146,6167f, -596,6301f, 166f };
				Var0.f_3 = { 0f, 0f, -140f };
			}
			break;
		
		case 110:
			if (!bParam1)
			{
				Var0 = { -113,886f, -564,3862f, 135f };
				Var0.f_3 = { 0f, 0f, 110,96f };
			}
			else
			{
				Var0 = { -146,6167f, -596,6301f, 166f };
				Var0.f_3 = { 0f, 0f, -140f };
			}
			break;
		
		case 111:
			if (!bParam1)
			{
				Var0 = { -134,6568f, -635,1774f, 135f };
				Var0.f_3 = { 0f, 0f, -9,04f };
			}
			else
			{
				Var0 = { -146,6167f, -596,6301f, 166f };
				Var0.f_3 = { 0f, 0f, -140f };
			}
			break;
		
		case 112:
			if (!bParam1)
			{
				Var0 = { -79,0479f, -822,6393f, 221f };
				Var0.f_3 = { 0f, 0f, 70f };
			}
			else
			{
				Var0 = { -73,904f, -821,6204f, 284f };
				Var0.f_3 = { 0f, 0f, -110f };
			}
			break;
		
		case 113:
			if (!bParam1)
			{
				Var0 = { -70,3086f, -819,5784f, 221f };
				Var0.f_3 = { 0f, 0f, 160f };
			}
			else
			{
				Var0 = { -73,904f, -821,6204f, 284f };
				Var0.f_3 = { 0f, 0f, -110f };
			}
			break;
		
		case 114:
			if (!bParam1)
			{
				Var0 = { -79,9861f, -818,425f, 221f };
				Var0.f_3 = { 0f, 0f, -20f };
			}
			else
			{
				Var0 = { -73,904f, -821,6204f, 284f };
				Var0.f_3 = { 0f, 0f, -110f };
			}
			break;
	}
	return Var0;
}

Vector3 func_36()//Position - 0x45D6
{
	return 2,55f, 5,665f, 2,55f;
}

void func_37(bool bParam0)//Position - 0x45ED
{
	func_27(5, bParam0);
	unk_0x98C1EDA986B07E1D(bParam0);
}

void func_38(int iParam0, vector3 vParam1, float fParam2)//Position - 0x4602
{
	unk_0xBD8D47FDC6902B2D(iParam0, vParam1, 1, false, 0, 1);
	unk_0x48ED7B2293A96722(iParam0, fParam2);
}

void func_39(int iParam0, bool bParam1)//Position - 0x4620
{
	char* sVar0;
	int iVar1;
	
	sVar0 = "NULL";
	iVar1 = 0;
	sVar0 = func_33(iParam0, &iVar1);
	if (!unk_0x74C475EB8E73D398("NONE", sVar0) && iVar1 != 0)
	{
		if (bParam1)
		{
			if (unk_0x3E2AFE2AD370D62E(iVar1))
			{
				return;
			}
			if (unk_0x1ACD6691B9C9AA46(unk_0xFC1458A37D98B502()) == iVar1)
			{
				func_42(iParam0, 1);
				return;
			}
		}
		else
		{
			if (!unk_0x3E2AFE2AD370D62E(iVar1))
			{
				return;
			}
			if (func_40(iParam0))
			{
				func_42(iParam0, 0);
			}
		}
		unk_0xF041CE5E4A02F602(iVar1, bParam1);
		if (bParam1)
		{
		}
	}
}

int func_40(int iParam0)//Position - 0x46AB
{
	struct<2> Var0;
	
	Var0 = { func_41(iParam0) };
	if (Var0.f_1 != -1 && unk_0xC80D31E4B587871C(Global_31639[Var0.f_1], Var0))
	{
		return 1;
	}
	return 0;
}

struct<2> func_41(var uParam0)//Position - 0x46DF
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<2> Var3;
	
	iVar0 = uParam0;
	iVar1 = 0;
	iVar2 = 0;
	Var3 = -1;
	Var3.f_1 = -1;
	while (iVar1 < 6)
	{
		iVar2 += 32;
		if (iVar0 < iVar2)
		{
			Var3.f_1 = iVar1;
			Var3 = (iVar0 - Var3.f_1 * 32);
			return Var3;
		}
		iVar1++;
	}
	return Var3;
}

void func_42(int iParam0, bool bParam1)//Position - 0x4731
{
	struct<2> Var0;
	
	Var0 = { func_41(iParam0) };
	if (Var0.f_1 == -1)
	{
		return;
	}
	if (bParam1)
	{
		unk_0x872F1C1F8587CCC7(&(Global_31639[Var0.f_1]), Var0);
	}
	else
	{
		unk_0x0EE72DB1CD8A3B86(&(Global_31639[Var0.f_1]), Var0);
	}
}

void func_43()//Position - 0x4774
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	
	vVar0 = { -1007,013f, -478,3662f, 49,02818f };
	vVar1 = { -1007,85f, -476,9573f, 51,02807f };
	fVar2 = 1,75f;
	switch (iLocal_61)
	{
		case 0:
			if (unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), vVar0, vVar1, fVar2, 0, true, 0) && !func_5(0))
			{
				func_47(sLocal_76);
				iLocal_61++;
			}
			break;
		
		case 1:
			if (unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), vVar0, vVar1, fVar2, 0, true, 0) && !func_5(0))
			{
				if (!func_46(unk_0xFC1458A37D98B502(), -880529684))
				{
					unk_0xBA54D3D84EF38E3D(unk_0xFC1458A37D98B502(), -1007,995f, -476,8016f, 49,9117f, -1, 0, 2);
				}
				if (unk_0xE8C126B7ADBB9D63(2, 51))
				{
					func_45(0);
					unk_0x380C1E7B7740D618(unk_0xFC1458A37D98B502(), -1007,351f, -477,5197f, 49,0282f, 1f, -1, 0,5f, 0, 30,4025f);
					func_47(sLocal_77);
					unk_0x9B47B379EE749C38(false);
					unk_0x7849794435F39D49(iLocal_62, true);
					unk_0x3458550DF8E9B453(true, false, 3000, 1, 0, 0);
					iLocal_61++;
				}
			}
			else
			{
				unk_0x3E80C2F7BC665259(1);
				unk_0xB8E08BD5B184DF4E(unk_0xFC1458A37D98B502());
				iLocal_61 = (iLocal_61 - 1);
			}
			break;
		
		case 2:
			func_48(0);
			func_45(0);
			unk_0x9B47B379EE749C38(false);
			if (!func_44(sLocal_77))
			{
				func_47(sLocal_77);
			}
			if (unk_0xE8C126B7ADBB9D63(2, 51))
			{
				if (unk_0x8E8C94609BA4BEA9(0) == 4)
				{
					iLocal_72 = unk_0x53C562FD2B9E3AB0() + 300;
					unk_0xA91E83FF512776B6("CamPushInNeutral", 0, 0);
					unk_0x4AFBCBFDE748D4E0(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", false);
				}
				else
				{
					iLocal_72 = 0;
				}
				iLocal_61++;
			}
			break;
		
		case 3:
			func_48(0);
			if (iLocal_72 < unk_0x53C562FD2B9E3AB0())
			{
				unk_0xBB9A3C553EECB180(0f);
				unk_0x7C9705890EF6612E(0f, 1065353216);
				unk_0x9B47B379EE749C38(true);
				func_45(1);
				unk_0xB8E08BD5B184DF4E(unk_0xFC1458A37D98B502());
				unk_0x3458550DF8E9B453(false, false, 3000, 1, 0, 0);
				unk_0x7849794435F39D49(iLocal_62, false);
				iLocal_61++;
			}
			break;
		
		case 4:
			iLocal_61 = 0;
			break;
	}
}

int func_44(char* sParam0)//Position - 0x4971
{
	unk_0x5BE7193BC62CE2CE(sParam0);
	return unk_0x0683D2027E169355(0);
}

void func_45(bool bParam0)//Position - 0x4984
{
	func_27(6, !bParam0);
	unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), bParam0, 0);
}

bool func_46(int iParam0, int iParam1)//Position - 0x499F
{
	int iVar0;
	
	iVar0 = unk_0x78F50AA8F955BEFC(iParam0, iParam1);
	return (iVar0 == 1 || iVar0 == 0);
}

void func_47(char* sParam0)//Position - 0x49BF
{
	unk_0x67129637F30DEB3F(sParam0);
	unk_0x376CFA11DE0FE521(0, 1, true, -1);
}

void func_48(int iParam0)//Position - 0x49D5
{
	if (!Global_14453.f_1 == 1)
	{
		if (func_5(0))
		{
			func_49(iParam0);
		}
		unk_0x872F1C1F8587CCC7(&Global_2324, 2);
	}
}

void func_49(int iParam0)//Position - 0x49FE
{
	if (Global_14615)
	{
		func_51(0, 0);
	}
	if (Global_14453.f_1 == 10 || Global_14453.f_1 == 9)
	{
		unk_0x872F1C1F8587CCC7(&Global_2324, 16);
	}
	if (unk_0x0DBDCC9C5537E157())
	{
		unk_0xB31CEFB00C146C91(false);
	}
	Global_15756 = 5;
	if (iParam0 == 1)
	{
		unk_0x872F1C1F8587CCC7(&Global_2323, 30);
	}
	else
	{
		unk_0x0EE72DB1CD8A3B86(&Global_2323, 30);
	}
	if (!func_50())
	{
		Global_14453.f_1 = 3;
	}
}

int func_50()//Position - 0x4A6E
{
	if (Global_14453.f_1 == 1 || Global_14453.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_51(bool bParam0, bool bParam1)//Position - 0x4A95
{
	if (bParam0)
	{
		if (func_5(0))
		{
			Global_14615 = 1;
			if (bParam1)
			{
				unk_0x494F5FA1BF017D58(&Global_14390);
			}
			Global_14381 = { Global_14399[Global_14398 /*3*/] };
			unk_0x0D75BB9393CE608D(Global_14381);
		}
	}
	else if (Global_14615 == 1)
	{
		Global_14615 = 0;
		Global_14381 = { Global_14406[Global_14398 /*3*/] };
		if (bParam1)
		{
			unk_0x0D75BB9393CE608D(Global_14390);
		}
		else
		{
			unk_0x0D75BB9393CE608D(Global_14381);
		}
	}
}

void func_52()//Position - 0x4B09
{
	Global_17162.f_6 = 1;
}

void func_53(bool bParam0, int iParam1)//Position - 0x4B17
{
	func_27(4, !bParam0);
	if (bParam0)
	{
		unk_0x59C3AC31C7544A28(iParam1);
	}
	else
	{
		unk_0xAE83ED4C9081AE6F(iParam1);
	}
}

int func_54()//Position - 0x4B3B
{
	int iVar0;
	
	iVar0 = unk_0x674C9438180770FE();
	if (iVar0 >= 21 || iVar0 < 6)
	{
		return 1;
	}
	func_2("MM_SOLBUSY", 5000);
	return 0;
}

int func_55()//Position - 0x4B6E
{
	if (iLocal_60 == 1)
	{
		return 1;
	}
	if (!func_63())
	{
		return 0;
	}
	if (!func_58(61))
	{
		return 0;
	}
	if (unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) > 0 && iLocal_60 == 0)
	{
		return 0;
	}
	if (func_62(0))
	{
		return 0;
	}
	if (func_57())
	{
		return 0;
	}
	if (func_12(func_10()))
	{
		if (func_56(func_10()) == 4 || func_56(func_10()) == 5)
		{
			return 0;
		}
	}
	if (unk_0x17E356AF4F930A2C())
	{
		return 0;
	}
	if (Global_25379)
	{
		return 0;
	}
	return 1;
}

int func_56(int iParam0)//Position - 0x4C0D
{
	if (!func_12(iParam0))
	{
		return 7;
	}
	return Global_104555.f_7658.f_919[iParam0];
}

int func_57()//Position - 0x4C31
{
	int iVar0;
	
	if (Global_25383)
	{
		if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
		{
			iVar0 = unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0);
			if (unk_0xB8DE76287EDC4957(iVar0, 0))
			{
				if (!unk_0x3AB6A1A9084FB0A4(unk_0x317536BCEA8FA6B0(iVar0, 0, 0)))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_58(int iParam0)//Position - 0x4C75
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_104555.f_9055.f_330[iParam0 /*6*/];
}

int func_59(int iParam0)//Position - 0x4CA1
{
	if (unk_0x6ADD12BF4D6D2587(iParam0))
	{
		if (!unk_0x191BE1BC8F26F3C1(iParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_60(int iParam0, bool bParam1, bool bParam2)//Position - 0x4CC2
{
	if (bParam1)
	{
		unk_0x872F1C1F8587CCC7(&(Global_104555.f_10019.f_133), iParam0);
		if (!bParam2)
		{
			unk_0x4AFBCBFDE748D4E0(iLocal_69, sLocal_67, sLocal_68, false);
		}
		func_61();
	}
	else
	{
		unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_10019.f_133), iParam0);
	}
}

int func_61()//Position - 0x4D06
{
	if (func_62(0))
	{
		return 0;
	}
	if (Global_92872.f_8)
	{
		if (Global_92872.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_92872.f_10 > 1)
	{
		return 0;
	}
	Global_92872.f_10++;
	return 1;
}

bool func_62(bool bParam0)//Position - 0x4D51
{
	if (!bParam0 && unk_0x8F38E94BBF3404CD(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xC80D31E4B587871C(Global_71104, 0);
}

bool func_63()//Position - 0x4D7C
{
	return unk_0x82FF3DFBC3965CC0(unk_0xFC1458A37D98B502()) == joaat("player_zero");
}

int func_64()//Position - 0x4D92
{
	if (func_59(unk_0xFC1458A37D98B502()))
	{
		return unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0);
	}
	return 0;
}

bool func_65()//Position - 0x4DB2
{
	return system::vdist2(func_67(iLocal_71), vLocal_70) < func_66(iLocal_71);
}

float func_66(int iParam0)//Position - 0x4DCF
{
	switch (iParam0)
	{
		case 0:
			return fLocal_48;
		
		case 1:
			return fLocal_48;
		
		case 2:
			return fLocal_48;
		
		case 3:
			return fLocal_48;
		
		case 4:
			return fLocal_49;
		
		case 5:
			return fLocal_50;
		
		case 6:
			return 4f;
		
		default:
	}
	return 0f;
}

Vector3 func_67(int iParam0)//Position - 0x4E40
{
	switch (iParam0)
	{
		case 0:
			return 1,8941f, 309,6565f, 111,0097f;
		
		case 1:
			return 190,1696f, -431,7692f, 42,1372f;
		
		case 2:
			return 283,3024f, 212,6587f, 104,5986f;
		
		case 3:
			return -425,1273f, 1064,801f, 323,8097f;
		
		case 4:
			return -3160,96f, 3005,628f, -39,9701f;
		
		case 5:
			return -1008,142f, -476,2818f, 49,9633f;
		
		case 6:
			return -544,11f, 1986,58f, 127,03f;
		
		default:
	}
	return 0f, 0f, 0f;
}

bool func_68(int iParam0)//Position - 0x4F0F
{
	return unk_0xC80D31E4B587871C(Global_104555.f_10019.f_133, iParam0);
}

int func_69()//Position - 0x4F26
{
	switch (iLocal_71)
	{
		case 0:
		case 1:
		case 2:
		case 3:
			return (!func_68(iLocal_71) && func_71());
		
		case 4:
			return func_71();
		
		case 5:
			return ((((func_16(iLocal_71) && func_71()) || iLocal_60 == 1) || iLocal_60 == 3) || iLocal_60 == 2);
		
		case 6:
			return (func_71() || (func_28(2) && func_70(vLocal_58)));
		
		default:
	}
	return 0;
}

bool func_70(vector3 vParam0)//Position - 0x4FC9
{
	var uVar0;
	var uVar1;
	
	return unk_0x80EDC33C2A4DA2CC(vParam0, &uVar0, &uVar1);
}

bool func_71()//Position - 0x4FDD
{
	return system::vdist2(func_73(iLocal_71), vLocal_70) < func_72(iLocal_71);
}

float func_72(int iParam0)//Position - 0x4FFA
{
	switch (iParam0)
	{
		case 0:
			return fLocal_47;
		
		case 1:
			return fLocal_47;
		
		case 2:
			return fLocal_47;
		
		case 3:
			return fLocal_47;
		
		case 4:
			return fLocal_47;
		
		case 5:
			return fLocal_47;
		
		case 6:
			return fLocal_47;
		
		default:
	}
	return 0f;
}

Vector3 func_73(int iParam0)//Position - 0x506C
{
	switch (iParam0)
	{
		case 0:
			return 1,8941f, 309,6565f, 111,0097f;
		
		case 1:
			return 190,1696f, -431,7692f, 42,1372f;
		
		case 2:
			return 283,3024f, 212,6587f, 104,5986f;
		
		case 3:
			return -425,1273f, 1064,801f, 323,8097f;
		
		case 4:
			return -3174,901f, 3034,061f, -35,645f;
		
		case 5:
			return -1008,69f, -476,4341f, 49,9544f;
		
		case 6:
			return -544,11f, 1986,58f, 127,03f;
		
		default:
	}
	return 0f, 0f, 0f;
}

void func_74()//Position - 0x513B
{
	if (func_59(unk_0xFC1458A37D98B502()))
	{
		vLocal_70 = { unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 0) };
	}
}

void func_75(vector3 vParam0)//Position - 0x515B
{
	int iVar0;
	int iVar1;
	
	if (!func_81())
	{
		unk_0x96A3D9A8A4C7AFD4();
	}
	if (unk_0x8F38E94BBF3404CD(joaat("murdermystery")) > 1)
	{
		unk_0x96A3D9A8A4C7AFD4();
	}
	iVar0 = 0;
	while (iVar0 < 7 && iLocal_71 == 7)
	{
		iVar1 = iVar0;
		if (func_80(vParam0, func_73(iVar1), 1056964608))
		{
			iLocal_71 = iVar1;
		}
		iVar0++;
	}
	func_76();
}

void func_76()//Position - 0x51BE
{
	switch (iLocal_71)
	{
		case 0:
		case 1:
		case 2:
		case 3:
			func_79(&iLocal_73, func_67(iLocal_71), 0,2f);
			break;
		
		case 4:
			func_78(-671910391);
			func_77(sLocal_74);
			iLocal_66 = unk_0xAC992EFAD62C33BF(26, -671910391, func_67(4), 184,5548f, 1, true);
			unk_0x14776E43F90DD454(-671910391);
			unk_0x12C9D41D52A560D6(iLocal_66, sLocal_74, sLocal_75, 1000f, -1000f, -1, 9, 0, 0, 0, 0);
			unk_0x771A86309E0CA47B(iLocal_66, true);
			unk_0xE9B3D12A64CC7C1A(iLocal_66, true);
			unk_0xEDC33A771FAEB393(iLocal_66, true);
			unk_0x8BB5ECF21DDE505B(iLocal_66, 1);
			unk_0xFC0DF15617416876(iLocal_66, 1);
			unk_0xAE01EF4BC84AFE7C(iLocal_66, 118, false);
			unk_0xAE01EF4BC84AFE7C(iLocal_66, 208, true);
			unk_0x1A0806871323CD16(iLocal_66, true);
			unk_0xCE93FCB8A8D8DF0B(iLocal_66, 1862763509);
			break;
		
		case 5:
			iLocal_63 = 731806707;
			unk_0x050E4C90F7375618(iLocal_63, joaat("v_ilev_sol_off_door01"), -1002,147f, -478,064f, 50,117f, 1, 1, 0);
			unk_0xB94AAB49E0BB01DB(iLocal_63, 1, 1, 0);
			iLocal_62 = unk_0x5AC38B4D80D4E352(26379945, -1008,056f, -476,7573f, 50,2493f, -89,5003f, 0f, 38,7952f, 50f, 0, 2);
			break;
		
		case 6:
			func_78(732742363);
			iLocal_64 = unk_0xAC992EFAD62C33BF(26, 732742363, func_67(6), 22,9631f, 1, true);
			unk_0x0B652E456D6A7E32(iLocal_64, 0, 0, 0, false);
			unk_0x14776E43F90DD454(732742363);
			unk_0x8BB5ECF21DDE505B(iLocal_64, 1);
			unk_0xFC0DF15617416876(iLocal_64, 1);
			unk_0x581C574C8D14208E(iLocal_64, joaat("weapon_sniperrifle"));
			unk_0xCE93FCB8A8D8DF0B(iLocal_64, 1862763509);
			iLocal_65 = unk_0x9A331BBF019DCAD2(130556722, -543,71f, 1986,2f, 126,05f, true, true, false);
			break;
	}
}

void func_77(char* sParam0)//Position - 0x5376
{
	unk_0x6450931B826B49D9(sParam0);
	while (!unk_0x3A801AA34DD821BE(sParam0))
	{
		system::wait(0);
	}
}

void func_78(int iParam0)//Position - 0x5396
{
	unk_0x6FF834D85E2DD4C6(iParam0);
	while (!unk_0x9A0B2ED5055D3F0B(iParam0))
	{
		system::wait(0);
	}
}

void func_79(int iParam0, vector3 vParam1, float fParam2)//Position - 0x53B6
{
	*iParam0 = unk_0x3396DCF953C815C0();
	if (*iParam0 == 0)
	{
	}
	else
	{
		unk_0xC19FFBCB12A83582(*iParam0, vParam1, fParam2);
	}
}

bool func_80(vector3 vParam0, vector3 vParam1, float fParam2)//Position - 0x53DC
{
	return system::vdist(vParam0, vParam1) <= fParam2;
}

int func_81()//Position - 0x53F3
{
	int iVar0;
	
	if (unk_0x4CAC17F5502E6EEB())
	{
		if (unk_0xE9F0A7BEA240607F())
		{
			if (unk_0x9881A219FD811741())
			{
				unk_0xFA3CE529DBB66C85(joaat("sp_unlock_exclus_content"), &iVar0, -1);
				unk_0x872F1C1F8587CCC7(&iVar0, 2);
				unk_0x872F1C1F8587CCC7(&iVar0, 4);
				unk_0x872F1C1F8587CCC7(&iVar0, 6);
				unk_0x872F1C1F8587CCC7(&Global_25, 2);
				unk_0x872F1C1F8587CCC7(&Global_25, 4);
				unk_0x872F1C1F8587CCC7(&Global_25, 6);
				unk_0xBFFF62F75445099D(joaat("sp_unlock_exclus_content"), iVar0, 1);
				if (unk_0x2E68557F22711FDA())
				{
					iVar0 = unk_0x496616BFA56C89EB(866);
					unk_0x872F1C1F8587CCC7(&iVar0, 0);
					unk_0xDDFB38BD8B59BBB9(iVar0);
				}
				return 1;
			}
		}
	}
	if (Global_143074 == 2)
	{
		return 1;
	}
	else if (Global_143074 == 3)
	{
		return 0;
	}
	if (unk_0x2E68557F22711FDA())
	{
		if (unk_0xC80D31E4B587871C(unk_0x496616BFA56C89EB(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_82()//Position - 0x54AE
{
	func_83();
	func_31();
	unk_0x96A3D9A8A4C7AFD4();
}

void func_83()//Position - 0x54C2
{
	switch (iLocal_71)
	{
		case 0:
		case 1:
		case 2:
		case 3:
			unk_0xDAD77B070BCA2C6C(iLocal_73);
			iLocal_73 = 0;
			break;
		
		case 4:
			if (unk_0x6ADD12BF4D6D2587(iLocal_66))
			{
				unk_0x486F346ADFE56674(&iLocal_66);
			}
			unk_0xFCCDDE0E48CF9588(sLocal_74);
			break;
		
		case 5:
			if (unk_0x546F10CBA6C484DA(iLocal_63))
			{
				unk_0x907562D8313A11C1(iLocal_63);
			}
			if (unk_0x8EA3C8E091EA5BA4(iLocal_62))
			{
				unk_0x02934BABFD4CD384(iLocal_62, 0);
			}
			if (func_28(4))
			{
				unk_0x59C3AC31C7544A28(0);
			}
			if (func_28(5))
			{
				unk_0x98C1EDA986B07E1D(false);
			}
			if (func_28(6))
			{
				unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), true, 0);
			}
			if (func_44(sLocal_76) || func_44(sLocal_77))
			{
				unk_0x3E80C2F7BC665259(1);
			}
			break;
		
		case 6:
			if (unk_0x6ADD12BF4D6D2587(iLocal_64))
			{
				unk_0x486F346ADFE56674(&iLocal_64);
			}
			if (unk_0x6ADD12BF4D6D2587(iLocal_65))
			{
				unk_0x3A703774620FDB42(&iLocal_65);
			}
			if (func_28(2))
			{
				unk_0x143DCD09D82EE129(vLocal_58, 200f, -1241212535, false);
			}
			break;
	}
}

