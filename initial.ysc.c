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
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
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
	iLocal_46 = 202;
	iLocal_47 = 201;
	iLocal_48 = 24;
	iLocal_49 = 202;
	iLocal_50 = 25;
	unk_0x252CDD3D0F299441();
	unk_0x4FB260623DD93924(2, 199, 1);
	func_214();
	func_79();
	func_72();
	func_62();
	func_56();
	if (Global_1)
	{
		if (!Global_70857 || Global_2)
		{
			func_43();
			func_39();
			func_36();
			func_35();
		}
	}
	Global_2 = 0;
	if (unk_0x6568AF246B58DCCC() != 5)
	{
		func_34();
	}
	func_32();
	func_31();
	func_7();
	func_6();
	func_2();
	func_1();
	unk_0x2DB625A7D089C175(2, 199, 1);
	unk_0x96A3D9A8A4C7AFD4();
}

void func_1()//Position - 0x100
{
}

void func_2()//Position - 0x108
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (!func_5(86))
	{
		func_4(4, 0, 0);
		iVar0 = 0;
		while (iVar0 < 5)
		{
			Global_104555.f_1.f_12[1 /*6*/][iVar0] = 0;
			Global_104555.f_1.f_12[2 /*6*/][iVar0] = 0;
			iVar0++;
		}
		func_4(5, 0, 0);
		func_3(7, 0);
		Global_104555.f_1.f_120[0] = 0;
	}
	if (!func_5(71))
	{
		func_4(4, 1, 0);
		iVar1 = 0;
		while (iVar1 < 5)
		{
			Global_104555.f_1.f_12[3 /*6*/][iVar1] = 0;
			Global_104555.f_1.f_12[4 /*6*/][iVar1] = 0;
			iVar1++;
		}
		func_4(5, 1, 0);
		func_3(8, 0);
		Global_104555.f_1.f_120[1] = 0;
	}
	if (!func_5(91))
	{
		func_4(4, 2, 0);
		iVar2 = 0;
		while (iVar2 < 5)
		{
			Global_104555.f_1.f_12[5 /*6*/][iVar2] = 0;
			iVar2++;
		}
		Global_104555.f_1.f_120[2] = 0;
	}
	if (!func_5(67))
	{
		func_4(4, 3, 0);
		iVar3 = 0;
		while (iVar3 < 5)
		{
			Global_104555.f_1.f_12[6 /*6*/][iVar3] = 0;
			Global_104555.f_1.f_12[7 /*6*/][iVar3] = 0;
			iVar3++;
		}
		func_4(5, 3, 0);
		func_3(10, 0);
		unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_1.f_120[3]), 2);
		unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_1.f_120[3]), 3);
		unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_1.f_120[3]), 4);
		unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_1.f_120[3]), 5);
		unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_1.f_120[3]), 6);
		unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_1.f_120[3]), 7);
		unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_1.f_120[3]), 8);
		unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_1.f_120[3]), 9);
		unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_1.f_120[3]), 10);
		unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_1.f_120[3]), 11);
	}
	if (!func_5(77))
	{
		func_4(4, 4, 0);
		iVar4 = 0;
		while (iVar4 < 5)
		{
			Global_104555.f_1.f_12[9 /*6*/][iVar4] = 0;
			Global_104555.f_1.f_12[8 /*6*/][iVar4] = 0;
			iVar4++;
		}
		func_4(5, 4, 0);
		func_3(11, 0);
		unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_1.f_120[4]), 2);
		unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_1.f_120[4]), 3);
		unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_1.f_120[4]), 4);
		unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_1.f_120[4]), 5);
		unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_1.f_120[4]), 6);
		unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_1.f_120[4]), 7);
		unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_1.f_120[4]), 8);
		unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_1.f_120[4]), 9);
		unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_1.f_120[4]), 10);
		unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_1.f_120[4]), 11);
	}
}

void func_3(int iParam0, int iParam1)//Position - 0x3F4
{
	if (iParam0 == 13 || iParam0 == -1)
	{
		return;
	}
	if (Global_104555.f_9055.f_99.f_205[iParam0] == iParam1)
	{
		return;
	}
	Global_104555.f_9055.f_99.f_205[iParam0] = iParam1;
}

void func_4(int iParam0, int iParam1, bool bParam2)//Position - 0x439
{
	bool bVar0;
	
	if (iParam0 == 11 || iParam0 == -1)
	{
		return;
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return;
	}
	bVar0 = unk_0xC80D31E4B587871C(Global_104555.f_9055.f_99.f_219[iParam0], iParam1);
	if (bVar0 == bParam2)
	{
		return;
	}
	if (bParam2)
	{
		unk_0x872F1C1F8587CCC7(&(Global_104555.f_9055.f_99.f_219[iParam0]), iParam1);
	}
	else
	{
		unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_9055.f_99.f_219[iParam0]), iParam1);
	}
}

int func_5(int iParam0)//Position - 0x4BE
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_104555.f_9055.f_330[iParam0 /*6*/];
}

void func_6()//Position - 0x4EA
{
	if (!unk_0x9F0887BCBFCF3C2F(8))
	{
		unk_0xBCBC53983EC3B1BA("MISHSTA", 8);
	}
}

void func_7()//Position - 0x504
{
	func_30();
	func_29();
	func_24();
	func_23();
	func_22();
	func_21();
	func_20();
	func_19();
	func_15();
	func_14();
	func_12();
	func_11(19, 65);
	func_11(1, 67);
	func_11(2, 68);
	func_11(5, 76);
	func_11(9, 94);
	func_11(13, 96);
	func_8();
	func_11(13, 98);
	func_11(13, 99);
	func_11(13, 100);
	func_11(13, 101);
	func_11(13, 102);
	func_11(13, 103);
	func_11(18, 110);
	func_11(18, 111);
	Global_31631 = 1;
}

void func_8()//Position - 0x5A2
{
	if (func_5(21) && !func_5(22))
	{
		func_10(97, 0, 0);
	}
	else
	{
		func_10(97, func_9(13), 0);
	}
}

bool func_9(int iParam0)//Position - 0x5D6
{
	return unk_0xC80D31E4B587871C(Global_104555.f_9055.f_99.f_219[0], iParam0);
}

void func_10(int iParam0, bool bParam1, bool bParam2)//Position - 0x5F2
{
	int iVar0;
	bool bVar1;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (!bParam2)
	{
		bVar1 = unk_0xC80D31E4B587871C(Global_25578[iVar0 /*23*/].f_11, 15);
		if (bVar1 == bParam1)
		{
			return;
		}
	}
	if (bParam1 != unk_0xC80D31E4B587871C(Global_25578[iVar0 /*23*/].f_11, 0))
	{
		unk_0x872F1C1F8587CCC7(&(Global_25578[iVar0 /*23*/].f_11), 18);
		if (Global_25575 == 1)
		{
			Global_25576 = 1;
		}
		Global_25575 = 1;
	}
	if (bParam1)
	{
		unk_0x872F1C1F8587CCC7(&(Global_25578[iVar0 /*23*/].f_11), 0);
		unk_0x872F1C1F8587CCC7(&(Global_25578[iVar0 /*23*/].f_11), 15);
		unk_0x872F1C1F8587CCC7(&(Global_25578[iVar0 /*23*/].f_11), 3);
	}
	else
	{
		unk_0x0EE72DB1CD8A3B86(&(Global_25578[iVar0 /*23*/].f_11), 0);
		unk_0x0EE72DB1CD8A3B86(&(Global_25578[iVar0 /*23*/].f_11), 15);
	}
	if (!unk_0xC80D31E4B587871C(Global_25578[iVar0 /*23*/].f_11, 0))
	{
		if (unk_0xA6DECE14FC9A8C51(Global_25578[iVar0 /*23*/].f_19))
		{
			unk_0x62D1DA6940EE5FAA(1);
			unk_0xE30CF11C0EE14316(&(Global_25578[iVar0 /*23*/].f_19));
			unk_0x62D1DA6940EE5FAA(0);
		}
	}
}

void func_11(int iParam0, int iParam1)//Position - 0x6FB
{
	func_10(iParam1, func_9(iParam0), 0);
}

void func_12()//Position - 0x710
{
	bool bVar0;
	
	func_10(107, func_9(17), 0);
	func_10(108, Global_104555.f_19981.f_8 >= 1, 0);
	func_13(107, Global_104555.f_19981.f_8 > 0);
	func_13(108, Global_104555.f_19981.f_8 > 1);
	if (Global_104555.f_9055.f_99.f_58[130] && !Global_104555.f_9055.f_99.f_58[131])
	{
		func_10(109, 0, 0);
	}
	else
	{
		func_10(109, Global_104555.f_19981.f_8 >= 2, 0);
		bVar0 = (Global_104555.f_19981[2] <= 3 && Global_104555.f_19981[2] != 0);
		func_13(109, bVar0);
	}
}

void func_13(int iParam0, bool bParam1)//Position - 0x7C3
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (bParam1 == unk_0xC80D31E4B587871C(Global_25578[iVar0 /*23*/].f_11, 20))
	{
		return;
	}
	if (bParam1)
	{
		unk_0x872F1C1F8587CCC7(&(Global_25578[iVar0 /*23*/].f_11), 20);
	}
	else
	{
		unk_0x0EE72DB1CD8A3B86(&(Global_25578[iVar0 /*23*/].f_11), 20);
	}
	if (Global_25575 == 1)
	{
		Global_25576 = 1;
	}
	Global_25575 = 1;
	unk_0x872F1C1F8587CCC7(&(Global_25578[iVar0 /*23*/].f_11), 20);
}

void func_14()//Position - 0x84C
{
	func_10(105, func_9(15), 0);
	func_10(106, func_9(16), 0);
}

void func_15()//Position - 0x86C
{
	if ((func_18() || func_17()) || func_16())
	{
		func_11(10, 95);
	}
	else
	{
		func_10(95, 0, 0);
	}
}

int func_16()//Position - 0x8A1
{
	return 0;
}

int func_17()//Position - 0x8AA
{
	return 1;
}

int func_18()//Position - 0x8B3
{
	return 1;
}

void func_19()//Position - 0x8BC
{
	func_10(86, unk_0xC80D31E4B587871C(Global_104555.f_24949.f_1, 0), 0);
	func_10(87, unk_0xC80D31E4B587871C(Global_104555.f_24949.f_1, 1), 0);
	func_10(88, unk_0xC80D31E4B587871C(Global_104555.f_24949.f_1, 2), 0);
	func_10(89, unk_0xC80D31E4B587871C(Global_104555.f_24949.f_1, 3), 0);
	func_10(90, unk_0xC80D31E4B587871C(Global_104555.f_24949.f_1, 4), 0);
	if (unk_0xC80D31E4B587871C(Global_104555.f_24949.f_2, 0))
	{
		func_13(86, 1);
	}
	if (unk_0xC80D31E4B587871C(Global_104555.f_24949.f_2, 1))
	{
		func_13(87, 1);
	}
	if (unk_0xC80D31E4B587871C(Global_104555.f_24949.f_2, 2))
	{
		func_13(88, 1);
	}
	if (unk_0xC80D31E4B587871C(Global_104555.f_24949.f_2, 3))
	{
		func_13(89, 1);
	}
	if (unk_0xC80D31E4B587871C(Global_104555.f_24949.f_2, 4))
	{
		func_13(90, 1);
	}
}

void func_20()//Position - 0x9A5
{
	func_10(82, func_9(7), 0);
	func_10(83, func_9(7), 0);
	func_10(84, func_9(7), 0);
	func_10(85, func_9(7), 0);
	if (unk_0xC80D31E4B587871C(Global_104555.f_24946.f_1, 0))
	{
		func_13(82, 1);
	}
	if (unk_0xC80D31E4B587871C(Global_104555.f_24946.f_1, 1))
	{
		func_13(83, 1);
	}
	if (unk_0xC80D31E4B587871C(Global_104555.f_24946.f_1, 2))
	{
		func_13(84, 1);
	}
	if (unk_0xC80D31E4B587871C(Global_104555.f_24946.f_1, 3))
	{
		func_13(85, 1);
	}
}

void func_21()//Position - 0xA3D
{
	func_10(70, func_9(4), 0);
	func_13(70, (Global_104555.f_18986.f_2[0] <= 3 && Global_104555.f_18986.f_2[0] > 0));
	func_10(71, Global_104555.f_18986.f_1 >= 1, 0);
	func_13(71, (Global_104555.f_18986.f_2[1] <= 3 && Global_104555.f_18986.f_2[1] > 0));
	func_10(72, Global_104555.f_18986.f_1 >= 2, 0);
	func_13(72, (Global_104555.f_18986.f_2[2] <= 3 && Global_104555.f_18986.f_2[2] > 0));
	func_10(73, Global_104555.f_18986.f_1 >= 3, 0);
	func_13(73, (Global_104555.f_18986.f_2[3] <= 3 && Global_104555.f_18986.f_2[3] > 0));
	func_10(74, Global_104555.f_18986.f_1 >= 4, 0);
	func_13(74, (Global_104555.f_18986.f_2[4] <= 3 && Global_104555.f_18986.f_2[4] > 0));
	func_10(75, Global_104555.f_18986.f_1 >= 5, 0);
	func_13(75, (Global_104555.f_18986.f_2[5] <= 3 && Global_104555.f_18986.f_2[5] > 0));
}

void func_22()//Position - 0xB95
{
	func_10(69, func_9(3), 0);
}

void func_23()//Position - 0xBA9
{
	int iVar0;
	
	func_10(125, func_9(0), 0);
	func_10(126, func_9(0), 0);
	func_10(127, func_9(0), 0);
	func_10(128, func_9(0), 0);
	func_10(129, (func_9(0) && !Global_103642[19 /*10*/].f_1), 0);
	func_10(130, func_9(0), 0);
	func_10(131, func_9(0), 0);
	func_10(132, (func_9(0) && (!func_5(16) || func_5(65))), 0);
	func_10(133, func_9(0), 0);
	func_10(134, func_9(0), 0);
	func_10(135, func_9(0), 0);
	func_10(136, func_9(0), 0);
	func_10(137, func_9(0), 0);
	iVar0 = 125;
	if (unk_0xC80D31E4B587871C(Global_104555.f_18937.f_1, (125 - iVar0)))
	{
		func_13(125, 1);
	}
	if (unk_0xC80D31E4B587871C(Global_104555.f_18937.f_1, (126 - iVar0)))
	{
		func_13(126, 1);
	}
	if (unk_0xC80D31E4B587871C(Global_104555.f_18937.f_1, (127 - iVar0)))
	{
		func_13(127, 1);
	}
	if (unk_0xC80D31E4B587871C(Global_104555.f_18937.f_1, (128 - iVar0)))
	{
		func_13(128, 1);
	}
	if (unk_0xC80D31E4B587871C(Global_104555.f_18937.f_1, (129 - iVar0)))
	{
		func_13(129, 1);
	}
	if (unk_0xC80D31E4B587871C(Global_104555.f_18937.f_1, (130 - iVar0)))
	{
		func_13(130, 1);
	}
	if (unk_0xC80D31E4B587871C(Global_104555.f_18937.f_1, (131 - iVar0)))
	{
		func_13(131, 1);
	}
	if (unk_0xC80D31E4B587871C(Global_104555.f_18937.f_1, (132 - iVar0)))
	{
		func_13(132, 1);
	}
	if (unk_0xC80D31E4B587871C(Global_104555.f_18937.f_1, (133 - iVar0)))
	{
		func_13(133, 1);
	}
	if (unk_0xC80D31E4B587871C(Global_104555.f_18937.f_1, (134 - iVar0)))
	{
		func_13(134, 1);
	}
	if (unk_0xC80D31E4B587871C(Global_104555.f_18937.f_1, (135 - iVar0)))
	{
		func_13(135, 1);
	}
	if (unk_0xC80D31E4B587871C(Global_104555.f_18937.f_1, (136 - iVar0)))
	{
		func_13(136, 1);
	}
	if (unk_0xC80D31E4B587871C(Global_104555.f_18937.f_1, (137 - iVar0)))
	{
		func_13(137, 1);
	}
}

void func_24()//Position - 0xDE5
{
	if (func_5(0) == 1)
	{
		func_10(160, 1, 0);
		func_10(161, 1, 0);
		func_10(156, 1, 0);
		func_10(157, 1, 0);
		func_10(158, 1, 0);
		func_25(158);
		func_10(159, 1, 0);
		func_25(159);
	}
}

void func_25(int iParam0)//Position - 0xE32
{
	func_28(iParam0, 0, 0);
	func_27(iParam0, 1);
	func_26(iParam0, 1);
}

void func_26(int iParam0, bool bParam1)//Position - 0xE50
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (bParam1 == unk_0xC80D31E4B587871C(Global_25578[iVar0 /*23*/].f_11, 4))
	{
		return;
	}
	if (bParam1)
	{
		unk_0x872F1C1F8587CCC7(&(Global_25578[iVar0 /*23*/].f_11), 4);
	}
	else
	{
		unk_0x0EE72DB1CD8A3B86(&(Global_25578[iVar0 /*23*/].f_11), 4);
	}
	if (Global_25575 == 1)
	{
		Global_25576 = 1;
	}
	Global_25575 = 1;
	unk_0x872F1C1F8587CCC7(&(Global_25578[iVar0 /*23*/].f_11), 18);
}

void func_27(int iParam0, bool bParam1)//Position - 0xED6
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (bParam1 == unk_0xC80D31E4B587871C(Global_25578[iVar0 /*23*/].f_11, 5))
	{
		return;
	}
	if (bParam1)
	{
		unk_0x872F1C1F8587CCC7(&(Global_25578[iVar0 /*23*/].f_11), 5);
	}
	else
	{
		unk_0x0EE72DB1CD8A3B86(&(Global_25578[iVar0 /*23*/].f_11), 5);
	}
	if (Global_25575 == 1)
	{
		Global_25576 = 1;
	}
	Global_25575 = 1;
	unk_0x872F1C1F8587CCC7(&(Global_25578[iVar0 /*23*/].f_11), 18);
}

void func_28(int iParam0, bool bParam1, bool bParam2)//Position - 0xF5C
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (bParam1 == unk_0xC80D31E4B587871C(Global_25578[iVar0 /*23*/].f_11, 6))
	{
		return;
	}
	if (bParam1)
	{
		unk_0x872F1C1F8587CCC7(&(Global_25578[iVar0 /*23*/].f_11), 6);
	}
	else
	{
		unk_0x0EE72DB1CD8A3B86(&(Global_25578[iVar0 /*23*/].f_11), 6);
	}
	if (bParam2)
	{
		unk_0x872F1C1F8587CCC7(&(Global_25578[iVar0 /*23*/].f_11), 11);
	}
	else
	{
		unk_0x0EE72DB1CD8A3B86(&(Global_25578[iVar0 /*23*/].f_11), 11);
	}
	if (Global_25575 == 1)
	{
		Global_25576 = 1;
	}
	Global_25575 = 1;
	unk_0x872F1C1F8587CCC7(&(Global_25578[iVar0 /*23*/].f_11), 18);
}

void func_29()//Position - 0x1008
{
	if (func_5(0) == 1)
	{
		func_10(112, 1, 0);
		func_10(113, 1, 0);
		func_10(114, 1, 0);
	}
}

void func_30()//Position - 0x1031
{
	if (Global_104555.f_9055.f_99.f_58[63])
	{
		if (unk_0x8F38E94BBF3404CD(joaat("chop")) == 0)
		{
			if (Global_104555.f_9055.f_99.f_58[126])
			{
				func_10(139, 1, 0);
			}
			else
			{
				func_10(138, 1, 0);
			}
		}
	}
}

void func_31()//Position - 0x107D
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (34 > 60)
	{
	}
	iVar2 = 0;
	while (iVar2 < 34)
	{
		if (iVar2 <= 31)
		{
			iVar0 = 9;
			iVar1 = iVar2;
		}
		else
		{
			iVar0 = 10;
			iVar1 = (iVar2 - 32);
		}
		if (unk_0xC80D31E4B587871C(Global_104555.f_9055.f_99.f_219[iVar0], iVar1))
		{
			if (!unk_0xAB019B170BF1309C(&(Global_87157[iVar2 /*18*/])))
			{
				if (unk_0x8F38E94BBF3404CD(Global_87157[iVar2 /*18*/].f_17) > 0)
				{
				}
				else
				{
					unk_0xD9E2C360120FEB7C(&(Global_87157[iVar2 /*18*/]));
				}
			}
			else
			{
				unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_9055.f_99.f_219[iVar0]), iVar1);
			}
		}
		iVar2++;
	}
	bVar3 = false;
	while (!bVar3)
	{
		bVar3 = true;
		iVar2 = 0;
		while (iVar2 < 34)
		{
			if (iVar2 <= 31)
			{
				iVar0 = 9;
				iVar1 = iVar2;
			}
			else
			{
				iVar0 = 10;
				iVar1 = (iVar2 - 32);
			}
			if (unk_0xC80D31E4B587871C(Global_104555.f_9055.f_99.f_219[iVar0], iVar1))
			{
				if (unk_0x8F38E94BBF3404CD(Global_87157[iVar2 /*18*/].f_17) == 0)
				{
					if (!unk_0x3B6F9DF9C5FEB3A4(&(Global_87157[iVar2 /*18*/])))
					{
						bVar3 = false;
					}
					else
					{
						system::start_new_script(&(Global_87157[iVar2 /*18*/]), Global_87157[iVar2 /*18*/].f_16);
						unk_0x9D2418D7FC697249(&(Global_87157[iVar2 /*18*/]));
					}
				}
			}
			iVar2++;
		}
		system::wait(0);
	}
}

void func_32()//Position - 0x11C3
{
	func_33("heist_ctrl_agency", joaat("heist_ctrl_agency"), 2050, 0);
	func_33("heist_ctrl_docks", joaat("heist_ctrl_docks"), 2050, 1);
	func_33("heist_ctrl_finale", joaat("heist_ctrl_finale"), 2050, 2);
	func_33("heist_ctrl_jewel", joaat("heist_ctrl_jewel"), 2050, 3);
	func_33("heist_ctrl_rural", joaat("heist_ctrl_rural"), 2050, 5);
	func_33("epsCars", joaat("epscars"), 1424, 6);
	func_33("epsDesert", joaat("epsdesert"), 1424, 7);
	func_33("epsRobes", joaat("epsrobes"), 1424, 8);
	func_33("epsilonTract", joaat("epsilontract"), 1424, 9);
	func_33("ambient_MrsPhilips", joaat("ambient_mrsphilips"), 1424, 10);
	func_33("forSaleSigns", joaat("forsalesigns"), 1424, 11);
	func_33("letterScraps", joaat("letterscraps"), 1424, 12);
	func_33("ambient_Sonar", joaat("ambient_sonar"), 1424, 13);
	func_33("spaceshipParts", joaat("spaceshipparts"), 1424, 14);
	func_33("controller_towing", joaat("controller_towing"), 1424, 15);
	func_33("controller_Taxi", joaat("controller_taxi"), 1424, 16);
	func_33("controller_Trafficking", joaat("controller_trafficking"), 1424, 17);
	func_33("exile_city_denial", joaat("exile_city_denial"), 1424, 18);
	func_33("buildingSiteAmbience", joaat("buildingsiteambience"), 128, 19);
	func_33("finale_choice", joaat("finale_choice"), 512, 20);
	func_33("pickupVehicles", joaat("pickupvehicles"), 128, 21);
	func_33("BailBond_Launcher", joaat("bailbond_launcher"), 1424, 22);
	func_33("rampage_controller", joaat("rampage_controller"), 1424, 23);
	func_33("SH_Intro_F_Hills", joaat("sh_intro_f_hills"), 1424, 24);
	func_33("SH_Intro_M_Home", joaat("sh_intro_m_home"), 1424, 25);
	func_33("FBI4_Prep3Amb", joaat("fbi4_prep3amb"), 2050, 26);
	func_33("finale_heist_prepEamb", joaat("finale_heist_prepeamb"), 2050, 31);
	func_33("agency_prep2Amb", joaat("agency_prep2amb"), 2050, 32);
	func_33("ambient_Diving", joaat("ambient_diving"), 1424, 27);
	func_33("ambient_Tonya", joaat("ambient_tonya"), 1424, 28);
	func_33("AF_Intro_T_Sandy", joaat("af_intro_t_sandy"), 1424, 29);
	func_33("ambient_Solomon", joaat("ambient_solomon"), 1424, 30);
}

void func_33(char* sParam0, int iParam1, int iParam2, int iParam3)//Position - 0x13EF
{
	StringCopy(&(Global_87157[iParam3 /*18*/]), sParam0, 64);
	Global_87157[iParam3 /*18*/].f_17 = iParam1;
	Global_87157[iParam3 /*18*/].f_16 = iParam2;
}

void func_34()//Position - 0x141B
{
	unk_0xD9E2C360120FEB7C("blip_controller");
	unk_0xD9E2C360120FEB7C("bootycallhandler");
	unk_0xD9E2C360120FEB7C("candidate_controller");
	unk_0xD9E2C360120FEB7C("cheat_controller");
	unk_0xD9E2C360120FEB7C("CompletionPercentage_controller");
	unk_0xD9E2C360120FEB7C("controller_AmbientArea");
	unk_0xD9E2C360120FEB7C("email_controller");
	unk_0xD9E2C360120FEB7C("emergencycalllauncher");
	unk_0xD9E2C360120FEB7C("event_controller");
	unk_0xD9E2C360120FEB7C("taxiLauncher");
	unk_0xD9E2C360120FEB7C("restrictedAreas");
	unk_0xD9E2C360120FEB7C("flow_controller");
	unk_0xD9E2C360120FEB7C("pickup_controller");
	unk_0xD9E2C360120FEB7C("player_controller");
	unk_0xD9E2C360120FEB7C("randomchar_controller");
	unk_0xD9E2C360120FEB7C("vehicle_gen_controller");
	unk_0xD9E2C360120FEB7C("mission_stat_alerter");
	unk_0xD9E2C360120FEB7C("MPStatsInit");
	unk_0xD9E2C360120FEB7C("stock_controller");
	while ((((((((((((((((((!unk_0x3B6F9DF9C5FEB3A4("blip_controller") || !unk_0x3B6F9DF9C5FEB3A4("bootycallhandler")) || !unk_0x3B6F9DF9C5FEB3A4("candidate_controller")) || !unk_0x3B6F9DF9C5FEB3A4("cheat_controller")) || !unk_0x3B6F9DF9C5FEB3A4("CompletionPercentage_controller")) || !unk_0x3B6F9DF9C5FEB3A4("controller_AmbientArea")) || !unk_0x3B6F9DF9C5FEB3A4("email_controller")) || !unk_0x3B6F9DF9C5FEB3A4("emergencycalllauncher")) || !unk_0x3B6F9DF9C5FEB3A4("event_controller")) || !unk_0x3B6F9DF9C5FEB3A4("taxiLauncher")) || !unk_0x3B6F9DF9C5FEB3A4("restrictedAreas")) || !unk_0x3B6F9DF9C5FEB3A4("flow_controller")) || !unk_0x3B6F9DF9C5FEB3A4("pickup_controller")) || !unk_0x3B6F9DF9C5FEB3A4("player_controller")) || !unk_0x3B6F9DF9C5FEB3A4("randomchar_controller")) || !unk_0x3B6F9DF9C5FEB3A4("vehicle_gen_controller")) || !unk_0x3B6F9DF9C5FEB3A4("mission_stat_alerter")) || !unk_0x3B6F9DF9C5FEB3A4("MPStatsInit")) || !unk_0x3B6F9DF9C5FEB3A4("stock_controller"))
	{
		system::wait(0);
		unk_0xD9E2C360120FEB7C("blip_controller");
		unk_0xD9E2C360120FEB7C("bootycallhandler");
		unk_0xD9E2C360120FEB7C("candidate_controller");
		unk_0xD9E2C360120FEB7C("cheat_controller");
		unk_0xD9E2C360120FEB7C("CompletionPercentage_controller");
		unk_0xD9E2C360120FEB7C("controller_AmbientArea");
		unk_0xD9E2C360120FEB7C("email_controller");
		unk_0xD9E2C360120FEB7C("emergencycalllauncher");
		unk_0xD9E2C360120FEB7C("event_controller");
		unk_0xD9E2C360120FEB7C("taxiLauncher");
		unk_0xD9E2C360120FEB7C("restrictedAreas");
		unk_0xD9E2C360120FEB7C("flow_controller");
		unk_0xD9E2C360120FEB7C("pickup_controller");
		unk_0xD9E2C360120FEB7C("player_controller");
		unk_0xD9E2C360120FEB7C("randomchar_controller");
		unk_0xD9E2C360120FEB7C("vehicle_gen_controller");
		unk_0xD9E2C360120FEB7C("mission_stat_alerter");
		unk_0xD9E2C360120FEB7C("MPStatsInit");
		unk_0xD9E2C360120FEB7C("stock_controller");
	}
	system::start_new_script("blip_controller", 1424);
	unk_0x9D2418D7FC697249("blip_controller");
	system::start_new_script("bootycallhandler", 1424);
	unk_0x9D2418D7FC697249("bootycallhandler");
	system::start_new_script("candidate_controller", 1424);
	unk_0x9D2418D7FC697249("candidate_controller");
	system::start_new_script("cheat_controller", 1424);
	unk_0x9D2418D7FC697249("cheat_controller");
	system::start_new_script("CompletionPercentage_controller", 1424);
	unk_0x9D2418D7FC697249("CompletionPercentage_controller");
	system::start_new_script("controller_AmbientArea", 1424);
	unk_0x9D2418D7FC697249("controller_AmbientArea");
	system::start_new_script("email_controller", 1424);
	unk_0x9D2418D7FC697249("email_controller");
	system::start_new_script("emergencycalllauncher", 1424);
	unk_0x9D2418D7FC697249("emergencycalllauncher");
	system::start_new_script("event_controller", 1424);
	unk_0x9D2418D7FC697249("event_controller");
	system::start_new_script("taxiLauncher", 1424);
	unk_0x9D2418D7FC697249("taxiLauncher");
	system::start_new_script("restrictedAreas", 1424);
	unk_0x9D2418D7FC697249("restrictedAreas");
	system::start_new_script("flow_controller", 1424);
	unk_0x9D2418D7FC697249("flow_controller");
	system::start_new_script("player_controller", 1424);
	unk_0x9D2418D7FC697249("player_controller");
	system::start_new_script("pickup_controller", 1424);
	unk_0x9D2418D7FC697249("pickup_controller");
	system::start_new_script("randomchar_controller", 1424);
	unk_0x9D2418D7FC697249("randomchar_controller");
	system::start_new_script("vehicle_gen_controller", 1828);
	unk_0x9D2418D7FC697249("vehicle_gen_controller");
	system::start_new_script("mission_stat_alerter", 1424);
	unk_0x9D2418D7FC697249("mission_stat_alerter");
	system::start_new_script("MPStatsInit", 1424);
	unk_0x9D2418D7FC697249("MPStatsInit");
	system::start_new_script("stock_controller", 1424);
	unk_0x9D2418D7FC697249("stock_controller");
}

void func_35()//Position - 0x17F1
{
	Global_104555.f_7658.f_924 = unk_0x53C562FD2B9E3AB0();
}

void func_36()//Position - 0x1807
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (func_38(&(Global_104555.f_18073.f_175[iVar0 /*19*/].f_5)))
		{
			func_37(&(Global_104555.f_18073.f_175[iVar0 /*19*/].f_5));
		}
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 6)
	{
		if (func_38(&(Global_104555.f_18073.f_362[iVar1 /*3*/])))
		{
			func_37(&(Global_104555.f_18073.f_362[iVar1 /*3*/]));
		}
		iVar1++;
	}
}

void func_37(var uParam0)//Position - 0x1884
{
	uParam0->f_1 = (uParam0->f_1 - (system::to_float(Global_104555.f_7658.f_924) / 1000f));
	uParam0->f_1 = (uParam0->f_1 + (system::to_float(unk_0x53C562FD2B9E3AB0()) / 1000f));
}

bool func_38(var uParam0)//Position - 0x18C0
{
	return unk_0xC80D31E4B587871C(*uParam0, 1);
}

void func_39()//Position - 0x18D0
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Global_104555.f_7658.f_136)
	{
		Global_104555.f_7658[iVar0 /*15*/].f_4 = (Global_104555.f_7658[iVar0 /*15*/].f_4 - Global_104555.f_7658.f_924);
		Global_104555.f_7658[iVar0 /*15*/].f_4 = (Global_104555.f_7658[iVar0 /*15*/].f_4 + unk_0x53C562FD2B9E3AB0());
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_104555.f_7658.f_650)
	{
		Global_104555.f_7658.f_199[iVar0 /*15*/].f_4 = (Global_104555.f_7658.f_199[iVar0 /*15*/].f_4 - Global_104555.f_7658.f_924);
		Global_104555.f_7658.f_199[iVar0 /*15*/].f_4 = (Global_104555.f_7658.f_199[iVar0 /*15*/].f_4 + unk_0x53C562FD2B9E3AB0());
		func_42(&(Global_104555.f_7658.f_199[iVar0 /*15*/]));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_104555.f_7658.f_198)
	{
		Global_104555.f_7658.f_137[iVar0 /*15*/].f_4 = (Global_104555.f_7658.f_137[iVar0 /*15*/].f_4 - Global_104555.f_7658.f_924);
		Global_104555.f_7658.f_137[iVar0 /*15*/].f_4 = (Global_104555.f_7658.f_137[iVar0 /*15*/].f_4 + unk_0x53C562FD2B9E3AB0());
		func_42(&(Global_104555.f_7658.f_137[iVar0 /*15*/]));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_104555.f_7658.f_764)
	{
		Global_104555.f_7658.f_651[iVar0 /*14*/].f_4 = (Global_104555.f_7658.f_651[iVar0 /*14*/].f_4 - Global_104555.f_7658.f_924);
		Global_104555.f_7658.f_651[iVar0 /*14*/].f_4 = (Global_104555.f_7658.f_651[iVar0 /*14*/].f_4 + unk_0x53C562FD2B9E3AB0());
		func_41(&(Global_104555.f_7658.f_651[iVar0 /*14*/]));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_104555.f_7658.f_866)
	{
		Global_104555.f_7658.f_765[iVar0 /*10*/].f_4 = (Global_104555.f_7658.f_765[iVar0 /*10*/].f_4 - Global_104555.f_7658.f_924);
		Global_104555.f_7658.f_765[iVar0 /*10*/].f_4 = (Global_104555.f_7658.f_765[iVar0 /*10*/].f_4 + unk_0x53C562FD2B9E3AB0());
		func_40(&(Global_104555.f_7658.f_765[iVar0 /*10*/]));
		iVar0++;
	}
}

void func_40(var uParam0)//Position - 0x1B1F
{
	if (uParam0->f_3 == 5)
	{
		if ((uParam0->f_4 - unk_0x53C562FD2B9E3AB0()) > 6000)
		{
			uParam0->f_4 = unk_0x53C562FD2B9E3AB0() + 6000;
		}
	}
}

void func_41(var uParam0)//Position - 0x1B49
{
	if (uParam0->f_3 == 5)
	{
		if ((uParam0->f_4 - unk_0x53C562FD2B9E3AB0()) > 6000)
		{
			uParam0->f_4 = unk_0x53C562FD2B9E3AB0() + 6000;
		}
	}
}

void func_42(var uParam0)//Position - 0x1B73
{
	if (uParam0->f_3 == 5)
	{
		if ((uParam0->f_4 - unk_0x53C562FD2B9E3AB0()) > 6000)
		{
			uParam0->f_4 = unk_0x53C562FD2B9E3AB0() + 6000;
		}
	}
}

void func_43()//Position - 0x1B9D
{
	bool bVar0;
	int iVar1;
	
	bVar0 = false;
	iVar1 = 0;
	while (iVar1 < 32)
	{
		if (!func_55(iVar1))
		{
			if (!bVar0)
			{
				bVar0 = true;
			}
			if (!func_44(iVar1))
			{
				return;
			}
		}
		iVar1++;
	}
	if (bVar0)
	{
	}
}

int func_44(int iParam0)//Position - 0x1BE0
{
	int iVar0;
	int iVar1;
	
	iVar0 = Global_104555.f_9055.f_2[iParam0 /*3*/].f_2;
	iVar1 = Global_71125.f_12526[iParam0 /*2*/];
	while (iVar1 <= Global_71125.f_12526[iParam0 /*2*/].f_1)
	{
		if (iVar0 == func_45(iVar1))
		{
			Global_104555.f_9055.f_2[iParam0 /*3*/].f_1 = iVar1;
			return 1;
		}
		iVar1++;
	}
	return 0;
}

int func_45(int iParam0)//Position - 0x1C42
{
	struct<8> Var0;
	
	StringCopy(&Var0, "NULL", 64);
	if (iParam0 != -1)
	{
		switch (Global_71125.f_6825[iParam0 /*3*/].f_1)
		{
			case 12:
				func_54(iParam0, &Var0);
				break;
			
			case 0:
				func_53(iParam0, &Var0);
				break;
			
			case 1:
				func_52(iParam0, &Var0);
				break;
			
			case 2:
				func_51(iParam0, &Var0);
				break;
			
			case 3:
				func_50(iParam0, &Var0);
				break;
			
			case 4:
				func_49(iParam0, &Var0);
				break;
			
			case 7:
				func_48(iParam0, &Var0);
				break;
			
			case 8:
				func_46(iParam0, &Var0);
				break;
			}
	}
	return unk_0x8B948C59217A295D(&Var0);
}

void func_46(int iParam0, char* sParam1)//Position - 0x1CF6
{
	char cVar0[64];
	
	IntToString(sParam1, Global_71125.f_6825[iParam0 /*3*/], 64);
	StringIntConCat(sParam1, func_47(iParam0), 64);
	IntToString(&cVar0, Global_71125.f_6684[Global_71125.f_6825[iParam0 /*3*/].f_2 /*14*/], 64);
	StringIntConCat(&cVar0, Global_71125.f_6684[Global_71125.f_6825[iParam0 /*3*/].f_2 /*14*/].f_1, 64);
	StringIntConCat(&cVar0, Global_71125.f_6684[Global_71125.f_6825[iParam0 /*3*/].f_2 /*14*/].f_2, 64);
	StringIntConCat(sParam1, unk_0x8B948C59217A295D(&cVar0), 64);
	IntToString(&cVar0, Global_71125.f_6684[Global_71125.f_6825[iParam0 /*3*/].f_2 /*14*/].f_3, 64);
	StringIntConCat(&cVar0, Global_71125.f_6684[Global_71125.f_6825[iParam0 /*3*/].f_2 /*14*/].f_4, 64);
	StringIntConCat(&cVar0, Global_71125.f_6684[Global_71125.f_6825[iParam0 /*3*/].f_2 /*14*/].f_5, 64);
	StringIntConCat(sParam1, unk_0x8B948C59217A295D(&cVar0), 64);
	IntToString(&cVar0, Global_71125.f_6684[Global_71125.f_6825[iParam0 /*3*/].f_2 /*14*/].f_6, 64);
	StringIntConCat(&cVar0, Global_71125.f_6684[Global_71125.f_6825[iParam0 /*3*/].f_2 /*14*/].f_7, 64);
	StringIntConCat(&cVar0, Global_71125.f_6684[Global_71125.f_6825[iParam0 /*3*/].f_2 /*14*/].f_8, 64);
	StringIntConCat(sParam1, unk_0x8B948C59217A295D(&cVar0), 64);
	IntToString(&cVar0, Global_71125.f_6684[Global_71125.f_6825[iParam0 /*3*/].f_2 /*14*/].f_9, 64);
	StringIntConCat(&cVar0, Global_71125.f_6684[Global_71125.f_6825[iParam0 /*3*/].f_2 /*14*/].f_10, 64);
	StringIntConCat(&cVar0, Global_71125.f_6684[Global_71125.f_6825[iParam0 /*3*/].f_2 /*14*/].f_11, 64);
	StringIntConCat(&cVar0, Global_71125.f_6684[Global_71125.f_6825[iParam0 /*3*/].f_2 /*14*/].f_12, 64);
	StringIntConCat(&cVar0, Global_71125.f_6684[Global_71125.f_6825[iParam0 /*3*/].f_2 /*14*/].f_13, 64);
	StringIntConCat(sParam1, unk_0x8B948C59217A295D(&cVar0), 64);
}

int func_47(int iParam0)//Position - 0x1EC5
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (iParam0 >= Global_71125.f_12526[iVar0 /*2*/] && iParam0 <= Global_71125.f_12526[iVar0 /*2*/].f_1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_48(int iParam0, char* sParam1)//Position - 0x1F0C
{
	char cVar0[64];
	
	IntToString(sParam1, Global_71125.f_6825[iParam0 /*3*/], 64);
	StringIntConCat(sParam1, func_47(iParam0), 64);
	IntToString(&cVar0, Global_71125.f_4824[Global_71125.f_6825[iParam0 /*3*/].f_2 /*11*/], 64);
	StringIntConCat(&cVar0, Global_71125.f_4824[Global_71125.f_6825[iParam0 /*3*/].f_2 /*11*/].f_1, 64);
	StringIntConCat(sParam1, unk_0x8B948C59217A295D(&cVar0), 64);
	IntToString(&cVar0, Global_71125.f_4824[Global_71125.f_6825[iParam0 /*3*/].f_2 /*11*/].f_2, 64);
	StringIntConCat(&cVar0, Global_71125.f_4824[Global_71125.f_6825[iParam0 /*3*/].f_2 /*11*/].f_3, 64);
	StringIntConCat(sParam1, unk_0x8B948C59217A295D(&cVar0), 64);
	IntToString(&cVar0, Global_71125.f_4824[Global_71125.f_6825[iParam0 /*3*/].f_2 /*11*/].f_4, 64);
	StringIntConCat(&cVar0, Global_71125.f_4824[Global_71125.f_6825[iParam0 /*3*/].f_2 /*11*/].f_5, 64);
	StringIntConCat(sParam1, unk_0x8B948C59217A295D(&cVar0), 64);
	IntToString(&cVar0, Global_71125.f_4824[Global_71125.f_6825[iParam0 /*3*/].f_2 /*11*/].f_6, 64);
	StringIntConCat(&cVar0, Global_71125.f_4824[Global_71125.f_6825[iParam0 /*3*/].f_2 /*11*/].f_7, 64);
	StringIntConCat(&cVar0, Global_71125.f_4824[Global_71125.f_6825[iParam0 /*3*/].f_2 /*11*/].f_8, 64);
	StringIntConCat(sParam1, unk_0x8B948C59217A295D(&cVar0), 64);
}

void func_49(int iParam0, char* sParam1)//Position - 0x204F
{
	char cVar0[64];
	
	IntToString(sParam1, Global_71125.f_6825[iParam0 /*3*/], 64);
	StringIntConCat(sParam1, func_47(iParam0), 64);
	MemCopy(&cVar0, {Global_71125.f_4160[Global_71125.f_6825[iParam0 /*3*/].f_2 /*12*/]}, 16);
	StringIntConCat(sParam1, unk_0x8B948C59217A295D(&cVar0), 64);
	IntToString(&cVar0, Global_71125.f_4160[Global_71125.f_6825[iParam0 /*3*/].f_2 /*12*/].f_8, 64);
	StringIntConCat(&cVar0, Global_71125.f_4160[Global_71125.f_6825[iParam0 /*3*/].f_2 /*12*/].f_9, 64);
	StringIntConCat(sParam1, unk_0x8B948C59217A295D(&cVar0), 64);
	IntToString(&cVar0, Global_71125.f_4160[Global_71125.f_6825[iParam0 /*3*/].f_2 /*12*/].f_10, 64);
	StringIntConCat(&cVar0, Global_71125.f_4160[Global_71125.f_6825[iParam0 /*3*/].f_2 /*12*/].f_11, 64);
	StringIntConCat(sParam1, unk_0x8B948C59217A295D(&cVar0), 64);
}

void func_50(int iParam0, char* sParam1)//Position - 0x211D
{
	IntToString(sParam1, Global_71125.f_6825[iParam0 /*3*/], 64);
	StringIntConCat(sParam1, func_47(iParam0), 64);
	StringConCat(sParam1, &(Global_71125.f_4151[Global_71125.f_6825[iParam0 /*3*/].f_2 /*8*/]), 64);
}

void func_51(int iParam0, char* sParam1)//Position - 0x2158
{
	IntToString(sParam1, Global_71125.f_6825[iParam0 /*3*/], 64);
	StringIntConCat(sParam1, func_47(iParam0), 64);
	StringIntConCat(sParam1, Global_71125.f_3590[Global_71125.f_6825[iParam0 /*3*/].f_2 /*2*/], 64);
	StringIntConCat(sParam1, Global_71125.f_3590[Global_71125.f_6825[iParam0 /*3*/].f_2 /*2*/].f_1, 64);
}

void func_52(int iParam0, char* sParam1)//Position - 0x21AF
{
	char cVar0[64];
	
	IntToString(sParam1, Global_71125.f_6825[iParam0 /*3*/], 64);
	StringIntConCat(sParam1, func_47(iParam0), 64);
	IntToString(&cVar0, Global_71125.f_109[Global_71125.f_6825[iParam0 /*3*/].f_2 /*4*/], 64);
	StringIntConCat(&cVar0, Global_71125.f_109[Global_71125.f_6825[iParam0 /*3*/].f_2 /*4*/].f_1, 64);
	StringIntConCat(sParam1, unk_0x8B948C59217A295D(&cVar0), 64);
	IntToString(&cVar0, Global_71125.f_109[Global_71125.f_6825[iParam0 /*3*/].f_2 /*4*/].f_2, 64);
	StringIntConCat(&cVar0, Global_71125.f_109[Global_71125.f_6825[iParam0 /*3*/].f_2 /*4*/].f_3, 64);
	StringIntConCat(sParam1, unk_0x8B948C59217A295D(&cVar0), 64);
}

void func_53(int iParam0, char* sParam1)//Position - 0x224E
{
	IntToString(sParam1, Global_71125.f_6825[iParam0 /*3*/], 64);
	StringIntConCat(sParam1, func_47(iParam0), 64);
	StringIntConCat(sParam1, Global_71125.f_6825[iParam0 /*3*/].f_2, 64);
}

void func_54(int iParam0, char* sParam1)//Position - 0x2280
{
	IntToString(sParam1, Global_71125.f_6825[iParam0 /*3*/], 64);
	StringIntConCat(sParam1, func_47(iParam0), 64);
}

int func_55(int iParam0)//Position - 0x22A1
{
	int iVar0;
	int iVar1;
	
	if (Global_104555.f_9055.f_2[iParam0 /*3*/].f_1 < 1900)
	{
		iVar0 = Global_104555.f_9055.f_2[iParam0 /*3*/].f_2;
		iVar1 = func_45(Global_104555.f_9055.f_2[iParam0 /*3*/].f_1);
		if (iVar0 != iVar1)
		{
			return 0;
		}
		return 1;
	}
	return 0;
}

void func_56()//Position - 0x22F4
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Global_104555.f_20380.f_145)
	{
		if (!unk_0xC80D31E4B587871C(Global_104555.f_20380[iVar0 /*16*/].f_15, 0))
		{
			func_57(&(Global_104555.f_20380[iVar0 /*16*/]), 1);
		}
		iVar0++;
	}
}

void func_57(char* sParam0, int iParam1)//Position - 0x233C
{
	int iVar0;
	int iVar1;
	
	if (Global_103195 && iParam1)
	{
		if (func_61(sParam0) && !unk_0x64F06B8ECC39BBC2())
		{
			unk_0x3E80C2F7BC665259(0);
		}
	}
	iVar0 = 0;
	while (iVar0 < Global_104555.f_20380.f_145)
	{
		if (unk_0x74C475EB8E73D398(sParam0, &(Global_104555.f_20380[iVar0 /*16*/])))
		{
			iVar1 = iVar0;
			while (iVar1 <= (Global_104555.f_20380.f_145 - 2))
			{
				func_60(iVar1, iVar1 + 1);
				iVar1++;
			}
			func_59((Global_104555.f_20380.f_145 - 1));
			Global_104555.f_20380.f_145 = (Global_104555.f_20380.f_145 - 1);
			func_58();
			return;
		}
		iVar0++;
	}
}

void func_58()//Position - 0x23E9
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_104555.f_20380.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_104555.f_20380.f_145)
	{
		if (unk_0xC80D31E4B587871C(Global_104555.f_20380[iVar0 /*16*/].f_11, 0))
		{
			if (Global_104555.f_20380[iVar0 /*16*/].f_12 > Global_104555.f_20380.f_146[0])
			{
				Global_104555.f_20380.f_146[0] = Global_104555.f_20380[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0xC80D31E4B587871C(Global_104555.f_20380[iVar0 /*16*/].f_11, 1))
		{
			if (Global_104555.f_20380[iVar0 /*16*/].f_12 > Global_104555.f_20380.f_146[1])
			{
				Global_104555.f_20380.f_146[1] = Global_104555.f_20380[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0xC80D31E4B587871C(Global_104555.f_20380[iVar0 /*16*/].f_11, 2))
		{
			if (Global_104555.f_20380[iVar0 /*16*/].f_12 > Global_104555.f_20380.f_146[2])
			{
				Global_104555.f_20380.f_146[2] = Global_104555.f_20380[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

void func_59(int iParam0)//Position - 0x2509
{
	StringCopy(&(Global_104555.f_20380[iParam0 /*16*/]), "", 16);
	StringCopy(&(Global_104555.f_20380[iParam0 /*16*/].f_4), "", 16);
	Global_104555.f_20380[iParam0 /*16*/].f_8 = 0;
	Global_104555.f_20380[iParam0 /*16*/].f_9 = 0;
	Global_104555.f_20380[iParam0 /*16*/].f_11 = 0;
	Global_104555.f_20380[iParam0 /*16*/].f_10 = -1;
	Global_104555.f_20380[iParam0 /*16*/].f_12 = 0;
	Global_104555.f_20380[iParam0 /*16*/].f_13 = 0;
	Global_104555.f_20380[iParam0 /*16*/].f_14 = 0;
	Global_104555.f_20380[iParam0 /*16*/].f_15 = 0;
}

void func_60(int iParam0, int iParam1)//Position - 0x25A5
{
	Global_104555.f_20380[iParam0 /*16*/] = { Global_104555.f_20380[iParam1 /*16*/] };
	Global_104555.f_20380[iParam0 /*16*/].f_4 = { Global_104555.f_20380[iParam1 /*16*/].f_4 };
	Global_104555.f_20380[iParam0 /*16*/].f_8 = Global_104555.f_20380[iParam1 /*16*/].f_8;
	Global_104555.f_20380[iParam0 /*16*/].f_10 = Global_104555.f_20380[iParam1 /*16*/].f_10;
	Global_104555.f_20380[iParam0 /*16*/].f_9 = Global_104555.f_20380[iParam1 /*16*/].f_9;
	Global_104555.f_20380[iParam0 /*16*/].f_11 = Global_104555.f_20380[iParam1 /*16*/].f_11;
	Global_104555.f_20380[iParam0 /*16*/].f_12 = Global_104555.f_20380[iParam1 /*16*/].f_12;
	Global_104555.f_20380[iParam0 /*16*/].f_13 = Global_104555.f_20380[iParam1 /*16*/].f_13;
	Global_104555.f_20380[iParam0 /*16*/].f_14 = Global_104555.f_20380[iParam1 /*16*/].f_14;
	Global_104555.f_20380[iParam0 /*16*/].f_15 = Global_104555.f_20380[iParam1 /*16*/].f_15;
}

int func_61(char* sParam0)//Position - 0x26B5
{
	unk_0x5BE7193BC62CE2CE(sParam0);
	return unk_0x0683D2027E169355(0);
}

void func_62()//Position - 0x26C8
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Global_104555.f_7658.f_136)
	{
		if (unk_0xC80D31E4B587871C(Global_104555.f_7658[iVar0 /*15*/].f_1, 6))
		{
			func_71(iVar0);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_104555.f_7658.f_650)
	{
		if (unk_0xC80D31E4B587871C(Global_104555.f_7658.f_199[iVar0 /*15*/].f_1, 6))
		{
			func_70(Global_104555.f_7658.f_199[iVar0 /*15*/]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_104555.f_7658.f_198)
	{
		if (unk_0xC80D31E4B587871C(Global_104555.f_7658.f_137[iVar0 /*15*/].f_1, 6))
		{
			func_67(Global_104555.f_7658.f_137[iVar0 /*15*/]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_104555.f_7658.f_764)
	{
		if (unk_0xC80D31E4B587871C(Global_104555.f_7658.f_651[iVar0 /*14*/].f_1, 6))
		{
			func_64(iVar0);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_104555.f_7658.f_866)
	{
		if (unk_0xC80D31E4B587871C(Global_104555.f_7658.f_765[iVar0 /*10*/].f_1, 6))
		{
			func_63(iVar0);
		}
		iVar0++;
	}
}

void func_63(int iParam0)//Position - 0x27FC
{
	int iVar0;
	struct<10> Var1;
	
	if (iParam0 < 0 || iParam0 >= Global_104555.f_7658.f_866)
	{
		return;
	}
	if (Global_104555.f_7658.f_866 > 1)
	{
		iVar0 = iParam0;
		while (iVar0 <= (Global_104555.f_7658.f_866 - 2))
		{
			Global_104555.f_7658.f_765[iVar0 /*10*/] = { Global_104555.f_7658.f_765[iVar0 + 1 /*10*/] };
			iVar0++;
		}
	}
	if (Global_104555.f_7658.f_866 > 0)
	{
		Global_104555.f_7658.f_765[(Global_104555.f_7658.f_866 - 1) /*10*/] = { Var1 };
		Global_104555.f_7658.f_866 = (Global_104555.f_7658.f_866 - 1);
	}
}

void func_64(int iParam0)//Position - 0x28B5
{
	int iVar0;
	struct<14> Var1;
	
	if (iParam0 < 0 || iParam0 >= Global_104555.f_7658.f_764)
	{
		return;
	}
	if (Global_104555.f_7658.f_764 > 1)
	{
		iVar0 = iParam0;
		while (iVar0 <= (Global_104555.f_7658.f_764 - 2))
		{
			Global_104555.f_7658.f_651[iVar0 /*14*/] = { Global_104555.f_7658.f_651[iVar0 + 1 /*14*/] };
			iVar0++;
		}
	}
	if (Global_104555.f_7658.f_764 > 0)
	{
		Global_104555.f_7658.f_651[(Global_104555.f_7658.f_764 - 1) /*14*/] = { Var1 };
		Global_104555.f_7658.f_764 = (Global_104555.f_7658.f_764 - 1);
	}
	func_65(0);
	func_65(1);
	func_65(2);
}

void func_65(int iParam0)//Position - 0x297D
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (!func_66(iParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_104555.f_7658.f_136)
	{
		if (unk_0xC80D31E4B587871C(Global_104555.f_7658[iVar0 /*15*/].f_2, iParam0))
		{
			if (Global_104555.f_7658[iVar0 /*15*/].f_3 > iVar1)
			{
				iVar1 = Global_104555.f_7658[iVar0 /*15*/].f_3;
			}
		}
		iVar0++;
	}
	iVar2 = 0;
	while (iVar2 < Global_104555.f_7658.f_764)
	{
		if (unk_0xC80D31E4B587871C(Global_104555.f_7658.f_651[iVar2 /*14*/].f_2, iParam0))
		{
			if (Global_104555.f_7658.f_651[iVar2 /*14*/].f_3 == 5)
			{
				iVar1 = 5;
			}
		}
		iVar2++;
	}
	Global_104555.f_7658.f_919[iParam0] = iVar1;
}

bool func_66(int iParam0)//Position - 0x2A41
{
	return iParam0 < 3;
}

void func_67(int iParam0)//Position - 0x2A4D
{
	struct<15> Var0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < Global_104555.f_7658.f_198)
	{
		if (Global_104555.f_7658.f_137[iVar1 /*15*/] == iParam0)
		{
			func_68(Global_104555.f_7658.f_137[iVar1 /*15*/].f_6);
			iVar2 = iVar1;
			while (iVar2 <= (Global_104555.f_7658.f_198 - 2))
			{
				Global_104555.f_7658.f_137[iVar2 /*15*/] = { Global_104555.f_7658.f_137[iVar2 + 1 /*15*/] };
				iVar2++;
			}
			Global_104555.f_7658.f_137[(Global_104555.f_7658.f_198 - 1) /*15*/] = { Var0 };
			Global_104555.f_7658.f_198 = (Global_104555.f_7658.f_198 - 1);
			return;
		}
		iVar1++;
	}
}

int func_68(int iParam0)//Position - 0x2B09
{
	int iVar0;
	
	if (Global_117[iParam0 /*10*/].f_8 != 140)
	{
		if (Global_104555.f_28020[iParam0 /*29*/].f_19[Global_14453] == 1)
		{
			Global_104555.f_28020[iParam0 /*29*/].f_19[Global_14453] = 0;
			if (Global_104555.f_28020[iParam0 /*29*/].f_24[Global_14453] == 0)
			{
				iVar0 = Global_14453;
				func_69(iParam0, iVar0);
			}
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

void func_69(int iParam0, int iParam1)//Position - 0x2B7A
{
	if (Global_117[iParam0 /*10*/].f_8 != 140)
	{
		if (iParam1 > 3)
		{
		}
		else
		{
			Global_104555.f_28020[iParam0 /*29*/].f_12[iParam1] = 0;
			Global_104555.f_28020[iParam0 /*29*/].f_24[iParam1] = 0;
		}
	}
}

void func_70(int iParam0)//Position - 0x2BBD
{
	struct<15> Var0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < Global_104555.f_7658.f_650)
	{
		if (Global_104555.f_7658.f_199[iVar1 /*15*/] == iParam0)
		{
			iVar2 = iVar1;
			while (iVar2 <= (Global_104555.f_7658.f_650 - 2))
			{
				Global_104555.f_7658.f_199[iVar2 /*15*/] = { Global_104555.f_7658.f_199[iVar2 + 1 /*15*/] };
				iVar2++;
			}
			Global_104555.f_7658.f_199[(Global_104555.f_7658.f_650 - 1) /*15*/] = { Var0 };
			Global_104555.f_7658.f_650 = (Global_104555.f_7658.f_650 - 1);
			return;
		}
		iVar1++;
	}
}

void func_71(int iParam0)//Position - 0x2C6A
{
	int iVar0;
	int iVar1;
	struct<15> Var2;
	
	if (iParam0 < 0 || iParam0 >= Global_104555.f_7658.f_136)
	{
		return;
	}
	iVar1 = Global_104555.f_7658[iParam0 /*15*/].f_2;
	if (Global_104555.f_7658.f_136 > 1)
	{
		iVar0 = iParam0;
		while (iVar0 <= (Global_104555.f_7658.f_136 - 2))
		{
			Global_104555.f_7658[iVar0 /*15*/] = { Global_104555.f_7658[iVar0 + 1 /*15*/] };
			iVar0++;
		}
	}
	if (Global_104555.f_7658.f_136 > 0)
	{
		Global_104555.f_7658[(Global_104555.f_7658.f_136 - 1) /*15*/] = { Var2 };
		Global_104555.f_7658.f_136 = (Global_104555.f_7658.f_136 - 1);
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0xC80D31E4B587871C(iVar1, iVar0))
		{
			func_65(iVar0);
		}
		iVar0++;
	}
}

void func_72()//Position - 0x2D45
{
	int iVar0;
	vector3 vVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = 0;
	while (iVar0 < 317)
	{
		if (func_73(iVar0, &vVar1))
		{
			Global_91337[iVar0 /*3*/] = { vVar1 };
		}
		iVar0++;
	}
	iVar2 = 0;
	while (iVar2 < 3)
	{
		Global_4267372[iVar2] = -1;
		iVar2++;
	}
	if (!Global_104555.f_18484.f_16)
	{
		iVar3 = 0;
		while (iVar3 < 15)
		{
			Global_104555.f_18484[iVar3] = 139;
			iVar3++;
		}
		Global_104555.f_18484.f_16 = 1;
	}
	iVar3 = 0;
	while (iVar3 < 15)
	{
		Global_87984[iVar3] = 141;
		iVar3++;
	}
}

int func_73(int iParam0, var uParam1)//Position - 0x2DE9
{
	float fVar0;
	struct<8> Var1;
	int iVar2;
	vector3 vVar3;
	var uVar4;
	vector3 vVar5;
	
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			func_77(&iVar2);
			if (iVar2 < 5)
			{
				*uParam1 = { Global_88181[iVar2 /*9*/].f_3 };
				return 1;
			}
			else
			{
				*uParam1 = { Global_88181[0 /*9*/].f_3 };
				return 1;
			}
			break;
		
		case 2:
			*uParam1 = { Global_91009[0 /*109*/].f_4 };
			fVar0 = Global_91009[0 /*109*/].f_7;
			StringCopy(&Var1, "", 32);
			return 1;
			break;
		
		case 3:
			*uParam1 = { Global_91009[1 /*109*/].f_4 };
			fVar0 = Global_91009[1 /*109*/].f_7;
			StringCopy(&Var1, "", 32);
			return 1;
			break;
		
		case 4:
			*uParam1 = { Global_91009[2 /*109*/].f_4 };
			fVar0 = Global_91009[2 /*109*/].f_7;
			StringCopy(&Var1, "", 32);
			return 1;
			break;
		
		case 5:
			*uParam1 = { Global_104555.f_2353.f_539.f_2280[0 /*3*/] + Vector(-1f, 0f, 0f) };
			fVar0 = Global_104555.f_2353.f_539.f_2290[0];
			StringCopy(&Var1, "", 32);
			return 1;
			break;
		
		case 6:
			*uParam1 = { Global_104555.f_2353.f_539.f_2280[1 /*3*/] + Vector(-1f, 0f, 0f) };
			fVar0 = Global_104555.f_2353.f_539.f_2290[1];
			StringCopy(&Var1, "", 32);
			return 1;
			break;
		
		case 7:
			*uParam1 = { Global_104555.f_2353.f_539.f_2280[2 /*3*/] + Vector(-1f, 0f, 0f) };
			fVar0 = Global_104555.f_2353.f_539.f_2290[2];
			StringCopy(&Var1, "", 32);
			return 1;
			break;
		
		case 11:
			if (func_76(iParam0, uParam1, &fVar0))
			{
				StringCopy(&Var1, "v_strip3", 32);
				return 1;
			}
			break;
		
		case 8:
			if (func_76(iParam0, uParam1, &fVar0))
			{
				StringCopy(&Var1, "v_strip3", 32);
				return 1;
			}
			break;
		
		case 9:
			return func_73(8, uParam1);
			break;
		
		case 10:
			return func_73(8, uParam1);
			break;
		
		case 13:
			if (func_76(iParam0, uParam1, &fVar0))
			{
				return 1;
			}
			break;
		
		case 14:
			if (func_76(iParam0, uParam1, &fVar0))
			{
				return 1;
			}
			break;
		
		case 15:
			if (func_76(iParam0, uParam1, &fVar0))
			{
				return 1;
			}
			break;
		
		case 12:
			if (func_76(iParam0, uParam1, &fVar0))
			{
				return 1;
			}
			break;
		
		case 16:
			if (func_76(iParam0, uParam1, &fVar0))
			{
				return 1;
			}
			break;
		
		case 17:
			if (func_76(iParam0, uParam1, &fVar0))
			{
				return 1;
			}
			break;
		
		case 18:
			if (func_76(iParam0, uParam1, &fVar0))
			{
				return 1;
			}
			break;
		
		case 19:
			if (func_76(iParam0, uParam1, &fVar0))
			{
				return 1;
			}
			break;
		
		case 20:
			if (func_76(iParam0, uParam1, &fVar0))
			{
				return 1;
			}
			break;
		
		case 21:
			if (func_76(iParam0, uParam1, &fVar0))
			{
				return 1;
			}
			break;
		
		case 22:
			if (func_76(iParam0, uParam1, &fVar0))
			{
				return 1;
			}
			break;
		
		case 74:
			if (func_76(iParam0, uParam1, &fVar0))
			{
				return 1;
			}
			break;
		
		case 23:
			return func_73(208, uParam1);
			break;
		
		case 24:
			if (func_76(iParam0, uParam1, &fVar0))
			{
				return 1;
			}
			break;
		
		case 67:
			if (func_76(iParam0, uParam1, &fVar0))
			{
				return 1;
			}
			break;
		
		case 25:
			if (func_76(iParam0, uParam1, &fVar0))
			{
				return 1;
			}
			break;
		
		case 26:
			if (func_76(iParam0, uParam1, &fVar0))
			{
				return 1;
			}
			break;
		
		case 27:
			if (func_76(iParam0, uParam1, &fVar0))
			{
				return 1;
			}
			break;
		
		case 28:
			if (func_76(iParam0, uParam1, &fVar0))
			{
				return 1;
			}
			break;
		
		case 29:
			*uParam1 = { 0f, 0f, 0f };
			return 1;
			break;
			return 0;
			break;
		
		case 30:
			*uParam1 = { 0f, 0f, 0f };
			return 1;
			break;
			return 0;
			break;
		
		case 31:
			*uParam1 = { 0f, 0f, 0f };
			return 1;
			break;
			return 0;
			break;
		
		case 32:
			*uParam1 = { 0f, 0f, 0f };
			return 1;
			break;
			return 0;
			break;
		
		case 33:
			*uParam1 = { 0f, 0f, 0f };
			return 1;
			break;
			return 0;
			break;
		
		case 34:
			*uParam1 = { 0f, 0f, 0f };
			return 1;
			break;
			return 0;
			break;
		
		case 35:
			*uParam1 = { 0f, 0f, 0f };
			return 1;
			break;
			return 0;
			break;
		
		case 36:
			*uParam1 = { 0f, 0f, 0f };
			return 1;
			break;
			return 0;
			break;
		
		case 37:
			*uParam1 = { 0f, 0f, 0f };
			return 1;
			break;
			return 0;
			break;
		
		case 58:
			if (func_76(iParam0, uParam1, &fVar0))
			{
				return 1;
			}
			break;
		
		case 59:
			if (func_76(iParam0, uParam1, &fVar0))
			{
				return 1;
			}
			break;
		
		case 60:
			if (func_76(iParam0, uParam1, &fVar0))
			{
				return 1;
			}
			break;
		
		case 38:
			if (func_76(iParam0, uParam1, &fVar0))
			{
				return 1;
			}
			break;
		
		case 39:
			*uParam1 = { 0f, 0f, 0f };
			return 1;
			break;
		
		case 40:
			if (func_76(iParam0, uParam1, &fVar0))
			{
				StringCopy(&Var1, "v_trailer", 32);
				return 1;
			}
			break;
		
		case 41:
			if (func_76(iParam0, uParam1, &fVar0))
			{
				return 1;
			}
			break;
		
		case 42:
			if (func_76(iParam0, uParam1, &fVar0))
			{
				return 1;
			}
			break;
		
		case 43:
			if (func_76(iParam0, uParam1, &fVar0))
			{
				return 1;
			}
			break;
		
		case 44:
			if (func_76(iParam0, uParam1, &fVar0))
			{
				return 1;
			}
			break;
		
		case 45:
			if (func_76(iParam0, uParam1, &fVar0))
			{
				return 1;
			}
			break;
		
		case 46:
			*uParam1 = { -803,734f, 168,148f, 76,3542f };
			return 1;
			break;
		
		case 47:
			if (func_76(iParam0, uParam1, &fVar0))
			{
				return 1;
			}
			break;
		
		case 49:
			if (func_76(iParam0, uParam1, &fVar0))
			{
				return 1;
			}
			break;
		
		case 48:
			if (func_76(iParam0, uParam1, &fVar0))
			{
				return 1;
			}
			break;
		
		case 124:
			*uParam1 = { -803,734f, 168,148f, 76,3542f };
			return 1;
			break;
		
		case 50:
			if (func_76(iParam0, uParam1, &fVar0))
			{
				return 1;
			}
			break;
		
		case 51:
			if (func_76(iParam0, uParam1, &fVar0))
			{
				return 1;
			}
			break;
		
		case 52:
			if (func_76(iParam0, uParam1, &fVar0))
			{
				return 1;
			}
			break;
		
		case 66:
			if (func_76(iParam0, uParam1, &fVar0))
			{
				return 1;
			}
			break;
		
		case 53:
			*uParam1 = { 0f, 0f, 0f };
			return 1;
			break;
			return 0;
			break;
		
		case 54:
			if (func_76(iParam0, uParam1, &fVar0))
			{
				return 1;
			}
			break;
		
		case 55:
			if (func_76(iParam0, uParam1, &fVar0))
			{
				return 1;
			}
			break;
		
		case 56:
			if (func_76(iParam0, uParam1, &fVar0))
			{
				return 1;
			}
			break;
		
		case 57:
			if (func_76(iParam0, uParam1, &fVar0))
			{
				return 1;
			}
			break;
		
		case 61:
			if (func_76(iParam0, uParam1, &fVar0))
			{
				return 1;
			}
			break;
		
		case 62:
			if (func_76(iParam0, uParam1, &fVar0))
			{
				return 1;
			}
			break;
		
		case 63:
			if (func_76(iParam0, uParam1, &fVar0))
			{
				return 1;
			}
			break;
		
		case 68:
			if (func_76(iParam0, uParam1, &fVar0))
			{
				return 1;
			}
			break;
		
		case 69:
			if (func_76(iParam0, uParam1, &fVar0))
			{
				return 1;
			}
			break;
		
		case 64:
			if (func_76(iParam0, uParam1, &fVar0))
			{
				return 1;
			}
			break;
		
		case 65:
			if (func_76(iParam0, uParam1, &fVar0))
			{
				return 1;
			}
			break;
		
		case 70:
			if (func_76(iParam0, uParam1, &fVar0))
			{
				return 1;
			}
			break;
		
		case 71:
			if (func_76(iParam0, uParam1, &fVar0))
			{
				return 1;
			}
			break;
		
		case 72:
			if (func_76(iParam0, uParam1, &fVar0))
			{
				return 1;
			}
			break;
		
		case 73:
			if (func_76(iParam0, uParam1, &fVar0))
			{
				return 1;
			}
			break;
		
		case 234:
			*uParam1 = { 1970,746f, 3818,998f, 33,42f };
			return 1;
			break;
		
		case 316:
			*uParam1 = { 1971,186f, 3818,968f, 33,4287f };
			return 1;
			break;
		
		case 315:
			*uParam1 = { 1975,312f, 3817,041f, 33,53f };
			return 1;
			break;
		
		case 75:
			*uParam1 = { 1424,304f, -1898,611f, 69,8678f };
			return 1;
			break;
		
		case 76:
			*uParam1 = { 1357,3f, -2267,1f, 61,1f };
			return 1;
			break;
		
		case 77:
			*uParam1 = { -814,246f, 181,264f, 75,7407f };
			return 1;
			break;
		
		case 78:
			*uParam1 = { -813,766f, 181,054f, 76,7504f };
			return 1;
			break;
		
		case 79:
			*uParam1 = { -805,17f, 173,99f, 72,6949f };
			StringCopy(&Var1, "v_michael", 32);
			return 1;
			break;
		
		case 80:
			*uParam1 = { -774,9665f, 183,9946f, (71,835f + 0,5f) };
			return 1;
			break;
		
		case 81:
			*uParam1 = { -1313,748f, 121,405f, 56,6578f };
			return 1;
			break;
		
		case 82:
			*uParam1 = { -812,926f, 181,614f, (76,7408f - 0,0097f) };
			return 1;
			break;
		
		case 83:
			*uParam1 = { -813,196f, 181,764f, 76,7407f };
			return 1;
			break;
		
		case 84:
			*uParam1 = { 1968,02f, 3816,76f, 32,4291f };
			return 1;
			break;
		
		case 85:
			*uParam1 = { -802,3999f, 172,44f, 72,8447f };
			return 1;
			break;
		
		case 86:
			*uParam1 = { -805,173f, 173,987f, 72,6876f };
			return 1;
			break;
		
		case 87:
			*uParam1 = { -780,694f, 187,325f, ((72,812f - 1f) + 1f) };
			return 1;
			break;
		
		case 88:
			*uParam1 = { -1353,311f, 355,9345f, 64,0704f };
			return 1;
			break;
		
		case 89:
			*uParam1 = { -826,5596f, 155,8342f, 68,3283f };
			return 1;
			break;
		
		case 90:
			*uParam1 = { -887,9781f, 133,6231f, 58,3423f };
			return 1;
			break;
		
		case 91:
			*uParam1 = { -1210,317f, -955,7397f, 1,6553f };
			return 1;
			break;
		
		case 92:
			*uParam1 = { -848,0614f, 855,916f, 202,5614f };
			return 1;
			break;
		
		case 93:
			*uParam1 = { -1268,64f, -711,4f, 22,4619f };
			return 1;
			break;
		
		case 94:
			*uParam1 = { -117,021f, 361,432f, 111,8857f };
			return 1;
			break;
		
		case 95:
			*uParam1 = { 394,68f, 176,81f, 103,8401f };
			return 1;
			break;
		
		case 96:
			*uParam1 = { -1368,025f, 54,7852f, 52,7046f };
			return 1;
			break;
		
		case 97:
			*uParam1 = { -1415,52f, -198,59f, 47,2507f };
			return 1;
			break;
		
		case 98:
			*uParam1 = { Vector((36,1054f + 1f), -211,7579f, -613,756f) + Vector(-0,0069f, 0,026f, 0,0203f) };
			*uParam1 = { *uParam1 + Vector(-0,0009f, 0,0261f, 0,0164f) };
			fVar0 = (fVar0 + 0,0004f);
			*uParam1 = { *uParam1 + Vector(0,0011f, 0,0264f, 0,0168f) };
			fVar0 = (fVar0 + 0,0015f);
			*uParam1 = { *uParam1 + Vector(0,0011f, 0,0268f, 0,0173f) };
			fVar0 = (fVar0 + 0,0002f);
			*uParam1 = { *uParam1 + Vector(0,0011f, 0,0271f, 0,0179f) };
			fVar0 = (fVar0 + -0,0009f);
			return 1;
			break;
		
		case 99:
			*uParam1 = { -1360,156f, -559,5457f, 29,0697f };
			return 1;
			break;
		
		case 100:
			*uParam1 = { -590,0963f, 270,147f, 81,2426f };
			return 1;
			break;
		
		case 101:
			*uParam1 = { 166,4449f, -211,298f, 53,0941f };
			return 1;
			break;
		
		case 102:
			*uParam1 = { 401,7279f, 308,2417f, 102,5f };
			return 1;
			break;
		
		case 103:
			*uParam1 = { -1731,94f, -1125,13f, (12,0176f + 1f) };
			return 1;
			break;
		
		case 104:
			*uParam1 = { -1927,78f, -579,07f, 11,1705f };
			return 1;
			break;
		
		case 105:
			*uParam1 = { -464,22f, -1592,98f, 38,1269f };
			return 1;
			break;
		
		case 106:
			*uParam1 = { -1744,199f, -625,3162f, 9,8308f };
			return 1;
			break;
		
		case 107:
			*uParam1 = { -1426,91f, -39f, 51,8742f };
			return 1;
			break;
		
		case 108:
			*uParam1 = { 260,98f, 1117,81f, 220,1383f };
			return 1;
			break;
		
		case 109:
			*uParam1 = { -1819,58f, -677,59f, 10,4119f };
			return 1;
			break;
		
		case 110:
			*uParam1 = { -95,55f, -415,1f, 35,6806f };
			return 1;
			break;
		
		case 111:
			*uParam1 = { -1292,701f, -697,2287f, 24,2677f };
			return 1;
			break;
		
		case 112:
			*uParam1 = { 814,98f, 1270,01f, 360,4754f };
			return 1;
			break;
		
		case 113:
			*uParam1 = { -1668,26f, 488,3f, 128,876f };
			return 1;
			break;
		
		case 135:
			*uParam1 = { 667,7f, 3503,7f, 33,9937f };
			return 1;
			break;
		
		case 136:
			*uParam1 = { 2405,11f, 4296,96f, 35,1743f };
			return 1;
			break;
		
		case 137:
			*uParam1 = { 100,9571f, 3363,993f, 34,4471f };
			return 1;
			break;
		
		case 138:
			*uParam1 = { 2445,206f, 3800,669f, 40,0793f };
			return 1;
			break;
		
		case 139:
			*uParam1 = { 1775,445f, 4584,743f, 37,6512f };
			return 1;
			break;
		
		case 140:
			*uParam1 = { -760,5784f, 229,583f, 74,6747f };
			StringCopy(&Var1, "", 32);
			return 1;
			break;
		
		case 141:
			*uParam1 = { 1316,415f, -1599,345f, 51,3924f };
			StringCopy(&Var1, "", 32);
			return 1;
			break;
		
		case 142:
			*uParam1 = { 2365,105f, 3904,715f, 35,2f };
			return 1;
			break;
		
		case 143:
			*uParam1 = { -483,2213f, 5876,392f, 33f };
			return 1;
			break;
		
		case 144:
			*uParam1 = { -180,0459f, 6464,799f, 30,2f };
			return 1;
			break;
		
		case 145:
			*uParam1 = { 1663,859f, 4876,284f, 41,6f };
			return 1;
			break;
		
		case 146:
			*uParam1 = { 2156,064f, 3253,632f, 46,9f };
			return 1;
			break;
		
		case 147:
			*uParam1 = { 2782,836f, 3476,82f, 54,8f };
			return 1;
			break;
		
		case 148:
			*uParam1 = { 2543,831f, 2618,32f, 37,5f };
			return 1;
			break;
		
		case 149:
			*uParam1 = { 1295,529f, 1529,811f, 96,6f };
			return 1;
			break;
		
		case 150:
			*uParam1 = { 1978,07f, 3819,564f, 32,429f };
			return 1;
			break;
		
		case 114:
			*uParam1 = { 68,79f, -1561,27f, 29,4564f };
			return 1;
			break;
		
		case 115:
			*uParam1 = { -511,73f, -21,87f, 45,5884f };
			return 1;
			break;
		
		case 116:
			*uParam1 = { -628,8f, 242,463f, 81,8695f };
			return 1;
			break;
		
		case 117:
			*uParam1 = { -834,53f, -350,71f, 38,6537f };
			return 1;
			break;
		
		case 118:
			*uParam1 = { -1073,127f, -1538,832f, 4,11f };
			return 1;
			break;
		
		case 119:
			*uParam1 = { 123,0931f, 649,6752f, 207,7751f };
			return 1;
			break;
		
		case 120:
			*uParam1 = { -820,9f, 85,3f, 51,9813f };
			return 1;
			break;
		
		case 121:
			*uParam1 = { -831,353f, -1358,748f, 4,9732f };
			return 1;
			break;
		
		case 122:
			*uParam1 = { -812,346f, 179,87f, 72,1592f };
			return 1;
			break;
		
		case 123:
			*uParam1 = { -2015,68f, -495,4f, 11,7326f };
			return 1;
			break;
		
		case 125:
			*uParam1 = { -1499,98f, -677,09f, 27,0668f };
			return 1;
			break;
		
		case 126:
			*uParam1 = { 1971,862f, 3813,91f, 32,9309f };
			return 1;
			break;
		
		case 127:
			*uParam1 = { 669,7389f, 3503,83f, 32,9168f };
			return 1;
			break;
		
		case 128:
			*uParam1 = { 1974,768f, 3821,242f, (32,4384f + 0,5f) };
			return 1;
			break;
		
		case 129:
			*uParam1 = { 1981,238f, 3821,543f, 31,9677f };
			return 1;
			break;
		
		case 130:
			*uParam1 = { 1976,75f, 3822,76f, 33,28f };
			return 1;
			break;
		
		case 131:
			*uParam1 = { 1981,332f, 3821,52f, 31,9535f };
			return 1;
			break;
		
		case 132:
			*uParam1 = { 1974,312f, 3821,1f, 32,8864f };
			return 1;
			break;
		
		case 133:
			*uParam1 = { 1940,052f, 4018,854f, 28,9009f };
			return 1;
			break;
		
		case 134:
			*uParam1 = { 1992,15f, 3056,42f, 47,0342f };
			return 1;
			break;
		
		case 151:
			*uParam1 = { -115,92f, 363,5f, 112,8857f };
			return 1;
			break;
		
		case 152:
			*uParam1 = { -1353,791f, 355,1845f, 64,08f };
			return 1;
			break;
		
		case 153:
			*uParam1 = { -718,8135f, 256,7636f, 79,8384f };
			return 1;
			break;
		
		case 154:
			*uParam1 = { -718,8735f, 256,4936f, 79,8259f };
			return 1;
			break;
		
		case 155:
			*uParam1 = { -770,6851f, 157,8133f, 67,5042f };
			return 1;
			break;
		
		case 156:
			*uParam1 = { -796,7593f, 180,4725f, 71,8266f };
			return 1;
			break;
		
		case 157:
			*uParam1 = { -718,0311f, 254,9289f, 79,7959f };
			return 1;
			break;
		
		case 158:
			*uParam1 = { 533,1877f, 109,0133f, 96,4624f };
			return 1;
			break;
		
		case 159:
			*uParam1 = { -823,2f, -187,083f, 37,7753f };
			return 1;
			break;
		
		case 160:
			*uParam1 = { -715,6204f, -155,5691f, 37,4023f };
			return 1;
			break;
		
		case 161:
			*uParam1 = { -790,3314f, 186,4809f, 71,835f };
			return 1;
			break;
		
		case 162:
			*uParam1 = { -1367,35f, -208,84f, (((44,4134f + 44,416f) / 2f) - 0,01f) };
			return 1;
			break;
		
		case 163:
			*uParam1 = { -812,896f, 181,114f, 76,7233f };
			return 1;
			break;
		
		case 164:
			*uParam1 = { -781,264f, 187,115f, 72,8425f };
			return 1;
			break;
		
		case 165:
			*uParam1 = { -1135,547f, -450,7346f, 35,4977f };
			return 1;
			break;
		
		case 166:
			*uParam1 = { -1050,013f, -481,4982f, 36,7625f };
			return 1;
			break;
		
		case 167:
			*uParam1 = { -1180,062f, -498,2454f, 35,567f };
			return 1;
			break;
		
		case 168:
			if (func_74(0, 25, &vVar3, &uVar4))
			{
				*uParam1 = { vVar3 + Vector(71,1531f, 179,5117f, -812,0607f) };
				StringCopy(&Var1, "v_michael", 32);
				return 1;
			}
			break;
		
		case 169:
			*uParam1 = { -808,3299f, 170,7319f, 76,7408f };
			return 1;
			break;
		
		case 170:
			*uParam1 = { -656,9569f, -276,9062f, 35,6524f };
			return 1;
			break;
		
		case 171:
			*uParam1 = { -250,9305f, -80,8638f, 48,4993f };
			return 1;
			break;
		
		case 173:
			*uParam1 = { -817,75f, 170,02f, 70,4911f };
			return 1;
			break;
		
		case 172:
			*uParam1 = { -248,9653f, -81,0186f, 48,6174f };
			*uParam1 = { *uParam1 + Vector(0,0134f, 0,0273f, 0,0091f) };
			fVar0 = (fVar0 + 0,003f);
			return 1;
			break;
		
		case 174:
			*uParam1 = { -803,27f, 183,78f, 71,61f };
			return 1;
			break;
	}
	switch (iParam0)
	{
		case 175:
			*uParam1 = { -17,2168f, -1441,224f, 30,1015f };
			return 1;
			break;
		
		case 176:
			*uParam1 = { -0,45f, 525,49f, 169,64f };
			return 1;
			break;
		
		case 177:
			*uParam1 = { -0,109f, 524,3119f, 170,3068f };
			return 1;
			break;
		
		case 178:
			*uParam1 = { 9,0865f, 528,0272f, 170,6172f };
			return 1;
			break;
		
		case 179:
			*uParam1 = { -17,2672f, -1441,154f, 30,1015f };
			return 1;
			break;
		
		case 180:
			*uParam1 = { 1,76f, 525,92f, 173,63f };
			return 1;
			break;
		
		case 181:
			*uParam1 = { -17,4073f, -1439,401f, 31,1023f };
			return 1;
			break;
		
		case 182:
			*uParam1 = { -13,8167f, -1423,673f, 30,7231f };
			return 1;
			break;
		
		case 183:
			*uParam1 = { 15,3608f, 523,6475f, (169,2282f + 1f) };
			return 1;
			break;
		
		case 184:
			*uParam1 = { -11,5281f, 512,304f, 174,5978f };
			return 1;
			break;
		
		case 185:
			*uParam1 = { 20,9569f, 521,8147f, 170,1977f };
			return 1;
			break;
		
		case 186:
			*uParam1 = { -1,579f, 535,2489f, 175,3424f };
			return 1;
			break;
		
		case 187:
			*uParam1 = { 3,8524f, 525,7295f, 174,6234f };
			return 1;
			break;
		
		case 188:
			*uParam1 = { -8,86f, 515,84f, 174,628f };
			return 1;
			break;
		
		case 189:
			*uParam1 = { -6,9799f, 524,9367f, 174,9997f };
			return 1;
			break;
		
		case 190:
			*uParam1 = { 1,4483f, 527,5843f, 170,0596f };
			return 1;
			break;
		
		case 191:
			*uParam1 = { 1,8291f, 526,745f, 174,6267f };
			return 1;
			break;
		
		case 196:
			*uParam1 = { -14,8689f, -1441,182f, 31,1932f };
			return 1;
			break;
		
		case 197:
			*uParam1 = { 3,641f, 530,1489f, 175,6695f };
			return 1;
			break;
		
		case 192:
			*uParam1 = { -1174,458f, -1573,632f, 4,7619f };
			return 1;
			break;
		
		case 193:
			*uParam1 = { -1175,298f, -1573,692f, 4,3599f };
			return 1;
			break;
		
		case 194:
			*uParam1 = { -1153,511f, -1371,652f, 4,073f };
			return 1;
			break;
		
		case 195:
			*uParam1 = { -1162,987f, -1427,264f, 3,637f };
			return 1;
			break;
		
		case 198:
			*uParam1 = { -13,7603f, -1451,2f, 29,6322f };
			return 1;
			break;
		
		case 199:
			*uParam1 = { 14,379f, 544,128f, 175,0021f };
			return 1;
			break;
		
		case 200:
			*uParam1 = { 2,8895f, -1607,286f, 29,2949f };
			return 1;
			break;
		
		case 201:
			*uParam1 = { 2,8895f, -1607,286f, 29,2866f };
			return 1;
			break;
		
		case 202:
			*uParam1 = { -1244,888f, -1613,656f, 4,1295f };
			return 1;
			break;
		
		case 203:
			*uParam1 = { -16,4273f, -1452,266f, 30,5424f };
			return 1;
			break;
		
		case 204:
			*uParam1 = { -15,0259f, -1422,936f, 30,6908f };
			return 1;
			break;
		
		case 205:
			*uParam1 = { 15,3678f, 523,712f, 170,2095f };
			return 1;
			break;
		
		case 206:
			*uParam1 = { 154,0731f, 765,5721f, 209,672f };
			return 1;
			break;
		
		case 207:
			*uParam1 = { -268,139f, 415,2881f, 109,7258f };
			return 1;
			break;
		
		case 208:
			*uParam1 = { -464,22f, -1592,98f, 38,73f };
			return 1;
			break;
		
		case 209:
			*uParam1 = { 31,9f, -1483,3f, 29,26f };
			return 1;
			break;
		
		case 210:
			*uParam1 = { 208,9683f, 222,0408f, 104,6f };
			return 1;
			break;
		
		case 211:
			*uParam1 = { -24,5203f, -1436,2f, 30,1544f };
			return 1;
			break;
		
		case 212:
			*uParam1 = { -23,8762f, -1444,595f, 30,6345f };
			return 1;
			break;
		
		case 213:
			*uParam1 = { 14f, 546,19f, 175,4851f };
			return 1;
			break;
		
		case 214:
			*uParam1 = { 8,8185f, 545,03f, 175,6051f };
			return 1;
			break;
		
		case 215:
			*uParam1 = { 10,9694f, 551,7596f, 176,1069f };
			return 1;
			break;
		
		case 216:
			*uParam1 = { -1150,82f, 943,27f, 198,237f };
			return 1;
			break;
		
		case 217:
			*uParam1 = { -1689f, -946,16f, 7,1768f };
			return 1;
			break;
		
		case 221:
			*uParam1 = { -521,13f, -28,54f, 45,2617f };
			return 1;
			break;
		
		case 222:
			*uParam1 = { 480,9113f, -1316,355f, 29,1966f };
			return 1;
			break;
		
		case 223:
			*uParam1 = { 473,3613f, -1309,995f, 29,2326f };
			return 1;
			break;
		
		case 224:
			return func_73(222, uParam1);
			break;
		
		case 226:
			*uParam1 = { 28,986f, -1351,412f, 29,3437f };
			return 1;
			break;
		
		case 227:
			*uParam1 = { -379,1773f, 220,9259f, 84,144f };
			return 1;
			break;
		
		case 228:
			*uParam1 = { 131,5816f, -1303,558f, 29,1592f };
			return 1;
			break;
		
		case 229:
			*uParam1 = { 792,1553f, -735,5871f, 27,5721f };
			return 1;
			break;
		
		case 230:
			*uParam1 = { -297,4081f, -1332,343f, 31,3057f };
			return 1;
			break;
		
		case 218:
			*uParam1 = { -9,4f, -1415,3f, 28,32f };
			return 1;
			break;
		
		case 219:
			*uParam1 = { -242,0927f, -1538,181f, 30,5334f };
			return 1;
			break;
		
		case 220:
			*uParam1 = { -18,8892f, -1823,912f, 25,8711f };
			return 1;
			break;
		
		case 225:
			*uParam1 = { 192,751f, -1672,653f, 28,8033f };
			return 1;
			break;
		
		case 231:
			*uParam1 = { -2654,634f, 2625,161f, 15,6744f };
			return 1;
			break;
		
		case 232:
			*uParam1 = { -78,4023f, -1019,235f, 28,5449f };
			return 1;
			break;
		
		case 233:
			*uParam1 = { -78,4023f, -1019,235f, 28,5449f };
			return 1;
			break;
		
		case 235:
			*uParam1 = { 116,9369f, -1287,704f, 28,2979f };
			return 1;
			break;
		
		case 236:
			*uParam1 = { 126,8211f, -1283,766f, 29,274f };
			return 1;
			break;
		
		case 237:
			*uParam1 = { 127,957f, -1298,513f, 29,427f };
			return 1;
			break;
		
		case 238:
			*uParam1 = { 130,2769f, -1300,874f, 29,1559f };
			return 1;
			break;
		
		case 239:
			*uParam1 = { -55,8087f, 358,255f, 113,061f };
			return 1;
			break;
		
		case 240:
			*uParam1 = { 1534,043f, 3613,122f, 34,367f };
			return 1;
			break;
		
		case 241:
			*uParam1 = { -175,4296f, 6428,75f, 29,6226f };
			return 1;
			break;
		
		case 242:
			*uParam1 = { -1654,937f, -147,5126f, 57,461f };
			return 1;
			break;
		
		case 245:
			*uParam1 = { 1972,81f, 3818,273f, 32,005f };
			return 1;
			break;
		
		case 243:
			*uParam1 = { 433,885f, -1462,478f, 28,2735f };
			return 1;
			break;
		
		case 244:
			*uParam1 = { 433,885f, -1462,478f, 28,2804f };
			return 1;
			break;
		
		case 246:
			*uParam1 = { -1199,55f, -1569,688f, 4,612f };
			return 1;
			break;
		
		case 247:
			*uParam1 = { -1325,88f, -1667,49f, 1,5744f };
			return 1;
			break;
		
		case 248:
			*uParam1 = { 285,93f, 182,18f, 103,3496f };
			return 1;
			break;
		
		case 249:
			*uParam1 = { 292,17f, 191,09f, (103,3496f + 1f) };
			return 1;
			break;
		
		case 250:
			*uParam1 = { 288,0774f, -3201,881f, 5,808f };
			return 1;
			break;
		
		case 251:
			*uParam1 = { -871,2493f, 67,3477f, 52,1137f };
			return 1;
			break;
		
		case 252:
			*uParam1 = { -46,1798f, -1474,164f, 32,0083f };
			return 1;
			break;
		
		case 253:
			*uParam1 = { 1876,025f, 2620,827f, 45,6722f };
			return 1;
			break;
		
		case 254:
			*uParam1 = { 154,73f, -219,21f, 54,303f };
			return 1;
			break;
		
		case 255:
			*uParam1 = { 411,625f, -1488,989f, 30,1244f };
			return 1;
			break;
		
		case 264:
			*uParam1 = { 488,0162f, -1342,394f, 29,4108f };
			return 1;
			break;
		
		case 265:
			*uParam1 = { -438,0249f, 1595,895f, 356,5938f };
			return 1;
			break;
		
		case 266:
			*uParam1 = { -3067,868f, 130,6339f, 9,9056f };
			return 1;
			break;
		
		case 267:
			*uParam1 = { 2209,699f, 4914,914f, 39,676f };
			return 1;
			break;
		
		case 268:
			*uParam1 = { 1800,031f, 6293,462f, 48,6294f };
			return 1;
			break;
		
		case 269:
			*uParam1 = { 418,6078f, -788,4689f, 43,5311f };
			return 1;
			break;
		
		case 270:
			*uParam1 = { 2949,567f, 5755,339f, 317,8481f };
			return 1;
			break;
		
		case 271:
			*uParam1 = { -1267,389f, -1098,899f, 6,8082f };
			return 1;
			break;
		
		case 272:
			*uParam1 = { 107,0137f, -1316,035f, 28,2084f };
			return 1;
			break;
		
		case 273:
			*uParam1 = { -118,1968f, -442,9148f, 35,282f };
			return 1;
			break;
		
		case 274:
			*uParam1 = { -1858,957f, 2071,23f, 140,3656f };
			return 1;
			break;
		
		case 275:
			*uParam1 = { Vector(49,4f, -1195,9f, 937,3f) + Vector(48,8f, -1200,3f, 895,4f) / Vector(2f, 2f, 2f) };
			return 1;
			break;
		
		case 276:
			*uParam1 = { Vector(54,5f, 2303,4f, 1893,4f) * Vector(1f, 1f, 1f) + Vector(54,5f, 2251,8f, 1885,6f) * Vector(2f, 2f, 2f) / FtoV((1f + 2f)) };
			return 1;
			break;
		
		case 277:
			*uParam1 = { 1076,988f, 2685,153f, 37,973f };
			return 1;
			break;
		
		case 278:
			*uParam1 = { 642,68f, -1001,27f, 36,8997f };
			return 1;
			break;
		
		case 279:
			*uParam1 = { -145,8739f, 868,3813f, 231,6979f };
			return 1;
			break;
		
		case 280:
			*uParam1 = { 2789,845f, -1453,731f, 0,5519f };
			return 1;
			break;
		
		case 281:
			*uParam1 = { 612,6f, -932,6f, 10,6f };
			return 1;
			break;
		
		case 282:
			*uParam1 = { -975,9f, 2891f, 15,7f };
			return 1;
			break;
		
		case 283:
			*uParam1 = { Vector(1f, 1f, 1f) * Vector(15,66f, 303,17f, -3019,98f) + Vector(2f, 2f, 2f) * Vector(15,7f, 285,2f, -3031,2f) / FtoV((1f + 2f)) };
			return 1;
			break;
		
		case 284:
			*uParam1 = { Vector(51,5964f, -1128,687f, 1356,032f) + Vector(51,5f, -1149f, 1316,7f) / Vector(2f, 2f, 2f) };
			return 1;
			break;
		
		case 285:
			*uParam1 = { 48,1743f, -2057,129f, 18,3524f };
			return 1;
			break;
		
		case 256:
			*uParam1 = { -1242,68f, -1105,15f, 7,1f };
			return 1;
			break;
		
		case 257:
			*uParam1 = { -1667,148f, -974,7168f, 6,479f };
			return 1;
			break;
		
		case 258:
			*uParam1 = { -301,4778f, 6250,9f, 30,5054f };
			return 1;
			break;
		
		case 259:
			*uParam1 = { -724,26f, -1307,05f, 5,0602f };
			return 1;
			break;
		
		case 260:
			*uParam1 = { -1280,054f, 303,9235f, 63,9553f };
			return 1;
			break;
		
		case 261:
			*uParam1 = { 924,1288f, 48,0048f, 79,7644f };
			return 1;
			break;
		
		case 286:
			*uParam1 = { -1273,69f, -1195,01f, 5,0372f };
			return 1;
			break;
		
		case 287:
			*uParam1 = { -888,45f, -853,11f, 19,5602f };
			return 1;
			break;
		
		case 288:
			*uParam1 = { -1696,14f, -1073,2f, 0,6898f };
			return 1;
			break;
		
		case 262:
			*uParam1 = { -1155,957f, -1521,686f, 4,3519f };
			return 1;
			break;
		
		case 263:
			*uParam1 = { -565,37f, -1258,02f, 13,8618f };
			return 1;
			break;
		
		case 289:
			*uParam1 = { 440,6737f, -228,7473f, 55,9725f };
			return 1;
			break;
		
		case 290:
			*uParam1 = { 118,4869f, -1286,414f, 28,261f };
			return 1;
			break;
		
		case 291:
			*uParam1 = { -1159,273f, -1522,504f, 9,634f };
			return 1;
			break;
		
		case 292:
			*uParam1 = { -1145,368f, -1515,59f, 9,5847f };
			return 1;
			break;
		
		case 293:
			*uParam1 = { -1145,437f, -1515,649f, 9,5894f };
			return 1;
			break;
		
		case 294:
			return func_73(293, uParam1);
			break;
		
		case 295:
			return func_73(292, uParam1);
			break;
		
		case 299:
			*uParam1 = { -1158,133f, -1521,394f, 9,6327f };
			return 1;
			break;
		
		case 300:
			return func_73(303, uParam1);
			break;
		
		case 301:
			return func_73(303, uParam1);
			break;
		
		case 302:
			return func_73(303, uParam1);
			break;
		
		case 303:
			*uParam1 = { -1157,803f, -1521,334f, 9,6327f };
			return 1;
			break;
		
		case 296:
			*uParam1 = { -1146,127f, -1515,525f, 9,6346f };
			return 1;
			break;
		
		case 297:
			*uParam1 = { -1153,515f, -1518,435f, 9,6346f };
			return 1;
			break;
		
		case 298:
			*uParam1 = { -1156,422f, -1519,561f, 10,6327f };
			return 1;
			break;
		
		case 304:
			*uParam1 = { 1972,432f, 3814,38f, 32,932f };
			return 1;
			break;
		
		case 305:
			*uParam1 = { 1394,208f, 3602,284f, 37,9419f };
			return 1;
			break;
		
		case 306:
			vVar5 = { 0,0055f, 7,499f, -1,2748f };
			*uParam1 = { Vector(42,2955f, 5619,934f, -557,5234f) + vVar5 };
			return 1;
			break;
		
		case 307:
			*uParam1 = { -1574,465f, 4693,425f, 47,6226f };
			return 1;
			break;
		
		case 308:
			*uParam1 = { -1557,394f, 4590,116f, 18,6076f };
			return 1;
			break;
		
		case 309:
			*uParam1 = { 2113,694f, 4792,353f, 40,2104f };
			return 1;
			break;
		
		case 310:
			*uParam1 = { 2020,252f, 3401,154f, 42,7215f };
			return 1;
			break;
		
		case 311:
			*uParam1 = { 1972,237f, 3817,86f, 33,4287f };
			return 1;
			break;
		
		case 312:
			*uParam1 = { -275,7407f, 6629,969f, 6,4377f };
			return 1;
			break;
		
		case 313:
			*uParam1 = { 1838,1f, 4381,3f, (19,6f + 5f) };
			return 1;
			break;
		
		case 314:
			*uParam1 = { 1126,415f, 2035,135f, 243,9449f };
			return 1;
			break;
	}
	*uParam1 = { 0f, 0f, 0f };
	fVar0 = 0f;
	Var1 = { Var1 };
	return 0;
}

int func_74(int iParam0, int iParam1, var uParam2, var uParam3)//Position - 0x561D
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 13,904f, 1,193f, 0,7f };
					*uParam3 = -144f;
					return 1;
					break;
				
				case 1:
					if (func_74(0, iParam1, uParam2, uParam3))
					{
						*uParam2 = { *uParam2 + Vector(0f, -1,1731f, 0,809f) };
						*uParam3 = (*uParam3 + (456,7661f - 360f));
						return 1;
					}
					break;
				
				case 2:
					*uParam2 = { Vector(71,8356f, 180,5483f, -796,9911f) - Vector(71,1531f, 179,5117f, -812,0607f) };
					*uParam3 = ((16f - 222,8314f) + 360f);
					return 1;
					break;
			}
			return 0;
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 10,9793f, -5,9f, 4,6f };
					*uParam3 = 163,0716f;
					return 1;
					break;
				
				case 1:
					if (func_74(0, iParam1, uParam2, uParam3))
					{
						*uParam2 = { *uParam2 + Vector(0f, 0,25f, -0,6f) };
						*uParam3 = (*uParam3 + 0f);
						return 1;
					}
					break;
				
				case 2:
					if (func_74(0, iParam1, uParam2, uParam3))
					{
						*uParam2 = { *uParam2 + Vector(0f, -0,5f, -1,2f) };
						*uParam3 = (*uParam3 + 0f);
						return 1;
					}
					break;
			}
			break;
		
		case 2:
		case 3:
			switch (iParam0)
			{
				case 0:
				case 1:
				case 2:
					*uParam2 = { Vector(71,835f, 180,548f, -796,991f) - Vector(71,1531f, 179,5117f, -812,0607f) };
					*uParam3 = (((16f + 90f) - 222,8314f) + 360f);
					return 1;
					break;
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 0:
				case 1:
				case 2:
					*uParam2 = { 6,8878f, -5,5247f, 1,5228f };
					*uParam3 = 160f;
					return 1;
					break;
			}
			break;
		
		case 18:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 4,1937f, -9,0309f, 4,5877f };
					*uParam3 = 255f;
					return 1;
					break;
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 4,4577f, -9,6399f, 4,5876f };
					*uParam3 = 252f;
					return 1;
					break;
			}
			break;
		
		case 5:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 3,799f, -9,41f, 4,5877f };
					*uParam3 = 273f;
					return 1;
					break;
			}
			break;
		
		case 21:
			switch (iParam0)
			{
				case 0:
					if (func_74(0, 5, uParam2, uParam3))
					{
						*uParam2 = { *uParam2 + Vector(0f, 0f, 0f) };
						*uParam3 = (*uParam3 + 0f);
						return 1;
					}
					break;
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 12,552f, 4,373f, (4,6f + 1f) };
					*uParam3 = 318f;
					return 1;
					break;
			}
			break;
		
		case 7:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { -0,4395f, -11,0022f, 0,0747f };
					*uParam3 = 306f;
					return 1;
					break;
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 5,5001f, -12,4406f, 4,6f };
					*uParam3 = 0f;
					return 1;
					break;
			}
			break;
		
		case 10:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 3,5f, -9,1f, 4,6f };
					*uParam3 = 330f;
					return 1;
					break;
			}
			break;
		
		case 11:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 0,849f, 1,575f, 0f };
					*uParam3 = 272,857f;
					return 1;
					break;
			}
			break;
		
		case 12:
			switch (iParam0)
			{
				case 0:
				case 1:
					*uParam2 = { 8,183f, -3,0467f, 5,5876f };
					*uParam3 = 158f;
					return 1;
					break;
			}
			break;
		
		case 13:
			switch (iParam0)
			{
				case 0:
				case 1:
					*uParam2 = { 9,383f, -3,3887f, 5,73f };
					*uParam3 = 339f;
					return 1;
					break;
			}
			break;
		
		case 14:
			switch (iParam0)
			{
				case 0:
				case 1:
					*uParam2 = { Vector(76,89f, 176,176f, -802,702f) - Vector(71,1531f, 179,5117f, -812,0607f) };
					*uParam3 = ((-159,23f - 222,8314f) + 360f);
					return 1;
					break;
			}
			break;
		
		case 15:
			switch (iParam0)
			{
				case 0:
				case 1:
					*uParam2 = { Vector(76,89f, 176,176f, -802,702f) - Vector(71,1531f, 179,5117f, -812,0607f) };
					*uParam3 = ((-159,23f - 222,8314f) + 360f);
					return 1;
					break;
			}
			break;
		
		case 16:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 4,488f, -9,098f, 5,4864f };
					*uParam3 = 147f;
					return 1;
					break;
			}
			break;
		
		case 17:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 9,04f, 5,71f, 1,44f };
					*uParam3 = 159,3182f;
					return 1;
					break;
			}
			break;
		
		case 20:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 3,25f, -9,53f, 4,588f };
					*uParam3 = 333f;
					return 1;
					break;
			}
			break;
		
		case 22:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { Vector(0f, -11,0022f, -0,4395f) + Vector(0f, unk_0x5B811202FCBE9E9D(-0,5f, 0,5f), unk_0x5B811202FCBE9E9D(-0,5f, 0,5f)) };
					*uParam3 = (306f + unk_0x5B811202FCBE9E9D(10f, 10f));
					return 1;
					break;
			}
			break;
		
		case 23:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { Vector(60,2063f, 141,5129f, -863,5425f) - Vector(71,1531f, 179,5117f, -812,0607f) - Vector(1f, 0f, 0f) };
					*uParam2 = { *uParam2 * Vector(0,95f, 0,95f, 0,95f) };
					*uParam3 = unk_0xA67DD8488EBA5F6D(*uParam2, uParam2->f_1);
					return 1;
					break;
			}
			break;
		
		case 24:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { Vector(71,8266f, 180,4725f, -796,7593f) - Vector(71,1531f, 179,5117f, -812,0607f) };
					*uParam3 = ((26,087f - 222,8314f) + 360f);
					return 1;
					break;
			}
			break;
		
		case 19:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { Vector(72,6876f, 173,987f, -805,173f) - Vector(71,1531f, 179,5117f, -812,0607f) };
					*uParam3 = ((13f - 222,8314f) + 360f);
					return 1;
					break;
			}
			break;
		
		case 25:
			switch (iParam0)
			{
				case 0:
				case 1:
					*uParam2 = { Vector(72,8447f, 172,4196f, -803,1823f) - Vector(71,1531f, 179,5117f, -812,0607f) };
					*uParam3 = ((-28,7112f - 222,8314f) + 360f);
					return 1;
					break;
			}
			break;
		
		case 26:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 27,9648f, 8,3766f, 0,7f };
					*uParam3 = 319f;
					return 1;
					break;
			}
			break;
		
		case 32:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { Vector(0,6f, -6,5f, 10,3f) + Vector(0,1f, 0f, 0f) };
					*uParam3 = 78f;
					return 1;
					break;
			}
			break;
		
		case 27:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { -0,3142f, -10,9926f, 0,0747f };
					*uParam3 = 304,1026f;
					return 1;
					break;
			}
			break;
		
		case 41:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 10,3f, -6,5f, 4,6f };
					*uParam3 = 180f;
					return 1;
					break;
			}
			break;
		
		case 33:
			switch (iParam0)
			{
				case 1:
					if (func_74(1, 32, uParam2, uParam3))
					{
						*uParam2 = { *uParam2 + Vector(0f, 0f, 0f) };
						*uParam3 = (*uParam3 + 0f);
						return 1;
					}
					break;
			}
			break;
		
		case 38:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 8,505f, -10,9717f, 4,6019f };
					*uParam3 = 228f;
					return 1;
					break;
			}
			break;
		
		case 31:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 12,7165f, 4,7109f, (4,6f + 1f) };
					*uParam3 = 310,6696f;
					return 1;
					break;
			}
			break;
		
		case 34:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 9,0529f, -8,9175f, 1,6907f };
					*uParam3 = 102,156f;
					return 1;
					break;
			}
			break;
		
		case 35:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 8,4799f, -7,5315f, 0,682f };
					*uParam3 = 264f;
					return 1;
					break;
			}
			break;
		
		case 37:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 9,352f, -3,356f, 5,7338f };
					*uParam3 = 338f;
					return 1;
					break;
			}
			break;
		
		case 39:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 8,3003f, -10,3127f, 4,5874f };
					*uParam3 = 262,789f;
					return 1;
					break;
			}
			break;
		
		case 40:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 10,76f, -5,95f, 4,59f };
					*uParam3 = 177,6766f;
					return 1;
					break;
			}
			break;
		
		case 36:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 9,6691f, -7,6405f, 0,6817f };
					*uParam3 = 159,156f;
					return 1;
					break;
			}
			break;
		
		case 28:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 1,228f, 4,044f, 0,7665f };
					*uParam3 = 165f;
					return 1;
					break;
			}
			break;
		
		case 42:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 10,2365f, -7,6073f, 6,2761f };
					*uParam3 = 157,0716f;
					return 1;
					break;
			}
			break;
		
		case 43:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 8,161f, -7,562f, 2,17f };
					*uParam3 = 78f;
					return 1;
					break;
			}
			break;
		
		case 29:
		case 30:
		case 44:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 10,7668f, -7,8757f, 5,5559f };
					*uParam3 = 144,6939f;
					return 1;
					break;
			}
			break;
		
		case 45:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 10,6257f, -9,4927f, 5,5876f };
					*uParam3 = 257,4583f;
					return 1;
					break;
			}
			break;
		
		case 46:
			return func_74(iParam0, 26, uParam2, uParam3);
			break;
		
		case 47:
			switch (iParam0)
			{
				case 2:
				case 3:
					*uParam2 = { 8,4451f, 3,1568f, 1,47f };
					*uParam3 = 159f;
					return 1;
					break;
			}
			break;
		
		case 48:
		case 68:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { 9,0477f, -7,9397f, 0,6817f };
					*uParam3 = 88,5686f;
					return 1;
					break;
			}
			break;
		
		case 49:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { 0f, 0f, 0f };
					*uParam3 = 0f;
					return 0;
					break;
			}
			break;
		
		case 50:
		case 69:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { 21,7f, 9f, 1,7029f };
					*uParam3 = 0f;
					return 1;
					break;
			}
			break;
		
		case 51:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { 1,3278f, 1,534f, 0f };
					*uParam3 = 159,72f;
					return 1;
					break;
			}
			break;
		
		case 52:
		case 67:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { -3,0265f, 1,7627f, 0,1273f };
					*uParam3 = 338,5f;
					return 1;
					break;
			}
			break;
		
		case 53:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { 15,2374f, 8,723f, 1,4495f };
					*uParam3 = 205,677f;
					return 1;
					break;
			}
			break;
		
		case 54:
		case 70:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { 28,7f, 8,8241f, 0,6f };
					*uParam3 = 39f;
					return 1;
					break;
			}
			break;
		
		case 55:
		case 71:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { Vector(1,1936f, -9,0107f, 9,0567f) + Vector((0,03f - 0,02f), 0f, 0f) };
					*uParam3 = 94,2086f;
					return 1;
					break;
			}
			break;
		
		case 64:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { Vector(5,2891f, 2,0403f, -2,8213f) + Vector((0,03f - 0,05f), 0f, 0f) };
					*uParam3 = 336f;
					return 1;
					break;
			}
			break;
		
		case 56:
			switch (iParam0)
			{
				case 2:
				case 0:
					*uParam2 = { 5,5782f, 5,7755f, 3,84f };
					*uParam3 = 311,4f;
					return 1;
					break;
			}
			break;
		
		case 57:
			switch (iParam0)
			{
				case 2:
				case 0:
					*uParam2 = { 5,5782f, 5,7755f, 3,8418f };
					*uParam3 = 306,6f;
					return 1;
					break;
			}
			break;
		
		case 58:
			switch (iParam0)
			{
				case 2:
				case 1:
					*uParam2 = { 5,8092f, 5,7965f, 3,85f };
					*uParam3 = 337,4f;
					return 1;
					break;
			}
			break;
		
		case 59:
		case 72:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { 13,3221f, 0,0684f, 0,6817f };
					*uParam3 = 277,317f;
					return 1;
					break;
			}
			break;
		
		case 60:
			if (func_74(iParam0, 59, uParam2, uParam3))
			{
				*uParam2 = { *uParam2 + Vector(0f, unk_0x5B811202FCBE9E9D(-1f, 1f), unk_0x5B811202FCBE9E9D(-1f, 1f)) };
				*uParam3 = (*uParam3 + unk_0x5B811202FCBE9E9D(-10f, 10f));
				return 1;
			}
			break;
		
		case 61:
		case 62:
		case 63:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { -2,235f, 1,725f, 4,5877f };
					*uParam3 = 172,714f;
					return 1;
					break;
			}
			break;
		
		case 65:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { Vector(75,7407f, 181,264f, -814,246f) - Vector(71,1531f, 179,5117f, -812,0607f) };
					*uParam3 = ((-158f - 222,8314f) + 360f);
					return 1;
					break;
			}
			break;
		
		case 66:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { Vector(76,7233f, 181,114f, -812,896f) - Vector(71,1531f, 179,5117f, -812,0607f) };
					*uParam3 = ((-164f - 222,8314f) + 360f);
					return 1;
					break;
			}
			break;
		
		case 73:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { 7,394f, 5,368f, 1,451f };
					*uParam3 = 235,0656f;
					return 1;
					break;
			}
			break;
		
		case 74:
			switch (iParam0)
			{
				case 2:
				case 1:
					*uParam2 = { 1,0704f, -1,4624f, 0,999f };
					*uParam3 = 157,44f;
					return 1;
					break;
			}
			break;
		
		case 75:
		case 84:
			switch (iParam0)
			{
				case 3:
					*uParam2 = { 14,8186f, 6,8253f, 0,5f };
					*uParam3 = 87,3368f;
					return 1;
					break;
			}
			break;
		
		case 76:
		case 78:
		case 85:
			switch (iParam0)
			{
				case 3:
					*uParam2 = { 13,6486f, 6,2253f, 0,45f };
					*uParam3 = 262,32f;
					return 1;
					break;
			}
			break;
		
		case 77:
			if (func_74(iParam0, 47, uParam2, uParam3))
			{
				*uParam2 = { *uParam2 + Vector(0f, 0f, 0f) };
				*uParam3 = (*uParam3 + 0f);
				return 1;
			}
			break;
		
		case 79:
		case 86:
			switch (iParam0)
			{
				case 3:
					*uParam2 = { 16,319f, -1,375f, 0,6817f };
					*uParam3 = 334,126f;
					return 1;
					break;
			}
			break;
		
		case 80:
			switch (iParam0)
			{
				case 3:
					*uParam2 = { -0,39f, 3,27f, 0f };
					*uParam3 = 154,126f;
					return 1;
					break;
			}
			break;
		
		case 81:
			switch (iParam0)
			{
				case 3:
					*uParam2 = { 15,0213f, 6,9622f, 1,39f };
					*uParam3 = 142,889f;
					return 1;
					break;
			}
			break;
		
		case 82:
		case 83:
			switch (iParam0)
			{
				case 3:
					*uParam2 = { 15,128f, 6,842f, 0,4524f };
					*uParam3 = 54f;
					return 1;
					break;
			}
			break;
		
		case 87:
			switch (iParam0)
			{
				case 4:
					*uParam2 = { -10,9019f, -23,8349f, -2,1f };
					*uParam3 = 339f;
					return 1;
					break;
			}
			break;
		
		case 88:
			switch (iParam0)
			{
				case 4:
					*uParam2 = { -10,9937f, -24,9005f, -2,18f };
					*uParam3 = 314,2132f;
					return 1;
					break;
			}
			break;
		
		case 89:
			switch (iParam0)
			{
				case 4:
					*uParam2 = { 31,7401f, -1,0943f, 0,6822f };
					*uParam3 = 147f;
					return 1;
					break;
			}
			break;
		
		case 90:
			switch (iParam0)
			{
				case 4:
					*uParam2 = { -27,1728f, -3,75f, -1,626f };
					*uParam3 = (147f + 90f);
					return 1;
					break;
			}
			break;
		
		case 91:
			switch (iParam0)
			{
				case 4:
					*uParam2 = { 14,7722f, -10,9336f, -0,537f };
					*uParam3 = 110,8505f;
					return 1;
					break;
			}
			break;
		
		case 92:
			switch (iParam0)
			{
				case 4:
					*uParam2 = { -17,2536f, 2,451f, -0,6f };
					*uParam3 = 0f;
					return 1;
					break;
			}
			break;
		
		case 93:
			switch (iParam0)
			{
				case 4:
					*uParam2 = { 23,9716f, -20,3533f, -3,18f };
					*uParam3 = 324f;
					return 1;
					break;
			}
			break;
		
		case 94:
			switch (iParam0)
			{
				case 5:
					*uParam2 = { 3,1416f, -2,0799f, -0,0145f };
					*uParam3 = 33f;
					return 1;
					break;
			}
			break;
		
		case 95:
			switch (iParam0)
			{
				case 5:
					*uParam2 = { 3,2746f, -4,1995f, -0,0144f };
					*uParam3 = 69f;
					return 1;
					break;
			}
			break;
		
		case 96:
		case 98:
			switch (iParam0)
			{
				case 5:
					*uParam2 = { 2,983f, -4,094f, 0,4629f };
					*uParam3 = 33f;
					return 1;
					break;
			}
			break;
		
		case 97:
			switch (iParam0)
			{
				case 5:
					*uParam2 = { 5,5235f, 2,9133f, 0,7288f };
					*uParam3 = 71f;
					return 1;
					break;
			}
			break;
		
		case 99:
			switch (iParam0)
			{
				case 6:
					*uParam2 = { Vector(30,7131f, -1454,676f, -42,2059f) - Vector(30,116f, -1435,997f, -14,3064f) };
					*uParam3 = (84,7009f - 188,5817f);
					return 1;
					break;
				
				case 7:
					*uParam2 = { Vector(30,6803f, -1455,848f, -40,7478f) - Vector(30,116f, -1435,997f, -14,3064f) };
					*uParam3 = (90,6417f - 188,5817f);
					return 1;
					break;
			}
			break;
		
		case 100:
			switch (iParam0)
			{
				case 10:
					*uParam2 = { 2,0126f, 0,3422f, -0,0086f };
					*uParam3 = 354f;
					return 1;
					break;
			}
			break;
		
		case 101:
			switch (iParam0)
			{
				case 10:
					*uParam2 = { 1,2931f, 1,4476f, 1,0127f };
					*uParam3 = 61,7525f;
					return 1;
					break;
			}
			break;
		
		case 102:
		case 103:
			switch (iParam0)
			{
				case 10:
					*uParam2 = { 0,0158f, 1,4182f, 0,9913f };
					*uParam3 = 119,008f;
					return 1;
					break;
			}
			break;
		
		case 104:
			switch (iParam0)
			{
				case 10:
					*uParam2 = { -3,467f, 0,074f, 0f };
					*uParam3 = 30f;
					return 1;
					break;
			}
			break;
		
		case 105:
			switch (iParam0)
			{
				case 10:
					*uParam2 = { -2,1014f, -5,4089f, -0,013f };
					*uParam3 = 123,753f;
					return 1;
					break;
			}
			break;
		
		case 106:
			switch (iParam0)
			{
				case 10:
					*uParam2 = { -2,802f, -6,3295f, -0,01f };
					*uParam3 = 42,757f;
					return 1;
					break;
			}
			break;
		
		case 107:
			switch (iParam0)
			{
				case 8:
					*uParam2 = { -2,156f, -4,9564f, 1,4886f };
					*uParam3 = 136,309f;
					return 1;
					break;
			}
			break;
		
		case 108:
			switch (iParam0)
			{
				case 8:
					*uParam2 = { 7,2656f, 3,022f, -0,9061f };
					*uParam3 = 92,8891f;
					return 1;
					break;
			}
			break;
		
		case 109:
			switch (iParam0)
			{
				case 8:
					*uParam2 = { 0,5066f, 1,6992f, 0,0168f };
					*uParam3 = 115,77f;
					return 1;
					break;
			}
			break;
		
		case 110:
		case 111:
			switch (iParam0)
			{
				case 8:
					*uParam2 = { -0,2121f, -6,2791f, -0,0089f };
					*uParam3 = 114,3391f;
					return 1;
					break;
			}
			break;
		
		case 116:
			switch (iParam0)
			{
				case 9:
				case 11:
					*uParam2 = { 8,2458f, -0,7136f, -0,2503f };
					*uParam3 = 252,2687f;
					return 1;
					break;
			}
			break;
		
		case 117:
			switch (iParam0)
			{
				case 9:
				case 11:
					*uParam2 = { 2,334f, 1,6889f, 0,586f };
					*uParam3 = 109f;
					return 1;
					break;
			}
			break;
		
		case 112:
			switch (iParam0)
			{
				case 9:
					*uParam2 = { -0,6331f, 1,2093f, -0,0086f };
					*uParam3 = 137,1861f;
					return 1;
					break;
			}
			break;
		
		case 113:
			switch (iParam0)
			{
				case 9:
					*uParam2 = { -3,887f, -0,166f, 0f };
					*uParam3 = 30f;
					return 1;
					break;
			}
			break;
		
		case 114:
			switch (iParam0)
			{
				case 9:
					*uParam2 = { 3,5179f, 9,1355f, -1f };
					*uParam3 = 141,79f;
					return 1;
					break;
			}
			break;
		
		case 115:
			switch (iParam0)
			{
				case 9:
					*uParam2 = { Vector(0,15f, -1,9326f, -6,013f) + Vector(1f, 0f, 0f) };
					*uParam3 = 121,6591f;
					return 1;
					break;
			}
			break;
		
		case 118:
			switch (iParam0)
			{
				case 10:
					*uParam2 = { 10,2823f, 2,2595f, -1,0742f };
					*uParam3 = (170,2796f - 180f);
					return 1;
					break;
			}
			break;
		
		case 119:
			switch (iParam0)
			{
				case 10:
					*uParam2 = { 1,077f, -5,1446f, 0,9904f };
					*uParam3 = 107,1399f;
					return 1;
					break;
			}
			break;
		
		case 120:
			switch (iParam0)
			{
				case 10:
					*uParam2 = { -12,903f, -6,623f, -0,0406f };
					*uParam3 = 63,48f;
					return 1;
					break;
			}
			break;
		
		case 121:
			switch (iParam0)
			{
				case 10:
					*uParam2 = { 10,5514f, 5,393f, -0,0998f };
					*uParam3 = 327,483f;
					return 1;
					break;
			}
			break;
		
		case 122:
			switch (iParam0)
			{
				case 11:
					*uParam2 = { 0,9794f, -0,3043f, 0f };
					*uParam3 = 179,7612f;
					return 1;
					break;
			}
			break;
		
		case 123:
			switch (iParam0)
			{
				case 11:
					*uParam2 = { 11,9759f, 1f, -1,0728f };
					*uParam3 = 238,9422f;
					return 1;
					break;
			}
			break;
		
		case 124:
			switch (iParam0)
			{
				case 11:
				case 8:
					*uParam2 = { -0,576f, 1,671f, 0,601f };
					*uParam3 = 296f;
					return 1;
					break;
			}
			break;
		
		case 125:
			switch (iParam0)
			{
				case 12:
					*uParam2 = { -0,6532f, 0,9556f, -0,0087f };
					*uParam3 = 121,0556f;
					return 1;
					break;
			}
			break;
		
		case 126:
			switch (iParam0)
			{
				case 13:
					*uParam2 = { -0,18f, -4,173f, 0,9981f };
					*uParam3 = 216,61f;
					return 1;
					break;
			}
			break;
		
		case 127:
			switch (iParam0)
			{
				case 13:
					*uParam2 = { 6,5937f, 0,3521f, 1f };
					*uParam3 = 119,4f;
					return 1;
					break;
			}
			break;
		
		case 128:
			switch (iParam0)
			{
				case 13:
					if (Global_104555.f_18503[2] == 299)
					{
						*uParam2 = { Vector(9,6327f, -1521,394f, -1158,133f) - Vector(9,6346f, -1517,601f, -1152,571f) };
						*uParam3 = (34,661f - 90,6729f);
						return 1;
					}
					else if (((Global_104555.f_18503[2] == 300 || Global_104555.f_18503[2] == 301) || Global_104555.f_18503[2] == 302) || Global_104555.f_18503[2] == 303)
					{
						*uParam2 = { Vector(9,6327f, -1521,334f, -1157,803f) - Vector(9,6346f, -1517,601f, -1152,571f) };
						*uParam3 = (32f - 90,6729f);
						return 1;
					}
					if (func_75())
					{
						*uParam2 = { Vector(9,6327f, -1521,394f, -1158,133f) - Vector(9,6346f, -1517,601f, -1152,571f) };
						*uParam3 = (34,661f - 90,6729f);
						return 1;
					}
					else
					{
						*uParam2 = { Vector(9,6327f, -1521,334f, -1157,803f) - Vector(9,6346f, -1517,601f, -1152,571f) };
						*uParam3 = (32f - 90,6729f);
						return 1;
					}
					break;
			}
			break;
		
		case 129:
			switch (iParam0)
			{
				case 13:
					*uParam2 = { Vector(10,6327f, -1519,561f, -1156,422f) - Vector(9,6346f, -1517,601f, -1152,571f) };
					*uParam3 = (102f - 90,6729f);
					return 1;
					break;
			}
			break;
		
		case 130:
			switch (iParam0)
			{
				case 13:
					*uParam2 = { -2,8352f, 0,0552f, 0f };
					*uParam3 = 334,44f;
					return 1;
					break;
			}
			break;
		
		case 131:
			switch (iParam0)
			{
				case 13:
					if (func_74(iParam0, 130, uParam2, uParam3))
					{
						*uParam2 = { *uParam2 + Vector(0f, unk_0x5B811202FCBE9E9D(-1f, 1f), unk_0x5B811202FCBE9E9D(-1f, 1f)) };
						*uParam3 = (*uParam3 + unk_0x5B811202FCBE9E9D(-10f, 10f));
						return 1;
					}
					break;
			}
			break;
		
		case 132:
			switch (iParam0)
			{
				case 13:
					*uParam2 = { -7,213f, -1,4536f, 0,9981f };
					*uParam3 = 42,6f;
					return 1;
					break;
			}
			break;
		
		case 133:
			switch (iParam0)
			{
				case 13:
					*uParam2 = { Vector((9,6327f + 1f), -1518,736f, -1148,466f) - Vector(9,6346f, -1517,601f, -1152,571f) };
					*uParam3 = unk_0x5B811202FCBE9E9D(0f, 360f);
					return 1;
					break;
			}
			break;
		
		case 134:
			switch (iParam0)
			{
				case 13:
					*uParam2 = { 5,24f, 6,217f, 0,998f };
					*uParam3 = 315,72f;
					return 1;
					break;
			}
			break;
		
		case 135:
			switch (iParam0)
			{
				case 13:
					*uParam2 = { 6,6447f, 0,7635f, 1,0507f };
					*uParam3 = 296,683f;
					return 1;
					break;
			}
			break;
		
		case 136:
			switch (iParam0)
			{
				case 13:
					*uParam2 = { 3,968f, -1,04f, 0f };
					*uParam3 = 214,92f;
					return 1;
					break;
				
				case 14:
					*uParam2 = { 4,617f, -1,1314f, 0f };
					*uParam3 = 39,4085f;
					return 1;
					break;
			}
			break;
		
		case 137:
		case 138:
			*uParam2 = { 0f, 0f, 0f };
			*uParam3 = 0f;
			return 0;
			break;
		
		case 140:
		case 141:
			*uParam2 = { 0f, 0f, 0f };
			*uParam3 = 0f;
			return 0;
			break;
		
		default:
			*uParam2 = { unk_0x5B811202FCBE9E9D(-10f, 10f), unk_0x5B811202FCBE9E9D(-10f, 10f), 0f };
			*uParam3 = unk_0x5B811202FCBE9E9D(0f, 360f);
			return 0;
			break;
	}
	*uParam2 = { unk_0x5B811202FCBE9E9D(-10f, 10f), unk_0x5B811202FCBE9E9D(-10f, 10f), 0f };
	*uParam3 = unk_0x5B811202FCBE9E9D(0f, 360f);
	return 0;
}

int func_75()//Position - 0x756A
{
	if (unk_0xC80D31E4B587871C(unk_0x63A6486593EC7EC3(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

int func_76(int iParam0, var uParam1, var uParam2)//Position - 0x758B
{
	switch (iParam0)
	{
		case 11:
			*uParam1 = { 115,1569f, -1286,684f, 28,2613f };
			*uParam2 = 111f;
			return 1;
			break;
		
		case 8:
			*uParam1 = { -90,0089f, -1324,195f, 28,3203f };
			*uParam2 = 194,1887f;
			return 1;
			break;
		
		case 9:
			return func_76(8, uParam1, uParam2);
			break;
		
		case 10:
			return func_76(8, uParam1, uParam2);
			break;
		
		case 13:
			*uParam1 = { -807,2979f, -48,4004f, 36,8173f };
			*uParam2 = 201,6328f;
			return 1;
			break;
		
		case 14:
			*uParam1 = { 1432,34f, -1887,383f, 70,5768f };
			*uParam2 = 350,0509f;
			return 1;
			break;
		
		case 15:
			*uParam1 = { 1666,204f, 1967,25f, 143,3213f };
			*uParam2 = 0,7896f;
			return 1;
			break;
		
		case 12:
			*uParam1 = { -1440,22f, -127,02f, 50f };
			*uParam2 = 42f;
			return 1;
			break;
		
		case 16:
			*uParam1 = { 135,055f, -1759,64f, 27,8957f };
			*uParam2 = -129f;
			return 1;
			break;
		
		case 17:
			*uParam1 = { 687,6992f, -1744,03f, 28,3624f };
			*uParam2 = 267,1409f;
			return 1;
			break;
		
		case 18:
			*uParam1 = { 56,5117f, -744,6122f, 43,1356f };
			*uParam2 = 340,0526f;
			return 1;
			break;
		
		case 19:
			*uParam1 = { 506,485f, -1884,967f, 24,764f };
			*uParam2 = 22,9566f;
			return 1;
			break;
		
		case 20:
			*uParam1 = { 1555,958f, 953,6136f, 77,2063f };
			*uParam2 = 152,8118f;
			return 1;
			break;
		
		case 21:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 1;
			break;
		
		case 22:
			*uParam1 = { 220,72f, -64,4177f, 68,2922f };
			*uParam2 = (250,4535f - 360f);
			return 1;
			break;
		
		case 74:
			*uParam1 = { 2048,07f, 3840,84f, 34,2238f };
			*uParam2 = 119,603f;
			return 1;
			break;
		
		case 23:
			*uParam1 = { -464,22f, -1592,98f, 38,73f };
			*uParam2 = 168f;
			return 1;
			break;
		
		case 24:
			*uParam1 = { (744,79f + 0,0186f), (-465,86f - 0,0114f), 36,6399f };
			*uParam2 = 51,7279f;
			return 1;
			break;
		
		case 67:
			*uParam1 = { -9f, 508,1f, 173,6278f };
			*uParam2 = 151,2504f;
			return 1;
			break;
		
		case 25:
			*uParam1 = { 72,2278f, -1464,68f, 28,2915f };
			*uParam2 = 156,8827f;
			return 1;
			break;
		
		case 27:
			*uParam1 = { 763f, -906f, 24,2312f };
			*uParam2 = 7,2736f;
			return 1;
			break;
		
		case 26:
			*uParam1 = { 257,9167f, -1120,786f, 28,3684f };
			*uParam2 = 97,2736f;
			return 1;
			break;
		
		case 28:
			*uParam1 = { 422,5858f, -978,6332f, 69,7073f };
			*uParam2 = 4f;
			return 1;
			break;
		
		case 29:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 1;
			break;
		
		case 30:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 1;
			break;
		
		case 31:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 1;
			break;
		
		case 32:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 1;
			break;
		
		case 33:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 1;
			break;
		
		case 34:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 1;
			break;
		
		case 35:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 1;
			break;
		
		case 36:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 1;
			break;
		
		case 37:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 1;
			break;
		
		case 58:
			*uParam1 = { 294,8521f, 882,9366f, 197,8527f };
			*uParam2 = 162,693f;
			return 1;
			break;
		
		case 59:
			*uParam1 = { -1771,802f, 794,4316f, 138,4211f };
			*uParam2 = 128,9946f;
			return 1;
			break;
		
		case 60:
			*uParam1 = { 1495,595f, -1848,821f, 70,2075f };
			*uParam2 = 32,2721f;
			return 1;
			break;
		
		case 38:
			*uParam1 = { 2897,554f, 4032,241f, 50,1419f };
			*uParam2 = 192,8091f;
			return 1;
			break;
		
		case 39:
			*uParam1 = { 1973,355f, 3818,204f, 32,005f };
			*uParam2 = 32f;
			return 1;
			break;
		
		case 40:
			*uParam1 = { 1973,355f, 3818,204f, 32,005f };
			*uParam2 = 32f;
			return 1;
			break;
		
		case 41:
			*uParam1 = { 1397f, 3725,8f, 33,0673f };
			*uParam2 = -3,7534f;
			return 1;
			break;
		
		case 42:
			*uParam1 = { Vector(4,0205f, -2975,341f, 798,4536f) + Vector(1f, 0f, 0f) };
			*uParam2 = 90f;
			return 1;
			break;
		
		case 43:
			*uParam1 = { 709,0244f, -2916,479f, 5,0589f };
			*uParam2 = 355,326f;
			return 1;
			break;
		
		case 44:
			*uParam1 = { 643,5248f, -2917,325f, 5,1337f };
			*uParam2 = 334,1068f;
			return 1;
			break;
		
		case 45:
			*uParam1 = { 595,2742f, -2819,183f, 5,0559f };
			*uParam2 = 46,8853f;
			return 1;
			break;
		
		case 46:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 1;
			break;
		
		case 47:
			*uParam1 = { 314,4171f, 965,207f, 208,4024f };
			*uParam2 = 165,9421f;
			return 1;
			break;
		
		case 49:
			*uParam1 = { 3321,537f, 4975,455f, 25,9097f };
			*uParam2 = 221,228f;
			return 1;
			break;
		
		case 48:
			*uParam1 = { -111,1318f, 6316,479f, 30,4904f };
			*uParam2 = (42f + 180f);
			return 1;
			break;
		
		case 50:
			*uParam1 = { -731,3261f, 106,68f, 54,7169f };
			*uParam2 = 98,9764f;
			return 1;
			break;
		
		case 51:
			*uParam1 = { -1257,5f, -526,9999f, 30,2361f };
			*uParam2 = 220,9554f;
			return 1;
			break;
		
		case 52:
			*uParam1 = { 736,9869f, -2050,678f, 28,2718f };
			*uParam2 = 83,9922f;
			return 1;
			break;
		
		case 66:
			*uParam1 = { 262,5499f, -2540,15f, 4,8433f };
			*uParam2 = -64,1366f;
			return 1;
			break;
		
		case 53:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 1;
			break;
		
		case 55:
			*uParam1 = { -315,7789f, 6201,355f, 30,4322f };
			*uParam2 = 127,7547f;
			return 1;
			break;
		
		case 56:
			*uParam1 = { 118,0988f, -1264,916f, 32,3637f };
			*uParam2 = -63f;
			return 1;
			break;
		
		case 57:
			*uParam1 = { 37,5988f, -1351,52f, 28,2954f };
			*uParam2 = 90,0339f;
			return 1;
			break;
		
		case 61:
			*uParam1 = { -558,2693f, 261,1167f, 82,07f };
			*uParam2 = 84,6231f;
			return 1;
			break;
		
		case 62:
			*uParam1 = { -196,9999f, 507,9999f, 132,477f };
			*uParam2 = 99,6049f;
			return 1;
			break;
		
		case 63:
			*uParam1 = { 1312,01f, -1645,87f, 51,2f };
			*uParam2 = 120f;
			return 1;
			break;
		
		case 68:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 1;
			break;
		
		case 69:
			*uParam1 = { -818,7374f, 6,4824f, 41,2432f };
			*uParam2 = 211,8223f;
			return 1;
			break;
		
		case 64:
			*uParam1 = { 2091,258f, 4714,852f, 40,1936f };
			*uParam2 = 136,0867f;
			return 1;
			break;
		
		case 54:
			*uParam1 = { 1762,59f, 3247,212f, 40,735f };
			*uParam2 = 27,0648f;
			return 1;
			break;
		
		case 65:
			*uParam1 = { 1764,013f, 3252,902f, 40,735f };
			*uParam2 = 27,0648f;
			return 1;
			break;
		
		case 70:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 1;
			break;
		
		case 71:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 1;
			break;
		
		case 72:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 1;
			break;
		
		case 73:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

bool func_77(var uParam0)//Position - 0x7EFA
{
	int iVar0;
	vector3 vVar1;
	float fVar2;
	int iVar3;
	vector3 vVar4;
	float fVar5;
	
	iVar0 = Global_104555.f_2353.f_539.f_4303;
	vVar1 = { Global_104555.f_2353.f_539.f_2280[iVar0 /*3*/] };
	if (func_78(vVar1, 0f, 0f, 0f, 0))
	{
		vVar1 = { unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 0) };
	}
	*uParam0 = 5;
	fVar2 = 9999999f;
	iVar3 = 0;
	while (iVar3 < 5)
	{
		if (unk_0xC80D31E4B587871C(Global_104555.f_7199.f_11[iVar3], 0))
		{
			vVar4 = { Global_88181[iVar3 /*9*/].f_3 };
			fVar5 = system::vdist(vVar1, vVar4);
			if (fVar5 > 150f)
			{
				if (fVar5 < fVar2)
				{
					*uParam0 = iVar3;
					fVar2 = fVar5;
				}
			}
		}
		iVar3++;
	}
	return *uParam0 != 5;
}

bool func_78(vector3 vParam0, vector3 vParam1, bool bParam2)//Position - 0x7FB5
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

void func_79()//Position - 0x7FFC
{
	func_196();
	func_80();
}

void func_80()//Position - 0x8010
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		switch (iVar1)
		{
			case 0:
				func_194();
				break;
			
			case 1:
				func_190();
				break;
			
			case 2:
				func_189();
				break;
			
			case 3:
				func_187();
				break;
			
			case 4:
				func_186();
				break;
			
			case 5:
				func_185();
				break;
			
			case 6:
				func_184();
				break;
			
			case 7:
				func_183();
				break;
			
			case 8:
				func_180();
				break;
			
			case 9:
				func_178();
				break;
			
			case 10:
				func_177();
				break;
			
			case 11:
				func_176();
				break;
			
			case 12:
				func_175();
				break;
			
			case 13:
				func_174();
				break;
			
			case 14:
				func_170();
				break;
			
			case 15:
				func_169();
				break;
			
			case 16:
				func_168();
				break;
			
			case 17:
				func_167();
				break;
			
			case 18:
				func_166();
				break;
			
			case 19:
				func_165();
				break;
			
			case 20:
				func_161();
				break;
			
			case 21:
				func_159();
				break;
			
			case 22:
				func_157();
				break;
			
			case 23:
				func_156();
				break;
			
			case 24:
				func_155();
				break;
			
			case 25:
				func_152();
				break;
			
			case 26:
				func_150();
				break;
			
			case 27:
				func_145();
				break;
			
			case 28:
				func_137();
				break;
			
			case 29:
				func_131();
				break;
			
			case 30:
				func_128();
				break;
			
			case 31:
				func_81();
				break;
			
			default:
				break;
		}
		system::wait(0);
		iVar0++;
	}
}

void func_81()//Position - 0x81E1
{
	int iVar0;
	
	iVar0 = 31;
	func_127(iVar0);
	func_126();
	func_125(-1, 0);
	func_124(0, 1, 0);
	func_124(1, 1, 0);
	func_124(2, 0, 0);
	func_123(161, 1);
	func_122(62, -2, 161, -1, -1);
	func_121(0);
	func_120(153, 0);
	func_119(-1577577773);
	func_118(24, 4, -643694497, -1);
	func_118(24, 4, -278713375, -1);
	func_117(58, 1, 0);
	func_124(0, 0, 0);
	func_124(1, 0, 0);
	func_124(2, 1, 0);
	func_117(117, 1, 0);
	func_116(2, 1, 1);
	func_115(192);
	func_120(115, 0);
	func_114(3, 1, 1, 0);
	func_113(35, 1);
	func_114(4, 1, 1, 0);
	func_112(2, 1);
	func_113(6, 1);
	func_111(20, 1);
	func_111(26, 1);
	func_108(joaat("weapon_pumpshotgun"), 1);
	func_107(105, 0, 0);
	func_114(179, 1, 1, 0);
	func_114(174, 0, 1, 0);
	func_114(178, 0, 1, 0);
	func_114(175, 0, 1, 0);
	func_114(176, 0, 1, 0);
	func_114(177, 0, 1, 0);
	func_114(173, 1, 1, 0);
	func_113(36, 0);
	func_106(4, 99, 5, 2107010167, 37500, 10000, -1, 8, -1, 0);
	func_115(173);
	func_120(27, 0);
	func_104(31, 1);
	func_115(208);
	func_115(229);
	func_103(29, 1);
	func_102(23, 0, 0);
	func_115(167);
	func_101(4);
	func_100(1, -2, -1, -2);
	func_99(54, 0);
	func_115(223);
	func_123(162, 1);
	func_114(78, 1, 1, 0);
	func_122(63, -2, 162, -1, -1);
	func_120(87, 0);
	func_120(99, 0);
	func_98(4, 20, 1, -815326385, 20000, 10000, -1, 100, -1, 0, 0);
	func_106(7, 96, 6, 2021846885, 220000, 10000, -1, 0, -1, 0);
	func_120(161, 0);
	func_120(28, 0);
	func_115(224);
	func_97("AF_Intro_T_Sandy", 1424);
	func_108(joaat("weapon_sniperrifle"), 1);
	func_108(joaat("weapon_molotov"), 1);
	func_106(7, 97, 6, 1511064644, 120000, 10000, -1, 0, -1, 0);
	func_96(4, 0);
	func_104(25, 1);
	func_102(214, 0, 0);
	func_115(170);
	func_97("controller_Trafficking", 1424);
	func_99(55, 0);
	func_123(163, 1);
	func_122(64, -2, 163, -1, -1);
	func_95(131, 2, 0);
	func_117(81, 0, 0);
	func_114(38, 1, 1, 0);
	func_114(39, 1, 1, 0);
	func_114(40, 1, 1, 0);
	func_114(41, 1, 1, 0);
	func_114(42, 1, 1, 0);
	func_114(43, 1, 1, 0);
	func_114(44, 1, 1, 0);
	func_114(45, 1, 1, 0);
	func_114(46, 1, 1, 0);
	func_114(47, 1, 1, 0);
	func_114(37, 1, 1, 0);
	func_116(3, 1, 1);
	func_116(2, 1, 0);
	func_113(7, 1);
	func_113(6, 0);
	func_117(59, 1, 0);
	func_124(0, 1, 1);
	func_124(1, 1, 1);
	func_93("AM_H_SWTCH6", 7500, 2, 7, 0, 0);
	func_117(58, 0, 0);
	func_104(54, 0);
	func_108(joaat("weapon_stickybomb"), 1);
	func_91(2, 45, 12);
	func_106(7, 97, 6, 1217225025, 1100000, 10000, -1, 0, -1, 0);
	func_120(59, 0);
	func_120(60, 0);
	func_120(61, 0);
	func_90(-643694497);
	func_90(-278713375);
	func_118(20, 4, 1089542219, -1);
	func_98(4, 20, 1, 152157591, 220000, 20000, 11, 0, -1, 0, 0);
	func_98(4, 20, 5, 772720529, 70000, 10000, 38, 9, -1, 0, 0);
	func_115(175);
	func_114(192, 1, 1, 0);
	func_114(193, 1, 1, 0);
	func_114(191, 1, 1, 0);
	func_115(174);
	func_115(206);
	func_102(216, 0, 0);
	func_115(172);
	func_115(217);
	func_115(183);
	func_95(31, 0, 0);
	func_88(1, 12, 1, 15000, 5000, 1595158098, -1, -1, 75, -1, 64);
	func_88(2, 12, 1, 15000, 5000, -420969532, -1, -1, 75, -1, 64);
	func_120(29, 0);
	func_115(225);
	func_104(37, 1);
	func_115(211);
	func_111(42, 1);
	func_96(12, 0);
	func_99(56, 0);
	func_123(164, 1);
	func_114(135, 0, 1, 0);
	func_114(136, 0, 1, 0);
	func_114(137, 0, 1, 0);
	func_114(138, 0, 1, 0);
	func_114(141, 0, 1, 0);
	func_114(142, 0, 1, 0);
	func_114(144, 0, 1, 0);
	func_114(139, 0, 1, 0);
	func_114(140, 0, 1, 0);
	func_114(143, 0, 1, 0);
	func_114(147, 0, 1, 0);
	func_114(148, 0, 0, 0);
	func_122(65, -2, 164, -1, -1);
	func_114(147, 1, 1, 0);
	func_114(148, 1, 1, 0);
	func_114(145, 2, 1, 0);
	func_116(4, 1, 1);
	func_116(3, 0, 0);
	func_113(7, 0);
	func_113(8, 1);
	func_117(119, 1, 0);
	func_90(-805704433);
	func_118(19, 4, -835252192, -1);
	func_86(32, 2);
	func_114(65, 0, 1, 0);
	func_114(66, 0, 1, 0);
	func_114(78, 0, 1, 0);
	func_104(27, 1);
	func_115(207);
	func_101(15);
	func_83();
	func_82(iVar0);
}

void func_82(int iParam0)//Position - 0x8782
{
	if (!iParam0 < 32)
	{
		return;
	}
	if (Global_71125.f_12526[iParam0 /*2*/] == -1)
	{
		return;
	}
	if (!Global_71125.f_12526[iParam0 /*2*/].f_1 == -1)
	{
		return;
	}
	if (Global_71125.f_12526[iParam0 /*2*/] == Global_71125.f_12591)
	{
		Global_71125.f_12526[iParam0 /*2*/] = -1;
		return;
	}
	Global_71125.f_12526[iParam0 /*2*/].f_1 = (Global_71125.f_12591 - 1);
	if (Global_104555.f_9055.f_2[iParam0 /*3*/].f_1 == -1)
	{
		Global_104555.f_9055.f_2[iParam0 /*3*/].f_1 = Global_71125.f_12526[iParam0 /*2*/];
	}
}

void func_83()//Position - 0x8825
{
	int iVar0;
	
	iVar0 = 12;
	func_85(iVar0);
	Global_71125.f_6825[Global_71125.f_12591 /*3*/] = 1909997983;
	Global_71125.f_6825[Global_71125.f_12591 /*3*/].f_1 = iVar0;
	Global_71125.f_6825[Global_71125.f_12591 /*3*/].f_2 = -1;
	func_84(iVar0);
}

void func_84(int iParam0)//Position - 0x8879
{
	Global_71125.f_12591++;
	if (!iParam0 == 12)
	{
		Global_71125.f_12592[iParam0]++;
	}
}

void func_85(int iParam0)//Position - 0x88B2
{
	if (Global_71125.f_12591 >= 1900)
	{
		return;
	}
	switch (iParam0)
	{
		case 12:
		case 0:
			break;
		
		case 1:
			if (Global_71125.f_12592[iParam0] >= 870)
			{
				return;
			}
			break;
		
		case 2:
			if (Global_71125.f_12592[iParam0] >= 280)
			{
				return;
			}
			break;
		
		case 7:
			if (Global_71125.f_12592[iParam0] >= 169)
			{
				return;
			}
			break;
		
		case 8:
			if (Global_71125.f_12592[iParam0] >= 10)
			{
				return;
			}
			break;
		
		case 3:
			if (Global_71125.f_12592[iParam0] >= 1)
			{
				return;
			}
			break;
		
		case 4:
			if (Global_71125.f_12592[iParam0] >= 53)
			{
				return;
			}
			break;
		
		case 5:
			if (Global_71125.f_12592[iParam0] >= 1)
			{
				return;
			}
			break;
		
		case 6:
			if (Global_71125.f_12592[iParam0] >= 1)
			{
				return;
			}
			break;
		
		default:
			break;
	}
}

void func_86(int iParam0, int iParam1)//Position - 0x89C2
{
	int iVar0;
	
	iVar0 = 2;
	if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
	{
		return;
	}
	func_85(iVar0);
	Global_71125.f_6825[Global_71125.f_12591 /*3*/] = 749713072;
	Global_71125.f_6825[Global_71125.f_12591 /*3*/].f_1 = iVar0;
	Global_71125.f_6825[Global_71125.f_12591 /*3*/].f_2 = Global_71125.f_12592[iVar0];
	func_87(Global_71125.f_12592[iVar0], iParam1, iParam0);
	func_84(iVar0);
}

void func_87(int iParam0, int iParam1, int iParam2)//Position - 0x8A4E
{
	Global_71125.f_3590[iParam0 /*2*/] = iParam1;
	Global_71125.f_3590[iParam0 /*2*/].f_1 = iParam2;
}

void func_88(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)//Position - 0x8A72
{
	int iVar0;
	
	iVar0 = 7;
	func_85(iVar0);
	Global_71125.f_6825[Global_71125.f_12591 /*3*/] = 1289835772;
	Global_71125.f_6825[Global_71125.f_12591 /*3*/].f_1 = iVar0;
	Global_71125.f_6825[Global_71125.f_12591 /*3*/].f_2 = Global_71125.f_12592[iVar0];
	func_89(Global_71125.f_12592[iVar0], iParam5, iParam6, iParam0, iParam1, iParam2, iParam3, iParam4, iParam10, iParam7, iParam8, iParam9);
	func_84(iVar0);
}

void func_89(int iParam0, int iParam1, int iParam2, var uParam3, var uParam4, var uParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)//Position - 0x8AF4
{
	Global_71125.f_4824[iParam0 /*11*/] = iParam1;
	Global_71125.f_4824[iParam0 /*11*/].f_1 = iParam2;
	Global_71125.f_4824[iParam0 /*11*/].f_2 = uParam3;
	Global_71125.f_4824[iParam0 /*11*/].f_3 = uParam4;
	Global_71125.f_4824[iParam0 /*11*/].f_4 = uParam5;
	Global_71125.f_4824[iParam0 /*11*/].f_5 = iParam6;
	Global_71125.f_4824[iParam0 /*11*/].f_6 = iParam7;
	Global_71125.f_4824[iParam0 /*11*/].f_7 = iParam8;
	Global_71125.f_4824[iParam0 /*11*/].f_8 = iParam9;
	Global_71125.f_4824[iParam0 /*11*/].f_9 = iParam10;
	Global_71125.f_4824[iParam0 /*11*/].f_10 = iParam11;
}

void func_90(int iParam0)//Position - 0x8B9F
{
	int iVar0;
	
	iVar0 = 0;
	func_85(iVar0);
	Global_71125.f_6825[Global_71125.f_12591 /*3*/] = -885022960;
	Global_71125.f_6825[Global_71125.f_12591 /*3*/].f_1 = iVar0;
	Global_71125.f_6825[Global_71125.f_12591 /*3*/].f_2 = iParam0;
	func_84(iVar0);
}

void func_91(int iParam0, int iParam1, int iParam2)//Position - 0x8BF3
{
	int iVar0;
	
	if (iParam0 > 2)
	{
	}
	if (iParam1 <= 0)
	{
	}
	iVar0 = 1;
	func_85(iVar0);
	Global_71125.f_6825[Global_71125.f_12591 /*3*/] = 1845155857;
	Global_71125.f_6825[Global_71125.f_12591 /*3*/].f_1 = iVar0;
	Global_71125.f_6825[Global_71125.f_12591 /*3*/].f_2 = Global_71125.f_12592[iVar0];
	func_92(Global_71125.f_12592[iVar0], iParam0, iParam1, iParam2, 0);
	func_84(iVar0);
}

void func_92(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x8C72
{
	Global_71125.f_109[iParam0 /*4*/] = iParam1;
	Global_71125.f_109[iParam0 /*4*/].f_1 = iParam2;
	Global_71125.f_109[iParam0 /*4*/].f_2 = iParam3;
	Global_71125.f_109[iParam0 /*4*/].f_3 = iParam4;
}

void func_93(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x8CB0
{
	int iVar0;
	struct<8> Var1;
	int iVar2;
	
	iVar0 = 4;
	func_85(iVar0);
	Global_71125.f_6825[Global_71125.f_12591 /*3*/] = -2146402779;
	Global_71125.f_6825[Global_71125.f_12591 /*3*/].f_1 = iVar0;
	Global_71125.f_6825[Global_71125.f_12591 /*3*/].f_2 = Global_71125.f_12592[iVar0];
	StringCopy(&Var1, sParam0, 32);
	iVar2 = iParam2;
	iVar2 = (iVar2 + (iParam5 * 1000000));
	func_94(Global_71125.f_12592[iVar0], Var1, iVar2, iParam1, iParam3, iParam4);
	func_84(iVar0);
}

void func_94(int iParam0, char[32] cParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x8D3F
{
	Global_71125.f_4160[iParam0 /*12*/] = { cParam1 };
	Global_71125.f_4160[iParam0 /*12*/].f_8 = iParam2;
	Global_71125.f_4160[iParam0 /*12*/].f_9 = iParam3;
	Global_71125.f_4160[iParam0 /*12*/].f_10 = iParam4;
	Global_71125.f_4160[iParam0 /*12*/].f_11 = iParam5;
}

void func_95(int iParam0, int iParam1, bool bParam2)//Position - 0x8D96
{
	int iVar0;
	int iVar1;
	
	iVar0 = 1;
	if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
	{
		return;
	}
	iVar1 = 0;
	if (bParam2)
	{
		iVar1 = 1;
	}
	func_85(iVar0);
	Global_71125.f_6825[Global_71125.f_12591 /*3*/] = 744218195;
	Global_71125.f_6825[Global_71125.f_12591 /*3*/].f_1 = iVar0;
	Global_71125.f_6825[Global_71125.f_12591 /*3*/].f_2 = Global_71125.f_12592[iVar0];
	func_92(Global_71125.f_12592[iVar0], iParam1, iParam0, iVar1, 0);
	func_84(iVar0);
}

void func_96(int iParam0, int iParam1)//Position - 0x8E30
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	func_85(iVar0);
	iVar1 = iParam0;
	iVar1 = (iVar1 + (iParam1 * 1000000));
	Global_71125.f_6825[Global_71125.f_12591 /*3*/] = -964850613;
	Global_71125.f_6825[Global_71125.f_12591 /*3*/].f_1 = iVar0;
	Global_71125.f_6825[Global_71125.f_12591 /*3*/].f_2 = iVar1;
	func_84(iVar0);
}

void func_97(char* sParam0, int iParam1)//Position - 0x8E94
{
	int iVar0;
	struct<8> Var1;
	
	iVar0 = 4;
	func_85(iVar0);
	Global_71125.f_6825[Global_71125.f_12591 /*3*/] = 566451265;
	Global_71125.f_6825[Global_71125.f_12591 /*3*/].f_1 = iVar0;
	Global_71125.f_6825[Global_71125.f_12591 /*3*/].f_2 = Global_71125.f_12592[iVar0];
	StringCopy(&Var1, sParam0, 32);
	func_94(Global_71125.f_12592[iVar0], Var1, iParam1, 0, 0, 0);
	func_84(iVar0);
}

void func_98(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)//Position - 0x8F10
{
	int iVar0;
	
	iVar0 = 7;
	func_85(iVar0);
	Global_71125.f_6825[Global_71125.f_12591 /*3*/] = 322211806;
	Global_71125.f_6825[Global_71125.f_12591 /*3*/].f_1 = iVar0;
	Global_71125.f_6825[Global_71125.f_12591 /*3*/].f_2 = Global_71125.f_12592[iVar0];
	func_89(Global_71125.f_12592[iVar0], iParam3, iParam0, iParam1, iParam2, iParam4, iParam5, iParam9, iParam10, iParam6, iParam7, iParam8);
	func_84(iVar0);
}

void func_99(int iParam0, int iParam1)//Position - 0x8F92
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	func_85(iVar0);
	iVar1 = iParam0;
	iVar1 = (iVar1 + (iParam1 * 1000000));
	Global_71125.f_6825[Global_71125.f_12591 /*3*/] = -1982716178;
	Global_71125.f_6825[Global_71125.f_12591 /*3*/].f_1 = iVar0;
	Global_71125.f_6825[Global_71125.f_12591 /*3*/].f_2 = iVar1;
	func_84(iVar0);
}

void func_100(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x8FF6
{
	int iVar0;
	
	iVar0 = 1;
	func_85(iVar0);
	Global_71125.f_6825[Global_71125.f_12591 /*3*/] = -1309218325;
	Global_71125.f_6825[Global_71125.f_12591 /*3*/].f_1 = iVar0;
	Global_71125.f_6825[Global_71125.f_12591 /*3*/].f_2 = Global_71125.f_12592[iVar0];
	func_92(Global_71125.f_12592[iVar0], iParam0, iParam1, iParam2, iParam3);
	func_84(iVar0);
}

void func_101(int iParam0)//Position - 0x906A
{
	int iVar0;
	
	iVar0 = 0;
	func_85(iVar0);
	Global_71125.f_6825[Global_71125.f_12591 /*3*/] = 1677774865;
	Global_71125.f_6825[Global_71125.f_12591 /*3*/].f_1 = iVar0;
	Global_71125.f_6825[Global_71125.f_12591 /*3*/].f_2 = iParam0;
	func_84(iVar0);
}

void func_102(int iParam0, int iParam1, int iParam2)//Position - 0x90BE
{
	int iVar0;
	
	iVar0 = 0;
	func_85(iVar0);
	Global_71125.f_6825[Global_71125.f_12591 /*3*/] = 485486536;
	Global_71125.f_6825[Global_71125.f_12591 /*3*/].f_1 = iVar0;
	Global_71125.f_6825[Global_71125.f_12591 /*3*/].f_2 = iParam2;
	func_84(iVar0);
}

void func_103(int iParam0, bool bParam1)//Position - 0x9112
{
	int iVar0;
	int iVar1;
	
	iVar0 = 2;
	func_85(iVar0);
	Global_71125.f_6825[Global_71125.f_12591 /*3*/] = -69665631;
	Global_71125.f_6825[Global_71125.f_12591 /*3*/].f_1 = iVar0;
	Global_71125.f_6825[Global_71125.f_12591 /*3*/].f_2 = Global_71125.f_12592[iVar0];
	iVar1 = 0;
	if (bParam1)
	{
		iVar1 = 1;
	}
	func_87(Global_71125.f_12592[iVar0], iParam0, iVar1);
	func_84(iVar0);
}

void func_104(int iParam0, bool bParam1)//Position - 0x918D
{
	int iVar0;
	
	iVar0 = 1;
	func_85(iVar0);
	Global_71125.f_6825[Global_71125.f_12591 /*3*/] = 939785963;
	Global_71125.f_6825[Global_71125.f_12591 /*3*/].f_1 = iVar0;
	Global_71125.f_6825[Global_71125.f_12591 /*3*/].f_2 = Global_71125.f_12592[iVar0];
	func_92(Global_71125.f_12592[iVar0], iParam0, func_105(bParam1, 1, 0), -1, -1);
	func_84(iVar0);
}

int func_105(bool bParam0, int iParam1, int iParam2)//Position - 0x9205
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_106(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)//Position - 0x921C
{
	int iVar0;
	
	iVar0 = 7;
	func_85(iVar0);
	Global_71125.f_6825[Global_71125.f_12591 /*3*/] = -656046692;
	Global_71125.f_6825[Global_71125.f_12591 /*3*/].f_1 = iVar0;
	Global_71125.f_6825[Global_71125.f_12591 /*3*/].f_2 = Global_71125.f_12592[iVar0];
	func_89(Global_71125.f_12592[iVar0], iParam3, iParam0, iParam1, iParam2, iParam4, iParam5, iParam9, 0, iParam6, iParam7, iParam8);
	func_84(iVar0);
}

void func_107(int iParam0, int iParam1, int iParam2)//Position - 0x929D
{
	int iVar0;
	int iVar1;
	
	iVar0 = 2;
	func_85(iVar0);
	Global_71125.f_6825[Global_71125.f_12591 /*3*/] = -436729813;
	Global_71125.f_6825[Global_71125.f_12591 /*3*/].f_1 = iVar0;
	Global_71125.f_6825[Global_71125.f_12591 /*3*/].f_2 = Global_71125.f_12592[iVar0];
	iVar1 = 0;
	if (iParam1 == 0)
	{
		iVar1 = 1;
	}
	iVar1 = (iVar1 + (iParam2 * 1000000));
	func_87(Global_71125.f_12592[iVar0], iParam0, iVar1);
	func_84(iVar0);
}

void func_108(int iParam0, bool bParam1)//Position - 0x9325
{
	int iVar0;
	int iVar1;
	
	iVar0 = 2;
	func_85(iVar0);
	Global_71125.f_6825[Global_71125.f_12591 /*3*/] = 2088328892;
	Global_71125.f_6825[Global_71125.f_12591 /*3*/].f_1 = iVar0;
	Global_71125.f_6825[Global_71125.f_12591 /*3*/].f_2 = Global_71125.f_12592[iVar0];
	iVar1 = 0;
	if (bParam1)
	{
		iVar1 = 1;
	}
	func_87(Global_71125.f_12592[iVar0], func_109(iParam0), iVar1);
	func_84(iVar0);
}

int func_109(int iParam0)//Position - 0x93A4
{
	return func_110(iParam0);
}

int func_110(int iParam0)//Position - 0x93B2
{
	switch (iParam0)
	{
		case joaat("weapon_unarmed"):
			return 0;
			break;
		
		case joaat("weapon_pistol"):
			return 1;
			break;
		
		case joaat("weapon_combatpistol"):
			return 2;
			break;
		
		case joaat("weapon_appistol"):
			return 3;
			break;
		
		case joaat("weapon_pistol50"):
			return 4;
			break;
		
		case joaat("weapon_smg"):
			return 5;
			break;
		
		case joaat("weapon_assaultsmg"):
			return 6;
			break;
		
		case joaat("weapon_microsmg"):
			return 7;
			break;
		
		case joaat("weapon_assaultrifle"):
			return 8;
			break;
		
		case joaat("weapon_carbinerifle"):
			return 9;
			break;
		
		case -947031628:
			return 10;
			break;
		
		case joaat("weapon_advancedrifle"):
			return 11;
			break;
		
		case joaat("weapon_mg"):
			return 12;
			break;
		
		case joaat("weapon_combatmg"):
			return 13;
			break;
		
		case -572349828:
			return 14;
			break;
		
		case joaat("weapon_stickybomb"):
			return 15;
			break;
		
		case joaat("weapon_grenade"):
			return 16;
			break;
		
		case joaat("weapon_smokegrenade"):
			return 17;
			break;
		
		case joaat("weapon_remotesniper"):
			return 18;
			break;
		
		case 392730790:
			return 19;
			break;
		
		case joaat("weapon_sniperrifle"):
			return 20;
			break;
		
		case joaat("weapon_heavysniper"):
			return 21;
			break;
		
		case joaat("weapon_pumpshotgun"):
			return 22;
			break;
		
		case joaat("weapon_bullpupshotgun"):
			return 23;
			break;
		
		case joaat("weapon_assaultshotgun"):
			return 24;
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			return 25;
			break;
		
		case joaat("weapon_grenadelauncher"):
			return 26;
			break;
		
		case joaat("weapon_rpg"):
			return 27;
			break;
		
		case joaat("weapon_minigun"):
			return 28;
			break;
		
		case -344484024:
			return 29;
			break;
		
		case -1887867191:
			return 30;
			break;
		
		case joaat("weapon_stungun"):
			return 31;
			break;
		
		case -837150131:
			return 32;
			break;
		
		case joaat("gadget_parachute"):
			return 33;
			break;
		
		case joaat("weapon_knife"):
			return 34;
			break;
		
		case joaat("weapon_nightstick"):
			return 35;
			break;
		
		case joaat("weapon_hammer"):
			return 36;
			break;
		
		case joaat("weapon_bat"):
			return 37;
			break;
		
		case joaat("weapon_crowbar"):
			return 38;
			break;
		
		case joaat("weapon_golfclub"):
			return 39;
			break;
		
		case joaat("weapon_grenadelauncher_smoke"):
			return 40;
			break;
		
		case joaat("weapon_molotov"):
			return 41;
			break;
		
		case joaat("weapon_fireextinguisher"):
			return 42;
			break;
		
		case joaat("weapon_petrolcan"):
			return 43;
			break;
		
		case joaat("weapon_digiscanner"):
			return 44;
			break;
		
		case joaat("weapon_bottle"):
			return 45;
			break;
		
		case joaat("weapon_specialcarbine"):
			return 46;
			break;
		
		case joaat("weapon_snspistol"):
			return 47;
			break;
		
		case joaat("weapon_heavypistol"):
			return 49;
			break;
		
		case joaat("weapon_bullpuprifle"):
			return 48;
			break;
		
		case joaat("weapon_gusenberg"):
			return 50;
			break;
		
		case joaat("weapon_dagger"):
			return 51;
			break;
		
		case joaat("weapon_vintagepistol"):
			return 52;
			break;
		
		case joaat("weapon_flaregun"):
			return 57;
			break;
		
		case joaat("weapon_musket"):
			return 53;
			break;
		
		case joaat("weapon_firework"):
			return 54;
			break;
		
		case joaat("weapon_marksmanrifle"):
			return 56;
			break;
		
		case joaat("weapon_heavyshotgun"):
			return 55;
			break;
		
		case joaat("weapon_proxmine"):
			return 60;
			break;
		
		case joaat("weapon_hominglauncher"):
			return 61;
			break;
		
		case joaat("weapon_hatchet"):
			return 58;
			break;
		
		case joaat("weapon_railgun"):
			return 59;
			break;
		
		case joaat("weapon_combatpdw"):
			return 64;
			break;
		
		case joaat("weapon_knuckle"):
			return 62;
			break;
		
		case joaat("weapon_marksmanpistol"):
			return 63;
			break;
		
		case joaat("weapon_machete"):
			return 65;
			break;
		
		case joaat("weapon_machinepistol"):
			return 68;
			break;
		
		case joaat("weapon_dbshotgun"):
			return 66;
			break;
		
		case joaat("weapon_compactrifle"):
			return 67;
			break;
		
		case joaat("weapon_flashlight"):
			return 69;
			break;
		
		case joaat("weapon_revolver"):
			return 70;
			break;
		
		case joaat("weapon_switchblade"):
			return 71;
			break;
		
		case 317205821:
			return 72;
			break;
		
		case -1121678507:
			return 73;
			break;
		
		case 125959754:
			return 74;
			break;
		
		case -853065399:
			return 75;
			break;
		
		case -1169823560:
			return 76;
			break;
		
		case -1810795771:
			return 77;
			break;
		
		case 419712736:
			return 78;
			break;
		
		case 961495388:
			return 8;
			break;
		
		case -86904375:
			return 9;
			break;
		
		case -608341376:
			return 13;
			break;
		
		case 177293209:
			return 21;
			break;
		
		case -1075685676:
			return 1;
			break;
		
		case 2024373456:
			return 5;
			break;
		
		case 1432025498:
			return 22;
			break;
		
		case -1768145561:
			return 46;
			break;
		
		case -2009644972:
			return 47;
			break;
		
		case 1785463520:
			return 56;
			break;
		
		case -879347409:
			return 70;
			break;
		
		case -2066285827:
			return 48;
			break;
		
		case -1746263880:
			return 79;
			break;
	}
	return 0;
}

void func_111(int iParam0, bool bParam1)//Position - 0x98C0
{
	int iVar0;
	int iVar1;
	
	iVar0 = 2;
	func_85(iVar0);
	Global_71125.f_6825[Global_71125.f_12591 /*3*/] = -806419157;
	Global_71125.f_6825[Global_71125.f_12591 /*3*/].f_1 = iVar0;
	Global_71125.f_6825[Global_71125.f_12591 /*3*/].f_2 = Global_71125.f_12592[iVar0];
	if (bParam1)
	{
		iVar1 = 1;
	}
	else
	{
		iVar1 = 0;
	}
	func_87(Global_71125.f_12592[iVar0], iParam0, iVar1);
	func_84(iVar0);
}

void func_112(int iParam0, bool bParam1)//Position - 0x993E
{
	int iVar0;
	int iVar1;
	
	iVar0 = 2;
	func_85(iVar0);
	Global_71125.f_6825[Global_71125.f_12591 /*3*/] = 424223666;
	Global_71125.f_6825[Global_71125.f_12591 /*3*/].f_1 = iVar0;
	Global_71125.f_6825[Global_71125.f_12591 /*3*/].f_2 = Global_71125.f_12592[iVar0];
	if (!func_66(iParam0))
	{
	}
	iVar1 = 0;
	if (bParam1)
	{
		iVar1 = 1;
	}
	func_87(Global_71125.f_12592[iVar0], iParam0, iVar1);
	func_84(iVar0);
}

void func_113(int iParam0, bool bParam1)//Position - 0x99C3
{
	int iVar0;
	int iVar1;
	
	iVar0 = 2;
	func_85(iVar0);
	Global_71125.f_6825[Global_71125.f_12591 /*3*/] = -319289499;
	Global_71125.f_6825[Global_71125.f_12591 /*3*/].f_1 = iVar0;
	Global_71125.f_6825[Global_71125.f_12591 /*3*/].f_2 = Global_71125.f_12592[iVar0];
	iVar1 = 0;
	if (bParam1)
	{
		iVar1 = 1;
	}
	func_87(Global_71125.f_12592[iVar0], iParam0, iVar1);
	func_84(iVar0);
}

void func_114(int iParam0, int iParam1, bool bParam2, int iParam3)//Position - 0x9A3E
{
	int iVar0;
	int iVar1;
	
	iVar0 = 1;
	func_85(iVar0);
	Global_71125.f_6825[Global_71125.f_12591 /*3*/] = -1110793538;
	Global_71125.f_6825[Global_71125.f_12591 /*3*/].f_1 = iVar0;
	Global_71125.f_6825[Global_71125.f_12591 /*3*/].f_2 = Global_71125.f_12592[iVar0];
	iVar1 = 0;
	if (bParam2)
	{
		iVar1 = 1;
	}
	func_92(Global_71125.f_12592[iVar0], iParam0, iParam1, iVar1, iParam3);
	func_84(iVar0);
}

void func_115(int iParam0)//Position - 0x9ABD
{
	int iVar0;
	
	iVar0 = 12;
	func_85(iVar0);
	Global_71125.f_6825[Global_71125.f_12591 /*3*/] = 485486536;
	Global_71125.f_6825[Global_71125.f_12591 /*3*/].f_1 = iVar0;
	Global_71125.f_6825[Global_71125.f_12591 /*3*/].f_2 = -1;
	func_84(iVar0);
}

void func_116(int iParam0, bool bParam1, bool bParam2)//Position - 0x9B11
{
	int iVar0;
	int iVar1;
	
	iVar0 = 2;
	func_85(iVar0);
	Global_71125.f_6825[Global_71125.f_12591 /*3*/] = -1334818538;
	Global_71125.f_6825[Global_71125.f_12591 /*3*/].f_1 = iVar0;
	Global_71125.f_6825[Global_71125.f_12591 /*3*/].f_2 = Global_71125.f_12592[iVar0];
	if (bParam1)
	{
		unk_0x872F1C1F8587CCC7(&iVar1, 0);
	}
	if (bParam2)
	{
		unk_0x872F1C1F8587CCC7(&iVar1, 1);
	}
	func_87(Global_71125.f_12592[iVar0], iParam0, iVar1);
	func_84(iVar0);
}

void func_117(int iParam0, bool bParam1, int iParam2)//Position - 0x9B99
{
	int iVar0;
	int iVar1;
	
	iVar0 = 1;
	func_85(iVar0);
	Global_71125.f_6825[Global_71125.f_12591 /*3*/] = 1144707570;
	Global_71125.f_6825[Global_71125.f_12591 /*3*/].f_1 = iVar0;
	Global_71125.f_6825[Global_71125.f_12591 /*3*/].f_2 = Global_71125.f_12592[iVar0];
	iVar1 = 0;
	if (bParam1)
	{
		iVar1 = 1;
	}
	func_92(Global_71125.f_12592[iVar0], iParam0, iVar1, iParam2, -1);
	func_84(iVar0);
}

void func_118(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x9C17
{
	int iVar0;
	
	iVar0 = 1;
	func_85(iVar0);
	Global_71125.f_6825[Global_71125.f_12591 /*3*/] = -1030591046;
	Global_71125.f_6825[Global_71125.f_12591 /*3*/].f_1 = iVar0;
	Global_71125.f_6825[Global_71125.f_12591 /*3*/].f_2 = Global_71125.f_12592[iVar0];
	func_92(Global_71125.f_12592[iVar0], iParam2, iParam1, iParam0, iParam3);
	func_84(iVar0);
}

void func_119(int iParam0)//Position - 0x9C8B
{
	int iVar0;
	
	iVar0 = 0;
	func_85(iVar0);
	Global_71125.f_6825[Global_71125.f_12591 /*3*/] = -885022960;
	Global_71125.f_6825[Global_71125.f_12591 /*3*/].f_1 = iVar0;
	Global_71125.f_6825[Global_71125.f_12591 /*3*/].f_2 = iParam0;
	func_84(iVar0);
}

void func_120(int iParam0, int iParam1)//Position - 0x9CDF
{
	int iVar0;
	
	iVar0 = 2;
	func_85(iVar0);
	Global_71125.f_6825[Global_71125.f_12591 /*3*/] = -115271859;
	Global_71125.f_6825[Global_71125.f_12591 /*3*/].f_1 = iVar0;
	Global_71125.f_6825[Global_71125.f_12591 /*3*/].f_2 = Global_71125.f_12592[iVar0];
	func_87(Global_71125.f_12592[iVar0], iParam0, iParam1);
	func_84(iVar0);
}

void func_121(int iParam0)//Position - 0x9D4F
{
	int iVar0;
	
	iVar0 = 0;
	func_85(iVar0);
	Global_71125.f_6825[Global_71125.f_12591 /*3*/] = 918415331;
	Global_71125.f_6825[Global_71125.f_12591 /*3*/].f_1 = iVar0;
	Global_71125.f_6825[Global_71125.f_12591 /*3*/].f_2 = iParam0;
	func_84(iVar0);
}

void func_122(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x9DA3
{
	int iVar0;
	
	if (iParam4 == -1)
	{
		iParam4 = iParam1;
	}
	iVar0 = 1;
	func_85(iVar0);
	Global_71125.f_6825[Global_71125.f_12591 /*3*/] = -2093459088;
	Global_71125.f_6825[Global_71125.f_12591 /*3*/].f_1 = iVar0;
	Global_71125.f_6825[Global_71125.f_12591 /*3*/].f_2 = Global_71125.f_12592[iVar0];
	Global_83766[iParam0 /*34*/].f_7 = Global_71125.f_12592[iVar0];
	func_92(Global_71125.f_12592[iVar0], iParam0, iParam1, iParam2, iParam4);
	func_84(iVar0);
}

void func_123(int iParam0, bool bParam1)//Position - 0x9E36
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < Global_71125.f_12591)
	{
		if (Global_71125.f_6825[iVar1 /*3*/] == 531432813)
		{
			iVar2 = Global_71125.f_6825[iVar1 /*3*/].f_2;
			iVar3 = Global_71125.f_109[iVar2 /*4*/];
			if (iVar3 == iParam0)
			{
				return;
			}
		}
		iVar1++;
	}
	func_85(iVar0);
	Global_71125.f_6825[Global_71125.f_12591 /*3*/] = 531432813;
	Global_71125.f_6825[Global_71125.f_12591 /*3*/].f_1 = iVar0;
	Global_71125.f_6825[Global_71125.f_12591 /*3*/].f_2 = Global_71125.f_12592[iVar0];
	iVar4 = 0;
	if (bParam1)
	{
		iVar4 = 1;
	}
	func_92(Global_71125.f_12592[iVar0], iParam0, iVar4, -1, -1);
	func_84(iVar0);
}

void func_124(int iParam0, bool bParam1, int iParam2)//Position - 0x9F03
{
	int iVar0;
	int iVar1;
	
	iVar0 = 2;
	iVar1 = 0;
	if (bParam1)
	{
		iVar1 = 1;
	}
	iVar1 = (iVar1 + (iParam2 * 1000000));
	func_85(iVar0);
	Global_71125.f_6825[Global_71125.f_12591 /*3*/] = -1597354430;
	Global_71125.f_6825[Global_71125.f_12591 /*3*/].f_1 = iVar0;
	Global_71125.f_6825[Global_71125.f_12591 /*3*/].f_2 = Global_71125.f_12592[iVar0];
	if ((iParam0 != 0 && iParam0 != 1) && iParam0 != 2)
	{
	}
	func_87(Global_71125.f_12592[iVar0], iParam0, iVar1);
	func_84(iVar0);
}

void func_125(int iParam0, bool bParam1)//Position - 0x9FA3
{
	int iVar0;
	int iVar1;
	
	iVar0 = 2;
	func_85(iVar0);
	Global_71125.f_6825[Global_71125.f_12591 /*3*/] = 2048332261;
	Global_71125.f_6825[Global_71125.f_12591 /*3*/].f_1 = iVar0;
	Global_71125.f_6825[Global_71125.f_12591 /*3*/].f_2 = Global_71125.f_12592[iVar0];
	iVar1 = 0;
	if (bParam1)
	{
		iVar1 = 1;
	}
	func_87(Global_71125.f_12592[iVar0], iParam0, iVar1);
	func_84(iVar0);
}

void func_126()//Position - 0xA01E
{
	int iVar0;
	
	iVar0 = 12;
	func_85(iVar0);
	Global_71125.f_6825[Global_71125.f_12591 /*3*/] = -1750917831;
	Global_71125.f_6825[Global_71125.f_12591 /*3*/].f_1 = iVar0;
	Global_71125.f_6825[Global_71125.f_12591 /*3*/].f_2 = -1;
	func_84(iVar0);
}

void func_127(int iParam0)//Position - 0xA072
{
	if (!iParam0 < 32)
	{
		return;
	}
	if (!Global_71125.f_12526[iParam0 /*2*/] == -1)
	{
		return;
	}
	Global_71125.f_12526[iParam0 /*2*/] = Global_71125.f_12591;
}

void func_128()//Position - 0xA0AC
{
	int iVar0;
	
	iVar0 = 30;
	func_127(iVar0);
	func_126();
	func_97("ambient_Solomon", 1424);
	func_123(158, 1);
	func_122(59, -2, 158, -1, -1);
	func_120(143, 0);
	func_108(joaat("weapon_remotesniper"), 1);
	func_95(26, 0, 1);
	func_130(55);
	func_101(24);
	func_96(46, 0);
	func_96(24, 0);
	func_99(51, 0);
	func_123(159, 1);
	func_122(60, -2, 159, -1, -1);
	func_117(66, 1, 0);
	func_99(52, 0);
	func_99(53, 0);
	func_100(18, -2, -1, -2);
	func_123(160, 1);
	func_122(61, -2, 160, -1, -1);
	func_117(57, 1, 0);
	func_129(0, 26, 0, 6000, 6000, 643619115, -1, 0, -1, 32);
	func_115(227);
	func_115(232);
	func_102(229, 0, 0);
	func_115(233);
	func_102(230, 0, 0);
	func_115(234);
	func_102(231, 0, 0);
	func_115(235);
	func_102(232, 0, 0);
	func_115(236);
	func_102(233, 0, 0);
	func_115(237);
	func_102(234, 0, 0);
	func_115(238);
	func_117(57, 0, 0);
	func_108(joaat("weapon_smg"), 1);
	func_114(103, 1, 1, 0);
	func_114(102, 1, 1, 0);
	func_114(104, 1, 1, 0);
	func_114(111, 1, 1, 0);
	func_114(112, 1, 1, 0);
	func_96(49, 0);
	func_96(39, 0);
	func_90(-1949184344);
	func_118(29, 1, 2065444157, -1);
	func_118(29, 2, 624853379, -1);
	func_83();
	func_82(iVar0);
}

void func_129(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)//Position - 0xA260
{
	int iVar0;
	
	iVar0 = 7;
	func_85(iVar0);
	Global_71125.f_6825[Global_71125.f_12591 /*3*/] = -1034402456;
	Global_71125.f_6825[Global_71125.f_12591 /*3*/].f_1 = iVar0;
	Global_71125.f_6825[Global_71125.f_12591 /*3*/].f_2 = Global_71125.f_12592[iVar0];
	func_89(Global_71125.f_12592[iVar0], iParam5, iParam1, iParam0, iParam2, iParam3, iParam4, iParam9, 0, iParam6, iParam7, iParam8);
	if (unk_0xC80D31E4B587871C(iParam9, 7))
	{
	}
	func_84(iVar0);
}

void func_130(int iParam0)//Position - 0xA2EB
{
	int iVar0;
	
	iVar0 = 0;
	func_85(iVar0);
	Global_71125.f_6825[Global_71125.f_12591 /*3*/] = 952363713;
	Global_71125.f_6825[Global_71125.f_12591 /*3*/].f_1 = iVar0;
	Global_71125.f_6825[Global_71125.f_12591 /*3*/].f_2 = iParam0;
	func_84(iVar0);
}

void func_131()//Position - 0xA33F
{
	int iVar0;
	
	iVar0 = 29;
	func_127(iVar0);
	func_126();
	func_129(0, 36, 1, 30000, 30000, 1632742627, -1, 0, -1, 32);
	func_136(0, 0);
	func_93("AM_H_SHRINK", 7500, 2, 1, 0, 0);
	func_123(149, 1);
	func_136(0, 1);
	func_122(54, -2, 149, -1, -1);
	func_99(45, 0);
	func_123(150, 1);
	func_136(1, 0);
	func_122(55, -2, 150, -1, -1);
	func_135(360000);
	func_99(46, 0);
	func_135(30000);
	func_115(151);
	func_136(2, 0);
	func_98(1, 36, 1, 1516526930, 10000, 10000, -1, 0, -1, 32, 0);
	func_123(152, 1);
	func_125(56, 0);
	func_136(2, 1);
	func_134(1, 36, -2, -1, -2, 0);
	func_133(56, -2, 152, -1);
	func_121(0);
	func_99(47, 0);
	func_115(153);
	func_136(3, 0);
	func_98(1, 36, 1, -685399607, 10000, 10000, -1, 0, -1, 32, 0);
	func_123(154, 1);
	func_125(57, 0);
	func_136(3, 1);
	func_134(1, 36, -2, -1, -2, 1);
	func_133(57, -2, 154, -1);
	func_123(155, 1);
	func_121(1);
	func_99(48, 0);
	func_99(49, 0);
	func_99(50, 0);
	func_123(156, 1);
	func_136(4, 0);
	func_122(58, -2, 156, -1, -1);
	func_132(80, 157, -2, -1, 0);
	func_106(1, 36, 6, -1718545517, 300000, 10000, -1, 0, -1, 0);
	func_123(157, 1);
	func_83();
	func_82(iVar0);
}

void func_132(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0xA4F7
{
	int iVar0;
	int iVar1;
	
	iVar0 = 1;
	func_85(iVar0);
	Global_71125.f_6825[Global_71125.f_12591 /*3*/] = -1532130030;
	Global_71125.f_6825[Global_71125.f_12591 /*3*/].f_1 = iVar0;
	Global_71125.f_6825[Global_71125.f_12591 /*3*/].f_2 = Global_71125.f_12592[iVar0];
	iVar1 = iParam0;
	iVar1 = (iVar1 + (iParam4 * 1000000));
	func_92(Global_71125.f_12592[iVar0], iVar1, iParam1, iParam2, iParam3);
	func_84(iVar0);
}

void func_133(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xA57B
{
	int iVar0;
	
	if (iParam3 == -1)
	{
		iParam3 = iParam1;
	}
	iVar0 = 1;
	func_85(iVar0);
	Global_71125.f_6825[Global_71125.f_12591 /*3*/] = -868169264;
	Global_71125.f_6825[Global_71125.f_12591 /*3*/].f_1 = iVar0;
	Global_71125.f_6825[Global_71125.f_12591 /*3*/].f_2 = Global_71125.f_12592[iVar0];
	Global_83766[iParam0 /*34*/].f_7 = Global_71125.f_12592[iVar0];
	func_92(Global_71125.f_12592[iVar0], iParam0, iParam1, iParam2, iParam3);
	func_84(iVar0);
}

void func_134(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0xA60E
{
	int iVar0;
	
	iVar0 = 7;
	func_85(iVar0);
	Global_71125.f_6825[Global_71125.f_12591 /*3*/] = 1370985682;
	Global_71125.f_6825[Global_71125.f_12591 /*3*/].f_1 = iVar0;
	Global_71125.f_6825[Global_71125.f_12591 /*3*/].f_2 = Global_71125.f_12592[iVar0];
	func_89(Global_71125.f_12592[iVar0], iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, 0, 0, -1, 0, -1);
	func_84(iVar0);
}

void func_135(int iParam0)//Position - 0xA68B
{
	int iVar0;
	
	iVar0 = 0;
	func_85(iVar0);
	Global_71125.f_6825[Global_71125.f_12591 /*3*/] = 427205337;
	Global_71125.f_6825[Global_71125.f_12591 /*3*/].f_1 = iVar0;
	Global_71125.f_6825[Global_71125.f_12591 /*3*/].f_2 = iParam0;
	if (iParam0 < 0)
	{
		return;
	}
	func_84(iVar0);
}

void func_136(int iParam0, int iParam1)//Position - 0xA6E8
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	func_85(iVar0);
	iVar1 = iParam0;
	iVar1 = (iVar1 + (iParam1 * 1000000));
	Global_71125.f_6825[Global_71125.f_12591 /*3*/] = 553813353;
	Global_71125.f_6825[Global_71125.f_12591 /*3*/].f_1 = iVar0;
	Global_71125.f_6825[Global_71125.f_12591 /*3*/].f_2 = iVar1;
	func_84(iVar0);
}

void func_137()//Position - 0xA74C
{
	int iVar0;
	
	iVar0 = 28;
	func_127(iVar0);
	func_126();
	func_107(67, 0, 0);
	func_107(68, 0, 0);
	func_107(69, 0, 0);
	func_120(96, 0);
	func_97("heist_ctrl_rural", 2050);
	func_125(91, 0);
	func_117(37, 0, 0);
	func_117(38, 0, 0);
	func_117(39, 0, 0);
	func_123(67, 1);
	func_122(91, -2, 67, -1, -1);
	func_132(37, 66, -2, -2, 0);
	func_117(38, 1, 0);
	func_123(66, 0);
	func_144(9, 5);
	func_143(2, 0, 13, -2, -1, 1, 0);
	func_135(500);
	func_143(2, 1, 2, -2, -1, 1, 1);
	func_117(37, 0, 1);
	func_117(38, 0, 1);
	func_117(39, 1, 0);
	func_142(2, 1, 1, 0);
	func_135(501);
	func_141(2, 0, 1, 40);
	func_132(40, -1, -2, -2, 0);
	func_117(39, 0, 1);
	func_117(40, 0, 0);
	func_121(0);
	func_102(224, 0, 0);
	func_95(12, 2, 1);
	func_119(610159002);
	func_88(4, 1, 0, 6000, 6000, -1451910289, -1, -1, 0, -1, 104);
	func_96(7, 0);
	func_98(5, 12, 1, -831144864, 30000, 10000, -1, 0, -1, 1064, 0);
	func_135(3000);
	func_123(68, 1);
	func_122(92, -2, 68, -1, -1);
	func_113(42, 1);
	func_142(2, 3, 1, 0);
	func_114(168, 1, 1, 0);
	func_107(67, 1, 0);
	func_107(68, 1, 0);
	func_107(69, 1, 0);
	func_139(0, 12, 0, 6000, 6000, -2116452823, -1434698871, -1141220854, 19, -1, 89, 0);
	func_139(2, 12, 0, 6000, 6000, 1880611494, -1434698871, -1276059507, 19, -1, 89, 0);
	func_132(41, -2, -1, -2, 0);
	func_107(67, 0, 1);
	func_107(68, 0, 1);
	func_107(69, 0, 1);
	func_138(15, 69, -2, -2);
	func_99(44, 0);
	func_88(7, 12, 0, 6000, 6000, -1434698871, 902928934, 67, 0, -1, 168);
	func_123(69, 1);
	func_114(168, 1, 1, 1);
	func_122(93, -2, 69, -1, -1);
	func_96(8, 0);
	func_114(5, 1, 1, 0);
	func_113(42, 0);
	func_117(5, 1, 0);
	func_108(joaat("weapon_mg"), 1);
	func_108(joaat("weapon_minigun"), 1);
	func_91(2, 39, 12);
	func_119(-1293573249);
	func_100(7, 70, -2, 70);
	func_88(1, 46, 6, 300000, 10000, 406771743, -1, -1, 72, -1, 1);
	func_123(70, 1);
	func_135(10000);
	func_120(76, 0);
	func_83();
	func_82(iVar0);
}

void func_138(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xAA35
{
	int iVar0;
	
	if (iParam3 == -1)
	{
		iParam3 = iParam1;
	}
	iVar0 = 1;
	func_85(iVar0);
	Global_71125.f_6825[Global_71125.f_12591 /*3*/] = -1785731347;
	Global_71125.f_6825[Global_71125.f_12591 /*3*/].f_1 = iVar0;
	Global_71125.f_6825[Global_71125.f_12591 /*3*/].f_2 = Global_71125.f_12592[iVar0];
	func_92(Global_71125.f_12592[iVar0], iParam0, iParam1, iParam2, iParam3);
	func_84(iVar0);
}

void func_139(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)//Position - 0xAAB3
{
	int iVar0;
	
	iVar0 = 8;
	func_85(iVar0);
	Global_71125.f_6825[Global_71125.f_12591 /*3*/] = 246500489;
	Global_71125.f_6825[Global_71125.f_12591 /*3*/].f_1 = iVar0;
	Global_71125.f_6825[Global_71125.f_12591 /*3*/].f_2 = Global_71125.f_12592[iVar0];
	func_140(Global_71125.f_12592[iVar0], iParam5, iParam6, iParam7, iParam1, iParam0, iParam2, iParam3, iParam4, iParam11, -1, -1, -1, iParam9, iParam10, iParam8);
	func_84(iVar0);
}

void func_140(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, int iParam10, int iParam11, int iParam12, var uParam13, var uParam14, var uParam15)//Position - 0xAB3B
{
	Global_71125.f_6684[iParam0 /*14*/] = uParam1;
	Global_71125.f_6684[iParam0 /*14*/].f_1 = uParam2;
	Global_71125.f_6684[iParam0 /*14*/].f_2 = uParam3;
	Global_71125.f_6684[iParam0 /*14*/].f_3 = uParam4;
	Global_71125.f_6684[iParam0 /*14*/].f_4 = uParam5;
	Global_71125.f_6684[iParam0 /*14*/].f_5 = uParam6;
	Global_71125.f_6684[iParam0 /*14*/].f_6 = uParam7;
	Global_71125.f_6684[iParam0 /*14*/].f_7 = uParam8;
	Global_71125.f_6684[iParam0 /*14*/].f_8 = uParam9;
	Global_71125.f_6684[iParam0 /*14*/].f_9 = iParam10;
	Global_71125.f_6684[iParam0 /*14*/].f_10 = iParam11;
	Global_71125.f_6684[iParam0 /*14*/].f_11 = uParam13;
	Global_71125.f_6684[iParam0 /*14*/].f_12 = uParam14;
	Global_71125.f_6684[iParam0 /*14*/].f_13 = uParam15;
}

void func_141(int iParam0, bool bParam1, bool bParam2, int iParam3)//Position - 0xAC13
{
	int iVar0;
	int iVar1;
	
	if (iParam0 < 0 || iParam0 >= 5)
	{
	}
	iVar0 = 1;
	iVar1 = 0;
	if (bParam1)
	{
		unk_0x872F1C1F8587CCC7(&iVar1, 0);
	}
	if (bParam2)
	{
		unk_0x872F1C1F8587CCC7(&iVar1, 2);
	}
	func_85(iVar0);
	Global_71125.f_6825[Global_71125.f_12591 /*3*/] = 828625388;
	Global_71125.f_6825[Global_71125.f_12591 /*3*/].f_1 = iVar0;
	Global_71125.f_6825[Global_71125.f_12591 /*3*/].f_2 = Global_71125.f_12592[iVar0];
	func_92(Global_71125.f_12592[iVar0], iParam0, iParam3, iVar1, 0);
	func_84(iVar0);
}

void func_142(int iParam0, int iParam1, bool bParam2, int iParam3)//Position - 0xACB2
{
	int iVar0;
	int iVar1;
	
	iVar0 = 1;
	func_85(iVar0);
	Global_71125.f_6825[Global_71125.f_12591 /*3*/] = 1822409727;
	Global_71125.f_6825[Global_71125.f_12591 /*3*/].f_1 = iVar0;
	Global_71125.f_6825[Global_71125.f_12591 /*3*/].f_2 = Global_71125.f_12592[iVar0];
	iVar1 = 0;
	if (bParam2)
	{
		unk_0x872F1C1F8587CCC7(&iVar1, 3);
	}
	func_92(Global_71125.f_12592[iVar0], iParam0, iParam1, iVar1, iParam3);
	func_84(iVar0);
}

void func_143(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)//Position - 0xAD35
{
	int iVar0;
	int iVar1;
	
	if (iParam0 < 0 || iParam0 >= 5)
	{
	}
	if (iParam1 == 3 || iParam1 == 4)
	{
	}
	iVar0 = 7;
	iVar1 = 0;
	if (bParam5)
	{
		unk_0x872F1C1F8587CCC7(&iVar1, 0);
	}
	if (bParam6)
	{
		unk_0x872F1C1F8587CCC7(&iVar1, 1);
	}
	func_85(iVar0);
	Global_71125.f_6825[Global_71125.f_12591 /*3*/] = -635831521;
	Global_71125.f_6825[Global_71125.f_12591 /*3*/].f_1 = iVar0;
	Global_71125.f_6825[Global_71125.f_12591 /*3*/].f_2 = Global_71125.f_12592[iVar0];
	func_89(Global_71125.f_12592[iVar0], iParam0, iParam1, iParam2, iParam3, iParam4, iVar1, 0, 0, -1, 0, -1);
	func_84(iVar0);
}

void func_144(int iParam0, int iParam1)//Position - 0xADEF
{
	int iVar0;
	
	iVar0 = 1;
	func_85(iVar0);
	Global_71125.f_6825[Global_71125.f_12591 /*3*/] = 1984622930;
	Global_71125.f_6825[Global_71125.f_12591 /*3*/].f_1 = iVar0;
	Global_71125.f_6825[Global_71125.f_12591 /*3*/].f_2 = Global_71125.f_12592[iVar0];
	func_92(Global_71125.f_12592[iVar0], iParam0, iParam1, -1, -1);
	func_84(iVar0);
}

void func_145()//Position - 0xAE61
{
	int iVar0;
	
	iVar0 = 27;
	func_127(iVar0);
	func_126();
	func_117(115, 1, 0);
	func_117(117, 1, 0);
	func_114(14, 1, 1, 0);
	func_117(53, 1, 0);
	func_117(54, 1, 0);
	func_117(55, 1, 0);
	func_149(1);
	func_120(57, 0);
	func_116(7, 1, 0);
	func_116(8, 1, 0);
	func_116(9, 1, 0);
	func_97("flowStartAccept", 1424);
	func_123(148, 1);
	func_133(53, -2, 148, -1);
	func_97("flowIntroTitle", 1424);
	func_95(18, 1, 0);
	func_95(19, 1, 0);
	func_95(43, 1, 0);
	func_95(44, 1, 0);
	func_95(53, 1, 0);
	func_95(130, 1, 0);
	func_95(36, 0, 0);
	func_95(30, 0, 0);
	func_95(12, 0, 0);
	func_95(130, 0, 0);
	func_95(130, 2, 0);
	func_148(0, 1);
	func_148(2, 1);
	func_120(36, 0);
	func_120(38, 0);
	func_120(140, 0);
	func_120(40, 0);
	func_117(124, 1, 0);
	func_117(125, 1, 0);
	func_120(90, 0);
	func_120(91, 0);
	func_117(66, 1, 0);
	func_117(115, 0, 0);
	func_117(117, 0, 0);
	func_117(116, 1, 0);
	func_124(0, 0, 0);
	func_124(1, 1, 0);
	func_124(2, 0, 0);
	func_147(1);
	func_146(1);
	func_120(114, 0);
	func_132(60, -2, -1, -1, 0);
	func_101(1);
	func_83();
	func_82(iVar0);
}

void func_146(int iParam0)//Position - 0xAFF3
{
	int iVar0;
	
	if (!func_66(iParam0))
	{
	}
	iVar0 = 0;
	func_85(iVar0);
	Global_71125.f_6825[Global_71125.f_12591 /*3*/] = -49496173;
	Global_71125.f_6825[Global_71125.f_12591 /*3*/].f_1 = iVar0;
	Global_71125.f_6825[Global_71125.f_12591 /*3*/].f_2 = iParam0;
	func_84(iVar0);
}

void func_147(int iParam0)//Position - 0xB051
{
	int iVar0;
	
	iVar0 = 0;
	if ((iParam0 != 0 && iParam0 != 1) && iParam0 != 2)
	{
		return;
	}
	func_85(iVar0);
	Global_71125.f_6825[Global_71125.f_12591 /*3*/] = 213552929;
	Global_71125.f_6825[Global_71125.f_12591 /*3*/].f_1 = iVar0;
	Global_71125.f_6825[Global_71125.f_12591 /*3*/].f_2 = iParam0;
	func_84(iVar0);
}

void func_148(int iParam0, int iParam1)//Position - 0xB0C1
{
	int iVar0;
	
	iVar0 = 2;
	if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
	{
		return;
	}
	func_85(iVar0);
	Global_71125.f_6825[Global_71125.f_12591 /*3*/] = 139009950;
	Global_71125.f_6825[Global_71125.f_12591 /*3*/].f_1 = iVar0;
	Global_71125.f_6825[Global_71125.f_12591 /*3*/].f_2 = Global_71125.f_12592[iVar0];
	func_87(Global_71125.f_12592[iVar0], iParam0, iParam1);
	func_84(iVar0);
}

void func_149(bool bParam0)//Position - 0xB14D
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	func_85(iVar0);
	iVar1 = 0;
	if (bParam0)
	{
		iVar1 = 1;
	}
	Global_71125.f_6825[Global_71125.f_12591 /*3*/] = -2093560018;
	Global_71125.f_6825[Global_71125.f_12591 /*3*/].f_1 = iVar0;
	Global_71125.f_6825[Global_71125.f_12591 /*3*/].f_2 = iVar1;
	func_84(iVar0);
}

void func_150()//Position - 0xB1AC
{
	int iVar0;
	
	iVar0 = 26;
	func_127(iVar0);
	func_126();
	func_115(136);
	func_125(50, 0);
	func_151(1, 17, 6, 60000, 20000, 1635046052, 0, 1, -2, 138, -2, 68, 125, 2, 16400);
	func_123(137, 0);
	func_133(50, 139, 138, 139);
	func_123(138, 1);
	func_121(0);
	func_132(79, 139, -2, -1, 0);
	func_98(1, 17, 6, -1207693656, 720000, 20000, -1, 82, -1, 1024, 0);
	func_123(139, 1);
	func_121(1);
	func_99(42, 0);
	func_115(140);
	func_125(52, 0);
	func_151(1, 15, 6, 600000, 10000, 178720519, 4, 5, -2, 142, -2, 69, 127, 3, 16400);
	func_123(141, 0);
	func_133(52, 143, 142, 143);
	func_123(142, 1);
	func_121(2);
	func_118(15, 1, -1130010274, -1);
	func_98(1, 15, 6, 1245740196, 720000, 20000, -1, 84, -1, 1024, 0);
	func_123(143, 1);
	func_121(3);
	func_90(-2062910056);
	func_99(43, 0);
	func_123(144, 1);
	func_125(51, 0);
	func_151(1, 14, 6, 650000, 20000, -464957327, 2, 3, -2, 146, -2, 70, 126, 4, 16400);
	func_123(145, 0);
	func_133(51, 147, 146, 147);
	func_123(146, 1);
	func_121(4);
	func_98(1, 14, 6, -149728591, 720000, 20000, -1, 83, -1, 1024, 0);
	func_123(147, 1);
	func_121(5);
	func_83();
	func_82(iVar0);
}

void func_151(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14)//Position - 0xB362
{
	int iVar0;
	var uVar1;
	
	if (iParam10 == -1)
	{
		iParam10 = iParam8;
	}
	iVar0 = 8;
	uVar1 = iParam14;
	unk_0x872F1C1F8587CCC7(&uVar1, 5);
	func_85(iVar0);
	Global_71125.f_6825[Global_71125.f_12591 /*3*/] = -546916353;
	Global_71125.f_6825[Global_71125.f_12591 /*3*/].f_1 = iVar0;
	Global_71125.f_6825[Global_71125.f_12591 /*3*/].f_2 = Global_71125.f_12592[iVar0];
	func_140(Global_71125.f_12592[iVar0], iParam5, iParam6, iParam7, iParam0, iParam1, iParam2, iParam3, iParam4, uVar1, iParam8, iParam9, iParam10, iParam11, iParam12, iParam13);
	func_84(iVar0);
}

void func_152()//Position - 0xB402
{
	int iVar0;
	
	iVar0 = 25;
	func_127(iVar0);
	func_126();
	func_99(37, 0);
	func_119(1023767);
	func_119(190444893);
	func_123(132, 1);
	func_122(46, -2, 132, -1, -1);
	func_120(156, 0);
	func_124(0, 0, 0);
	func_117(129, 1, 0);
	func_154(0, 1, 1, 0);
	func_154(0, 2, 1, 0);
	func_153(1, 2, 1);
	func_95(35, 2, 1);
	func_91(2, 23, 12);
	func_114(124, 1, 1, 0);
	func_90(469005563);
	func_118(14, 4, -306898819, -1);
	func_118(20, 4, 675079903, -1);
	func_118(35, 4, 814649774, -1);
	func_88(4, 40, 6, 120000, 80000, 1801771084, -1, -1, 0, 21, 1);
	func_96(2, 0);
	func_99(40, 0);
	func_123(133, 1);
	func_122(47, -2, 133, -1, -1);
	func_124(0, 1, 0);
	func_154(0, 1, 0, 0);
	func_101(0);
	func_90(814649774);
	func_90(518202687);
	func_118(35, 4, 1562602199, -1);
	func_118(35, 4, 1113666899, -1);
	func_96(51, 0);
	func_99(41, 0);
	func_114(81, 1, 1, 0);
	func_114(82, 0, 1, 0);
	func_123(134, 1);
	func_122(48, -2, 134, -1, -1);
	func_114(81, 0, 1, 0);
	func_114(82, 1, 1, 0);
	func_153(1, 2, 0);
	func_90(1801771084);
	func_129(0, 30, 1, 240000, 20000, -441095892, -1, 0, -1, 1);
	func_90(-2082393141);
	func_90(-835252192);
	func_118(19, 4, -177054098, -1);
	func_96(32, 0);
	func_96(50, 0);
	func_99(38, 0);
	func_99(39, 0);
	func_88(1, 14, 0, 6000, 5000, -375893868, -1589024007, 13, 56, -1, 136);
	func_98(2, 14, 0, -658009473, 6000, 5000, 13, 56, -1, 1032, 0);
	func_132(50, -2, -1, -2, 0);
	func_123(135, 1);
	func_122(49, -2, 135, -1, -1);
	func_96(25, 0);
	func_96(43, 0);
	func_114(26, 0, 1, 0);
	func_114(34, 0, 1, 0);
	func_114(123, 1, 1, 0);
	func_91(0, 16, 12);
	func_91(1, 11, 12);
	func_90(1890717037);
	func_90(-177054098);
	func_119(1234461962);
	func_118(26, 1, 946886745, -1);
	func_118(14, 2, -1497396589, -1);
	func_118(29, 1, -1766792090, -1);
	func_106(4, 40, 6, -666761274, 80000, 30000, -1, 0, -1, 0);
	func_97("michael4LeadOut", 1424);
	func_88(1, 15, 6, 160000, 25000, 153235461, -1, -1, 0, -1, 0);
	func_88(1, 17, 6, 60000, 20000, -67922520, -1, 13, 0, -1, 0);
	func_83();
	func_82(iVar0);
}

void func_153(int iParam0, int iParam1, bool bParam2)//Position - 0xB715
{
	int iVar0;
	int iVar1;
	
	iVar0 = 1;
	if (((iParam1 != 0 && iParam1 != 1) && iParam1 != 2) && iParam1 != 19)
	{
		return;
	}
	iVar1 = 0;
	if (bParam2)
	{
		iVar1 = 1;
	}
	func_85(iVar0);
	Global_71125.f_6825[Global_71125.f_12591 /*3*/] = 1641341968;
	Global_71125.f_6825[Global_71125.f_12591 /*3*/].f_1 = iVar0;
	Global_71125.f_6825[Global_71125.f_12591 /*3*/].f_2 = Global_71125.f_12592[iVar0];
	func_92(Global_71125.f_12592[iVar0], iParam1, iParam0, iVar1, 0);
	func_84(iVar0);
}

void func_154(int iParam0, int iParam1, bool bParam2, int iParam3)//Position - 0xB7B9
{
	int iVar0;
	int iVar1;
	
	iVar0 = 1;
	if (((iParam1 != 0 && iParam1 != 1) && iParam1 != 2) && iParam1 != 19)
	{
		return;
	}
	iVar1 = 0;
	if (bParam2)
	{
		iVar1 = 1;
	}
	func_85(iVar0);
	Global_71125.f_6825[Global_71125.f_12591 /*3*/] = 1389104680;
	Global_71125.f_6825[Global_71125.f_12591 /*3*/].f_1 = iVar0;
	Global_71125.f_6825[Global_71125.f_12591 /*3*/].f_2 = Global_71125.f_12592[iVar0];
	func_92(Global_71125.f_12592[iVar0], iParam1, iParam0, iVar1, iParam3);
	func_84(iVar0);
}

void func_155()//Position - 0xB85E
{
	int iVar0;
	
	iVar0 = 24;
	func_127(iVar0);
	func_126();
	func_99(36, 0);
	func_132(51, -2, -1, -1, 0);
	func_98(4, 31, 1, 251204761, 1000, 1000, -1, 0, -1, 2048, 0);
	func_123(131, 1);
	func_122(45, -2, 131, -1, -1);
	func_114(130, 1, 1, 0);
	func_114(129, 1, 1, 0);
	func_114(131, 1, 1, 0);
	func_114(134, 1, 1, 0);
	func_114(132, 1, 1, 0);
	func_114(133, 1, 1, 0);
	func_117(59, 0, 0);
	func_124(0, 0, 0);
	func_124(2, 0, 0);
	func_116(0, 0, 0);
	func_116(3, 0, 0);
	func_116(4, 0, 0);
	func_116(1, 1, 1);
	func_116(2, 1, 1);
	func_113(0, 0);
	func_113(1, 1);
	func_113(7, 0);
	func_113(6, 1);
	func_113(8, 0);
	func_95(31, 0, 1);
	func_95(31, 2, 1);
	func_90(1089542219);
	func_119(152157591);
	func_118(29, 1, 1906711117, -1);
	func_118(26, 1, -1613846760, -1);
	func_118(19, 4, 556840426, -1);
	func_98(4, 24, 1, 1328243545, 220000, 20000, 10, 0, -1, 0, 0);
	func_104(32, 1);
	func_96(3, 0);
	func_135(110000);
	func_101(7);
	func_83();
	func_82(iVar0);
}

void func_156()//Position - 0xB9CA
{
	int iVar0;
	
	iVar0 = 23;
	func_127(iVar0);
	func_126();
	func_123(130, 1);
	func_122(44, -2, 130, -1, -1);
	func_95(12, 0, 0);
	func_91(1, 43, 12);
	func_91(1, 44, 12);
	func_91(1, 45, 12);
	func_91(1, 46, 12);
	func_120(124, 0);
	func_120(192, 0);
	func_93("AM_H_WARDROB", 7500, 2, 7, 0, 0);
	func_120(88, 0);
	func_106(7, 96, 6, 2021846885, 130000, 10000, -1, 0, -1, 0);
	func_120(160, 0);
	func_101(26);
	func_88(1, 46, 6, 500000, 30000, -1366489923, -1, -1, 72, -1, 0);
	func_129(0, 12, 0, 6000, 6000, -78001721, -1, 0, -1, 33);
	func_101(20);
	func_115(189);
	func_115(190);
	func_115(191);
	func_106(1, 12, 1, 338918687, 240000, 10000, -1, 0, -1, 0);
	func_83();
	func_82(iVar0);
}

void func_157()//Position - 0xBAD1
{
	int iVar0;
	
	iVar0 = 22;
	func_127(iVar0);
	func_126();
	func_132(42, -2, -1, -1, 0);
	func_99(35, 0);
	func_123(128, 1);
	func_132(81, -1, -2, -1, 0);
	func_123(129, 1);
	func_122(43, -2, 129, -1, -1);
	func_108(joaat("weapon_sawnoffshotgun"), 1);
	func_108(joaat("weapon_pumpshotgun"), 1);
	func_95(37, 1, 1);
	func_118(37, 2, 522335044, -1);
	func_120(25, 0);
	func_115(221);
	func_158(0);
	func_96(29, 0);
	func_83();
	func_82(iVar0);
}

void func_158(bool bParam0)//Position - 0xBB6D
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	func_85(iVar0);
	iVar1 = 0;
	if (bParam0)
	{
		iVar1 = 1;
	}
	Global_71125.f_6825[Global_71125.f_12591 /*3*/] = -26112892;
	Global_71125.f_6825[Global_71125.f_12591 /*3*/].f_1 = iVar0;
	Global_71125.f_6825[Global_71125.f_12591 /*3*/].f_2 = iVar1;
	func_84(iVar0);
}

void func_159()//Position - 0xBBCC
{
	int iVar0;
	
	iVar0 = 21;
	func_127(iVar0);
	func_126();
	func_98(1, 12, 1, -270587643, 240000, 10000, -1, 118, -1, 1032, 0);
	func_132(15, -2, -1, -2, 0);
	func_135(3000);
	func_93("AM_H_PREP2A", 10000, 2, 1, 0, 0);
	func_93("AM_H_PREP2B", 10000, 2, 1, 0, 0);
	func_123(59, 1);
	func_122(88, -2, 59, -1, -1);
	func_160("AM_H_PREP2A", 0);
	func_160("AM_H_PREP2B", 0);
	func_142(0, 10, 1, 0);
	func_138(87, 60, -2, -1);
	func_129(0, 12, 0, 6000, 6000, -1052097629, -1, 0, -1, 32);
	func_123(60, 1);
	func_96(34, 0);
	func_83();
	func_82(iVar0);
}

void func_160(char* sParam0, int iParam1)//Position - 0xBC9B
{
	int iVar0;
	struct<8> Var1;
	
	iVar0 = 4;
	func_85(iVar0);
	Global_71125.f_6825[Global_71125.f_12591 /*3*/] = 2110689209;
	Global_71125.f_6825[Global_71125.f_12591 /*3*/].f_1 = iVar0;
	Global_71125.f_6825[Global_71125.f_12591 /*3*/].f_2 = Global_71125.f_12592[iVar0];
	StringCopy(&Var1, sParam0, 32);
	func_94(Global_71125.f_12592[iVar0], Var1, iParam1, 0, 0, 0);
	func_84(iVar0);
}

void func_161()//Position - 0xBD17
{
	int iVar0;
	
	iVar0 = 20;
	func_127(iVar0);
	func_126();
	func_114(70, 1, 1, 0);
	func_114(71, 1, 1, 0);
	func_114(73, 1, 1, 0);
	func_114(72, 0, 1, 0);
	func_114(74, 0, 1, 0);
	func_107(62, 0, 0);
	func_107(63, 0, 0);
	func_97("heist_ctrl_jewel", 2050);
	func_118(14, 1, 279793409, -1);
	func_125(86, 0);
	func_117(16, 0, 0);
	func_117(17, 0, 0);
	func_123(52, 1);
	func_122(86, -2, 52, -1, -1);
	func_117(16, 1, 0);
	func_123(53, 0);
	func_143(0, 0, 13, -2, -1, 1, 0);
	func_135(500);
	func_123(54, 0);
	func_143(0, 2, 5, -2, -1, 1, 0);
	func_117(16, 0, 1);
	func_117(17, 1, 0);
	func_123(55, 0);
	func_143(0, 1, 6, -2, 54, 1, 1);
	func_135(501);
	func_141(0, 0, 1, 18);
	func_132(18, -1, -2, -2, 0);
	func_117(17, 0, 1);
	func_117(18, 0, 0);
	func_102(222, 0, 0);
	func_120(26, 0);
	func_121(0);
	func_129(0, 1, 0, 6000, 6000, 327673956, 23, 0, -1, 0);
	func_118(19, 2, -1621970384, -1);
	func_98(1, 12, 1, -1608680660, 80000, 30000, -1, 0, 8, 0, 0);
	func_115(222);
	func_135(20000);
	func_99(33, 0);
	func_119(-1608680660);
	func_164(7, 1, -2, 61);
	func_98(1, 12, 1, 689367973, 10000, 10000, -1, 0, -1, 1064, 0);
	func_114(182, 1, 1, 0);
	func_114(183, 1, 1, 0);
	func_114(184, 1, 1, 0);
	func_135(3000);
	func_93("AM_H_PREP1A", 10000, 2, 1, 0, 0);
	func_93("AM_H_PREP2", 10000, 2, 1, 0, 0);
	func_101(21);
	func_123(56, 1);
	func_122(87, -2, 56, -1, -1);
	func_160("AM_H_PREP1A", 0);
	func_160("AM_H_PREP2", 0);
	func_142(0, 9, 1, 0);
	func_114(182, 0, 1, 0);
	func_114(183, 0, 1, 0);
	func_114(184, 0, 1, 0);
	func_114(164, 1, 1, 0);
	func_98(2, 0, 1, -666454256, 15000, 5000, -1, 0, -1, 1088, 0);
	func_138(88, 58, -2, -1);
	func_100(12, -2, 57, -2);
	func_129(0, 12, 0, 6000, 6000, -1945164276, -1, 0, -1, 32);
	func_163(58, 0);
	func_123(57, 1);
	func_129(0, 12, 0, 6000, 6000, -1746082591, -1, 0, -1, 32);
	func_123(58, 1);
	func_120(117, 0);
	func_99(34, 0);
	func_163(65, 0);
	func_123(61, 1);
	func_162(21);
	func_98(1, 12, 1, -1641645609, 10000, 10000, -1, 0, -1, 1064, 0);
	func_135(6000);
	func_93("AM_H_PREP1B", 10000, 2, 1, 0, 1);
	func_93("AM_H_PREP2", 10000, 2, 1, 0, 1);
	func_98(2, 0, 1, -666454256, 15000, 5000, -1, 0, -1, 1088, 1);
	func_123(62, 1);
	func_122(89, -2, 62, -1, -1);
	func_160("AM_H_PREP1B", 1);
	func_160("AM_H_PREP2", 1);
	func_142(0, 11, 1, 0);
	func_123(65, 0);
	func_133(90, -2, 65, -1);
	func_114(88, 2, 1, 0);
	func_114(89, 0, 1, 0);
	func_114(164, 0, 1, 0);
	func_114(70, 0, 1, 0);
	func_114(71, 0, 1, 0);
	func_114(73, 0, 1, 0);
	func_114(72, 0, 1, 1);
	func_114(74, 0, 1, 1);
	func_120(101, 0);
	func_117(4, 1, 0);
	func_117(72, 0, 0);
	func_119(486824538);
	func_119(-666454256);
	func_90(1502097668);
	func_90(279793409);
	func_90(2111803439);
	func_90(-1690219790);
	func_90(1438498239);
	func_90(-1565848713);
	func_90(-1351801605);
	func_90(1311040108);
	func_130(54);
	func_95(12, 1, 1);
	func_98(2, 0, 0, -1879623490, 5000, 20000, -1, 0, -1, 40, 0);
	func_95(20, 2, 0);
	func_95(24, 2, 0);
	func_95(39, 2, 0);
	func_95(34, 2, 0);
	func_95(47, 2, 0);
	func_95(131, 2, 0);
	func_101(31);
	func_108(joaat("weapon_carbinerifle"), 1);
	func_108(joaat("weapon_smokegrenade"), 1);
	func_106(7, 97, 6, 1818503402, 90000, 10000, -1, 0, -1, 0);
	func_83();
	func_82(iVar0);
}

void func_162(int iParam0)//Position - 0xC1E3
{
	int iVar0;
	
	iVar0 = 0;
	func_85(iVar0);
	Global_71125.f_6825[Global_71125.f_12591 /*3*/] = 2058194871;
	Global_71125.f_6825[Global_71125.f_12591 /*3*/].f_1 = iVar0;
	Global_71125.f_6825[Global_71125.f_12591 /*3*/].f_2 = iParam0;
	func_84(iVar0);
}

void func_163(int iParam0, int iParam1)//Position - 0xC237
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	func_85(iVar0);
	iVar1 = iParam0;
	iVar1 = (iVar1 + (iParam1 * 1000000));
	Global_71125.f_6825[Global_71125.f_12591 /*3*/] = -1878191811;
	Global_71125.f_6825[Global_71125.f_12591 /*3*/].f_1 = iVar0;
	Global_71125.f_6825[Global_71125.f_12591 /*3*/].f_2 = iVar1;
	func_84(iVar0);
}

void func_164(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xC29B
{
	int iVar0;
	
	iVar0 = 1;
	func_85(iVar0);
	Global_71125.f_6825[Global_71125.f_12591 /*3*/] = 1174602905;
	Global_71125.f_6825[Global_71125.f_12591 /*3*/].f_1 = iVar0;
	Global_71125.f_6825[Global_71125.f_12591 /*3*/].f_2 = Global_71125.f_12592[iVar0];
	func_92(Global_71125.f_12592[iVar0], iParam0, iParam1, iParam2, iParam3);
	func_84(iVar0);
}

void func_165()//Position - 0xC30F
{
	int iVar0;
	
	iVar0 = 19;
	func_127(iVar0);
	func_126();
	func_104(58, 1);
	func_115(219);
	func_102(212, 0, 0);
	func_115(220);
	func_115(184);
	func_132(74, -2, -1, -2, 0);
	func_117(57, 1, 0);
	func_96(9, 0);
	func_104(24, 1);
	func_115(205);
	func_115(180);
	func_104(46, 1);
	func_115(213);
	func_102(227, 0, 0);
	func_115(231);
	func_117(57, 0, 0);
	func_123(124, 1);
	func_122(40, -2, 124, -1, -1);
	func_114(154, 1, 1, 0);
	func_96(10, 0);
	func_96(35, 0);
	func_132(62, 125, -2, 125, 0);
	func_106(2, 19, 6, -132533604, 80000, 30000, -1, 0, -1, 0);
	func_98(2, 19, 1, -1501908698, 30000, 10000, -1, 41, -1, 0, 0);
	func_123(125, 1);
	func_88(2, 19, 1, 180000, 30000, 546458037, 1674644829, 9, 55, -1, 129);
	func_123(239, 1);
	func_99(29, 0);
	func_99(30, 0);
	func_123(126, 1);
	func_122(41, -2, 126, -1, -1);
	func_114(155, 1, 1, 0);
	func_98(4, 19, 1, 943848816, 300000, 10000, -1, 66, 22, 262144, 0);
	func_120(121, 0);
	func_90(522335044);
	func_90(-1621970384);
	func_90(1031237239);
	func_118(37, 2, 2097475336, -1);
	func_118(19, 2, -755689100, -1);
	func_114(3, 0, 1, 0);
	func_113(35, 0);
	func_114(4, 0, 1, 0);
	func_106(1, 99, 1, 1440910066, 30000, 10000, -1, 11, -1, 0);
	func_106(2, 99, 1, 2063740346, 30000, 10000, -1, 11, -1, 0);
	func_106(4, 99, 1, 957098437, 30000, 10000, -1, 11, -1, 0);
	func_97("controller_Races", 128);
	func_115(179);
	func_96(16, 0);
	func_99(31, 0);
	func_99(32, 0);
	func_154(1, 19, 1, 0);
	func_90(-108894207);
	func_118(37, 2, -950205513, -1);
	func_123(127, 1);
	func_122(42, -2, 127, -1, -1);
	func_114(161, 1, 1, 0);
	func_154(1, 19, 0, 0);
	func_96(38, 0);
	func_90(-950205513);
	func_90(-755689100);
	func_90(1801771084);
	func_118(19, 4, 616513703, -1);
	func_118(37, 2, -703684326, -1);
	func_118(19, 2, 1509435260, -1);
	func_88(4, 40, 6, 80000, 80000, -1716308760, -1, -1, 0, 21, 1);
	func_83();
	func_82(iVar0);
}

void func_166()//Position - 0xC5EA
{
	int iVar0;
	
	iVar0 = 18;
	func_127(iVar0);
	func_126();
	func_123(44, 1);
	func_122(82, -2, 44, -1, -1);
	func_120(106, 0);
	func_96(28, 0);
	func_83();
	func_82(iVar0);
}

void func_167()//Position - 0xC62C
{
	int iVar0;
	
	iVar0 = 17;
	func_127(iVar0);
	func_126();
	func_123(43, 1);
	func_122(81, -2, 43, -1, -1);
	func_120(106, 0);
	func_96(27, 0);
	func_83();
	func_82(iVar0);
}

void func_168()//Position - 0xC66E
{
	int iVar0;
	
	iVar0 = 16;
	func_127(iVar0);
	func_126();
	func_164(11, 8, 41, 45);
	func_123(41, 1);
	func_117(30, 0, 0);
	func_120(102, 0);
	func_132(30, -2, -1, -2, 0);
	func_135(3000);
	func_93("AM_H_GAUNT_R", 10000, 2, 7, 0, 0);
	func_101(17);
	func_101(18);
	func_123(42, 1);
	func_122(80, -2, 42, -1, -1);
	func_120(106, 0);
	func_96(26, 0);
	func_163(47, 0);
	func_123(45, 1);
	func_98(7, 12, 1, 2073240496, 240000, 10000, -1, 0, -1, 1064, 0);
	func_135(3001);
	func_123(46, 1);
	func_122(83, -2, 46, -1, -1);
	func_120(107, 0);
	func_96(26, 1);
	func_123(47, 1);
	func_83();
	func_82(iVar0);
}

void func_169()//Position - 0xC759
{
	int iVar0;
	
	iVar0 = 15;
	func_127(iVar0);
	func_126();
	func_99(24, 0);
	func_123(29, 1);
	func_122(76, -2, 29, -1, -1);
	func_114(172, 1, 1, 0);
	func_142(4, 1, 1, 0);
	func_98(2, 45, 1, 1023767, 15000, 10000, -1, 155, -1, 0, 0);
	func_98(5, 45, 1, 190444893, 15000, 10000, -1, 155, -1, 0, 0);
	func_101(25);
	func_99(25, 0);
	func_120(98, 0);
	func_97("heist_ctrl_finale", 2050);
	func_90(675079903);
	func_125(77, 0);
	func_117(24, 0, 0);
	func_117(25, 0, 0);
	func_123(30, 1);
	func_122(77, -2, -2, -1, -1);
	func_117(24, 1, 0);
	func_123(31, 0);
	func_143(4, 0, 13, -2, -1, 1, 0);
	func_135(500);
	func_123(32, 0);
	func_143(4, 2, 2, -2, -1, 1, 0);
	func_117(25, 1, 0);
	func_117(24, 0, 1);
	func_123(33, 0);
	func_143(4, 1, 10, -2, 32, 1, 1);
	func_135(501);
	func_141(4, 0, 1, 26);
	func_132(26, -1, -2, -2, 0);
	func_117(25, 0, 1);
	func_117(26, 0, 0);
	func_102(226, 0, 0);
	func_121(0);
	func_90(1509435260);
	func_90(616513703);
	func_101(16);
	func_164(11, 8, 35, 38);
	func_123(35, 1);
	func_98(7, 12, 1, -1942568571, 30000, 10000, -1, 0, -1, 1064, 0);
	func_135(3000);
	func_123(36, 1);
	func_122(78, -2, 36, -1, -1);
	func_142(4, 5, 1, 0);
	func_120(104, 0);
	func_132(28, -2, -1, -2, 0);
	func_99(26, 0);
	func_99(27, 0);
	func_99(28, 0);
	func_102(221, 0, 0);
	func_142(4, 6, 1, 0);
	func_132(36, -2, -1, -2, 0);
	func_123(48, 1);
	func_122(84, -2, 48, -1, -1);
	func_108(joaat("weapon_appistol"), 1);
	func_108(joaat("weapon_pumpshotgun"), 1);
	func_163(50, 0);
	func_123(38, 1);
	func_98(7, 12, 1, -408163515, 30000, 10000, -1, 0, -1, 1064, 0);
	func_162(17);
	func_162(18);
	func_135(3001);
	func_98(7, 12, 1, -1216150262, 600000, 30000, -1, 0, 9, 0, 0);
	func_123(39, 1);
	func_97("finale_heist_prepEamb", 2050);
	func_122(79, -2, 39, -1, -1);
	func_142(4, 7, 1, 0);
	func_120(120, 0);
	func_120(105, 0);
	func_102(220, 0, 0);
	func_132(29, -2, -1, -2, 0);
	func_132(34, -2, -1, -2, 0);
	func_99(26, 1);
	func_132(36, -2, -1, -2, 1);
	func_123(49, 1);
	func_122(85, 50, 49, -1, -1);
	func_119(-1216150262);
	func_123(50, 1);
	func_117(3, 1, 0);
	func_90(-441095892);
	func_90(2065444157);
	func_90(624853379);
	func_90(-1766792090);
	func_108(joaat("weapon_advancedrifle"), 1);
	func_106(7, 97, 6, -709067855, 100000, 10000, -1, 0, -1, 0);
	func_101(14);
	func_83();
	func_82(iVar0);
}

void func_170()//Position - 0xCACF
{
	int iVar0;
	
	iVar0 = 14;
	func_127(iVar0);
	func_126();
	func_117(134, 0, 0);
	func_144(12, -1);
	func_123(114, 1);
	func_122(23, -2, 114, -1, -1);
	func_97("Finale_Choice", 1424);
	func_132(134, -2, -1, 115, 0);
	func_164(12, 0, 115, -2);
	func_164(12, 1, 116, 117);
	func_123(115, 1);
	func_117(134, 1, 0);
	func_122(24, -2, 115, -1, 116);
	func_117(136, 1, 0);
	func_154(0, 2, 1, 0);
	func_154(1, 2, 1, 0);
	func_154(19, 2, 1, 0);
	func_154(14, 2, 1, 0);
	func_124(2, 0, 0);
	func_154(0, 1, 1, 0);
	func_114(56, 1, 1, 0);
	func_114(57, 0, 1, 0);
	func_114(58, 0, 1, 0);
	func_114(59, 0, 1, 0);
	func_173(1, 70);
	func_163(119, 0);
	func_123(116, 1);
	func_117(134, 1, 1);
	func_122(25, -2, 116, -1, 117);
	func_117(135, 1, 0);
	func_172(26, 147);
	func_90(178720519);
	func_90(-464957327);
	func_154(1, 0, 1, 0);
	func_154(2, 0, 1, 0);
	func_154(14, 0, 1, 0);
	func_154(17, 0, 1, 0);
	func_124(0, 0, 0);
	func_114(11, 1, 1, 0);
	func_154(1, 2, 1, 1);
	func_154(19, 2, 1, 1);
	func_154(14, 1, 1, 0);
	func_154(14, 2, 1, 1);
	func_173(1, 71);
	func_163(119, 1);
	func_123(117, 1);
	func_125(26, 1);
	func_171(26);
	func_117(134, 1, 2);
	func_122(26, -2, 117, -1, -1);
	func_123(118, 1);
	func_133(27, -2, 117, -1);
	func_121(0);
	func_117(129, 0, 0);
	func_154(0, 2, 0, 0);
	func_173(0, 72);
	func_173(1, 73);
	func_90(1562602199);
	func_90(1113666899);
	func_123(119, 1);
	func_133(28, -2, -2, -1);
	func_132(135, 120, -2, 120, 0);
	func_132(136, 120, -2, 120, 0);
	func_106(7, 12, 0, 801347631, 3000, 3000, -1, 80, -1, 0);
	func_106(2, 19, 6, -2135625223, 120000, 60000, -1, 0, -1, 0);
	func_106(2, 0, 6, -1430864197, 200000, 60000, -1, 0, -1, 0);
	func_106(1, 30, 6, -789275824, 60000, 20000, -1, 0, -1, 0);
	func_106(1, 144, 6, 859937019, 400000, 60000, -1, 0, -1, 0);
	func_88(1, 30, 1, 700000, 180000, -1468151569, -1, -1, 0, -1, 64);
	func_118(19, 2, 82970585, -1);
	func_118(19, 4, 2064117051, -1);
	func_118(26, 1, 1229388294, -1);
	func_123(120, 1);
	func_97("Finale_Endgame", 2050);
	func_132(137, -2, -1, -1, 0);
	func_120(130, 0);
	func_90(-1130010274);
	func_90(946886745);
	func_90(-703684326);
	func_90(-1497396589);
	func_88(2, 43, 1, 3600000, 180000, 1080702705, -1, -1, 0, -1, 0);
	func_115(218);
	func_132(135, -2, 121, 123, 0);
	func_90(-306898819);
	func_106(2, 17, 6, 632406285, 450000, 120000, -1, 0, -1, 0);
	func_106(2, 19, 6, -1523625340, 850000, 120000, -1, 0, -1, 0);
	func_106(2, 2, 6, -2076002026, 120000, 60000, -1, 0, -1, 0);
	func_98(6, 12, 1, 704657460, 3000, 1000, -1, 79, -1, 0, 0);
	func_129(1, 29, 1, 30000, 60000, -121056641, -1, 0, -1, 0);
	func_88(2, 14, 1, 250000, 180000, -1398697867, -1, -1, 129, -1, 0);
	func_120(190, 0);
	func_132(49, 122, -2, 122, 0);
	func_98(2, 12, 1, -799417230, 200000, 1000, -1, 0, -1, 0, 0);
	func_163(122, 0);
	func_123(121, 1);
	func_132(136, -2, 123, -1, 0);
	func_106(2, 0, 6, -1897604564, 300000, 60000, -1, 0, -1, 0);
	func_106(2, 19, 6, 711875844, 800000, 60000, -1, 0, -1, 0);
	func_106(1, 20, 6, 430981897, 600000, 120000, -1, 0, -1, 0);
	func_98(3, 12, 1, -1198893762, 3000, 1000, -1, 79, -1, 0, 0);
	func_88(1, 14, 1, 250000, 180000, -288258721, -1, -1, 0, -1, 0);
	func_88(2, 14, 1, 480000, 180000, -47439340, -1, -1, 0, -1, 0);
	func_88(2, 23, 1, 120000, 180000, 1972824823, -1, -1, 0, -1, 0);
	func_120(191, 0);
	func_132(49, 122, -2, 122, 1);
	func_98(2, 12, 1, -2135245515, 200000, 1000, -1, 0, -1, 0, 0);
	func_123(122, 1);
	func_88(2, 19, 1, 600000, 180000, -579786137, -1, -1, 0, -1, 0);
	func_123(123, 1);
	func_132(136, 255, -2, -2, 0);
	func_106(4, 30, 6, 183426861, 30000, 20000, -1, 0, -1, 0);
	func_98(4, 20, 6, 65881433, 60000, 10000, 10, 207, -1, 0, 0);
	func_104(35, 1);
	func_115(209);
	func_123(255, 1);
	func_83();
	func_82(iVar0);
}

void func_171(int iParam0)//Position - 0xD07A
{
	int iVar0;
	
	iVar0 = 0;
	func_85(iVar0);
	Global_71125.f_6825[Global_71125.f_12591 /*3*/] = 1572323470;
	Global_71125.f_6825[Global_71125.f_12591 /*3*/].f_1 = iVar0;
	Global_71125.f_6825[Global_71125.f_12591 /*3*/].f_2 = iParam0;
	func_84(iVar0);
}

void func_172(int iParam0, int iParam1)//Position - 0xD0CE
{
	int iVar0;
	
	iVar0 = 2;
	func_85(iVar0);
	Global_71125.f_6825[Global_71125.f_12591 /*3*/] = -217347738;
	Global_71125.f_6825[Global_71125.f_12591 /*3*/].f_1 = iVar0;
	Global_71125.f_6825[Global_71125.f_12591 /*3*/].f_2 = Global_71125.f_12592[iVar0];
	func_87(Global_71125.f_12592[iVar0], iParam0, iParam1);
	func_84(iVar0);
}

void func_173(int iParam0, int iParam1)//Position - 0xD13E
{
	int iVar0;
	
	iVar0 = 2;
	if ((iParam0 != 0 && iParam0 != 1) && iParam0 != 2)
	{
		return;
	}
	func_85(iVar0);
	Global_71125.f_6825[Global_71125.f_12591 /*3*/] = 215526917;
	Global_71125.f_6825[Global_71125.f_12591 /*3*/].f_1 = iVar0;
	Global_71125.f_6825[Global_71125.f_12591 /*3*/].f_2 = Global_71125.f_12592[iVar0];
	func_87(Global_71125.f_12592[iVar0], iParam1, iParam0);
	func_84(iVar0);
}

void func_174()//Position - 0xD1CA
{
	int iVar0;
	
	iVar0 = 13;
	func_127(iVar0);
	func_126();
	func_123(109, 1);
	func_114(167, 0, 1, 0);
	func_122(37, -2, 109, -1, -1);
	func_103(28, 1);
	func_102(217, 0, 0);
	func_96(20, 0);
	func_83();
	func_82(iVar0);
}

void func_175()//Position - 0xD21D
{
	int iVar0;
	
	iVar0 = 12;
	func_127(iVar0);
	func_126();
	func_123(108, 1);
	func_120(33, 0);
	func_122(36, -2, 108, -1, -1);
	func_120(33, 1);
	func_114(167, 1, 1, 0);
	func_96(19, 0);
	func_83();
	func_82(iVar0);
}

void func_176()//Position - 0xD26F
{
	int iVar0;
	
	iVar0 = 11;
	func_127(iVar0);
	func_126();
	func_123(107, 1);
	func_122(35, -2, 107, -1, -1);
	func_96(18, 0);
	func_83();
	func_82(iVar0);
}

void func_177()//Position - 0xD2AA
{
	int iVar0;
	
	iVar0 = 10;
	func_127(iVar0);
	func_126();
	func_123(106, 1);
	func_122(34, -2, 106, -1, -1);
	func_113(41, 1);
	func_96(17, 0);
	func_83();
	func_82(iVar0);
}

void func_178()//Position - 0xD2EC
{
	int iVar0;
	
	iVar0 = 9;
	func_127(iVar0);
	func_126();
	func_123(100, 1);
	func_122(29, -2, 100, -1, -1);
	func_108(joaat("weapon_combatpistol"), 1);
	func_120(145, 0);
	func_106(1, 30, 6, -1069372983, 30000, 10000, -1, 0, -1, 0);
	func_106(4, 144, 6, 546388833, 120000, 10000, -1, 0, -1, 512);
	func_96(11, 0);
	func_123(101, 1);
	func_122(30, -2, 101, -1, -1);
	func_114(67, 2, 1, 0);
	func_98(2, 2, 1, 839361606, 30000, 20000, -1, 0, 17, 0, 0);
	func_108(joaat("weapon_appistol"), 1);
	func_108(joaat("weapon_heavysniper"), 1);
	func_106(7, 97, 6, -929373866, 130000, 10000, -1, 0, -1, 0);
	func_95(23, 0, 1);
	func_95(1, 2, 1);
	func_95(2, 1, 1);
	func_153(0, 1, 1);
	func_153(1, 2, 1);
	func_153(2, 0, 1);
	func_96(30, 0);
	func_104(48, 0);
	func_115(214);
	func_104(51, 0);
	func_115(215);
	func_104(3, 1);
	func_115(197);
	func_104(4, 1);
	func_115(198);
	func_135(300000);
	func_179(15, 2, 1);
	func_123(102, 0);
	func_125(31, 0);
	func_117(44, 0, 0);
	func_88(1, 23, 1, 60000, 27500, -444489072, -1, 6, 48, -1, 85);
	func_88(4, 23, 1, 60000, 27500, 154402960, -1, 6, 48, -1, 85);
	func_132(44, -2, -1, -2, 0);
	func_123(103, 0);
	func_133(31, -2, 102, -1);
	func_121(0);
	func_114(142, 1, 1, 0);
	func_153(0, 1, 0);
	func_153(1, 2, 0);
	func_153(2, 0, 0);
	func_96(5, 0);
	func_99(21, 0);
	func_98(7, 23, 1, 6861963, 10000, 10000, -1, 0, -1, 40, 0);
	func_95(23, 1, 1);
	func_123(104, 1);
	func_122(32, -2, 104, -1, -1);
	func_95(30, 1, 1);
	func_95(30, 2, 1);
	func_108(joaat("weapon_rpg"), 1);
	func_88(4, 8, 0, 6000, 6000, 795730787, -1, -1, 0, -1, 96);
	func_93("AM_H_PREP5", 10000, 2, 7, 0, 0);
	func_101(10);
	func_97("FBI4_Prep3Amb", 2050);
	func_162(11);
	func_101(12);
	func_101(13);
	func_98(1, 1, 1, -655205392, 600000, 30000, -1, 154, 6, 0, 0);
	func_98(6, 0, 1, 1266526796, 600000, 30000, -1, 154, 6, 0, 0);
	func_123(105, 1);
	func_122(33, -2, 105, -1, -1);
	func_113(40, 1);
	func_99(17, 0);
	func_99(19, 0);
	func_99(20, 0);
	func_99(23, 0);
	func_99(14, 0);
	func_99(15, 0);
	func_99(16, 0);
	func_102(218, 0, 0);
	func_132(45, -2, -1, -2, 0);
	func_119(-655205392);
	func_119(1266526796);
	func_132(46, 111, -2, 111, 0);
	func_117(47, 0, 0);
	func_88(1, 23, 1, 20000, 10000, -2014002000, -1652588035, 73, 49, 5, 136);
	func_88(2, 0, 1, 20000, 10000, -314546970, -125167689, 73, 49, 5, 136);
	func_88(4, 0, 1, 20000, 10000, -1306479777, -125167689, 73, 49, 5, 136);
	func_132(47, 112, -1, 112, 0);
	func_123(111, 1);
	func_120(49, 0);
	func_123(112, 1);
	func_114(167, 0, 1, 0);
	func_113(41, 0);
	func_113(40, 0);
	func_122(38, -2, 112, -2, -1);
	func_129(0, 1, 0, 6000, 6000, 687625470, -1, 146, -1, 0);
	func_95(29, 0, 1);
	func_114(1, 1, 1, 0);
	func_114(137, 1, 1, 0);
	func_114(156, 0, 1, 0);
	func_114(157, 1, 1, 0);
	func_108(joaat("weapon_assaultrifle"), 1);
	func_108(joaat("weapon_assaultshotgun"), 1);
	func_108(joaat("weapon_stickybomb"), 1);
	func_108(joaat("weapon_combatmg"), 1);
	func_106(7, 97, 6, -1252410668, 120000, 10000, -1, 0, -1, 0);
	func_98(4, 47, 1, 736324744, 120000, 10000, -1, 73, -1, 1024, 0);
	func_104(0, 1);
	func_115(195);
	func_101(3);
	func_101(30);
	func_99(22, 0);
	func_123(113, 1);
	func_173(1, 49);
	func_122(39, -2, 113, -1, -1);
	func_108(joaat("weapon_carbinerifle"), 1);
	func_108(joaat("weapon_stungun"), 1);
	func_91(2, 15, 12);
	func_114(158, 1, 1, 0);
	func_114(78, 0, 1, 0);
	func_114(171, 1, 1, 0);
	func_114(105, 1, 1, 0);
	func_114(106, 1, 1, 0);
	func_114(107, 1, 1, 0);
	func_114(108, 1, 1, 0);
	func_114(109, 1, 1, 0);
	func_114(110, 1, 1, 0);
	func_88(4, 40, 6, 480000, 60000, 2033185762, -1, -1, 147, -1, 0);
	func_96(56, 0);
	func_117(131, 1, 0);
	func_117(120, 0, 0);
	func_154(1, 0, 0, 0);
	func_154(1, 2, 0, 0);
	func_154(14, 1, 0, 0);
	func_154(19, 2, 0, 0);
	func_119(1328243545);
	func_119(1400447159);
	func_90(1645231);
	func_90(-1141042322);
	func_90(520422857);
	func_90(-1982920067);
	func_90(1319343143);
	func_90(-1118768768);
	func_90(-705125709);
	func_90(-782984853);
	func_90(-92968020);
	func_90(-406305198);
	func_90(-330856906);
	func_90(-690594988);
	func_90(-349863294);
	func_90(424926942);
	func_90(1410028576);
	func_90(1766909710);
	func_90(1906711117);
	func_90(1031237239);
	func_90(194808514);
	func_90(71040001);
	func_90(556840426);
	func_90(-1613846760);
	func_90(-1565848713);
	func_90(-1351801605);
	func_90(1311040108);
	func_118(26, 1, 518202687, -1);
	func_120(136, 0);
	func_116(1, 0, 0);
	func_116(0, 1, 1);
	func_113(0, 1);
	func_113(1, 0);
	func_114(134, 0, 1, 0);
	func_114(132, 0, 1, 0);
	func_114(133, 0, 1, 0);
	func_106(7, 97, 6, -1853951201, 110000, 10000, -1, 0, -1, 0);
	func_115(166);
	func_83();
	func_82(iVar0);
}

void func_179(int iParam0, int iParam1, bool bParam2)//Position - 0xD9BE
{
	int iVar0;
	int iVar1;
	
	iVar0 = 1;
	func_85(iVar0);
	Global_71125.f_6825[Global_71125.f_12591 /*3*/] = -1730578455;
	Global_71125.f_6825[Global_71125.f_12591 /*3*/].f_1 = iVar0;
	Global_71125.f_6825[Global_71125.f_12591 /*3*/].f_2 = Global_71125.f_12592[iVar0];
	iVar1 = 0;
	if (bParam2)
	{
		iVar1 = 1;
	}
	func_92(Global_71125.f_12592[iVar0], iParam0, iParam1, iVar1, 0);
	func_84(iVar0);
}

void func_180()//Position - 0xDA3C
{
	int iVar0;
	
	iVar0 = 8;
	func_127(iVar0);
	func_126();
	func_123(91, 1);
	func_122(17, -2, 91, -1, -1);
	func_148(14, 1);
	func_95(1, 0, 1);
	func_95(0, 1, 1);
	func_95(14, 1, 1);
	func_120(62, 0);
	func_114(179, 1, 1, 0);
	func_114(174, 2, 1, 0);
	func_114(178, 2, 1, 0);
	func_114(175, 2, 1, 0);
	func_114(176, 2, 1, 0);
	func_114(177, 2, 1, 0);
	func_113(36, 0);
	func_98(2, 14, 0, -1428654185, 6000, 10000, -1, 0, -1, 0, 0);
	func_118(14, 2, -1893250473, -1);
	func_112(0, 1);
	func_173(1, 9);
	func_101(22);
	func_120(124, 0);
	func_182(12, 1);
	func_120(122, 0);
	func_99(9, 0);
	func_123(94, 1);
	func_122(19, -2, 94, -1, -1);
	func_173(1, 10);
	func_114(2, 1, 1, 0);
	func_117(58, 1, 0);
	func_119(-1900821691);
	func_98(1, 17, 1, -1845612607, 35000, 10000, -1, 22, -1, 262144, 0);
	func_101(29);
	func_101(23);
	func_117(57, 1, 0);
	func_117(127, 1, 0);
	func_95(12, 0, 1);
	func_98(1, 31, 1, -1577577773, 300000, 10000, -1, 67, -1, 2048, 0);
	func_118(17, 1, 1290939985, -1);
	func_118(17, 1, -1690219790, -1);
	func_118(14, 1, -1878340166, -1);
	func_118(14, 2, -1160994395, -1);
	func_132(82, 93, -2, -2, 0);
	func_98(2, 0, 1, 486824538, 30000, 10000, -1, 35, -1, 1024, 0);
	func_123(93, 1);
	func_115(177);
	func_115(193);
	func_99(10, 0);
	func_100(8, -2, -1, -2);
	func_117(57, 0, 0);
	func_123(92, 1);
	func_122(18, -2, 92, -1, -1);
	func_114(14, 1, 1, 0);
	func_117(123, 1, 0);
	func_96(33, 0);
	func_90(1290939985);
	func_90(-1878340166);
	func_90(1502097668);
	func_118(31, 1, -1565848713, -1);
	func_118(31, 1, -1351801605, -1);
	func_118(31, 1, 1311040108, -1);
	func_118(17, 1, 2111803439, -1);
	func_118(15, 1, 684213521, -1);
	func_113(9, 1);
	func_113(10, 1);
	func_120(20, 0);
	func_115(185);
	func_99(12, 0);
	func_123(95, 1);
	func_122(20, -2, 95, -1, -1);
	func_95(14, 2, 0);
	func_148(14, 2);
	func_90(684213521);
	func_90(-1893250473);
	func_90(-1160994395);
	func_106(4, 14, 6, 1424059178, 120000, 30000, -1, 0, 23, 512);
	func_98(1, 31, 1, -1235391473, 180000, 10000, -1, 0, -1, 0, 0);
	func_106(4, 20, 6, -771149390, 500000, 60000, -1, 0, -1, 512);
	func_118(15, 1, 1388615949, -1);
	func_118(14, 1, 460547213, -1);
	func_118(14, 2, 963157723, -1);
	func_118(14, 4, -1196085634, -1);
	func_118(19, 2, 1031237239, 14);
	func_118(19, 2, 194808514, 13);
	func_118(19, 4, 71040001, 15);
	func_114(2, 2, 1, 0);
	func_114(135, 1, 1, 0);
	func_114(138, 1, 1, 0);
	func_114(144, 1, 1, 0);
	func_114(122, 1, 1, 0);
	func_95(0, 2, 1);
	func_95(2, 0, 1);
	func_148(0, 2);
	func_88(1, 15, 1, 500000, 60000, 1995383583, -1, -1, 0, -1, 69);
	func_114(116, 1, 1, 0);
	func_124(1, 1, 0);
	func_147(1);
	func_101(9);
	func_101(5);
	func_96(45, 0);
	func_101(2);
	func_104(44, 1);
	func_115(212);
	func_99(11, 0);
	func_123(96, 1);
	func_122(21, -2, 96, -1, -1);
	func_114(118, 1, 1, 0);
	func_114(117, 1, 1, 0);
	func_114(119, 1, 1, 0);
	func_114(125, 1, 1, 0);
	func_114(120, 1, 1, 0);
	func_117(128, 1, 0);
	func_154(17, 0, 1, 0);
	func_154(14, 0, 1, 0);
	func_120(81, 0);
	func_120(133, 0);
	func_90(1995383583);
	func_90(1388615949);
	func_90(460547213);
	func_90(963157723);
	func_90(-1196085634);
	func_118(15, 1, -2062910056, -1);
	func_118(14, 2, 1730771548, -1);
	func_118(14, 4, 170512742, -1);
	func_98(1, 14, 1, 25048086, 30000, 10000, -1, 0, -1, 0, 0);
	func_88(1, 15, 1, 100000, 120000, -881570909, -1, -1, 0, -1, 69);
	func_93("AM_H_YOGA", 10000, 2, 1, 0, 0);
	func_120(21, 0);
	func_115(186);
	func_96(23, 0);
	func_99(13, 0);
	func_123(97, 1);
	func_122(22, -2, 97, -1, -1);
	func_96(53, 0);
	func_120(134, 0);
	func_90(-881570909);
	func_90(1645231);
	func_118(14, 1, 1890717037, -1);
	func_118(14, 2, -2082393141, -1);
	func_106(1, 17, 6, -1303362934, 80000, 30000, -1, 0, -1, 0);
	func_181(2);
	func_130(56);
	func_132(10, 99, -2, -1, 0);
	func_119(2114893093);
	func_98(1, 1, 0, 2114893093, 6000, 2000, -1, 148, -1, 2048, 0);
	func_123(99, 1);
	func_138(57, 98, -2, -1);
	func_130(57);
	func_172(29, 155);
	func_123(98, 1);
	func_96(31, 0);
	func_96(42, 0);
	func_96(48, 0);
	func_154(17, 0, 0, 0);
	func_154(14, 0, 0, 0);
	func_114(116, 0, 1, 0);
	func_114(118, 0, 1, 0);
	func_114(117, 0, 1, 0);
	func_114(119, 0, 1, 0);
	func_114(125, 0, 1, 0);
	func_114(120, 0, 1, 0);
	func_104(22, 1);
	func_115(203);
	func_83();
	func_82(iVar0);
}

void func_181(int iParam0)//Position - 0xE0BA
{
	int iVar0;
	
	iVar0 = 0;
	func_85(iVar0);
	Global_71125.f_6825[Global_71125.f_12591 /*3*/] = 1883604486;
	Global_71125.f_6825[Global_71125.f_12591 /*3*/].f_1 = iVar0;
	Global_71125.f_6825[Global_71125.f_12591 /*3*/].f_2 = iParam0;
	func_84(iVar0);
}

void func_182(int iParam0, bool bParam1)//Position - 0xE10E
{
	int iVar0;
	int iVar1;
	
	iVar0 = 2;
	func_85(iVar0);
	Global_71125.f_6825[Global_71125.f_12591 /*3*/] = 1542529269;
	Global_71125.f_6825[Global_71125.f_12591 /*3*/].f_1 = iVar0;
	Global_71125.f_6825[Global_71125.f_12591 /*3*/].f_2 = Global_71125.f_12592[iVar0];
	iVar1 = 0;
	if (bParam1)
	{
		iVar1 = 1;
	}
	func_87(Global_71125.f_12592[iVar0], iParam0, iVar1);
	func_84(iVar0);
}

void func_183()//Position - 0xE189
{
	int iVar0;
	
	iVar0 = 7;
	func_127(iVar0);
	func_126();
	func_117(130, 1, 0);
	func_117(120, 1, 0);
	func_114(78, 0, 1, 0);
	func_97("exile_city_denial", 1424);
	func_90(1730771548);
	func_90(170512742);
	func_90(460547213);
	func_118(15, 1, -1982920067, -1);
	func_118(15, 1, 1319343143, -1);
	func_118(15, 1, -1118768768, -1);
	func_118(15, 1, -705125709, -1);
	func_118(15, 1, -782984853, -1);
	func_118(15, 1, -92968020, -1);
	func_118(15, 1, -406305198, -1);
	func_118(14, 1, -330856906, -1);
	func_118(14, 1, -690594988, -1);
	func_118(14, 1, -349863294, -1);
	func_118(14, 1, 424926942, -1);
	func_118(14, 2, 1410028576, -1);
	func_118(14, 4, 469005563, -1);
	func_118(24, 4, -1105442476, -1);
	func_120(135, 0);
	func_154(1, 0, 1, 0);
	func_154(1, 2, 1, 0);
	func_154(14, 1, 1, 0);
	func_154(19, 2, 1, 0);
	func_123(88, 1);
	func_122(14, -2, 88, -1, -1);
	func_124(0, 1, 0);
	func_124(2, 1, 0);
	func_147(0);
	func_147(2);
	func_114(78, 2, 1, 0);
	func_114(6, 1, 1, 0);
	func_108(joaat("gadget_parachute"), 1);
	func_120(70, 0);
	func_120(123, 0);
	func_106(7, 97, 6, -1023257027, 125000, 10000, -1, 0, -1, 0);
	func_129(2, 20, 0, 6000, 6000, -1478217267, -1, 0, -1, 16488);
	func_96(47, 0);
	func_96(1, 0);
	func_101(28);
	func_115(210);
	func_88(2, 17, 6, 200000, 100000, 1645231, -1, -1, 0, -1, 0);
	func_88(4, 31, 6, 240000, 60000, 520422857, -1, -1, 0, -1, 0);
	func_88(1, 31, 6, 480000, 60000, -1141042322, -1, -1, 0, -1, 0);
	func_98(4, 54, 6, 1400447159, 60000, 60000, 10, 0, 20, 512, 0);
	func_98(1, 2, 6, -1293573249, 30000, 10000, -1, 0, -1, 0, 0);
	func_106(1, 15, 6, 2022687760, 30000, 10000, -1, 0, -1, 0);
	func_104(17, 1);
	func_115(201);
	func_102(213, 0, 0);
	func_99(7, 0);
	func_123(89, 1);
	func_122(15, -2, 89, -1, -1);
	func_90(-1451910289);
	func_90(-1151582404);
	func_90(-1105442476);
	func_119(610159002);
	func_118(24, 4, -805704433, -1);
	func_104(23, 1);
	func_115(204);
	func_120(159, 0);
	func_108(joaat("weapon_heavysniper"), 1);
	func_96(44, 0);
	func_99(8, 0);
	func_123(90, 1);
	func_122(16, -2, 90, -1, -1);
	func_114(65, 1, 1, 0);
	func_114(66, 1, 1, 0);
	func_114(0, 0, 1, 0);
	func_113(0, 1);
	func_98(1, 14, 1, 981904836, 30000, 10000, 12, 0, -1, 0, 0);
	func_88(4, 10, 0, 6000, 5000, -769656371, -1, -1, 0, -1, 106);
	func_96(22, 0);
	func_83();
	func_82(iVar0);
}

void func_184()//Position - 0xE4F7
{
	int iVar0;
	
	iVar0 = 6;
	func_127(iVar0);
	func_126();
	func_98(4, 24, 1, -631719301, 240000, 10000, -1, 0, -1, 1064, 0);
	func_135(3000);
	func_93("AM_H_PREP3B", 7500, 2, 4, 0, 0);
	func_98(4, 24, 1, -549935988, 600000, 10000, -1, 0, -1, 0, 0);
	func_123(22, 1);
	func_122(73, -2, 22, -1, -1);
	func_119(-549935988);
	func_113(38, 1);
	func_142(1, 6, 1, 0);
	func_96(6, 0);
	func_83();
	func_82(iVar0);
}

void func_185()//Position - 0xE592
{
	int iVar0;
	
	iVar0 = 5;
	func_127(iVar0);
	func_126();
	func_97("heist_ctrl_docks", 2050);
	func_125(71, 0);
	func_117(20, 0, 0);
	func_117(21, 0, 0);
	func_123(15, 1);
	func_122(71, -2, 15, -1, -1);
	func_117(20, 1, 0);
	func_114(139, 1, 1, 0);
	func_114(140, 1, 1, 0);
	func_114(145, 1, 1, 0);
	func_114(146, 0, 1, 0);
	func_123(16, 0);
	func_143(1, 0, 13, -2, -1, 1, 0);
	func_135(500);
	func_143(1, 2, 2, -2, -1, 1, 1);
	func_117(20, 0, 1);
	func_117(21, 1, 0);
	func_135(501);
	func_141(1, 0, 1, 22);
	func_132(22, -1, -2, -2, 0);
	func_117(21, 0, 1);
	func_117(22, 0, 0);
	func_121(0);
	func_114(141, 1, 1, 0);
	func_114(139, 0, 1, 0);
	func_114(140, 0, 1, 0);
	func_114(143, 1, 1, 0);
	func_102(223, 0, 0);
	func_97("pickupVehicles", 128);
	func_138(30, 20, -2, 20);
	func_139(2, 0, 0, 6000, 6000, -1108940541, 1372476011, -1, 16, -1, 0, 32);
	func_163(19, 0);
	func_123(20, 0);
	func_139(2, 0, 0, 6000, 6000, -951496, 1372476011, -1, 16, -1, 0, 32);
	func_123(19, 1);
	func_118(12, 4, 225734768, -1);
	func_164(8, 3, 17, 21);
	func_123(21, 1);
	func_93("AM_H_FLYM", 10000, 2, 7, 0, 0);
	func_98(1, 2, 1, 1759805585, 40000, 10000, -1, 0, -1, 1024, 0);
	func_101(6);
	func_123(17, 1);
	func_98(4, 24, 1, 411396589, 20000, 10000, -1, 0, -1, 1064, 0);
	func_135(3000);
	func_93("AM_H_PREP3A", 7500, 2, 4, 0, 0);
	func_123(18, 1);
	func_122(72, -2, 18, -1, -1);
	func_120(119, 0);
	func_142(1, 5, 1, 0);
	func_142(1, 7, 1, 0);
	func_114(136, 1, 1, 0);
	func_164(8, 3, 23, -2);
	func_99(6, 0);
	func_123(23, 1);
	func_162(6);
	func_99(5, 0);
	func_96(21, 0);
	func_98(3, 2, 1, 1269300253, 40000, 10000, 24, 54, -1, 1032, 0);
	func_88(4, 24, 2, 60000, 10000, -749738207, -1, 24, 54, -1, 72);
	func_132(23, -2, -1, -1, 0);
	func_123(25, 1);
	func_164(8, 3, 26, 27);
	func_123(26, 1);
	func_122(74, -2, 26, -1, -1);
	func_114(12, 1, 1, 0);
	func_114(13, 1, 1, 0);
	func_108(joaat("weapon_assaultshotgun"), 1);
	func_163(28, 0);
	func_123(27, 1);
	func_122(75, -2, 27, -1, -1);
	func_113(39, 1);
	func_123(28, 1);
	func_113(38, 0);
	func_114(2, 0, 1, 0);
	func_119(1759805585);
	func_90(225734768);
	func_117(1, 1, 0);
	func_96(15, 0);
	func_88(4, 39, 1, 60000, 60000, -1151582404, -1, -1, 0, -1, 1);
	func_83();
	func_82(iVar0);
}

void func_186()//Position - 0xE8E8
{
	func_127(4);
	func_126();
	func_88(4, 20, 0, 6000, 30000, -1155501333, -1, -1, 0, -1, 105);
	func_118(20, 4, -1758542647, -1);
	func_96(54, 0);
	func_123(86, 1);
	func_107(67, 0, 0);
	func_107(68, 0, 0);
	func_107(69, 0, 0);
	func_122(12, -2, 86, -1, -1);
	func_108(joaat("weapon_grenadelauncher"), 1);
	func_95(21, 2, 1);
	func_104(52, 1);
	func_115(216);
	func_99(4, 0);
	func_123(87, 1);
	func_122(13, -2, 87, -1, -1);
	func_114(50, 1, 1, 0);
	func_114(51, 1, 1, 0);
	func_114(52, 1, 1, 0);
	func_114(53, 1, 1, 0);
	func_114(54, 2, 1, 0);
	func_114(55, 2, 1, 0);
	func_120(141, 0);
	func_108(joaat("weapon_sawnoffshotgun"), 1);
	func_108(joaat("weapon_petrolcan"), 1);
	func_90(-1758542647);
	func_96(55, 0);
	func_120(5, 0);
	func_115(169);
	func_83();
	func_82(4);
}

void func_187()//Position - 0xEA01
{
	int iVar0;
	
	iVar0 = 3;
	func_127(iVar0);
	func_126();
	func_114(77, 1, 1, 0);
	func_107(79, 0, 0);
	func_107(80, 0, 0);
	func_188(0, 1, 10);
	func_188(1, 2, 10);
	func_188(2, 0, 10);
	func_123(82, 1);
	func_122(8, -2, 82, -2, -1);
	func_114(8, 1, 1, 0);
	func_114(9, 1, 1, 0);
	func_114(127, 1, 1, 0);
	func_114(128, 1, 1, 0);
	func_114(126, 1, 1, 0);
	func_108(joaat("weapon_nightstick"), 1);
	func_106(7, 97, 6, -1548445814, 120000, 10000, -1, 0, -1, 0);
	func_106(7, 96, 6, 2021846885, 140000, 10000, -1, 0, -1, 0);
	func_120(162, 1);
	func_95(29, 1, 1);
	func_95(45, 1, 1);
	func_95(29, 2, 0);
	func_90(2097475336);
	func_119(341684477);
	func_118(37, 2, -108894207, -1);
	func_118(29, 2, -2139605007, -1);
	func_96(0, 0);
	func_123(83, 1);
	func_122(9, -2, 83, -1, -1);
	func_120(144, 0);
	func_114(10, 1, 1, 0);
	func_96(36, 0);
	func_99(3, 0);
	func_123(84, 1);
	func_122(10, -2, 84, -1, -1);
	func_114(7, 1, 1, 0);
	func_114(162, 1, 1, 0);
	func_96(37, 0);
	func_99(2, 0);
	func_120(46, 0);
	func_188(1, 19, 11);
	func_188(1, 2, 11);
	func_123(85, 1);
	func_122(11, -2, 85, -1, -1);
	func_114(8, 0, 1, 0);
	func_114(9, 0, 1, 0);
	func_114(10, 0, 1, 0);
	func_114(7, 0, 1, 0);
	func_129(1, 12, 0, 6000, 6000, -1134988206, -1, 0, -1, 40);
	func_120(47, 0);
	func_96(40, 0);
	func_114(77, 2, 1, 0);
	func_90(-2139605007);
	func_118(29, 2, -1949184344, -1);
	func_83();
	func_82(iVar0);
}

void func_188(int iParam0, int iParam1, int iParam2)//Position - 0xEC15
{
	int iVar0;
	
	iVar0 = 1;
	if (((iParam1 != 0 && iParam1 != 1) && iParam1 != 2) && iParam1 != 19)
	{
		return;
	}
	func_85(iVar0);
	Global_71125.f_6825[Global_71125.f_12591 /*3*/] = -1575504933;
	Global_71125.f_6825[Global_71125.f_12591 /*3*/].f_1 = iVar0;
	Global_71125.f_6825[Global_71125.f_12591 /*3*/].f_2 = Global_71125.f_12592[iVar0];
	func_92(Global_71125.f_12592[iVar0], iParam1, iParam0, iParam2, 0);
	func_84(iVar0);
}

void func_189()//Position - 0xECAE
{
	int iVar0;
	
	iVar0 = 2;
	func_127(iVar0);
	func_126();
	func_115(165);
	func_98(2, 12, 1, 1635608802, 50000, 30000, 71, 52, -1, 1096, 0);
	func_132(48, -2, -1, -2, 0);
	func_123(77, 1);
	func_122(3, -2, 77, -1, -1);
	func_119(1323596299);
	func_119(-1205448796);
	func_119(1635608802);
	func_129(1, 12, 0, 6000, 6000, 343235192, 2, 45, -1, 96);
	func_97("SH_Intro_F_Hills", 1424);
	func_123(240, 1);
	func_120(193, 0);
	func_106(2, 44, 6, -1821325152, 800000, 120000, -1, 0, -1, 0);
	func_96(14, 0);
	func_123(78, 1);
	func_122(4, -2, 78, -1, -1);
	func_120(194, 0);
	func_99(0, 0);
	func_123(79, 1);
	func_122(5, -2, 79, -1, -1);
	func_120(195, 0);
	func_123(80, 1);
	func_122(6, -2, 80, -1, -1);
	func_120(196, 0);
	func_99(1, 0);
	func_123(81, 1);
	func_122(7, -2, 81, -1, -1);
	func_120(197, 0);
	func_117(49, 1, 0);
	func_119(-799417230);
	func_119(-2135245515);
	func_115(241);
	func_83();
	func_82(iVar0);
}

void func_190()//Position - 0xEE11
{
	int iVar0;
	
	iVar0 = 1;
	func_127(iVar0);
	func_126();
	func_193(0);
	func_123(71, 0);
	func_133(0, -2, 71, -1);
	func_116(5, 1, 1);
	func_116(7, 0, 0);
	func_116(8, 0, 0);
	func_116(9, 0, 0);
	func_192(1, 1, 31, 250);
	func_117(66, 0, 0);
	func_93("AM_H_REPEAT", 10000, 2, 7, 0, 0);
	func_95(131, 0, 0);
	func_95(131, 1, 0);
	func_118(19, 2, 1867406480, -1);
	func_120(58, 0);
	func_120(71, 0);
	func_113(2, 1);
	func_113(59, 1);
	func_112(1, 1);
	func_191(6, 0, 1);
	func_97("ambientBlimp", 1424);
	func_97("controller_taxi", 1424);
	func_115(194);
	func_120(17, 0);
	func_120(92, 0);
	func_120(93, 0);
	func_120(1, 0);
	func_120(94, 0);
	func_120(31, 0);
	func_120(32, 0);
	func_120(34, 0);
	func_120(15, 0);
	func_107(81, 0, 0);
	func_107(82, 0, 0);
	func_182(0, 1);
	func_120(152, 0);
	func_132(61, -2, 72, 72, 0);
	func_88(2, 18, 1, 4000, 15000, 742578279, -1, 74, 0, -1, 524392);
	func_163(73, 0);
	func_123(72, 1);
	func_88(2, 18, 1, 4000, 15000, 1611093726, -1, 74, 0, -1, 524392);
	func_123(73, 1);
	func_115(182);
	func_115(230);
	func_115(188);
	func_115(187);
	func_115(181);
	func_115(228);
	func_93("AM_H_BLIP", 10000, 2, 7, 0, 0);
	func_123(74, 1);
	func_122(1, -2, 74, -1, -1);
	func_114(79, 1, 1, 0);
	func_158(1);
	func_149(0);
	func_108(joaat("weapon_pistol"), 1);
	func_108(joaat("weapon_microsmg"), 1);
	func_108(joaat("weapon_knife"), 1);
	func_108(joaat("weapon_pumpshotgun"), 1);
	func_114(179, 1, 1, 0);
	func_97("letterScraps", 1424);
	func_115(199);
	func_132(62, 75, -2, -2, 0);
	func_98(2, 19, 1, -1982006572, 35000, 10000, -1, 41, -1, 0, 0);
	func_123(75, 1);
	func_95(17, 0, 0);
	func_95(14, 0, 0);
	func_95(15, 0, 0);
	func_148(19, 1);
	func_148(14, 0);
	func_148(17, 0);
	func_101(19);
	func_123(76, 1);
	func_122(2, -2, 76, -1, -1);
	func_116(0, 1, 1);
	func_113(0, 1);
	func_192(1, 1, 95, 300);
	func_113(36, 1);
	func_114(179, 1, 1, 1);
	func_114(174, 1, 1, 0);
	func_114(178, 1, 1, 0);
	func_114(175, 1, 1, 0);
	func_114(176, 1, 1, 0);
	func_114(177, 1, 1, 0);
	func_93("AM_H_SWTCH0", 15000, 2, 7, 0, 0);
	func_97("SH_Intro_M_Home", 1424);
	func_88(2, 18, 1, 200000, 60000, -1753640864, 410510653, 72, 42, -1, 128);
	func_90(1867406480);
	func_118(30, 1, 1438498239, -1);
	func_98(1, 17, 1, -1900821691, 35000, 10000, -1, 22, -1, 262144, 0);
	func_115(168);
	func_115(171);
	func_173(1, 8);
	func_117(72, 1, 0);
	func_101(8);
	func_124(0, 1, 0);
	func_147(0);
	func_117(115, 1, 0);
	func_104(2, 1);
	func_115(196);
	func_104(21, 1);
	func_115(202);
	func_115(226);
	func_104(9, 1);
	func_115(200);
	func_83();
	func_82(iVar0);
}

void func_191(int iParam0, int iParam1, bool bParam2)//Position - 0xF1CD
{
	int iVar0;
	int iVar1;
	
	iVar0 = 1;
	func_85(iVar0);
	Global_71125.f_6825[Global_71125.f_12591 /*3*/] = -661286798;
	Global_71125.f_6825[Global_71125.f_12591 /*3*/].f_1 = iVar0;
	Global_71125.f_6825[Global_71125.f_12591 /*3*/].f_2 = Global_71125.f_12592[iVar0];
	iVar1 = 0;
	if (bParam2)
	{
		iVar1 = 1;
	}
	func_92(Global_71125.f_12592[iVar0], iParam0, iParam1, iVar1, -1);
	func_84(iVar0);
}

void func_192(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xF24B
{
	int iVar0;
	
	if (iParam0 > 2)
	{
	}
	if (iParam3 <= 0)
	{
	}
	iVar0 = 1;
	func_85(iVar0);
	Global_71125.f_6825[Global_71125.f_12591 /*3*/] = -1283556585;
	Global_71125.f_6825[Global_71125.f_12591 /*3*/].f_1 = iVar0;
	Global_71125.f_6825[Global_71125.f_12591 /*3*/].f_2 = Global_71125.f_12592[iVar0];
	func_92(Global_71125.f_12592[iVar0], iParam0, iParam1, iParam2, iParam3);
	func_84(iVar0);
}

void func_193(int iParam0)//Position - 0xF2CB
{
	int iVar0;
	
	iVar0 = 0;
	func_85(iVar0);
	Global_71125.f_6825[Global_71125.f_12591 /*3*/] = -159886710;
	Global_71125.f_6825[Global_71125.f_12591 /*3*/].f_1 = iVar0;
	Global_71125.f_6825[Global_71125.f_12591 /*3*/].f_2 = iParam0;
	func_84(iVar0);
}

void func_194()//Position - 0xF31F
{
	int iVar0;
	
	iVar0 = 0;
	func_127(iVar0);
	func_126();
	func_114(70, 1, 1, 0);
	func_114(71, 1, 1, 0);
	func_114(73, 1, 1, 0);
	func_114(72, 0, 1, 0);
	func_114(74, 0, 1, 0);
	func_98(1, 12, 1, 1834414893, 25000, 10000, 22, 0, -1, 40, 0);
	func_97("heist_ctrl_agency", 2050);
	func_123(0, 1);
	func_122(66, -2, 0, -1, -1);
	func_188(0, 1, 67);
	func_142(3, 0, 1, 0);
	func_142(3, 1, 1, 0);
	func_96(13, 0);
	func_97("buildingSiteAmbience", 128);
	func_98(1, 1, 1, 2114893093, 240000, 10000, -1, 148, -1, 1024, 0);
	func_132(10, -2, -1, -2, 0);
	func_117(11, 0, 0);
	func_117(70, 1, 0);
	func_120(97, 0);
	func_114(87, 1, 1, 0);
	func_123(2, 0);
	func_88(1, 1, 1, 300000, 60000, -1323332922, -1, -1, 86, -1, 72);
	func_125(67, 0);
	func_117(6, 0, 0);
	func_117(7, 0, 0);
	func_123(3, 0);
	func_195(67, -2, 2, -2);
	func_114(87, 0, 1, 0);
	func_160("AM_H_ARM2", 0);
	func_119(2114893093);
	func_90(-1323332922);
	func_142(3, 2, 1, 0);
	func_117(70, 0, 0);
	func_117(6, 1, 0);
	func_114(166, 1, 1, 0);
	func_123(4, 0);
	func_143(3, 0, 13, -2, -1, 1, 0);
	func_135(500);
	func_123(5, 0);
	func_143(3, 2, 4, -2, -1, 1, 0);
	func_117(6, 0, 1);
	func_117(7, 1, 0);
	func_123(6, 0);
	func_143(3, 1, 5, -2, 5, 1, 1);
	func_135(501);
	func_141(3, 0, 1, 8);
	func_132(8, -1, -2, -2, 0);
	func_117(7, 0, 1);
	func_117(8, 0, 0);
	func_102(225, 0, 0);
	func_120(116, 0);
	func_96(52, 0);
	func_121(0);
	func_164(10, 6, -2, 9);
	func_97("agency_prep2Amb", 2050);
	func_98(3, 12, 1, 230961098, 10000, 10000, -1, 0, -1, 1064, 0);
	func_142(3, 6, 1, 0);
	func_135(3000);
	func_93("AM_H_PREP6", 10000, 2, 3, 0, 0);
	func_98(3, 12, 1, 639116137, 600000, 30000, -1, 0, 11, 0, 0);
	func_123(7, 1);
	func_122(68, -2, 7, -1, -1);
	func_114(169, 1, 0, 0);
	func_113(43, 1);
	func_107(62, 1, 0);
	func_107(63, 1, 0);
	func_142(3, 7, 1, 0);
	func_139(0, 12, 0, 6000, 6000, -651018670, -518176220, -1889998615, 10, -1, 53, 0);
	func_139(1, 12, 0, 6000, 6000, -236506853, 777679877, -1547927413, 10, -1, 53, 0);
	func_132(14, -2, -1, -1, 0);
	func_123(9, 1);
	func_164(10, 6, -2, 11);
	func_102(219, 0, 0);
	func_132(12, -2, -1, -2, 0);
	func_107(62, 1, 1);
	func_107(63, 1, 1);
	func_114(70, 1, 0, 1);
	func_114(71, 2, 0, 0);
	func_114(73, 1, 0, 1);
	func_114(72, 0, 0, 1);
	func_114(74, 0, 0, 1);
	func_107(62, 0, 0);
	func_107(63, 0, 0);
	func_123(10, 1);
	func_122(69, -2, 10, -1, -1);
	func_129(0, 30, 0, 6000, 6000, 1770589463, -1, 0, -1, 104);
	func_119(639116137);
	func_163(13, 0);
	func_123(11, 1);
	func_107(62, 1, 2);
	func_107(63, 1, 2);
	func_98(3, 12, 1, 1943637475, 30000, 60000, 21, 43, -1, 72, 0);
	func_132(9, -2, -1, -2, 0);
	func_142(3, 6, 1, 1);
	func_114(70, 1, 0, 2);
	func_114(71, 2, 0, 1);
	func_114(73, 1, 0, 2);
	func_114(72, 0, 0, 2);
	func_114(74, 0, 0, 2);
	func_107(62, 0, 1);
	func_107(63, 0, 1);
	func_123(12, 1);
	func_122(70, -2, 12, -1, -1);
	func_129(0, 30, 0, 6000, 6000, -1358914512, -1, 0, -1, 104);
	func_123(13, 1);
	func_120(77, 300000);
	func_107(62, 1, 3);
	func_107(63, 1, 3);
	func_114(166, 0, 1, 0);
	func_114(169, 0, 1, 0);
	func_114(165, 0, 1, 0);
	func_114(70, 0, 1, 0);
	func_114(71, 0, 1, 0);
	func_114(73, 0, 1, 0);
	func_114(72, 2, 1, 0);
	func_114(74, 1, 1, 0);
	func_96(41, 0);
	func_117(2, 1, 0);
	func_113(43, 0);
	func_114(28, 1, 1, 0);
	func_114(26, 0, 1, 0);
	func_114(36, 0, 1, 0);
	func_114(27, 0, 1, 0);
	func_114(34, 0, 1, 0);
	func_114(29, 0, 1, 0);
	func_114(30, 0, 1, 0);
	func_114(31, 0, 1, 0);
	func_100(7, 14, -2, 14);
	func_90(406771743);
	func_88(1, 46, 6, 300000, 120000, -837794877, -1, -1, 72, -1, 1);
	func_123(14, 1);
	func_83();
	func_82(iVar0);
}

void func_195(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xF88C
{
	int iVar0;
	
	if (iParam3 == -1)
	{
		iParam3 = iParam1;
	}
	iVar0 = 1;
	func_85(iVar0);
	Global_71125.f_6825[Global_71125.f_12591 /*3*/] = 889972124;
	Global_71125.f_6825[Global_71125.f_12591 /*3*/].f_1 = iVar0;
	Global_71125.f_6825[Global_71125.f_12591 /*3*/].f_2 = Global_71125.f_12592[iVar0];
	Global_83766[iParam0 /*34*/].f_7 = Global_71125.f_12592[iVar0];
	func_92(Global_71125.f_12592[iVar0], iParam0, iParam1, iParam2, iParam3);
	func_84(iVar0);
}

void func_196()//Position - 0xF91F
{
	func_213();
	func_212();
	func_211();
	func_210();
	func_209();
	func_208();
	func_207();
	func_206();
	func_205();
	func_197();
}

void func_197()//Position - 0xF94F
{
	func_204();
	func_203();
	func_201();
	func_198();
}

void func_198()//Position - 0xF967
{
	int iVar0;
	
	Global_35861 = 15;
	Global_89908 = 0;
	Global_89898 = 0;
	Global_89910 = 0;
	Global_89899 = -1;
	Global_89900 = -1;
	Global_89901 = -1;
	Global_89902 = -1;
	Global_89904 = 0;
	Global_89905 = 0;
	Global_89906 = 0;
	Global_89836 = 0;
	Global_89837 = 0;
	Global_89839 = -15;
	Global_17161 = 0;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_199(iVar0);
		iVar0++;
	}
}

void func_199(int iParam0)//Position - 0xF9D4
{
	if (unk_0xC80D31E4B587871C(Global_89911[iParam0 /*17*/].f_10.f_1, 6))
	{
		if (Global_88824 != 4 && Global_88824 != 5)
		{
			func_200(Global_89911[iParam0 /*17*/].f_5);
		}
	}
	if (unk_0xC80D31E4B587871C(Global_89911[iParam0 /*17*/].f_10.f_1, 7))
	{
		if (Global_88824 != 4 && Global_88824 != 5)
		{
			func_200(Global_89911[iParam0 /*17*/].f_5);
		}
	}
	Global_89911[iParam0 /*17*/].f_1 = 0;
	Global_89911[iParam0 /*17*/].f_3 = -1;
	Global_89911[iParam0 /*17*/].f_4 = 6;
	Global_89911[iParam0 /*17*/].f_5 = -1;
	Global_89911[iParam0 /*17*/].f_6 = -1;
	Global_89911[iParam0 /*17*/].f_7 = -1;
	if (Global_89911[iParam0 /*17*/])
	{
		if (Global_89911[iParam0 /*17*/].f_9 != 263)
		{
			if (Global_89911[iParam0 /*17*/].f_9 < 0 || Global_89911[iParam0 /*17*/].f_9 >= 263)
			{
			}
			func_10(Global_89911[iParam0 /*17*/].f_9, 0, 0);
		}
		Global_89911[iParam0 /*17*/].f_9 = 263;
	}
	Global_89911[iParam0 /*17*/] = 0;
	Global_89911[iParam0 /*17*/].f_8 = -1;
	unk_0x0EE72DB1CD8A3B86(&(Global_89911[iParam0 /*17*/].f_10.f_1), 0);
	unk_0x0EE72DB1CD8A3B86(&(Global_89911[iParam0 /*17*/].f_10.f_1), 1);
	unk_0x0EE72DB1CD8A3B86(&(Global_89911[iParam0 /*17*/].f_10.f_1), 2);
	unk_0x0EE72DB1CD8A3B86(&(Global_89911[iParam0 /*17*/].f_10.f_1), 3);
	unk_0x0EE72DB1CD8A3B86(&(Global_89911[iParam0 /*17*/].f_10.f_1), 6);
	unk_0x0EE72DB1CD8A3B86(&(Global_89911[iParam0 /*17*/].f_10.f_1), 7);
	unk_0x0EE72DB1CD8A3B86(&(Global_89911[iParam0 /*17*/].f_10.f_1), 8);
	unk_0x0EE72DB1CD8A3B86(&(Global_89911[iParam0 /*17*/].f_10.f_1), 9);
	unk_0x0EE72DB1CD8A3B86(&(Global_89911[iParam0 /*17*/].f_10.f_1), 10);
	unk_0x0EE72DB1CD8A3B86(&(Global_89911[iParam0 /*17*/].f_10.f_1), 11);
	unk_0x0EE72DB1CD8A3B86(&(Global_89911[iParam0 /*17*/].f_10.f_1), 12);
}

void func_200(int iParam0)//Position - 0xFBBC
{
	if (iParam0 >= 94)
	{
		return;
	}
	if (Global_88825 != -1)
	{
		if (Global_88825 != iParam0)
		{
			return;
		}
		Global_88825 = -1;
		Global_88824 = 0;
		Global_88826 = 0;
	}
}

void func_201()//Position - 0xFBF1
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		func_202(iVar0);
		iVar0++;
	}
}

void func_202(int iParam0)//Position - 0xFC14
{
	Global_83730[iParam0 /*5*/] = -1;
	Global_83730[iParam0 /*5*/].f_1 = 0;
	Global_83730[iParam0 /*5*/].f_2 = -1;
	Global_83730[iParam0 /*5*/].f_3 = -1;
	Global_83730[iParam0 /*5*/].f_4 = 0;
}

void func_203()//Position - 0xFC51
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_71125.f_6684[iVar0 /*14*/] = 0;
		Global_71125.f_6684[iVar0 /*14*/].f_1 = 0;
		Global_71125.f_6684[iVar0 /*14*/].f_2 = 0;
		Global_71125.f_6684[iVar0 /*14*/].f_3 = 0;
		Global_71125.f_6684[iVar0 /*14*/].f_4 = 0;
		Global_71125.f_6684[iVar0 /*14*/].f_5 = 0;
		Global_71125.f_6684[iVar0 /*14*/].f_6 = 0;
		Global_71125.f_6684[iVar0 /*14*/].f_7 = 0;
		Global_71125.f_6684[iVar0 /*14*/].f_8 = 0;
		Global_71125.f_6684[iVar0 /*14*/].f_9 = -1;
		Global_71125.f_6684[iVar0 /*14*/].f_10 = -1;
		Global_71125.f_6684[iVar0 /*14*/].f_11 = -1;
		Global_71125.f_6684[iVar0 /*14*/].f_12 = 0;
		Global_71125.f_6684[iVar0 /*14*/].f_13 = -1;
		iVar0++;
	}
}

void func_204()//Position - 0xFD31
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 169)
	{
		Global_71125.f_4824[iVar0 /*11*/] = 0;
		Global_71125.f_4824[iVar0 /*11*/].f_1 = 0;
		Global_71125.f_4824[iVar0 /*11*/].f_2 = 0;
		Global_71125.f_4824[iVar0 /*11*/].f_3 = 0;
		Global_71125.f_4824[iVar0 /*11*/].f_4 = 0;
		Global_71125.f_4824[iVar0 /*11*/].f_5 = 0;
		Global_71125.f_4824[iVar0 /*11*/].f_6 = 0;
		Global_71125.f_4824[iVar0 /*11*/].f_7 = 0;
		Global_71125.f_4824[iVar0 /*11*/].f_8 = -1;
		Global_71125.f_4824[iVar0 /*11*/].f_9 = 0;
		Global_71125.f_4824[iVar0 /*11*/].f_10 = -1;
		iVar0++;
	}
}

void func_205()//Position - 0xFDE7
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		Global_71125.f_12526[iVar0 /*2*/] = -1;
		Global_71125.f_12526[iVar0 /*2*/].f_1 = -1;
		iVar0++;
	}
}

void func_206()//Position - 0xFE1F
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 1900)
	{
		Global_71125.f_6825[iVar0 /*3*/] = -1;
		Global_71125.f_6825[iVar0 /*3*/].f_1 = 12;
		Global_71125.f_6825[iVar0 /*3*/].f_2 = -1;
		iVar0++;
	}
	Global_71125.f_12591 = 0;
}

void func_207()//Position - 0xFE6F
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		Global_71125.f_4797[iVar0 /*13*/] = 0;
		StringCopy(&(Global_71125.f_4797[iVar0 /*13*/].f_1), "", 32);
		Global_71125.f_4797[iVar0 /*13*/].f_9 = 0;
		Global_71125.f_4797[iVar0 /*13*/].f_10 = -1;
		Global_71125.f_4797[iVar0 /*13*/].f_11 = -1;
		Global_71125.f_4797[iVar0 /*13*/].f_12 = 0;
		iVar0++;
	}
}

void func_208()//Position - 0xFEE3
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		Global_71125.f_4811[iVar0 /*12*/] = -1;
		Global_71125.f_4811[iVar0 /*12*/].f_1 = -1;
		Global_71125.f_4811[iVar0 /*12*/].f_2 = -1;
		Global_71125.f_4811[iVar0 /*12*/].f_3 = -1;
		Global_71125.f_4811[iVar0 /*12*/].f_4 = -1;
		Global_71125.f_4811[iVar0 /*12*/].f_6 = -1;
		Global_71125.f_4811[iVar0 /*12*/].f_7 = -1;
		Global_71125.f_4811[iVar0 /*12*/].f_10 = 0;
		Global_71125.f_4811[iVar0 /*12*/].f_11 = 0;
		iVar0++;
	}
}

void func_209()//Position - 0xFF7C
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 53)
	{
		StringCopy(&(Global_71125.f_4160[iVar0 /*12*/]), "NOT_SETUP", 32);
		Global_71125.f_4160[iVar0 /*12*/].f_8 = 0;
		Global_71125.f_4160[iVar0 /*12*/].f_9 = 0;
		Global_71125.f_4160[iVar0 /*12*/].f_10 = 0;
		Global_71125.f_4160[iVar0 /*12*/].f_11 = 0;
		iVar0++;
	}
}

void func_210()//Position - 0xFFE3
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		StringCopy(&(Global_71125.f_4151[iVar0 /*8*/]), "NOT_SETUP", 32);
		iVar0++;
	}
}

void func_211()//Position - 0x10013
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 280)
	{
		Global_71125.f_3590[iVar0 /*2*/] = 0;
		Global_71125.f_3590[iVar0 /*2*/].f_1 = 1;
		iVar0++;
	}
}

void func_212()//Position - 0x1004C
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 870)
	{
		Global_71125.f_109[iVar0 /*4*/] = 0;
		Global_71125.f_109[iVar0 /*4*/].f_1 = 1;
		Global_71125.f_109[iVar0 /*4*/].f_2 = 2;
		Global_71125.f_109[iVar0 /*4*/].f_3 = 3;
		iVar0++;
	}
}

void func_213()//Position - 0x1009D
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 11)
	{
		Global_71125.f_12592[iVar0] = 0;
		iVar0++;
	}
}

void func_214()//Position - 0x100C7
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3[6];
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (Global_70857)
	{
		if ((func_5(53) && !unk_0xC80D31E4B587871C(Global_104555.f_9986.f_25, 1)) && unk_0x8F38E94BBF3404CD(joaat("flowintrotitle")) == 0)
		{
			unk_0x872F1C1F8587CCC7(&(Global_104555.f_9986.f_25), 1);
		}
		bVar0 = false;
		if (!bVar0)
		{
			if (!unk_0xC80D31E4B587871C(Global_104555.f_9055.f_2[27 /*3*/], 1) || !func_5(53))
			{
				unk_0x872F1C1F8587CCC7(&(Global_104555.f_9055.f_2[27 /*3*/]), 1);
				if (!unk_0x3E9CABD07B829173())
				{
					if (!unk_0x2D0EF1D268F33F25())
					{
						unk_0xAE83ED4C9081AE6F(800);
					}
				}
				bVar0 = true;
			}
		}
		iVar1 = 0;
		while (iVar1 < 32)
		{
			if (!bVar0)
			{
				iVar2 = Global_104555.f_9055.f_2[iVar1 /*3*/].f_1;
				if (iVar2 != -1)
				{
					if (Global_71125.f_6825[iVar2 /*3*/] == -868169264)
					{
						if (!unk_0x3E9CABD07B829173())
						{
							if (!unk_0x2D0EF1D268F33F25())
							{
								unk_0xAE83ED4C9081AE6F(800);
							}
						}
						bVar0 = true;
					}
				}
			}
			iVar1++;
		}
	}
	if (!Global_70857)
	{
		unk_0xD941F8E30D7231AD("SMOG", 25f);
		unk_0x087D097B0C8C07B9();
		unk_0x7E674434FF907A39();
	}
	if (!func_529())
	{
		iVar3[0] = -1750463879;
		iVar3[1] = 916995460;
		iVar3[2] = 821931868;
		iVar3[3] = 282916021;
		iVar3[4] = -1148613331;
		iVar3[5] = 1420204096;
		iVar4 = unk_0x63A6486593EC7EC3(0, 6);
		iVar5 = unk_0x63A6486593EC7EC3(0, 6);
		unk_0x0FCF81F462EB12B5(iVar3[iVar4], iVar3[iVar5], 0f);
	}
	if (unk_0x26A2D532795E03F2("DeathFailOut"))
	{
		unk_0x704F5ADD5B29DB63("DeathFailOut");
	}
	unk_0x2F22BABDCF836C82(0);
	unk_0x41390D2B41D5502D(1f);
	if (unk_0x2E68557F22711FDA())
	{
		if (unk_0x496616BFA56C89EB(903) == 0)
		{
			if (func_5(53))
			{
				unk_0x1B8004EE020FAEA5();
			}
		}
	}
	unk_0xF8F6DA428993DAF2(0);
	unk_0xC1B075F8A65D6642(0);
	func_201();
	func_528();
	if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
	{
		unk_0xCB6210AD9EF51115(unk_0x9EB17624F44A8DA4(), func_527(67));
	}
	if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
	{
		unk_0x62FA5DC648CD2526(unk_0x9EB17624F44A8DA4(), func_527(68));
	}
	iVar6 = func_525();
	if (func_66(iVar6))
	{
		if (func_524())
		{
			func_509(unk_0xFC1458A37D98B502(), 1, 0);
			func_508(unk_0xFC1458A37D98B502());
			func_505(unk_0xFC1458A37D98B502());
			func_215(unk_0xFC1458A37D98B502());
		}
	}
	Global_104546 = (unk_0x53C562FD2B9E3AB0() - 90000);
	unk_0x94E33752DE33800B(joaat("prop_gate_prison_01"), 1845f, 2605f, 45f, 1, 0f, 0f, 0f);
	unk_0x94E33752DE33800B(joaat("prop_gate_prison_01"), 1819,274f, 2608,537f, 44,6195f, 1, 0f, 50f, 0f);
	Global_71125.f_7 = 1;
}

void func_215(int iParam0)//Position - 0x10361
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar0 = func_504(iParam0);
	if (func_66(iVar0))
	{
		if (!Global_92819[iVar0])
		{
			if (Global_104555.f_2353.f_539.f_2371[iVar0] != 0)
			{
				if (func_503(iParam0) != Global_104555.f_2353.f_539.f_2371[iVar0])
				{
					func_502(iVar0);
					Global_104555.f_2353.f_539.f_2371[iVar0] = func_503(iParam0);
				}
			}
		}
		func_318(iParam0, &(Global_104555.f_2353.f_539[iVar0 /*65*/]), 0, 0, 1, 0);
		if (!Global_92819[iVar0])
		{
			bVar2 = false;
			if (iVar0 == 0)
			{
				if (!func_317(49))
				{
					iVar1 = func_303(iParam0, 12, -1);
					if (iVar1 == 16)
					{
						bVar2 = true;
					}
					func_216(func_302(0), 12, 16, 0, 0, 0, 0);
				}
				if (!func_317(44))
				{
					iVar1 = func_303(iParam0, 3, -1);
					if (((((iVar1 == 70 || iVar1 == 71) || iVar1 == 72) || iVar1 == 73) || iVar1 == 74) || iVar1 == 75)
					{
						bVar2 = true;
					}
					iVar1 = func_303(iParam0, 4, -1);
					if ((((iVar1 == 41 || iVar1 == 42) || iVar1 == 43) || iVar1 == 44) || iVar1 == 45)
					{
						bVar2 = true;
					}
					func_216(func_302(0), 3, 70, 1, 0, 0, 0);
					func_216(func_302(0), 3, 71, 1, 0, 0, 0);
					func_216(func_302(0), 3, 72, 1, 0, 0, 0);
					func_216(func_302(0), 3, 73, 1, 0, 0, 0);
					func_216(func_302(0), 3, 74, 1, 0, 0, 0);
					func_216(func_302(0), 3, 75, 1, 0, 0, 0);
					func_216(func_302(0), 4, 41, 1, 0, 0, 0);
					func_216(func_302(0), 4, 42, 1, 0, 0, 0);
					func_216(func_302(0), 4, 43, 1, 0, 0, 0);
					func_216(func_302(0), 4, 44, 1, 0, 0, 0);
					func_216(func_302(0), 4, 45, 1, 0, 0, 0);
				}
			}
			else if (iVar0 == 2)
			{
				iVar1 = func_303(iParam0, 4, -1);
				if (iVar1 == 93)
				{
					bVar2 = true;
				}
			}
			if (bVar2)
			{
				func_502(iVar0);
				func_318(iParam0, &(Global_104555.f_2353.f_539[iVar0 /*65*/]), 0, 0, 1, 0);
			}
		}
		Global_92819[iVar0] = 1;
	}
}

void func_216(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)//Position - 0x105BE
{
	func_301(iParam0, iParam1, iParam2, bParam3);
	func_290(iParam0, iParam1, iParam2, bParam4, 1);
	if (bParam5)
	{
		func_289(iParam0, iParam1, iParam2, 0);
	}
	if (iParam6 == 1)
	{
		func_217(iParam0, iParam1, iParam2, 0);
	}
}

int func_217(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x10603
{
	Global_70671[1 /*14*/] = { func_219(iParam0, iParam1, iParam2) };
	if (unk_0xC80D31E4B587871C(Global_70671[1 /*14*/].f_6, 0) && !unk_0xC80D31E4B587871C(Global_70671[1 /*14*/].f_6, 6))
	{
		if (bParam3)
		{
			func_218(iParam1, Global_70671[1 /*14*/].f_5, Global_70671[1 /*14*/].f_2, 2, Global_70671[1 /*14*/].f_1, 0, 1);
		}
		else
		{
			func_218(iParam1, Global_70671[1 /*14*/].f_5, Global_70671[1 /*14*/].f_2, 2, Global_70671[1 /*14*/].f_1, 1, 0);
		}
		return 1;
	}
	return 0;
}

int func_218(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x1069E
{
	if (iParam0 == 0)
	{
		if (iParam5 == 1)
		{
			unk_0x872F1C1F8587CCC7(&(Global_104555.f_2353[iParam1 /*164*/][iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_2353[iParam1 /*164*/][iParam3]), iParam4);
		}
		return unk_0xC80D31E4B587871C(Global_104555.f_2353[iParam1 /*164*/][iParam3], iParam4);
	}
	else if (iParam0 == 1)
	{
		if (iParam5 == 1)
		{
			unk_0x872F1C1F8587CCC7(&(Global_104555.f_2353[iParam1 /*164*/].f_4[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_2353[iParam1 /*164*/].f_4[iParam3]), iParam4);
		}
		return unk_0xC80D31E4B587871C(Global_104555.f_2353[iParam1 /*164*/].f_4[iParam3], iParam4);
	}
	else if (iParam0 == 2)
	{
		if (iParam5 == 1)
		{
			unk_0x872F1C1F8587CCC7(&(Global_104555.f_2353[iParam1 /*164*/].f_8[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_2353[iParam1 /*164*/].f_8[iParam3]), iParam4);
		}
		return unk_0xC80D31E4B587871C(Global_104555.f_2353[iParam1 /*164*/].f_8[iParam3], iParam4);
	}
	else if (iParam0 == 3)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0x872F1C1F8587CCC7(&(Global_104555.f_2353[iParam1 /*164*/].f_12[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_2353[iParam1 /*164*/].f_12[iParam3]), iParam4);
			}
			return unk_0xC80D31E4B587871C(Global_104555.f_2353[iParam1 /*164*/].f_12[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0x872F1C1F8587CCC7(&(Global_104555.f_2353[iParam1 /*164*/].f_16[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_2353[iParam1 /*164*/].f_16[iParam3]), iParam4);
			}
			return unk_0xC80D31E4B587871C(Global_104555.f_2353[iParam1 /*164*/].f_16[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0x872F1C1F8587CCC7(&(Global_104555.f_2353[iParam1 /*164*/].f_20[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_2353[iParam1 /*164*/].f_20[iParam3]), iParam4);
			}
			return unk_0xC80D31E4B587871C(Global_104555.f_2353[iParam1 /*164*/].f_20[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				unk_0x872F1C1F8587CCC7(&(Global_104555.f_2353[iParam1 /*164*/].f_24[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_2353[iParam1 /*164*/].f_24[iParam3]), iParam4);
			}
			return unk_0xC80D31E4B587871C(Global_104555.f_2353[iParam1 /*164*/].f_24[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				unk_0x872F1C1F8587CCC7(&(Global_104555.f_2353[iParam1 /*164*/].f_28[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_2353[iParam1 /*164*/].f_28[iParam3]), iParam4);
			}
			return unk_0xC80D31E4B587871C(Global_104555.f_2353[iParam1 /*164*/].f_28[iParam3], iParam4);
		}
		else if (iParam2 == 5)
		{
			if (iParam5 == 1)
			{
				unk_0x872F1C1F8587CCC7(&(Global_104555.f_2353[iParam1 /*164*/].f_32[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_2353[iParam1 /*164*/].f_32[iParam3]), iParam4);
			}
			return unk_0xC80D31E4B587871C(Global_104555.f_2353[iParam1 /*164*/].f_32[iParam3], iParam4);
		}
		else if (iParam2 == 6)
		{
			if (iParam5 == 1)
			{
				unk_0x872F1C1F8587CCC7(&(Global_104555.f_2353[iParam1 /*164*/].f_36[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_2353[iParam1 /*164*/].f_36[iParam3]), iParam4);
			}
			return unk_0xC80D31E4B587871C(Global_104555.f_2353[iParam1 /*164*/].f_36[iParam3], iParam4);
		}
		else if (iParam2 == 7)
		{
			if (iParam5 == 1)
			{
				unk_0x872F1C1F8587CCC7(&(Global_104555.f_2353[iParam1 /*164*/].f_40[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_2353[iParam1 /*164*/].f_40[iParam3]), iParam4);
			}
			return unk_0xC80D31E4B587871C(Global_104555.f_2353[iParam1 /*164*/].f_40[iParam3], iParam4);
		}
		else if (iParam2 == 8)
		{
			if (iParam5 == 1)
			{
				unk_0x872F1C1F8587CCC7(&(Global_104555.f_2353[iParam1 /*164*/].f_44[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_2353[iParam1 /*164*/].f_44[iParam3]), iParam4);
			}
			return unk_0xC80D31E4B587871C(Global_104555.f_2353[iParam1 /*164*/].f_44[iParam3], iParam4);
		}
		else if (iParam2 == 9)
		{
			if (iParam5 == 1)
			{
				unk_0x872F1C1F8587CCC7(&(Global_104555.f_2353[iParam1 /*164*/].f_48[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_2353[iParam1 /*164*/].f_48[iParam3]), iParam4);
			}
			return unk_0xC80D31E4B587871C(Global_104555.f_2353[iParam1 /*164*/].f_48[iParam3], iParam4);
		}
	}
	else if (iParam0 == 4)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0x872F1C1F8587CCC7(&(Global_104555.f_2353[iParam1 /*164*/].f_52[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_2353[iParam1 /*164*/].f_52[iParam3]), iParam4);
			}
			return unk_0xC80D31E4B587871C(Global_104555.f_2353[iParam1 /*164*/].f_52[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0x872F1C1F8587CCC7(&(Global_104555.f_2353[iParam1 /*164*/].f_56[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_2353[iParam1 /*164*/].f_56[iParam3]), iParam4);
			}
			return unk_0xC80D31E4B587871C(Global_104555.f_2353[iParam1 /*164*/].f_56[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0x872F1C1F8587CCC7(&(Global_104555.f_2353[iParam1 /*164*/].f_60[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_2353[iParam1 /*164*/].f_60[iParam3]), iParam4);
			}
			return unk_0xC80D31E4B587871C(Global_104555.f_2353[iParam1 /*164*/].f_60[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				unk_0x872F1C1F8587CCC7(&(Global_104555.f_2353[iParam1 /*164*/].f_64[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_2353[iParam1 /*164*/].f_64[iParam3]), iParam4);
			}
			return unk_0xC80D31E4B587871C(Global_104555.f_2353[iParam1 /*164*/].f_64[iParam3], iParam4);
		}
	}
	else if (iParam0 == 5)
	{
		if (iParam5 == 1)
		{
			unk_0x872F1C1F8587CCC7(&(Global_104555.f_2353[iParam1 /*164*/].f_68[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_2353[iParam1 /*164*/].f_68[iParam3]), iParam4);
		}
		return unk_0xC80D31E4B587871C(Global_104555.f_2353[iParam1 /*164*/].f_68[iParam3], iParam4);
	}
	else if (iParam0 == 6)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0x872F1C1F8587CCC7(&(Global_104555.f_2353[iParam1 /*164*/].f_72[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_2353[iParam1 /*164*/].f_72[iParam3]), iParam4);
			}
			return unk_0xC80D31E4B587871C(Global_104555.f_2353[iParam1 /*164*/].f_72[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0x872F1C1F8587CCC7(&(Global_104555.f_2353[iParam1 /*164*/].f_76[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_2353[iParam1 /*164*/].f_76[iParam3]), iParam4);
			}
			return unk_0xC80D31E4B587871C(Global_104555.f_2353[iParam1 /*164*/].f_76[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0x872F1C1F8587CCC7(&(Global_104555.f_2353[iParam1 /*164*/].f_80[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_2353[iParam1 /*164*/].f_80[iParam3]), iParam4);
			}
			return unk_0xC80D31E4B587871C(Global_104555.f_2353[iParam1 /*164*/].f_80[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				unk_0x872F1C1F8587CCC7(&(Global_104555.f_2353[iParam1 /*164*/].f_84[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_2353[iParam1 /*164*/].f_84[iParam3]), iParam4);
			}
			return unk_0xC80D31E4B587871C(Global_104555.f_2353[iParam1 /*164*/].f_84[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				unk_0x872F1C1F8587CCC7(&(Global_104555.f_2353[iParam1 /*164*/].f_88[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_2353[iParam1 /*164*/].f_88[iParam3]), iParam4);
			}
			return unk_0xC80D31E4B587871C(Global_104555.f_2353[iParam1 /*164*/].f_88[iParam3], iParam4);
		}
	}
	else if (iParam0 == 7)
	{
		if (iParam5 == 1)
		{
			unk_0x872F1C1F8587CCC7(&(Global_104555.f_2353[iParam1 /*164*/].f_92[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_2353[iParam1 /*164*/].f_92[iParam3]), iParam4);
		}
		return unk_0xC80D31E4B587871C(Global_104555.f_2353[iParam1 /*164*/].f_92[iParam3], iParam4);
	}
	else if (iParam0 == 8)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0x872F1C1F8587CCC7(&(Global_104555.f_2353[iParam1 /*164*/].f_96[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_2353[iParam1 /*164*/].f_96[iParam3]), iParam4);
			}
			return unk_0xC80D31E4B587871C(Global_104555.f_2353[iParam1 /*164*/].f_96[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0x872F1C1F8587CCC7(&(Global_104555.f_2353[iParam1 /*164*/].f_100[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_2353[iParam1 /*164*/].f_100[iParam3]), iParam4);
			}
			return unk_0xC80D31E4B587871C(Global_104555.f_2353[iParam1 /*164*/].f_100[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0x872F1C1F8587CCC7(&(Global_104555.f_2353[iParam1 /*164*/].f_104[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_2353[iParam1 /*164*/].f_104[iParam3]), iParam4);
			}
			return unk_0xC80D31E4B587871C(Global_104555.f_2353[iParam1 /*164*/].f_104[iParam3], iParam4);
		}
	}
	else if (iParam0 == 9)
	{
		if (iParam5 == 1)
		{
			unk_0x872F1C1F8587CCC7(&(Global_104555.f_2353[iParam1 /*164*/].f_108[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_2353[iParam1 /*164*/].f_108[iParam3]), iParam4);
		}
		return unk_0xC80D31E4B587871C(Global_104555.f_2353[iParam1 /*164*/].f_108[iParam3], iParam4);
	}
	else if (iParam0 == 10)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0x872F1C1F8587CCC7(&(Global_104555.f_2353[iParam1 /*164*/].f_112[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_2353[iParam1 /*164*/].f_112[iParam3]), iParam4);
			}
			return unk_0xC80D31E4B587871C(Global_104555.f_2353[iParam1 /*164*/].f_112[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0x872F1C1F8587CCC7(&(Global_104555.f_2353[iParam1 /*164*/].f_116[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_2353[iParam1 /*164*/].f_116[iParam3]), iParam4);
			}
			return unk_0xC80D31E4B587871C(Global_104555.f_2353[iParam1 /*164*/].f_116[iParam3], iParam4);
		}
	}
	else if (iParam0 == 11)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0x872F1C1F8587CCC7(&(Global_104555.f_2353[iParam1 /*164*/].f_120[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_2353[iParam1 /*164*/].f_120[iParam3]), iParam4);
			}
			return unk_0xC80D31E4B587871C(Global_104555.f_2353[iParam1 /*164*/].f_120[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0x872F1C1F8587CCC7(&(Global_104555.f_2353[iParam1 /*164*/].f_124[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_2353[iParam1 /*164*/].f_124[iParam3]), iParam4);
			}
			return unk_0xC80D31E4B587871C(Global_104555.f_2353[iParam1 /*164*/].f_124[iParam3], iParam4);
		}
	}
	else if (iParam0 == 12)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0x872F1C1F8587CCC7(&(Global_104555.f_2353[iParam1 /*164*/].f_128[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_2353[iParam1 /*164*/].f_128[iParam3]), iParam4);
			}
			return unk_0xC80D31E4B587871C(Global_104555.f_2353[iParam1 /*164*/].f_128[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0x872F1C1F8587CCC7(&(Global_104555.f_2353[iParam1 /*164*/].f_132[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_2353[iParam1 /*164*/].f_132[iParam3]), iParam4);
			}
			return unk_0xC80D31E4B587871C(Global_104555.f_2353[iParam1 /*164*/].f_132[iParam3], iParam4);
		}
	}
	else if (iParam0 == 13)
	{
		if (iParam5 == 1)
		{
			unk_0x872F1C1F8587CCC7(&(Global_104555.f_2353[iParam1 /*164*/].f_136[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_2353[iParam1 /*164*/].f_136[iParam3]), iParam4);
		}
		return unk_0xC80D31E4B587871C(Global_104555.f_2353[iParam1 /*164*/].f_136[iParam3], iParam4);
	}
	else if (iParam0 == 14)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0x872F1C1F8587CCC7(&(Global_104555.f_2353[iParam1 /*164*/].f_140[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_2353[iParam1 /*164*/].f_140[iParam3]), iParam4);
			}
			return unk_0xC80D31E4B587871C(Global_104555.f_2353[iParam1 /*164*/].f_140[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0x872F1C1F8587CCC7(&(Global_104555.f_2353[iParam1 /*164*/].f_144[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_2353[iParam1 /*164*/].f_144[iParam3]), iParam4);
			}
			return unk_0xC80D31E4B587871C(Global_104555.f_2353[iParam1 /*164*/].f_144[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0x872F1C1F8587CCC7(&(Global_104555.f_2353[iParam1 /*164*/].f_148[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_2353[iParam1 /*164*/].f_148[iParam3]), iParam4);
			}
			return unk_0xC80D31E4B587871C(Global_104555.f_2353[iParam1 /*164*/].f_148[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				unk_0x872F1C1F8587CCC7(&(Global_104555.f_2353[iParam1 /*164*/].f_152[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_2353[iParam1 /*164*/].f_152[iParam3]), iParam4);
			}
			return unk_0xC80D31E4B587871C(Global_104555.f_2353[iParam1 /*164*/].f_152[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				unk_0x872F1C1F8587CCC7(&(Global_104555.f_2353[iParam1 /*164*/].f_156[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_2353[iParam1 /*164*/].f_156[iParam3]), iParam4);
			}
			return unk_0xC80D31E4B587871C(Global_104555.f_2353[iParam1 /*164*/].f_156[iParam3], iParam4);
		}
		else if (iParam2 == 5)
		{
			if (iParam5 == 1)
			{
				unk_0x872F1C1F8587CCC7(&(Global_104555.f_2353[iParam1 /*164*/].f_160[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_2353[iParam1 /*164*/].f_160[iParam3]), iParam4);
			}
			return unk_0xC80D31E4B587871C(Global_104555.f_2353[iParam1 /*164*/].f_160[iParam3], iParam4);
		}
	}
	return 0;
}

struct<14> func_219(int iParam0, int iParam1, int iParam2)//Position - 0x115BC
{
	func_288();
	if (iParam0 == joaat("player_zero"))
	{
		func_270(iParam1, iParam2);
	}
	else if (iParam0 == joaat("player_one"))
	{
		func_251(iParam1, iParam2);
	}
	else if (iParam0 == joaat("player_two"))
	{
		func_220(iParam1, iParam2);
	}
	return Global_70671[0 /*14*/];
}

void func_220(int iParam0, int iParam1)//Position - 0x1160E
{
	switch (iParam0)
	{
		case 0:
			func_250(iParam1);
			break;
		
		case 2:
			func_249(iParam1);
			break;
		
		case 3:
			func_246(iParam1);
			break;
		
		case 4:
			func_245(iParam1);
			break;
		
		case 6:
			func_244(iParam1);
			break;
		
		case 5:
			func_243(iParam1);
			break;
		
		case 8:
			func_242(iParam1);
			break;
		
		case 9:
			func_241(iParam1);
			break;
		
		case 10:
			func_240(iParam1);
			break;
		
		case 1:
			func_239(iParam1);
			break;
		
		case 7:
			func_238(iParam1);
			break;
		
		case 11:
			func_237(iParam1);
			break;
		
		case 12:
			func_236(iParam1);
			break;
		
		case 13:
			func_235(iParam1);
			break;
		
		case 14:
			func_221(iParam1);
			break;
	}
}

void func_221(int iParam0)//Position - 0x116FE
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 14;
	Global_70671[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 6;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 7;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 8;
			break;
		
		case 154:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 2;
			break;
		
		case 88:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 10;
			break;
		
		case 89:
			StringCopy(&Var2, "PROPS_P2_E1", 16);
			iVar3 = 1;
			iVar4 = 0;
			iVar1 = 45;
			iVar5 = 10;
			break;
		
		case 90:
			StringCopy(&Var2, "PROPS_P2_E2", 16);
			iVar3 = 2;
			iVar4 = 0;
			iVar5 = 10;
			break;
		
		case 91:
			StringCopy(&Var2, "PROPS_P2_E2_1", 16);
			iVar3 = 2;
			iVar4 = 1;
			iVar1 = 50;
			iVar5 = 10;
			break;
		
		case 92:
			StringCopy(&Var2, "PROPS_P2_E2_2", 16);
			iVar3 = 2;
			iVar4 = 2;
			iVar1 = 55;
			iVar5 = 10;
			break;
		
		case 93:
			StringCopy(&Var2, "PROPS_P2_E2_3", 16);
			iVar3 = 2;
			iVar4 = 3;
			iVar1 = 52;
			iVar5 = 10;
			break;
		
		case 94:
			StringCopy(&Var2, "PROPS_P2_E2_4", 16);
			iVar3 = 2;
			iVar4 = 4;
			iVar1 = 54;
			iVar5 = 10;
			break;
		
		case 95:
			StringCopy(&Var2, "PROPS_P2_E2_5", 16);
			iVar3 = 2;
			iVar4 = 5;
			iVar1 = 54;
			iVar5 = 10;
			break;
		
		case 96:
			StringCopy(&Var2, "PROPS_P2_E2_6", 16);
			iVar3 = 2;
			iVar4 = 6;
			iVar1 = 55;
			iVar5 = 10;
			break;
		
		case 97:
			StringCopy(&Var2, "PROPS_P2_E2_7", 16);
			iVar3 = 2;
			iVar4 = 7;
			iVar1 = 55;
			iVar5 = 10;
			break;
		
		case 98:
			StringCopy(&Var2, "PROPS_P2_E2_8", 16);
			iVar3 = 2;
			iVar4 = 8;
			iVar1 = 58;
			iVar5 = 10;
			break;
		
		case 99:
			StringCopy(&Var2, "PROPS_P2_E2_9", 16);
			iVar3 = 2;
			iVar4 = 9;
			iVar1 = 58;
			iVar5 = 10;
			break;
		
		case 100:
			StringCopy(&Var2, "PROPS_P2_E3", 16);
			iVar3 = 3;
			iVar4 = 0;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 101:
			StringCopy(&Var2, "PROPS_P2_E3_1", 16);
			iVar3 = 3;
			iVar4 = 1;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 102:
			StringCopy(&Var2, "PROPS_P2_E3_2", 16);
			iVar3 = 3;
			iVar4 = 2;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 103:
			StringCopy(&Var2, "PROPS_P2_E3_3", 16);
			iVar3 = 3;
			iVar4 = 3;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 104:
			StringCopy(&Var2, "PROPS_P2_E3_4", 16);
			iVar3 = 3;
			iVar4 = 4;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 105:
			StringCopy(&Var2, "PROPS_P2_E3_5", 16);
			iVar3 = 3;
			iVar4 = 5;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 106:
			StringCopy(&Var2, "PROPS_P2_E3_6", 16);
			iVar3 = 3;
			iVar4 = 6;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 107:
			StringCopy(&Var2, "PROPS_P2_E3_7", 16);
			iVar3 = 3;
			iVar4 = 7;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 108:
			StringCopy(&Var2, "PROPS_P2_E3_8", 16);
			iVar3 = 3;
			iVar4 = 8;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 109:
			StringCopy(&Var2, "PROPS_P2_E3_9", 16);
			iVar3 = 3;
			iVar4 = 9;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 110:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			iVar5 = 10;
			break;
		
		case 111:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			iVar5 = 10;
			break;
		
		case 112:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			iVar5 = 10;
			break;
		
		case 113:
			StringCopy(&Var2, "PROPS_P2_E7_0", 16);
			iVar3 = 7;
			iVar4 = 0;
			iVar1 = 60;
			iVar5 = 10;
			break;
		
		case 114:
			StringCopy(&Var2, "PROPS_P2_E7_1", 16);
			iVar3 = 7;
			iVar4 = 1;
			iVar1 = 50;
			iVar5 = 10;
			break;
		
		case 115:
			StringCopy(&Var2, "PROPS_P2_E7_2", 16);
			iVar3 = 7;
			iVar4 = 2;
			iVar1 = 50;
			iVar5 = 10;
			break;
		
		case 116:
			StringCopy(&Var2, "PROPS_P2_E7_3", 16);
			iVar3 = 7;
			iVar4 = 3;
			iVar1 = 59;
			iVar5 = 10;
			break;
		
		case 117:
			StringCopy(&Var2, "PROPS_P2_E7_4", 16);
			iVar3 = 7;
			iVar4 = 4;
			iVar1 = 55;
			iVar5 = 10;
			break;
		
		case 118:
			StringCopy(&Var2, "PROPS_P2_E7_5", 16);
			iVar3 = 7;
			iVar4 = 5;
			iVar1 = 55;
			iVar5 = 10;
			break;
		
		case 119:
			StringCopy(&Var2, "PROPS_P2_E7_6", 16);
			iVar3 = 7;
			iVar4 = 6;
			iVar1 = 65;
			iVar5 = 10;
			break;
		
		case 120:
			StringCopy(&Var2, "PROPS_P2_E7_7", 16);
			iVar3 = 7;
			iVar4 = 7;
			iVar1 = 59;
			iVar5 = 10;
			break;
		
		case 121:
			StringCopy(&Var2, "PROPS_P2_E7_8", 16);
			iVar3 = 7;
			iVar4 = 8;
			iVar1 = 79;
			iVar5 = 10;
			break;
		
		case 122:
			StringCopy(&Var2, "PROPS_P2_E7_9", 16);
			iVar3 = 7;
			iVar4 = 9;
			iVar1 = 79;
			iVar5 = 10;
			break;
		
		case 123:
			StringCopy(&Var2, "PROPS_P2_E8_0", 16);
			iVar3 = 8;
			iVar4 = 0;
			iVar1 = 150;
			iVar5 = 10;
			break;
		
		case 124:
			StringCopy(&Var2, "PROPS_P2_E8_1", 16);
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 150;
			iVar5 = 10;
			break;
		
		case 125:
			StringCopy(&Var2, "PROPS_P2_E8_2", 16);
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 170;
			iVar5 = 10;
			break;
		
		case 126:
			StringCopy(&Var2, "PROPS_P2_E8_3", 16);
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 175;
			iVar5 = 10;
			break;
		
		case 127:
			StringCopy(&Var2, "PROPS_P2_E8_4", 16);
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 180;
			iVar5 = 10;
			break;
		
		case 128:
			StringCopy(&Var2, "PROPS_P2_E8_5", 16);
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 185;
			iVar5 = 10;
			break;
		
		case 129:
			StringCopy(&Var2, "PROPS_P2_E8_6", 16);
			iVar3 = 8;
			iVar4 = 6;
			iVar1 = 189;
			iVar5 = 10;
			break;
		
		case 130:
			StringCopy(&Var2, "PROPS_P2_E8_7", 16);
			iVar3 = 8;
			iVar4 = 7;
			iVar1 = 195;
			iVar5 = 10;
			break;
		
		case 131:
			StringCopy(&Var2, "PROPS_P2_E8_8", 16);
			iVar3 = 8;
			iVar4 = 8;
			iVar1 = 210;
			iVar5 = 10;
			break;
		
		case 132:
			StringCopy(&Var2, "PROPS_P2_E8_9", 16);
			iVar3 = 8;
			iVar4 = 9;
			iVar1 = 215;
			iVar5 = 10;
			break;
		
		case 133:
			StringCopy(&Var2, "PROPS_P2_E9_0", 16);
			iVar3 = 9;
			iVar4 = 0;
			iVar1 = 165;
			iVar5 = 10;
			break;
		
		case 134:
			StringCopy(&Var2, "PROPS_P2_E9_1", 16);
			iVar3 = 9;
			iVar4 = 1;
			iVar1 = 165;
			iVar5 = 10;
			break;
		
		case 135:
			StringCopy(&Var2, "PROPS_P2_E9_2", 16);
			iVar3 = 9;
			iVar4 = 2;
			iVar1 = 169;
			iVar5 = 10;
			break;
		
		case 136:
			StringCopy(&Var2, "PROPS_P2_E9_3", 16);
			iVar3 = 9;
			iVar4 = 3;
			iVar1 = 169;
			iVar5 = 10;
			break;
		
		case 137:
			StringCopy(&Var2, "PROPS_P2_E9_4", 16);
			iVar3 = 9;
			iVar4 = 4;
			iVar1 = 175;
			iVar5 = 10;
			break;
		
		case 138:
			StringCopy(&Var2, "PROPS_P2_E9_5", 16);
			iVar3 = 9;
			iVar4 = 5;
			iVar1 = 175;
			iVar5 = 10;
			break;
		
		case 139:
			StringCopy(&Var2, "PROPS_P2_E9_6", 16);
			iVar3 = 9;
			iVar4 = 6;
			iVar1 = 175;
			iVar5 = 10;
			break;
		
		case 140:
			StringCopy(&Var2, "PROPS_P2_E9_7", 16);
			iVar3 = 9;
			iVar4 = 7;
			iVar1 = 189;
			iVar5 = 10;
			break;
		
		case 141:
			StringCopy(&Var2, "PROPS_P2_E9_8", 16);
			iVar3 = 9;
			iVar4 = 8;
			iVar1 = 195;
			iVar5 = 10;
			break;
		
		case 142:
			StringCopy(&Var2, "PROPS_P2_E9_9", 16);
			iVar3 = 9;
			iVar4 = 9;
			iVar1 = 195;
			iVar5 = 10;
			break;
		
		case 143:
			StringCopy(&Var2, "PROPS_P2_E10_0", 16);
			iVar3 = 10;
			iVar4 = 0;
			iVar1 = 49;
			iVar5 = 10;
			break;
		
		case 144:
			StringCopy(&Var2, "PROPS_P2_E10_1", 16);
			iVar3 = 10;
			iVar4 = 1;
			iVar1 = 50;
			iVar5 = 10;
			break;
		
		case 145:
			StringCopy(&Var2, "PROPS_P2_E10_2", 16);
			iVar3 = 10;
			iVar4 = 2;
			iVar1 = 52;
			iVar5 = 10;
			break;
		
		case 146:
			StringCopy(&Var2, "PROPS_P2_E10_3", 16);
			iVar3 = 10;
			iVar4 = 3;
			iVar1 = 55;
			iVar5 = 10;
			break;
		
		case 147:
			StringCopy(&Var2, "PROPS_P2_E10_4", 16);
			iVar3 = 10;
			iVar4 = 4;
			iVar1 = 60;
			iVar5 = 10;
			break;
		
		case 148:
			StringCopy(&Var2, "PROPS_P2_E10_5", 16);
			iVar3 = 10;
			iVar4 = 5;
			iVar1 = 58;
			iVar5 = 10;
			break;
		
		case 149:
			StringCopy(&Var2, "PROPS_P2_E10_6", 16);
			iVar3 = 10;
			iVar4 = 6;
			iVar1 = 60;
			iVar5 = 10;
			break;
		
		case 150:
			StringCopy(&Var2, "PROPS_P2_E10_7", 16);
			iVar3 = 10;
			iVar4 = 7;
			iVar1 = 63;
			iVar5 = 10;
			break;
		
		case 151:
			StringCopy(&Var2, "PROPS_P2_E10_8", 16);
			iVar3 = 10;
			iVar4 = 8;
			iVar1 = 65;
			iVar5 = 10;
			break;
		
		case 152:
			StringCopy(&Var2, "PROPS_P2_E10_9", 16);
			iVar3 = 10;
			iVar4 = 9;
			iVar1 = 68;
			iVar5 = 10;
			break;
		
		case 153:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			iVar1 = 100;
			iVar5 = 10;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 12:
			StringCopy(&Var2, "PROPS_P2_H2_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			iVar1 = 320;
			iVar5 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "PROPS_P2_H7_0", 16);
			iVar3 = 7;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 18:
			StringCopy(&Var2, "PROPS_P2_H7_1", 16);
			iVar3 = 7;
			iVar4 = 1;
			iVar5 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 1;
			iVar5 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 2;
			iVar5 = 0;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 3;
			iVar5 = 0;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 4;
			iVar5 = 0;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 5;
			iVar5 = 0;
			break;
		
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 6;
			iVar5 = 0;
			break;
		
		case 27:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 7;
			iVar5 = 0;
			break;
		
		case 28:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 8;
			iVar5 = 0;
			break;
		
		case 29:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 9;
			iVar5 = 0;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 10;
			iVar5 = 0;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 11;
			iVar5 = 0;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 12;
			iVar5 = 0;
			break;
		
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 13;
			iVar5 = 0;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 14;
			iVar5 = 0;
			break;
		
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 15;
			iVar5 = 0;
			break;
		
		case 36:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 37:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 38:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 1;
			iVar5 = 0;
			break;
		
		case 39:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 2;
			iVar5 = 0;
			break;
		
		case 40:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 3;
			iVar5 = 0;
			break;
		
		case 41:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 4;
			iVar5 = 0;
			break;
		
		case 42:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 5;
			iVar5 = 0;
			break;
		
		case 43:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 6;
			iVar5 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 7;
			iVar5 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 13;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 47:
			StringCopy(&Var2, "PROPS_P1_H8_0", 16);
			iVar3 = 14;
			iVar4 = 0;
			iVar1 = 270;
			iVar5 = 0;
			break;
		
		case 48:
			StringCopy(&Var2, "PROPS_P1_H8_1", 16);
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 270;
			iVar5 = 0;
			break;
		
		case 49:
			StringCopy(&Var2, "PROPS_P1_H9_0", 16);
			iVar3 = 15;
			iVar4 = 0;
			iVar1 = 200;
			iVar5 = 0;
			break;
		
		case 50:
			StringCopy(&Var2, "PROPS_P1_H9_1", 16);
			iVar3 = 15;
			iVar4 = 1;
			iVar1 = 200;
			iVar5 = 0;
			break;
		
		case 51:
			StringCopy(&Var2, "PROPS_P1_H10_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			iVar1 = 350;
			iVar5 = 0;
			break;
		
		case 52:
			StringCopy(&Var2, "PROPS_P1_H10_1", 16);
			iVar3 = 16;
			iVar4 = 1;
			iVar1 = 350;
			iVar5 = 0;
			break;
		
		case 53:
			StringCopy(&Var2, "PROPS_P1_H11_0", 16);
			iVar3 = 17;
			iVar4 = 0;
			iVar1 = 450;
			iVar5 = 0;
			break;
		
		case 54:
			StringCopy(&Var2, "PROPS_P1_H12_0", 16);
			iVar3 = 18;
			iVar4 = 0;
			iVar1 = 500;
			iVar5 = 0;
			break;
		
		case 55:
			StringCopy(&Var2, "PROPS_P1_H12_1", 16);
			iVar3 = 18;
			iVar4 = 1;
			iVar1 = 500;
			iVar5 = 0;
			break;
		
		case 56:
			StringCopy(&Var2, "PROPS_P1_H13_0", 16);
			iVar3 = 19;
			iVar4 = 0;
			iVar1 = 50;
			iVar5 = 0;
			break;
		
		case 57:
			StringCopy(&Var2, "PROPS_P1_H13_1", 16);
			iVar3 = 19;
			iVar4 = 1;
			iVar1 = 50;
			iVar5 = 0;
			break;
		
		case 58:
			StringCopy(&Var2, "PROPS_P1_H14_0", 16);
			iVar3 = 20;
			iVar4 = 0;
			iVar1 = 99;
			iVar5 = 0;
			break;
		
		case 59:
			StringCopy(&Var2, "PROPS_P1_H14_1", 16);
			iVar3 = 20;
			iVar4 = 1;
			iVar1 = 99;
			iVar5 = 0;
			break;
		
		case 60:
			StringCopy(&Var2, "PROPS_P1_H14_2", 16);
			iVar3 = 20;
			iVar4 = 2;
			iVar1 = 99;
			iVar5 = 0;
			break;
		
		case 61:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 21;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 62:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 22;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 63:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 64:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 1;
			iVar5 = 0;
			break;
		
		case 65:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 2;
			iVar5 = 0;
			break;
		
		case 66:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 3;
			iVar5 = 0;
			break;
		
		case 67:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 4;
			iVar5 = 0;
			break;
		
		case 68:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 5;
			iVar5 = 0;
			break;
		
		case 69:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 24;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 70:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 25;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 71:
			StringCopy(&Var2, "PROPS_P1_H26_0", 16);
			iVar3 = 26;
			iVar4 = 0;
			iVar1 = 20;
			iVar5 = 0;
			break;
		
		case 72:
			StringCopy(&Var2, "PROPS_P1_H26_1", 16);
			iVar3 = 26;
			iVar4 = 1;
			iVar1 = 25;
			iVar5 = 0;
			break;
		
		case 73:
			StringCopy(&Var2, "PROPS_P1_H26_2", 16);
			iVar3 = 26;
			iVar4 = 2;
			iVar1 = 25;
			iVar5 = 0;
			break;
		
		case 74:
			StringCopy(&Var2, "PROPS_P1_H26_3", 16);
			iVar3 = 26;
			iVar4 = 3;
			iVar1 = 22;
			iVar5 = 0;
			break;
		
		case 75:
			StringCopy(&Var2, "PROPS_P1_H26_4", 16);
			iVar3 = 26;
			iVar4 = 4;
			iVar1 = 20;
			iVar5 = 0;
			break;
		
		case 76:
			StringCopy(&Var2, "PROPS_P1_H26_5", 16);
			iVar3 = 26;
			iVar4 = 5;
			iVar1 = 25;
			iVar5 = 0;
			break;
		
		case 77:
			StringCopy(&Var2, "PROPS_P1_H26_6", 16);
			iVar3 = 26;
			iVar4 = 6;
			iVar1 = 28;
			iVar5 = 0;
			break;
		
		case 78:
			StringCopy(&Var2, "PROPS_P1_H26_7", 16);
			iVar3 = 26;
			iVar4 = 7;
			iVar1 = 24;
			iVar5 = 0;
			break;
		
		case 79:
			StringCopy(&Var2, "PROPS_P1_H26_8", 16);
			iVar3 = 26;
			iVar4 = 8;
			iVar1 = 25;
			iVar5 = 0;
			break;
		
		case 80:
			StringCopy(&Var2, "PROPS_P1_H26_9", 16);
			iVar3 = 26;
			iVar4 = 9;
			iVar1 = 22;
			iVar5 = 0;
			break;
		
		case 81:
			StringCopy(&Var2, "PROPS_P1_H26_10", 16);
			iVar3 = 26;
			iVar4 = 10;
			iVar1 = 18;
			iVar5 = 0;
			break;
		
		case 82:
			StringCopy(&Var2, "PROPS_P1_H26_11", 16);
			iVar3 = 26;
			iVar4 = 11;
			iVar1 = 20;
			iVar5 = 0;
			break;
		
		case 83:
			StringCopy(&Var2, "PROPS_P1_H26_12", 16);
			iVar3 = 26;
			iVar4 = 12;
			iVar1 = 24;
			iVar5 = 0;
			break;
		
		case 84:
			StringCopy(&Var2, "PROPS_P1_H26_13", 16);
			iVar3 = 26;
			iVar4 = 13;
			iVar1 = 22;
			iVar5 = 0;
			break;
		
		case 85:
			StringCopy(&Var2, "PROPS_P1_H26_14", 16);
			iVar3 = 26;
			iVar4 = 14;
			iVar1 = 25;
			iVar5 = 0;
			break;
		
		case 86:
			StringCopy(&Var2, "PROPS_P1_H26_15", 16);
			iVar3 = 26;
			iVar4 = 15;
			iVar1 = 25;
			iVar5 = 0;
			break;
		
		case 87:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 27;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		default:
			func_233(iVar7, iParam0, 155);
			return;
			break;
	}
	func_222(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_222(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)//Position - 0x12974
{
	int iVar0;
	int iVar1;
	
	uParam0->f_6 = 0;
	*uParam0 = iParam9;
	uParam0->f_1 = (iParam2 % 32);
	uParam0->f_2 = (iParam2 / 32);
	uParam0->f_3 = iParam4;
	uParam0->f_4 = iParam5;
	uParam0->f_7 = iParam6;
	StringCopy(&(uParam0->f_8), sParam3, 16);
	uParam0->f_13 = iParam8;
	uParam0->f_12 = func_232(iParam8);
	if ((uParam0->f_2 >= 10 && uParam0->f_5 >= 0) && uParam0->f_5 < 3)
	{
		if (!bParam10)
		{
		}
		uParam0->f_2 = 0;
	}
	if (unk_0x8B948C59217A295D(sParam3) != unk_0x8B948C59217A295D("NO_LABEL"))
	{
	}
	if (bParam7)
	{
		unk_0x872F1C1F8587CCC7(&(uParam0->f_6), 3);
	}
	if (bParam10)
	{
		unk_0x872F1C1F8587CCC7(&(uParam0->f_6), 0);
		if (uParam0->f_5 >= 0 && uParam0->f_5 < 3)
		{
			unk_0x872F1C1F8587CCC7(&(uParam0->f_6), 5);
		}
		unk_0x872F1C1F8587CCC7(&(uParam0->f_6), 1);
		unk_0x872F1C1F8587CCC7(&(uParam0->f_6), 2);
		unk_0x872F1C1F8587CCC7(&(uParam0->f_6), 6);
		if (func_231(14))
		{
			return;
		}
		if (iParam1 == 1)
		{
			if (unk_0x6C297174CFC8C5B2(Global_2621444, 1827025211, 0))
			{
				unk_0x872F1C1F8587CCC7(&(uParam0->f_6), 7);
			}
		}
		if (iParam1 == 12)
		{
			if (!func_229(Global_2621444, 1, 1, 1, -1))
			{
				unk_0x0EE72DB1CD8A3B86(&(uParam0->f_6), 2);
			}
			if (!func_229(Global_2621444, 2, 1, 1, -1))
			{
				unk_0x872F1C1F8587CCC7(&(uParam0->f_6), 4);
			}
		}
		else if (iParam1 == 13)
		{
		}
		else if (iParam1 == 14)
		{
			if (!func_229(Global_2621444, 1, 1, 1, -1))
			{
				unk_0x0EE72DB1CD8A3B86(&(uParam0->f_6), 2);
			}
			if (!func_229(Global_2621444, 2, 1, 1, -1))
			{
				unk_0x872F1C1F8587CCC7(&(uParam0->f_6), 4);
			}
		}
		else
		{
			if (!func_229(Global_2621444, 1, 1, 1, -1))
			{
				unk_0x0EE72DB1CD8A3B86(&(uParam0->f_6), 2);
			}
			if (!func_229(Global_2621444, 2, 1, 1, -1))
			{
				unk_0x872F1C1F8587CCC7(&(uParam0->f_6), 4);
			}
		}
	}
	else if (uParam0->f_5 >= 0 && uParam0->f_5 < 3)
	{
		unk_0x872F1C1F8587CCC7(&(uParam0->f_6), 0);
		unk_0x872F1C1F8587CCC7(&(uParam0->f_6), 5);
		if (func_218(iParam1, uParam0->f_5, uParam0->f_2, 0, uParam0->f_1, 0, 0))
		{
			unk_0x872F1C1F8587CCC7(&(uParam0->f_6), 1);
		}
		if (func_218(iParam1, uParam0->f_5, uParam0->f_2, 1, uParam0->f_1, 0, 0))
		{
			unk_0x872F1C1F8587CCC7(&(uParam0->f_6), 2);
		}
		if (!func_218(iParam1, uParam0->f_5, uParam0->f_2, 2, uParam0->f_1, 0, 0))
		{
			unk_0x872F1C1F8587CCC7(&(uParam0->f_6), 4);
		}
	}
	else
	{
		unk_0x872F1C1F8587CCC7(&(uParam0->f_6), 0);
		if ((((((((((iParam1 == 11 || iParam1 == 4) || iParam1 == 6) || iParam1 == 1) || iParam1 == 14) || iParam1 == 2) || iParam1 == 8) || iParam1 == 9) || iParam1 == 10) || iParam1 == 7) || iParam1 == 12)
		{
			if (func_231(14))
			{
				return;
			}
			iVar0 = func_225(func_228(iParam1, uParam0->f_2), Global_70668, 0);
			if (unk_0xC80D31E4B587871C(iVar0, uParam0->f_1))
			{
				unk_0x872F1C1F8587CCC7(&(uParam0->f_6), 1);
			}
			iVar0 = func_225(func_224(iParam1, uParam0->f_2), Global_70668, 0);
			if (unk_0xC80D31E4B587871C(iVar0, uParam0->f_1))
			{
				unk_0x872F1C1F8587CCC7(&(uParam0->f_6), 2);
			}
			if (func_223(iParam1, uParam0->f_2, &iVar1))
			{
				iVar0 = func_225(iVar1, Global_70668, 0);
				if (!unk_0xC80D31E4B587871C(iVar0, uParam0->f_1))
				{
					unk_0x872F1C1F8587CCC7(&(uParam0->f_6), 4);
				}
			}
		}
		else
		{
			unk_0x872F1C1F8587CCC7(&(uParam0->f_6), 1);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_6), 2);
		}
	}
	if (iParam1 == 14)
	{
		if (iParam4 == -1)
		{
			unk_0x872F1C1F8587CCC7(&(uParam0->f_6), 1);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_6), 2);
		}
	}
}

bool func_223(int iParam0, int iParam1, var uParam2)//Position - 0x12D05
{
	*uParam2 = 975;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					*uParam2 = 976;
					break;
				
				case 3:
					*uParam2 = 1426;
					break;
				
				case 4:
					*uParam2 = 992;
					break;
				
				case 6:
					*uParam2 = 1000;
					break;
				
				case 8:
					*uParam2 = 1427;
					break;
				
				case 9:
					*uParam2 = 1435;
					break;
				
				case 10:
					*uParam2 = 1437;
					break;
				
				case 1:
					*uParam2 = 1008;
					break;
				
				case 7:
					*uParam2 = 1438;
					break;
				
				case 11:
					*uParam2 = 984;
					break;
				
				case 14:
					*uParam2 = 1016;
					break;
				
				case 12:
					*uParam2 = 1027;
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 2:
					*uParam2 = 977;
					break;
				
				case 4:
					*uParam2 = 993;
					break;
				
				case 6:
					*uParam2 = 1001;
					break;
				
				case 8:
					*uParam2 = 1428;
					break;
				
				case 9:
					*uParam2 = 1436;
					break;
				
				case 7:
					*uParam2 = 1439;
					break;
				
				case 11:
					*uParam2 = 985;
					break;
				
				case 14:
					*uParam2 = 1017;
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 2:
					*uParam2 = 978;
					break;
				
				case 4:
					*uParam2 = 994;
					break;
				
				case 6:
					*uParam2 = 1002;
					break;
				
				case 8:
					*uParam2 = 1429;
					break;
				
				case 7:
					*uParam2 = 1440;
					break;
				
				case 11:
					*uParam2 = 986;
					break;
				
				case 14:
					*uParam2 = 1018;
					break;
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 995;
					break;
				
				case 6:
					*uParam2 = 1003;
					break;
				
				case 8:
					*uParam2 = 1430;
					break;
				
				case 11:
					*uParam2 = 987;
					break;
				
				case 14:
					*uParam2 = 1019;
					break;
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 996;
					break;
				
				case 6:
					*uParam2 = 1004;
					break;
				
				case 8:
					*uParam2 = 1431;
					break;
				
				case 11:
					*uParam2 = 988;
					break;
				
				case 14:
					*uParam2 = 1020;
					break;
			}
			break;
		
		case 5:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 997;
					break;
				
				case 6:
					*uParam2 = 1005;
					break;
				
				case 8:
					*uParam2 = 1432;
					break;
				
				case 11:
					*uParam2 = 989;
					break;
				
				case 14:
					*uParam2 = 1021;
					break;
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 998;
					break;
				
				case 6:
					*uParam2 = 1006;
					break;
				
				case 8:
					*uParam2 = 1433;
					break;
				
				case 11:
					*uParam2 = 990;
					break;
				
				case 14:
					*uParam2 = 1022;
					break;
			}
			break;
		
		case 7:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 999;
					break;
				
				case 6:
					*uParam2 = 1007;
					break;
				
				case 8:
					*uParam2 = 1434;
					break;
				
				case 11:
					*uParam2 = 991;
					break;
				
				case 14:
					*uParam2 = 1023;
					break;
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 14:
					*uParam2 = 1024;
					break;
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 14:
					*uParam2 = 1025;
					break;
			}
			break;
		
		case 10:
			switch (iParam0)
			{
				case 14:
					*uParam2 = 1026;
					break;
			}
			break;
	}
	return *uParam2 != 975;
}

int func_224(int iParam0, int iParam1)//Position - 0x1310A
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					return 924;
					break;
				
				case 3:
					return 1411;
					break;
				
				case 4:
					return 940;
					break;
				
				case 6:
					return 948;
					break;
				
				case 8:
					return 1412;
					break;
				
				case 9:
					return 1420;
					break;
				
				case 10:
					return 1422;
					break;
				
				case 1:
					return 956;
					break;
				
				case 7:
					return 1423;
					break;
				
				case 11:
					return 932;
					break;
				
				case 14:
					return 964;
					break;
				
				case 12:
					return 975;
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 2:
					return 925;
					break;
				
				case 4:
					return 941;
					break;
				
				case 6:
					return 949;
					break;
				
				case 8:
					return 1413;
					break;
				
				case 9:
					return 1421;
					break;
				
				case 7:
					return 1424;
					break;
				
				case 11:
					return 933;
					break;
				
				case 14:
					return 965;
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 2:
					return 926;
					break;
				
				case 4:
					return 942;
					break;
				
				case 6:
					return 950;
					break;
				
				case 8:
					return 1414;
					break;
				
				case 7:
					return 1425;
					break;
				
				case 11:
					return 934;
					break;
				
				case 14:
					return 966;
					break;
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 4:
					return 943;
					break;
				
				case 6:
					return 951;
					break;
				
				case 8:
					return 1415;
					break;
				
				case 11:
					return 935;
					break;
				
				case 14:
					return 967;
					break;
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 4:
					return 944;
					break;
				
				case 6:
					return 952;
					break;
				
				case 8:
					return 1416;
					break;
				
				case 11:
					return 936;
					break;
				
				case 14:
					return 968;
					break;
			}
			break;
		
		case 5:
			switch (iParam0)
			{
				case 4:
					return 945;
					break;
				
				case 6:
					return 953;
					break;
				
				case 8:
					return 1417;
					break;
				
				case 11:
					return 937;
					break;
				
				case 14:
					return 969;
					break;
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 4:
					return 946;
					break;
				
				case 6:
					return 954;
					break;
				
				case 8:
					return 1418;
					break;
				
				case 11:
					return 938;
					break;
				
				case 14:
					return 970;
					break;
			}
			break;
		
		case 7:
			switch (iParam0)
			{
				case 4:
					return 947;
					break;
				
				case 6:
					return 955;
					break;
				
				case 8:
					return 1419;
					break;
				
				case 11:
					return 939;
					break;
				
				case 14:
					return 971;
					break;
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 14:
					return 972;
					break;
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 14:
					return 973;
					break;
			}
			break;
		
		case 10:
			switch (iParam0)
			{
				case 14:
					return 974;
					break;
			}
			break;
	}
	return 932;
}

int func_225(int iParam0, int iParam1, int iParam2)//Position - 0x13505
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2523060[iParam0 /*3*/][func_226(iParam1)];
	if (unk_0xFA3CE529DBB66C85(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_226(var uParam0)//Position - 0x13537
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_227();
		if (iVar1 > -1)
		{
			Global_2522773 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2522773 = 1;
		}
	}
	return iVar0;
}

int func_227()//Position - 0x1356B
{
	return Global_1312736;
}

int func_228(int iParam0, int iParam1)//Position - 0x13577
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					return 872;
					break;
				
				case 3:
					return 1396;
					break;
				
				case 4:
					return 888;
					break;
				
				case 6:
					return 896;
					break;
				
				case 8:
					return 1397;
					break;
				
				case 9:
					return 1405;
					break;
				
				case 10:
					return 1407;
					break;
				
				case 1:
					return 904;
					break;
				
				case 7:
					return 1408;
					break;
				
				case 11:
					return 880;
					break;
				
				case 14:
					return 912;
					break;
				
				case 12:
					return 923;
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 2:
					return 873;
					break;
				
				case 4:
					return 889;
					break;
				
				case 6:
					return 897;
					break;
				
				case 8:
					return 1398;
					break;
				
				case 9:
					return 1406;
					break;
				
				case 7:
					return 1409;
					break;
				
				case 11:
					return 881;
					break;
				
				case 14:
					return 913;
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 2:
					return 874;
					break;
				
				case 4:
					return 890;
					break;
				
				case 6:
					return 898;
					break;
				
				case 8:
					return 1399;
					break;
				
				case 7:
					return 1410;
					break;
				
				case 11:
					return 882;
					break;
				
				case 14:
					return 914;
					break;
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 4:
					return 891;
					break;
				
				case 6:
					return 899;
					break;
				
				case 8:
					return 1400;
					break;
				
				case 11:
					return 883;
					break;
				
				case 14:
					return 915;
					break;
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 4:
					return 892;
					break;
				
				case 6:
					return 900;
					break;
				
				case 8:
					return 1401;
					break;
				
				case 11:
					return 884;
					break;
				
				case 14:
					return 916;
					break;
			}
			break;
		
		case 5:
			switch (iParam0)
			{
				case 4:
					return 893;
					break;
				
				case 6:
					return 901;
					break;
				
				case 8:
					return 1402;
					break;
				
				case 11:
					return 885;
					break;
				
				case 14:
					return 917;
					break;
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 4:
					return 894;
					break;
				
				case 6:
					return 902;
					break;
				
				case 8:
					return 1403;
					break;
				
				case 11:
					return 886;
					break;
				
				case 14:
					return 918;
					break;
			}
			break;
		
		case 7:
			switch (iParam0)
			{
				case 4:
					return 895;
					break;
				
				case 6:
					return 903;
					break;
				
				case 8:
					return 1404;
					break;
				
				case 11:
					return 887;
					break;
				
				case 14:
					return 919;
					break;
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 14:
					return 920;
					break;
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 14:
					return 921;
					break;
			}
			break;
		
		case 10:
			switch (iParam0)
			{
				case 14:
					return 922;
					break;
			}
			break;
	}
	return 880;
}

int func_229(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)//Position - 0x13972
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = Global_70668;
	if (iParam4 != -1)
	{
		iVar0 = iParam4;
	}
	if (func_230(iParam0, iParam1, &iVar2, &iVar1, bParam2, bParam3))
	{
		iVar3 = func_225(iVar2, iVar0, 0);
		return unk_0xC80D31E4B587871C(iVar3, iVar1);
	}
	return 0;
}

bool func_230(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)//Position - 0x139B4
{
	int iVar0;
	
	*uParam2 = 7872;
	if ((bParam4 && Global_4264612) || (!bParam4 && bParam5))
	{
		switch (iParam1)
		{
			case 1:
				switch (iParam0)
				{
					case 8886212:
					case -969630947:
						*uParam2 = 968;
						*uParam3 = 19;
						return 1;
						break;
					
					case 1857811503:
					case -1198063650:
						*uParam2 = 968;
						*uParam3 = 20;
						return 1;
						break;
					
					case 552556691:
					case -1596927918:
						*uParam2 = 968;
						*uParam3 = 21;
						return 1;
						break;
					
					case 328711652:
					case 2093516866:
						*uParam2 = 968;
						*uParam3 = 22;
						return 1;
						break;
					
					case 1194403102:
					case 1863511255:
						*uParam2 = 968;
						*uParam3 = 23;
						return 1;
						break;
					
					case 1107630790:
					case 1503248869:
						*uParam2 = 968;
						*uParam3 = 24;
						return 1;
						break;
					
					case 1807937089:
					case 1263478096:
						*uParam2 = 968;
						*uParam3 = 25;
						return 1;
						break;
					
					case 1453442047:
					case 745170819:
						*uParam2 = 968;
						*uParam3 = 26;
						return 1;
						break;
					
					case -1071423629:
					case -1382822784:
					case 385813134:
						*uParam2 = 932;
						*uParam3 = 0;
						return 1;
						break;
					
					case -833094692:
					case -1731353868:
					case 675392787:
						*uParam2 = 932;
						*uParam3 = 1;
						return 1;
						break;
					
					case -1836153782:
					case -1960638561:
					case -238272479:
						*uParam2 = 932;
						*uParam3 = 2;
						return 1;
						break;
					
					case -1598414687:
					case 147161830:
					case 67757212:
						*uParam2 = 932;
						*uParam3 = 3;
						return 1;
						break;
					
					case 123661793:
					case -92608943:
					case -536372072:
						*uParam2 = 932;
						*uParam3 = 4;
						return 1;
						break;
					
					case 330958487:
					case -162931217:
					case -247578875:
						*uParam2 = 932;
						*uParam3 = 5;
						return 1;
						break;
					
					case -142717408:
					case 1665087452:
					case -854821214:
						*uParam2 = 932;
						*uParam3 = 7;
						return 1;
						break;
					
					case 1290696959:
					case 1012984348:
					case -1458295118:
						*uParam2 = 932;
						*uParam3 = 8;
						return 1;
						break;
					
					case 2059568454:
					case 933072050:
					case -1454802604:
						*uParam2 = 932;
						*uParam3 = 11;
						return 1;
						break;
				}
				break;
			
			case 2:
				switch (iParam0)
				{
					case 8886212:
					case -969630947:
						*uParam2 = 1020;
						*uParam3 = 19;
						return 1;
						break;
					
					case 1857811503:
					case -1198063650:
						*uParam2 = 1020;
						*uParam3 = 20;
						return 1;
						break;
					
					case 552556691:
					case -1596927918:
						*uParam2 = 1020;
						*uParam3 = 21;
						return 1;
						break;
					
					case 328711652:
					case 2093516866:
						*uParam2 = 1020;
						*uParam3 = 22;
						return 1;
						break;
					
					case 1194403102:
					case 1863511255:
						*uParam2 = 1020;
						*uParam3 = 23;
						return 1;
						break;
					
					case 1107630790:
					case 1503248869:
						*uParam2 = 1020;
						*uParam3 = 24;
						return 1;
						break;
					
					case 1807937089:
					case 1263478096:
						*uParam2 = 1020;
						*uParam3 = 25;
						return 1;
						break;
					
					case 1453442047:
					case 745170819:
						*uParam2 = 1020;
						*uParam3 = 26;
						return 1;
						break;
				}
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 1:
				switch (iParam0)
				{
					case -1795774903:
					case -379046860:
						*uParam2 = 968;
						*uParam3 = 19;
						return 1;
						break;
					
					case 1655095722:
					case 472553912:
						*uParam2 = 968;
						*uParam3 = 20;
						return 1;
						break;
					
					case -1951624263:
					case 147288818:
						*uParam2 = 968;
						*uParam3 = 21;
						return 1;
						break;
					
					case -1586249913:
					case 1027988462:
						*uParam2 = 968;
						*uParam3 = 22;
						return 1;
						break;
					
					case -1472181024:
					case 788217689:
						*uParam2 = 968;
						*uParam3 = 23;
						return 1;
						break;
					
					case -1116178608:
					case 1338147047:
						*uParam2 = 968;
						*uParam3 = 24;
						return 1;
						break;
					
					case -1028914761:
					case 1095820292:
						*uParam2 = 968;
						*uParam3 = 25;
						return 1;
						break;
					
					case -654496167:
					case -1989217217:
						*uParam2 = 968;
						*uParam3 = 26;
						return 1;
						break;
				}
				break;
			
			case 2:
				switch (iParam0)
				{
					case -1795774903:
					case -379046860:
						*uParam2 = 1020;
						*uParam3 = 19;
						return 1;
						break;
					
					case 1655095722:
					case 472553912:
						*uParam2 = 1020;
						*uParam3 = 20;
						return 1;
						break;
					
					case -1951624263:
					case 147288818:
						*uParam2 = 1020;
						*uParam3 = 21;
						return 1;
						break;
					
					case -1586249913:
					case 1027988462:
						*uParam2 = 1020;
						*uParam3 = 22;
						return 1;
						break;
					
					case -1472181024:
					case 788217689:
						*uParam2 = 1020;
						*uParam3 = 23;
						return 1;
						break;
					
					case -1116178608:
					case 1338147047:
						*uParam2 = 1020;
						*uParam3 = 24;
						return 1;
						break;
					
					case -1028914761:
					case 1095820292:
						*uParam2 = 1020;
						*uParam3 = 25;
						return 1;
						break;
					
					case -654496167:
					case -1989217217:
						*uParam2 = 1020;
						*uParam3 = 26;
						return 1;
						break;
				}
				break;
			}
	}
	iVar0 = -1;
	if (bParam4)
	{
		if (Global_4264612)
		{
			iVar0 = unk_0xEE7957BF5F06F733(iParam0);
		}
		else
		{
			iVar0 = unk_0x412F97477A158C0F(iParam0);
		}
	}
	else if (bParam5)
	{
		iVar0 = unk_0xEE7957BF5F06F733(iParam0);
	}
	else
	{
		iVar0 = unk_0x412F97477A158C0F(iParam0);
	}
	if (iVar0 == -1)
	{
		return 0;
	}
	switch (iParam1)
	{
		case 1:
			switch (system::floor((system::to_float(iVar0) / 32f)))
			{
				case 0:
					*uParam2 = 1756;
					break;
				
				case 1:
					*uParam2 = 1757;
					break;
				
				case 2:
					*uParam2 = 1758;
					break;
				
				case 3:
					*uParam2 = 1759;
					break;
				
				case 4:
					*uParam2 = 1760;
					break;
				
				case 5:
					*uParam2 = 1761;
					break;
				
				case 6:
					*uParam2 = 1768;
					break;
				
				case 7:
					*uParam2 = 1769;
					break;
				
				case 8:
					*uParam2 = 1770;
					break;
				
				case 9:
					*uParam2 = 1771;
					break;
				
				case 10:
					*uParam2 = 1772;
					break;
				
				case 11:
					*uParam2 = 1773;
					break;
				
				case 12:
					*uParam2 = 1774;
					break;
				
				case 13:
					*uParam2 = 1782;
					break;
				
				case 14:
					*uParam2 = 1783;
					break;
				
				case 15:
					*uParam2 = 1884;
					break;
				
				case 16:
					*uParam2 = 1885;
					break;
				
				case 17:
					*uParam2 = 1916;
					break;
				
				case 18:
					*uParam2 = 1930;
					break;
				
				case 19:
					*uParam2 = 1931;
					break;
				
				case 20:
					*uParam2 = 1932;
					break;
				
				case 21:
					*uParam2 = 1933;
					break;
				
				case 22:
					*uParam2 = 1934;
					break;
				
				case 23:
					*uParam2 = 2038;
					break;
				
				case 24:
					*uParam2 = 2039;
					break;
				
				case 25:
					*uParam2 = 2065;
					break;
				
				case 26:
					*uParam2 = 2066;
					break;
				
				case 27:
					*uParam2 = 2067;
					break;
				
				case 28:
					*uParam2 = 2068;
					break;
				
				case 29:
					*uParam2 = 2069;
					break;
				
				case 30:
					*uParam2 = 2070;
					break;
				
				case 31:
					*uParam2 = 2071;
					break;
				
				case 32:
					*uParam2 = 2072;
					break;
				
				case 33:
					*uParam2 = 2073;
					break;
				
				case 34:
					*uParam2 = 2074;
					break;
				
				case 35:
					*uParam2 = 2321;
					break;
				
				case 36:
					*uParam2 = 2322;
					break;
				
				case 37:
					*uParam2 = 2378;
					break;
				
				case 38:
					*uParam2 = 2379;
					break;
				
				case 39:
					*uParam2 = 2380;
					break;
				
				case 40:
					*uParam2 = 2381;
					break;
				
				case 41:
					*uParam2 = 2440;
					break;
				
				case 42:
					*uParam2 = 2441;
					break;
				
				case 43:
					*uParam2 = 2442;
					break;
				
				case 44:
					*uParam2 = 2443;
					break;
				
				case 45:
					*uParam2 = 2444;
					break;
				
				case 46:
					*uParam2 = 2445;
					break;
				
				case 47:
					*uParam2 = 2446;
					break;
				
				case 48:
					*uParam2 = 2447;
					break;
				
				case 49:
					*uParam2 = 2448;
					break;
				
				case 50:
					*uParam2 = 2449;
					break;
				
				case 51:
					*uParam2 = 2578;
					break;
				
				case 52:
					*uParam2 = 2579;
					break;
				
				case 53:
					*uParam2 = 2580;
					break;
				
				case 54:
					*uParam2 = 2581;
					break;
				
				case 55:
					*uParam2 = 2582;
					break;
				
				case 56:
					*uParam2 = 2583;
					break;
				
				case 57:
					*uParam2 = 2584;
					break;
				
				case 58:
					*uParam2 = 2585;
					break;
				
				case 59:
					*uParam2 = 2586;
					break;
				
				case 60:
					*uParam2 = 2587;
					break;
				
				case 61:
					*uParam2 = 2588;
					break;
				
				case 62:
					*uParam2 = 3185;
					break;
				
				case 63:
					*uParam2 = 3186;
					break;
				
				case 64:
					*uParam2 = 3187;
					break;
				
				case 65:
					*uParam2 = 3188;
					break;
				
				case 66:
					*uParam2 = 3189;
					break;
				
				case 67:
					*uParam2 = 3190;
					break;
				
				case 68:
					*uParam2 = 3658;
					break;
				
				case 69:
					*uParam2 = 3659;
					break;
				
				case 70:
					*uParam2 = 3660;
					break;
				
				case 71:
					*uParam2 = 3661;
					break;
				
				case 72:
					*uParam2 = 3662;
					break;
				
				case 73:
					*uParam2 = 3663;
					break;
				
				case 74:
					*uParam2 = 3664;
					break;
				
				case 75:
					*uParam2 = 3665;
					break;
				
				case 76:
					*uParam2 = 3666;
					break;
				
				case 77:
					*uParam2 = 3667;
					break;
				
				case 78:
					*uParam2 = 3775;
					break;
				
				case 79:
					*uParam2 = 3776;
					break;
				
				case 80:
					*uParam2 = 3777;
					break;
				
				case 81:
					*uParam2 = 3778;
					break;
				
				case 82:
					*uParam2 = 3779;
					break;
				
				case 83:
					*uParam2 = 3780;
					break;
				
				case 84:
					*uParam2 = 3781;
					break;
				
				case 85:
					*uParam2 = 3782;
					break;
				
				case 86:
					*uParam2 = 3885;
					break;
				
				case 87:
					*uParam2 = 3886;
					break;
				
				case 88:
					*uParam2 = 3887;
					break;
				
				case 89:
					*uParam2 = 5320;
					break;
				
				case 90:
					*uParam2 = 5321;
					break;
				
				case 91:
					*uParam2 = 5322;
					break;
				
				case 92:
					*uParam2 = 5323;
					break;
				
				case 93:
					*uParam2 = 5324;
					break;
				
				case 94:
					*uParam2 = 5325;
					break;
				
				case 95:
					*uParam2 = 5326;
					break;
				
				case 96:
					*uParam2 = 5327;
					break;
				
				case 97:
					*uParam2 = 5328;
					break;
				
				case 98:
					*uParam2 = 5329;
					break;
				
				case 99:
					*uParam2 = 5330;
					break;
				
				case 100:
					*uParam2 = 5331;
					break;
				
				case 101:
					*uParam2 = 5377;
					break;
				
				case 102:
					*uParam2 = 5378;
					break;
				
				case 103:
					*uParam2 = 5379;
					break;
				
				case 104:
					*uParam2 = 5380;
					break;
				
				case 105:
					*uParam2 = 5381;
					break;
				
				case 106:
					*uParam2 = 5382;
					break;
				
				case 107:
					*uParam2 = 5383;
					break;
				
				case 108:
					*uParam2 = 5384;
					break;
				
				case 109:
					*uParam2 = 5385;
					break;
				
				case 110:
					*uParam2 = 5386;
					break;
				
				case 111:
					*uParam2 = 5387;
					break;
				
				case 112:
					*uParam2 = 5388;
					break;
				
				case 113:
					*uParam2 = 5389;
					break;
				
				case 114:
					*uParam2 = 5390;
					break;
				
				case 115:
					*uParam2 = 5391;
					break;
				
				case 116:
					*uParam2 = 5392;
					break;
				
				case 117:
					*uParam2 = 5393;
					break;
				
				case 118:
					*uParam2 = 5394;
					break;
				
				case 119:
					*uParam2 = 5395;
					break;
				
				case 120:
					*uParam2 = 5396;
					break;
				
				case 121:
					*uParam2 = 5397;
					break;
				
				case 122:
					*uParam2 = 5398;
					break;
				
				case 123:
					*uParam2 = 5399;
					break;
				
				case 124:
					*uParam2 = 6105;
					break;
				
				case 125:
					*uParam2 = 6106;
					break;
				
				case 126:
					*uParam2 = 6107;
					break;
				
				case 127:
					*uParam2 = 6108;
					break;
				
				case 128:
					*uParam2 = 6109;
					break;
				
				case 129:
					*uParam2 = 6110;
					break;
				
				case 130:
					*uParam2 = 6111;
					break;
				
				case 131:
					*uParam2 = 6112;
					break;
				
				case 132:
					*uParam2 = 6113;
					break;
				
				case 133:
					*uParam2 = 6114;
					break;
				
				case 134:
					*uParam2 = 6115;
					break;
				
				case 135:
					*uParam2 = 6116;
					break;
				
				case 136:
					*uParam2 = 6117;
					break;
				
				case 137:
					*uParam2 = 6118;
					break;
				
				case 138:
					*uParam2 = 6119;
					break;
				
				case 139:
					*uParam2 = 6418;
					break;
				
				case 140:
					*uParam2 = 6419;
					break;
				
				case 141:
					*uParam2 = 6420;
					break;
				
				case 142:
					*uParam2 = 6421;
					break;
				
				case 143:
					*uParam2 = 6422;
					break;
				
				case 144:
					*uParam2 = 6423;
					break;
				
				case 145:
					*uParam2 = 6424;
					break;
				
				case 146:
					*uParam2 = 6425;
					break;
				
				case 147:
					*uParam2 = 6426;
					break;
				
				case 148:
					*uParam2 = 6427;
					break;
				
				case 149:
					*uParam2 = 6428;
					break;
				
				case 150:
					*uParam2 = 6429;
					break;
				
				case 151:
					*uParam2 = 6430;
					break;
				
				case 152:
					*uParam2 = 6431;
					break;
				
				case 153:
					*uParam2 = 6432;
					break;
				
				default:
					break;
			}
			break;
		
		case 2:
			switch (system::floor((system::to_float(iVar0) / 32f)))
			{
				case 0:
					*uParam2 = 1762;
					break;
				
				case 1:
					*uParam2 = 1763;
					break;
				
				case 2:
					*uParam2 = 1764;
					break;
				
				case 3:
					*uParam2 = 1765;
					break;
				
				case 4:
					*uParam2 = 1766;
					break;
				
				case 5:
					*uParam2 = 1767;
					break;
				
				case 6:
					*uParam2 = 1775;
					break;
				
				case 7:
					*uParam2 = 1776;
					break;
				
				case 8:
					*uParam2 = 1777;
					break;
				
				case 9:
					*uParam2 = 1778;
					break;
				
				case 10:
					*uParam2 = 1779;
					break;
				
				case 11:
					*uParam2 = 1780;
					break;
				
				case 12:
					*uParam2 = 1781;
					break;
				
				case 13:
					*uParam2 = 1784;
					break;
				
				case 14:
					*uParam2 = 1785;
					break;
				
				case 15:
					*uParam2 = 1886;
					break;
				
				case 16:
					*uParam2 = 1887;
					break;
				
				case 17:
					*uParam2 = 1917;
					break;
				
				case 18:
					*uParam2 = 1935;
					break;
				
				case 19:
					*uParam2 = 1936;
					break;
				
				case 20:
					*uParam2 = 1937;
					break;
				
				case 21:
					*uParam2 = 1938;
					break;
				
				case 22:
					*uParam2 = 1939;
					break;
				
				case 23:
					*uParam2 = 2040;
					break;
				
				case 24:
					*uParam2 = 2041;
					break;
				
				case 25:
					*uParam2 = 2075;
					break;
				
				case 26:
					*uParam2 = 2076;
					break;
				
				case 27:
					*uParam2 = 2077;
					break;
				
				case 28:
					*uParam2 = 2078;
					break;
				
				case 29:
					*uParam2 = 2079;
					break;
				
				case 30:
					*uParam2 = 2080;
					break;
				
				case 31:
					*uParam2 = 2081;
					break;
				
				case 32:
					*uParam2 = 2082;
					break;
				
				case 33:
					*uParam2 = 2083;
					break;
				
				case 34:
					*uParam2 = 2084;
					break;
				
				case 35:
					*uParam2 = 2323;
					break;
				
				case 36:
					*uParam2 = 2324;
					break;
				
				case 37:
					*uParam2 = 2382;
					break;
				
				case 38:
					*uParam2 = 2383;
					break;
				
				case 39:
					*uParam2 = 2384;
					break;
				
				case 40:
					*uParam2 = 2385;
					break;
				
				case 41:
					*uParam2 = 2450;
					break;
				
				case 42:
					*uParam2 = 2451;
					break;
				
				case 43:
					*uParam2 = 2452;
					break;
				
				case 44:
					*uParam2 = 2453;
					break;
				
				case 45:
					*uParam2 = 2454;
					break;
				
				case 46:
					*uParam2 = 2455;
					break;
				
				case 47:
					*uParam2 = 2456;
					break;
				
				case 48:
					*uParam2 = 2457;
					break;
				
				case 49:
					*uParam2 = 2458;
					break;
				
				case 50:
					*uParam2 = 2459;
					break;
				
				case 51:
					*uParam2 = 2589;
					break;
				
				case 52:
					*uParam2 = 2590;
					break;
				
				case 53:
					*uParam2 = 2591;
					break;
				
				case 54:
					*uParam2 = 2592;
					break;
				
				case 55:
					*uParam2 = 2593;
					break;
				
				case 56:
					*uParam2 = 2594;
					break;
				
				case 57:
					*uParam2 = 2595;
					break;
				
				case 58:
					*uParam2 = 2596;
					break;
				
				case 59:
					*uParam2 = 2597;
					break;
				
				case 60:
					*uParam2 = 2598;
					break;
				
				case 61:
					*uParam2 = 2599;
					break;
				
				case 62:
					*uParam2 = 3191;
					break;
				
				case 63:
					*uParam2 = 3192;
					break;
				
				case 64:
					*uParam2 = 3193;
					break;
				
				case 65:
					*uParam2 = 3194;
					break;
				
				case 66:
					*uParam2 = 3195;
					break;
				
				case 67:
					*uParam2 = 3196;
					break;
				
				case 68:
					*uParam2 = 3668;
					break;
				
				case 69:
					*uParam2 = 3669;
					break;
				
				case 70:
					*uParam2 = 3670;
					break;
				
				case 71:
					*uParam2 = 3671;
					break;
				
				case 72:
					*uParam2 = 3672;
					break;
				
				case 73:
					*uParam2 = 3673;
					break;
				
				case 74:
					*uParam2 = 3674;
					break;
				
				case 75:
					*uParam2 = 3675;
					break;
				
				case 76:
					*uParam2 = 3676;
					break;
				
				case 77:
					*uParam2 = 3677;
					break;
				
				case 78:
					*uParam2 = 3783;
					break;
				
				case 79:
					*uParam2 = 3784;
					break;
				
				case 80:
					*uParam2 = 3785;
					break;
				
				case 81:
					*uParam2 = 3786;
					break;
				
				case 82:
					*uParam2 = 3787;
					break;
				
				case 83:
					*uParam2 = 3788;
					break;
				
				case 84:
					*uParam2 = 3789;
					break;
				
				case 85:
					*uParam2 = 3790;
					break;
				
				case 86:
					*uParam2 = 3888;
					break;
				
				case 87:
					*uParam2 = 3889;
					break;
				
				case 88:
					*uParam2 = 3890;
					break;
				
				case 89:
					*uParam2 = 5332;
					break;
				
				case 90:
					*uParam2 = 5333;
					break;
				
				case 91:
					*uParam2 = 5334;
					break;
				
				case 92:
					*uParam2 = 5335;
					break;
				
				case 93:
					*uParam2 = 5336;
					break;
				
				case 94:
					*uParam2 = 5337;
					break;
				
				case 95:
					*uParam2 = 5338;
					break;
				
				case 96:
					*uParam2 = 5339;
					break;
				
				case 97:
					*uParam2 = 5340;
					break;
				
				case 98:
					*uParam2 = 5341;
					break;
				
				case 99:
					*uParam2 = 5342;
					break;
				
				case 100:
					*uParam2 = 5343;
					break;
				
				case 101:
					*uParam2 = 5400;
					break;
				
				case 102:
					*uParam2 = 5401;
					break;
				
				case 103:
					*uParam2 = 5402;
					break;
				
				case 104:
					*uParam2 = 5403;
					break;
				
				case 105:
					*uParam2 = 5404;
					break;
				
				case 106:
					*uParam2 = 5405;
					break;
				
				case 107:
					*uParam2 = 5406;
					break;
				
				case 108:
					*uParam2 = 5407;
					break;
				
				case 109:
					*uParam2 = 5408;
					break;
				
				case 110:
					*uParam2 = 5409;
					break;
				
				case 111:
					*uParam2 = 5410;
					break;
				
				case 112:
					*uParam2 = 5411;
					break;
				
				case 113:
					*uParam2 = 5412;
					break;
				
				case 114:
					*uParam2 = 5413;
					break;
				
				case 115:
					*uParam2 = 5414;
					break;
				
				case 116:
					*uParam2 = 5415;
					break;
				
				case 117:
					*uParam2 = 5416;
					break;
				
				case 118:
					*uParam2 = 5417;
					break;
				
				case 119:
					*uParam2 = 5418;
					break;
				
				case 120:
					*uParam2 = 5419;
					break;
				
				case 121:
					*uParam2 = 5420;
					break;
				
				case 122:
					*uParam2 = 5421;
					break;
				
				case 123:
					*uParam2 = 5422;
					break;
				
				case 124:
					*uParam2 = 6120;
					break;
				
				case 125:
					*uParam2 = 6121;
					break;
				
				case 126:
					*uParam2 = 6122;
					break;
				
				case 127:
					*uParam2 = 6123;
					break;
				
				case 128:
					*uParam2 = 6124;
					break;
				
				case 129:
					*uParam2 = 6125;
					break;
				
				case 130:
					*uParam2 = 6126;
					break;
				
				case 131:
					*uParam2 = 6127;
					break;
				
				case 132:
					*uParam2 = 6128;
					break;
				
				case 133:
					*uParam2 = 6129;
					break;
				
				case 134:
					*uParam2 = 6130;
					break;
				
				case 135:
					*uParam2 = 6131;
					break;
				
				case 136:
					*uParam2 = 6132;
					break;
				
				case 137:
					*uParam2 = 6133;
					break;
				
				case 138:
					*uParam2 = 6134;
					break;
				
				case 139:
					*uParam2 = 6433;
					break;
				
				case 140:
					*uParam2 = 6434;
					break;
				
				case 141:
					*uParam2 = 6435;
					break;
				
				case 142:
					*uParam2 = 6436;
					break;
				
				case 143:
					*uParam2 = 6437;
					break;
				
				case 144:
					*uParam2 = 6438;
					break;
				
				case 145:
					*uParam2 = 6439;
					break;
				
				case 146:
					*uParam2 = 6440;
					break;
				
				case 147:
					*uParam2 = 6441;
					break;
				
				case 148:
					*uParam2 = 6442;
					break;
				
				case 149:
					*uParam2 = 6443;
					break;
				
				case 150:
					*uParam2 = 6444;
					break;
				
				case 151:
					*uParam2 = 6445;
					break;
				
				case 152:
					*uParam2 = 6446;
					break;
				
				case 153:
					*uParam2 = 6447;
					break;
				
				default:
					break;
			}
			break;
	}
	*uParam3 = (iVar0 % 32);
	return *uParam2 != 7872;
}

bool func_231(int iParam0)//Position - 0x15244
{
	return Global_35861 == iParam0;
}

int func_232(int iParam0)//Position - 0x15252
{
	switch (iParam0)
	{
		case -1:
			return 0;
			break;
		
		case 0:
			return 0;
			break;
		
		case 1:
			return 1;
			break;
		
		case 2:
			return 2;
			break;
		
		case 3:
			return 3;
			break;
		
		case 4:
			return 4;
			break;
		
		case 5:
			return 5;
			break;
		
		case 6:
			return 6;
			break;
		
		case 7:
			return 7;
			break;
		
		case 8:
			return 8;
			break;
		
		case 9:
			return 0;
			break;
		
		case 10:
			return 1;
			break;
		
		case 11:
			return 0;
			break;
		
		case 12:
			return 0;
			break;
		
		case 13:
			return 0;
			break;
	}
	return 0;
}

void func_233(int iParam0, int iParam1, int iParam2)//Position - 0x15326
{
	int iVar0;
	int iVar1;
	struct<8> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	struct<10> Var6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	struct<10> Var11;
	int iVar12;
	int iVar13;
	int iVar14;
	
	iVar0 = (iParam1 - iParam2);
	iVar0 = iVar0;
	if (iVar0 < 0)
	{
		return;
	}
	iVar1 = Global_70671[0 /*14*/].f_5;
	if (iParam0 == 12)
	{
		iVar4 = 0;
		iVar5 = unk_0x23A6BE673BD02B2D(iVar1, 0);
		iVar3 = 0;
		while (iVar3 < iVar5)
		{
			unk_0x54F960113E1CDCA9(iVar3, &Var2);
			if (!unk_0x42683C90F2D005ED(Var2))
			{
				if (iVar4 == (iParam1 - iParam2))
				{
					Global_2621444 = Var2.f_1;
					Global_2621445 = Var2;
					func_222(&(Global_70671[0 /*14*/]), iParam0, iParam1, &(Var2.f_7), 0, 0, Var2.f_2, 0, -1, 2, 1);
					return;
				}
				iVar4++;
			}
			iVar3++;
		}
	}
	else if (iParam0 == 13)
	{
		func_222(&(Global_70671[0 /*14*/]), iParam0, iParam1, "NO_LABEL", 0, 0, 0, 1, -1, 2, 1);
	}
	else if (iParam0 == 14)
	{
		unk_0x92C15BF999ED89EE(&Var6);
		iVar9 = 0;
		iVar10 = unk_0xB214E83F6B0D8129(iVar1, 6, -1, 1, -1, -1);
		iVar8 = 0;
		while (iVar8 < iVar10)
		{
			unk_0x53CE22B0EDFAB540(iVar8, &Var6);
			if (!unk_0x42683C90F2D005ED(Var6))
			{
				if (iVar9 == (iParam1 - iParam2))
				{
					if (Var6.f_6 == 0)
					{
						iVar7 = 9;
					}
					else if (Var6.f_6 == 1)
					{
						iVar7 = 10;
					}
					else if (Var6.f_6 == 2)
					{
						iVar7 = 2;
					}
					else if (Var6.f_6 == 3)
					{
						iVar7 = 3;
					}
					else if (Var6.f_6 == 4)
					{
						iVar7 = 4;
					}
					else if (Var6.f_6 == 5)
					{
						iVar7 = 5;
					}
					else if (Var6.f_6 == 6)
					{
						iVar7 = 6;
					}
					else if (Var6.f_6 == 7)
					{
						iVar7 = 7;
					}
					else if (Var6.f_6 == 8)
					{
						iVar7 = 8;
					}
					else
					{
						iVar7 = -1;
					}
					Global_2621444 = Var6.f_1;
					Global_2621445 = Var6;
					func_222(&(Global_70671[0 /*14*/]), iParam0, iParam1, &(Var6.f_9), Var6.f_3, Var6.f_4, Var6.f_5, unk_0x6C297174CFC8C5B2(Var6.f_1, -2050632586, 0), iVar7, 2, Var6.f_1 != 0);
					return;
				}
				iVar9++;
			}
			iVar8++;
		}
	}
	else
	{
		unk_0x74B493EE892897A5(&Var11);
		iVar13 = 0;
		iVar14 = unk_0xB214E83F6B0D8129(iVar1, 6, -1, 0, -1, func_234(iParam0));
		iVar12 = 0;
		while (iVar12 < iVar14)
		{
			unk_0x19002A6D4CBCE1E2(iVar12, &Var11);
			if (!unk_0x42683C90F2D005ED(Var11))
			{
				if (iVar13 == (iParam1 - iParam2))
				{
					Global_2621444 = Var11.f_1;
					Global_2621445 = Var11;
					func_222(&(Global_70671[0 /*14*/]), iParam0, iParam1, &(Var11.f_9), Var11.f_3, Var11.f_4, Var11.f_5, unk_0x6C297174CFC8C5B2(Var11.f_1, -2050632586, 0), -1, 2, Var11.f_1 != 0);
					return;
				}
				iVar13++;
			}
			iVar12++;
		}
	}
}

int func_234(int iParam0)//Position - 0x155A1
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 2:
			return 2;
			break;
		
		case 3:
			return 3;
			break;
		
		case 4:
			return 4;
			break;
		
		case 6:
			return 6;
			break;
		
		case 5:
			return 5;
			break;
		
		case 8:
			return 8;
			break;
		
		case 9:
			return 9;
			break;
		
		case 10:
			return 10;
			break;
		
		case 1:
			return 1;
			break;
		
		case 7:
			return 7;
			break;
		
		case 11:
			return 11;
			break;
	}
	return 0;
}

void func_235(int iParam0)//Position - 0x15651
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 13;
	Global_70671[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		default:
			func_233(iVar7, iParam0, 9);
			return;
			break;
	}
	func_222(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_236(int iParam0)//Position - 0x157A7
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 12;
	Global_70671[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "OUTFIT_P2_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "OUTFIT_P2_5", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "OUTFIT_P2_6", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "OUTFIT_P2_7", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "OUTFIT_P2_8", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "OUTFIT_P2_9", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "OUTFIT_P2_10", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "OUTFIT_P2_12", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 9:
			StringCopy(&Var2, "OUTFIT_P2_13", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 10:
			StringCopy(&Var2, "OUTFIT_P2_14", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "OUTFIT_P2_15", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 12:
			StringCopy(&Var2, "OUTFIT_P2_16", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "OUTFIT_P2_17", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 14:
			StringCopy(&Var2, "OUTFIT_P2_18", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 10000;
			break;
		
		case 15:
			StringCopy(&Var2, "OUTFIT_P2_19", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "OUTFIT_P2_20", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "OUTFIT_P2_21", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 105;
			break;
		
		case 18:
			StringCopy(&Var2, "OUTFIT_P2_22", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 105;
			break;
		
		case 19:
			StringCopy(&Var2, "OUTFIT_P2_23", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 105;
			break;
		
		case 20:
			StringCopy(&Var2, "OUTFIT_P2_24", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 21:
			StringCopy(&Var2, "OUTFIT_P2_25", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "OUTFIT_P2_26", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 23:
			StringCopy(&Var2, "OUTFIT_P2_27", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 24:
			StringCopy(&Var2, "OUTFIT_P2_28", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 119;
			break;
		
		case 25:
			StringCopy(&Var2, "OUTFIT_P2_29", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 99;
			break;
		
		case 26:
			StringCopy(&Var2, "OUTFIT_P2_30", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 129;
			break;
		
		case 27:
			StringCopy(&Var2, "OUTFIT_P2_44", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 125;
			break;
		
		case 28:
			StringCopy(&Var2, "OUTFIT_P2_45", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 120;
			break;
		
		case 29:
			StringCopy(&Var2, "OUTFIT_P2_46", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 139;
			break;
		
		case 30:
			StringCopy(&Var2, "OUTFIT_P2_47", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 149;
			break;
		
		case 31:
			StringCopy(&Var2, "OUTFIT_P2_48", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 145;
			break;
		
		case 32:
			StringCopy(&Var2, "OUTFIT_P2_49", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 140;
			break;
		
		case 33:
			StringCopy(&Var2, "OUTFIT_P2_50", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 135;
			break;
		
		case 34:
			StringCopy(&Var2, "OUTFIT_P2_31", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4900;
			break;
		
		case 35:
			StringCopy(&Var2, "OUTFIT_P2_32", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5900;
			break;
		
		case 36:
			StringCopy(&Var2, "OUTFIT_P2_33", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4500;
			break;
		
		case 37:
			StringCopy(&Var2, "OUTFIT_P2_34", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4900;
			break;
		
		case 38:
			StringCopy(&Var2, "OUTFIT_P2_35", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4500;
			break;
		
		case 39:
			StringCopy(&Var2, "OUTFIT_P2_36", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5900;
			break;
		
		case 40:
			StringCopy(&Var2, "OUTFIT_P2_37", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5500;
			break;
		
		case 41:
			StringCopy(&Var2, "OUTFIT_P2_38", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 42:
			StringCopy(&Var2, "OUTFIT_P2_39", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 43:
			StringCopy(&Var2, "OUTFIT_P2_40", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "OUTFIT_P2_41", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "OUTFIT_P2_42", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 46:
			StringCopy(&Var2, "OUTFIT_P2_43", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 47:
			StringCopy(&Var2, "OUTFIT_P2_12", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		default:
			func_233(iVar7, iParam0, 48);
			return;
			break;
	}
	func_222(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_237(int iParam0)//Position - 0x15CB4
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 11;
	Global_70671[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		default:
			func_233(iVar7, iParam0, 1);
			return;
			break;
	}
	func_222(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_238(int iParam0)//Position - 0x15D28
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 7;
	Global_70671[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		default:
			func_233(iVar7, iParam0, 1);
			return;
			break;
	}
	func_222(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_239(int iParam0)//Position - 0x15D9B
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 1;
	Global_70671[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "BERD_P2_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "BERD_P2_1_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "BERD_P2_2_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "BERD_P2_3_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "BERD_P2_4_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "BERD_P2_5_0", 16);
			iVar3 = 5;
			iVar4 = 0;
			break;
		
		default:
			func_233(iVar7, iParam0, 6);
			return;
			break;
	}
	func_222(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_240(int iParam0)//Position - 0x15E81
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 10;
	Global_70671[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 1;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 2;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 3;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 4;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 5;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 1;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 2;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 3;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 4;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 5;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 6;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 7;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 8;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 9;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 1;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 2;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 3;
			break;
		
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 4;
			break;
		
		case 27:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 5;
			break;
		
		case 28:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 6;
			break;
		
		case 29:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 1;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 2;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 3;
			break;
		
		default:
			func_233(iVar7, iParam0, 33);
			return;
			break;
	}
	func_222(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_241(int iParam0)//Position - 0x161E3
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 9;
	Global_70671[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 1;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 2;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 3;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "SPEC2_P0_08_0", 16);
			iVar3 = 6;
			iVar4 = 0;
			iVar1 = 125;
			break;
		
		case 10:
			StringCopy(&Var2, "SPEC2_P0_08_1", 16);
			iVar3 = 6;
			iVar4 = 1;
			iVar1 = 150;
			break;
		
		case 11:
			StringCopy(&Var2, "SPEC2_P0_08_2", 16);
			iVar3 = 6;
			iVar4 = 2;
			iVar1 = 175;
			break;
		
		case 12:
			StringCopy(&Var2, "SPEC2_P0_08_3", 16);
			iVar3 = 6;
			iVar4 = 3;
			iVar1 = 85;
			break;
		
		case 13:
			StringCopy(&Var2, "SPEC2_P0_08_4", 16);
			iVar3 = 6;
			iVar4 = 4;
			iVar1 = 150;
			break;
		
		case 14:
			StringCopy(&Var2, "SPEC2_P0_08_5", 16);
			iVar3 = 6;
			iVar4 = 5;
			iVar1 = 175;
			break;
		
		case 15:
			StringCopy(&Var2, "PROPS_P1_H8_0", 16);
			iVar3 = 7;
			iVar4 = 0;
			iVar1 = 270;
			break;
		
		case 16:
			StringCopy(&Var2, "PROPS_P1_H8_1", 16);
			iVar3 = 7;
			iVar4 = 1;
			iVar1 = 270;
			break;
		
		default:
			func_233(iVar7, iParam0, 17);
			return;
			break;
	}
	func_222(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_242(int iParam0)//Position - 0x163F3
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 8;
	Global_70671[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "SPEC_P2_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "SPEC_P2_0_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 13;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 14;
			iVar4 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 15;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 16;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		default:
			func_233(iVar7, iParam0, 18);
			return;
			break;
	}
	func_222(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_243(int iParam0)//Position - 0x16622
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 5;
	Global_70671[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		default:
			func_233(iVar7, iParam0, 7);
			return;
			break;
	}
	func_222(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_244(int iParam0)//Position - 0x16731
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 6;
	Global_70671[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "FEET_P2_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "FEET_P2_0_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			iVar1 = 22;
			break;
		
		case 2:
			StringCopy(&Var2, "FEET_P2_0_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 45;
			break;
		
		case 3:
			StringCopy(&Var2, "FEET_P2_0_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 65;
			break;
		
		case 4:
			StringCopy(&Var2, "FEET_P2_0_4", 16);
			iVar3 = 0;
			iVar4 = 4;
			iVar1 = 58;
			break;
		
		case 5:
			StringCopy(&Var2, "FEET_P2_0_5", 16);
			iVar3 = 0;
			iVar4 = 5;
			iVar1 = 72;
			break;
		
		case 6:
			StringCopy(&Var2, "FEET_P2_0_6", 16);
			iVar3 = 0;
			iVar4 = 6;
			iVar1 = 68;
			break;
		
		case 7:
			StringCopy(&Var2, "FEET_P2_0_7", 16);
			iVar3 = 0;
			iVar4 = 7;
			iVar1 = 60;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "FEET_P2_5_0", 16);
			iVar3 = 5;
			iVar4 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "FEET_P2_8_0", 16);
			iVar3 = 8;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "FEET_P2_9_0", 16);
			iVar3 = 9;
			iVar4 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "FEET_P2_9_1", 16);
			iVar3 = 9;
			iVar4 = 1;
			iVar1 = 680;
			break;
		
		case 18:
			StringCopy(&Var2, "FEET_P2_9_2", 16);
			iVar3 = 9;
			iVar4 = 2;
			iVar1 = 650;
			break;
		
		case 19:
			StringCopy(&Var2, "FEET_P2_9_3", 16);
			iVar3 = 9;
			iVar4 = 3;
			iVar1 = 670;
			break;
		
		case 20:
			StringCopy(&Var2, "FEET_P2_9_4", 16);
			iVar3 = 9;
			iVar4 = 4;
			iVar1 = 700;
			break;
		
		case 21:
			StringCopy(&Var2, "FEET_P2_9_5", 16);
			iVar3 = 9;
			iVar4 = 5;
			iVar1 = 680;
			break;
		
		case 22:
			StringCopy(&Var2, "FEET_P2_9_6", 16);
			iVar3 = 9;
			iVar4 = 6;
			iVar1 = 720;
			break;
		
		case 23:
			StringCopy(&Var2, "FEET_P2_9_7", 16);
			iVar3 = 9;
			iVar4 = 7;
			iVar1 = 740;
			break;
		
		case 24:
			StringCopy(&Var2, "FEET_P2_9_8", 16);
			iVar3 = 9;
			iVar4 = 8;
			iVar1 = 760;
			break;
		
		case 25:
			StringCopy(&Var2, "FEET_P2_9_9", 16);
			iVar3 = 9;
			iVar4 = 9;
			iVar1 = 780;
			break;
		
		case 26:
			StringCopy(&Var2, "FEET_P2_9_10", 16);
			iVar3 = 9;
			iVar4 = 10;
			iVar1 = 750;
			break;
		
		case 27:
			StringCopy(&Var2, "FEET_P2_9_11", 16);
			iVar3 = 9;
			iVar4 = 11;
			iVar1 = 700;
			break;
		
		case 28:
			StringCopy(&Var2, "FEET_P2_10_0", 16);
			iVar3 = 10;
			iVar4 = 0;
			break;
		
		case 29:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 13;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 14;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 15;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 16;
			iVar4 = 0;
			break;
		
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 17;
			iVar4 = 0;
			break;
		
		case 36:
			StringCopy(&Var2, "FEET_P2_18_0", 16);
			iVar3 = 18;
			iVar4 = 0;
			iVar1 = 790;
			break;
		
		case 37:
			StringCopy(&Var2, "FEET_P2_18_1", 16);
			iVar3 = 18;
			iVar4 = 1;
			iVar1 = 750;
			break;
		
		case 38:
			StringCopy(&Var2, "FEET_P2_18_2", 16);
			iVar3 = 18;
			iVar4 = 2;
			iVar1 = 860;
			break;
		
		case 39:
			StringCopy(&Var2, "FEET_P2_18_3", 16);
			iVar3 = 18;
			iVar4 = 3;
			iVar1 = 750;
			break;
		
		case 40:
			StringCopy(&Var2, "FEET_P2_18_4", 16);
			iVar3 = 18;
			iVar4 = 4;
			iVar1 = 790;
			break;
		
		case 41:
			StringCopy(&Var2, "FEET_P2_18_5", 16);
			iVar3 = 18;
			iVar4 = 5;
			iVar1 = 840;
			break;
		
		case 42:
			StringCopy(&Var2, "FEET_P2_18_6", 16);
			iVar3 = 18;
			iVar4 = 6;
			iVar1 = 820;
			break;
		
		case 43:
			StringCopy(&Var2, "FEET_P2_18_7", 16);
			iVar3 = 18;
			iVar4 = 7;
			iVar1 = 800;
			break;
		
		case 44:
			StringCopy(&Var2, "FEET_P2_18_8", 16);
			iVar3 = 18;
			iVar4 = 8;
			iVar1 = 850;
			break;
		
		case 45:
			StringCopy(&Var2, "FEET_P2_18_9", 16);
			iVar3 = 18;
			iVar4 = 9;
			iVar1 = 870;
			break;
		
		case 46:
			StringCopy(&Var2, "FEET_P2_18_10", 16);
			iVar3 = 18;
			iVar4 = 10;
			iVar1 = 720;
			break;
		
		case 47:
			StringCopy(&Var2, "FEET_P2_18_11", 16);
			iVar3 = 18;
			iVar4 = 11;
			iVar1 = 740;
			break;
		
		case 48:
			StringCopy(&Var2, "FEET_P2_18_12", 16);
			iVar3 = 18;
			iVar4 = 12;
			iVar1 = 800;
			break;
		
		case 49:
			StringCopy(&Var2, "FEET_P2_18_13", 16);
			iVar3 = 18;
			iVar4 = 13;
			iVar1 = 750;
			break;
		
		case 50:
			StringCopy(&Var2, "FEET_P2_18_14", 16);
			iVar3 = 18;
			iVar4 = 14;
			iVar1 = 770;
			break;
		
		case 51:
			StringCopy(&Var2, "FEET_P2_18_15", 16);
			iVar3 = 18;
			iVar4 = 15;
			iVar1 = 860;
			break;
		
		case 52:
			StringCopy(&Var2, "FEET_P2_19_0", 16);
			iVar3 = 19;
			iVar4 = 0;
			iVar1 = 850;
			break;
		
		case 53:
			StringCopy(&Var2, "FEET_P2_19_1", 16);
			iVar3 = 19;
			iVar4 = 1;
			iVar1 = 800;
			break;
		
		case 54:
			StringCopy(&Var2, "FEET_P2_19_2", 16);
			iVar3 = 19;
			iVar4 = 2;
			iVar1 = 780;
			break;
		
		case 55:
			StringCopy(&Var2, "FEET_P2_19_3", 16);
			iVar3 = 19;
			iVar4 = 3;
			iVar1 = 890;
			break;
		
		case 56:
			StringCopy(&Var2, "FEET_P2_19_4", 16);
			iVar3 = 19;
			iVar4 = 4;
			iVar1 = 820;
			break;
		
		case 57:
			StringCopy(&Var2, "FEET_P2_19_5", 16);
			iVar3 = 19;
			iVar4 = 5;
			iVar1 = 840;
			break;
		
		case 58:
			StringCopy(&Var2, "FEET_P2_19_6", 16);
			iVar3 = 19;
			iVar4 = 6;
			iVar1 = 870;
			break;
		
		case 59:
			StringCopy(&Var2, "FEET_P2_19_7", 16);
			iVar3 = 19;
			iVar4 = 7;
			iVar1 = 930;
			break;
		
		case 60:
			StringCopy(&Var2, "FEET_P2_19_8", 16);
			iVar3 = 19;
			iVar4 = 8;
			iVar1 = 880;
			break;
		
		case 61:
			StringCopy(&Var2, "FEET_P2_19_9", 16);
			iVar3 = 19;
			iVar4 = 9;
			iVar1 = 900;
			break;
		
		case 62:
			StringCopy(&Var2, "FEET_P2_19_10", 16);
			iVar3 = 19;
			iVar4 = 10;
			iVar1 = 920;
			break;
		
		case 63:
			StringCopy(&Var2, "FEET_P2_19_11", 16);
			iVar3 = 19;
			iVar4 = 11;
			iVar1 = 970;
			break;
		
		case 64:
			StringCopy(&Var2, "FEET_P2_19_12", 16);
			iVar3 = 19;
			iVar4 = 12;
			iVar1 = 990;
			break;
		
		case 65:
			StringCopy(&Var2, "FEET_P2_19_13", 16);
			iVar3 = 19;
			iVar4 = 13;
			iVar1 = 960;
			break;
		
		case 66:
			StringCopy(&Var2, "FEET_P2_19_14", 16);
			iVar3 = 19;
			iVar4 = 14;
			iVar1 = 980;
			break;
		
		case 67:
			StringCopy(&Var2, "FEET_P2_19_15", 16);
			iVar3 = 19;
			iVar4 = 15;
			iVar1 = 950;
			break;
		
		case 68:
			StringCopy(&Var2, "FEET_P2_20_0", 16);
			iVar3 = 20;
			iVar4 = 0;
			iVar1 = 110;
			break;
		
		case 69:
			StringCopy(&Var2, "FEET_P2_20_1", 16);
			iVar3 = 20;
			iVar4 = 1;
			iVar1 = 115;
			break;
		
		case 70:
			StringCopy(&Var2, "FEET_P2_20_2", 16);
			iVar3 = 20;
			iVar4 = 2;
			iVar1 = 120;
			break;
		
		case 71:
			StringCopy(&Var2, "FEET_P2_20_3", 16);
			iVar3 = 20;
			iVar4 = 3;
			iVar1 = 110;
			break;
		
		case 72:
			StringCopy(&Var2, "FEET_P2_20_4", 16);
			iVar3 = 20;
			iVar4 = 4;
			iVar1 = 125;
			break;
		
		case 73:
			StringCopy(&Var2, "FEET_P2_20_5", 16);
			iVar3 = 20;
			iVar4 = 5;
			iVar1 = 128;
			break;
		
		case 74:
			StringCopy(&Var2, "FEET_P2_20_6", 16);
			iVar3 = 20;
			iVar4 = 6;
			iVar1 = 135;
			break;
		
		case 75:
			StringCopy(&Var2, "FEET_P2_20_7", 16);
			iVar3 = 20;
			iVar4 = 7;
			iVar1 = 130;
			break;
		
		case 76:
			StringCopy(&Var2, "FEET_P2_20_8", 16);
			iVar3 = 20;
			iVar4 = 8;
			iVar1 = 145;
			break;
		
		case 77:
			StringCopy(&Var2, "FEET_P2_20_9", 16);
			iVar3 = 20;
			iVar4 = 9;
			iVar1 = 110;
			break;
		
		case 78:
			StringCopy(&Var2, "FEET_P2_20_10", 16);
			iVar3 = 20;
			iVar4 = 10;
			iVar1 = 120;
			break;
		
		case 79:
			StringCopy(&Var2, "FEET_P2_20_11", 16);
			iVar3 = 20;
			iVar4 = 11;
			iVar1 = 150;
			break;
		
		case 80:
			StringCopy(&Var2, "FEET_P2_20_12", 16);
			iVar3 = 20;
			iVar4 = 12;
			iVar1 = 125;
			break;
		
		case 81:
			StringCopy(&Var2, "FEET_P2_20_13", 16);
			iVar3 = 20;
			iVar4 = 13;
			iVar1 = 120;
			break;
		
		case 82:
			StringCopy(&Var2, "FEET_P2_20_14", 16);
			iVar3 = 20;
			iVar4 = 14;
			iVar1 = 130;
			break;
		
		case 83:
			StringCopy(&Var2, "FEET_P2_20_15", 16);
			iVar3 = 20;
			iVar4 = 15;
			iVar1 = 110;
			break;
		
		default:
			func_233(iVar7, iParam0, 84);
			return;
			break;
	}
	func_222(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_245(int iParam0)//Position - 0x170CF
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 4;
	Global_70671[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "LEGS_P2_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "LEGS_P2_0_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			iVar1 = 95;
			break;
		
		case 2:
			StringCopy(&Var2, "LEGS_P2_0_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 129;
			break;
		
		case 3:
			StringCopy(&Var2, "LEGS_P2_0_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 115;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 2;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 3;
			bVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 4;
			bVar0 = true;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 18:
			StringCopy(&Var2, "LEGS_P2_11_0", 16);
			iVar3 = 11;
			iVar4 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "LEGS_P2_11_1", 16);
			iVar3 = 11;
			iVar4 = 1;
			iVar1 = 750;
			break;
		
		case 20:
			StringCopy(&Var2, "LEGS_P2_11_2", 16);
			iVar3 = 11;
			iVar4 = 2;
			iVar1 = 650;
			break;
		
		case 21:
			StringCopy(&Var2, "LEGS_P2_11_3", 16);
			iVar3 = 11;
			iVar4 = 3;
			iVar1 = 850;
			break;
		
		case 22:
			StringCopy(&Var2, "LEGS_P2_11_4", 16);
			iVar3 = 11;
			iVar4 = 4;
			iVar1 = 850;
			break;
		
		case 23:
			StringCopy(&Var2, "LEGS_P2_11_5", 16);
			iVar3 = 11;
			iVar4 = 5;
			iVar1 = 750;
			break;
		
		case 24:
			StringCopy(&Var2, "LEGS_P2_11_6", 16);
			iVar3 = 11;
			iVar4 = 6;
			iVar1 = 690;
			break;
		
		case 25:
			StringCopy(&Var2, "LEGS_P2_11_7", 16);
			iVar3 = 11;
			iVar4 = 7;
			iVar1 = 820;
			break;
		
		case 26:
			StringCopy(&Var2, "LEGS_P2_11_8", 16);
			iVar3 = 11;
			iVar4 = 8;
			iVar1 = 650;
			break;
		
		case 27:
			StringCopy(&Var2, "LEGS_P2_11_9", 16);
			iVar3 = 11;
			iVar4 = 9;
			iVar1 = 690;
			break;
		
		case 28:
			StringCopy(&Var2, "LEGS_P2_11_10", 16);
			iVar3 = 11;
			iVar4 = 10;
			iVar1 = 690;
			break;
		
		case 29:
			StringCopy(&Var2, "LEGS_P2_11_11", 16);
			iVar3 = 11;
			iVar4 = 11;
			iVar1 = 820;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 13;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 32:
			StringCopy(&Var2, "LEGS_P2_14_0", 16);
			iVar3 = 14;
			iVar4 = 0;
			break;
		
		case 33:
			StringCopy(&Var2, "LEGS_P2_15_0", 16);
			iVar3 = 15;
			iVar4 = 0;
			break;
		
		case 34:
			StringCopy(&Var2, "LEGS_P2_16_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 35:
			StringCopy(&Var2, "LEGS_P2_17_0", 16);
			iVar3 = 17;
			iVar4 = 0;
			iVar1 = 58;
			break;
		
		case 36:
			StringCopy(&Var2, "LEGS_P2_17_1", 16);
			iVar3 = 17;
			iVar4 = 1;
			iVar1 = 68;
			break;
		
		case 37:
			StringCopy(&Var2, "LEGS_P2_17_2", 16);
			iVar3 = 17;
			iVar4 = 2;
			iVar1 = 65;
			break;
		
		case 38:
			StringCopy(&Var2, "LEGS_P2_17_3", 16);
			iVar3 = 17;
			iVar4 = 3;
			iVar1 = 60;
			break;
		
		case 39:
			StringCopy(&Var2, "LEGS_P2_17_4", 16);
			iVar3 = 17;
			iVar4 = 4;
			iVar1 = 65;
			break;
		
		case 40:
			StringCopy(&Var2, "LEGS_P2_17_5", 16);
			iVar3 = 17;
			iVar4 = 5;
			iVar1 = 63;
			break;
		
		case 41:
			StringCopy(&Var2, "LEGS_P2_17_6", 16);
			iVar3 = 17;
			iVar4 = 6;
			iVar1 = 60;
			break;
		
		case 42:
			StringCopy(&Var2, "LEGS_P2_17_7", 16);
			iVar3 = 17;
			iVar4 = 7;
			iVar1 = 58;
			break;
		
		case 43:
			StringCopy(&Var2, "LEGS_P2_18_0", 16);
			iVar3 = 18;
			iVar4 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "LEGS_P2_18_1", 16);
			iVar3 = 18;
			iVar4 = 1;
			break;
		
		case 45:
			StringCopy(&Var2, "LEGS_P2_18_2", 16);
			iVar3 = 18;
			iVar4 = 2;
			iVar1 = 99;
			break;
		
		case 46:
			StringCopy(&Var2, "LEGS_P2_18_3", 16);
			iVar3 = 18;
			iVar4 = 3;
			iVar1 = 105;
			break;
		
		case 47:
			StringCopy(&Var2, "LEGS_P2_18_4", 16);
			iVar3 = 18;
			iVar4 = 4;
			iVar1 = 110;
			break;
		
		case 48:
			StringCopy(&Var2, "LEGS_P2_18_5", 16);
			iVar3 = 18;
			iVar4 = 5;
			iVar1 = 110;
			break;
		
		case 49:
			StringCopy(&Var2, "LEGS_P2_18_6", 16);
			iVar3 = 18;
			iVar4 = 6;
			iVar1 = 99;
			break;
		
		case 50:
			StringCopy(&Var2, "LEGS_P2_18_7", 16);
			iVar3 = 18;
			iVar4 = 7;
			iVar1 = 110;
			break;
		
		case 51:
			StringCopy(&Var2, "LEGS_P2_18_8", 16);
			iVar3 = 18;
			iVar4 = 8;
			iVar1 = 110;
			break;
		
		case 52:
			StringCopy(&Var2, "LEGS_P2_18_9", 16);
			iVar3 = 18;
			iVar4 = 9;
			iVar1 = 105;
			break;
		
		case 53:
			StringCopy(&Var2, "LEGS_P2_18_10", 16);
			iVar3 = 18;
			iVar4 = 10;
			iVar1 = 105;
			break;
		
		case 54:
			StringCopy(&Var2, "LEGS_P2_19_0", 16);
			iVar3 = 19;
			iVar4 = 0;
			iVar1 = 15;
			break;
		
		case 55:
			StringCopy(&Var2, "LEGS_P2_19_1", 16);
			iVar3 = 19;
			iVar4 = 1;
			iVar1 = 15;
			break;
		
		case 56:
			StringCopy(&Var2, "LEGS_P2_19_2", 16);
			iVar3 = 19;
			iVar4 = 2;
			iVar1 = 15;
			break;
		
		case 57:
			StringCopy(&Var2, "LEGS_P2_19_3", 16);
			iVar3 = 19;
			iVar4 = 3;
			iVar1 = 15;
			break;
		
		case 58:
			StringCopy(&Var2, "LEGS_P2_19_4", 16);
			iVar3 = 19;
			iVar4 = 4;
			iVar1 = 15;
			break;
		
		case 59:
			StringCopy(&Var2, "LEGS_P2_19_5", 16);
			iVar3 = 19;
			iVar4 = 5;
			iVar1 = 15;
			break;
		
		case 60:
			StringCopy(&Var2, "LEGS_P2_19_6", 16);
			iVar3 = 19;
			iVar4 = 6;
			iVar1 = 15;
			break;
		
		case 61:
			StringCopy(&Var2, "LEGS_P2_19_7", 16);
			iVar3 = 19;
			iVar4 = 7;
			iVar1 = 15;
			break;
		
		case 62:
			StringCopy(&Var2, "LEGS_P2_20_0", 16);
			iVar3 = 20;
			iVar4 = 0;
			iVar1 = 600;
			break;
		
		case 63:
			StringCopy(&Var2, "LEGS_P2_20_1", 16);
			iVar3 = 20;
			iVar4 = 1;
			iVar1 = 600;
			break;
		
		case 64:
			StringCopy(&Var2, "LEGS_P2_20_2", 16);
			iVar3 = 20;
			iVar4 = 2;
			iVar1 = 600;
			break;
		
		case 65:
			StringCopy(&Var2, "LEGS_P2_20_3", 16);
			iVar3 = 20;
			iVar4 = 3;
			iVar1 = 600;
			break;
		
		case 66:
			StringCopy(&Var2, "LEGS_P2_20_4", 16);
			iVar3 = 20;
			iVar4 = 4;
			iVar1 = 600;
			break;
		
		case 67:
			StringCopy(&Var2, "LEGS_P2_20_5", 16);
			iVar3 = 20;
			iVar4 = 5;
			iVar1 = 600;
			break;
		
		case 68:
			StringCopy(&Var2, "LEGS_P2_20_6", 16);
			iVar3 = 20;
			iVar4 = 6;
			iVar1 = 600;
			break;
		
		case 69:
			StringCopy(&Var2, "LEGS_P2_20_7", 16);
			iVar3 = 20;
			iVar4 = 7;
			iVar1 = 600;
			break;
		
		case 70:
			StringCopy(&Var2, "LEGS_P2_20_8", 16);
			iVar3 = 20;
			iVar4 = 8;
			iVar1 = 600;
			break;
		
		case 71:
			StringCopy(&Var2, "LEGS_P2_21_0", 16);
			iVar3 = 21;
			iVar4 = 0;
			iVar1 = 80;
			break;
		
		case 72:
			StringCopy(&Var2, "LEGS_P2_21_1", 16);
			iVar3 = 21;
			iVar4 = 1;
			iVar1 = 80;
			break;
		
		case 73:
			StringCopy(&Var2, "LEGS_P2_21_2", 16);
			iVar3 = 21;
			iVar4 = 2;
			iVar1 = 80;
			break;
		
		case 74:
			StringCopy(&Var2, "LEGS_P2_21_3", 16);
			iVar3 = 21;
			iVar4 = 3;
			iVar1 = 80;
			break;
		
		case 75:
			StringCopy(&Var2, "LEGS_P2_21_4", 16);
			iVar3 = 21;
			iVar4 = 4;
			iVar1 = 80;
			break;
		
		case 76:
			StringCopy(&Var2, "LEGS_P2_21_5", 16);
			iVar3 = 21;
			iVar4 = 5;
			iVar1 = 80;
			break;
		
		case 77:
			StringCopy(&Var2, "LEGS_P2_21_6", 16);
			iVar3 = 21;
			iVar4 = 6;
			iVar1 = 80;
			break;
		
		case 78:
			StringCopy(&Var2, "LEGS_P2_21_7", 16);
			iVar3 = 21;
			iVar4 = 7;
			iVar1 = 80;
			break;
		
		case 79:
			StringCopy(&Var2, "LEGS_P2_21_8", 16);
			iVar3 = 21;
			iVar4 = 8;
			iVar1 = 80;
			break;
		
		case 80:
			StringCopy(&Var2, "LEGS_P2_21_9", 16);
			iVar3 = 21;
			iVar4 = 9;
			iVar1 = 80;
			break;
		
		case 81:
			StringCopy(&Var2, "LEGS_P2_22_0", 16);
			iVar3 = 22;
			iVar4 = 0;
			break;
		
		case 82:
			StringCopy(&Var2, "LEGS_P2_22_1", 16);
			iVar3 = 22;
			iVar4 = 1;
			iVar1 = 12;
			break;
		
		case 83:
			StringCopy(&Var2, "LEGS_P2_22_2", 16);
			iVar3 = 22;
			iVar4 = 2;
			iVar1 = 12;
			break;
		
		case 84:
			StringCopy(&Var2, "LEGS_P2_22_3", 16);
			iVar3 = 22;
			iVar4 = 3;
			iVar1 = 22;
			break;
		
		case 85:
			StringCopy(&Var2, "LEGS_P2_22_4", 16);
			iVar3 = 22;
			iVar4 = 4;
			iVar1 = 18;
			break;
		
		case 86:
			StringCopy(&Var2, "LEGS_P2_22_5", 16);
			iVar3 = 22;
			iVar4 = 5;
			iVar1 = 20;
			break;
		
		case 87:
			StringCopy(&Var2, "LEGS_P2_22_6", 16);
			iVar3 = 22;
			iVar4 = 6;
			iVar1 = 30;
			break;
		
		case 88:
			StringCopy(&Var2, "LEGS_P2_22_7", 16);
			iVar3 = 22;
			iVar4 = 7;
			iVar1 = 30;
			break;
		
		case 89:
			StringCopy(&Var2, "LEGS_P2_22_8", 16);
			iVar3 = 22;
			iVar4 = 8;
			iVar1 = 30;
			break;
		
		case 90:
			StringCopy(&Var2, "LEGS_P2_22_9", 16);
			iVar3 = 22;
			iVar4 = 9;
			iVar1 = 30;
			break;
		
		case 91:
			StringCopy(&Var2, "LEGS_P2_23_0", 16);
			iVar3 = 23;
			iVar4 = 0;
			break;
		
		case 92:
			StringCopy(&Var2, "LEGS_P2_24_0", 16);
			iVar3 = 24;
			iVar4 = 0;
			break;
		
		case 93:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 25;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 94:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 0;
			break;
		
		case 95:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 1;
			break;
		
		case 96:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 2;
			break;
		
		case 97:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 3;
			break;
		
		case 98:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 4;
			break;
		
		case 99:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 5;
			break;
		
		case 100:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 6;
			break;
		
		case 101:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 7;
			break;
		
		case 102:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 8;
			break;
		
		case 103:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 9;
			break;
		
		default:
			func_233(iVar7, iParam0, 104);
			return;
			break;
	}
	func_222(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_246(int iParam0)//Position - 0x17C41
{
	if (iParam0 < 136)
	{
		func_248(iParam0);
	}
	else
	{
		func_247(iParam0);
	}
	if (Global_70671[0 /*14*/].f_2 == -1)
	{
		func_233(3, iParam0, 242);
	}
}

void func_247(int iParam0)//Position - 0x17C75
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 3;
	Global_70671[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 136:
			StringCopy(&Var2, "TORSO_P2_21_0", 16);
			iVar3 = 21;
			iVar4 = 0;
			iVar1 = 32;
			break;
		
		case 137:
			StringCopy(&Var2, "TORSO_P2_21_1", 16);
			iVar3 = 21;
			iVar4 = 1;
			iVar1 = 39;
			break;
		
		case 138:
			StringCopy(&Var2, "TORSO_P2_21_2", 16);
			iVar3 = 21;
			iVar4 = 2;
			iVar1 = 40;
			break;
		
		case 139:
			StringCopy(&Var2, "TORSO_P2_21_3", 16);
			iVar3 = 21;
			iVar4 = 3;
			iVar1 = 42;
			break;
		
		case 140:
			StringCopy(&Var2, "TORSO_P2_21_4", 16);
			iVar3 = 21;
			iVar4 = 4;
			iVar1 = 45;
			break;
		
		case 141:
			StringCopy(&Var2, "TORSO_P2_21_5", 16);
			iVar3 = 21;
			iVar4 = 5;
			iVar1 = 48;
			break;
		
		case 142:
			StringCopy(&Var2, "TORSO_P2_21_6", 16);
			iVar3 = 21;
			iVar4 = 6;
			iVar1 = 52;
			break;
		
		case 143:
			StringCopy(&Var2, "TORSO_P2_21_7", 16);
			iVar3 = 21;
			iVar4 = 7;
			iVar1 = 55;
			break;
		
		case 144:
			StringCopy(&Var2, "TORSO_P2_22_0", 16);
			iVar3 = 22;
			iVar4 = 0;
			iVar1 = 390;
			break;
		
		case 145:
			StringCopy(&Var2, "TORSO_P2_22_1", 16);
			iVar3 = 22;
			iVar4 = 1;
			iVar1 = 390;
			break;
		
		case 146:
			StringCopy(&Var2, "TORSO_P2_22_2", 16);
			iVar3 = 22;
			iVar4 = 2;
			iVar1 = 560;
			break;
		
		case 147:
			StringCopy(&Var2, "TORSO_P2_22_3", 16);
			iVar3 = 22;
			iVar4 = 3;
			iVar1 = 390;
			break;
		
		case 148:
			StringCopy(&Var2, "TORSO_P2_22_4", 16);
			iVar3 = 22;
			iVar4 = 4;
			iVar1 = 390;
			break;
		
		case 149:
			StringCopy(&Var2, "TORSO_P2_22_5", 16);
			iVar3 = 22;
			iVar4 = 5;
			iVar1 = 390;
			break;
		
		case 150:
			StringCopy(&Var2, "TORSO_P2_22_6", 16);
			iVar3 = 22;
			iVar4 = 6;
			iVar1 = 560;
			break;
		
		case 151:
			StringCopy(&Var2, "TORSO_P2_22_7", 16);
			iVar3 = 22;
			iVar4 = 7;
			iVar1 = 390;
			break;
		
		case 152:
			StringCopy(&Var2, "TORSO_P2_22_8", 16);
			iVar3 = 22;
			iVar4 = 8;
			iVar1 = 390;
			break;
		
		case 153:
			StringCopy(&Var2, "TORSO_P2_22_9", 16);
			iVar3 = 22;
			iVar4 = 9;
			iVar1 = 390;
			break;
		
		case 154:
			StringCopy(&Var2, "TORSO_P2_22_10", 16);
			iVar3 = 22;
			iVar4 = 10;
			iVar1 = 390;
			break;
		
		case 155:
			StringCopy(&Var2, "TORSO_P2_22_11", 16);
			iVar3 = 22;
			iVar4 = 11;
			iVar1 = 3950;
			break;
		
		case 156:
			StringCopy(&Var2, "TORSO_P2_23_0", 16);
			iVar3 = 23;
			iVar4 = 0;
			iVar1 = 150;
			break;
		
		case 157:
			StringCopy(&Var2, "TORSO_P2_23_1", 16);
			iVar3 = 23;
			iVar4 = 1;
			break;
		
		case 158:
			StringCopy(&Var2, "TORSO_P2_23_2", 16);
			iVar3 = 23;
			iVar4 = 2;
			iVar1 = 150;
			break;
		
		case 159:
			StringCopy(&Var2, "TORSO_P2_23_3", 16);
			iVar3 = 23;
			iVar4 = 3;
			iVar1 = 150;
			break;
		
		case 160:
			StringCopy(&Var2, "TORSO_P2_23_4", 16);
			iVar3 = 23;
			iVar4 = 4;
			iVar1 = 160;
			break;
		
		case 161:
			StringCopy(&Var2, "TORSO_P2_23_5", 16);
			iVar3 = 23;
			iVar4 = 5;
			break;
		
		case 162:
			StringCopy(&Var2, "TORSO_P2_24_0", 16);
			iVar3 = 24;
			iVar4 = 0;
			iVar1 = 19;
			break;
		
		case 163:
			StringCopy(&Var2, "TORSO_P2_24_1", 16);
			iVar3 = 24;
			iVar4 = 1;
			iVar1 = 20;
			break;
		
		case 164:
			StringCopy(&Var2, "TORSO_P2_24_2", 16);
			iVar3 = 24;
			iVar4 = 2;
			iVar1 = 19;
			break;
		
		case 165:
			StringCopy(&Var2, "TORSO_P2_24_3", 16);
			iVar3 = 24;
			iVar4 = 3;
			iVar1 = 22;
			break;
		
		case 166:
			StringCopy(&Var2, "TORSO_P2_24_4", 16);
			iVar3 = 24;
			iVar4 = 4;
			iVar1 = 20;
			break;
		
		case 167:
			StringCopy(&Var2, "TORSO_P2_24_5", 16);
			iVar3 = 24;
			iVar4 = 5;
			iVar1 = 28;
			break;
		
		case 168:
			StringCopy(&Var2, "TORSO_P2_24_6", 16);
			iVar3 = 24;
			iVar4 = 6;
			iVar1 = 28;
			break;
		
		case 169:
			StringCopy(&Var2, "TORSO_P2_24_7", 16);
			iVar3 = 24;
			iVar4 = 7;
			iVar1 = 25;
			break;
		
		case 170:
			StringCopy(&Var2, "TORSO_P2_24_8", 16);
			iVar3 = 24;
			iVar4 = 8;
			iVar1 = 22;
			break;
		
		case 171:
			StringCopy(&Var2, "TORSO_P2_24_9", 16);
			iVar3 = 24;
			iVar4 = 9;
			iVar1 = 19;
			break;
		
		case 172:
			StringCopy(&Var2, "TORSO_P2_24_10", 16);
			iVar3 = 24;
			iVar4 = 10;
			iVar1 = 22;
			break;
		
		case 173:
			StringCopy(&Var2, "TORSO_P2_24_11", 16);
			iVar3 = 24;
			iVar4 = 11;
			iVar1 = 19;
			break;
		
		case 174:
			StringCopy(&Var2, "TORSO_P2_24_12", 16);
			iVar3 = 24;
			iVar4 = 12;
			iVar1 = 20;
			break;
		
		case 175:
			StringCopy(&Var2, "TORSO_P2_24_13", 16);
			iVar3 = 24;
			iVar4 = 13;
			iVar1 = 25;
			break;
		
		case 176:
			StringCopy(&Var2, "TORSO_P2_24_14", 16);
			iVar3 = 24;
			iVar4 = 14;
			iVar1 = 20;
			break;
		
		case 177:
			StringCopy(&Var2, "TORSO_P2_24_15", 16);
			iVar3 = 24;
			iVar4 = 15;
			iVar1 = 28;
			break;
		
		case 178:
			StringCopy(&Var2, "TORSO_P2_25_0", 16);
			iVar3 = 25;
			iVar4 = 0;
			iVar1 = 35;
			break;
		
		case 179:
			StringCopy(&Var2, "TORSO_P2_25_1", 16);
			iVar3 = 25;
			iVar4 = 1;
			iVar1 = 40;
			break;
		
		case 180:
			StringCopy(&Var2, "TORSO_P2_25_2", 16);
			iVar3 = 25;
			iVar4 = 2;
			iVar1 = 45;
			break;
		
		case 181:
			StringCopy(&Var2, "TORSO_P2_25_3", 16);
			iVar3 = 25;
			iVar4 = 3;
			iVar1 = 45;
			break;
		
		case 182:
			StringCopy(&Var2, "TORSO_P2_25_4", 16);
			iVar3 = 25;
			iVar4 = 4;
			iVar1 = 49;
			break;
		
		case 183:
			StringCopy(&Var2, "TORSO_P2_25_5", 16);
			iVar3 = 25;
			iVar4 = 5;
			iVar1 = 820;
			break;
		
		case 184:
			StringCopy(&Var2, "TORSO_P2_25_6", 16);
			iVar3 = 25;
			iVar4 = 6;
			iVar1 = 790;
			break;
		
		case 185:
			StringCopy(&Var2, "TORSO_P2_25_7", 16);
			iVar3 = 25;
			iVar4 = 7;
			iVar1 = 820;
			break;
		
		case 186:
			StringCopy(&Var2, "TORSO_P2_25_8", 16);
			iVar3 = 25;
			iVar4 = 8;
			iVar1 = 929;
			break;
		
		case 187:
			StringCopy(&Var2, "TORSO_P2_25_9", 16);
			iVar3 = 25;
			iVar4 = 9;
			iVar1 = 40;
			break;
		
		case 188:
			StringCopy(&Var2, "TORSO_P2_25_10", 16);
			iVar3 = 25;
			iVar4 = 10;
			iVar1 = 850;
			break;
		
		case 189:
			StringCopy(&Var2, "TORSO_P2_25_11", 16);
			iVar3 = 25;
			iVar4 = 11;
			iVar1 = 790;
			break;
		
		case 190:
			StringCopy(&Var2, "TORSO_P2_26_0", 16);
			iVar3 = 26;
			iVar4 = 0;
			break;
		
		case 191:
			StringCopy(&Var2, "TORSO_P2_26_1", 16);
			iVar3 = 26;
			iVar4 = 1;
			break;
		
		case 192:
			StringCopy(&Var2, "TORSO_P2_26_2", 16);
			iVar3 = 26;
			iVar4 = 2;
			break;
		
		case 193:
			StringCopy(&Var2, "TORSO_P2_26_3", 16);
			iVar3 = 26;
			iVar4 = 3;
			break;
		
		case 194:
			StringCopy(&Var2, "TORSO_P2_26_4", 16);
			iVar3 = 26;
			iVar4 = 4;
			break;
		
		case 195:
			StringCopy(&Var2, "TORSO_P2_26_5", 16);
			iVar3 = 26;
			iVar4 = 5;
			break;
		
		case 196:
			StringCopy(&Var2, "TORSO_P2_26_6", 16);
			iVar3 = 26;
			iVar4 = 6;
			break;
		
		case 197:
			StringCopy(&Var2, "TORSO_P2_26_7", 16);
			iVar3 = 26;
			iVar4 = 7;
			break;
		
		case 198:
			StringCopy(&Var2, "TORSO_P2_26_8", 16);
			iVar3 = 26;
			iVar4 = 8;
			break;
		
		case 199:
			StringCopy(&Var2, "TORSO_P2_26_9", 16);
			iVar3 = 26;
			iVar4 = 9;
			break;
		
		case 200:
			StringCopy(&Var2, "TORSO_P2_27_0", 16);
			iVar3 = 27;
			iVar4 = 0;
			iVar1 = 2200;
			break;
		
		case 201:
			StringCopy(&Var2, "TORSO_P2_27_1", 16);
			iVar3 = 27;
			iVar4 = 1;
			iVar1 = 2500;
			break;
		
		case 202:
			StringCopy(&Var2, "TORSO_P2_27_2", 16);
			iVar3 = 27;
			iVar4 = 2;
			iVar1 = 2500;
			break;
		
		case 203:
			StringCopy(&Var2, "TORSO_P2_27_3", 16);
			iVar3 = 27;
			iVar4 = 3;
			iVar1 = 2200;
			break;
		
		case 204:
			StringCopy(&Var2, "TORSO_P2_27_4", 16);
			iVar3 = 27;
			iVar4 = 4;
			iVar1 = 2500;
			break;
		
		case 205:
			StringCopy(&Var2, "TORSO_P2_27_5", 16);
			iVar3 = 27;
			iVar4 = 5;
			iVar1 = 2500;
			break;
		
		case 206:
			StringCopy(&Var2, "TORSO_P2_27_6", 16);
			iVar3 = 27;
			iVar4 = 6;
			iVar1 = 2200;
			break;
		
		case 207:
			StringCopy(&Var2, "TORSO_P2_28_0", 16);
			iVar3 = 28;
			iVar4 = 0;
			iVar1 = 1100;
			break;
		
		case 208:
			StringCopy(&Var2, "TORSO_P2_28_1", 16);
			iVar3 = 28;
			iVar4 = 1;
			iVar1 = 1200;
			break;
		
		case 209:
			StringCopy(&Var2, "TORSO_P2_28_2", 16);
			iVar3 = 28;
			iVar4 = 2;
			iVar1 = 1220;
			break;
		
		case 210:
			StringCopy(&Var2, "TORSO_P2_28_3", 16);
			iVar3 = 28;
			iVar4 = 3;
			iVar1 = 1250;
			break;
		
		case 211:
			StringCopy(&Var2, "TORSO_P2_28_4", 16);
			iVar3 = 28;
			iVar4 = 4;
			iVar1 = 1300;
			break;
		
		case 212:
			StringCopy(&Var2, "TORSO_P2_28_5", 16);
			iVar3 = 28;
			iVar4 = 5;
			iVar1 = 1360;
			break;
		
		case 213:
			StringCopy(&Var2, "TORSO_P2_28_6", 16);
			iVar3 = 28;
			iVar4 = 6;
			iVar1 = 35;
			break;
		
		case 214:
			StringCopy(&Var2, "TORSO_P2_28_7", 16);
			iVar3 = 28;
			iVar4 = 7;
			iVar1 = 38;
			break;
		
		case 215:
			StringCopy(&Var2, "TORSO_P2_28_8", 16);
			iVar3 = 28;
			iVar4 = 8;
			iVar1 = 40;
			break;
		
		case 216:
			StringCopy(&Var2, "TORSO_P2_28_9", 16);
			iVar3 = 28;
			iVar4 = 9;
			iVar1 = 42;
			break;
		
		case 217:
			StringCopy(&Var2, "TORSO_P2_28_10", 16);
			iVar3 = 28;
			iVar4 = 10;
			iVar1 = 50;
			break;
		
		case 218:
			StringCopy(&Var2, "TORSO_P2_28_11", 16);
			iVar3 = 28;
			iVar4 = 11;
			iVar1 = 45;
			break;
		
		case 219:
			StringCopy(&Var2, "TORSO_P2_28_12", 16);
			iVar3 = 28;
			iVar4 = 12;
			iVar1 = 45;
			break;
		
		case 220:
			StringCopy(&Var2, "TORSO_P2_28_13", 16);
			iVar3 = 28;
			iVar4 = 13;
			iVar1 = 44;
			break;
		
		case 221:
			StringCopy(&Var2, "TORSO_P2_28_14", 16);
			iVar3 = 28;
			iVar4 = 14;
			iVar1 = 46;
			break;
		
		case 222:
			StringCopy(&Var2, "TORSO_P2_28_15", 16);
			iVar3 = 28;
			iVar4 = 15;
			iVar1 = 52;
			break;
		
		case 223:
			StringCopy(&Var2, "TORSO_P2_29_0", 16);
			iVar3 = 29;
			iVar4 = 0;
			iVar1 = 3200;
			break;
		
		case 224:
			StringCopy(&Var2, "TORSO_P2_29_1", 16);
			iVar3 = 29;
			iVar4 = 1;
			iVar1 = 3200;
			break;
		
		case 225:
			StringCopy(&Var2, "TORSO_P2_29_2", 16);
			iVar3 = 29;
			iVar4 = 2;
			iVar1 = 2550;
			break;
		
		case 226:
			StringCopy(&Var2, "TORSO_P2_29_3", 16);
			iVar3 = 29;
			iVar4 = 3;
			iVar1 = 2750;
			break;
		
		case 227:
			StringCopy(&Var2, "TORSO_P2_29_4", 16);
			iVar3 = 29;
			iVar4 = 4;
			iVar1 = 2590;
			break;
		
		case 228:
			StringCopy(&Var2, "TORSO_P2_29_5", 16);
			iVar3 = 29;
			iVar4 = 5;
			iVar1 = 2750;
			break;
		
		case 229:
			StringCopy(&Var2, "TORSO_P2_29_6", 16);
			iVar3 = 29;
			iVar4 = 6;
			iVar1 = 2550;
			break;
		
		case 230:
			StringCopy(&Var2, "TORSO_P2_29_7", 16);
			iVar3 = 29;
			iVar4 = 7;
			iVar1 = 2590;
			break;
		
		case 231:
			StringCopy(&Var2, "TORSO_P2_29_8", 16);
			iVar3 = 29;
			iVar4 = 8;
			iVar1 = 2720;
			break;
		
		case 232:
			StringCopy(&Var2, "TORSO_P2_29_9", 16);
			iVar3 = 29;
			iVar4 = 9;
			iVar1 = 2750;
			break;
		
		case 233:
			StringCopy(&Var2, "TORSO_P2_30_0", 16);
			iVar3 = 30;
			iVar4 = 0;
			iVar1 = 3250;
			break;
		
		case 234:
			StringCopy(&Var2, "TORSO_P2_30_1", 16);
			iVar3 = 30;
			iVar4 = 1;
			iVar1 = 2950;
			break;
		
		case 235:
			StringCopy(&Var2, "TORSO_P2_30_2", 16);
			iVar3 = 30;
			iVar4 = 2;
			iVar1 = 3100;
			break;
		
		case 236:
			StringCopy(&Var2, "TORSO_P2_30_3", 16);
			iVar3 = 30;
			iVar4 = 3;
			iVar1 = 3150;
			break;
		
		case 237:
			StringCopy(&Var2, "TORSO_P2_30_4", 16);
			iVar3 = 30;
			iVar4 = 4;
			iVar1 = 3240;
			break;
		
		case 238:
			StringCopy(&Var2, "TORSO_P2_30_5", 16);
			iVar3 = 30;
			iVar4 = 5;
			iVar1 = 3350;
			break;
		
		case 239:
			StringCopy(&Var2, "TORSO_P2_30_6", 16);
			iVar3 = 30;
			iVar4 = 6;
			iVar1 = 3400;
			break;
		
		case 240:
			StringCopy(&Var2, "TORSO_P2_30_7", 16);
			iVar3 = 30;
			iVar4 = 7;
			iVar1 = 3280;
			break;
		
		case 241:
			StringCopy(&Var2, "TORSO_P2_31_0", 16);
			iVar3 = 31;
			iVar4 = 0;
			break;
		
		default:
			return;
			break;
	}
	func_222(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_248(int iParam0)//Position - 0x1887A
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 3;
	Global_70671[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "TORSO_P2_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "TORSO_P2_0_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			iVar1 = 25;
			break;
		
		case 2:
			StringCopy(&Var2, "TORSO_P2_0_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "TORSO_P2_0_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 15;
			break;
		
		case 4:
			StringCopy(&Var2, "TORSO_P2_0_4", 16);
			iVar3 = 0;
			iVar4 = 4;
			iVar1 = 25;
			break;
		
		case 5:
			StringCopy(&Var2, "TORSO_P2_0_5", 16);
			iVar3 = 0;
			iVar4 = 5;
			iVar1 = 25;
			break;
		
		case 6:
			StringCopy(&Var2, "TORSO_P2_0_6", 16);
			iVar3 = 0;
			iVar4 = 6;
			iVar1 = 22;
			break;
		
		case 7:
			StringCopy(&Var2, "TORSO_P2_0_7", 16);
			iVar3 = 0;
			iVar4 = 7;
			iVar1 = 22;
			break;
		
		case 8:
			StringCopy(&Var2, "TORSO_P2_0_8", 16);
			iVar3 = 0;
			iVar4 = 8;
			iVar1 = 20;
			break;
		
		case 9:
			StringCopy(&Var2, "TORSO_P2_0_9", 16);
			iVar3 = 0;
			iVar4 = 9;
			iVar1 = 20;
			break;
		
		case 10:
			StringCopy(&Var2, "TORSO_P2_0_10", 16);
			iVar3 = 0;
			iVar4 = 10;
			iVar1 = 24;
			break;
		
		case 11:
			StringCopy(&Var2, "TORSO_P2_0_11", 16);
			iVar3 = 0;
			iVar4 = 11;
			iVar1 = 26;
			break;
		
		case 12:
			StringCopy(&Var2, "TORSO_P2_0_12", 16);
			iVar3 = 0;
			iVar4 = 12;
			iVar1 = 28;
			break;
		
		case 13:
			StringCopy(&Var2, "TORSO_P2_0_13", 16);
			iVar3 = 0;
			iVar4 = 13;
			iVar1 = 29;
			break;
		
		case 14:
			StringCopy(&Var2, "TORSO_P2_0_14", 16);
			iVar3 = 0;
			iVar4 = 14;
			iVar1 = 22;
			break;
		
		case 15:
			StringCopy(&Var2, "TORSO_P2_0_15", 16);
			iVar3 = 0;
			iVar4 = 15;
			iVar1 = 20;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 18:
			StringCopy(&Var2, "TORSO_P2_3_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			iVar1 = 35;
			break;
		
		case 19:
			StringCopy(&Var2, "TORSO_P2_3_1", 16);
			iVar3 = 3;
			iVar4 = 1;
			iVar1 = 22;
			break;
		
		case 20:
			StringCopy(&Var2, "TORSO_P2_3_2", 16);
			iVar3 = 3;
			iVar4 = 2;
			iVar1 = 25;
			break;
		
		case 21:
			StringCopy(&Var2, "TORSO_P2_3_3", 16);
			iVar3 = 3;
			iVar4 = 3;
			iVar1 = 38;
			break;
		
		case 22:
			StringCopy(&Var2, "TORSO_P2_3_4", 16);
			iVar3 = 3;
			iVar4 = 4;
			iVar1 = 40;
			break;
		
		case 23:
			StringCopy(&Var2, "TORSO_P2_3_5", 16);
			iVar3 = 3;
			iVar4 = 5;
			iVar1 = 40;
			break;
		
		case 24:
			StringCopy(&Var2, "TORSO_P2_3_6", 16);
			iVar3 = 3;
			iVar4 = 6;
			iVar1 = 40;
			break;
		
		case 25:
			StringCopy(&Var2, "TORSO_P2_3_7", 16);
			iVar3 = 3;
			iVar4 = 7;
			iVar1 = 40;
			break;
		
		case 26:
			StringCopy(&Var2, "TORSO_P2_3_8", 16);
			iVar3 = 3;
			iVar4 = 8;
			iVar1 = 40;
			break;
		
		case 27:
			StringCopy(&Var2, "TORSO_P2_4_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		case 28:
			StringCopy(&Var2, "TORSO_P2_4_1", 16);
			iVar3 = 4;
			iVar4 = 1;
			iVar1 = 500;
			break;
		
		case 29:
			StringCopy(&Var2, "TORSO_P2_4_2", 16);
			iVar3 = 4;
			iVar4 = 2;
			iVar1 = 560;
			break;
		
		case 30:
			StringCopy(&Var2, "TORSO_P2_4_3", 16);
			iVar3 = 4;
			iVar4 = 3;
			iVar1 = 600;
			break;
		
		case 31:
			StringCopy(&Var2, "TORSO_P2_4_4tu", 16);
			iVar3 = 4;
			iVar4 = 4;
			iVar1 = 650;
			break;
		
		case 32:
			StringCopy(&Var2, "TORSO_P2_4_5tu", 16);
			iVar3 = 4;
			iVar4 = 5;
			iVar1 = 500;
			break;
		
		case 33:
			StringCopy(&Var2, "TORSO_P2_4_6tu", 16);
			iVar3 = 4;
			iVar4 = 6;
			iVar1 = 560;
			break;
		
		case 34:
			StringCopy(&Var2, "TORSO_P2_4_7", 16);
			iVar3 = 4;
			iVar4 = 7;
			iVar1 = 500;
			break;
		
		case 35:
			StringCopy(&Var2, "TORSO_P2_4_8", 16);
			iVar3 = 4;
			iVar4 = 8;
			iVar1 = 650;
			break;
		
		case 36:
			StringCopy(&Var2, "TORSO_P2_4_9", 16);
			iVar3 = 4;
			iVar4 = 9;
			iVar1 = 540;
			break;
		
		case 37:
			StringCopy(&Var2, "TORSO_P2_4_10", 16);
			iVar3 = 4;
			iVar4 = 10;
			iVar1 = 690;
			break;
		
		case 38:
			StringCopy(&Var2, "TORSO_P2_4_11", 16);
			iVar3 = 4;
			iVar4 = 11;
			iVar1 = 560;
			break;
		
		case 39:
			StringCopy(&Var2, "TORSO_P2_4_12", 16);
			iVar3 = 4;
			iVar4 = 12;
			iVar1 = 590;
			break;
		
		case 40:
			StringCopy(&Var2, "TORSO_P2_4_13", 16);
			iVar3 = 4;
			iVar4 = 13;
			iVar1 = 690;
			break;
		
		case 41:
			StringCopy(&Var2, "TORSO_P2_4_14", 16);
			iVar3 = 4;
			iVar4 = 14;
			iVar1 = 540;
			break;
		
		case 42:
			StringCopy(&Var2, "TORSO_P2_4_15", 16);
			iVar3 = 4;
			iVar4 = 15;
			iVar1 = 500;
			break;
		
		case 43:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 44:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 45:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 2;
			bVar0 = true;
			break;
		
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 3;
			bVar0 = true;
			break;
		
		case 47:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 4;
			bVar0 = true;
			break;
		
		case 48:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 5;
			bVar0 = true;
			break;
		
		case 49:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 50:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 51:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 52:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 53:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 54:
			StringCopy(&Var2, "TORSO_P2_11_0", 16);
			iVar3 = 11;
			iVar4 = 0;
			break;
		
		case 55:
			StringCopy(&Var2, "TORSO_P2_11_1", 16);
			iVar3 = 11;
			iVar4 = 1;
			break;
		
		case 56:
			StringCopy(&Var2, "TORSO_P2_11_2", 16);
			iVar3 = 11;
			iVar4 = 2;
			iVar1 = 25;
			break;
		
		case 57:
			StringCopy(&Var2, "TORSO_P2_11_3", 16);
			iVar3 = 11;
			iVar4 = 3;
			iVar1 = 27;
			break;
		
		case 58:
			StringCopy(&Var2, "TORSO_P2_11_4", 16);
			iVar3 = 11;
			iVar4 = 4;
			iVar1 = 22;
			break;
		
		case 59:
			StringCopy(&Var2, "TORSO_P2_11_5", 16);
			iVar3 = 11;
			iVar4 = 5;
			iVar1 = 350;
			break;
		
		case 60:
			StringCopy(&Var2, "TORSO_P2_11_6", 16);
			iVar3 = 11;
			iVar4 = 6;
			iVar1 = 27;
			break;
		
		case 61:
			StringCopy(&Var2, "TORSO_P2_11_7", 16);
			iVar3 = 11;
			iVar4 = 7;
			iVar1 = 370;
			break;
		
		case 62:
			StringCopy(&Var2, "TORSO_P2_11_8", 16);
			iVar3 = 11;
			iVar4 = 8;
			iVar1 = 25;
			break;
		
		case 63:
			StringCopy(&Var2, "TORSO_P2_11_9", 16);
			iVar3 = 11;
			iVar4 = 9;
			iVar1 = 22;
			break;
		
		case 64:
			StringCopy(&Var2, "TORSO_P2_11_10", 16);
			iVar3 = 11;
			iVar4 = 10;
			iVar1 = 25;
			break;
		
		case 65:
			StringCopy(&Var2, "TORSO_P2_11_11", 16);
			iVar3 = 11;
			iVar4 = 11;
			break;
		
		case 66:
			StringCopy(&Var2, "TORSO_P2_11_12", 16);
			iVar3 = 11;
			iVar4 = 12;
			iVar1 = 22;
			break;
		
		case 67:
			StringCopy(&Var2, "TORSO_P2_11_13", 16);
			iVar3 = 11;
			iVar4 = 13;
			iVar1 = 27;
			break;
		
		case 68:
			StringCopy(&Var2, "TORSO_P2_11_14", 16);
			iVar3 = 11;
			iVar4 = 14;
			iVar1 = 25;
			break;
		
		case 69:
			StringCopy(&Var2, "TORSO_P2_11_15", 16);
			iVar3 = 11;
			iVar4 = 15;
			iVar1 = 27;
			break;
		
		case 70:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			bVar0 = true;
			iVar6 = 1;
			break;
		
		case 71:
			StringCopy(&Var2, "TORSO_P2_13_0", 16);
			iVar3 = 13;
			iVar4 = 0;
			break;
		
		case 72:
			StringCopy(&Var2, "TORSO_P2_13_1", 16);
			iVar3 = 13;
			iVar4 = 1;
			iVar1 = 39;
			break;
		
		case 73:
			StringCopy(&Var2, "TORSO_P2_13_2", 16);
			iVar3 = 13;
			iVar4 = 2;
			iVar1 = 42;
			break;
		
		case 74:
			StringCopy(&Var2, "TORSO_P2_13_3", 16);
			iVar3 = 13;
			iVar4 = 3;
			iVar1 = 49;
			break;
		
		case 75:
			StringCopy(&Var2, "TORSO_P2_13_4", 16);
			iVar3 = 13;
			iVar4 = 4;
			iVar1 = 35;
			break;
		
		case 76:
			StringCopy(&Var2, "TORSO_P2_13_5", 16);
			iVar3 = 13;
			iVar4 = 5;
			iVar1 = 50;
			break;
		
		case 77:
			StringCopy(&Var2, "TORSO_P2_13_6", 16);
			iVar3 = 13;
			iVar4 = 6;
			iVar1 = 50;
			break;
		
		case 78:
			StringCopy(&Var2, "TORSO_P2_13_7", 16);
			iVar3 = 13;
			iVar4 = 7;
			iVar1 = 50;
			break;
		
		case 79:
			StringCopy(&Var2, "TORSO_P2_14_0", 16);
			iVar3 = 14;
			iVar4 = 0;
			break;
		
		case 80:
			StringCopy(&Var2, "TORSO_P2_14_1", 16);
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 88;
			break;
		
		case 81:
			StringCopy(&Var2, "TORSO_P2_14_2", 16);
			iVar3 = 14;
			iVar4 = 2;
			iVar1 = 60;
			break;
		
		case 82:
			StringCopy(&Var2, "TORSO_P2_14_3", 16);
			iVar3 = 14;
			iVar4 = 3;
			iVar1 = 80;
			break;
		
		case 83:
			StringCopy(&Var2, "TORSO_P2_14_4", 16);
			iVar3 = 14;
			iVar4 = 4;
			iVar1 = 70;
			break;
		
		case 84:
			StringCopy(&Var2, "TORSO_P2_14_5", 16);
			iVar3 = 14;
			iVar4 = 5;
			iVar1 = 80;
			break;
		
		case 85:
			StringCopy(&Var2, "TORSO_P2_14_6", 16);
			iVar3 = 14;
			iVar4 = 6;
			iVar1 = 70;
			break;
		
		case 86:
			StringCopy(&Var2, "TORSO_P2_14_7", 16);
			iVar3 = 14;
			iVar4 = 7;
			iVar1 = 90;
			break;
		
		case 87:
			StringCopy(&Var2, "TORSO_P2_14_8", 16);
			iVar3 = 14;
			iVar4 = 8;
			iVar1 = 95;
			break;
		
		case 88:
			StringCopy(&Var2, "TORSO_P2_14_9", 16);
			iVar3 = 14;
			iVar4 = 9;
			iVar1 = 105;
			break;
		
		case 89:
			StringCopy(&Var2, "TORSO_P2_14_10", 16);
			iVar3 = 14;
			iVar4 = 10;
			iVar1 = 95;
			break;
		
		case 90:
			StringCopy(&Var2, "TORSO_P2_14_11", 16);
			iVar3 = 14;
			iVar4 = 11;
			iVar1 = 110;
			break;
		
		case 91:
			StringCopy(&Var2, "TORSO_P2_14_12", 16);
			iVar3 = 14;
			iVar4 = 12;
			iVar1 = 98;
			break;
		
		case 92:
			StringCopy(&Var2, "TORSO_P2_14_13", 16);
			iVar3 = 14;
			iVar4 = 13;
			iVar1 = 88;
			break;
		
		case 93:
			StringCopy(&Var2, "TORSO_P2_14_14", 16);
			iVar3 = 14;
			iVar4 = 14;
			iVar1 = 98;
			break;
		
		case 94:
			StringCopy(&Var2, "TORSO_P2_14_15", 16);
			iVar3 = 14;
			iVar4 = 15;
			iVar1 = 110;
			break;
		
		case 95:
			StringCopy(&Var2, "TORSO_P2_15_0", 16);
			iVar3 = 15;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 96:
			StringCopy(&Var2, "TORSO_P2_16_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			break;
		
		case 97:
			StringCopy(&Var2, "TORSO_P2_17_0", 16);
			iVar3 = 17;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 98:
			StringCopy(&Var2, "TORSO_P2_18_0", 16);
			iVar3 = 18;
			iVar4 = 0;
			break;
		
		case 99:
			StringCopy(&Var2, "TORSO_P2_18_1", 16);
			iVar3 = 18;
			iVar4 = 1;
			iVar1 = 520;
			break;
		
		case 100:
			StringCopy(&Var2, "TORSO_P2_18_2", 16);
			iVar3 = 18;
			iVar4 = 2;
			iVar1 = 490;
			break;
		
		case 101:
			StringCopy(&Var2, "TORSO_P2_18_3", 16);
			iVar3 = 18;
			iVar4 = 3;
			iVar1 = 450;
			break;
		
		case 102:
			StringCopy(&Var2, "TORSO_P2_18_4", 16);
			iVar3 = 18;
			iVar4 = 4;
			iVar1 = 420;
			break;
		
		case 103:
			StringCopy(&Var2, "TORSO_P2_18_5", 16);
			iVar3 = 18;
			iVar4 = 5;
			iVar1 = 420;
			break;
		
		case 104:
			StringCopy(&Var2, "TORSO_P2_19_0", 16);
			iVar3 = 19;
			iVar4 = 0;
			iVar1 = 85;
			break;
		
		case 105:
			StringCopy(&Var2, "TORSO_P2_19_1", 16);
			iVar3 = 19;
			iVar4 = 1;
			iVar1 = 85;
			break;
		
		case 106:
			StringCopy(&Var2, "TORSO_P2_19_2", 16);
			iVar3 = 19;
			iVar4 = 2;
			iVar1 = 75;
			break;
		
		case 107:
			StringCopy(&Var2, "TORSO_P2_19_3", 16);
			iVar3 = 19;
			iVar4 = 3;
			iVar1 = 68;
			break;
		
		case 108:
			StringCopy(&Var2, "TORSO_P2_19_4", 16);
			iVar3 = 19;
			iVar4 = 4;
			iVar1 = 68;
			break;
		
		case 109:
			StringCopy(&Var2, "TORSO_P2_19_5", 16);
			iVar3 = 19;
			iVar4 = 5;
			iVar1 = 78;
			break;
		
		case 110:
			StringCopy(&Var2, "TORSO_P2_19_6", 16);
			iVar3 = 19;
			iVar4 = 6;
			iVar1 = 85;
			break;
		
		case 111:
			StringCopy(&Var2, "TORSO_P2_19_7", 16);
			iVar3 = 19;
			iVar4 = 7;
			iVar1 = 68;
			break;
		
		case 112:
			StringCopy(&Var2, "TORSO_P2_19_8", 16);
			iVar3 = 19;
			iVar4 = 8;
			iVar1 = 75;
			break;
		
		case 113:
			StringCopy(&Var2, "TORSO_P2_19_9", 16);
			iVar3 = 19;
			iVar4 = 9;
			iVar1 = 75;
			break;
		
		case 114:
			StringCopy(&Var2, "TORSO_P2_19_10", 16);
			iVar3 = 19;
			iVar4 = 10;
			iVar1 = 78;
			break;
		
		case 115:
			StringCopy(&Var2, "TORSO_P2_19_11", 16);
			iVar3 = 19;
			iVar4 = 11;
			iVar1 = 75;
			break;
		
		case 116:
			StringCopy(&Var2, "TORSO_P2_19_12", 16);
			iVar3 = 19;
			iVar4 = 12;
			iVar1 = 75;
			break;
		
		case 117:
			StringCopy(&Var2, "TORSO_P2_19_13", 16);
			iVar3 = 19;
			iVar4 = 13;
			iVar1 = 75;
			break;
		
		case 118:
			StringCopy(&Var2, "TORSO_P2_19_14", 16);
			iVar3 = 19;
			iVar4 = 14;
			iVar1 = 78;
			break;
		
		case 119:
			StringCopy(&Var2, "TORSO_P2_19_15", 16);
			iVar3 = 19;
			iVar4 = 15;
			iVar1 = 78;
			break;
		
		case 120:
			StringCopy(&Var2, "TORSO_P2_20_0", 16);
			iVar3 = 20;
			iVar4 = 0;
			iVar1 = 40;
			break;
		
		case 121:
			StringCopy(&Var2, "TORSO_P2_20_1", 16);
			iVar3 = 20;
			iVar4 = 1;
			iVar1 = 32;
			break;
		
		case 122:
			StringCopy(&Var2, "TORSO_P2_20_2", 16);
			iVar3 = 20;
			iVar4 = 2;
			iVar1 = 32;
			break;
		
		case 123:
			StringCopy(&Var2, "TORSO_P2_20_3", 16);
			iVar3 = 20;
			iVar4 = 3;
			iVar1 = 32;
			break;
		
		case 124:
			StringCopy(&Var2, "TORSO_P2_20_4", 16);
			iVar3 = 20;
			iVar4 = 4;
			break;
		
		case 125:
			StringCopy(&Var2, "TORSO_P2_20_5", 16);
			iVar3 = 20;
			iVar4 = 5;
			iVar1 = 38;
			break;
		
		case 126:
			StringCopy(&Var2, "TORSO_P2_20_6", 16);
			iVar3 = 20;
			iVar4 = 6;
			iVar1 = 35;
			break;
		
		case 127:
			StringCopy(&Var2, "TORSO_P2_20_7", 16);
			iVar3 = 20;
			iVar4 = 7;
			iVar1 = 38;
			break;
		
		case 128:
			StringCopy(&Var2, "TORSO_P2_20_8", 16);
			iVar3 = 20;
			iVar4 = 8;
			iVar1 = 29;
			break;
		
		case 129:
			StringCopy(&Var2, "TORSO_P2_20_9", 16);
			iVar3 = 20;
			iVar4 = 9;
			iVar1 = 32;
			break;
		
		case 130:
			StringCopy(&Var2, "TORSO_P2_20_10", 16);
			iVar3 = 20;
			iVar4 = 10;
			iVar1 = 29;
			break;
		
		case 131:
			StringCopy(&Var2, "TORSO_P2_20_11", 16);
			iVar3 = 20;
			iVar4 = 11;
			iVar1 = 35;
			break;
		
		case 132:
			StringCopy(&Var2, "TORSO_P2_20_12", 16);
			iVar3 = 20;
			iVar4 = 12;
			iVar1 = 32;
			break;
		
		case 133:
			StringCopy(&Var2, "TORSO_P2_20_13", 16);
			iVar3 = 20;
			iVar4 = 13;
			iVar1 = 35;
			break;
		
		case 134:
			StringCopy(&Var2, "TORSO_P2_20_14", 16);
			iVar3 = 20;
			iVar4 = 14;
			iVar1 = 32;
			break;
		
		case 135:
			StringCopy(&Var2, "TORSO_P2_20_15", 16);
			iVar3 = 20;
			iVar4 = 15;
			iVar1 = 40;
			break;
		
		default:
			return;
			break;
	}
	func_222(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_249(int iParam0)//Position - 0x19788
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 2;
	Global_70671[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "HAIR_P2_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "HAIR_P2_0_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "HAIR_P2_1_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "HAIR_P2_2_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "HAIR_P2_3_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "HAIR_P2_4_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "HAIR_P2_5_0", 16);
			iVar3 = 5;
			iVar4 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "HAIR_P2_6_0", 16);
			iVar3 = 6;
			iVar4 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "HAIR_P2_7_0", 16);
			iVar3 = 7;
			iVar4 = 0;
			break;
		
		default:
			func_233(iVar7, iParam0, 9);
			return;
			break;
	}
	func_222(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_250(int iParam0)//Position - 0x198B4
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 0;
	Global_70671[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 6;
			break;
		
		default:
			func_233(iVar7, iParam0, 7);
			return;
			break;
	}
	func_222(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_251(int iParam0, int iParam1)//Position - 0x199B1
{
	switch (iParam0)
	{
		case 0:
			func_269(iParam1);
			break;
		
		case 2:
			func_268(iParam1);
			break;
		
		case 3:
			func_264(iParam1);
			break;
		
		case 4:
			func_263(iParam1);
			break;
		
		case 6:
			func_262(iParam1);
			break;
		
		case 5:
			func_261(iParam1);
			break;
		
		case 8:
			func_260(iParam1);
			break;
		
		case 9:
			func_259(iParam1);
			break;
		
		case 10:
			func_258(iParam1);
			break;
		
		case 1:
			func_257(iParam1);
			break;
		
		case 7:
			func_256(iParam1);
			break;
		
		case 11:
			func_255(iParam1);
			break;
		
		case 12:
			func_254(iParam1);
			break;
		
		case 13:
			func_253(iParam1);
			break;
		
		case 14:
			func_252(iParam1);
			break;
	}
}

void func_252(int iParam0)//Position - 0x19AA1
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 14;
	Global_70671[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 6;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 7;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 8;
			break;
		
		case 158:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 2;
			break;
		
		case 159:
			StringCopy(&Var2, "PROPS_P1_EA1_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			iVar1 = 4590;
			iVar5 = 2;
			break;
		
		case 160:
			StringCopy(&Var2, "PROPS_P1_EA1_1", 16);
			iVar3 = 1;
			iVar4 = 1;
			iVar1 = 4100;
			iVar5 = 2;
			break;
		
		case 161:
			StringCopy(&Var2, "PROPS_P1_EA1_2", 16);
			iVar3 = 1;
			iVar4 = 2;
			iVar1 = 3850;
			iVar5 = 2;
			break;
		
		case 162:
			StringCopy(&Var2, "PROPS_P1_EA1_3", 16);
			iVar3 = 1;
			iVar4 = 3;
			iVar1 = 1850;
			iVar5 = 2;
			break;
		
		case 163:
			StringCopy(&Var2, "PROPS_P1_EA1_4", 16);
			iVar3 = 1;
			iVar4 = 4;
			iVar1 = 5250;
			iVar5 = 2;
			break;
		
		case 164:
			StringCopy(&Var2, "PROPS_P1_EA1_5", 16);
			iVar3 = 1;
			iVar4 = 5;
			iVar1 = 2700;
			iVar5 = 2;
			break;
		
		case 165:
			StringCopy(&Var2, "PROPS_P1_EA1_6", 16);
			iVar3 = 1;
			iVar4 = 6;
			iVar1 = 3100;
			iVar5 = 2;
			break;
		
		case 166:
			StringCopy(&Var2, "PROPS_P1_EA1_7", 16);
			iVar3 = 1;
			iVar4 = 7;
			iVar1 = 5050;
			iVar5 = 2;
			break;
		
		case 167:
			StringCopy(&Var2, "PROPS_P1_EA2_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			iVar1 = 2500;
			iVar5 = 2;
			break;
		
		case 168:
			StringCopy(&Var2, "PROPS_P1_EA2_1", 16);
			iVar3 = 2;
			iVar4 = 1;
			iVar1 = 1950;
			iVar5 = 2;
			break;
		
		case 169:
			StringCopy(&Var2, "PROPS_P1_EA2_2", 16);
			iVar3 = 2;
			iVar4 = 2;
			iVar1 = 3900;
			iVar5 = 2;
			break;
		
		case 170:
			StringCopy(&Var2, "PROPS_P1_EA2_3", 16);
			iVar3 = 2;
			iVar4 = 3;
			iVar1 = 3550;
			iVar5 = 2;
			break;
		
		case 171:
			StringCopy(&Var2, "PROPS_P1_EA2_4", 16);
			iVar3 = 2;
			iVar4 = 4;
			iVar1 = 4500;
			iVar5 = 2;
			break;
		
		case 172:
			StringCopy(&Var2, "PROPS_P1_EA2_5", 16);
			iVar3 = 2;
			iVar4 = 5;
			iVar1 = 2700;
			iVar5 = 2;
			break;
		
		case 173:
			StringCopy(&Var2, "PROPS_P1_EA2_6", 16);
			iVar3 = 2;
			iVar4 = 6;
			iVar1 = 3100;
			iVar5 = 2;
			break;
		
		case 174:
			StringCopy(&Var2, "PROPS_P1_EA2_7", 16);
			iVar3 = 2;
			iVar4 = 7;
			iVar1 = 2950;
			iVar5 = 2;
			break;
		
		case 82:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 10;
			break;
		
		case 83:
			StringCopy(&Var2, "PROPS_P1_E1_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 84:
			StringCopy(&Var2, "PROPS_P1_E1_1", 16);
			iVar3 = 1;
			iVar4 = 1;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 85:
			StringCopy(&Var2, "PROPS_P1_E1_2", 16);
			iVar3 = 1;
			iVar4 = 2;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 86:
			StringCopy(&Var2, "PROPS_P1_E1_3", 16);
			iVar3 = 1;
			iVar4 = 3;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 87:
			StringCopy(&Var2, "PROPS_P1_E1_4", 16);
			iVar3 = 1;
			iVar4 = 4;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 88:
			StringCopy(&Var2, "PROPS_P1_E1_5", 16);
			iVar3 = 1;
			iVar4 = 5;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 89:
			StringCopy(&Var2, "PROPS_P1_E1_6", 16);
			iVar3 = 1;
			iVar4 = 6;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 90:
			StringCopy(&Var2, "PROPS_P1_E1_7", 16);
			iVar3 = 1;
			iVar4 = 7;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 91:
			StringCopy(&Var2, "PROPS_P1_E1_8", 16);
			iVar3 = 1;
			iVar4 = 8;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 92:
			StringCopy(&Var2, "PROPS_P1_E1_9", 16);
			iVar3 = 1;
			iVar4 = 9;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 93:
			StringCopy(&Var2, "PROPS_P1_E2", 16);
			iVar3 = 2;
			iVar4 = 0;
			iVar5 = 10;
			break;
		
		case 94:
			StringCopy(&Var2, "PROPS_P1_E3", 16);
			iVar3 = 3;
			iVar4 = 0;
			iVar1 = 110;
			iVar5 = 10;
			break;
		
		case 95:
			StringCopy(&Var2, "PROPS_P1_E4_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			iVar1 = 120;
			iVar5 = 10;
			break;
		
		case 96:
			StringCopy(&Var2, "PROPS_P1_E4_1", 16);
			iVar3 = 4;
			iVar4 = 1;
			iVar1 = 128;
			iVar5 = 10;
			break;
		
		case 97:
			StringCopy(&Var2, "PROPS_P1_E4_2", 16);
			iVar3 = 4;
			iVar4 = 2;
			iVar1 = 130;
			iVar5 = 10;
			break;
		
		case 98:
			StringCopy(&Var2, "PROPS_P1_E4_3", 16);
			iVar3 = 4;
			iVar4 = 3;
			iVar1 = 140;
			iVar5 = 10;
			break;
		
		case 99:
			StringCopy(&Var2, "PROPS_P1_E4_4", 16);
			iVar3 = 4;
			iVar4 = 4;
			iVar1 = 145;
			iVar5 = 10;
			break;
		
		case 100:
			StringCopy(&Var2, "PROPS_P1_E4_5", 16);
			iVar3 = 4;
			iVar4 = 5;
			iVar1 = 135;
			iVar5 = 10;
			break;
		
		case 101:
			StringCopy(&Var2, "PROPS_P1_E4_6", 16);
			iVar3 = 4;
			iVar4 = 6;
			iVar1 = 138;
			iVar5 = 10;
			break;
		
		case 102:
			StringCopy(&Var2, "PROPS_P1_E5_0", 16);
			iVar3 = 5;
			iVar4 = 0;
			iVar1 = 110;
			iVar5 = 10;
			break;
		
		case 103:
			StringCopy(&Var2, "PROPS_P1_E5_1", 16);
			iVar3 = 5;
			iVar4 = 1;
			iVar1 = 112;
			iVar5 = 10;
			break;
		
		case 104:
			StringCopy(&Var2, "PROPS_P1_E5_2", 16);
			iVar3 = 5;
			iVar4 = 2;
			iVar1 = 115;
			iVar5 = 10;
			break;
		
		case 105:
			StringCopy(&Var2, "PROPS_P1_E5_3", 16);
			iVar3 = 5;
			iVar4 = 3;
			iVar1 = 118;
			iVar5 = 10;
			break;
		
		case 106:
			StringCopy(&Var2, "PROPS_P1_E5_4", 16);
			iVar3 = 5;
			iVar4 = 4;
			iVar1 = 120;
			iVar5 = 10;
			break;
		
		case 107:
			StringCopy(&Var2, "PROPS_P1_E5_5", 16);
			iVar3 = 5;
			iVar4 = 5;
			iVar1 = 125;
			iVar5 = 10;
			break;
		
		case 108:
			StringCopy(&Var2, "PROPS_P1_E5_6", 16);
			iVar3 = 5;
			iVar4 = 6;
			iVar1 = 128;
			iVar5 = 10;
			break;
		
		case 109:
			StringCopy(&Var2, "PROPS_P1_E5_7", 16);
			iVar3 = 5;
			iVar4 = 7;
			iVar1 = 138;
			iVar5 = 10;
			break;
		
		case 110:
			StringCopy(&Var2, "PROPS_P1_E5_8", 16);
			iVar3 = 5;
			iVar4 = 8;
			iVar1 = 140;
			iVar5 = 10;
			break;
		
		case 111:
			StringCopy(&Var2, "PROPS_P1_E5_9", 16);
			iVar3 = 5;
			iVar4 = 9;
			iVar1 = 155;
			iVar5 = 10;
			break;
		
		case 112:
			StringCopy(&Var2, "PROPS_P1_E6_0", 16);
			iVar3 = 6;
			iVar4 = 0;
			iVar1 = 55;
			iVar5 = 10;
			break;
		
		case 113:
			StringCopy(&Var2, "PROPS_P1_E6_1", 16);
			iVar3 = 6;
			iVar4 = 1;
			iVar1 = 55;
			iVar5 = 10;
			break;
		
		case 114:
			StringCopy(&Var2, "PROPS_P1_E6_2", 16);
			iVar3 = 6;
			iVar4 = 2;
			iVar1 = 58;
			iVar5 = 10;
			break;
		
		case 115:
			StringCopy(&Var2, "PROPS_P1_E6_3", 16);
			iVar3 = 6;
			iVar4 = 3;
			iVar1 = 58;
			iVar5 = 10;
			break;
		
		case 116:
			StringCopy(&Var2, "PROPS_P1_E6_4", 16);
			iVar3 = 6;
			iVar4 = 4;
			iVar1 = 60;
			iVar5 = 10;
			break;
		
		case 117:
			StringCopy(&Var2, "PROPS_P1_E6_5", 16);
			iVar3 = 6;
			iVar4 = 5;
			iVar1 = 62;
			iVar5 = 10;
			break;
		
		case 118:
			StringCopy(&Var2, "PROPS_P1_E6_6", 16);
			iVar3 = 6;
			iVar4 = 6;
			iVar1 = 65;
			iVar5 = 10;
			break;
		
		case 119:
			StringCopy(&Var2, "PROPS_P1_E6_7", 16);
			iVar3 = 6;
			iVar4 = 7;
			iVar1 = 68;
			iVar5 = 10;
			break;
		
		case 120:
			StringCopy(&Var2, "PROPS_P1_E6_8", 16);
			iVar3 = 6;
			iVar4 = 8;
			iVar1 = 68;
			iVar5 = 10;
			break;
		
		case 121:
			StringCopy(&Var2, "PROPS_P1_E6_9", 16);
			iVar3 = 6;
			iVar4 = 9;
			iVar1 = 72;
			iVar5 = 10;
			break;
		
		case 122:
			StringCopy(&Var2, "PROPS_P1_E7_0", 16);
			iVar3 = 7;
			iVar4 = 0;
			iVar1 = 145;
			iVar5 = 10;
			break;
		
		case 123:
			StringCopy(&Var2, "PROPS_P1_E7_1", 16);
			iVar3 = 7;
			iVar4 = 1;
			iVar1 = 149;
			iVar5 = 10;
			break;
		
		case 124:
			StringCopy(&Var2, "PROPS_P1_E7_2", 16);
			iVar3 = 7;
			iVar4 = 2;
			iVar1 = 139;
			iVar5 = 10;
			break;
		
		case 125:
			StringCopy(&Var2, "PROPS_P1_E7_3", 16);
			iVar3 = 7;
			iVar4 = 3;
			iVar1 = 149;
			iVar5 = 10;
			break;
		
		case 126:
			StringCopy(&Var2, "PROPS_P1_E7_4", 16);
			iVar3 = 7;
			iVar4 = 4;
			iVar1 = 135;
			iVar5 = 10;
			break;
		
		case 127:
			StringCopy(&Var2, "PROPS_P1_E7_5", 16);
			iVar3 = 7;
			iVar4 = 5;
			iVar1 = 138;
			iVar5 = 10;
			break;
		
		case 128:
			StringCopy(&Var2, "PROPS_P1_E7_6", 16);
			iVar3 = 7;
			iVar4 = 6;
			iVar1 = 140;
			iVar5 = 10;
			break;
		
		case 129:
			StringCopy(&Var2, "PROPS_P1_E7_7", 16);
			iVar3 = 7;
			iVar4 = 7;
			iVar1 = 145;
			iVar5 = 10;
			break;
		
		case 130:
			StringCopy(&Var2, "PROPS_P1_E7_8", 16);
			iVar3 = 7;
			iVar4 = 8;
			iVar1 = 159;
			iVar5 = 10;
			break;
		
		case 131:
			StringCopy(&Var2, "PROPS_P1_E7_9", 16);
			iVar3 = 7;
			iVar4 = 9;
			iVar1 = 155;
			iVar5 = 10;
			break;
		
		case 132:
			StringCopy(&Var2, "PROPS_P1_E8_0", 16);
			iVar3 = 8;
			iVar4 = 0;
			iVar1 = 198;
			iVar5 = 10;
			break;
		
		case 133:
			StringCopy(&Var2, "PROPS_P1_E8_1", 16);
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 210;
			iVar5 = 10;
			break;
		
		case 134:
			StringCopy(&Var2, "PROPS_P1_E8_2", 16);
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 185;
			iVar5 = 10;
			break;
		
		case 135:
			StringCopy(&Var2, "PROPS_P1_E8_3", 16);
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 220;
			iVar5 = 10;
			break;
		
		case 136:
			StringCopy(&Var2, "PROPS_P1_E8_4", 16);
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 190;
			iVar5 = 10;
			break;
		
		case 137:
			StringCopy(&Var2, "PROPS_P1_E8_5", 16);
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 200;
			iVar5 = 10;
			break;
		
		case 138:
			StringCopy(&Var2, "PROPS_P1_E8_6", 16);
			iVar3 = 8;
			iVar4 = 6;
			iVar1 = 208;
			iVar5 = 10;
			break;
		
		case 139:
			StringCopy(&Var2, "PROPS_P1_E8_7", 16);
			iVar3 = 8;
			iVar4 = 7;
			iVar1 = 210;
			iVar5 = 10;
			break;
		
		case 140:
			StringCopy(&Var2, "PROPS_P1_E9_0", 16);
			iVar3 = 9;
			iVar4 = 0;
			iVar1 = 165;
			iVar5 = 10;
			break;
		
		case 141:
			StringCopy(&Var2, "PROPS_P1_E9_1", 16);
			iVar3 = 9;
			iVar4 = 1;
			iVar1 = 185;
			iVar5 = 10;
			break;
		
		case 142:
			StringCopy(&Var2, "PROPS_P1_E9_2", 16);
			iVar3 = 9;
			iVar4 = 2;
			iVar1 = 190;
			iVar5 = 10;
			break;
		
		case 143:
			StringCopy(&Var2, "PROPS_P1_E9_3", 16);
			iVar3 = 9;
			iVar4 = 3;
			iVar1 = 178;
			iVar5 = 10;
			break;
		
		case 144:
			StringCopy(&Var2, "PROPS_P1_E9_4", 16);
			iVar3 = 9;
			iVar4 = 4;
			iVar1 = 180;
			iVar5 = 10;
			break;
		
		case 145:
			StringCopy(&Var2, "PROPS_P1_E9_5", 16);
			iVar3 = 9;
			iVar4 = 5;
			iVar1 = 168;
			iVar5 = 10;
			break;
		
		case 146:
			StringCopy(&Var2, "PROPS_P1_E9_6", 16);
			iVar3 = 9;
			iVar4 = 6;
			iVar1 = 170;
			iVar5 = 10;
			break;
		
		case 147:
			StringCopy(&Var2, "PROPS_P1_E9_7", 16);
			iVar3 = 9;
			iVar4 = 7;
			iVar1 = 175;
			iVar5 = 10;
			break;
		
		case 148:
			StringCopy(&Var2, "PROPS_P1_E9_8", 16);
			iVar3 = 9;
			iVar4 = 8;
			iVar1 = 170;
			iVar5 = 10;
			break;
		
		case 149:
			StringCopy(&Var2, "PROPS_P1_E9_9", 16);
			iVar3 = 9;
			iVar4 = 9;
			iVar1 = 178;
			iVar5 = 10;
			break;
		
		case 150:
			StringCopy(&Var2, "PROPS_P1_E10_0", 16);
			iVar3 = 10;
			iVar4 = 0;
			iVar1 = 140;
			iVar5 = 10;
			break;
		
		case 151:
			StringCopy(&Var2, "PROPS_P1_E10_1", 16);
			iVar3 = 10;
			iVar4 = 1;
			iVar1 = 145;
			iVar5 = 10;
			break;
		
		case 152:
			StringCopy(&Var2, "PROPS_P1_E10_2", 16);
			iVar3 = 10;
			iVar4 = 2;
			iVar1 = 150;
			iVar5 = 10;
			break;
		
		case 153:
			StringCopy(&Var2, "PROPS_P1_E10_3", 16);
			iVar3 = 10;
			iVar4 = 3;
			iVar1 = 165;
			iVar5 = 10;
			break;
		
		case 154:
			StringCopy(&Var2, "PROPS_P1_E10_4", 16);
			iVar3 = 10;
			iVar4 = 4;
			iVar1 = 168;
			iVar5 = 10;
			break;
		
		case 155:
			StringCopy(&Var2, "PROPS_P1_E10_5", 16);
			iVar3 = 10;
			iVar4 = 5;
			iVar1 = 178;
			iVar5 = 10;
			break;
		
		case 156:
			StringCopy(&Var2, "PROPS_P1_E10_6", 16);
			iVar3 = 10;
			iVar4 = 6;
			iVar1 = 160;
			iVar5 = 10;
			break;
		
		case 157:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			iVar1 = 100;
			iVar5 = 10;
			break;
		
		case 10:
			StringCopy(&Var2, "PROPS_P1_H0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 320;
			iVar5 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "PROPS_P1_H3_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 1;
			iVar5 = 0;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 2;
			iVar5 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 3;
			iVar5 = 0;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 4;
			iVar5 = 0;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 5;
			iVar5 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 6;
			iVar5 = 0;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 7;
			iVar5 = 0;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 8;
			iVar5 = 0;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 26:
			StringCopy(&Var2, "PROPS_P1_H8_0", 16);
			iVar3 = 8;
			iVar4 = 0;
			iVar1 = 270;
			iVar5 = 0;
			break;
		
		case 27:
			StringCopy(&Var2, "PROPS_P1_H8_1", 16);
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 270;
			iVar5 = 0;
			break;
		
		case 28:
			StringCopy(&Var2, "PROPS_P1_H9_0", 16);
			iVar3 = 9;
			iVar4 = 0;
			iVar1 = 200;
			iVar5 = 0;
			break;
		
		case 29:
			StringCopy(&Var2, "PROPS_P1_H9_1", 16);
			iVar3 = 9;
			iVar4 = 1;
			iVar1 = 200;
			iVar5 = 0;
			break;
		
		case 30:
			StringCopy(&Var2, "PROPS_P1_H10_0", 16);
			iVar3 = 10;
			iVar4 = 0;
			iVar1 = 350;
			iVar5 = 0;
			break;
		
		case 31:
			StringCopy(&Var2, "PROPS_P1_H10_1", 16);
			iVar3 = 10;
			iVar4 = 1;
			iVar1 = 350;
			iVar5 = 0;
			break;
		
		case 32:
			StringCopy(&Var2, "PROPS_P1_H11_0", 16);
			iVar3 = 11;
			iVar4 = 0;
			iVar1 = 450;
			iVar5 = 0;
			break;
		
		case 33:
			StringCopy(&Var2, "PROPS_P1_H12_0", 16);
			iVar3 = 12;
			iVar4 = 0;
			iVar1 = 500;
			iVar5 = 0;
			break;
		
		case 34:
			StringCopy(&Var2, "PROPS_P1_H12_1", 16);
			iVar3 = 12;
			iVar4 = 1;
			iVar1 = 500;
			iVar5 = 0;
			break;
		
		case 35:
			StringCopy(&Var2, "PROPS_P1_H13_0", 16);
			iVar3 = 13;
			iVar4 = 0;
			iVar1 = 50;
			iVar5 = 0;
			break;
		
		case 36:
			StringCopy(&Var2, "PROPS_P1_H13_1", 16);
			iVar3 = 13;
			iVar4 = 1;
			iVar1 = 50;
			iVar5 = 0;
			break;
		
		case 37:
			StringCopy(&Var2, "PROPS_P1_H14_0", 16);
			iVar3 = 14;
			iVar4 = 0;
			iVar1 = 99;
			iVar5 = 0;
			break;
		
		case 38:
			StringCopy(&Var2, "PROPS_P1_H14_1", 16);
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 99;
			iVar5 = 0;
			break;
		
		case 39:
			StringCopy(&Var2, "PROPS_P1_H14_2", 16);
			iVar3 = 14;
			iVar4 = 2;
			iVar1 = 99;
			iVar5 = 0;
			break;
		
		case 40:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 15;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 41:
			StringCopy(&Var2, "PROPS_P1_H19_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 42:
			StringCopy(&Var2, "PROPS_P1_H19_1", 16);
			iVar3 = 16;
			iVar4 = 1;
			iVar5 = 0;
			break;
		
		case 43:
			StringCopy(&Var2, "PROPS_P1_H19_2", 16);
			iVar3 = 16;
			iVar4 = 2;
			iVar5 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "PROPS_P1_H19_3", 16);
			iVar3 = 16;
			iVar4 = 3;
			iVar5 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "PROPS_P1_H19_4", 16);
			iVar3 = 16;
			iVar4 = 4;
			iVar5 = 0;
			break;
		
		case 46:
			StringCopy(&Var2, "PROPS_P1_H19_5", 16);
			iVar3 = 16;
			iVar4 = 5;
			iVar5 = 0;
			break;
		
		case 47:
			StringCopy(&Var2, "PROPS_P1_H19_6", 16);
			iVar3 = 16;
			iVar4 = 6;
			iVar5 = 0;
			break;
		
		case 48:
			StringCopy(&Var2, "PROPS_P1_H19_7", 16);
			iVar3 = 16;
			iVar4 = 7;
			iVar5 = 0;
			break;
		
		case 49:
			StringCopy(&Var2, "PROPS_P1_H19_8", 16);
			iVar3 = 16;
			iVar4 = 8;
			iVar5 = 0;
			break;
		
		case 50:
			StringCopy(&Var2, "PROPS_P1_H19_9", 16);
			iVar3 = 16;
			iVar4 = 9;
			iVar5 = 0;
			break;
		
		case 51:
			StringCopy(&Var2, "PROPS_P1_H19_10", 16);
			iVar3 = 16;
			iVar4 = 10;
			iVar5 = 0;
			break;
		
		case 52:
			StringCopy(&Var2, "PROPS_P1_H19_11", 16);
			iVar3 = 16;
			iVar4 = 11;
			iVar5 = 0;
			break;
		
		case 53:
			StringCopy(&Var2, "PROPS_P1_H19_12", 16);
			iVar3 = 16;
			iVar4 = 12;
			iVar5 = 0;
			break;
		
		case 54:
			StringCopy(&Var2, "PROPS_P1_H19_13", 16);
			iVar3 = 16;
			iVar4 = 13;
			iVar5 = 0;
			break;
		
		case 55:
			StringCopy(&Var2, "PROPS_P1_H19_14", 16);
			iVar3 = 16;
			iVar4 = 14;
			iVar5 = 0;
			break;
		
		case 56:
			StringCopy(&Var2, "PROPS_P1_H19_15", 16);
			iVar3 = 16;
			iVar4 = 15;
			iVar5 = 0;
			break;
		
		case 57:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 17;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 58:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 17;
			iVar4 = 1;
			iVar5 = 0;
			break;
		
		case 59:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 17;
			iVar4 = 2;
			iVar5 = 0;
			break;
		
		case 60:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 17;
			iVar4 = 3;
			iVar5 = 0;
			break;
		
		case 61:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 17;
			iVar4 = 4;
			iVar5 = 0;
			break;
		
		case 62:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 17;
			iVar4 = 5;
			iVar5 = 0;
			break;
		
		case 63:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 18;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 64:
			StringCopy(&Var2, "PROPS_P1_H19_0", 16);
			iVar3 = 19;
			iVar4 = 0;
			iVar1 = 30;
			iVar5 = 0;
			break;
		
		case 65:
			StringCopy(&Var2, "PROPS_P1_H19_1", 16);
			iVar3 = 19;
			iVar4 = 1;
			iVar1 = 30;
			iVar5 = 0;
			break;
		
		case 66:
			StringCopy(&Var2, "PROPS_P1_H19_2", 16);
			iVar3 = 19;
			iVar4 = 2;
			iVar1 = 32;
			iVar5 = 0;
			break;
		
		case 67:
			StringCopy(&Var2, "PROPS_P1_H19_3", 16);
			iVar3 = 19;
			iVar4 = 3;
			iVar1 = 35;
			iVar5 = 0;
			break;
		
		case 68:
			StringCopy(&Var2, "PROPS_P1_H19_4", 16);
			iVar3 = 19;
			iVar4 = 4;
			iVar1 = 38;
			iVar5 = 0;
			break;
		
		case 69:
			StringCopy(&Var2, "PROPS_P1_H19_5", 16);
			iVar3 = 19;
			iVar4 = 5;
			iVar1 = 42;
			iVar5 = 0;
			break;
		
		case 70:
			StringCopy(&Var2, "PROPS_P1_H19_6", 16);
			iVar3 = 19;
			iVar4 = 6;
			iVar1 = 42;
			iVar5 = 0;
			break;
		
		case 71:
			StringCopy(&Var2, "PROPS_P1_H19_7", 16);
			iVar3 = 19;
			iVar4 = 7;
			iVar1 = 40;
			iVar5 = 0;
			break;
		
		case 72:
			StringCopy(&Var2, "PROPS_P1_H19_8", 16);
			iVar3 = 19;
			iVar4 = 8;
			iVar1 = 45;
			iVar5 = 0;
			break;
		
		case 73:
			StringCopy(&Var2, "PROPS_P1_H19_9", 16);
			iVar3 = 19;
			iVar4 = 9;
			iVar1 = 48;
			iVar5 = 0;
			break;
		
		case 74:
			StringCopy(&Var2, "PROPS_P1_H19_10", 16);
			iVar3 = 19;
			iVar4 = 10;
			iVar1 = 25;
			iVar5 = 0;
			break;
		
		case 75:
			StringCopy(&Var2, "PROPS_P1_H19_11", 16);
			iVar3 = 19;
			iVar4 = 11;
			iVar1 = 25;
			iVar5 = 0;
			break;
		
		case 76:
			StringCopy(&Var2, "PROPS_P1_H19_12", 16);
			iVar3 = 19;
			iVar4 = 12;
			iVar1 = 28;
			iVar5 = 0;
			break;
		
		case 77:
			StringCopy(&Var2, "PROPS_P1_H19_13", 16);
			iVar3 = 19;
			iVar4 = 13;
			iVar1 = 28;
			iVar5 = 0;
			break;
		
		case 78:
			StringCopy(&Var2, "PROPS_P1_H19_14", 16);
			iVar3 = 19;
			iVar4 = 14;
			iVar1 = 30;
			iVar5 = 0;
			break;
		
		case 79:
			StringCopy(&Var2, "PROPS_P1_H19_15", 16);
			iVar3 = 19;
			iVar4 = 15;
			iVar1 = 35;
			iVar5 = 0;
			break;
		
		case 80:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 20;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 81:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 21;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		default:
			func_233(iVar7, iParam0, 175);
			return;
			break;
	}
	func_222(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_253(int iParam0)//Position - 0x1AF91
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 13;
	Global_70671[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		default:
			func_233(iVar7, iParam0, 9);
			return;
			break;
	}
	func_222(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_254(int iParam0)//Position - 0x1B0E1
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 12;
	Global_70671[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "OUTFIT_P1_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 1:
			StringCopy(&Var2, "OUTFIT_P1_2", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "OUTFIT_P1_4", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "OUTFIT_P1_7", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "OUTFIT_P1_10", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "OUTFIT_P1_11", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "OUTFIT_P1_12", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "OUTFIT_P1_13", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 9:
			StringCopy(&Var2, "OUTFIT_P1_15", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 10:
			StringCopy(&Var2, "OUTFIT_P1_16", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "OUTFIT_P1_17", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 10000;
			break;
		
		case 12:
			StringCopy(&Var2, "OUTFIT_P1_18", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "OUTFIT_P1_19", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 105;
			break;
		
		case 14:
			StringCopy(&Var2, "OUTFIT_P1_20", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 105;
			break;
		
		case 15:
			StringCopy(&Var2, "OUTFIT_P1_21", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 105;
			break;
		
		case 16:
			StringCopy(&Var2, "OUTFIT_P1_22", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "OUTFIT_P1_23", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 18:
			StringCopy(&Var2, "OUTFIT_P1_24", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "OUTFIT_P1_25", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 20:
			StringCopy(&Var2, "OUTFIT_P1_26", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 21:
			StringCopy(&Var2, "OUTFIT_P1_27", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "OUTFIT_P1_28", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4000;
			break;
		
		case 23:
			StringCopy(&Var2, "OUTFIT_P1_29", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4500;
			break;
		
		case 24:
			StringCopy(&Var2, "OUTFIT_P1_30", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4500;
			break;
		
		case 25:
			StringCopy(&Var2, "OUTFIT_P1_31", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4650;
			break;
		
		case 26:
			StringCopy(&Var2, "OUTFIT_P1_32", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4900;
			break;
		
		case 27:
			StringCopy(&Var2, "OUTFIT_P1_33", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5000;
			break;
		
		case 28:
			StringCopy(&Var2, "OUTFIT_P1_34", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4750;
			break;
		
		case 29:
			StringCopy(&Var2, "OUTFIT_P1_35", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4750;
			break;
		
		case 30:
			StringCopy(&Var2, "OUTFIT_P1_36", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5200;
			break;
		
		case 31:
			StringCopy(&Var2, "OUTFIT_P1_37", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5200;
			break;
		
		case 32:
			StringCopy(&Var2, "OUTFIT_P1_38", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5500;
			break;
		
		case 33:
			StringCopy(&Var2, "OUTFIT_P1_39", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5900;
			break;
		
		case 34:
			StringCopy(&Var2, "OUTFIT_P1_40", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5900;
			break;
		
		case 35:
			StringCopy(&Var2, "OUTFIT_P1_41", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5900;
			break;
		
		case 36:
			StringCopy(&Var2, "OUTFIT_P1_42", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5900;
			break;
		
		case 37:
			StringCopy(&Var2, "OUTFIT_P1_43", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5900;
			break;
		
		case 38:
			StringCopy(&Var2, "OUTFIT_P1_47", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 3000;
			break;
		
		case 39:
			StringCopy(&Var2, "OUTFIT_P1_48", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 3000;
			break;
		
		case 40:
			StringCopy(&Var2, "OUTFIT_P1_49", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 3000;
			break;
		
		case 41:
			StringCopy(&Var2, "OUTFIT_P1_10", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 42:
			StringCopy(&Var2, "OUTFIT_P1_50", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 43:
			StringCopy(&Var2, "OUTFIT_P1_51", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "OUTFIT_P1_52", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "OUTFIT_P1_53", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 46:
			StringCopy(&Var2, "OUTFIT_P1_54", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		default:
			func_233(iVar7, iParam0, 47);
			return;
			break;
	}
	func_222(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_255(int iParam0)//Position - 0x1B5EB
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 11;
	Global_70671[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 1;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 2;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 3;
			break;
		
		case 5:
			StringCopy(&Var2, "JBIB_P1_1_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "JBIB_P1_1_1", 16);
			iVar3 = 2;
			iVar4 = 1;
			break;
		
		case 7:
			StringCopy(&Var2, "JBIB_P1_1_2", 16);
			iVar3 = 2;
			iVar4 = 2;
			break;
		
		case 8:
			StringCopy(&Var2, "JBIB_P1_1_3", 16);
			iVar3 = 2;
			iVar4 = 3;
			break;
		
		case 9:
			StringCopy(&Var2, "JBIB_P1_3_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			break;
		
		case 10:
			StringCopy(&Var2, "JBIB_P1_3_1", 16);
			iVar3 = 3;
			iVar4 = 1;
			break;
		
		case 11:
			StringCopy(&Var2, "JBIB_P1_3_2", 16);
			iVar3 = 3;
			iVar4 = 2;
			break;
		
		case 12:
			StringCopy(&Var2, "JBIB_P1_3_3", 16);
			iVar3 = 3;
			iVar4 = 3;
			break;
		
		case 13:
			StringCopy(&Var2, "JBIB_P1_3_4", 16);
			iVar3 = 3;
			iVar4 = 4;
			break;
		
		case 14:
			StringCopy(&Var2, "JBIB_P1_3_5", 16);
			iVar3 = 3;
			iVar4 = 5;
			break;
		
		case 15:
			StringCopy(&Var2, "JBIB_P1_3_6", 16);
			iVar3 = 3;
			iVar4 = 6;
			break;
		
		case 16:
			StringCopy(&Var2, "JBIB_P1_3_7", 16);
			iVar3 = 3;
			iVar4 = 7;
			break;
		
		case 17:
			StringCopy(&Var2, "JBIB_P1_3_8", 16);
			iVar3 = 3;
			iVar4 = 8;
			break;
		
		case 18:
			StringCopy(&Var2, "JBIB_P1_3_9", 16);
			iVar3 = 3;
			iVar4 = 9;
			break;
		
		case 19:
			StringCopy(&Var2, "JBIB_P1_3_10", 16);
			iVar3 = 3;
			iVar4 = 10;
			break;
		
		case 20:
			StringCopy(&Var2, "JBIB_P1_3_11", 16);
			iVar3 = 3;
			iVar4 = 11;
			break;
		
		case 21:
			StringCopy(&Var2, "JBIB_P1_3_12", 16);
			iVar3 = 3;
			iVar4 = 12;
			break;
		
		case 22:
			StringCopy(&Var2, "JBIB_P1_3_13", 16);
			iVar3 = 3;
			iVar4 = 13;
			break;
		
		case 23:
			StringCopy(&Var2, "JBIB_P1_3_14", 16);
			iVar3 = 3;
			iVar4 = 14;
			break;
		
		case 24:
			StringCopy(&Var2, "JBIB_P1_3_15", 16);
			iVar3 = 3;
			iVar4 = 15;
			break;
		
		case 25:
			StringCopy(&Var2, "JBIB_P1_3_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		case 26:
			StringCopy(&Var2, "JBIB_P1_3_1", 16);
			iVar3 = 4;
			iVar4 = 1;
			break;
		
		case 27:
			StringCopy(&Var2, "JBIB_P1_3_2", 16);
			iVar3 = 4;
			iVar4 = 2;
			break;
		
		case 28:
			StringCopy(&Var2, "JBIB_P1_3_3", 16);
			iVar3 = 4;
			iVar4 = 3;
			break;
		
		case 29:
			StringCopy(&Var2, "JBIB_P1_3_4", 16);
			iVar3 = 4;
			iVar4 = 4;
			break;
		
		case 30:
			StringCopy(&Var2, "JBIB_P1_3_5", 16);
			iVar3 = 4;
			iVar4 = 5;
			break;
		
		case 31:
			StringCopy(&Var2, "JBIB_P1_3_6", 16);
			iVar3 = 4;
			iVar4 = 6;
			break;
		
		case 32:
			StringCopy(&Var2, "JBIB_P1_3_7", 16);
			iVar3 = 4;
			iVar4 = 7;
			break;
		
		case 33:
			StringCopy(&Var2, "JBIB_P1_3_8", 16);
			iVar3 = 4;
			iVar4 = 8;
			break;
		
		case 34:
			StringCopy(&Var2, "JBIB_P1_3_9", 16);
			iVar3 = 4;
			iVar4 = 9;
			break;
		
		case 35:
			StringCopy(&Var2, "JBIB_P1_3_10", 16);
			iVar3 = 4;
			iVar4 = 10;
			break;
		
		case 36:
			StringCopy(&Var2, "JBIB_P1_3_11", 16);
			iVar3 = 4;
			iVar4 = 11;
			break;
		
		case 37:
			StringCopy(&Var2, "JBIB_P1_3_12", 16);
			iVar3 = 4;
			iVar4 = 12;
			break;
		
		case 38:
			StringCopy(&Var2, "JBIB_P1_3_13", 16);
			iVar3 = 4;
			iVar4 = 13;
			break;
		
		case 39:
			StringCopy(&Var2, "JBIB_P1_3_14", 16);
			iVar3 = 4;
			iVar4 = 14;
			break;
		
		case 40:
			StringCopy(&Var2, "JBIB_P1_3_15", 16);
			iVar3 = 4;
			iVar4 = 15;
			break;
		
		case 41:
			StringCopy(&Var2, "JBIB_P1_5_0", 16);
			iVar3 = 5;
			iVar4 = 0;
			break;
		
		case 42:
			StringCopy(&Var2, "JBIB_P1_6_0", 16);
			iVar3 = 6;
			iVar4 = 0;
			break;
		
		case 43:
			StringCopy(&Var2, "JBIB_P1_6_1", 16);
			iVar3 = 6;
			iVar4 = 1;
			break;
		
		case 44:
			StringCopy(&Var2, "JBIB_P1_7_0", 16);
			iVar3 = 7;
			iVar4 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "JBIB_P1_8_0", 16);
			iVar3 = 8;
			iVar4 = 0;
			break;
		
		case 46:
			StringCopy(&Var2, "JBIB_P1_9_0", 16);
			iVar3 = 9;
			iVar4 = 0;
			break;
		
		case 47:
			StringCopy(&Var2, "JBIB_P1_10_0", 16);
			iVar3 = 10;
			iVar4 = 0;
			break;
		
		case 48:
			StringCopy(&Var2, "JBIB_P1_10_1", 16);
			iVar3 = 10;
			iVar4 = 1;
			iVar1 = 48;
			break;
		
		case 49:
			StringCopy(&Var2, "JBIB_P1_10_2", 16);
			iVar3 = 10;
			iVar4 = 2;
			iVar1 = 35;
			break;
		
		case 50:
			StringCopy(&Var2, "JBIB_P1_10_3", 16);
			iVar3 = 10;
			iVar4 = 3;
			iVar1 = 32;
			break;
		
		case 51:
			StringCopy(&Var2, "JBIB_P1_10_4", 16);
			iVar3 = 10;
			iVar4 = 4;
			iVar1 = 35;
			break;
		
		case 52:
			StringCopy(&Var2, "JBIB_P1_10_5", 16);
			iVar3 = 10;
			iVar4 = 5;
			iVar1 = 48;
			break;
		
		case 53:
			StringCopy(&Var2, "JBIB_P1_10_6", 16);
			iVar3 = 10;
			iVar4 = 6;
			iVar1 = 52;
			break;
		
		case 54:
			StringCopy(&Var2, "JBIB_P1_10_7", 16);
			iVar3 = 10;
			iVar4 = 7;
			iVar1 = 38;
			break;
		
		case 55:
			StringCopy(&Var2, "JBIB_P1_10_8", 16);
			iVar3 = 10;
			iVar4 = 8;
			iVar1 = 42;
			break;
		
		case 56:
			StringCopy(&Var2, "JBIB_P1_10_9", 16);
			iVar3 = 10;
			iVar4 = 9;
			iVar1 = 38;
			break;
		
		case 57:
			StringCopy(&Var2, "JBIB_P1_10_10", 16);
			iVar3 = 10;
			iVar4 = 10;
			iVar1 = 35;
			break;
		
		case 58:
			StringCopy(&Var2, "JBIB_P1_10_11", 16);
			iVar3 = 10;
			iVar4 = 11;
			iVar1 = 48;
			break;
		
		case 59:
			StringCopy(&Var2, "JBIB_P1_10_12", 16);
			iVar3 = 10;
			iVar4 = 12;
			iVar1 = 42;
			break;
		
		case 60:
			StringCopy(&Var2, "JBIB_P1_10_13", 16);
			iVar3 = 10;
			iVar4 = 13;
			iVar1 = 45;
			break;
		
		case 61:
			StringCopy(&Var2, "JBIB_P1_10_14", 16);
			iVar3 = 10;
			iVar4 = 14;
			iVar1 = 45;
			break;
		
		case 62:
			StringCopy(&Var2, "JBIB_P1_10_15", 16);
			iVar3 = 10;
			iVar4 = 15;
			iVar1 = 49;
			break;
		
		default:
			func_233(iVar7, iParam0, 63);
			return;
			break;
	}
	func_222(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_256(int iParam0)//Position - 0x1BC58
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 7;
	Global_70671[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		default:
			func_233(iVar7, iParam0, 1);
			return;
			break;
	}
	func_222(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_257(int iParam0)//Position - 0x1BCCB
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 1;
	Global_70671[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "BERD_P1_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "BERD_P1_1_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "BERD_P1_2_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "BERD_P1_3_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "BERD_P1_4_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		default:
			func_233(iVar7, iParam0, 5);
			return;
			break;
	}
	func_222(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_258(int iParam0)//Position - 0x1BD9A
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 10;
	Global_70671[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 1;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 2;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 3;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 4;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 5;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 1;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 2;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 3;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 4;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 5;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 6;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 1;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 2;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 3;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 4;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 5;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 6;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 7;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 8;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 9;
			break;
		
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 10;
			break;
		
		case 27:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 11;
			break;
		
		case 28:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 12;
			break;
		
		case 29:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 13;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 14;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 15;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			break;
		
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 1;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 2;
			break;
		
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 3;
			break;
		
		case 36:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 4;
			break;
		
		case 37:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 5;
			break;
		
		case 38:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 6;
			break;
		
		case 39:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			break;
		
		case 40:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 1;
			break;
		
		case 41:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 2;
			break;
		
		case 42:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 3;
			break;
		
		case 43:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 4;
			break;
		
		case 44:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 5;
			break;
		
		case 45:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 6;
			break;
		
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 7;
			break;
		
		case 47:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			break;
		
		case 48:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 1;
			break;
		
		case 49:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 2;
			break;
		
		case 50:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 3;
			break;
		
		case 51:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			break;
		
		case 52:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			break;
		
		default:
			func_233(iVar7, iParam0, 53);
			return;
			break;
	}
	func_222(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_259(int iParam0)//Position - 0x1C2CA
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 9;
	Global_70671[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "SPEC2_P0_08_0", 16);
			iVar3 = 5;
			iVar4 = 0;
			iVar1 = 125;
			break;
		
		case 6:
			StringCopy(&Var2, "SPEC2_P0_08_1", 16);
			iVar3 = 5;
			iVar4 = 1;
			iVar1 = 150;
			break;
		
		case 7:
			StringCopy(&Var2, "SPEC2_P0_08_2", 16);
			iVar3 = 5;
			iVar4 = 2;
			iVar1 = 175;
			break;
		
		case 8:
			StringCopy(&Var2, "SPEC2_P0_08_3", 16);
			iVar3 = 5;
			iVar4 = 3;
			iVar1 = 85;
			break;
		
		case 9:
			StringCopy(&Var2, "SPEC2_P0_08_4", 16);
			iVar3 = 5;
			iVar4 = 4;
			iVar1 = 150;
			break;
		
		case 10:
			StringCopy(&Var2, "SPEC2_P0_08_5", 16);
			iVar3 = 5;
			iVar4 = 5;
			iVar1 = 175;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			break;
		
		default:
			func_233(iVar7, iParam0, 12);
			return;
			break;
	}
	func_222(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_260(int iParam0)//Position - 0x1C460
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 8;
	Global_70671[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "SPEC_P1_9_0", 16);
			iVar3 = 9;
			iVar4 = 0;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "SPEC_P1_11_0", 16);
			iVar3 = 11;
			iVar4 = 0;
			iVar1 = 195;
			break;
		
		case 12:
			StringCopy(&Var2, "SPEC_P1_11_1", 16);
			iVar3 = 11;
			iVar4 = 1;
			iVar1 = 195;
			break;
		
		case 13:
			StringCopy(&Var2, "SPEC_P1_11_2", 16);
			iVar3 = 11;
			iVar4 = 2;
			iVar1 = 195;
			break;
		
		case 14:
			StringCopy(&Var2, "SPEC_P1_11_3", 16);
			iVar3 = 11;
			iVar4 = 3;
			iVar1 = 250;
			break;
		
		case 15:
			StringCopy(&Var2, "SPEC_P1_11_4", 16);
			iVar3 = 11;
			iVar4 = 4;
			iVar1 = 250;
			break;
		
		case 16:
			StringCopy(&Var2, "SPEC_P1_11_5", 16);
			iVar3 = 11;
			iVar4 = 5;
			iVar1 = 250;
			break;
		
		case 17:
			StringCopy(&Var2, "SPEC_P1_11_6", 16);
			iVar3 = 11;
			iVar4 = 6;
			iVar1 = 195;
			break;
		
		case 18:
			StringCopy(&Var2, "SPEC_P1_11_7", 16);
			iVar3 = 11;
			iVar4 = 7;
			iVar1 = 250;
			break;
		
		case 19:
			StringCopy(&Var2, "SPEC_P1_11_8", 16);
			iVar3 = 11;
			iVar4 = 8;
			iVar1 = 250;
			break;
		
		case 20:
			StringCopy(&Var2, "SPEC_P1_11_9", 16);
			iVar3 = 11;
			iVar4 = 9;
			iVar1 = 250;
			break;
		
		case 21:
			StringCopy(&Var2, "SPEC_P1_11_10", 16);
			iVar3 = 11;
			iVar4 = 10;
			iVar1 = 250;
			break;
		
		case 22:
			StringCopy(&Var2, "SPEC_P1_11_11", 16);
			iVar3 = 11;
			iVar4 = 11;
			iVar1 = 195;
			break;
		
		case 23:
			StringCopy(&Var2, "SPEC_P1_11_12", 16);
			iVar3 = 11;
			iVar4 = 12;
			iVar1 = 250;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 13;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 14;
			iVar4 = 0;
			break;
		
		case 27:
			StringCopy(&Var2, "SPEC_P1_15_0", 16);
			iVar3 = 15;
			iVar4 = 0;
			break;
		
		case 28:
			StringCopy(&Var2, "SPEC_P1_15_1", 16);
			iVar3 = 15;
			iVar4 = 1;
			break;
		
		case 29:
			StringCopy(&Var2, "SPEC_P1_15_2", 16);
			iVar3 = 15;
			iVar4 = 2;
			break;
		
		case 30:
			StringCopy(&Var2, "SPEC_P1_15_3", 16);
			iVar3 = 15;
			iVar4 = 3;
			break;
		
		case 31:
			StringCopy(&Var2, "SPEC_P1_15_4", 16);
			iVar3 = 15;
			iVar4 = 4;
			break;
		
		case 32:
			StringCopy(&Var2, "SPEC_P1_15_5", 16);
			iVar3 = 15;
			iVar4 = 5;
			break;
		
		case 33:
			StringCopy(&Var2, "SPEC_P1_15_6", 16);
			iVar3 = 15;
			iVar4 = 6;
			break;
		
		case 34:
			StringCopy(&Var2, "SPEC_P1_15_7", 16);
			iVar3 = 15;
			iVar4 = 7;
			break;
		
		case 35:
			StringCopy(&Var2, "SPEC_P1_15_8", 16);
			iVar3 = 15;
			iVar4 = 8;
			break;
		
		case 36:
			StringCopy(&Var2, "SPEC_P1_15_9", 16);
			iVar3 = 15;
			iVar4 = 9;
			break;
		
		case 37:
			StringCopy(&Var2, "SPEC_P1_15_10", 16);
			iVar3 = 15;
			iVar4 = 10;
			break;
		
		case 38:
			StringCopy(&Var2, "SPEC_P1_15_11", 16);
			iVar3 = 15;
			iVar4 = 11;
			break;
		
		case 39:
			StringCopy(&Var2, "SPEC_P1_15_12", 16);
			iVar3 = 15;
			iVar4 = 12;
			break;
		
		case 40:
			StringCopy(&Var2, "SPEC_P1_15_13", 16);
			iVar3 = 15;
			iVar4 = 13;
			break;
		
		case 41:
			StringCopy(&Var2, "SPEC_P1_15_14", 16);
			iVar3 = 15;
			iVar4 = 14;
			break;
		
		case 42:
			StringCopy(&Var2, "SPEC_P1_15_15", 16);
			iVar3 = 15;
			iVar4 = 15;
			break;
		
		case 43:
			StringCopy(&Var2, "SPEC_P1_15_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "SPEC_P1_15_1", 16);
			iVar3 = 16;
			iVar4 = 1;
			break;
		
		case 45:
			StringCopy(&Var2, "SPEC_P1_15_2", 16);
			iVar3 = 16;
			iVar4 = 2;
			break;
		
		case 46:
			StringCopy(&Var2, "SPEC_P1_15_3", 16);
			iVar3 = 16;
			iVar4 = 3;
			break;
		
		case 47:
			StringCopy(&Var2, "SPEC_P1_15_4", 16);
			iVar3 = 16;
			iVar4 = 4;
			break;
		
		case 48:
			StringCopy(&Var2, "SPEC_P1_15_5", 16);
			iVar3 = 16;
			iVar4 = 5;
			break;
		
		case 49:
			StringCopy(&Var2, "SPEC_P1_15_6", 16);
			iVar3 = 16;
			iVar4 = 6;
			break;
		
		case 50:
			StringCopy(&Var2, "SPEC_P1_15_7", 16);
			iVar3 = 16;
			iVar4 = 7;
			break;
		
		case 51:
			StringCopy(&Var2, "SPEC_P1_15_8", 16);
			iVar3 = 16;
			iVar4 = 8;
			break;
		
		case 52:
			StringCopy(&Var2, "SPEC_P1_15_9", 16);
			iVar3 = 16;
			iVar4 = 9;
			break;
		
		case 53:
			StringCopy(&Var2, "SPEC_P1_15_10", 16);
			iVar3 = 16;
			iVar4 = 10;
			break;
		
		case 54:
			StringCopy(&Var2, "SPEC_P1_15_11", 16);
			iVar3 = 16;
			iVar4 = 11;
			break;
		
		case 55:
			StringCopy(&Var2, "SPEC_P1_15_12", 16);
			iVar3 = 16;
			iVar4 = 12;
			break;
		
		case 56:
			StringCopy(&Var2, "SPEC_P1_15_13", 16);
			iVar3 = 16;
			iVar4 = 13;
			break;
		
		case 57:
			StringCopy(&Var2, "SPEC_P1_15_14", 16);
			iVar3 = 16;
			iVar4 = 14;
			break;
		
		case 58:
			StringCopy(&Var2, "SPEC_P1_15_15", 16);
			iVar3 = 16;
			iVar4 = 15;
			break;
		
		case 59:
			StringCopy(&Var2, "SPEC_P1_15_0", 16);
			iVar3 = 17;
			iVar4 = 0;
			break;
		
		case 60:
			StringCopy(&Var2, "SPEC_P1_15_1", 16);
			iVar3 = 17;
			iVar4 = 1;
			break;
		
		case 61:
			StringCopy(&Var2, "SPEC_P1_15_2", 16);
			iVar3 = 17;
			iVar4 = 2;
			break;
		
		case 62:
			StringCopy(&Var2, "SPEC_P1_15_3", 16);
			iVar3 = 17;
			iVar4 = 3;
			break;
		
		case 63:
			StringCopy(&Var2, "SPEC_P1_15_4", 16);
			iVar3 = 17;
			iVar4 = 4;
			break;
		
		case 64:
			StringCopy(&Var2, "SPEC_P1_15_5", 16);
			iVar3 = 17;
			iVar4 = 5;
			break;
		
		case 65:
			StringCopy(&Var2, "SPEC_P1_15_6", 16);
			iVar3 = 17;
			iVar4 = 6;
			break;
		
		case 66:
			StringCopy(&Var2, "SPEC_P1_15_7", 16);
			iVar3 = 17;
			iVar4 = 7;
			break;
		
		case 67:
			StringCopy(&Var2, "SPEC_P1_15_8", 16);
			iVar3 = 17;
			iVar4 = 8;
			break;
		
		case 68:
			StringCopy(&Var2, "SPEC_P1_15_9", 16);
			iVar3 = 17;
			iVar4 = 9;
			break;
		
		case 69:
			StringCopy(&Var2, "SPEC_P1_15_10", 16);
			iVar3 = 17;
			iVar4 = 10;
			break;
		
		case 70:
			StringCopy(&Var2, "SPEC_P1_15_11", 16);
			iVar3 = 17;
			iVar4 = 11;
			break;
		
		case 71:
			StringCopy(&Var2, "SPEC_P1_15_12", 16);
			iVar3 = 17;
			iVar4 = 12;
			break;
		
		case 72:
			StringCopy(&Var2, "SPEC_P1_15_13", 16);
			iVar3 = 17;
			iVar4 = 13;
			break;
		
		case 73:
			StringCopy(&Var2, "SPEC_P1_15_14", 16);
			iVar3 = 17;
			iVar4 = 14;
			break;
		
		case 74:
			StringCopy(&Var2, "SPEC_P1_15_15", 16);
			iVar3 = 17;
			iVar4 = 15;
			break;
		
		case 75:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 18;
			iVar4 = 0;
			break;
		
		case 76:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 19;
			iVar4 = 0;
			break;
		
		default:
			func_233(iVar7, iParam0, 77);
			return;
			break;
	}
	func_222(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_261(int iParam0)//Position - 0x1CC5D
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 5;
	Global_70671[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		default:
			func_233(iVar7, iParam0, 7);
			return;
			break;
	}
	func_222(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_262(int iParam0)//Position - 0x1CD6C
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 6;
	Global_70671[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "FEET_P1_00_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "FEET_P1_00_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			iVar1 = 80;
			break;
		
		case 2:
			StringCopy(&Var2, "FEET_P1_00_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 80;
			break;
		
		case 3:
			StringCopy(&Var2, "FEET_P1_00_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 89;
			break;
		
		case 4:
			StringCopy(&Var2, "FEET_P1_00_4", 16);
			iVar3 = 0;
			iVar4 = 4;
			iVar1 = 45;
			break;
		
		case 5:
			StringCopy(&Var2, "FEET_P1_00_5", 16);
			iVar3 = 0;
			iVar4 = 5;
			iVar1 = 35;
			break;
		
		case 6:
			StringCopy(&Var2, "FEET_P1_00_6", 16);
			iVar3 = 0;
			iVar4 = 6;
			iVar1 = 89;
			break;
		
		case 7:
			StringCopy(&Var2, "FEET_P1_00_7", 16);
			iVar3 = 0;
			iVar4 = 7;
			iVar1 = 95;
			break;
		
		case 8:
			StringCopy(&Var2, "FEET_P1_00_8", 16);
			iVar3 = 0;
			iVar4 = 8;
			iVar1 = 115;
			break;
		
		case 9:
			StringCopy(&Var2, "FEET_P1_00_9", 16);
			iVar3 = 0;
			iVar4 = 9;
			iVar1 = 40;
			break;
		
		case 10:
			StringCopy(&Var2, "FEET_P1_00_10", 16);
			iVar3 = 0;
			iVar4 = 10;
			iVar1 = 145;
			break;
		
		case 11:
			StringCopy(&Var2, "FEET_P1_00_11", 16);
			iVar3 = 0;
			iVar4 = 11;
			iVar1 = 145;
			break;
		
		case 12:
			StringCopy(&Var2, "FEET_P1_01_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			break;
		
		case 18:
			StringCopy(&Var2, "FEET_P1_06_0", 16);
			iVar3 = 6;
			iVar4 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "FEET_P1_06_1", 16);
			iVar3 = 6;
			iVar4 = 1;
			iVar1 = 180;
			break;
		
		case 20:
			StringCopy(&Var2, "FEET_P1_06_2", 16);
			iVar3 = 6;
			iVar4 = 2;
			iVar1 = 80;
			break;
		
		case 21:
			StringCopy(&Var2, "FEET_P1_06_3", 16);
			iVar3 = 6;
			iVar4 = 3;
			iVar1 = 200;
			break;
		
		case 22:
			StringCopy(&Var2, "FEET_P1_06_4", 16);
			iVar3 = 6;
			iVar4 = 4;
			iVar1 = 220;
			break;
		
		case 23:
			StringCopy(&Var2, "FEET_P1_06_5", 16);
			iVar3 = 6;
			iVar4 = 5;
			iVar1 = 235;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 25:
			StringCopy(&Var2, "FEET_P1_08_0", 16);
			iVar3 = 8;
			iVar4 = 0;
			iVar1 = 870;
			break;
		
		case 26:
			StringCopy(&Var2, "FEET_P1_08_1", 16);
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 870;
			break;
		
		case 27:
			StringCopy(&Var2, "FEET_P1_08_2", 16);
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 870;
			break;
		
		case 28:
			StringCopy(&Var2, "FEET_P1_08_3", 16);
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 1275;
			break;
		
		case 29:
			StringCopy(&Var2, "FEET_P1_08_4", 16);
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 1275;
			break;
		
		case 30:
			StringCopy(&Var2, "FEET_P1_08_5", 16);
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 1275;
			break;
		
		case 31:
			StringCopy(&Var2, "FEET_P1_08_6", 16);
			iVar3 = 8;
			iVar4 = 6;
			iVar1 = 1275;
			break;
		
		case 32:
			StringCopy(&Var2, "FEET_P1_08_7", 16);
			iVar3 = 8;
			iVar4 = 7;
			iVar1 = 1275;
			break;
		
		case 33:
			StringCopy(&Var2, "FEET_P1_08_8", 16);
			iVar3 = 8;
			iVar4 = 8;
			iVar1 = 1275;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 35:
			StringCopy(&Var2, "FEET_P1_10_0", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 36:
			StringCopy(&Var2, "FEET_P1_11_0", 16);
			iVar3 = 11;
			iVar4 = 0;
			break;
		
		case 37:
			StringCopy(&Var2, "FEET_P1_11_1", 16);
			iVar3 = 11;
			iVar4 = 1;
			iVar1 = 50;
			break;
		
		case 38:
			StringCopy(&Var2, "FEET_P1_11_2", 16);
			iVar3 = 11;
			iVar4 = 2;
			iVar1 = 50;
			break;
		
		case 39:
			StringCopy(&Var2, "FEET_P1_11_3", 16);
			iVar3 = 11;
			iVar4 = 3;
			iVar1 = 50;
			break;
		
		case 40:
			StringCopy(&Var2, "FEET_P1_11_4", 16);
			iVar3 = 11;
			iVar4 = 4;
			iVar1 = 50;
			break;
		
		case 41:
			StringCopy(&Var2, "FEET_P1_11_5", 16);
			iVar3 = 11;
			iVar4 = 5;
			iVar1 = 50;
			break;
		
		case 42:
			StringCopy(&Var2, "FEET_P1_11_6", 16);
			iVar3 = 11;
			iVar4 = 6;
			iVar1 = 50;
			break;
		
		case 43:
			StringCopy(&Var2, "FEET_P1_11_7", 16);
			iVar3 = 11;
			iVar4 = 7;
			iVar1 = 50;
			break;
		
		case 44:
			StringCopy(&Var2, "FEET_P1_11_8", 16);
			iVar3 = 11;
			iVar4 = 8;
			iVar1 = 50;
			break;
		
		case 45:
			StringCopy(&Var2, "FEET_P1_11_9", 16);
			iVar3 = 11;
			iVar4 = 9;
			iVar1 = 50;
			break;
		
		case 46:
			StringCopy(&Var2, "FEET_P1_11_10", 16);
			iVar3 = 11;
			iVar4 = 10;
			iVar1 = 50;
			break;
		
		case 47:
			StringCopy(&Var2, "FEET_P1_11_11", 16);
			iVar3 = 11;
			iVar4 = 11;
			iVar1 = 50;
			break;
		
		case 48:
			StringCopy(&Var2, "FEET_P1_11_12", 16);
			iVar3 = 11;
			iVar4 = 12;
			iVar1 = 50;
			break;
		
		case 49:
			StringCopy(&Var2, "FEET_P1_11_13", 16);
			iVar3 = 11;
			iVar4 = 13;
			iVar1 = 50;
			break;
		
		case 50:
			StringCopy(&Var2, "FEET_P1_11_14", 16);
			iVar3 = 11;
			iVar4 = 14;
			iVar1 = 50;
			break;
		
		case 51:
			StringCopy(&Var2, "FEET_P1_11_15", 16);
			iVar3 = 11;
			iVar4 = 15;
			iVar1 = 50;
			break;
		
		case 52:
			StringCopy(&Var2, "FEET_P1_12_0", 16);
			iVar3 = 12;
			iVar4 = 0;
			break;
		
		case 53:
			StringCopy(&Var2, "FEET_P1_12_1", 16);
			iVar3 = 12;
			iVar4 = 1;
			iVar1 = 25;
			break;
		
		case 54:
			StringCopy(&Var2, "FEET_P1_12_2", 16);
			iVar3 = 12;
			iVar4 = 2;
			iVar1 = 20;
			break;
		
		case 55:
			StringCopy(&Var2, "FEET_P1_12_3", 16);
			iVar3 = 12;
			iVar4 = 3;
			iVar1 = 24;
			break;
		
		case 56:
			StringCopy(&Var2, "FEET_P1_12_4", 16);
			iVar3 = 12;
			iVar4 = 4;
			iVar1 = 25;
			break;
		
		case 57:
			StringCopy(&Var2, "FEET_P1_12_5", 16);
			iVar3 = 12;
			iVar4 = 5;
			iVar1 = 27;
			break;
		
		case 58:
			StringCopy(&Var2, "FEET_P1_12_6", 16);
			iVar3 = 12;
			iVar4 = 6;
			iVar1 = 29;
			break;
		
		case 59:
			StringCopy(&Var2, "FEET_P1_12_7", 16);
			iVar3 = 12;
			iVar4 = 7;
			iVar1 = 27;
			break;
		
		case 60:
			StringCopy(&Var2, "FEET_P1_12_8", 16);
			iVar3 = 12;
			iVar4 = 8;
			iVar1 = 25;
			break;
		
		case 61:
			StringCopy(&Var2, "FEET_P1_12_9", 16);
			iVar3 = 12;
			iVar4 = 9;
			iVar1 = 30;
			break;
		
		case 62:
			StringCopy(&Var2, "FEET_P1_12_10", 16);
			iVar3 = 12;
			iVar4 = 10;
			iVar1 = 28;
			break;
		
		case 63:
			StringCopy(&Var2, "FEET_P1_12_11", 16);
			iVar3 = 12;
			iVar4 = 11;
			iVar1 = 30;
			break;
		
		case 64:
			StringCopy(&Var2, "FEET_P1_13_0", 16);
			iVar3 = 13;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 65:
			StringCopy(&Var2, "FEET_P1_14_0", 16);
			iVar3 = 14;
			iVar4 = 0;
			iVar1 = 155;
			break;
		
		case 66:
			StringCopy(&Var2, "FEET_P1_14_1", 16);
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 155;
			break;
		
		case 67:
			StringCopy(&Var2, "FEET_P1_14_2", 16);
			iVar3 = 14;
			iVar4 = 2;
			iVar1 = 165;
			break;
		
		case 68:
			StringCopy(&Var2, "FEET_P1_14_3", 16);
			iVar3 = 14;
			iVar4 = 3;
			iVar1 = 170;
			break;
		
		case 69:
			StringCopy(&Var2, "FEET_P1_14_4", 16);
			iVar3 = 14;
			iVar4 = 4;
			iVar1 = 160;
			break;
		
		case 70:
			StringCopy(&Var2, "FEET_P1_14_5", 16);
			iVar3 = 14;
			iVar4 = 5;
			iVar1 = 165;
			break;
		
		case 71:
			StringCopy(&Var2, "FEET_P1_14_6", 16);
			iVar3 = 14;
			iVar4 = 6;
			iVar1 = 170;
			break;
		
		case 72:
			StringCopy(&Var2, "FEET_P1_14_7", 16);
			iVar3 = 14;
			iVar4 = 7;
			iVar1 = 160;
			break;
		
		case 73:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 15;
			iVar4 = 0;
			break;
		
		case 74:
			StringCopy(&Var2, "FEET_P1_16_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			iVar1 = 720;
			break;
		
		case 75:
			StringCopy(&Var2, "FEET_P1_16_1", 16);
			iVar3 = 16;
			iVar4 = 1;
			iVar1 = 680;
			break;
		
		case 76:
			StringCopy(&Var2, "FEET_P1_16_2", 16);
			iVar3 = 16;
			iVar4 = 2;
			iVar1 = 650;
			break;
		
		case 77:
			StringCopy(&Var2, "FEET_P1_16_3", 16);
			iVar3 = 16;
			iVar4 = 3;
			iVar1 = 670;
			break;
		
		case 78:
			StringCopy(&Var2, "FEET_P1_16_4", 16);
			iVar3 = 16;
			iVar4 = 4;
			iVar1 = 700;
			break;
		
		case 79:
			StringCopy(&Var2, "FEET_P1_16_5", 16);
			iVar3 = 16;
			iVar4 = 5;
			iVar1 = 680;
			break;
		
		case 80:
			StringCopy(&Var2, "FEET_P1_16_6", 16);
			iVar3 = 16;
			iVar4 = 6;
			iVar1 = 720;
			break;
		
		case 81:
			StringCopy(&Var2, "FEET_P1_16_7", 16);
			iVar3 = 16;
			iVar4 = 7;
			iVar1 = 740;
			break;
		
		case 82:
			StringCopy(&Var2, "FEET_P1_16_8", 16);
			iVar3 = 16;
			iVar4 = 8;
			iVar1 = 760;
			break;
		
		case 83:
			StringCopy(&Var2, "FEET_P1_16_9", 16);
			iVar3 = 16;
			iVar4 = 9;
			iVar1 = 780;
			break;
		
		case 84:
			StringCopy(&Var2, "FEET_P1_16_10", 16);
			iVar3 = 16;
			iVar4 = 10;
			iVar1 = 750;
			break;
		
		case 85:
			StringCopy(&Var2, "FEET_P1_16_11", 16);
			iVar3 = 16;
			iVar4 = 11;
			iVar1 = 700;
			break;
		
		case 86:
			StringCopy(&Var2, "FEET_P1_17_0", 16);
			iVar3 = 17;
			iVar4 = 0;
			iVar1 = 790;
			break;
		
		case 87:
			StringCopy(&Var2, "FEET_P1_17_1", 16);
			iVar3 = 17;
			iVar4 = 1;
			iVar1 = 750;
			break;
		
		case 88:
			StringCopy(&Var2, "FEET_P1_17_2", 16);
			iVar3 = 17;
			iVar4 = 2;
			iVar1 = 860;
			break;
		
		case 89:
			StringCopy(&Var2, "FEET_P1_17_3", 16);
			iVar3 = 17;
			iVar4 = 3;
			iVar1 = 750;
			break;
		
		case 90:
			StringCopy(&Var2, "FEET_P1_17_4", 16);
			iVar3 = 17;
			iVar4 = 4;
			iVar1 = 790;
			break;
		
		case 91:
			StringCopy(&Var2, "FEET_P1_17_5", 16);
			iVar3 = 17;
			iVar4 = 5;
			iVar1 = 840;
			break;
		
		case 92:
			StringCopy(&Var2, "FEET_P1_17_6", 16);
			iVar3 = 17;
			iVar4 = 6;
			iVar1 = 820;
			break;
		
		case 93:
			StringCopy(&Var2, "FEET_P1_17_7", 16);
			iVar3 = 17;
			iVar4 = 7;
			iVar1 = 800;
			break;
		
		case 94:
			StringCopy(&Var2, "FEET_P1_17_8", 16);
			iVar3 = 17;
			iVar4 = 8;
			iVar1 = 850;
			break;
		
		case 95:
			StringCopy(&Var2, "FEET_P1_17_9", 16);
			iVar3 = 17;
			iVar4 = 9;
			iVar1 = 870;
			break;
		
		case 96:
			StringCopy(&Var2, "FEET_P1_17_10", 16);
			iVar3 = 17;
			iVar4 = 10;
			iVar1 = 720;
			break;
		
		case 97:
			StringCopy(&Var2, "FEET_P1_17_11", 16);
			iVar3 = 17;
			iVar4 = 11;
			iVar1 = 740;
			break;
		
		case 98:
			StringCopy(&Var2, "FEET_P1_17_12", 16);
			iVar3 = 17;
			iVar4 = 12;
			iVar1 = 800;
			break;
		
		case 99:
			StringCopy(&Var2, "FEET_P1_17_13", 16);
			iVar3 = 17;
			iVar4 = 13;
			iVar1 = 750;
			break;
		
		case 100:
			StringCopy(&Var2, "FEET_P1_17_14", 16);
			iVar3 = 17;
			iVar4 = 14;
			iVar1 = 770;
			break;
		
		case 101:
			StringCopy(&Var2, "FEET_P1_17_15", 16);
			iVar3 = 17;
			iVar4 = 15;
			iVar1 = 860;
			break;
		
		case 102:
			StringCopy(&Var2, "FEET_P1_18_0", 16);
			iVar3 = 18;
			iVar4 = 0;
			iVar1 = 850;
			break;
		
		case 103:
			StringCopy(&Var2, "FEET_P1_18_1", 16);
			iVar3 = 18;
			iVar4 = 1;
			iVar1 = 800;
			break;
		
		case 104:
			StringCopy(&Var2, "FEET_P1_18_2", 16);
			iVar3 = 18;
			iVar4 = 2;
			iVar1 = 780;
			break;
		
		case 105:
			StringCopy(&Var2, "FEET_P1_18_3", 16);
			iVar3 = 18;
			iVar4 = 3;
			iVar1 = 890;
			break;
		
		case 106:
			StringCopy(&Var2, "FEET_P1_18_4", 16);
			iVar3 = 18;
			iVar4 = 4;
			iVar1 = 820;
			break;
		
		case 107:
			StringCopy(&Var2, "FEET_P1_18_5", 16);
			iVar3 = 18;
			iVar4 = 5;
			iVar1 = 840;
			break;
		
		case 108:
			StringCopy(&Var2, "FEET_P1_18_6", 16);
			iVar3 = 18;
			iVar4 = 6;
			iVar1 = 870;
			break;
		
		case 109:
			StringCopy(&Var2, "FEET_P1_18_7", 16);
			iVar3 = 18;
			iVar4 = 7;
			iVar1 = 930;
			break;
		
		case 110:
			StringCopy(&Var2, "FEET_P1_18_8", 16);
			iVar3 = 18;
			iVar4 = 8;
			iVar1 = 880;
			break;
		
		case 111:
			StringCopy(&Var2, "FEET_P1_18_9", 16);
			iVar3 = 18;
			iVar4 = 9;
			iVar1 = 900;
			break;
		
		case 112:
			StringCopy(&Var2, "FEET_P1_18_10", 16);
			iVar3 = 18;
			iVar4 = 10;
			iVar1 = 920;
			break;
		
		case 113:
			StringCopy(&Var2, "FEET_P1_18_11", 16);
			iVar3 = 18;
			iVar4 = 11;
			iVar1 = 970;
			break;
		
		case 114:
			StringCopy(&Var2, "FEET_P1_18_12", 16);
			iVar3 = 18;
			iVar4 = 12;
			iVar1 = 990;
			break;
		
		case 115:
			StringCopy(&Var2, "FEET_P1_18_13", 16);
			iVar3 = 18;
			iVar4 = 13;
			iVar1 = 960;
			break;
		
		case 116:
			StringCopy(&Var2, "FEET_P1_18_14", 16);
			iVar3 = 18;
			iVar4 = 14;
			iVar1 = 980;
			break;
		
		case 117:
			StringCopy(&Var2, "FEET_P1_18_15", 16);
			iVar3 = 18;
			iVar4 = 15;
			iVar1 = 950;
			break;
		
		case 118:
			StringCopy(&Var2, "FEET_P1_19_0", 16);
			iVar3 = 19;
			iVar4 = 0;
			iVar1 = 110;
			break;
		
		case 119:
			StringCopy(&Var2, "FEET_P1_19_1", 16);
			iVar3 = 19;
			iVar4 = 1;
			iVar1 = 115;
			break;
		
		case 120:
			StringCopy(&Var2, "FEET_P1_19_2", 16);
			iVar3 = 19;
			iVar4 = 2;
			iVar1 = 120;
			break;
		
		case 121:
			StringCopy(&Var2, "FEET_P1_19_3", 16);
			iVar3 = 19;
			iVar4 = 3;
			iVar1 = 110;
			break;
		
		case 122:
			StringCopy(&Var2, "FEET_P1_19_4", 16);
			iVar3 = 19;
			iVar4 = 4;
			iVar1 = 125;
			break;
		
		case 123:
			StringCopy(&Var2, "FEET_P1_19_5", 16);
			iVar3 = 19;
			iVar4 = 5;
			iVar1 = 128;
			break;
		
		case 124:
			StringCopy(&Var2, "FEET_P1_19_6", 16);
			iVar3 = 19;
			iVar4 = 6;
			iVar1 = 135;
			break;
		
		case 125:
			StringCopy(&Var2, "FEET_P1_19_7", 16);
			iVar3 = 19;
			iVar4 = 7;
			iVar1 = 130;
			break;
		
		case 126:
			StringCopy(&Var2, "FEET_P1_19_8", 16);
			iVar3 = 19;
			iVar4 = 8;
			iVar1 = 145;
			break;
		
		case 127:
			StringCopy(&Var2, "FEET_P1_19_9", 16);
			iVar3 = 19;
			iVar4 = 9;
			iVar1 = 110;
			break;
		
		case 128:
			StringCopy(&Var2, "FEET_P1_19_10", 16);
			iVar3 = 19;
			iVar4 = 10;
			iVar1 = 120;
			break;
		
		case 129:
			StringCopy(&Var2, "FEET_P1_19_11", 16);
			iVar3 = 19;
			iVar4 = 11;
			iVar1 = 150;
			break;
		
		case 130:
			StringCopy(&Var2, "FEET_P1_19_12", 16);
			iVar3 = 19;
			iVar4 = 12;
			iVar1 = 125;
			break;
		
		case 131:
			StringCopy(&Var2, "FEET_P1_19_13", 16);
			iVar3 = 19;
			iVar4 = 13;
			iVar1 = 120;
			break;
		
		case 132:
			StringCopy(&Var2, "FEET_P1_19_14", 16);
			iVar3 = 19;
			iVar4 = 14;
			iVar1 = 130;
			break;
		
		case 133:
			StringCopy(&Var2, "FEET_P1_19_15", 16);
			iVar3 = 19;
			iVar4 = 15;
			iVar1 = 110;
			break;
		
		default:
			func_233(iVar7, iParam0, 134);
			return;
			break;
	}
	func_222(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_263(int iParam0)//Position - 0x1DC96
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 4;
	Global_70671[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "LEGS_P1_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "LEGS_P1_0_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			iVar1 = 32;
			break;
		
		case 2:
			StringCopy(&Var2, "LEGS_P1_0_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 38;
			break;
		
		case 3:
			StringCopy(&Var2, "LEGS_P1_0_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 44;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 2;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 3;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 4;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 5;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "LEGS_P1_2_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "LEGS_P1_6_0", 16);
			iVar3 = 6;
			iVar4 = 0;
			break;
		
		case 15:
			StringCopy(&Var2, "LEGS_P1_6_1", 16);
			iVar3 = 6;
			iVar4 = 1;
			iVar1 = 690;
			break;
		
		case 16:
			StringCopy(&Var2, "LEGS_P1_6_2", 16);
			iVar3 = 6;
			iVar4 = 2;
			iVar1 = 720;
			break;
		
		case 17:
			StringCopy(&Var2, "LEGS_P1_6_3", 16);
			iVar3 = 6;
			iVar4 = 3;
			iVar1 = 850;
			break;
		
		case 18:
			StringCopy(&Var2, "LEGS_P1_6_4", 16);
			iVar3 = 6;
			iVar4 = 4;
			iVar1 = 850;
			break;
		
		case 19:
			StringCopy(&Var2, "LEGS_P1_6_5", 16);
			iVar3 = 6;
			iVar4 = 5;
			iVar1 = 740;
			break;
		
		case 20:
			StringCopy(&Var2, "LEGS_P1_6_6", 16);
			iVar3 = 6;
			iVar4 = 6;
			iVar1 = 750;
			break;
		
		case 21:
			StringCopy(&Var2, "LEGS_P1_6_7", 16);
			iVar3 = 6;
			iVar4 = 7;
			iVar1 = 790;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 24:
			StringCopy(&Var2, "LEGS_P1_8_0", 16);
			iVar3 = 8;
			iVar4 = 0;
			break;
		
		case 25:
			StringCopy(&Var2, "LEGS_P1_8_1", 16);
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 145;
			break;
		
		case 26:
			StringCopy(&Var2, "LEGS_P1_8_2", 16);
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 140;
			break;
		
		case 27:
			StringCopy(&Var2, "LEGS_P1_8_3", 16);
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 148;
			break;
		
		case 28:
			StringCopy(&Var2, "LEGS_P1_8_4", 16);
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 150;
			break;
		
		case 29:
			StringCopy(&Var2, "LEGS_P1_8_5", 16);
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 154;
			break;
		
		case 30:
			StringCopy(&Var2, "LEGS_P1_8_6", 16);
			iVar3 = 8;
			iVar4 = 6;
			iVar1 = 158;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 33:
			StringCopy(&Var2, "LEGS_P1_11_0", 16);
			iVar3 = 11;
			iVar4 = 0;
			iVar1 = 820;
			break;
		
		case 34:
			StringCopy(&Var2, "LEGS_P1_11_1", 16);
			iVar3 = 11;
			iVar4 = 1;
			iVar1 = 820;
			break;
		
		case 35:
			StringCopy(&Var2, "LEGS_P1_11_2", 16);
			iVar3 = 11;
			iVar4 = 2;
			iVar1 = 850;
			break;
		
		case 36:
			StringCopy(&Var2, "LEGS_P1_11_3", 16);
			iVar3 = 11;
			iVar4 = 3;
			iVar1 = 850;
			break;
		
		case 37:
			StringCopy(&Var2, "LEGS_P1_11_4", 16);
			iVar3 = 11;
			iVar4 = 4;
			iVar1 = 920;
			break;
		
		case 38:
			StringCopy(&Var2, "LEGS_P1_11_5", 16);
			iVar3 = 11;
			iVar4 = 5;
			iVar1 = 950;
			break;
		
		case 39:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			break;
		
		case 40:
			StringCopy(&Var2, "LEGS_P1_13_0", 16);
			iVar3 = 13;
			iVar4 = 0;
			break;
		
		case 41:
			StringCopy(&Var2, "LEGS_P1_13_1", 16);
			iVar3 = 13;
			iVar4 = 1;
			iVar1 = 45;
			break;
		
		case 42:
			StringCopy(&Var2, "LEGS_P1_13_2", 16);
			iVar3 = 13;
			iVar4 = 2;
			iVar1 = 48;
			break;
		
		case 43:
			StringCopy(&Var2, "LEGS_P1_13_3", 16);
			iVar3 = 13;
			iVar4 = 3;
			iVar1 = 45;
			break;
		
		case 44:
			StringCopy(&Var2, "LEGS_P1_13_4", 16);
			iVar3 = 13;
			iVar4 = 4;
			iVar1 = 48;
			break;
		
		case 45:
			StringCopy(&Var2, "LEGS_P1_13_5", 16);
			iVar3 = 13;
			iVar4 = 5;
			iVar1 = 52;
			break;
		
		case 46:
			StringCopy(&Var2, "LEGS_P1_13_6", 16);
			iVar3 = 13;
			iVar4 = 6;
			iVar1 = 55;
			break;
		
		case 47:
			StringCopy(&Var2, "LEGS_P1_13_7", 16);
			iVar3 = 13;
			iVar4 = 7;
			iVar1 = 58;
			break;
		
		case 48:
			StringCopy(&Var2, "LEGS_P1_13_8", 16);
			iVar3 = 13;
			iVar4 = 8;
			iVar1 = 60;
			break;
		
		case 49:
			StringCopy(&Var2, "LEGS_P1_13_9", 16);
			iVar3 = 13;
			iVar4 = 9;
			iVar1 = 58;
			break;
		
		case 50:
			StringCopy(&Var2, "LEGS_P1_13_10", 16);
			iVar3 = 13;
			iVar4 = 10;
			iVar1 = 62;
			break;
		
		case 51:
			StringCopy(&Var2, "LEGS_P1_13_11", 16);
			iVar3 = 13;
			iVar4 = 11;
			iVar1 = 65;
			break;
		
		case 52:
			StringCopy(&Var2, "LEGS_P1_14_0", 16);
			iVar3 = 14;
			iVar4 = 0;
			break;
		
		case 53:
			StringCopy(&Var2, "LEGS_P1_15_0", 16);
			iVar3 = 15;
			iVar4 = 0;
			break;
		
		case 54:
			StringCopy(&Var2, "LEGS_P1_15_1", 16);
			iVar3 = 15;
			iVar4 = 1;
			break;
		
		case 55:
			StringCopy(&Var2, "LEGS_P1_15_2", 16);
			iVar3 = 15;
			iVar4 = 2;
			break;
		
		case 56:
			StringCopy(&Var2, "LEGS_P1_15_3", 16);
			iVar3 = 15;
			iVar4 = 3;
			break;
		
		case 57:
			StringCopy(&Var2, "LEGS_P1_15_4", 16);
			iVar3 = 15;
			iVar4 = 4;
			break;
		
		case 58:
			StringCopy(&Var2, "LEGS_P1_15_5", 16);
			iVar3 = 15;
			iVar4 = 5;
			break;
		
		case 59:
			StringCopy(&Var2, "LEGS_P1_15_6", 16);
			iVar3 = 15;
			iVar4 = 6;
			break;
		
		case 60:
			StringCopy(&Var2, "LEGS_P1_15_7", 16);
			iVar3 = 15;
			iVar4 = 7;
			break;
		
		case 61:
			StringCopy(&Var2, "LEGS_P1_15_8", 16);
			iVar3 = 15;
			iVar4 = 8;
			break;
		
		case 62:
			StringCopy(&Var2, "LEGS_P1_15_9", 16);
			iVar3 = 15;
			iVar4 = 9;
			break;
		
		case 63:
			StringCopy(&Var2, "LEGS_P1_15_10", 16);
			iVar3 = 15;
			iVar4 = 10;
			break;
		
		case 64:
			StringCopy(&Var2, "LEGS_P1_15_11", 16);
			iVar3 = 15;
			iVar4 = 11;
			break;
		
		case 65:
			StringCopy(&Var2, "LEGS_P1_15_12", 16);
			iVar3 = 15;
			iVar4 = 12;
			break;
		
		case 66:
			StringCopy(&Var2, "LEGS_P1_15_13", 16);
			iVar3 = 15;
			iVar4 = 13;
			break;
		
		case 67:
			StringCopy(&Var2, "LEGS_P1_15_14", 16);
			iVar3 = 15;
			iVar4 = 14;
			break;
		
		case 68:
			StringCopy(&Var2, "LEGS_P1_15_15", 16);
			iVar3 = 15;
			iVar4 = 15;
			break;
		
		case 69:
			StringCopy(&Var2, "LEGS_P1_16_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 70:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 16;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 71:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 17;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 72:
			StringCopy(&Var2, "LEGS_P1_18_0", 16);
			iVar3 = 18;
			iVar4 = 0;
			break;
		
		case 73:
			StringCopy(&Var2, "LEGS_P1_18_1", 16);
			iVar3 = 18;
			iVar4 = 1;
			iVar1 = 160;
			break;
		
		case 74:
			StringCopy(&Var2, "LEGS_P1_18_2", 16);
			iVar3 = 18;
			iVar4 = 2;
			iVar1 = 180;
			break;
		
		case 75:
			StringCopy(&Var2, "LEGS_P1_18_3", 16);
			iVar3 = 18;
			iVar4 = 3;
			iVar1 = 180;
			break;
		
		case 76:
			StringCopy(&Var2, "LEGS_P1_18_4", 16);
			iVar3 = 18;
			iVar4 = 4;
			break;
		
		case 77:
			StringCopy(&Var2, "LEGS_P1_18_5", 16);
			iVar3 = 18;
			iVar4 = 5;
			break;
		
		case 78:
			StringCopy(&Var2, "LEGS_P1_19_0", 16);
			iVar3 = 19;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 79:
			StringCopy(&Var2, "LEGS_P1_20_0", 16);
			iVar3 = 20;
			iVar4 = 0;
			iVar1 = 118;
			break;
		
		case 80:
			StringCopy(&Var2, "LEGS_P1_20_1", 16);
			iVar3 = 20;
			iVar4 = 1;
			iVar1 = 120;
			break;
		
		case 81:
			StringCopy(&Var2, "LEGS_P1_20_2", 16);
			iVar3 = 20;
			iVar4 = 2;
			iVar1 = 128;
			break;
		
		case 82:
			StringCopy(&Var2, "LEGS_P1_20_3", 16);
			iVar3 = 20;
			iVar4 = 3;
			iVar1 = 128;
			break;
		
		case 83:
			StringCopy(&Var2, "LEGS_P1_20_4", 16);
			iVar3 = 20;
			iVar4 = 4;
			iVar1 = 130;
			break;
		
		case 84:
			StringCopy(&Var2, "LEGS_P1_20_5", 16);
			iVar3 = 20;
			iVar4 = 5;
			iVar1 = 145;
			break;
		
		case 85:
			StringCopy(&Var2, "LEGS_P1_20_6", 16);
			iVar3 = 20;
			iVar4 = 6;
			iVar1 = 138;
			break;
		
		case 86:
			StringCopy(&Var2, "LEGS_P1_20_7", 16);
			iVar3 = 20;
			iVar4 = 7;
			iVar1 = 132;
			break;
		
		case 87:
			StringCopy(&Var2, "LEGS_P1_20_8", 16);
			iVar3 = 20;
			iVar4 = 8;
			iVar1 = 148;
			break;
		
		case 88:
			StringCopy(&Var2, "LEGS_P1_21_0", 16);
			iVar3 = 21;
			iVar4 = 0;
			iVar1 = 118;
			break;
		
		case 89:
			StringCopy(&Var2, "LEGS_P1_21_1", 16);
			iVar3 = 21;
			iVar4 = 1;
			iVar1 = 118;
			break;
		
		case 90:
			StringCopy(&Var2, "LEGS_P1_21_2", 16);
			iVar3 = 21;
			iVar4 = 2;
			iVar1 = 118;
			break;
		
		case 91:
			StringCopy(&Var2, "LEGS_P1_21_3", 16);
			iVar3 = 21;
			iVar4 = 3;
			iVar1 = 129;
			break;
		
		case 92:
			StringCopy(&Var2, "LEGS_P1_21_4", 16);
			iVar3 = 21;
			iVar4 = 4;
			iVar1 = 135;
			break;
		
		case 93:
			StringCopy(&Var2, "LEGS_P1_21_5", 16);
			iVar3 = 21;
			iVar4 = 5;
			iVar1 = 135;
			break;
		
		case 94:
			StringCopy(&Var2, "LEGS_P1_21_6", 16);
			iVar3 = 21;
			iVar4 = 6;
			iVar1 = 118;
			break;
		
		case 95:
			StringCopy(&Var2, "LEGS_P1_21_7", 16);
			iVar3 = 21;
			iVar4 = 7;
			iVar1 = 118;
			break;
		
		case 96:
			StringCopy(&Var2, "LEGS_P1_21_8", 16);
			iVar3 = 21;
			iVar4 = 8;
			iVar1 = 118;
			break;
		
		case 97:
			StringCopy(&Var2, "LEGS_P1_22_0", 16);
			iVar3 = 22;
			iVar4 = 0;
			iVar1 = 55;
			break;
		
		case 98:
			StringCopy(&Var2, "LEGS_P1_22_1", 16);
			iVar3 = 22;
			iVar4 = 1;
			iVar1 = 55;
			break;
		
		case 99:
			StringCopy(&Var2, "LEGS_P1_22_2", 16);
			iVar3 = 22;
			iVar4 = 2;
			iVar1 = 59;
			break;
		
		case 100:
			StringCopy(&Var2, "LEGS_P1_22_3", 16);
			iVar3 = 22;
			iVar4 = 3;
			iVar1 = 59;
			break;
		
		case 101:
			StringCopy(&Var2, "LEGS_P1_22_4", 16);
			iVar3 = 22;
			iVar4 = 4;
			iVar1 = 65;
			break;
		
		case 102:
			StringCopy(&Var2, "LEGS_P1_22_5", 16);
			iVar3 = 22;
			iVar4 = 5;
			iVar1 = 65;
			break;
		
		case 103:
			StringCopy(&Var2, "LEGS_P1_22_6", 16);
			iVar3 = 22;
			iVar4 = 6;
			iVar1 = 69;
			break;
		
		case 104:
			StringCopy(&Var2, "LEGS_P1_22_7", 16);
			iVar3 = 22;
			iVar4 = 7;
			iVar1 = 69;
			break;
		
		case 105:
			StringCopy(&Var2, "LEGS_P1_22_8", 16);
			iVar3 = 22;
			iVar4 = 8;
			iVar1 = 75;
			break;
		
		case 106:
			StringCopy(&Var2, "LEGS_P1_22_9", 16);
			iVar3 = 22;
			iVar4 = 9;
			iVar1 = 75;
			break;
		
		case 107:
			StringCopy(&Var2, "LEGS_P1_22_10", 16);
			iVar3 = 22;
			iVar4 = 10;
			iVar1 = 65;
			break;
		
		case 108:
			StringCopy(&Var2, "LEGS_P1_22_11", 16);
			iVar3 = 22;
			iVar4 = 11;
			iVar1 = 65;
			break;
		
		case 109:
			StringCopy(&Var2, "LEGS_P1_22_12", 16);
			iVar3 = 22;
			iVar4 = 12;
			iVar1 = 65;
			break;
		
		case 110:
			StringCopy(&Var2, "LEGS_P1_22_13", 16);
			iVar3 = 22;
			iVar4 = 13;
			iVar1 = 65;
			break;
		
		case 111:
			StringCopy(&Var2, "LEGS_P1_23_0", 16);
			iVar3 = 23;
			iVar4 = 0;
			iVar1 = 38;
			break;
		
		case 112:
			StringCopy(&Var2, "LEGS_P1_23_1", 16);
			iVar3 = 23;
			iVar4 = 1;
			iVar1 = 38;
			break;
		
		case 113:
			StringCopy(&Var2, "LEGS_P1_23_2", 16);
			iVar3 = 23;
			iVar4 = 2;
			iVar1 = 28;
			break;
		
		case 114:
			StringCopy(&Var2, "LEGS_P1_23_3", 16);
			iVar3 = 23;
			iVar4 = 3;
			iVar1 = 34;
			break;
		
		case 115:
			StringCopy(&Var2, "LEGS_P1_23_4", 16);
			iVar3 = 23;
			iVar4 = 4;
			iVar1 = 36;
			break;
		
		case 116:
			StringCopy(&Var2, "LEGS_P1_23_5", 16);
			iVar3 = 23;
			iVar4 = 5;
			iVar1 = 32;
			break;
		
		default:
			func_233(iVar7, iParam0, 117);
			return;
			break;
	}
	func_222(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_264(int iParam0)//Position - 0x1E952
{
	if (iParam0 < 107)
	{
		func_267(iParam0);
	}
	else if (iParam0 < 227)
	{
		func_266(iParam0);
	}
	else
	{
		func_265(iParam0);
	}
	if (Global_70671[0 /*14*/].f_2 == -1)
	{
		func_233(3, iParam0, 318);
	}
}

void func_265(int iParam0)//Position - 0x1E997
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 3;
	Global_70671[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 227:
			StringCopy(&Var2, "TORSO_P1_18_0", 16);
			iVar3 = 23;
			iVar4 = 0;
			iVar6 = 3;
			break;
		
		case 228:
			StringCopy(&Var2, "TORSO_P1_18_1", 16);
			iVar3 = 23;
			iVar4 = 1;
			iVar6 = 3;
			break;
		
		case 229:
			StringCopy(&Var2, "TORSO_P1_18_2", 16);
			iVar3 = 23;
			iVar4 = 2;
			iVar6 = 3;
			break;
		
		case 230:
			StringCopy(&Var2, "TORSO_P1_18_3", 16);
			iVar3 = 23;
			iVar4 = 3;
			iVar6 = 3;
			break;
		
		case 231:
			StringCopy(&Var2, "TORSO_P1_18_4", 16);
			iVar3 = 23;
			iVar4 = 4;
			iVar6 = 3;
			break;
		
		case 232:
			StringCopy(&Var2, "TORSO_P1_18_5", 16);
			iVar3 = 23;
			iVar4 = 5;
			iVar6 = 3;
			break;
		
		case 233:
			StringCopy(&Var2, "TORSO_P1_18_6", 16);
			iVar3 = 23;
			iVar4 = 6;
			iVar6 = 3;
			break;
		
		case 234:
			StringCopy(&Var2, "TORSO_P1_18_7", 16);
			iVar3 = 23;
			iVar4 = 7;
			iVar6 = 3;
			break;
		
		case 235:
			StringCopy(&Var2, "TORSO_P1_18_8", 16);
			iVar3 = 23;
			iVar4 = 8;
			iVar6 = 3;
			break;
		
		case 236:
			StringCopy(&Var2, "TORSO_P1_18_9", 16);
			iVar3 = 23;
			iVar4 = 9;
			iVar6 = 3;
			break;
		
		case 237:
			StringCopy(&Var2, "TORSO_P1_18_10", 16);
			iVar3 = 23;
			iVar4 = 10;
			iVar6 = 3;
			break;
		
		case 238:
			StringCopy(&Var2, "TORSO_P1_18_11", 16);
			iVar3 = 23;
			iVar4 = 11;
			iVar6 = 3;
			break;
		
		case 239:
			StringCopy(&Var2, "TORSO_P1_18_12", 16);
			iVar3 = 23;
			iVar4 = 12;
			iVar6 = 3;
			break;
		
		case 240:
			StringCopy(&Var2, "TORSO_P1_18_13", 16);
			iVar3 = 23;
			iVar4 = 13;
			iVar6 = 3;
			break;
		
		case 241:
			StringCopy(&Var2, "TORSO_P1_18_14", 16);
			iVar3 = 23;
			iVar4 = 14;
			iVar6 = 3;
			break;
		
		case 242:
			StringCopy(&Var2, "TORSO_P1_18_15", 16);
			iVar3 = 23;
			iVar4 = 15;
			iVar6 = 3;
			break;
		
		case 243:
			StringCopy(&Var2, "TORSO_P1_24_0", 16);
			iVar3 = 24;
			iVar4 = 0;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 244:
			StringCopy(&Var2, "TORSO_P1_24_1", 16);
			iVar3 = 24;
			iVar4 = 1;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 245:
			StringCopy(&Var2, "TORSO_P1_24_2", 16);
			iVar3 = 24;
			iVar4 = 2;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 246:
			StringCopy(&Var2, "TORSO_P1_24_3", 16);
			iVar3 = 24;
			iVar4 = 3;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 247:
			StringCopy(&Var2, "TORSO_P1_24_4", 16);
			iVar3 = 24;
			iVar4 = 4;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 248:
			StringCopy(&Var2, "TORSO_P1_24_5", 16);
			iVar3 = 24;
			iVar4 = 5;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 249:
			StringCopy(&Var2, "TORSO_P1_24_6", 16);
			iVar3 = 24;
			iVar4 = 6;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 250:
			StringCopy(&Var2, "TORSO_P1_24_7", 16);
			iVar3 = 24;
			iVar4 = 7;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 251:
			StringCopy(&Var2, "TORSO_P1_24_8", 16);
			iVar3 = 24;
			iVar4 = 8;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 252:
			StringCopy(&Var2, "TORSO_P1_24_9", 16);
			iVar3 = 24;
			iVar4 = 9;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 253:
			StringCopy(&Var2, "TORSO_P1_24_10", 16);
			iVar3 = 24;
			iVar4 = 10;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 254:
			StringCopy(&Var2, "TORSO_P1_24_11", 16);
			iVar3 = 24;
			iVar4 = 11;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 255:
			StringCopy(&Var2, "TORSO_P1_24_12", 16);
			iVar3 = 24;
			iVar4 = 12;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 256:
			StringCopy(&Var2, "TORSO_P1_24_13", 16);
			iVar3 = 24;
			iVar4 = 13;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 257:
			StringCopy(&Var2, "TORSO_P1_24_14", 16);
			iVar3 = 24;
			iVar4 = 14;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 258:
			StringCopy(&Var2, "TORSO_P1_24_15", 16);
			iVar3 = 24;
			iVar4 = 15;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 259:
			StringCopy(&Var2, "TORSO_P1_25_0", 16);
			iVar3 = 25;
			iVar4 = 0;
			bVar0 = true;
			iVar6 = 3;
			break;
		
		case 260:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 0;
			iVar6 = 1;
			break;
		
		case 261:
			StringCopy(&Var2, "TORSO_P1_27_0", 16);
			iVar3 = 27;
			iVar4 = 0;
			iVar1 = 150;
			break;
		
		case 262:
			StringCopy(&Var2, "TORSO_P1_27_1", 16);
			iVar3 = 27;
			iVar4 = 1;
			iVar1 = 160;
			break;
		
		case 263:
			StringCopy(&Var2, "TORSO_P1_27_2", 16);
			iVar3 = 27;
			iVar4 = 2;
			iVar1 = 150;
			break;
		
		case 264:
			StringCopy(&Var2, "TORSO_P1_27_3", 16);
			iVar3 = 27;
			iVar4 = 3;
			iVar1 = 150;
			break;
		
		case 265:
			StringCopy(&Var2, "TORSO_P1_27_4", 16);
			iVar3 = 27;
			iVar4 = 4;
			iVar1 = 160;
			break;
		
		case 266:
			StringCopy(&Var2, "TORSO_P1_27_5", 16);
			iVar3 = 27;
			iVar4 = 5;
			iVar1 = 160;
			break;
		
		case 267:
			StringCopy(&Var2, "TORSO_P1_28_0", 16);
			iVar3 = 28;
			iVar4 = 0;
			iVar1 = 88;
			break;
		
		case 268:
			StringCopy(&Var2, "TORSO_P1_28_1", 16);
			iVar3 = 28;
			iVar4 = 1;
			iVar1 = 60;
			break;
		
		case 269:
			StringCopy(&Var2, "TORSO_P1_28_2", 16);
			iVar3 = 28;
			iVar4 = 2;
			iVar1 = 70;
			break;
		
		case 270:
			StringCopy(&Var2, "TORSO_P1_28_3", 16);
			iVar3 = 28;
			iVar4 = 3;
			iVar1 = 80;
			break;
		
		case 271:
			StringCopy(&Var2, "TORSO_P1_28_4", 16);
			iVar3 = 28;
			iVar4 = 4;
			iVar1 = 90;
			break;
		
		case 272:
			StringCopy(&Var2, "TORSO_P1_28_5", 16);
			iVar3 = 28;
			iVar4 = 5;
			iVar1 = 80;
			break;
		
		case 273:
			StringCopy(&Var2, "TORSO_P1_28_6", 16);
			iVar3 = 28;
			iVar4 = 6;
			iVar1 = 70;
			break;
		
		case 274:
			StringCopy(&Var2, "TORSO_P1_28_7", 16);
			iVar3 = 28;
			iVar4 = 7;
			iVar1 = 95;
			break;
		
		case 275:
			StringCopy(&Var2, "TORSO_P1_28_8", 16);
			iVar3 = 28;
			iVar4 = 8;
			iVar1 = 105;
			break;
		
		case 276:
			StringCopy(&Var2, "TORSO_P1_28_9", 16);
			iVar3 = 28;
			iVar4 = 9;
			iVar1 = 95;
			break;
		
		case 277:
			StringCopy(&Var2, "TORSO_P1_28_10", 16);
			iVar3 = 28;
			iVar4 = 10;
			iVar1 = 110;
			break;
		
		case 278:
			StringCopy(&Var2, "TORSO_P1_28_11", 16);
			iVar3 = 28;
			iVar4 = 11;
			iVar1 = 98;
			break;
		
		case 279:
			StringCopy(&Var2, "TORSO_P1_28_12", 16);
			iVar3 = 28;
			iVar4 = 12;
			iVar1 = 88;
			break;
		
		case 280:
			StringCopy(&Var2, "TORSO_P1_28_13", 16);
			iVar3 = 28;
			iVar4 = 13;
			iVar1 = 98;
			break;
		
		case 281:
			StringCopy(&Var2, "TORSO_P1_28_14", 16);
			iVar3 = 28;
			iVar4 = 14;
			iVar1 = 110;
			break;
		
		case 282:
			StringCopy(&Var2, "TORSO_P1_28_15", 16);
			iVar3 = 28;
			iVar4 = 15;
			iVar1 = 98;
			break;
		
		case 283:
			StringCopy(&Var2, "TORSO_P1_29_0", 16);
			iVar3 = 29;
			iVar4 = 0;
			iVar1 = 250;
			break;
		
		case 284:
			StringCopy(&Var2, "TORSO_P1_29_1", 16);
			iVar3 = 29;
			iVar4 = 1;
			iVar1 = 270;
			break;
		
		case 285:
			StringCopy(&Var2, "TORSO_P1_29_2", 16);
			iVar3 = 29;
			iVar4 = 2;
			iVar1 = 280;
			break;
		
		case 286:
			StringCopy(&Var2, "TORSO_P1_29_3", 16);
			iVar3 = 29;
			iVar4 = 3;
			iVar1 = 275;
			break;
		
		case 287:
			StringCopy(&Var2, "TORSO_P1_29_4", 16);
			iVar3 = 29;
			iVar4 = 4;
			iVar1 = 290;
			break;
		
		case 288:
			StringCopy(&Var2, "TORSO_P1_29_5", 16);
			iVar3 = 29;
			iVar4 = 5;
			iVar1 = 35;
			break;
		
		case 289:
			StringCopy(&Var2, "TORSO_P1_29_6", 16);
			iVar3 = 29;
			iVar4 = 6;
			iVar1 = 35;
			break;
		
		case 290:
			StringCopy(&Var2, "TORSO_P1_29_7", 16);
			iVar3 = 29;
			iVar4 = 7;
			iVar1 = 35;
			break;
		
		case 291:
			StringCopy(&Var2, "TORSO_P1_29_8", 16);
			iVar3 = 29;
			iVar4 = 8;
			iVar1 = 295;
			break;
		
		case 292:
			StringCopy(&Var2, "TORSO_P1_29_9", 16);
			iVar3 = 29;
			iVar4 = 9;
			iVar1 = 35;
			break;
		
		case 293:
			StringCopy(&Var2, "TORSO_P1_29_10", 16);
			iVar3 = 29;
			iVar4 = 10;
			iVar1 = 35;
			break;
		
		case 294:
			StringCopy(&Var2, "TORSO_P1_29_11", 16);
			iVar3 = 29;
			iVar4 = 11;
			iVar1 = 35;
			break;
		
		case 295:
			StringCopy(&Var2, "TORSO_P1_29_12", 16);
			iVar3 = 29;
			iVar4 = 12;
			break;
		
		case 296:
			StringCopy(&Var2, "TORSO_P1_30_0", 16);
			iVar3 = 30;
			iVar4 = 0;
			iVar1 = 1750;
			break;
		
		case 297:
			StringCopy(&Var2, "TORSO_P1_30_1", 16);
			iVar3 = 30;
			iVar4 = 1;
			iVar1 = 1920;
			break;
		
		case 298:
			StringCopy(&Var2, "TORSO_P1_30_2", 16);
			iVar3 = 30;
			iVar4 = 2;
			iVar1 = 1890;
			break;
		
		case 299:
			StringCopy(&Var2, "TORSO_P1_30_3", 16);
			iVar3 = 30;
			iVar4 = 3;
			iVar1 = 1850;
			break;
		
		case 300:
			StringCopy(&Var2, "TORSO_P1_30_4", 16);
			iVar3 = 30;
			iVar4 = 4;
			iVar1 = 1750;
			break;
		
		case 301:
			StringCopy(&Var2, "TORSO_P1_30_5", 16);
			iVar3 = 30;
			iVar4 = 5;
			iVar1 = 1990;
			break;
		
		case 302:
			StringCopy(&Var2, "TORSO_P1_30_6", 16);
			iVar3 = 30;
			iVar4 = 6;
			iVar1 = 1820;
			break;
		
		case 303:
			StringCopy(&Var2, "TORSO_P1_30_7", 16);
			iVar3 = 30;
			iVar4 = 7;
			iVar1 = 1990;
			break;
		
		case 304:
			StringCopy(&Var2, "TORSO_P1_30_8", 16);
			iVar3 = 30;
			iVar4 = 8;
			iVar1 = 1920;
			break;
		
		case 305:
			StringCopy(&Var2, "TORSO_P1_30_9", 16);
			iVar3 = 30;
			iVar4 = 9;
			iVar1 = 1850;
			break;
		
		case 306:
			StringCopy(&Var2, "TORSO_P1_30_10", 16);
			iVar3 = 30;
			iVar4 = 10;
			iVar1 = 1990;
			break;
		
		case 307:
			StringCopy(&Var2, "TORSO_P1_30_11", 16);
			iVar3 = 30;
			iVar4 = 11;
			iVar1 = 1790;
			break;
		
		case 308:
			StringCopy(&Var2, "TORSO_P1_30_12", 16);
			iVar3 = 30;
			iVar4 = 12;
			iVar1 = 1790;
			break;
		
		case 309:
			StringCopy(&Var2, "TORSO_P1_31_0", 16);
			iVar3 = 31;
			iVar4 = 0;
			iVar1 = 69;
			break;
		
		case 310:
			StringCopy(&Var2, "TORSO_P1_31_1", 16);
			iVar3 = 31;
			iVar4 = 1;
			iVar1 = 75;
			break;
		
		case 311:
			StringCopy(&Var2, "TORSO_P1_31_2", 16);
			iVar3 = 31;
			iVar4 = 2;
			iVar1 = 75;
			break;
		
		case 312:
			StringCopy(&Var2, "TORSO_P1_31_3", 16);
			iVar3 = 31;
			iVar4 = 3;
			iVar1 = 79;
			break;
		
		case 313:
			StringCopy(&Var2, "TORSO_P1_31_4", 16);
			iVar3 = 31;
			iVar4 = 4;
			iVar1 = 79;
			break;
		
		case 314:
			StringCopy(&Var2, "TORSO_P1_31_5", 16);
			iVar3 = 31;
			iVar4 = 5;
			iVar1 = 89;
			break;
		
		case 315:
			StringCopy(&Var2, "TORSO_P1_31_6", 16);
			iVar3 = 31;
			iVar4 = 6;
			iVar1 = 85;
			break;
		
		case 316:
			StringCopy(&Var2, "TORSO_P1_31_7", 16);
			iVar3 = 31;
			iVar4 = 7;
			iVar1 = 85;
			break;
		
		case 317:
			StringCopy(&Var2, "TORSO_P1_31_8", 16);
			iVar3 = 31;
			iVar4 = 8;
			break;
		
		default:
			return;
			break;
	}
	func_222(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_266(int iParam0)//Position - 0x1F43C
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 3;
	Global_70671[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 107:
			StringCopy(&Var2, "TORSO_P1_12_0", 16);
			iVar3 = 12;
			iVar4 = 0;
			iVar1 = 195;
			break;
		
		case 108:
			StringCopy(&Var2, "TORSO_P1_12_1", 16);
			iVar3 = 12;
			iVar4 = 1;
			iVar1 = 420;
			break;
		
		case 109:
			StringCopy(&Var2, "TORSO_P1_12_2", 16);
			iVar3 = 12;
			iVar4 = 2;
			iVar1 = 390;
			break;
		
		case 110:
			StringCopy(&Var2, "TORSO_P1_12_3", 16);
			iVar3 = 12;
			iVar4 = 3;
			iVar1 = 450;
			break;
		
		case 111:
			StringCopy(&Var2, "TORSO_P1_12_4", 16);
			iVar3 = 12;
			iVar4 = 4;
			iVar1 = 400;
			break;
		
		case 112:
			StringCopy(&Var2, "TORSO_P1_12_5", 16);
			iVar3 = 12;
			iVar4 = 5;
			iVar1 = 390;
			break;
		
		case 113:
			StringCopy(&Var2, "TORSO_P1_12_6", 16);
			iVar3 = 12;
			iVar4 = 6;
			iVar1 = 570;
			break;
		
		case 114:
			StringCopy(&Var2, "TORSO_P1_12_7", 16);
			iVar3 = 12;
			iVar4 = 7;
			iVar1 = 390;
			break;
		
		case 115:
			StringCopy(&Var2, "TORSO_P1_12_8", 16);
			iVar3 = 12;
			iVar4 = 8;
			iVar1 = 470;
			break;
		
		case 116:
			StringCopy(&Var2, "TORSO_P1_12_9", 16);
			iVar3 = 12;
			iVar4 = 9;
			iVar1 = 390;
			break;
		
		case 117:
			StringCopy(&Var2, "TORSO_P1_12_10", 16);
			iVar3 = 12;
			iVar4 = 10;
			iVar1 = 520;
			break;
		
		case 118:
			StringCopy(&Var2, "TORSO_P1_12_11", 16);
			iVar3 = 12;
			iVar4 = 11;
			iVar1 = 490;
			break;
		
		case 119:
			StringCopy(&Var2, "TORSO_P1_12_12", 16);
			iVar3 = 12;
			iVar4 = 12;
			iVar1 = 490;
			break;
		
		case 120:
			StringCopy(&Var2, "TORSO_P1_12_13", 16);
			iVar3 = 12;
			iVar4 = 13;
			iVar1 = 590;
			break;
		
		case 121:
			StringCopy(&Var2, "TORSO_P1_12_14", 16);
			iVar3 = 12;
			iVar4 = 14;
			iVar1 = 560;
			break;
		
		case 122:
			StringCopy(&Var2, "TORSO_P1_12_15", 16);
			iVar3 = 12;
			iVar4 = 15;
			iVar1 = 520;
			break;
		
		case 123:
			StringCopy(&Var2, "TORSO_P1_13_0", 16);
			iVar3 = 13;
			iVar4 = 0;
			break;
		
		case 124:
			StringCopy(&Var2, "TORSO_P1_13_1", 16);
			iVar3 = 13;
			iVar4 = 1;
			break;
		
		case 125:
			StringCopy(&Var2, "TORSO_P1_13_2", 16);
			iVar3 = 13;
			iVar4 = 2;
			break;
		
		case 126:
			StringCopy(&Var2, "TORSO_P1_13_3", 16);
			iVar3 = 13;
			iVar4 = 3;
			iVar1 = 90;
			break;
		
		case 127:
			StringCopy(&Var2, "TORSO_P1_13_4", 16);
			iVar3 = 13;
			iVar4 = 4;
			iVar1 = 85;
			break;
		
		case 128:
			StringCopy(&Var2, "TORSO_P1_13_5", 16);
			iVar3 = 13;
			iVar4 = 5;
			iVar1 = 45;
			break;
		
		case 129:
			StringCopy(&Var2, "TORSO_P1_13_6", 16);
			iVar3 = 13;
			iVar4 = 6;
			iVar1 = 90;
			break;
		
		case 130:
			StringCopy(&Var2, "TORSO_P1_13_7", 16);
			iVar3 = 13;
			iVar4 = 7;
			iVar1 = 47;
			break;
		
		case 131:
			StringCopy(&Var2, "TORSO_P1_13_8", 16);
			iVar3 = 13;
			iVar4 = 8;
			iVar1 = 45;
			break;
		
		case 132:
			StringCopy(&Var2, "TORSO_P1_13_9", 16);
			iVar3 = 13;
			iVar4 = 9;
			iVar1 = 48;
			break;
		
		case 133:
			StringCopy(&Var2, "TORSO_P1_13_10", 16);
			iVar3 = 13;
			iVar4 = 10;
			iVar1 = 45;
			break;
		
		case 134:
			StringCopy(&Var2, "TORSO_P1_13_11", 16);
			iVar3 = 13;
			iVar4 = 11;
			iVar1 = 85;
			break;
		
		case 135:
			StringCopy(&Var2, "TORSO_P1_13_12", 16);
			iVar3 = 13;
			iVar4 = 12;
			iVar1 = 45;
			break;
		
		case 136:
			StringCopy(&Var2, "TORSO_P1_13_13", 16);
			iVar3 = 13;
			iVar4 = 13;
			iVar1 = 47;
			break;
		
		case 137:
			StringCopy(&Var2, "TORSO_P1_13_14", 16);
			iVar3 = 13;
			iVar4 = 14;
			iVar1 = 45;
			break;
		
		case 138:
			StringCopy(&Var2, "TORSO_P1_13_15", 16);
			iVar3 = 13;
			iVar4 = 15;
			iVar1 = 48;
			break;
		
		case 139:
			StringCopy(&Var2, "TORSO_P1_14_0", 16);
			iVar3 = 14;
			iVar4 = 0;
			iVar1 = 290;
			break;
		
		case 140:
			StringCopy(&Var2, "TORSO_P1_14_1", 16);
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 290;
			break;
		
		case 141:
			StringCopy(&Var2, "TORSO_P1_14_2", 16);
			iVar3 = 14;
			iVar4 = 2;
			iVar1 = 290;
			break;
		
		case 142:
			StringCopy(&Var2, "TORSO_P1_14_3", 16);
			iVar3 = 14;
			iVar4 = 3;
			iVar1 = 290;
			break;
		
		case 143:
			StringCopy(&Var2, "TORSO_P1_14_4", 16);
			iVar3 = 14;
			iVar4 = 4;
			iVar1 = 290;
			break;
		
		case 144:
			StringCopy(&Var2, "TORSO_P1_14_5", 16);
			iVar3 = 14;
			iVar4 = 5;
			iVar1 = 290;
			break;
		
		case 145:
			StringCopy(&Var2, "TORSO_P1_14_6", 16);
			iVar3 = 14;
			iVar4 = 6;
			iVar1 = 65;
			break;
		
		case 146:
			StringCopy(&Var2, "TORSO_P1_14_7", 16);
			iVar3 = 14;
			iVar4 = 7;
			iVar1 = 65;
			break;
		
		case 147:
			StringCopy(&Var2, "TORSO_P1_15_0", 16);
			iVar3 = 15;
			iVar4 = 0;
			iVar1 = 200;
			break;
		
		case 148:
			StringCopy(&Var2, "TORSO_P1_15_1", 16);
			iVar3 = 15;
			iVar4 = 1;
			iVar1 = 220;
			break;
		
		case 149:
			StringCopy(&Var2, "TORSO_P1_15_2", 16);
			iVar3 = 15;
			iVar4 = 2;
			iVar1 = 220;
			break;
		
		case 150:
			StringCopy(&Var2, "TORSO_P1_15_3", 16);
			iVar3 = 15;
			iVar4 = 3;
			iVar1 = 240;
			break;
		
		case 151:
			StringCopy(&Var2, "TORSO_P1_15_4", 16);
			iVar3 = 15;
			iVar4 = 4;
			break;
		
		case 152:
			StringCopy(&Var2, "TORSO_P1_15_5", 16);
			iVar3 = 15;
			iVar4 = 5;
			iVar1 = 250;
			break;
		
		case 153:
			StringCopy(&Var2, "TORSO_P1_15_6", 16);
			iVar3 = 15;
			iVar4 = 6;
			iVar1 = 260;
			break;
		
		case 154:
			StringCopy(&Var2, "TORSO_P1_15_7", 16);
			iVar3 = 15;
			iVar4 = 7;
			iVar1 = 40;
			break;
		
		case 155:
			StringCopy(&Var2, "TORSO_P1_15_8", 16);
			iVar3 = 15;
			iVar4 = 8;
			iVar1 = 50;
			break;
		
		case 156:
			StringCopy(&Var2, "TORSO_P1_15_9", 16);
			iVar3 = 15;
			iVar4 = 9;
			iVar1 = 45;
			break;
		
		case 157:
			StringCopy(&Var2, "TORSO_P1_15_10", 16);
			iVar3 = 15;
			iVar4 = 10;
			iVar1 = 40;
			break;
		
		case 158:
			StringCopy(&Var2, "TORSO_P1_15_11", 16);
			iVar3 = 15;
			iVar4 = 11;
			iVar1 = 55;
			break;
		
		case 159:
			StringCopy(&Var2, "TORSO_P1_16_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			break;
		
		case 160:
			StringCopy(&Var2, "TORSO_P1_17_0", 16);
			iVar3 = 17;
			iVar4 = 0;
			iVar1 = 40;
			break;
		
		case 161:
			StringCopy(&Var2, "TORSO_P1_17_1", 16);
			iVar3 = 17;
			iVar4 = 1;
			iVar1 = 50;
			break;
		
		case 162:
			StringCopy(&Var2, "TORSO_P1_17_2", 16);
			iVar3 = 17;
			iVar4 = 2;
			break;
		
		case 163:
			StringCopy(&Var2, "TORSO_P1_17_3", 16);
			iVar3 = 17;
			iVar4 = 3;
			iVar1 = 50;
			break;
		
		case 164:
			StringCopy(&Var2, "TORSO_P1_17_4", 16);
			iVar3 = 17;
			iVar4 = 4;
			iVar1 = 50;
			break;
		
		case 165:
			StringCopy(&Var2, "TORSO_P1_17_5", 16);
			iVar3 = 17;
			iVar4 = 5;
			iVar1 = 50;
			break;
		
		case 166:
			StringCopy(&Var2, "TORSO_P1_17_6", 16);
			iVar3 = 17;
			iVar4 = 6;
			iVar1 = 50;
			break;
		
		case 167:
			StringCopy(&Var2, "TORSO_P1_17_7", 16);
			iVar3 = 17;
			iVar4 = 7;
			iVar1 = 50;
			break;
		
		case 168:
			StringCopy(&Var2, "TORSO_P1_17_8", 16);
			iVar3 = 17;
			iVar4 = 8;
			iVar1 = 50;
			break;
		
		case 169:
			StringCopy(&Var2, "TORSO_P1_17_9", 16);
			iVar3 = 17;
			iVar4 = 9;
			iVar1 = 50;
			break;
		
		case 170:
			StringCopy(&Var2, "TORSO_P1_17_10", 16);
			iVar3 = 17;
			iVar4 = 10;
			iVar1 = 50;
			break;
		
		case 171:
			StringCopy(&Var2, "TORSO_P1_17_11", 16);
			iVar3 = 17;
			iVar4 = 11;
			iVar1 = 50;
			break;
		
		case 172:
			StringCopy(&Var2, "TORSO_P1_17_12", 16);
			iVar3 = 17;
			iVar4 = 12;
			iVar1 = 50;
			break;
		
		case 173:
			StringCopy(&Var2, "TORSO_P1_17_13", 16);
			iVar3 = 17;
			iVar4 = 13;
			iVar1 = 50;
			break;
		
		case 174:
			StringCopy(&Var2, "TORSO_P1_17_14", 16);
			iVar3 = 17;
			iVar4 = 14;
			iVar1 = 50;
			break;
		
		case 175:
			StringCopy(&Var2, "TORSO_P1_17_15", 16);
			iVar3 = 17;
			iVar4 = 15;
			iVar1 = 50;
			break;
		
		case 176:
			StringCopy(&Var2, "TORSO_P1_18_0", 16);
			iVar3 = 18;
			iVar4 = 0;
			iVar6 = 3;
			break;
		
		case 177:
			StringCopy(&Var2, "TORSO_P1_18_1", 16);
			iVar3 = 18;
			iVar4 = 1;
			iVar6 = 3;
			break;
		
		case 178:
			StringCopy(&Var2, "TORSO_P1_18_2", 16);
			iVar3 = 18;
			iVar4 = 2;
			iVar6 = 3;
			break;
		
		case 179:
			StringCopy(&Var2, "TORSO_P1_18_3", 16);
			iVar3 = 18;
			iVar4 = 3;
			iVar6 = 3;
			break;
		
		case 180:
			StringCopy(&Var2, "TORSO_P1_18_4", 16);
			iVar3 = 18;
			iVar4 = 4;
			iVar6 = 3;
			break;
		
		case 181:
			StringCopy(&Var2, "TORSO_P1_18_5", 16);
			iVar3 = 18;
			iVar4 = 5;
			iVar6 = 3;
			break;
		
		case 182:
			StringCopy(&Var2, "TORSO_P1_18_6", 16);
			iVar3 = 18;
			iVar4 = 6;
			iVar6 = 3;
			break;
		
		case 183:
			StringCopy(&Var2, "TORSO_P1_18_7", 16);
			iVar3 = 18;
			iVar4 = 7;
			iVar6 = 3;
			break;
		
		case 184:
			StringCopy(&Var2, "TORSO_P1_18_8", 16);
			iVar3 = 18;
			iVar4 = 8;
			iVar6 = 3;
			break;
		
		case 185:
			StringCopy(&Var2, "TORSO_P1_18_9", 16);
			iVar3 = 18;
			iVar4 = 9;
			iVar6 = 3;
			break;
		
		case 186:
			StringCopy(&Var2, "TORSO_P1_18_10", 16);
			iVar3 = 18;
			iVar4 = 10;
			iVar6 = 3;
			break;
		
		case 187:
			StringCopy(&Var2, "TORSO_P1_18_11", 16);
			iVar3 = 18;
			iVar4 = 11;
			iVar6 = 3;
			break;
		
		case 188:
			StringCopy(&Var2, "TORSO_P1_18_12", 16);
			iVar3 = 18;
			iVar4 = 12;
			iVar6 = 3;
			break;
		
		case 189:
			StringCopy(&Var2, "TORSO_P1_18_13", 16);
			iVar3 = 18;
			iVar4 = 13;
			iVar6 = 3;
			break;
		
		case 190:
			StringCopy(&Var2, "TORSO_P1_18_14", 16);
			iVar3 = 18;
			iVar4 = 14;
			iVar6 = 3;
			break;
		
		case 191:
			StringCopy(&Var2, "TORSO_P1_18_15", 16);
			iVar3 = 18;
			iVar4 = 15;
			iVar6 = 3;
			break;
		
		case 192:
			StringCopy(&Var2, "TORSO_P1_19_0", 16);
			iVar3 = 19;
			iVar4 = 0;
			iVar1 = 480;
			iVar6 = 3;
			break;
		
		case 193:
			StringCopy(&Var2, "TORSO_P1_19_1", 16);
			iVar3 = 19;
			iVar4 = 1;
			iVar1 = 440;
			iVar6 = 3;
			break;
		
		case 194:
			StringCopy(&Var2, "TORSO_P1_19_2", 16);
			iVar3 = 19;
			iVar4 = 2;
			iVar1 = 440;
			iVar6 = 3;
			break;
		
		case 195:
			StringCopy(&Var2, "TORSO_P1_19_3", 16);
			iVar3 = 19;
			iVar4 = 3;
			iVar1 = 520;
			iVar6 = 3;
			break;
		
		case 196:
			StringCopy(&Var2, "TORSO_P1_19_4", 16);
			iVar3 = 19;
			iVar4 = 4;
			iVar1 = 440;
			iVar6 = 3;
			break;
		
		case 197:
			StringCopy(&Var2, "TORSO_P1_19_5", 16);
			iVar3 = 19;
			iVar4 = 5;
			iVar1 = 440;
			iVar6 = 3;
			break;
		
		case 198:
			StringCopy(&Var2, "TORSO_P1_19_6", 16);
			iVar3 = 19;
			iVar4 = 6;
			iVar1 = 480;
			iVar6 = 3;
			break;
		
		case 199:
			StringCopy(&Var2, "TORSO_P1_19_7", 16);
			iVar3 = 19;
			iVar4 = 7;
			iVar1 = 480;
			iVar6 = 3;
			break;
		
		case 200:
			StringCopy(&Var2, "TORSO_P1_19_8", 16);
			iVar3 = 19;
			iVar4 = 8;
			iVar1 = 480;
			iVar6 = 3;
			break;
		
		case 201:
			StringCopy(&Var2, "TORSO_P1_19_9", 16);
			iVar3 = 19;
			iVar4 = 9;
			iVar1 = 480;
			iVar6 = 3;
			break;
		
		case 202:
			StringCopy(&Var2, "TORSO_P1_19_10", 16);
			iVar3 = 19;
			iVar4 = 10;
			iVar1 = 480;
			iVar6 = 3;
			break;
		
		case 203:
			StringCopy(&Var2, "TORSO_P1_19_11", 16);
			iVar3 = 19;
			iVar4 = 11;
			iVar1 = 480;
			iVar6 = 3;
			break;
		
		case 204:
			StringCopy(&Var2, "TORSO_P1_19_12", 16);
			iVar3 = 19;
			iVar4 = 12;
			iVar1 = 520;
			iVar6 = 3;
			break;
		
		case 205:
			StringCopy(&Var2, "TORSO_P1_19_13", 16);
			iVar3 = 19;
			iVar4 = 13;
			iVar1 = 520;
			iVar6 = 3;
			break;
		
		case 206:
			StringCopy(&Var2, "TORSO_P1_19_14", 16);
			iVar3 = 19;
			iVar4 = 14;
			iVar1 = 520;
			iVar6 = 3;
			break;
		
		case 207:
			StringCopy(&Var2, "TORSO_P1_19_15", 16);
			iVar3 = 19;
			iVar4 = 15;
			iVar1 = 440;
			iVar6 = 3;
			break;
		
		case 208:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 20;
			iVar4 = 0;
			bVar0 = true;
			iVar6 = 4;
			break;
		
		case 209:
			StringCopy(&Var2, "TORSO_P1_21_0", 16);
			iVar3 = 21;
			iVar4 = 0;
			iVar1 = 220;
			break;
		
		case 210:
			StringCopy(&Var2, "TORSO_P1_21_1", 16);
			iVar3 = 21;
			iVar4 = 1;
			iVar1 = 200;
			break;
		
		case 211:
			StringCopy(&Var2, "TORSO_P1_21_2", 16);
			iVar3 = 21;
			iVar4 = 2;
			iVar1 = 240;
			break;
		
		case 212:
			StringCopy(&Var2, "TORSO_P1_21_3", 16);
			iVar3 = 21;
			iVar4 = 3;
			iVar1 = 240;
			break;
		
		case 213:
			StringCopy(&Var2, "TORSO_P1_21_4", 16);
			iVar3 = 21;
			iVar4 = 4;
			iVar1 = 260;
			break;
		
		case 214:
			StringCopy(&Var2, "TORSO_P1_21_5", 16);
			iVar3 = 21;
			iVar4 = 5;
			iVar1 = 275;
			break;
		
		case 215:
			StringCopy(&Var2, "TORSO_P1_21_6", 16);
			iVar3 = 21;
			iVar4 = 6;
			iVar1 = 275;
			break;
		
		case 216:
			StringCopy(&Var2, "TORSO_P1_21_7", 16);
			iVar3 = 21;
			iVar4 = 7;
			iVar1 = 280;
			break;
		
		case 217:
			StringCopy(&Var2, "TORSO_P1_21_8", 16);
			iVar3 = 21;
			iVar4 = 8;
			iVar1 = 280;
			break;
		
		case 218:
			StringCopy(&Var2, "TORSO_P1_21_9", 16);
			iVar3 = 21;
			iVar4 = 9;
			iVar1 = 280;
			break;
		
		case 219:
			StringCopy(&Var2, "TORSO_P1_21_10", 16);
			iVar3 = 21;
			iVar4 = 10;
			iVar1 = 280;
			break;
		
		case 220:
			StringCopy(&Var2, "TORSO_P1_21_11", 16);
			iVar3 = 21;
			iVar4 = 11;
			iVar1 = 280;
			break;
		
		case 221:
			StringCopy(&Var2, "TORSO_P1_21_12", 16);
			iVar3 = 21;
			iVar4 = 12;
			iVar1 = 280;
			break;
		
		case 222:
			StringCopy(&Var2, "TORSO_P1_21_13", 16);
			iVar3 = 21;
			iVar4 = 13;
			iVar1 = 280;
			break;
		
		case 223:
			StringCopy(&Var2, "TORSO_P1_22_0", 16);
			iVar3 = 22;
			iVar4 = 0;
			iVar1 = 3100;
			iVar6 = 3;
			break;
		
		case 224:
			StringCopy(&Var2, "TORSO_P1_22_1", 16);
			iVar3 = 22;
			iVar4 = 1;
			iVar1 = 2800;
			iVar6 = 3;
			break;
		
		case 225:
			StringCopy(&Var2, "TORSO_P1_22_2", 16);
			iVar3 = 22;
			iVar4 = 2;
			iVar1 = 2500;
			iVar6 = 3;
			break;
		
		case 226:
			StringCopy(&Var2, "TORSO_P1_22_3", 16);
			iVar3 = 22;
			iVar4 = 3;
			iVar1 = 3000;
			iVar6 = 3;
			break;
		
		default:
			return;
			break;
	}
	func_222(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_267(int iParam0)//Position - 0x2022C
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 3;
	Global_70671[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "TORSO_P1_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "TORSO_P1_0_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "TORSO_P1_0_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 180;
			break;
		
		case 3:
			StringCopy(&Var2, "TORSO_P1_0_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 22;
			break;
		
		case 4:
			StringCopy(&Var2, "TORSO_P1_0_4", 16);
			iVar3 = 0;
			iVar4 = 4;
			iVar1 = 20;
			break;
		
		case 5:
			StringCopy(&Var2, "TORSO_P1_0_5", 16);
			iVar3 = 0;
			iVar4 = 5;
			iVar1 = 18;
			break;
		
		case 6:
			StringCopy(&Var2, "TORSO_P1_0_6", 16);
			iVar3 = 0;
			iVar4 = 6;
			iVar1 = 19;
			break;
		
		case 7:
			StringCopy(&Var2, "TORSO_P1_0_7", 16);
			iVar3 = 0;
			iVar4 = 7;
			iVar1 = 22;
			break;
		
		case 8:
			StringCopy(&Var2, "TORSO_P1_0_8", 16);
			iVar3 = 0;
			iVar4 = 8;
			iVar1 = 20;
			break;
		
		case 9:
			StringCopy(&Var2, "TORSO_P1_0_9", 16);
			iVar3 = 0;
			iVar4 = 9;
			iVar1 = 19;
			break;
		
		case 10:
			StringCopy(&Var2, "TORSO_P1_0_10", 16);
			iVar3 = 0;
			iVar4 = 10;
			iVar1 = 19;
			break;
		
		case 11:
			StringCopy(&Var2, "TORSO_P1_0_11", 16);
			iVar3 = 0;
			iVar4 = 11;
			iVar1 = 18;
			break;
		
		case 12:
			StringCopy(&Var2, "TORSO_P1_0_12", 16);
			iVar3 = 0;
			iVar4 = 12;
			iVar1 = 20;
			break;
		
		case 13:
			StringCopy(&Var2, "TORSO_P1_0_13", 16);
			iVar3 = 0;
			iVar4 = 13;
			iVar1 = 22;
			break;
		
		case 14:
			StringCopy(&Var2, "TORSO_P1_0_14", 16);
			iVar3 = 0;
			iVar4 = 14;
			iVar1 = 19;
			break;
		
		case 15:
			StringCopy(&Var2, "TORSO_P1_0_15", 16);
			iVar3 = 0;
			iVar4 = 15;
			iVar1 = 22;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			iVar6 = 4;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 1;
			bVar0 = true;
			iVar6 = 4;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 2;
			bVar0 = true;
			iVar6 = 4;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 3;
			bVar0 = true;
			iVar6 = 4;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 4;
			bVar0 = true;
			iVar6 = 4;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 5;
			bVar0 = true;
			iVar6 = 4;
			break;
		
		case 22:
			StringCopy(&Var2, "TORSO_P1_2_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			iVar6 = 3;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			iVar6 = 1;
			break;
		
		case 24:
			StringCopy(&Var2, "TORSO_P1_4_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			iVar1 = 20;
			iVar6 = 2;
			break;
		
		case 25:
			StringCopy(&Var2, "TORSO_P1_4_1", 16);
			iVar3 = 4;
			iVar4 = 1;
			iVar1 = 22;
			iVar6 = 2;
			break;
		
		case 26:
			StringCopy(&Var2, "TORSO_P1_4_2", 16);
			iVar3 = 4;
			iVar4 = 2;
			iVar1 = 20;
			iVar6 = 2;
			break;
		
		case 27:
			StringCopy(&Var2, "TORSO_P1_4_3", 16);
			iVar3 = 4;
			iVar4 = 3;
			iVar1 = 25;
			iVar6 = 2;
			break;
		
		case 28:
			StringCopy(&Var2, "TORSO_P1_4_4", 16);
			iVar3 = 4;
			iVar4 = 4;
			iVar1 = 23;
			iVar6 = 2;
			break;
		
		case 29:
			StringCopy(&Var2, "TORSO_P1_4_5", 16);
			iVar3 = 4;
			iVar4 = 5;
			iVar1 = 25;
			iVar6 = 2;
			break;
		
		case 30:
			StringCopy(&Var2, "TORSO_P1_4_6", 16);
			iVar3 = 4;
			iVar4 = 6;
			iVar1 = 28;
			iVar6 = 2;
			break;
		
		case 31:
			StringCopy(&Var2, "TORSO_P1_4_7", 16);
			iVar3 = 4;
			iVar4 = 7;
			iVar1 = 26;
			iVar6 = 2;
			break;
		
		case 32:
			StringCopy(&Var2, "TORSO_P1_4_8", 16);
			iVar3 = 4;
			iVar4 = 8;
			iVar1 = 24;
			iVar6 = 2;
			break;
		
		case 33:
			StringCopy(&Var2, "TORSO_P1_4_9", 16);
			iVar3 = 4;
			iVar4 = 9;
			iVar1 = 27;
			iVar6 = 2;
			break;
		
		case 34:
			StringCopy(&Var2, "TORSO_P1_4_10", 16);
			iVar3 = 4;
			iVar4 = 10;
			iVar1 = 29;
			iVar6 = 2;
			break;
		
		case 35:
			StringCopy(&Var2, "TORSO_P1_4_11", 16);
			iVar3 = 4;
			iVar4 = 11;
			iVar1 = 28;
			iVar6 = 2;
			break;
		
		case 36:
			StringCopy(&Var2, "TORSO_P1_4_12", 16);
			iVar3 = 4;
			iVar4 = 12;
			iVar1 = 25;
			iVar6 = 2;
			break;
		
		case 37:
			StringCopy(&Var2, "TORSO_P1_4_13", 16);
			iVar3 = 4;
			iVar4 = 13;
			iVar1 = 22;
			iVar6 = 2;
			break;
		
		case 38:
			StringCopy(&Var2, "TORSO_P1_4_14", 16);
			iVar3 = 4;
			iVar4 = 14;
			iVar1 = 27;
			iVar6 = 2;
			break;
		
		case 39:
			StringCopy(&Var2, "TORSO_P1_4_15", 16);
			iVar3 = 4;
			iVar4 = 15;
			iVar1 = 29;
			iVar6 = 2;
			break;
		
		case 40:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			iVar6 = 4;
			break;
		
		case 41:
			StringCopy(&Var2, "TORSO_P1_6_0", 16);
			iVar3 = 6;
			iVar4 = 0;
			iVar6 = 3;
			break;
		
		case 42:
			StringCopy(&Var2, "TORSO_P1_6_1", 16);
			iVar3 = 6;
			iVar4 = 1;
			iVar1 = 1270;
			iVar6 = 3;
			break;
		
		case 43:
			StringCopy(&Var2, "TORSO_P1_6_2", 16);
			iVar3 = 6;
			iVar4 = 2;
			iVar1 = 1270;
			iVar6 = 3;
			break;
		
		case 44:
			StringCopy(&Var2, "TORSO_P1_6_3", 16);
			iVar3 = 6;
			iVar4 = 3;
			iVar1 = 1270;
			iVar6 = 3;
			break;
		
		case 45:
			StringCopy(&Var2, "TORSO_P1_6_4", 16);
			iVar3 = 6;
			iVar4 = 4;
			iVar1 = 1090;
			iVar6 = 3;
			break;
		
		case 46:
			StringCopy(&Var2, "TORSO_P1_6_5", 16);
			iVar3 = 6;
			iVar4 = 5;
			iVar1 = 1090;
			iVar6 = 3;
			break;
		
		case 47:
			StringCopy(&Var2, "TORSO_P1_6_6", 16);
			iVar3 = 6;
			iVar4 = 6;
			iVar1 = 1120;
			iVar6 = 3;
			break;
		
		case 48:
			StringCopy(&Var2, "TORSO_P1_6_7", 16);
			iVar3 = 6;
			iVar4 = 7;
			iVar1 = 1120;
			iVar6 = 3;
			break;
		
		case 49:
			StringCopy(&Var2, "TORSO_P1_6_8", 16);
			iVar3 = 6;
			iVar4 = 8;
			iVar1 = 1290;
			iVar6 = 3;
			break;
		
		case 50:
			StringCopy(&Var2, "TORSO_P1_6_9", 16);
			iVar3 = 6;
			iVar4 = 9;
			iVar1 = 1290;
			iVar6 = 3;
			break;
		
		case 51:
			StringCopy(&Var2, "TORSO_P1_6_10", 16);
			iVar3 = 6;
			iVar4 = 10;
			iVar1 = 1320;
			iVar6 = 3;
			break;
		
		case 52:
			StringCopy(&Var2, "TORSO_P1_6_11", 16);
			iVar3 = 6;
			iVar4 = 11;
			iVar1 = 1320;
			iVar6 = 3;
			break;
		
		case 53:
			StringCopy(&Var2, "TORSO_P1_6_12", 16);
			iVar3 = 6;
			iVar4 = 12;
			iVar1 = 1590;
			iVar6 = 3;
			break;
		
		case 54:
			StringCopy(&Var2, "TORSO_P1_6_13", 16);
			iVar3 = 6;
			iVar4 = 13;
			iVar1 = 1590;
			iVar6 = 3;
			break;
		
		case 55:
			StringCopy(&Var2, "TORSO_P1_6_14", 16);
			iVar3 = 6;
			iVar4 = 14;
			iVar1 = 1590;
			iVar6 = 3;
			break;
		
		case 56:
			StringCopy(&Var2, "TORSO_P1_6_15", 16);
			iVar3 = 6;
			iVar4 = 15;
			iVar1 = 1320;
			iVar6 = 3;
			break;
		
		case 57:
			StringCopy(&Var2, "TORSO_P1_7_0", 16);
			iVar3 = 7;
			iVar4 = 0;
			iVar1 = 98;
			break;
		
		case 58:
			StringCopy(&Var2, "TORSO_P1_7_1", 16);
			iVar3 = 7;
			iVar4 = 1;
			iVar1 = 98;
			break;
		
		case 59:
			StringCopy(&Var2, "TORSO_P1_7_2", 16);
			iVar3 = 7;
			iVar4 = 2;
			iVar1 = 110;
			break;
		
		case 60:
			StringCopy(&Var2, "TORSO_P1_7_3", 16);
			iVar3 = 7;
			iVar4 = 3;
			iVar1 = 110;
			break;
		
		case 61:
			StringCopy(&Var2, "TORSO_P1_7_4", 16);
			iVar3 = 7;
			iVar4 = 4;
			iVar1 = 118;
			break;
		
		case 62:
			StringCopy(&Var2, "TORSO_P1_7_5", 16);
			iVar3 = 7;
			iVar4 = 5;
			iVar1 = 120;
			break;
		
		case 63:
			StringCopy(&Var2, "TORSO_P1_7_6", 16);
			iVar3 = 7;
			iVar4 = 6;
			iVar1 = 120;
			break;
		
		case 64:
			StringCopy(&Var2, "TORSO_P1_7_7", 16);
			iVar3 = 7;
			iVar4 = 7;
			iVar1 = 129;
			break;
		
		case 65:
			StringCopy(&Var2, "TORSO_P1_7_8", 16);
			iVar3 = 7;
			iVar4 = 8;
			iVar1 = 125;
			break;
		
		case 66:
			StringCopy(&Var2, "TORSO_P1_7_9", 16);
			iVar3 = 7;
			iVar4 = 9;
			iVar1 = 125;
			break;
		
		case 67:
			StringCopy(&Var2, "TORSO_P1_7_10", 16);
			iVar3 = 7;
			iVar4 = 10;
			iVar1 = 129;
			break;
		
		case 68:
			StringCopy(&Var2, "TORSO_P1_7_11", 16);
			iVar3 = 7;
			iVar4 = 11;
			iVar1 = 129;
			break;
		
		case 69:
			StringCopy(&Var2, "TORSO_P1_7_12", 16);
			iVar3 = 7;
			iVar4 = 12;
			iVar1 = 135;
			break;
		
		case 70:
			StringCopy(&Var2, "TORSO_P1_7_13", 16);
			iVar3 = 7;
			iVar4 = 13;
			iVar1 = 139;
			break;
		
		case 71:
			StringCopy(&Var2, "TORSO_P1_7_14", 16);
			iVar3 = 7;
			iVar4 = 14;
			iVar1 = 145;
			break;
		
		case 72:
			StringCopy(&Var2, "TORSO_P1_7_15", 16);
			iVar3 = 7;
			iVar4 = 15;
			iVar1 = 145;
			break;
		
		case 73:
			StringCopy(&Var2, "TORSO_P1_8_0", 16);
			iVar3 = 8;
			iVar4 = 0;
			break;
		
		case 74:
			StringCopy(&Var2, "TORSO_P1_8_1", 16);
			iVar3 = 8;
			iVar4 = 1;
			break;
		
		case 75:
			StringCopy(&Var2, "TORSO_P1_8_2", 16);
			iVar3 = 8;
			iVar4 = 2;
			break;
		
		case 76:
			StringCopy(&Var2, "TORSO_P1_8_3", 16);
			iVar3 = 8;
			iVar4 = 3;
			break;
		
		case 77:
			StringCopy(&Var2, "TORSO_P1_8_4", 16);
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 30;
			break;
		
		case 78:
			StringCopy(&Var2, "TORSO_P1_8_5", 16);
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 38;
			break;
		
		case 79:
			StringCopy(&Var2, "TORSO_P1_8_6", 16);
			iVar3 = 8;
			iVar4 = 6;
			iVar1 = 32;
			break;
		
		case 80:
			StringCopy(&Var2, "TORSO_P1_8_7", 16);
			iVar3 = 8;
			iVar4 = 7;
			iVar1 = 30;
			break;
		
		case 81:
			StringCopy(&Var2, "TORSO_P1_8_8", 16);
			iVar3 = 8;
			iVar4 = 8;
			iVar1 = 33;
			break;
		
		case 82:
			StringCopy(&Var2, "TORSO_P1_8_9", 16);
			iVar3 = 8;
			iVar4 = 9;
			iVar1 = 35;
			break;
		
		case 83:
			StringCopy(&Var2, "TORSO_P1_8_10", 16);
			iVar3 = 8;
			iVar4 = 10;
			iVar1 = 35;
			break;
		
		case 84:
			StringCopy(&Var2, "TORSO_P1_8_11", 16);
			iVar3 = 8;
			iVar4 = 11;
			iVar1 = 38;
			break;
		
		case 85:
			StringCopy(&Var2, "TORSO_P1_8_12", 16);
			iVar3 = 8;
			iVar4 = 12;
			iVar1 = 33;
			break;
		
		case 86:
			StringCopy(&Var2, "TORSO_P1_8_13", 16);
			iVar3 = 8;
			iVar4 = 13;
			iVar1 = 35;
			break;
		
		case 87:
			StringCopy(&Var2, "TORSO_P1_8_14", 16);
			iVar3 = 8;
			iVar4 = 14;
			iVar1 = 38;
			break;
		
		case 88:
			StringCopy(&Var2, "TORSO_P1_8_15", 16);
			iVar3 = 8;
			iVar4 = 15;
			iVar1 = 32;
			break;
		
		case 89:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 90:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 91:
			StringCopy(&Var2, "TORSO_P1_11_0", 16);
			iVar3 = 11;
			iVar4 = 0;
			break;
		
		case 92:
			StringCopy(&Var2, "TORSO_P1_11_1", 16);
			iVar3 = 11;
			iVar4 = 1;
			iVar1 = 59;
			break;
		
		case 93:
			StringCopy(&Var2, "TORSO_P1_11_2", 16);
			iVar3 = 11;
			iVar4 = 2;
			break;
		
		case 94:
			StringCopy(&Var2, "TORSO_P1_11_3", 16);
			iVar3 = 11;
			iVar4 = 3;
			iVar1 = 25;
			break;
		
		case 95:
			StringCopy(&Var2, "TORSO_P1_11_4", 16);
			iVar3 = 11;
			iVar4 = 4;
			iVar1 = 29;
			break;
		
		case 96:
			StringCopy(&Var2, "TORSO_P1_11_5", 16);
			iVar3 = 11;
			iVar4 = 5;
			iVar1 = 27;
			break;
		
		case 97:
			StringCopy(&Var2, "TORSO_P1_11_6", 16);
			iVar3 = 11;
			iVar4 = 6;
			iVar1 = 25;
			break;
		
		case 98:
			StringCopy(&Var2, "TORSO_P1_11_7", 16);
			iVar3 = 11;
			iVar4 = 7;
			iVar1 = 27;
			break;
		
		case 99:
			StringCopy(&Var2, "TORSO_P1_11_8", 16);
			iVar3 = 11;
			iVar4 = 8;
			iVar1 = 28;
			break;
		
		case 100:
			StringCopy(&Var2, "TORSO_P1_11_9", 16);
			iVar3 = 11;
			iVar4 = 9;
			iVar1 = 30;
			break;
		
		case 101:
			StringCopy(&Var2, "TORSO_P1_11_10", 16);
			iVar3 = 11;
			iVar4 = 10;
			iVar1 = 29;
			break;
		
		case 102:
			StringCopy(&Var2, "TORSO_P1_11_11", 16);
			iVar3 = 11;
			iVar4 = 11;
			iVar1 = 27;
			break;
		
		case 103:
			StringCopy(&Var2, "TORSO_P1_11_12", 16);
			iVar3 = 11;
			iVar4 = 12;
			iVar1 = 29;
			break;
		
		case 104:
			StringCopy(&Var2, "TORSO_P1_11_13", 16);
			iVar3 = 11;
			iVar4 = 13;
			iVar1 = 32;
			break;
		
		case 105:
			StringCopy(&Var2, "TORSO_P1_11_14", 16);
			iVar3 = 11;
			iVar4 = 14;
			iVar1 = 30;
			break;
		
		case 106:
			StringCopy(&Var2, "TORSO_P1_11_15", 16);
			iVar3 = 11;
			iVar4 = 15;
			iVar1 = 28;
			break;
		
		default:
			return;
			break;
	}
	func_222(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_268(int iParam0)//Position - 0x20E75
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 2;
	Global_70671[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "HAIR_P1_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "HAIR_P1_0_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "HAIR_P1_0_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "HAIR_P1_0_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			iVar6 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "HAIR_P1_0_4", 16);
			iVar3 = 0;
			iVar4 = 4;
			iVar6 = 3;
			break;
		
		case 5:
			StringCopy(&Var2, "HAIR_P1_0_5", 16);
			iVar3 = 0;
			iVar4 = 5;
			iVar6 = 3;
			break;
		
		case 6:
			StringCopy(&Var2, "HAIR_P1_0_6", 16);
			iVar3 = 0;
			iVar4 = 6;
			iVar6 = 3;
			break;
		
		case 7:
			StringCopy(&Var2, "HAIR_P1_0_7", 16);
			iVar3 = 0;
			iVar4 = 7;
			iVar6 = 3;
			break;
		
		case 8:
			StringCopy(&Var2, "HAIR_P1_0_8", 16);
			iVar3 = 0;
			iVar4 = 8;
			iVar6 = 3;
			break;
		
		case 9:
			StringCopy(&Var2, "HAIR_P1_0_9", 16);
			iVar3 = 0;
			iVar4 = 9;
			iVar6 = 3;
			break;
		
		case 10:
			StringCopy(&Var2, "HAIR_P1_0_10", 16);
			iVar3 = 0;
			iVar4 = 10;
			iVar6 = 3;
			break;
		
		case 11:
			StringCopy(&Var2, "HAIR_P1_0_11", 16);
			iVar3 = 0;
			iVar4 = 11;
			iVar6 = 3;
			break;
		
		case 12:
			StringCopy(&Var2, "HAIR_P1_0_12", 16);
			iVar3 = 0;
			iVar4 = 12;
			iVar6 = 3;
			break;
		
		case 13:
			StringCopy(&Var2, "HAIR_P1_0_13", 16);
			iVar3 = 0;
			iVar4 = 13;
			break;
		
		case 14:
			StringCopy(&Var2, "HAIR_P1_0_14", 16);
			iVar3 = 0;
			iVar4 = 14;
			iVar6 = 3;
			break;
		
		case 15:
			StringCopy(&Var2, "HAIR_P1_0_15", 16);
			iVar3 = 0;
			iVar4 = 15;
			iVar6 = 3;
			break;
		
		case 16:
			StringCopy(&Var2, "HAIR_P1_1_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			iVar6 = 3;
			break;
		
		case 17:
			StringCopy(&Var2, "HAIR_P1_2_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			iVar6 = 3;
			break;
		
		case 18:
			StringCopy(&Var2, "HAIR_P1_3_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			iVar6 = 3;
			break;
		
		case 19:
			StringCopy(&Var2, "HAIR_P1_4_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		default:
			func_233(iVar7, iParam0, 21);
			return;
			break;
	}
	func_222(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_269(int iParam0)//Position - 0x210ED
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 0;
	Global_70671[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 6;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 7;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 8;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 9;
			break;
		
		default:
			func_233(iVar7, iParam0, 10);
			return;
			break;
	}
	func_222(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_270(int iParam0, int iParam1)//Position - 0x21232
{
	switch (iParam0)
	{
		case 0:
			func_287(iParam1);
			break;
		
		case 2:
			func_286(iParam1);
			break;
		
		case 3:
			func_283(iParam1);
			break;
		
		case 4:
			func_282(iParam1);
			break;
		
		case 6:
			func_281(iParam1);
			break;
		
		case 5:
			func_280(iParam1);
			break;
		
		case 8:
			func_279(iParam1);
			break;
		
		case 9:
			func_278(iParam1);
			break;
		
		case 10:
			func_277(iParam1);
			break;
		
		case 1:
			func_276(iParam1);
			break;
		
		case 7:
			func_275(iParam1);
			break;
		
		case 11:
			func_274(iParam1);
			break;
		
		case 12:
			func_273(iParam1);
			break;
		
		case 13:
			func_272(iParam1);
			break;
		
		case 14:
			func_271(iParam1);
			break;
	}
}

void func_271(int iParam0)//Position - 0x21322
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 14;
	Global_70671[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 6;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 7;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 8;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "PROPS_P0_H1", 16);
			iVar3 = 1;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 12:
			StringCopy(&Var2, "PROPS_P0_H2", 16);
			iVar3 = 2;
			iVar4 = 0;
			iVar1 = 320;
			iVar5 = 11;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 1;
			iVar5 = 0;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 2;
			iVar5 = 0;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 3;
			iVar5 = 0;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 4;
			iVar5 = 0;
			break;
		
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 5;
			iVar5 = 0;
			break;
		
		case 27:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 6;
			iVar5 = 0;
			break;
		
		case 28:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 7;
			iVar5 = 0;
			break;
		
		case 29:
			StringCopy(&Var2, "PROPS_P0_H12", 16);
			iVar3 = 12;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 13;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 31:
			StringCopy(&Var2, "PROPS_P1_H8_0", 16);
			iVar3 = 14;
			iVar4 = 0;
			iVar1 = 270;
			iVar5 = 0;
			break;
		
		case 32:
			StringCopy(&Var2, "PROPS_P1_H8_1", 16);
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 270;
			iVar5 = 0;
			break;
		
		case 33:
			StringCopy(&Var2, "PROPS_P1_H9_0", 16);
			iVar3 = 15;
			iVar4 = 0;
			iVar1 = 200;
			iVar5 = 0;
			break;
		
		case 34:
			StringCopy(&Var2, "PROPS_P1_H9_1", 16);
			iVar3 = 15;
			iVar4 = 1;
			iVar1 = 200;
			iVar5 = 0;
			break;
		
		case 35:
			StringCopy(&Var2, "PROPS_P1_H10_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			iVar1 = 350;
			iVar5 = 0;
			break;
		
		case 36:
			StringCopy(&Var2, "PROPS_P1_H10_1", 16);
			iVar3 = 16;
			iVar4 = 1;
			iVar1 = 350;
			iVar5 = 0;
			break;
		
		case 37:
			StringCopy(&Var2, "PROPS_P1_H11_0", 16);
			iVar3 = 17;
			iVar4 = 0;
			iVar1 = 450;
			iVar5 = 0;
			break;
		
		case 38:
			StringCopy(&Var2, "PROPS_P1_H12_0", 16);
			iVar3 = 18;
			iVar4 = 0;
			iVar1 = 500;
			iVar5 = 0;
			break;
		
		case 39:
			StringCopy(&Var2, "PROPS_P1_H12_1", 16);
			iVar3 = 18;
			iVar4 = 1;
			iVar1 = 500;
			iVar5 = 0;
			break;
		
		case 40:
			StringCopy(&Var2, "PROPS_P1_H13_0", 16);
			iVar3 = 19;
			iVar4 = 0;
			iVar1 = 50;
			iVar5 = 0;
			break;
		
		case 41:
			StringCopy(&Var2, "PROPS_P1_H13_1", 16);
			iVar3 = 19;
			iVar4 = 1;
			iVar1 = 50;
			iVar5 = 0;
			break;
		
		case 42:
			StringCopy(&Var2, "PROPS_P1_H14_0", 16);
			iVar3 = 20;
			iVar4 = 0;
			iVar1 = 99;
			iVar5 = 0;
			break;
		
		case 43:
			StringCopy(&Var2, "PROPS_P1_H14_1", 16);
			iVar3 = 20;
			iVar4 = 1;
			iVar1 = 99;
			iVar5 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "PROPS_P1_H14_2", 16);
			iVar3 = 20;
			iVar4 = 2;
			iVar1 = 99;
			iVar5 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 21;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 22;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 47:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 48:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 1;
			iVar5 = 0;
			break;
		
		case 49:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 2;
			iVar5 = 0;
			break;
		
		case 50:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 3;
			iVar5 = 0;
			break;
		
		case 51:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 4;
			iVar5 = 0;
			break;
		
		case 52:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 5;
			iVar5 = 0;
			break;
		
		case 53:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 24;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 54:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 25;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 55:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 56:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 27;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 57:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 28;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 58:
			StringCopy(&Var2, "PROPS_P0_E0", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 45;
			iVar5 = 10;
			break;
		
		case 59:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 10;
			break;
		
		case 60:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 10;
			break;
		
		case 61:
			StringCopy(&Var2, "PROPS_P0_E3", 16);
			iVar3 = 3;
			iVar4 = 0;
			iVar1 = 55;
			iVar5 = 10;
			break;
		
		case 62:
			StringCopy(&Var2, "PROPS_P0_E4", 16);
			iVar3 = 4;
			iVar4 = 0;
			iVar1 = 58;
			iVar5 = 10;
			break;
		
		case 63:
			StringCopy(&Var2, "PROPS_P0_E4_1", 16);
			iVar3 = 4;
			iVar4 = 1;
			iVar1 = 56;
			iVar5 = 10;
			break;
		
		case 64:
			StringCopy(&Var2, "PROPS_P0_E4_2", 16);
			iVar3 = 4;
			iVar4 = 2;
			iVar1 = 60;
			iVar5 = 10;
			break;
		
		case 65:
			StringCopy(&Var2, "PROPS_P0_E4_3", 16);
			iVar3 = 4;
			iVar4 = 3;
			iVar1 = 65;
			iVar5 = 10;
			break;
		
		case 66:
			StringCopy(&Var2, "PROPS_P0_E4_4", 16);
			iVar3 = 4;
			iVar4 = 4;
			iVar1 = 62;
			iVar5 = 10;
			break;
		
		case 67:
			StringCopy(&Var2, "PROPS_P0_E4_5", 16);
			iVar3 = 4;
			iVar4 = 5;
			iVar1 = 65;
			iVar5 = 10;
			break;
		
		case 68:
			StringCopy(&Var2, "PROPS_P0_E4_6", 16);
			iVar3 = 4;
			iVar4 = 6;
			iVar1 = 68;
			iVar5 = 10;
			break;
		
		case 69:
			StringCopy(&Var2, "PROPS_P0_E4_7", 16);
			iVar3 = 4;
			iVar4 = 7;
			iVar1 = 68;
			iVar5 = 10;
			break;
		
		case 70:
			StringCopy(&Var2, "PROPS_P0_E5", 16);
			iVar3 = 5;
			iVar4 = 0;
			iVar1 = 65;
			iVar5 = 10;
			break;
		
		case 71:
			StringCopy(&Var2, "PROPS_P0_E5_1", 16);
			iVar3 = 5;
			iVar4 = 1;
			iVar1 = 69;
			iVar5 = 10;
			break;
		
		case 72:
			StringCopy(&Var2, "PROPS_P0_E5_2", 16);
			iVar3 = 5;
			iVar4 = 2;
			iVar1 = 72;
			iVar5 = 10;
			break;
		
		case 73:
			StringCopy(&Var2, "PROPS_P0_E5_3", 16);
			iVar3 = 5;
			iVar4 = 3;
			iVar1 = 70;
			iVar5 = 10;
			break;
		
		case 74:
			StringCopy(&Var2, "PROPS_P0_E5_4", 16);
			iVar3 = 5;
			iVar4 = 4;
			iVar1 = 74;
			iVar5 = 10;
			break;
		
		case 75:
			StringCopy(&Var2, "PROPS_P0_E5_5", 16);
			iVar3 = 5;
			iVar4 = 5;
			iVar1 = 78;
			iVar5 = 10;
			break;
		
		case 76:
			StringCopy(&Var2, "PROPS_P0_E5_6", 16);
			iVar3 = 5;
			iVar4 = 6;
			iVar1 = 82;
			iVar5 = 10;
			break;
		
		case 77:
			StringCopy(&Var2, "PROPS_P0_E5_7", 16);
			iVar3 = 5;
			iVar4 = 7;
			iVar1 = 85;
			iVar5 = 10;
			break;
		
		case 78:
			StringCopy(&Var2, "PROPS_P0_E5_8", 16);
			iVar3 = 5;
			iVar4 = 8;
			iVar1 = 85;
			iVar5 = 10;
			break;
		
		case 79:
			StringCopy(&Var2, "PROPS_P0_E5_9", 16);
			iVar3 = 5;
			iVar4 = 9;
			iVar5 = 10;
			break;
		
		case 80:
			StringCopy(&Var2, "PROPS_P0_E6", 16);
			iVar3 = 6;
			iVar4 = 0;
			iVar1 = 69;
			iVar5 = 10;
			break;
		
		case 81:
			StringCopy(&Var2, "PROPS_P0_E6_1", 16);
			iVar3 = 6;
			iVar4 = 1;
			iVar1 = 69;
			iVar5 = 10;
			break;
		
		case 82:
			StringCopy(&Var2, "PROPS_P0_E6_2", 16);
			iVar3 = 6;
			iVar4 = 2;
			iVar1 = 69;
			iVar5 = 10;
			break;
		
		case 83:
			StringCopy(&Var2, "PROPS_P0_E6_3", 16);
			iVar3 = 6;
			iVar4 = 3;
			iVar1 = 69;
			iVar5 = 10;
			break;
		
		case 84:
			StringCopy(&Var2, "PROPS_P0_E6_4", 16);
			iVar3 = 6;
			iVar4 = 4;
			iVar1 = 69;
			iVar5 = 10;
			break;
		
		case 85:
			StringCopy(&Var2, "PROPS_P0_E6_5", 16);
			iVar3 = 6;
			iVar4 = 5;
			iVar1 = 69;
			iVar5 = 10;
			break;
		
		case 86:
			StringCopy(&Var2, "PROPS_P0_E6_6", 16);
			iVar3 = 6;
			iVar4 = 6;
			iVar1 = 69;
			iVar5 = 10;
			break;
		
		case 87:
			StringCopy(&Var2, "PROPS_P0_E6_7", 16);
			iVar3 = 6;
			iVar4 = 7;
			iVar1 = 69;
			iVar5 = 10;
			break;
		
		case 88:
			StringCopy(&Var2, "PROPS_P0_E6_8", 16);
			iVar3 = 6;
			iVar4 = 8;
			iVar1 = 69;
			iVar5 = 10;
			break;
		
		case 89:
			StringCopy(&Var2, "PROPS_P0_E6_9", 16);
			iVar3 = 6;
			iVar4 = 9;
			iVar1 = 69;
			iVar5 = 10;
			break;
		
		case 90:
			StringCopy(&Var2, "PROPS_P0_E7", 16);
			iVar3 = 7;
			iVar4 = 0;
			iVar5 = 10;
			break;
		
		case 91:
			StringCopy(&Var2, "PROPS_P0_E8", 16);
			iVar3 = 8;
			iVar4 = 0;
			iVar1 = 170;
			iVar5 = 10;
			break;
		
		case 92:
			StringCopy(&Var2, "PROPS_P0_E8_1", 16);
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 175;
			iVar5 = 10;
			break;
		
		case 93:
			StringCopy(&Var2, "PROPS_P0_E8_2", 16);
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 180;
			iVar5 = 10;
			break;
		
		case 94:
			StringCopy(&Var2, "PROPS_P0_E8_3", 16);
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 185;
			iVar5 = 10;
			break;
		
		case 95:
			StringCopy(&Var2, "PROPS_P0_E8_4", 16);
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 189;
			iVar5 = 10;
			break;
		
		case 96:
			StringCopy(&Var2, "PROPS_P0_E8_5", 16);
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 195;
			iVar5 = 10;
			break;
		
		case 97:
			StringCopy(&Var2, "PROPS_P0_E8_6", 16);
			iVar3 = 8;
			iVar4 = 6;
			iVar1 = 235;
			iVar5 = 10;
			break;
		
		case 98:
			StringCopy(&Var2, "PROPS_P0_E8_7", 16);
			iVar3 = 8;
			iVar4 = 7;
			iVar1 = 245;
			iVar5 = 10;
			break;
		
		case 99:
			StringCopy(&Var2, "PROPS_P0_E8_8", 16);
			iVar3 = 8;
			iVar4 = 8;
			iVar1 = 250;
			iVar5 = 10;
			break;
		
		case 100:
			StringCopy(&Var2, "PROPS_P0_E8_9", 16);
			iVar3 = 8;
			iVar4 = 9;
			iVar1 = 275;
			iVar5 = 10;
			break;
		
		case 101:
			StringCopy(&Var2, "PROPS_P0_E8_10", 16);
			iVar3 = 8;
			iVar4 = 10;
			iVar1 = 280;
			iVar5 = 10;
			break;
		
		case 102:
			StringCopy(&Var2, "PROPS_P0_E8_11", 16);
			iVar3 = 8;
			iVar4 = 11;
			iVar1 = 295;
			iVar5 = 10;
			break;
		
		case 103:
			StringCopy(&Var2, "PROPS_P0_E9", 16);
			iVar3 = 9;
			iVar4 = 0;
			iVar1 = 179;
			iVar5 = 10;
			break;
		
		case 104:
			StringCopy(&Var2, "PROPS_P0_E9_1", 16);
			iVar3 = 9;
			iVar4 = 1;
			iVar1 = 159;
			iVar5 = 10;
			break;
		
		case 105:
			StringCopy(&Var2, "PROPS_P0_E9_2", 16);
			iVar3 = 9;
			iVar4 = 2;
			iVar1 = 165;
			iVar5 = 10;
			break;
		
		case 106:
			StringCopy(&Var2, "PROPS_P0_E9_3", 16);
			iVar3 = 9;
			iVar4 = 3;
			iVar1 = 155;
			iVar5 = 10;
			break;
		
		case 107:
			StringCopy(&Var2, "PROPS_P0_E9_4", 16);
			iVar3 = 9;
			iVar4 = 4;
			iVar1 = 175;
			iVar5 = 10;
			break;
		
		case 108:
			StringCopy(&Var2, "PROPS_P0_E9_5", 16);
			iVar3 = 9;
			iVar4 = 5;
			iVar1 = 185;
			iVar5 = 10;
			break;
		
		case 109:
			StringCopy(&Var2, "PROPS_P0_E9_6", 16);
			iVar3 = 9;
			iVar4 = 6;
			iVar1 = 189;
			iVar5 = 10;
			break;
		
		case 110:
			StringCopy(&Var2, "PROPS_P0_E9_7", 16);
			iVar3 = 9;
			iVar4 = 7;
			iVar1 = 225;
			iVar5 = 10;
			break;
		
		case 111:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			iVar1 = 100;
			iVar5 = 10;
			break;
		
		case 112:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 2;
			break;
		
		default:
			func_233(iVar7, iParam0, 113);
			return;
			break;
	}
	func_222(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_272(int iParam0)//Position - 0x220AB
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 13;
	Global_70671[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		default:
			func_233(iVar7, iParam0, 10);
			return;
			break;
	}
	func_222(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_273(int iParam0)//Position - 0x22224
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 12;
	Global_70671[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "OUTFIT_P0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 1:
			StringCopy(&Var2, "OUTFIT_P0_1", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "OUTFIT_P0_4", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "OUTFIT_P0_7", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "OUTFIT_P0_8", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "OUTFIT_P0_9", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "OUTFIT_P0_11", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 9:
			StringCopy(&Var2, "OUTFIT_P0_12", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "OUTFIT_P0_14", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 12:
			StringCopy(&Var2, "OUTFIT_P0_17", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "OUTFIT_P0_18", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 14:
			StringCopy(&Var2, "OUTFIT_P0_19", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 15:
			StringCopy(&Var2, "OUTFIT_P0_20", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "OUTFIT_P0_22", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 10000;
			break;
		
		case 17:
			StringCopy(&Var2, "OUTFIT_P0_23", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 18:
			StringCopy(&Var2, "OUTFIT_P0_24", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "OUTFIT_P0_26", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 20:
			StringCopy(&Var2, "OUTFIT_P0_28", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 105;
			break;
		
		case 21:
			StringCopy(&Var2, "OUTFIT_P0_29", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 105;
			break;
		
		case 22:
			StringCopy(&Var2, "OUTFIT_P0_30", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 105;
			break;
		
		case 23:
			StringCopy(&Var2, "OUTFIT_P0_31", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 24:
			StringCopy(&Var2, "OUTFIT_P0_32", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 25:
			StringCopy(&Var2, "OUTFIT_P0_33", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 26:
			StringCopy(&Var2, "OUTFIT_P0_34", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 27:
			StringCopy(&Var2, "OUTFIT_P0_35", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 28:
			StringCopy(&Var2, "OUTFIT_P0_11", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 29:
			StringCopy(&Var2, "OUTFIT_P0_36", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4900;
			break;
		
		case 30:
			StringCopy(&Var2, "OUTFIT_P0_37", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 840;
			break;
		
		case 31:
			StringCopy(&Var2, "OUTFIT_P0_38", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 32:
			StringCopy(&Var2, "OUTFIT_P0_39", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 33:
			StringCopy(&Var2, "OUTFIT_P0_40", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 34:
			StringCopy(&Var2, "OUTFIT_P0_41", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 35:
			StringCopy(&Var2, "OUTFIT_P0_42", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 36:
			StringCopy(&Var2, "OUTFIT_P0_43", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 37:
			StringCopy(&Var2, "OUTFIT_P0_44", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 3900;
			break;
		
		case 38:
			StringCopy(&Var2, "OUTFIT_P0_45", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4000;
			break;
		
		case 39:
			StringCopy(&Var2, "OUTFIT_P0_46", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5900;
			break;
		
		case 40:
			StringCopy(&Var2, "OUTFIT_P0_47", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4600;
			break;
		
		case 41:
			StringCopy(&Var2, "OUTFIT_P0_48", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5500;
			break;
		
		case 42:
			StringCopy(&Var2, "OUTFIT_P0_49", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4400;
			break;
		
		case 43:
			StringCopy(&Var2, "OUTFIT_P0_50", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4400;
			break;
		
		case 44:
			StringCopy(&Var2, "OUTFIT_P0_51", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4900;
			break;
		
		case 45:
			StringCopy(&Var2, "OUTFIT_P0_52", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5500;
			break;
		
		case 46:
			StringCopy(&Var2, "OUTFIT_P0_53", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4500;
			break;
		
		case 47:
			StringCopy(&Var2, "OUTFIT_P0_54", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5900;
			break;
		
		case 48:
			StringCopy(&Var2, "OUTFIT_P0_55", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 49:
			StringCopy(&Var2, "OUTFIT_P0_17", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 50:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 51:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 52:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		default:
			func_233(iVar7, iParam0, 53);
			return;
			break;
	}
	func_222(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_274(int iParam0)//Position - 0x2279A
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 11;
	Global_70671[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "JBIB_P0_02_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "JBIB_P0_02_1", 16);
			iVar3 = 2;
			iVar4 = 1;
			break;
		
		case 4:
			StringCopy(&Var2, "JBIB_P0_02_2", 16);
			iVar3 = 2;
			iVar4 = 2;
			break;
		
		case 5:
			StringCopy(&Var2, "JBIB_P0_02_3", 16);
			iVar3 = 2;
			iVar4 = 3;
			break;
		
		case 6:
			StringCopy(&Var2, "JBIB_P0_02_4", 16);
			iVar3 = 2;
			iVar4 = 4;
			break;
		
		case 7:
			StringCopy(&Var2, "JBIB_P0_02_5", 16);
			iVar3 = 2;
			iVar4 = 5;
			break;
		
		case 8:
			StringCopy(&Var2, "JBIB_P0_03_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			iVar1 = 390;
			break;
		
		case 9:
			StringCopy(&Var2, "JBIB_P0_03_1", 16);
			iVar3 = 3;
			iVar4 = 1;
			iVar1 = 390;
			break;
		
		case 10:
			StringCopy(&Var2, "JBIB_P0_03_2", 16);
			iVar3 = 3;
			iVar4 = 2;
			iVar1 = 420;
			break;
		
		case 11:
			StringCopy(&Var2, "JBIB_P0_03_3", 16);
			iVar3 = 3;
			iVar4 = 3;
			iVar1 = 420;
			break;
		
		case 12:
			StringCopy(&Var2, "JBIB_P0_03_4", 16);
			iVar3 = 3;
			iVar4 = 4;
			iVar1 = 490;
			break;
		
		case 13:
			StringCopy(&Var2, "JBIB_P0_03_5", 16);
			iVar3 = 3;
			iVar4 = 5;
			iVar1 = 490;
			break;
		
		case 14:
			StringCopy(&Var2, "JBIB_P0_03_6", 16);
			iVar3 = 3;
			iVar4 = 6;
			iVar1 = 540;
			break;
		
		case 15:
			StringCopy(&Var2, "JBIB_P0_03_7", 16);
			iVar3 = 3;
			iVar4 = 7;
			iVar1 = 540;
			break;
		
		case 16:
			StringCopy(&Var2, "JBIB_P0_03_8", 16);
			iVar3 = 3;
			iVar4 = 8;
			iVar1 = 550;
			break;
		
		case 17:
			StringCopy(&Var2, "JBIB_P0_03_9", 16);
			iVar3 = 3;
			iVar4 = 9;
			iVar1 = 540;
			break;
		
		case 18:
			StringCopy(&Var2, "JBIB_P0_04_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			iVar1 = 850;
			break;
		
		case 19:
			StringCopy(&Var2, "JBIB_P0_04_1", 16);
			iVar3 = 4;
			iVar4 = 1;
			iVar1 = 850;
			break;
		
		case 20:
			StringCopy(&Var2, "JBIB_P0_04_2", 16);
			iVar3 = 4;
			iVar4 = 2;
			iVar1 = 890;
			break;
		
		case 21:
			StringCopy(&Var2, "JBIB_P0_04_3", 16);
			iVar3 = 4;
			iVar4 = 3;
			iVar1 = 890;
			break;
		
		case 22:
			StringCopy(&Var2, "JBIB_P0_04_4", 16);
			iVar3 = 4;
			iVar4 = 4;
			iVar1 = 920;
			break;
		
		case 23:
			StringCopy(&Var2, "JBIB_P0_04_5", 16);
			iVar3 = 4;
			iVar4 = 5;
			iVar1 = 920;
			break;
		
		case 24:
			StringCopy(&Var2, "JBIB_P0_04_6", 16);
			iVar3 = 4;
			iVar4 = 6;
			iVar1 = 950;
			break;
		
		case 25:
			StringCopy(&Var2, "JBIB_P0_04_7", 16);
			iVar3 = 4;
			iVar4 = 7;
			iVar1 = 980;
			break;
		
		case 26:
			StringCopy(&Var2, "JBIB_P0_04_8", 16);
			iVar3 = 4;
			iVar4 = 8;
			iVar1 = 1050;
			break;
		
		case 27:
			StringCopy(&Var2, "JBIB_P0_04_9", 16);
			iVar3 = 4;
			iVar4 = 9;
			iVar1 = 1100;
			break;
		
		case 28:
			StringCopy(&Var2, "JBIB_P0_05_0", 16);
			iVar3 = 5;
			iVar4 = 0;
			iVar1 = 1890;
			break;
		
		case 29:
			StringCopy(&Var2, "JBIB_P0_05_1", 16);
			iVar3 = 5;
			iVar4 = 1;
			iVar1 = 1820;
			break;
		
		case 30:
			StringCopy(&Var2, "JBIB_P0_05_2", 16);
			iVar3 = 5;
			iVar4 = 2;
			iVar1 = 1820;
			break;
		
		case 31:
			StringCopy(&Var2, "JBIB_P0_05_3", 16);
			iVar3 = 5;
			iVar4 = 3;
			iVar1 = 1850;
			break;
		
		case 32:
			StringCopy(&Var2, "JBIB_P0_05_4", 16);
			iVar3 = 5;
			iVar4 = 4;
			iVar1 = 1850;
			break;
		
		case 33:
			StringCopy(&Var2, "JBIB_P0_05_5", 16);
			iVar3 = 5;
			iVar4 = 5;
			iVar1 = 1900;
			break;
		
		case 34:
			StringCopy(&Var2, "JBIB_P0_05_6", 16);
			iVar3 = 5;
			iVar4 = 6;
			iVar1 = 1920;
			break;
		
		case 35:
			StringCopy(&Var2, "JBIB_P0_05_7", 16);
			iVar3 = 5;
			iVar4 = 7;
			iVar1 = 1980;
			break;
		
		case 36:
			StringCopy(&Var2, "JBIB_P0_05_8", 16);
			iVar3 = 5;
			iVar4 = 8;
			iVar1 = 2100;
			break;
		
		case 37:
			StringCopy(&Var2, "JBIB_P0_05_9", 16);
			iVar3 = 5;
			iVar4 = 9;
			iVar1 = 2120;
			break;
		
		case 38:
			StringCopy(&Var2, "JBIB_P0_05_10", 16);
			iVar3 = 5;
			iVar4 = 10;
			iVar1 = 2000;
			break;
		
		case 39:
			StringCopy(&Var2, "JBIB_P0_05_11", 16);
			iVar3 = 5;
			iVar4 = 11;
			iVar1 = 2200;
			break;
		
		case 40:
			StringCopy(&Var2, "JBIB_P0_05_12", 16);
			iVar3 = 5;
			iVar4 = 12;
			iVar1 = 2280;
			break;
		
		case 41:
			StringCopy(&Var2, "JBIB_P0_05_13", 16);
			iVar3 = 5;
			iVar4 = 13;
			iVar1 = 2300;
			break;
		
		case 42:
			StringCopy(&Var2, "JBIB_P0_05_14", 16);
			iVar3 = 5;
			iVar4 = 14;
			iVar1 = 2350;
			break;
		
		case 43:
			StringCopy(&Var2, "JBIB_P0_05_15", 16);
			iVar3 = 5;
			iVar4 = 15;
			iVar1 = 2280;
			break;
		
		case 44:
			StringCopy(&Var2, "JBIB_P0_06_0", 16);
			iVar3 = 6;
			iVar4 = 0;
			break;
		
		default:
			func_233(iVar7, iParam0, 45);
			return;
			break;
	}
	func_222(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_275(int iParam0)//Position - 0x22CC3
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 7;
	Global_70671[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		default:
			func_233(iVar7, iParam0, 1);
			return;
			break;
	}
	func_222(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_276(int iParam0)//Position - 0x22D36
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 1;
	Global_70671[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "BERD_P0_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "BERD_P0_1_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "BERD_P0_2_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "BERD_P0_3_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "BERD_P0_4_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		default:
			func_233(iVar7, iParam0, 5);
			return;
			break;
	}
	func_222(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_277(int iParam0)//Position - 0x22E05
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 10;
	Global_70671[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 1;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 2;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 3;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 4;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 5;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 6;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 7;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 1;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 2;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 3;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 4;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 5;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 1;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 2;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 3;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 4;
			break;
		
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 5;
			break;
		
		case 27:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 6;
			break;
		
		case 28:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			break;
		
		case 29:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 1;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 2;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 3;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 4;
			break;
		
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 5;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 6;
			break;
		
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 7;
			break;
		
		case 36:
			StringCopy(&Var2, "DECL_P0_10_8", 16);
			iVar3 = 10;
			iVar4 = 8;
			break;
		
		case 37:
			StringCopy(&Var2, "DECL_P0_10_9", 16);
			iVar3 = 10;
			iVar4 = 9;
			break;
		
		case 38:
			StringCopy(&Var2, "DECL_P0_10_10", 16);
			iVar3 = 10;
			iVar4 = 10;
			break;
		
		case 39:
			StringCopy(&Var2, "DECL_P0_10_11", 16);
			iVar3 = 10;
			iVar4 = 11;
			break;
		
		case 40:
			StringCopy(&Var2, "DECL_P0_10_12", 16);
			iVar3 = 10;
			iVar4 = 12;
			break;
		
		case 41:
			StringCopy(&Var2, "DECL_P0_10_13", 16);
			iVar3 = 10;
			iVar4 = 13;
			break;
		
		case 42:
			StringCopy(&Var2, "DECL_P0_10_14", 16);
			iVar3 = 10;
			iVar4 = 14;
			break;
		
		case 43:
			StringCopy(&Var2, "DECL_P0_10_15", 16);
			iVar3 = 10;
			iVar4 = 15;
			break;
		
		case 44:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 1;
			break;
		
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 2;
			break;
		
		case 47:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 3;
			break;
		
		default:
			func_233(iVar7, iParam0, 48);
			return;
			break;
	}
	func_222(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_278(int iParam0)//Position - 0x232DC
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 9;
	Global_70671[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 1;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "SPEC2_P0_08_0", 16);
			iVar3 = 8;
			iVar4 = 0;
			iVar1 = 125;
			break;
		
		case 10:
			StringCopy(&Var2, "SPEC2_P0_08_1", 16);
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 150;
			break;
		
		case 11:
			StringCopy(&Var2, "SPEC2_P0_08_2", 16);
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 175;
			break;
		
		case 12:
			StringCopy(&Var2, "SPEC2_P0_08_3", 16);
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 85;
			break;
		
		case 13:
			StringCopy(&Var2, "SPEC2_P0_08_4", 16);
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 150;
			break;
		
		case 14:
			StringCopy(&Var2, "SPEC2_P0_08_5", 16);
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 175;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		default:
			func_233(iVar7, iParam0, 20);
			return;
			break;
	}
	func_222(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_279(int iParam0)//Position - 0x23544
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 8;
	Global_70671[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "SPEC_P0_10", 16);
			iVar3 = 10;
			iVar4 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 13;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 14;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 15;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "SPEC_P0_16", 16);
			iVar3 = 16;
			iVar4 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 17;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 18;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 19;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 20;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 21;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 22;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		default:
			func_233(iVar7, iParam0, 24);
			return;
			break;
	}
	func_222(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_280(int iParam0)//Position - 0x23819
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 5;
	Global_70671[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 2;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 3;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 4;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		default:
			func_233(iVar7, iParam0, 14);
			return;
			break;
	}
	func_222(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_281(int iParam0)//Position - 0x239E1
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 6;
	Global_70671[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "FEET_P0_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "FEET_P0_0_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			iVar1 = 665;
			break;
		
		case 2:
			StringCopy(&Var2, "FEET_P0_0_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 620;
			break;
		
		case 3:
			StringCopy(&Var2, "FEET_P0_0_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 540;
			break;
		
		case 4:
			StringCopy(&Var2, "FEET_P0_0_4", 16);
			iVar3 = 0;
			iVar4 = 4;
			iVar1 = 580;
			break;
		
		case 5:
			StringCopy(&Var2, "FEET_P0_0_5", 16);
			iVar3 = 0;
			iVar4 = 5;
			iVar1 = 650;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 18:
			StringCopy(&Var2, "FEET_P0_13_0", 16);
			iVar3 = 13;
			iVar4 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 14;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 20:
			StringCopy(&Var2, "FEET_P0_15_0", 16);
			iVar3 = 15;
			iVar4 = 0;
			break;
		
		case 21:
			StringCopy(&Var2, "FEET_P0_15_1", 16);
			iVar3 = 15;
			iVar4 = 1;
			iVar1 = 64;
			break;
		
		case 22:
			StringCopy(&Var2, "FEET_P0_15_2", 16);
			iVar3 = 15;
			iVar4 = 2;
			iVar1 = 56;
			break;
		
		case 23:
			StringCopy(&Var2, "FEET_P0_15_3", 16);
			iVar3 = 15;
			iVar4 = 3;
			iVar1 = 69;
			break;
		
		case 24:
			StringCopy(&Var2, "FEET_P0_15_4", 16);
			iVar3 = 15;
			iVar4 = 4;
			iVar1 = 59;
			break;
		
		case 25:
			StringCopy(&Var2, "FEET_P0_15_5", 16);
			iVar3 = 15;
			iVar4 = 5;
			iVar1 = 62;
			break;
		
		case 26:
			StringCopy(&Var2, "FEET_P0_15_6", 16);
			iVar3 = 15;
			iVar4 = 6;
			iVar1 = 74;
			break;
		
		case 27:
			StringCopy(&Var2, "FEET_P0_15_7", 16);
			iVar3 = 15;
			iVar4 = 7;
			iVar1 = 68;
			break;
		
		case 28:
			StringCopy(&Var2, "FEET_P0_15_8", 16);
			iVar3 = 15;
			iVar4 = 8;
			iVar1 = 72;
			break;
		
		case 29:
			StringCopy(&Var2, "FEET_P0_15_9", 16);
			iVar3 = 15;
			iVar4 = 9;
			iVar1 = 70;
			break;
		
		case 30:
			StringCopy(&Var2, "FEET_P0_16_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			iVar1 = 48;
			break;
		
		case 31:
			StringCopy(&Var2, "FEET_P0_16_1", 16);
			iVar3 = 16;
			iVar4 = 1;
			iVar1 = 48;
			break;
		
		case 32:
			StringCopy(&Var2, "FEET_P0_16_2", 16);
			iVar3 = 16;
			iVar4 = 2;
			iVar1 = 55;
			break;
		
		case 33:
			StringCopy(&Var2, "FEET_P0_16_3", 16);
			iVar3 = 16;
			iVar4 = 3;
			iVar1 = 75;
			break;
		
		case 34:
			StringCopy(&Var2, "FEET_P0_16_4", 16);
			iVar3 = 16;
			iVar4 = 4;
			iVar1 = 65;
			break;
		
		case 35:
			StringCopy(&Var2, "FEET_P0_16_5", 16);
			iVar3 = 16;
			iVar4 = 5;
			iVar1 = 68;
			break;
		
		case 36:
			StringCopy(&Var2, "FEET_P0_16_6", 16);
			iVar3 = 16;
			iVar4 = 6;
			iVar1 = 58;
			break;
		
		case 37:
			StringCopy(&Var2, "FEET_P0_16_7", 16);
			iVar3 = 16;
			iVar4 = 7;
			iVar1 = 68;
			break;
		
		case 38:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 17;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 39:
			StringCopy(&Var2, "FEET_P0_18_0", 16);
			iVar3 = 18;
			iVar4 = 0;
			iVar1 = 790;
			break;
		
		case 40:
			StringCopy(&Var2, "FEET_P0_18_1", 16);
			iVar3 = 18;
			iVar4 = 1;
			iVar1 = 750;
			break;
		
		case 41:
			StringCopy(&Var2, "FEET_P0_18_2", 16);
			iVar3 = 18;
			iVar4 = 2;
			iVar1 = 860;
			break;
		
		case 42:
			StringCopy(&Var2, "FEET_P0_18_3", 16);
			iVar3 = 18;
			iVar4 = 3;
			iVar1 = 750;
			break;
		
		case 43:
			StringCopy(&Var2, "FEET_P0_18_4", 16);
			iVar3 = 18;
			iVar4 = 4;
			iVar1 = 790;
			break;
		
		case 44:
			StringCopy(&Var2, "FEET_P0_18_5", 16);
			iVar3 = 18;
			iVar4 = 5;
			iVar1 = 840;
			break;
		
		case 45:
			StringCopy(&Var2, "FEET_P0_18_6", 16);
			iVar3 = 18;
			iVar4 = 6;
			iVar1 = 820;
			break;
		
		case 46:
			StringCopy(&Var2, "FEET_P0_18_7", 16);
			iVar3 = 18;
			iVar4 = 7;
			iVar1 = 800;
			break;
		
		case 47:
			StringCopy(&Var2, "FEET_P0_18_8", 16);
			iVar3 = 18;
			iVar4 = 8;
			iVar1 = 850;
			break;
		
		case 48:
			StringCopy(&Var2, "FEET_P0_18_9", 16);
			iVar3 = 18;
			iVar4 = 9;
			iVar1 = 870;
			break;
		
		case 49:
			StringCopy(&Var2, "FEET_P0_18_10", 16);
			iVar3 = 18;
			iVar4 = 10;
			iVar1 = 720;
			break;
		
		case 50:
			StringCopy(&Var2, "FEET_P0_18_11", 16);
			iVar3 = 18;
			iVar4 = 11;
			iVar1 = 740;
			break;
		
		case 51:
			StringCopy(&Var2, "FEET_P0_18_12", 16);
			iVar3 = 18;
			iVar4 = 12;
			iVar1 = 800;
			break;
		
		case 52:
			StringCopy(&Var2, "FEET_P0_18_13", 16);
			iVar3 = 18;
			iVar4 = 13;
			iVar1 = 750;
			break;
		
		case 53:
			StringCopy(&Var2, "FEET_P0_18_14", 16);
			iVar3 = 18;
			iVar4 = 14;
			iVar1 = 770;
			break;
		
		case 54:
			StringCopy(&Var2, "FEET_P0_18_15", 16);
			iVar3 = 18;
			iVar4 = 15;
			iVar1 = 860;
			break;
		
		case 55:
			StringCopy(&Var2, "FEET_P0_19_0", 16);
			iVar3 = 19;
			iVar4 = 0;
			iVar1 = 850;
			break;
		
		case 56:
			StringCopy(&Var2, "FEET_P0_19_1", 16);
			iVar3 = 19;
			iVar4 = 1;
			iVar1 = 800;
			break;
		
		case 57:
			StringCopy(&Var2, "FEET_P0_19_2", 16);
			iVar3 = 19;
			iVar4 = 2;
			iVar1 = 780;
			break;
		
		case 58:
			StringCopy(&Var2, "FEET_P0_19_3", 16);
			iVar3 = 19;
			iVar4 = 3;
			iVar1 = 890;
			break;
		
		case 59:
			StringCopy(&Var2, "FEET_P0_19_4", 16);
			iVar3 = 19;
			iVar4 = 4;
			iVar1 = 820;
			break;
		
		case 60:
			StringCopy(&Var2, "FEET_P0_19_5", 16);
			iVar3 = 19;
			iVar4 = 5;
			iVar1 = 840;
			break;
		
		case 61:
			StringCopy(&Var2, "FEET_P0_19_6", 16);
			iVar3 = 19;
			iVar4 = 6;
			iVar1 = 870;
			break;
		
		case 62:
			StringCopy(&Var2, "FEET_P0_19_7", 16);
			iVar3 = 19;
			iVar4 = 7;
			iVar1 = 930;
			break;
		
		case 63:
			StringCopy(&Var2, "FEET_P0_19_8", 16);
			iVar3 = 19;
			iVar4 = 8;
			iVar1 = 880;
			break;
		
		case 64:
			StringCopy(&Var2, "FEET_P0_19_9", 16);
			iVar3 = 19;
			iVar4 = 9;
			iVar1 = 900;
			break;
		
		case 65:
			StringCopy(&Var2, "FEET_P0_19_10", 16);
			iVar3 = 19;
			iVar4 = 10;
			iVar1 = 920;
			break;
		
		case 66:
			StringCopy(&Var2, "FEET_P0_19_11", 16);
			iVar3 = 19;
			iVar4 = 11;
			iVar1 = 970;
			break;
		
		case 67:
			StringCopy(&Var2, "FEET_P0_19_12", 16);
			iVar3 = 19;
			iVar4 = 12;
			iVar1 = 990;
			break;
		
		case 68:
			StringCopy(&Var2, "FEET_P0_19_13", 16);
			iVar3 = 19;
			iVar4 = 13;
			iVar1 = 960;
			break;
		
		case 69:
			StringCopy(&Var2, "FEET_P0_19_14", 16);
			iVar3 = 19;
			iVar4 = 14;
			iVar1 = 980;
			break;
		
		case 70:
			StringCopy(&Var2, "FEET_P0_19_15", 16);
			iVar3 = 19;
			iVar4 = 15;
			iVar1 = 950;
			break;
		
		case 71:
			StringCopy(&Var2, "FEET_P0_20_0", 16);
			iVar3 = 20;
			iVar4 = 0;
			iVar1 = 110;
			break;
		
		case 72:
			StringCopy(&Var2, "FEET_P0_20_1", 16);
			iVar3 = 20;
			iVar4 = 1;
			iVar1 = 115;
			break;
		
		case 73:
			StringCopy(&Var2, "FEET_P0_20_2", 16);
			iVar3 = 20;
			iVar4 = 2;
			iVar1 = 120;
			break;
		
		case 74:
			StringCopy(&Var2, "FEET_P0_20_3", 16);
			iVar3 = 20;
			iVar4 = 3;
			iVar1 = 110;
			break;
		
		case 75:
			StringCopy(&Var2, "FEET_P0_20_4", 16);
			iVar3 = 20;
			iVar4 = 4;
			iVar1 = 125;
			break;
		
		case 76:
			StringCopy(&Var2, "FEET_P0_20_5", 16);
			iVar3 = 20;
			iVar4 = 5;
			iVar1 = 128;
			break;
		
		case 77:
			StringCopy(&Var2, "FEET_P0_20_6", 16);
			iVar3 = 20;
			iVar4 = 6;
			iVar1 = 135;
			break;
		
		case 78:
			StringCopy(&Var2, "FEET_P0_20_7", 16);
			iVar3 = 20;
			iVar4 = 7;
			iVar1 = 130;
			break;
		
		case 79:
			StringCopy(&Var2, "FEET_P0_20_8", 16);
			iVar3 = 20;
			iVar4 = 8;
			iVar1 = 145;
			break;
		
		case 80:
			StringCopy(&Var2, "FEET_P0_20_9", 16);
			iVar3 = 20;
			iVar4 = 9;
			iVar1 = 110;
			break;
		
		case 81:
			StringCopy(&Var2, "FEET_P0_20_10", 16);
			iVar3 = 20;
			iVar4 = 10;
			iVar1 = 120;
			break;
		
		case 82:
			StringCopy(&Var2, "FEET_P0_20_11", 16);
			iVar3 = 20;
			iVar4 = 11;
			iVar1 = 150;
			break;
		
		case 83:
			StringCopy(&Var2, "FEET_P0_20_12", 16);
			iVar3 = 20;
			iVar4 = 12;
			iVar1 = 125;
			break;
		
		case 84:
			StringCopy(&Var2, "FEET_P0_20_13", 16);
			iVar3 = 20;
			iVar4 = 13;
			iVar1 = 120;
			break;
		
		case 85:
			StringCopy(&Var2, "FEET_P0_20_14", 16);
			iVar3 = 20;
			iVar4 = 14;
			iVar1 = 130;
			break;
		
		case 86:
			StringCopy(&Var2, "FEET_P0_20_15", 16);
			iVar3 = 20;
			iVar4 = 15;
			iVar1 = 110;
			break;
		
		case 87:
			StringCopy(&Var2, "FEET_P0_21_0", 16);
			iVar3 = 21;
			iVar4 = 0;
			iVar1 = 720;
			break;
		
		case 88:
			StringCopy(&Var2, "FEET_P0_21_1", 16);
			iVar3 = 21;
			iVar4 = 1;
			iVar1 = 680;
			break;
		
		case 89:
			StringCopy(&Var2, "FEET_P0_21_2", 16);
			iVar3 = 21;
			iVar4 = 2;
			iVar1 = 650;
			break;
		
		case 90:
			StringCopy(&Var2, "FEET_P0_21_3", 16);
			iVar3 = 21;
			iVar4 = 3;
			iVar1 = 670;
			break;
		
		case 91:
			StringCopy(&Var2, "FEET_P0_21_4", 16);
			iVar3 = 21;
			iVar4 = 4;
			iVar1 = 700;
			break;
		
		case 92:
			StringCopy(&Var2, "FEET_P0_21_5", 16);
			iVar3 = 21;
			iVar4 = 5;
			iVar1 = 680;
			break;
		
		case 93:
			StringCopy(&Var2, "FEET_P0_21_6", 16);
			iVar3 = 21;
			iVar4 = 6;
			iVar1 = 720;
			break;
		
		case 94:
			StringCopy(&Var2, "FEET_P0_21_7", 16);
			iVar3 = 21;
			iVar4 = 7;
			iVar1 = 740;
			break;
		
		case 95:
			StringCopy(&Var2, "FEET_P0_21_8", 16);
			iVar3 = 21;
			iVar4 = 8;
			iVar1 = 760;
			break;
		
		case 96:
			StringCopy(&Var2, "FEET_P0_21_9", 16);
			iVar3 = 21;
			iVar4 = 9;
			iVar1 = 780;
			break;
		
		case 97:
			StringCopy(&Var2, "FEET_P0_21_10", 16);
			iVar3 = 21;
			iVar4 = 10;
			iVar1 = 750;
			break;
		
		case 98:
			StringCopy(&Var2, "FEET_P0_21_11", 16);
			iVar3 = 21;
			iVar4 = 11;
			iVar1 = 700;
			break;
		
		default:
			func_233(iVar7, iParam0, 99);
			return;
			break;
	}
	func_222(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_282(int iParam0)//Position - 0x24536
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 4;
	Global_70671[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "LEGS_P0_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "LEGS_P0_0_0", 16);
			iVar3 = 0;
			iVar4 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "LEGS_P0_0_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "LEGS_P0_0_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "LEGS_P0_0_4", 16);
			iVar3 = 0;
			iVar4 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "LEGS_P0_0_5", 16);
			iVar3 = 0;
			iVar4 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "LEGS_P0_0_6", 16);
			iVar3 = 0;
			iVar4 = 6;
			break;
		
		case 7:
			StringCopy(&Var2, "LEGS_P0_0_7", 16);
			iVar3 = 0;
			iVar4 = 7;
			break;
		
		case 8:
			StringCopy(&Var2, "LEGS_P0_0_8", 16);
			iVar3 = 0;
			iVar4 = 8;
			break;
		
		case 9:
			StringCopy(&Var2, "LEGS_P0_0_9", 16);
			iVar3 = 0;
			iVar4 = 9;
			break;
		
		case 10:
			StringCopy(&Var2, "LEGS_P0_0_10", 16);
			iVar3 = 0;
			iVar4 = 10;
			break;
		
		case 11:
			StringCopy(&Var2, "LEGS_P0_0_11", 16);
			iVar3 = 0;
			iVar4 = 11;
			break;
		
		case 12:
			StringCopy(&Var2, "LEGS_P0_0_12", 16);
			iVar3 = 0;
			iVar4 = 12;
			break;
		
		case 13:
			StringCopy(&Var2, "LEGS_P0_0_13", 16);
			iVar3 = 0;
			iVar4 = 13;
			break;
		
		case 14:
			StringCopy(&Var2, "LEGS_P0_0_14", 16);
			iVar3 = 0;
			iVar4 = 14;
			break;
		
		case 15:
			StringCopy(&Var2, "LEGS_P0_0_15", 16);
			iVar3 = 0;
			iVar4 = 15;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 23:
			StringCopy(&Var2, "LEGS_P0_7_0", 16);
			iVar3 = 7;
			iVar4 = 0;
			iVar1 = 115;
			break;
		
		case 24:
			StringCopy(&Var2, "LEGS_P0_7_1", 16);
			iVar3 = 7;
			iVar4 = 1;
			iVar1 = 115;
			break;
		
		case 25:
			StringCopy(&Var2, "LEGS_P0_7_2", 16);
			iVar3 = 7;
			iVar4 = 2;
			iVar1 = 128;
			break;
		
		case 26:
			StringCopy(&Var2, "LEGS_P0_7_3", 16);
			iVar3 = 7;
			iVar4 = 3;
			iVar1 = 118;
			break;
		
		case 27:
			StringCopy(&Var2, "LEGS_P0_7_4", 16);
			iVar3 = 7;
			iVar4 = 4;
			iVar1 = 125;
			break;
		
		case 28:
			StringCopy(&Var2, "LEGS_P0_7_5", 16);
			iVar3 = 7;
			iVar4 = 5;
			iVar1 = 128;
			break;
		
		case 29:
			StringCopy(&Var2, "LEGS_P0_7_6", 16);
			iVar3 = 7;
			iVar4 = 6;
			iVar1 = 128;
			break;
		
		case 30:
			StringCopy(&Var2, "LEGS_P0_7_7", 16);
			iVar3 = 7;
			iVar4 = 7;
			iVar1 = 125;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 36:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 2;
			bVar0 = true;
			break;
		
		case 37:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 3;
			bVar0 = true;
			break;
		
		case 38:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 4;
			bVar0 = true;
			break;
		
		case 39:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 5;
			bVar0 = true;
			break;
		
		case 40:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 41:
			StringCopy(&Var2, "LEGS_P0_13_0", 16);
			iVar3 = 13;
			iVar4 = 0;
			iVar1 = 68;
			break;
		
		case 42:
			StringCopy(&Var2, "LEGS_P0_13_1", 16);
			iVar3 = 13;
			iVar4 = 1;
			iVar1 = 68;
			break;
		
		case 43:
			StringCopy(&Var2, "LEGS_P0_13_2", 16);
			iVar3 = 13;
			iVar4 = 2;
			iVar1 = 68;
			break;
		
		case 44:
			StringCopy(&Var2, "LEGS_P0_13_3", 16);
			iVar3 = 13;
			iVar4 = 3;
			iVar1 = 68;
			break;
		
		case 45:
			StringCopy(&Var2, "LEGS_P0_13_4", 16);
			iVar3 = 13;
			iVar4 = 4;
			iVar1 = 68;
			break;
		
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 14;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 47:
			StringCopy(&Var2, "LEGS_P0_15_0", 16);
			iVar3 = 15;
			iVar4 = 0;
			break;
		
		case 48:
			StringCopy(&Var2, "LEGS_P0_15_1", 16);
			iVar3 = 15;
			iVar4 = 1;
			iVar1 = 550;
			break;
		
		case 49:
			StringCopy(&Var2, "LEGS_P0_15_2", 16);
			iVar3 = 15;
			iVar4 = 2;
			iVar1 = 650;
			break;
		
		case 50:
			StringCopy(&Var2, "LEGS_P0_15_3", 16);
			iVar3 = 15;
			iVar4 = 3;
			iVar1 = 875;
			break;
		
		case 51:
			StringCopy(&Var2, "LEGS_P0_15_4", 16);
			iVar3 = 15;
			iVar4 = 4;
			iVar1 = 820;
			break;
		
		case 52:
			StringCopy(&Var2, "LEGS_P0_15_5", 16);
			iVar3 = 15;
			iVar4 = 5;
			iVar1 = 720;
			break;
		
		case 53:
			StringCopy(&Var2, "LEGS_P0_15_6", 16);
			iVar3 = 15;
			iVar4 = 6;
			iVar1 = 750;
			break;
		
		case 54:
			StringCopy(&Var2, "LEGS_P0_15_7", 16);
			iVar3 = 15;
			iVar4 = 7;
			iVar1 = 850;
			break;
		
		case 55:
			StringCopy(&Var2, "LEGS_P0_16_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			break;
		
		case 56:
			StringCopy(&Var2, "LEGS_P0_16_1", 16);
			iVar3 = 16;
			iVar4 = 1;
			iVar1 = 48;
			break;
		
		case 57:
			StringCopy(&Var2, "LEGS_P0_16_2", 16);
			iVar3 = 16;
			iVar4 = 2;
			iVar1 = 48;
			break;
		
		case 58:
			StringCopy(&Var2, "LEGS_P0_16_3", 16);
			iVar3 = 16;
			iVar4 = 3;
			iVar1 = 38;
			break;
		
		case 59:
			StringCopy(&Var2, "LEGS_P0_16_4", 16);
			iVar3 = 16;
			iVar4 = 4;
			iVar1 = 38;
			break;
		
		case 60:
			StringCopy(&Var2, "LEGS_P0_16_5", 16);
			iVar3 = 16;
			iVar4 = 5;
			iVar1 = 42;
			break;
		
		case 61:
			StringCopy(&Var2, "LEGS_P0_16_6", 16);
			iVar3 = 16;
			iVar4 = 6;
			iVar1 = 58;
			break;
		
		case 62:
			StringCopy(&Var2, "LEGS_P0_16_7", 16);
			iVar3 = 16;
			iVar4 = 7;
			iVar1 = 46;
			break;
		
		case 63:
			StringCopy(&Var2, "LEGS_P0_16_8", 16);
			iVar3 = 16;
			iVar4 = 8;
			iVar1 = 46;
			break;
		
		case 64:
			StringCopy(&Var2, "LEGS_P0_16_9", 16);
			iVar3 = 16;
			iVar4 = 9;
			iVar1 = 46;
			break;
		
		case 65:
			StringCopy(&Var2, "LEGS_P0_16_10", 16);
			iVar3 = 16;
			iVar4 = 10;
			iVar1 = 68;
			break;
		
		case 66:
			StringCopy(&Var2, "LEGS_P0_16_11", 16);
			iVar3 = 16;
			iVar4 = 11;
			iVar1 = 58;
			break;
		
		case 67:
			StringCopy(&Var2, "LEGS_P0_16_12", 16);
			iVar3 = 16;
			iVar4 = 12;
			iVar1 = 50;
			break;
		
		case 68:
			StringCopy(&Var2, "LEGS_P0_16_13", 16);
			iVar3 = 16;
			iVar4 = 13;
			iVar1 = 68;
			break;
		
		case 69:
			StringCopy(&Var2, "LEGS_P0_16_14", 16);
			iVar3 = 16;
			iVar4 = 14;
			iVar1 = 68;
			break;
		
		case 70:
			StringCopy(&Var2, "LEGS_P0_16_15", 16);
			iVar3 = 16;
			iVar4 = 15;
			iVar1 = 42;
			break;
		
		case 71:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 17;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 72:
			StringCopy(&Var2, "LEGS_P0_18_0", 16);
			iVar3 = 18;
			iVar4 = 0;
			break;
		
		case 73:
			StringCopy(&Var2, "LEGS_P0_18_1", 16);
			iVar3 = 18;
			iVar4 = 1;
			iVar1 = 250;
			break;
		
		case 74:
			StringCopy(&Var2, "LEGS_P0_18_2", 16);
			iVar3 = 18;
			iVar4 = 2;
			iVar1 = 250;
			break;
		
		case 75:
			StringCopy(&Var2, "LEGS_P0_18_3", 16);
			iVar3 = 18;
			iVar4 = 3;
			iVar1 = 290;
			break;
		
		case 76:
			StringCopy(&Var2, "LEGS_P0_18_4", 16);
			iVar3 = 18;
			iVar4 = 4;
			iVar1 = 270;
			break;
		
		case 77:
			StringCopy(&Var2, "LEGS_P0_18_5", 16);
			iVar3 = 18;
			iVar4 = 5;
			iVar1 = 270;
			break;
		
		case 78:
			StringCopy(&Var2, "LEGS_P0_18_6", 16);
			iVar3 = 18;
			iVar4 = 6;
			iVar1 = 15;
			break;
		
		case 79:
			StringCopy(&Var2, "LEGS_P0_18_7", 16);
			iVar3 = 18;
			iVar4 = 7;
			iVar1 = 12;
			break;
		
		case 80:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 19;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 81:
			StringCopy(&Var2, "LEGS_P0_20_0", 16);
			iVar3 = 20;
			iVar4 = 0;
			break;
		
		case 82:
			StringCopy(&Var2, "LEGS_P0_20_1", 16);
			iVar3 = 20;
			iVar4 = 1;
			iVar1 = 118;
			break;
		
		case 83:
			StringCopy(&Var2, "LEGS_P0_20_2", 16);
			iVar3 = 20;
			iVar4 = 2;
			iVar1 = 110;
			break;
		
		case 84:
			StringCopy(&Var2, "LEGS_P0_21_0", 16);
			iVar3 = 21;
			iVar4 = 0;
			iVar1 = 88;
			break;
		
		case 85:
			StringCopy(&Var2, "LEGS_P0_21_1", 16);
			iVar3 = 21;
			iVar4 = 1;
			iVar1 = 95;
			break;
		
		case 86:
			StringCopy(&Var2, "LEGS_P0_21_2", 16);
			iVar3 = 21;
			iVar4 = 2;
			iVar1 = 95;
			break;
		
		case 87:
			StringCopy(&Var2, "LEGS_P0_21_3", 16);
			iVar3 = 21;
			iVar4 = 3;
			iVar1 = 98;
			break;
		
		case 88:
			StringCopy(&Var2, "LEGS_P0_22_0", 16);
			iVar3 = 22;
			iVar4 = 0;
			iVar1 = 140;
			break;
		
		case 89:
			StringCopy(&Var2, "LEGS_P0_23_0", 16);
			iVar3 = 23;
			iVar4 = 0;
			break;
		
		case 90:
			StringCopy(&Var2, "LEGS_P0_23_1", 16);
			iVar3 = 23;
			iVar4 = 1;
			iVar1 = 150;
			break;
		
		case 91:
			StringCopy(&Var2, "LEGS_P0_23_2", 16);
			iVar3 = 23;
			iVar4 = 2;
			iVar1 = 130;
			break;
		
		case 92:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 24;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 93:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 25;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 94:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 95:
			StringCopy(&Var2, "LEGS_P0_27_0", 16);
			iVar3 = 27;
			iVar4 = 0;
			break;
		
		case 96:
			StringCopy(&Var2, "LEGS_P0_28_0", 16);
			iVar3 = 28;
			iVar4 = 0;
			iVar1 = 45;
			break;
		
		case 97:
			StringCopy(&Var2, "LEGS_P0_28_1", 16);
			iVar3 = 28;
			iVar4 = 1;
			iVar1 = 48;
			break;
		
		case 98:
			StringCopy(&Var2, "LEGS_P0_28_2", 16);
			iVar3 = 28;
			iVar4 = 2;
			iVar1 = 48;
			break;
		
		case 99:
			StringCopy(&Var2, "LEGS_P0_28_3", 16);
			iVar3 = 28;
			iVar4 = 3;
			iVar1 = 52;
			break;
		
		case 100:
			StringCopy(&Var2, "LEGS_P0_28_4", 16);
			iVar3 = 28;
			iVar4 = 4;
			iVar1 = 52;
			break;
		
		case 101:
			StringCopy(&Var2, "LEGS_P0_28_5", 16);
			iVar3 = 28;
			iVar4 = 5;
			iVar1 = 55;
			break;
		
		case 102:
			StringCopy(&Var2, "LEGS_P0_28_6", 16);
			iVar3 = 28;
			iVar4 = 6;
			iVar1 = 55;
			break;
		
		case 103:
			StringCopy(&Var2, "LEGS_P0_28_7", 16);
			iVar3 = 28;
			iVar4 = 7;
			iVar1 = 55;
			break;
		
		case 104:
			StringCopy(&Var2, "LEGS_P0_28_8", 16);
			iVar3 = 28;
			iVar4 = 8;
			iVar1 = 58;
			break;
		
		case 105:
			StringCopy(&Var2, "LEGS_P0_28_9", 16);
			iVar3 = 28;
			iVar4 = 9;
			iVar1 = 58;
			break;
		
		case 106:
			StringCopy(&Var2, "LEGS_P0_28_10", 16);
			iVar3 = 28;
			iVar4 = 10;
			iVar1 = 60;
			break;
		
		case 107:
			StringCopy(&Var2, "LEGS_P0_28_11", 16);
			iVar3 = 28;
			iVar4 = 11;
			iVar1 = 60;
			break;
		
		case 108:
			StringCopy(&Var2, "LEGS_P0_28_12", 16);
			iVar3 = 28;
			iVar4 = 12;
			iVar1 = 62;
			break;
		
		case 109:
			StringCopy(&Var2, "LEGS_P0_28_13", 16);
			iVar3 = 28;
			iVar4 = 13;
			iVar1 = 62;
			break;
		
		case 110:
			StringCopy(&Var2, "LEGS_P0_28_14", 16);
			iVar3 = 28;
			iVar4 = 14;
			iVar1 = 65;
			break;
		
		case 111:
			StringCopy(&Var2, "LEGS_P0_28_15", 16);
			iVar3 = 28;
			iVar4 = 15;
			iVar1 = 65;
			break;
		
		case 112:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 29;
			iVar4 = 0;
			break;
		
		default:
			func_233(iVar7, iParam0, 113);
			return;
			break;
	}
	func_222(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_283(int iParam0)//Position - 0x2517F
{
	if (iParam0 < 60)
	{
		func_285(iParam0);
	}
	else
	{
		func_284(iParam0);
	}
	if (Global_70671[0 /*14*/].f_2 == -1)
	{
		func_233(3, iParam0, 181);
	}
}

void func_284(int iParam0)//Position - 0x251B3
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 3;
	Global_70671[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 60:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 61:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 62:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 63:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 64:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 65:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 2;
			bVar0 = true;
			break;
		
		case 66:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 3;
			bVar0 = true;
			break;
		
		case 67:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 4;
			bVar0 = true;
			break;
		
		case 68:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 5;
			bVar0 = true;
			break;
		
		case 69:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 13;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 70:
			StringCopy(&Var2, "TORSO_P0_14_0", 16);
			iVar3 = 14;
			iVar4 = 0;
			iVar1 = 120;
			break;
		
		case 71:
			StringCopy(&Var2, "TORSO_P0_14_1", 16);
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 120;
			break;
		
		case 72:
			StringCopy(&Var2, "TORSO_P0_14_2", 16);
			iVar3 = 14;
			iVar4 = 2;
			iVar1 = 120;
			break;
		
		case 73:
			StringCopy(&Var2, "TORSO_P0_14_3", 16);
			iVar3 = 14;
			iVar4 = 3;
			iVar1 = 120;
			break;
		
		case 74:
			StringCopy(&Var2, "TORSO_P0_14_4", 16);
			iVar3 = 14;
			iVar4 = 4;
			iVar1 = 120;
			break;
		
		case 75:
			StringCopy(&Var2, "TORSO_P0_14_5", 16);
			iVar3 = 14;
			iVar4 = 5;
			iVar1 = 120;
			break;
		
		case 76:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 15;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 77:
			StringCopy(&Var2, "TORSO_P0_16_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			break;
		
		case 78:
			StringCopy(&Var2, "TORSO_P0_16_1", 16);
			iVar3 = 16;
			iVar4 = 1;
			iVar1 = 20;
			break;
		
		case 79:
			StringCopy(&Var2, "TORSO_P0_16_2", 16);
			iVar3 = 16;
			iVar4 = 2;
			iVar1 = 24;
			break;
		
		case 80:
			StringCopy(&Var2, "TORSO_P0_16_3", 16);
			iVar3 = 16;
			iVar4 = 3;
			iVar1 = 22;
			break;
		
		case 81:
			StringCopy(&Var2, "TORSO_P0_16_4", 16);
			iVar3 = 16;
			iVar4 = 4;
			iVar1 = 25;
			break;
		
		case 82:
			StringCopy(&Var2, "TORSO_P0_16_5", 16);
			iVar3 = 16;
			iVar4 = 5;
			iVar1 = 25;
			break;
		
		case 83:
			StringCopy(&Var2, "TORSO_P0_16_6", 16);
			iVar3 = 16;
			iVar4 = 6;
			iVar1 = 22;
			break;
		
		case 84:
			StringCopy(&Var2, "TORSO_P0_16_7", 16);
			iVar3 = 16;
			iVar4 = 7;
			iVar1 = 27;
			break;
		
		case 85:
			StringCopy(&Var2, "TORSO_P0_17_0", 16);
			iVar3 = 17;
			iVar4 = 0;
			break;
		
		case 86:
			StringCopy(&Var2, "TORSO_P0_17_1", 16);
			iVar3 = 17;
			iVar4 = 1;
			break;
		
		case 87:
			StringCopy(&Var2, "TORSO_P0_17_2", 16);
			iVar3 = 17;
			iVar4 = 2;
			break;
		
		case 88:
			StringCopy(&Var2, "TORSO_P0_17_3", 16);
			iVar3 = 17;
			iVar4 = 3;
			iVar1 = 48;
			break;
		
		case 89:
			StringCopy(&Var2, "TORSO_P0_17_4", 16);
			iVar3 = 17;
			iVar4 = 4;
			iVar1 = 40;
			break;
		
		case 90:
			StringCopy(&Var2, "TORSO_P0_17_5", 16);
			iVar3 = 17;
			iVar4 = 5;
			iVar1 = 45;
			break;
		
		case 91:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 18;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 92:
			StringCopy(&Var2, "TORSO_P0_19_0", 16);
			iVar3 = 19;
			iVar4 = 0;
			break;
		
		case 93:
			StringCopy(&Var2, "TORSO_P0_19_1", 16);
			iVar3 = 19;
			iVar4 = 1;
			iVar1 = 190;
			break;
		
		case 94:
			StringCopy(&Var2, "TORSO_P0_19_2", 16);
			iVar3 = 19;
			iVar4 = 2;
			iVar1 = 190;
			break;
		
		case 95:
			StringCopy(&Var2, "TORSO_P0_19_3", 16);
			iVar3 = 19;
			iVar4 = 3;
			iVar1 = 190;
			break;
		
		case 96:
			StringCopy(&Var2, "TORSO_P0_19_4", 16);
			iVar3 = 19;
			iVar4 = 4;
			iVar1 = 210;
			break;
		
		case 97:
			StringCopy(&Var2, "TORSO_P0_20_0", 16);
			iVar3 = 20;
			iVar4 = 0;
			break;
		
		case 98:
			StringCopy(&Var2, "TORSO_P0_20_1", 16);
			iVar3 = 20;
			iVar4 = 1;
			iVar1 = 115;
			break;
		
		case 99:
			StringCopy(&Var2, "TORSO_P0_20_2", 16);
			iVar3 = 20;
			iVar4 = 2;
			iVar1 = 55;
			break;
		
		case 100:
			StringCopy(&Var2, "TORSO_P0_20_3", 16);
			iVar3 = 20;
			iVar4 = 3;
			iVar1 = 110;
			break;
		
		case 101:
			StringCopy(&Var2, "TORSO_P0_20_4", 16);
			iVar3 = 20;
			iVar4 = 4;
			iVar1 = 99;
			break;
		
		case 102:
			StringCopy(&Var2, "TORSO_P0_20_5", 16);
			iVar3 = 20;
			iVar4 = 5;
			iVar1 = 49;
			break;
		
		case 103:
			StringCopy(&Var2, "TORSO_P0_20_6", 16);
			iVar3 = 20;
			iVar4 = 6;
			iVar1 = 120;
			break;
		
		case 104:
			StringCopy(&Var2, "TORSO_P0_20_7", 16);
			iVar3 = 20;
			iVar4 = 7;
			iVar1 = 45;
			break;
		
		case 105:
			StringCopy(&Var2, "TORSO_P0_20_8", 16);
			iVar3 = 20;
			iVar4 = 8;
			iVar1 = 115;
			break;
		
		case 106:
			StringCopy(&Var2, "TORSO_P0_20_9", 16);
			iVar3 = 20;
			iVar4 = 9;
			iVar1 = 105;
			break;
		
		case 107:
			StringCopy(&Var2, "TORSO_P0_20_10", 16);
			iVar3 = 20;
			iVar4 = 10;
			iVar1 = 90;
			break;
		
		case 108:
			StringCopy(&Var2, "TORSO_P0_20_11", 16);
			iVar3 = 20;
			iVar4 = 11;
			iVar1 = 95;
			break;
		
		case 109:
			StringCopy(&Var2, "TORSO_P0_20_12", 16);
			iVar3 = 20;
			iVar4 = 12;
			iVar1 = 39;
			break;
		
		case 110:
			StringCopy(&Var2, "TORSO_P0_20_13", 16);
			iVar3 = 20;
			iVar4 = 13;
			iVar1 = 95;
			break;
		
		case 111:
			StringCopy(&Var2, "TORSO_P0_20_14", 16);
			iVar3 = 20;
			iVar4 = 14;
			iVar1 = 35;
			break;
		
		case 112:
			StringCopy(&Var2, "TORSO_P0_20_15", 16);
			iVar3 = 20;
			iVar4 = 15;
			iVar1 = 95;
			break;
		
		case 113:
			StringCopy(&Var2, "TORSO_P0_21_0", 16);
			iVar3 = 21;
			iVar4 = 0;
			iVar1 = 88;
			break;
		
		case 114:
			StringCopy(&Var2, "TORSO_P0_21_1", 16);
			iVar3 = 21;
			iVar4 = 1;
			iVar1 = 60;
			break;
		
		case 115:
			StringCopy(&Var2, "TORSO_P0_21_2", 16);
			iVar3 = 21;
			iVar4 = 2;
			iVar1 = 70;
			break;
		
		case 116:
			StringCopy(&Var2, "TORSO_P0_21_3", 16);
			iVar3 = 21;
			iVar4 = 3;
			iVar1 = 80;
			break;
		
		case 117:
			StringCopy(&Var2, "TORSO_P0_21_4", 16);
			iVar3 = 21;
			iVar4 = 4;
			iVar1 = 90;
			break;
		
		case 118:
			StringCopy(&Var2, "TORSO_P0_21_5", 16);
			iVar3 = 21;
			iVar4 = 5;
			iVar1 = 80;
			break;
		
		case 119:
			StringCopy(&Var2, "TORSO_P0_21_6", 16);
			iVar3 = 21;
			iVar4 = 6;
			iVar1 = 70;
			break;
		
		case 120:
			StringCopy(&Var2, "TORSO_P0_21_7", 16);
			iVar3 = 21;
			iVar4 = 7;
			iVar1 = 95;
			break;
		
		case 121:
			StringCopy(&Var2, "TORSO_P0_21_8", 16);
			iVar3 = 21;
			iVar4 = 8;
			iVar1 = 105;
			break;
		
		case 122:
			StringCopy(&Var2, "TORSO_P0_21_9", 16);
			iVar3 = 21;
			iVar4 = 9;
			iVar1 = 95;
			break;
		
		case 123:
			StringCopy(&Var2, "TORSO_P0_21_10", 16);
			iVar3 = 21;
			iVar4 = 10;
			iVar1 = 110;
			break;
		
		case 124:
			StringCopy(&Var2, "TORSO_P0_21_11", 16);
			iVar3 = 21;
			iVar4 = 11;
			iVar1 = 98;
			break;
		
		case 125:
			StringCopy(&Var2, "TORSO_P0_21_12", 16);
			iVar3 = 21;
			iVar4 = 12;
			iVar1 = 88;
			break;
		
		case 126:
			StringCopy(&Var2, "TORSO_P0_21_13", 16);
			iVar3 = 21;
			iVar4 = 13;
			iVar1 = 98;
			break;
		
		case 127:
			StringCopy(&Var2, "TORSO_P0_21_14", 16);
			iVar3 = 21;
			iVar4 = 14;
			iVar1 = 110;
			break;
		
		case 128:
			StringCopy(&Var2, "TORSO_P0_21_15", 16);
			iVar3 = 21;
			iVar4 = 15;
			iVar1 = 98;
			break;
		
		case 129:
			StringCopy(&Var2, "TORSO_P0_22_0", 16);
			iVar3 = 22;
			iVar4 = 0;
			break;
		
		case 130:
			StringCopy(&Var2, "TORSO_P0_22_1", 16);
			iVar3 = 22;
			iVar4 = 1;
			iVar1 = 4950;
			break;
		
		case 131:
			StringCopy(&Var2, "TORSO_P0_22_2", 16);
			iVar3 = 22;
			iVar4 = 2;
			iVar1 = 4195;
			break;
		
		case 132:
			StringCopy(&Var2, "TORSO_P0_22_3", 16);
			iVar3 = 22;
			iVar4 = 3;
			iVar1 = 3195;
			break;
		
		case 133:
			StringCopy(&Var2, "TORSO_P0_22_4", 16);
			iVar3 = 22;
			iVar4 = 4;
			iVar1 = 2950;
			break;
		
		case 134:
			StringCopy(&Var2, "TORSO_P0_22_5", 16);
			iVar3 = 22;
			iVar4 = 5;
			iVar1 = 3950;
			break;
		
		case 135:
			StringCopy(&Var2, "TORSO_P0_23_0", 16);
			iVar3 = 23;
			iVar4 = 0;
			iVar1 = 3200;
			break;
		
		case 136:
			StringCopy(&Var2, "TORSO_P0_23_1", 16);
			iVar3 = 23;
			iVar4 = 1;
			iVar1 = 3200;
			break;
		
		case 137:
			StringCopy(&Var2, "TORSO_P0_23_2", 16);
			iVar3 = 23;
			iVar4 = 2;
			iVar1 = 3200;
			break;
		
		case 138:
			StringCopy(&Var2, "TORSO_P0_23_3", 16);
			iVar3 = 23;
			iVar4 = 3;
			iVar1 = 3200;
			break;
		
		case 139:
			StringCopy(&Var2, "TORSO_P0_23_4", 16);
			iVar3 = 23;
			iVar4 = 4;
			iVar1 = 3200;
			break;
		
		case 140:
			StringCopy(&Var2, "TORSO_P0_23_5", 16);
			iVar3 = 23;
			iVar4 = 5;
			iVar1 = 3200;
			break;
		
		case 141:
			StringCopy(&Var2, "TORSO_P0_23_6", 16);
			iVar3 = 23;
			iVar4 = 6;
			iVar1 = 3200;
			break;
		
		case 142:
			StringCopy(&Var2, "TORSO_P0_23_7", 16);
			iVar3 = 23;
			iVar4 = 7;
			iVar1 = 3200;
			break;
		
		case 143:
			StringCopy(&Var2, "TORSO_P0_23_8", 16);
			iVar3 = 23;
			iVar4 = 8;
			iVar1 = 3200;
			break;
		
		case 144:
			StringCopy(&Var2, "TORSO_P0_23_9", 16);
			iVar3 = 23;
			iVar4 = 9;
			iVar1 = 3200;
			break;
		
		case 145:
			StringCopy(&Var2, "TORSO_P0_23_10", 16);
			iVar3 = 23;
			iVar4 = 10;
			iVar1 = 3200;
			break;
		
		case 146:
			StringCopy(&Var2, "TORSO_P0_23_11", 16);
			iVar3 = 23;
			iVar4 = 11;
			iVar1 = 3200;
			break;
		
		case 147:
			StringCopy(&Var2, "TORSO_P0_23_12", 16);
			iVar3 = 23;
			iVar4 = 12;
			iVar1 = 3200;
			break;
		
		case 148:
			StringCopy(&Var2, "TORSO_P0_23_13", 16);
			iVar3 = 23;
			iVar4 = 13;
			iVar1 = 3200;
			break;
		
		case 149:
			StringCopy(&Var2, "TORSO_P0_23_14", 16);
			iVar3 = 23;
			iVar4 = 14;
			iVar1 = 3200;
			break;
		
		case 150:
			StringCopy(&Var2, "TORSO_P0_23_15", 16);
			iVar3 = 23;
			iVar4 = 15;
			iVar1 = 3200;
			break;
		
		case 151:
			StringCopy(&Var2, "TORSO_P0_24_0", 16);
			iVar3 = 24;
			iVar4 = 0;
			iVar1 = 1350;
			break;
		
		case 152:
			StringCopy(&Var2, "TORSO_P0_24_1", 16);
			iVar3 = 24;
			iVar4 = 1;
			iVar1 = 1400;
			break;
		
		case 153:
			StringCopy(&Var2, "TORSO_P0_24_2", 16);
			iVar3 = 24;
			iVar4 = 2;
			iVar1 = 1200;
			break;
		
		case 154:
			StringCopy(&Var2, "TORSO_P0_24_3", 16);
			iVar3 = 24;
			iVar4 = 3;
			iVar1 = 1250;
			break;
		
		case 155:
			StringCopy(&Var2, "TORSO_P0_24_4", 16);
			iVar3 = 24;
			iVar4 = 4;
			iVar1 = 1350;
			break;
		
		case 156:
			StringCopy(&Var2, "TORSO_P0_24_5", 16);
			iVar3 = 24;
			iVar4 = 5;
			iVar1 = 1300;
			break;
		
		case 157:
			StringCopy(&Var2, "TORSO_P0_24_6", 16);
			iVar3 = 24;
			iVar4 = 6;
			iVar1 = 1380;
			break;
		
		case 158:
			StringCopy(&Var2, "TORSO_P0_24_7", 16);
			iVar3 = 24;
			iVar4 = 7;
			iVar1 = 1340;
			break;
		
		case 159:
			StringCopy(&Var2, "TORSO_P0_24_8", 16);
			iVar3 = 24;
			iVar4 = 8;
			iVar1 = 1380;
			break;
		
		case 160:
			StringCopy(&Var2, "TORSO_P0_24_9", 16);
			iVar3 = 24;
			iVar4 = 9;
			iVar1 = 1250;
			break;
		
		case 161:
			StringCopy(&Var2, "TORSO_P0_25_0", 16);
			iVar3 = 25;
			iVar4 = 0;
			iVar1 = 840;
			break;
		
		case 162:
			StringCopy(&Var2, "TORSO_P0_25_1", 16);
			iVar3 = 25;
			iVar4 = 1;
			iVar1 = 840;
			break;
		
		case 163:
			StringCopy(&Var2, "TORSO_P0_25_2", 16);
			iVar3 = 25;
			iVar4 = 2;
			iVar1 = 840;
			break;
		
		case 164:
			StringCopy(&Var2, "TORSO_P0_25_3", 16);
			iVar3 = 25;
			iVar4 = 3;
			iVar1 = 840;
			break;
		
		case 165:
			StringCopy(&Var2, "TORSO_P0_25_4", 16);
			iVar3 = 25;
			iVar4 = 4;
			iVar1 = 840;
			break;
		
		case 166:
			StringCopy(&Var2, "TORSO_P0_25_5", 16);
			iVar3 = 25;
			iVar4 = 5;
			iVar1 = 840;
			break;
		
		case 167:
			StringCopy(&Var2, "TORSO_P0_25_6", 16);
			iVar3 = 25;
			iVar4 = 6;
			iVar1 = 840;
			break;
		
		case 168:
			StringCopy(&Var2, "TORSO_P0_25_7", 16);
			iVar3 = 25;
			iVar4 = 7;
			iVar1 = 840;
			break;
		
		case 169:
			StringCopy(&Var2, "TORSO_P0_26_0", 16);
			iVar3 = 26;
			iVar4 = 0;
			break;
		
		case 170:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 27;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 171:
			StringCopy(&Var2, "TORSO_P0_28_0", 16);
			iVar3 = 28;
			iVar4 = 0;
			break;
		
		case 172:
			StringCopy(&Var2, "TORSO_P0_28_1", 16);
			iVar3 = 28;
			iVar4 = 1;
			iVar1 = 130;
			break;
		
		case 173:
			StringCopy(&Var2, "TORSO_P0_28_2", 16);
			iVar3 = 28;
			iVar4 = 2;
			iVar1 = 110;
			break;
		
		case 174:
			StringCopy(&Var2, "TORSO_P0_29_0", 16);
			iVar3 = 29;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 175:
			StringCopy(&Var2, "TORSO_P0_30_0", 16);
			iVar3 = 30;
			iVar4 = 0;
			iVar1 = 290;
			break;
		
		case 176:
			StringCopy(&Var2, "TORSO_P0_30_1", 16);
			iVar3 = 30;
			iVar4 = 1;
			iVar1 = 320;
			break;
		
		case 177:
			StringCopy(&Var2, "TORSO_P0_31_0", 16);
			iVar3 = 31;
			iVar4 = 0;
			iVar1 = 59;
			break;
		
		case 178:
			StringCopy(&Var2, "TORSO_P0_31_1", 16);
			iVar3 = 31;
			iVar4 = 1;
			iVar1 = 55;
			break;
		
		case 179:
			StringCopy(&Var2, "TORSO_P0_31_2", 16);
			iVar3 = 31;
			iVar4 = 2;
			iVar1 = 59;
			break;
		
		case 180:
			StringCopy(&Var2, "TORSO_P0_31_3", 16);
			iVar3 = 31;
			iVar4 = 3;
			iVar1 = 49;
			break;
		
		default:
			return;
			break;
	}
	func_222(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_285(int iParam0)//Position - 0x25F53
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 3;
	Global_70671[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "TORSO_P0_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "TORSO_P0_0_0", 16);
			iVar3 = 0;
			iVar4 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "TORSO_P0_0_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 3500;
			break;
		
		case 3:
			StringCopy(&Var2, "TORSO_P0_0_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "TORSO_P0_0_4", 16);
			iVar3 = 0;
			iVar4 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "TORSO_P0_0_5", 16);
			iVar3 = 0;
			iVar4 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "TORSO_P0_0_6", 16);
			iVar3 = 0;
			iVar4 = 6;
			break;
		
		case 7:
			StringCopy(&Var2, "TORSO_P0_0_7", 16);
			iVar3 = 0;
			iVar4 = 7;
			break;
		
		case 8:
			StringCopy(&Var2, "TORSO_P0_0_8", 16);
			iVar3 = 0;
			iVar4 = 8;
			break;
		
		case 9:
			StringCopy(&Var2, "TORSO_P0_0_9", 16);
			iVar3 = 0;
			iVar4 = 9;
			break;
		
		case 10:
			StringCopy(&Var2, "TORSO_P0_0_10", 16);
			iVar3 = 0;
			iVar4 = 10;
			break;
		
		case 11:
			StringCopy(&Var2, "TORSO_P0_0_11", 16);
			iVar3 = 0;
			iVar4 = 11;
			break;
		
		case 12:
			StringCopy(&Var2, "TORSO_P0_0_12", 16);
			iVar3 = 0;
			iVar4 = 12;
			break;
		
		case 13:
			StringCopy(&Var2, "TORSO_P0_0_13", 16);
			iVar3 = 0;
			iVar4 = 13;
			break;
		
		case 14:
			StringCopy(&Var2, "TORSO_P0_0_14", 16);
			iVar3 = 0;
			iVar4 = 14;
			break;
		
		case 15:
			StringCopy(&Var2, "TORSO_P0_0_15", 16);
			iVar3 = 0;
			iVar4 = 15;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			iVar1 = 20;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 1;
			iVar1 = 18;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 2;
			iVar1 = 22;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 3;
			iVar1 = 25;
			break;
		
		case 21:
			StringCopy(&Var2, "TORSO_P0_2_4", 16);
			iVar3 = 2;
			iVar4 = 4;
			iVar1 = 19;
			break;
		
		case 22:
			StringCopy(&Var2, "TORSO_P0_2_5", 16);
			iVar3 = 2;
			iVar4 = 5;
			iVar1 = 20;
			break;
		
		case 23:
			StringCopy(&Var2, "TORSO_P0_2_6", 16);
			iVar3 = 2;
			iVar4 = 6;
			iVar1 = 22;
			break;
		
		case 24:
			StringCopy(&Var2, "TORSO_P0_2_7", 16);
			iVar3 = 2;
			iVar4 = 7;
			iVar1 = 18;
			break;
		
		case 25:
			StringCopy(&Var2, "TORSO_P0_2_8", 16);
			iVar3 = 2;
			iVar4 = 8;
			iVar1 = 39;
			break;
		
		case 26:
			StringCopy(&Var2, "TORSO_P0_2_9", 16);
			iVar3 = 2;
			iVar4 = 9;
			iVar1 = 32;
			break;
		
		case 27:
			StringCopy(&Var2, "TORSO_P0_2_10", 16);
			iVar3 = 2;
			iVar4 = 10;
			iVar1 = 35;
			break;
		
		case 28:
			StringCopy(&Var2, "TORSO_P0_2_11", 16);
			iVar3 = 2;
			iVar4 = 11;
			iVar1 = 35;
			break;
		
		case 29:
			StringCopy(&Var2, "TORSO_P0_2_12", 16);
			iVar3 = 2;
			iVar4 = 12;
			iVar1 = 210;
			break;
		
		case 30:
			StringCopy(&Var2, "TORSO_P0_2_13", 16);
			iVar3 = 2;
			iVar4 = 13;
			iVar1 = 250;
			break;
		
		case 31:
			StringCopy(&Var2, "TORSO_P0_2_14", 16);
			iVar3 = 2;
			iVar4 = 14;
			iVar1 = 290;
			break;
		
		case 32:
			StringCopy(&Var2, "TORSO_P0_2_15", 16);
			iVar3 = 2;
			iVar4 = 15;
			iVar1 = 310;
			break;
		
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 36:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 37:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 38:
			StringCopy(&Var2, "TORSO_P0_7_0", 16);
			iVar3 = 7;
			iVar4 = 0;
			iVar1 = 150;
			break;
		
		case 39:
			StringCopy(&Var2, "TORSO_P0_7_1", 16);
			iVar3 = 7;
			iVar4 = 1;
			iVar1 = 160;
			break;
		
		case 40:
			StringCopy(&Var2, "TORSO_P0_7_2", 16);
			iVar3 = 7;
			iVar4 = 2;
			iVar1 = 150;
			break;
		
		case 41:
			StringCopy(&Var2, "TORSO_P0_7_3", 16);
			iVar3 = 7;
			iVar4 = 3;
			iVar1 = 150;
			break;
		
		case 42:
			StringCopy(&Var2, "TORSO_P0_7_4", 16);
			iVar3 = 7;
			iVar4 = 4;
			iVar1 = 160;
			break;
		
		case 43:
			StringCopy(&Var2, "TORSO_P0_7_5", 16);
			iVar3 = 7;
			iVar4 = 5;
			iVar1 = 160;
			break;
		
		case 44:
			StringCopy(&Var2, "TORSO_P0_8_0", 16);
			iVar3 = 8;
			iVar4 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "TORSO_P0_8_1", 16);
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 52;
			break;
		
		case 46:
			StringCopy(&Var2, "TORSO_P0_8_2", 16);
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 52;
			break;
		
		case 47:
			StringCopy(&Var2, "TORSO_P0_8_3", 16);
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 55;
			break;
		
		case 48:
			StringCopy(&Var2, "TORSO_P0_8_4", 16);
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 55;
			break;
		
		case 49:
			StringCopy(&Var2, "TORSO_P0_8_5", 16);
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 58;
			break;
		
		case 50:
			StringCopy(&Var2, "TORSO_P0_8_6", 16);
			iVar3 = 8;
			iVar4 = 6;
			iVar1 = 58;
			break;
		
		case 51:
			StringCopy(&Var2, "TORSO_P0_8_7", 16);
			iVar3 = 8;
			iVar4 = 7;
			iVar1 = 62;
			break;
		
		case 52:
			StringCopy(&Var2, "TORSO_P0_8_8", 16);
			iVar3 = 8;
			iVar4 = 8;
			iVar1 = 65;
			break;
		
		case 53:
			StringCopy(&Var2, "TORSO_P0_8_9", 16);
			iVar3 = 8;
			iVar4 = 9;
			iVar1 = 65;
			break;
		
		case 54:
			StringCopy(&Var2, "TORSO_P0_8_10", 16);
			iVar3 = 8;
			iVar4 = 10;
			iVar1 = 68;
			break;
		
		case 55:
			StringCopy(&Var2, "TORSO_P0_8_11", 16);
			iVar3 = 8;
			iVar4 = 11;
			iVar1 = 68;
			break;
		
		case 56:
			StringCopy(&Var2, "TORSO_P0_8_12", 16);
			iVar3 = 8;
			iVar4 = 12;
			iVar1 = 55;
			break;
		
		case 57:
			StringCopy(&Var2, "TORSO_P0_8_13", 16);
			iVar3 = 8;
			iVar4 = 13;
			iVar1 = 62;
			break;
		
		case 58:
			StringCopy(&Var2, "TORSO_P0_8_14", 16);
			iVar3 = 8;
			iVar4 = 14;
			iVar1 = 58;
			break;
		
		case 59:
			StringCopy(&Var2, "TORSO_P0_8_15", 16);
			iVar3 = 8;
			iVar4 = 15;
			iVar1 = 58;
			break;
		
		default:
			return;
			break;
	}
	func_222(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_286(int iParam0)//Position - 0x265DF
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 2;
	Global_70671[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "HAIR_P0_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "HAIR_P0_1_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "HAIR_P0_2_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "HAIR_P0_3_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "HAIR_P0_4_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			break;
		
		default:
			func_233(iVar7, iParam0, 6);
			return;
			break;
	}
	func_222(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_287(int iParam0)//Position - 0x266C5
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 0;
	Global_70671[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 6;
			break;
		
		default:
			func_233(iVar7, iParam0, 7);
			return;
			break;
	}
	func_222(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_288()//Position - 0x267C2
{
	Global_70671[0 /*14*/].f_1 = -1;
	Global_70671[0 /*14*/].f_2 = -1;
	Global_70671[0 /*14*/].f_5 = -1;
	Global_70671[0 /*14*/].f_3 = -1;
	Global_70671[0 /*14*/].f_4 = -1;
	Global_70671[0 /*14*/].f_7 = 0;
	Global_70671[0 /*14*/].f_6 = 0;
	Global_70671[0 /*14*/].f_13 = -1;
	Global_70671[0 /*14*/].f_12 = 0;
	Global_70671[0 /*14*/] = 0;
	StringCopy(&(Global_70671[0 /*14*/].f_8), "NO_LABEL", 16);
}

void func_289(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x2683B
{
	if (iParam2 == -99)
	{
		return;
	}
	switch (iParam0)
	{
		case joaat("player_zero"):
			if (!bParam3 || unk_0xC80D31E4B587871C(Global_104555.f_7199[1], 0))
			{
				unk_0x872F1C1F8587CCC7(&(Global_104555.f_2353.f_539.f_3796[0 /*166*/][iParam1 /*11*/][(iParam2 / 32)]), (iParam2 % 32));
			}
			break;
		
		case joaat("player_two"):
			if (!bParam3 || unk_0xC80D31E4B587871C(Global_104555.f_7199[3], 0))
			{
				unk_0x872F1C1F8587CCC7(&(Global_104555.f_2353.f_539.f_3796[1 /*166*/][iParam1 /*11*/][(iParam2 / 32)]), (iParam2 % 32));
			}
			if (!bParam3 || unk_0xC80D31E4B587871C(Global_104555.f_7199[4], 0))
			{
				unk_0x872F1C1F8587CCC7(&(Global_104555.f_2353.f_539.f_3796[2 /*166*/][iParam1 /*11*/][(iParam2 / 32)]), (iParam2 % 32));
			}
			break;
	}
}

int func_290(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0x26924
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	var uVar4;
	int iVar5;
	
	Global_70671[1 /*14*/] = { func_219(iParam0, iParam1, iParam2) };
	if (unk_0xC80D31E4B587871C(Global_70671[1 /*14*/].f_6, 0) && !unk_0xC80D31E4B587871C(Global_70671[1 /*14*/].f_6, 6))
	{
		if (bParam3)
		{
			func_218(iParam1, Global_70671[1 /*14*/].f_5, Global_70671[1 /*14*/].f_2, 1, Global_70671[1 /*14*/].f_1, 1, 0);
			if (iParam1 == 12)
			{
				iVar0 = 1;
				if (iParam0 == joaat("player_zero"))
				{
					if (iParam2 == 31)
					{
						iVar0 = 0;
					}
				}
				if (iVar0 == 1)
				{
					uVar3 = { func_297(iParam0, iParam2) };
					iVar1 = 0;
					while (iVar1 <= 14)
					{
						if ((uVar3[iVar1] != -99 && iVar1 != 12) && iVar1 != 14)
						{
							if (iVar1 != 13)
							{
								func_290(iParam0, iVar1, uVar3[iVar1], 1, 1);
								func_301(iParam0, iVar1, uVar3[iVar1], 1);
							}
							else
							{
								uVar4 = { func_291(iParam0, uVar3[iVar1]) };
								iVar2 = 0;
								while (iVar2 <= 8)
								{
									func_290(iParam0, 14, uVar4[iVar2], 1, 1);
									func_301(iParam0, 14, uVar4[iVar2], 1);
									iVar2++;
								}
							}
						}
						iVar1++;
					}
				}
			}
		}
		else
		{
			func_218(iParam1, Global_70671[1 /*14*/].f_5, Global_70671[1 /*14*/].f_2, 1, Global_70671[1 /*14*/].f_1, 0, 1);
		}
		if (iParam4 == 1 && bParam3 == 1)
		{
			switch (iParam0)
			{
				case joaat("player_zero"):
					break;
				
				case joaat("player_one"):
					switch (iParam1)
					{
						case 3:
							if (iParam2 >= 176 && iParam2 <= 191)
							{
								iVar5 = (227 + Global_70671[1 /*14*/].f_4);
								func_290(iParam0, 3, iVar5, 1, 0);
							}
							else if (iParam2 >= 227 && iParam2 <= 242)
							{
								iVar5 = (176 + Global_70671[1 /*14*/].f_4);
								func_290(iParam0, 3, iVar5, 1, 0);
							}
							break;
						
						case 11:
							if (iParam2 >= 9 && iParam2 <= 24)
							{
								iVar5 = (25 + Global_70671[1 /*14*/].f_4);
								func_290(iParam0, 11, iVar5, 1, 0);
							}
							else if (iParam2 >= 25 && iParam2 <= 40)
							{
								iVar5 = (9 + Global_70671[1 /*14*/].f_4);
								func_290(iParam0, 11, iVar5, 1, 0);
							}
							break;
						
						case 8:
							if (iParam2 >= 27 && iParam2 <= 42)
							{
								iVar5 = (43 + Global_70671[1 /*14*/].f_4);
								func_290(iParam0, 8, iVar5, 1, 0);
								iVar5 = (59 + Global_70671[1 /*14*/].f_4);
								func_290(iParam0, 8, iVar5, 1, 0);
							}
							else if (iParam2 >= 43 && iParam2 <= 58)
							{
								iVar5 = (27 + Global_70671[1 /*14*/].f_4);
								func_290(iParam0, 8, iVar5, 1, 0);
								iVar5 = (59 + Global_70671[1 /*14*/].f_4);
								func_290(iParam0, 8, iVar5, 1, 0);
							}
							else if (iParam2 >= 59 && iParam2 <= 74)
							{
								iVar5 = (27 + Global_70671[1 /*14*/].f_4);
								func_290(iParam0, 8, iVar5, 1, 0);
								iVar5 = (43 + Global_70671[1 /*14*/].f_4);
								func_290(iParam0, 8, iVar5, 1, 0);
							}
							break;
						
						case 14:
							if (iParam2 >= 64 && iParam2 <= 79)
							{
								iVar5 = (41 + Global_70671[1 /*14*/].f_4);
								func_290(iParam0, 14, iVar5, 1, 0);
							}
							break;
					}
					break;
				
				case joaat("player_two"):
					switch (iParam1)
					{
						case 4:
							if (iParam2 >= 81 && iParam2 <= 90)
							{
								iVar5 = (94 + Global_70671[1 /*14*/].f_4);
								func_290(iParam0, 4, iVar5, 1, 0);
							}
							break;
						
						case 12:
							if (iParam2 == 2)
							{
								func_290(iParam0, 14, 17, 1, 0);
							}
							break;
					}
					break;
				}
		}
		return 1;
	}
	return 0;
}

struct<10> func_291(int iParam0, int iParam1)//Position - 0x26D0B
{
	int iVar0;
	struct<10> Var1;
	
	Var1 = 9;
	iVar0 = 0;
	while (iVar0 <= 8)
	{
		Var1[iVar0] = -99;
		iVar0++;
	}
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 31:
					func_296(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_296(&Var1, 10, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_296(&Var1, 19, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_296(&Var1, 14, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_296(&Var1, 18, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_296(&Var1, 0, 59, 112, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_296(&Var1, 0, 60, 112, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_296(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_296(&Var1, 0, 60, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_296(&Var1, 55, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 9:
					func_296(&Var1, 0, 1, 112, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_292(&Var1, iParam0, iParam1, 10);
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 31:
					func_296(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_296(&Var1, 10, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_296(&Var1, 0, 82, 158, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_296(&Var1, 0, 1, 158, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_296(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_296(&Var1, 41, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_296(&Var1, 40, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_296(&Var1, 41, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_296(&Var1, 0, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_296(&Var1, 69, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_292(&Var1, iParam0, iParam1, 9);
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 31:
					func_296(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_296(&Var1, 11, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_296(&Var1, 17, 90, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_296(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_296(&Var1, 0, 88, 154, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_296(&Var1, 0, 1, 154, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_296(&Var1, 16, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_296(&Var1, 36, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_296(&Var1, 0, 123, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_296(&Var1, 69, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_292(&Var1, iParam0, iParam1, 9);
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 31:
					func_296(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_296(&Var1, 129, 167, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_296(&Var1, 90, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_296(&Var1, 23, 251, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_296(&Var1, 36, 262, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_296(&Var1, 88, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_296(&Var1, 125, 175, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_296(&Var1, 35, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_296(&Var1, 44, 208, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_296(&Var1, 52, 189, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 9:
					func_296(&Var1, 0, 261, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 10:
					func_296(&Var1, 0, 243, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 11:
					func_296(&Var1, 0, 243, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 12:
					func_296(&Var1, 0, 212, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 13:
					func_296(&Var1, 64, 291, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 14:
					func_296(&Var1, 61, 207, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 15:
					func_296(&Var1, 0, 291, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 16:
					func_296(&Var1, 0, 208, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 17:
					func_296(&Var1, 0, 229, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 18:
					func_296(&Var1, 36, 249, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 19:
					func_296(&Var1, 0, 259, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 20:
					func_296(&Var1, 0, 174, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 21:
					func_296(&Var1, 35, 180, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 22:
					func_296(&Var1, 36, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 23:
					func_296(&Var1, 0, 259, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 24:
					func_296(&Var1, 35, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_292(&Var1, iParam0, iParam1, 25);
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 31:
					func_296(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_296(&Var1, 35, 233, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_296(&Var1, 36, 178, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_296(&Var1, 53, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_296(&Var1, 38, 170, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_296(&Var1, 37, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_296(&Var1, 113, 203, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_296(&Var1, 114, 183, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_296(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_296(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 9:
					func_296(&Var1, 0, 199, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 10:
					func_296(&Var1, 0, 182, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 11:
					func_296(&Var1, 0, 233, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 12:
					func_296(&Var1, 107, 167, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 13:
					func_296(&Var1, 109, 170, 2, 3, 4, 5, 323, 7, 8);
					break;
				
				case 14:
					func_296(&Var1, 119, 237, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 15:
					func_296(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 16:
					func_296(&Var1, 114, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 17:
					func_296(&Var1, 35, 268, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 18:
					func_296(&Var1, 0, 266, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 19:
					func_296(&Var1, 42, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 20:
					func_296(&Var1, 76, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 21:
					func_296(&Var1, 39, 235, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 22:
					func_296(&Var1, 41, 183, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 23:
					func_296(&Var1, 111, 194, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_292(&Var1, iParam0, iParam1, 25);
					break;
			}
			break;
	}
	return Var1;
}

void func_292(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x2763A
{
	int iVar0;
	struct<4> Var1;
	vector3 vVar2;
	int iVar3;
	
	if (iParam2 != 0 && iParam2 != -99)
	{
		(*iParam0)[0] = 0;
		(*iParam0)[1] = 1;
		(*iParam0)[2] = 2;
		(*iParam0)[3] = 3;
		(*iParam0)[4] = 4;
		(*iParam0)[5] = 5;
		(*iParam0)[6] = 6;
		(*iParam0)[7] = 7;
		(*iParam0)[8] = 8;
		iVar0 = 0;
		if (iParam1 == joaat("player_zero"))
		{
			iVar0 = 0;
		}
		else if (iParam1 == joaat("player_one"))
		{
			iVar0 = 1;
		}
		else if (iParam1 == joaat("player_two"))
		{
			iVar0 = 2;
		}
		else if (iParam1 == joaat("mp_m_freemode_01"))
		{
			iVar0 = 3;
		}
		else if (iParam1 == joaat("mp_f_freemode_01"))
		{
			iVar0 = 4;
		}
		unk_0x060EBC19DD9EF446(iParam2, &Var1);
		if (!unk_0x42683C90F2D005ED(Var1))
		{
			iVar3 = 0;
			while (iVar3 < Var1.f_3)
			{
				if (unk_0xDF7B1D9AE5581C01(Var1.f_1, iVar3, &vVar2) && vVar2.z != -1)
				{
					if ((vVar2.x != 0 && vVar2.x != -1) && vVar2.x != 1849449579)
					{
						(*iParam0)[vVar2.z] = func_293(iParam1, vVar2.x, 14, iVar0);
					}
					else if (vVar2.y != -1)
					{
						(*iParam0)[vVar2.z] = vVar2.y;
					}
				}
				iVar3++;
			}
		}
	}
}

int func_293(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x27764
{
	struct<2> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<2> Var4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (iParam2 == 12)
	{
	}
	else if (iParam2 == 13)
	{
	}
	else if (iParam2 == 14)
	{
		unk_0x92C15BF999ED89EE(&Var0);
		iVar2 = 0;
		iVar3 = unk_0xB214E83F6B0D8129(iParam3, 6, -1, 1, -1, -1);
		iVar1 = 0;
		while (iVar1 < iVar3)
		{
			unk_0x53CE22B0EDFAB540(iVar1, &Var0);
			if (!unk_0x42683C90F2D005ED(Var0))
			{
				if (iParam1 == Var0.f_1)
				{
					return (func_295(iParam0) + iVar2);
				}
				iVar2++;
			}
			iVar1++;
		}
	}
	else
	{
		unk_0x74B493EE892897A5(&Var4);
		iVar6 = 0;
		iVar7 = unk_0xB214E83F6B0D8129(iParam3, 6, -1, 0, -1, func_234(iParam2));
		iVar5 = 0;
		while (iVar5 < iVar7)
		{
			unk_0x19002A6D4CBCE1E2(iVar5, &Var4);
			if (!unk_0x42683C90F2D005ED(Var4))
			{
				if (iParam1 == Var4.f_1)
				{
					return (func_294(iParam0, func_234(iParam2)) + iVar6);
				}
				iVar6++;
			}
			iVar5++;
		}
	}
	return -99;
}

int func_294(int iParam0, int iParam1)//Position - 0x27844
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 0:
					return 7;
					break;
				
				case 1:
					return 5;
					break;
				
				case 2:
					return 6;
					break;
				
				case 3:
					return 181;
					break;
				
				case 4:
					return 113;
					break;
				
				case 5:
					return 14;
					break;
				
				case 6:
					return 99;
					break;
				
				case 7:
					return 1;
					break;
				
				case 8:
					return 24;
					break;
				
				case 9:
					return 20;
					break;
				
				case 10:
					return 48;
					break;
				
				case 11:
					return 45;
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 5;
					break;
				
				case 2:
					return 21;
					break;
				
				case 3:
					return 318;
					break;
				
				case 4:
					return 117;
					break;
				
				case 5:
					return 7;
					break;
				
				case 6:
					return 134;
					break;
				
				case 7:
					return 1;
					break;
				
				case 8:
					return 77;
					break;
				
				case 9:
					return 12;
					break;
				
				case 10:
					return 53;
					break;
				
				case 11:
					return 63;
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 0:
					return 7;
					break;
				
				case 1:
					return 6;
					break;
				
				case 2:
					return 9;
					break;
				
				case 3:
					return 242;
					break;
				
				case 4:
					return 104;
					break;
				
				case 5:
					return 7;
					break;
				
				case 6:
					return 84;
					break;
				
				case 7:
					return 1;
					break;
				
				case 8:
					return 18;
					break;
				
				case 9:
					return 17;
					break;
				
				case 10:
					return 33;
					break;
				
				case 11:
					return 1;
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 26;
					break;
				
				case 2:
					return 91;
					break;
				
				case 3:
					return 16;
					break;
				
				case 4:
					return 256;
					break;
				
				case 5:
					return 9;
					break;
				
				case 6:
					return 256;
					break;
				
				case 7:
					return 92;
					break;
				
				case 8:
					return 241;
					break;
				
				case 9:
					return 46;
					break;
				
				case 10:
					return 7;
					break;
				
				case 11:
					return 237;
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 26;
					break;
				
				case 2:
					return 92;
					break;
				
				case 3:
					return 16;
					break;
				
				case 4:
					return 256;
					break;
				
				case 5:
					return 9;
					break;
				
				case 6:
					return 256;
					break;
				
				case 7:
					return 55;
					break;
				
				case 8:
					return 136;
					break;
				
				case 9:
					return 36;
					break;
				
				case 10:
					return 6;
					break;
				
				case 11:
					return 256;
					break;
			}
			break;
	}
	return -99;
}

int func_295(int iParam0)//Position - 0x27BEB
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			return 113;
			break;
		
		case joaat("player_one"):
			return 175;
			break;
		
		case joaat("player_two"):
			return 155;
			break;
	}
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			return 327;
			break;
		
		case joaat("mp_f_freemode_01"):
			return 327;
			break;
	}
	return -99;
}

void func_296(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)//Position - 0x27C4C
{
	(*iParam0)[0] = iParam1;
	(*iParam0)[1] = iParam2;
	(*iParam0)[2] = iParam3;
	(*iParam0)[3] = iParam4;
	(*iParam0)[4] = iParam5;
	(*iParam0)[5] = iParam6;
	(*iParam0)[6] = iParam7;
	(*iParam0)[7] = iParam8;
	(*iParam0)[8] = iParam9;
}

struct<17> func_297(int iParam0, int iParam1)//Position - 0x27C94
{
	int iVar0;
	struct<17> Var1;
	
	Var1 = 15;
	iVar0 = 0;
	while (iVar0 <= 14)
	{
		Var1[iVar0] = -99;
		iVar0++;
	}
	Var1.f_16 = 0;
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 0:
					if (Global_104555.f_9055.f_99.f_58[120])
					{
						func_300(&Var1, -99, -99, 1, 1, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					}
					else
					{
						func_300(&Var1, -99, -99, 0, 0, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					}
					break;
				
				case 1:
					func_300(&Var1, -99, -99, 16, 16, 6, 1, 1, 0, 1, -99, 0, 0, 0);
					break;
				
				case 2:
					func_300(&Var1, -99, -99, 36, 21, 6, 1, 5, 0, 0, -99, 0, 0, 8);
					break;
				
				case 3:
					func_300(&Var1, -99, -99, 65, 36, 6, 0, 2, 0, 0, -99, 0, 0, 31);
					break;
				
				case 4:
					func_300(&Var1, -99, -99, 61, 32, 6, 0, 0, 7, 3, -99, 0, 0, 2);
					break;
				
				case 5:
					func_300(&Var1, -99, -99, Global_104555.f_2353.f_539.f_196[0], Global_104555.f_2353.f_539.f_200[0], 6, 3, 0, 0, 0, -99, 0, 0, 3);
					break;
				
				case 6:
					func_300(&Var1, -99, -99, 92, 72, 7, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 7:
					func_300(&Var1, -99, -99, 85, 95, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 8:
					func_300(&Var1, -99, -99, 170, 80, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 9:
					func_300(&Var1, -99, -99, 171, 89, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 10:
					func_300(&Var1, -99, -99, 33, 18, 8, 10, 3, 8, 0, -99, 0, 0, 4);
					break;
				
				case 11:
					func_300(&Var1, -99, -99, 33, 18, 17, 10, 4, 8, 0, -99, 0, 0, 5);
					break;
				
				case 12:
					func_300(&Var1, -99, -99, 35, 20, 9, 10, 23, 0, 0, -99, 0, 0, 31);
					break;
				
				case 13:
					func_300(&Var1, -99, -99, 69, 40, 13, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 14:
					func_300(&Var1, -99, -99, 62, 33, 38, 0, 8, 0, 0, -99, 0, 0, 6);
					break;
				
				case 15:
					func_300(&Var1, -99, -99, 63, 34, 6, 10, 0, 0, 4, -99, 0, 0, 31);
					break;
				
				case 16:
					func_300(&Var1, -99, -99, 174, 93, 18, 0, 18, 0, 0, -99, 0, 0, 31);
					break;
				
				case 17:
					func_300(&Var1, -99, -99, 76, 46, 6, 10, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 18:
					func_300(&Var1, -99, -99, 35, 20, 9, 10, 0, 4, 0, -99, 0, 0, 7);
					break;
				
				case 19:
					func_300(&Var1, -99, -99, 64, 35, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 20:
					func_300(&Var1, -99, -99, 66, 37, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 21:
					func_300(&Var1, -99, -99, 67, 38, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 22:
					func_300(&Var1, -99, -99, 68, 39, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 23:
					func_300(&Var1, -99, -99, 177, 94, 19, 9, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 24:
					func_300(&Var1, -99, -99, 35, 20, 9, 10, 4, 0, 0, -99, 0, 0, 31);
					break;
				
				case 25:
					func_300(&Var1, -99, -99, 97, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 26:
					func_300(&Var1, -99, -99, 3, 3, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 27:
					func_300(&Var1, -99, -99, 129, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 28:
					func_300(&Var1, -99, -99, 170, 80, 6, 0, 13, 0, 0, -99, 0, 0, 31);
					break;
				
				case 29:
					func_300(&Var1, -99, -99, 2, 2, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 30:
					func_300(&Var1, -99, -99, 161, 3, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 31:
					func_300(&Var1, -99, -99, 3, 3, 0, 12, 0, 0, 0, -99, 0, 1, 31);
					break;
				
				case 32:
					func_300(&Var1, -99, -99, 85, 55, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 33:
					func_300(&Var1, -99, -99, 86, 4, 20, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 34:
					func_300(&Var1, -99, -99, 44, 97, 6, 0, 0, 0, 0, -99, 0, 2, 31);
					break;
				
				case 35:
					func_300(&Var1, -99, -99, 85, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 36:
					func_300(&Var1, -99, -99, 4, 4, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 37:
					func_300(&Var1, -99, -99, 5, 5, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 38:
					func_300(&Var1, -99, -99, 6, 6, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 39:
					func_300(&Var1, -99, -99, 7, 7, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 40:
					func_300(&Var1, -99, -99, 8, 8, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 41:
					func_300(&Var1, -99, -99, 9, 9, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 42:
					func_300(&Var1, -99, -99, 10, 10, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 43:
					func_300(&Var1, -99, -99, 11, 11, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 44:
					func_300(&Var1, -99, -99, 12, 12, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 45:
					func_300(&Var1, -99, -99, 13, 13, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 46:
					func_300(&Var1, -99, -99, 14, 14, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 47:
					func_300(&Var1, -99, -99, 15, 15, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 48:
					func_300(&Var1, -99, -99, 91, 71, 14, 13, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 49:
					func_300(&Var1, -99, -99, 35, 20, 9, 10, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 50:
					func_300(&Var1, -99, -99, 33, 18, 8, 10, 3, 8, 0, -99, 0, 0, 9);
					break;
				
				case 51:
					func_300(&Var1, -99, -99, 169, 95, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 52:
					func_300(&Var1, -99, -99, 169, 72, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				default:
					func_298(&Var1, iParam0, iParam1, 53);
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 0:
					func_300(&Var1, -99, -99, 73, 24, 18, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 1:
					func_300(&Var1, -99, -99, 22, 10, 64, 0, 24, 0, 0, -99, 0, 43, 31);
					break;
				
				case 2:
					func_300(&Var1, -99, -99, Global_104555.f_2353.f_539.f_196[1], Global_104555.f_2353.f_539.f_200[1], 17, 2, 26, 0, 0, -99, 0, 45, 31);
					break;
				
				case 3:
					func_300(&Var1, -99, -99, 23, 11, 13, 5, 2, 4, 0, -99, 0, 0, 1);
					break;
				
				case 4:
					func_300(&Var1, -99, -99, 23, 11, 34, 5, 26, 0, 0, -99, 0, 0, 2);
					break;
				
				case 5:
					func_300(&Var1, -99, 20, 159, 69, 17, 5, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 6:
					func_300(&Var1, -99, -99, 40, 13, 14, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 7:
					func_300(&Var1, -99, -99, 90, 32, 17, 1, 8, 0, 1, -99, 0, 0, 3);
					break;
				
				case 8:
					func_300(&Var1, -99, -99, 17, 5, 12, 0, 26, 0, 2, -99, 0, 0, 5);
					break;
				
				case 9:
					func_300(&Var1, -99, -99, 16, 4, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 10:
					func_300(&Var1, -99, -99, 208, 71, 17, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 11:
					func_300(&Var1, -99, -99, 259, 10, 35, 0, 24, 0, 0, -99, 0, 43, 31);
					break;
				
				case 12:
					func_300(&Var1, -99, -99, 18, 6, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 13:
					func_300(&Var1, -99, -99, 19, 7, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 14:
					func_300(&Var1, -99, -99, 20, 8, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 15:
					func_300(&Var1, -99, -99, 21, 9, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 16:
					func_300(&Var1, -99, -99, 135, 40, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 17:
					func_300(&Var1, -99, -99, 74, 24, 52, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 18:
					func_300(&Var1, -99, -99, 176, 53, 26, 5, 26, 0, 0, -99, 0, 41, 31);
					break;
				
				case 19:
					func_300(&Var1, -99, -99, 125, 24, 18, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 20:
					func_300(&Var1, -99, -99, 162, 24, 36, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 21:
					func_300(&Var1, -99, -99, 75, 24, 36, 0, 26, 0, 0, -99, 0, 0, 4);
					break;
				
				case 22:
					func_300(&Var1, -99, -99, 227, 53, 25, 0, 27, 0, 0, -99, 0, 25, 31);
					break;
				
				case 23:
					func_300(&Var1, -99, -99, 228, 54, 25, 0, 28, 0, 0, -99, 0, 26, 31);
					break;
				
				case 24:
					func_300(&Var1, -99, -99, 229, 55, 25, 0, 29, 0, 0, -99, 0, 27, 31);
					break;
				
				case 25:
					func_300(&Var1, -99, -99, 230, 56, 25, 0, 30, 0, 0, -99, 0, 28, 31);
					break;
				
				case 26:
					func_300(&Var1, -99, -99, 231, 57, 25, 0, 31, 0, 0, -99, 0, 29, 31);
					break;
				
				case 27:
					func_300(&Var1, -99, -99, 232, 58, 25, 0, 32, 0, 0, -99, 0, 30, 31);
					break;
				
				case 28:
					func_300(&Var1, -99, -99, 233, 59, 25, 0, 33, 0, 0, -99, 0, 31, 31);
					break;
				
				case 29:
					func_300(&Var1, -99, -99, 234, 60, 25, 0, 34, 0, 0, -99, 0, 32, 31);
					break;
				
				case 30:
					func_300(&Var1, -99, -99, 235, 61, 25, 0, 35, 0, 0, -99, 0, 33, 31);
					break;
				
				case 31:
					func_300(&Var1, -99, -99, 236, 62, 25, 0, 36, 0, 0, -99, 0, 34, 31);
					break;
				
				case 32:
					func_300(&Var1, -99, -99, 237, 63, 25, 0, 37, 0, 0, -99, 0, 35, 31);
					break;
				
				case 33:
					func_300(&Var1, -99, -99, 238, 64, 25, 0, 38, 0, 0, -99, 0, 36, 31);
					break;
				
				case 34:
					func_300(&Var1, -99, -99, 239, 65, 25, 0, 39, 0, 0, -99, 0, 37, 31);
					break;
				
				case 35:
					func_300(&Var1, -99, -99, 240, 66, 25, 0, 40, 0, 0, -99, 0, 38, 31);
					break;
				
				case 36:
					func_300(&Var1, -99, -99, 241, 67, 25, 0, 41, 0, 0, -99, 0, 39, 31);
					break;
				
				case 37:
					func_300(&Var1, -99, -99, 242, 68, 25, 0, 42, 0, 0, -99, 0, 40, 31);
					break;
				
				case 38:
					func_300(&Var1, -99, -99, 260, 72, 17, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 39:
					func_300(&Var1, -99, -99, 125, 24, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 40:
					func_300(&Var1, -99, -99, 123, 24, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 41:
					func_300(&Var1, -99, -99, 159, 69, 17, 5, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 42:
					func_300(&Var1, -99, -99, 89, 22, 15, 6, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 43:
					func_300(&Var1, -99, -99, 317, 69, 17, 0, 0, 0, 51, -99, 0, 0, 6);
					break;
				
				case 44:
					func_300(&Var1, -99, -99, 30, 23, 16, 0, 0, 0, 0, -99, 0, 0, 7);
					break;
				
				case 45:
					func_300(&Var1, -99, -99, 106, 70, 17, 5, 26, 0, 0, -99, 0, 0, 8);
					break;
				
				case 46:
					func_300(&Var1, -99, -99, 117, 24, 20, 5, 26, 0, 52, -99, 0, 0, 31);
					break;
				
				default:
					func_298(&Var1, iParam0, iParam1, 47);
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 0:
					func_300(&Var1, -99, -99, 0, 91, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 1:
					func_300(&Var1, -99, -99, 17, 5, 8, 2, 3, 0, 0, -99, 0, 0, 8);
					break;
				
				case 2:
					func_300(&Var1, -99, -99, 43, 8, 12, 3, 5, 0, 0, -99, 0, 0, 1);
					break;
				
				case 3:
					func_300(&Var1, -99, -99, 50, 14, 8, 0, 15, 6, 3, -99, 0, 0, 2);
					break;
				
				case 4:
					func_300(&Var1, -99, -99, Global_104555.f_2353.f_539.f_196[2], Global_104555.f_2353.f_539.f_200[2], 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 5:
					func_300(&Var1, -99, -99, 95, 33, 8, 0, 15, 0, 0, -99, 0, 0, 6);
					break;
				
				case 6:
					func_300(&Var1, -99, -99, 49, 13, 10, 4, 6, 0, 0, -99, 0, 0, 3);
					break;
				
				case 7:
					func_300(&Var1, -99, -99, 49, 13, 14, 4, 15, 0, 0, -99, 0, 0, 4);
					break;
				
				case 8:
					func_300(&Var1, -99, -99, 79, 32, 8, 5, 7, 0, 0, -99, 0, 0, 31);
					break;
				
				case 9:
					func_300(&Var1, -99, -99, 53, 17, 11, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 10:
					func_300(&Var1, -99, -99, 96, 81, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 11:
					func_300(&Var1, -99, -99, 51, 15, 33, 0, 8, 0, 0, -99, 0, 0, 5);
					break;
				
				case 12:
					func_300(&Var1, -99, -99, 0, 93, 29, 0, 13, 0, 0, -99, 0, 0, 31);
					break;
				
				case 13:
					func_300(&Var1, -99, -99, 52, 16, 30, 5, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 14:
					func_300(&Var1, -99, -99, 241, 92, 16, 0, 12, 0, 0, -99, 0, 0, 31);
					break;
				
				case 15:
					func_300(&Var1, -99, -99, 97, 34, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 16:
					func_300(&Var1, -99, -99, 44, 9, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 17:
					func_300(&Var1, -99, -99, 45, 10, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 18:
					func_300(&Var1, -99, -99, 46, 11, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 19:
					func_300(&Var1, -99, -99, 47, 12, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 20:
					func_300(&Var1, -99, -99, 161, 53, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 21:
					func_300(&Var1, -99, -99, 0, 44, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 22:
					func_300(&Var1, -99, -99, 98, 0, 28, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 23:
					func_300(&Var1, -99, -99, 27, 0, 31, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 24:
					func_300(&Var1, -99, -99, 190, 71, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 25:
					func_300(&Var1, -99, -99, 191, 72, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 26:
					func_300(&Var1, -99, -99, 192, 73, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 27:
					func_300(&Var1, -99, -99, 193, 74, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 28:
					func_300(&Var1, -99, -99, 194, 75, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 29:
					func_300(&Var1, -99, -99, 195, 76, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 30:
					func_300(&Var1, -99, -99, 196, 77, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 31:
					func_300(&Var1, -99, -99, 197, 78, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 32:
					func_300(&Var1, -99, -99, 198, 79, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 33:
					func_300(&Var1, -99, -99, 199, 80, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 34:
					func_300(&Var1, -99, -99, 200, 62, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 35:
					func_300(&Var1, -99, -99, 201, 63, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 36:
					func_300(&Var1, -99, -99, 202, 64, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 37:
					func_300(&Var1, -99, -99, 203, 65, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 38:
					func_300(&Var1, -99, -99, 204, 66, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 39:
					func_300(&Var1, -99, -99, 205, 67, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 40:
					func_300(&Var1, -99, -99, 206, 68, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 41:
					func_300(&Var1, -99, -99, 2, 43, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 42:
					func_300(&Var1, -99, -99, 55, 0, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 43:
					func_300(&Var1, -99, -99, 0, 52, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 44:
					func_300(&Var1, -99, -99, 70, 30, 32, 6, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 45:
					func_300(&Var1, -99, -99, 19, 91, 28, 0, 0, 0, 0, -99, 0, 0, 7);
					break;
				
				case 46:
					func_300(&Var1, -99, -99, 0, 0, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 47:
					func_300(&Var1, -99, -99, 79, 32, 8, 5, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				default:
					func_298(&Var1, iParam0, iParam1, 48);
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 0:
					func_300(&Var1, -99, -99, 0, 0, 10, -99, 0, -99, -99, 0, 0, 0, 31);
					break;
				
				case 1:
					func_300(&Var1, -99, -99, 1, 127, 38, -99, 2, 0, 0, 0, 0, 62, 0);
					break;
				
				case 2:
					func_300(&Var1, -99, -99, 0, 248, 45, -99, 240, 0, 0, 0, 0, 144, 1);
					break;
				
				case 3:
					func_300(&Var1, -99, -99, 4, 31, 25, -99, 240, 0, 0, 0, 0, 231, 2);
					break;
				
				case 4:
					func_300(&Var1, -99, -99, 1, 66, 10, -99, 21, 0, 0, 0, 0, 123, 3);
					break;
				
				case 5:
					func_300(&Var1, -99, -99, 1, 93, 141, -99, 3, 0, 0, 0, 0, 114, 4);
					break;
				
				case 6:
					func_300(&Var1, -99, -99, 1, 116, 113, -99, 7, 0, 0, 0, 0, 113, 5);
					break;
				
				case 7:
					func_300(&Var1, -99, -99, 1, 61, 136, -99, 27, 0, 0, 0, 0, 61, 6);
					break;
				
				case 8:
					func_300(&Var1, -99, -99, 0, 112, 10, -99, 240, 0, 0, 0, 0, 8, 7);
					break;
				
				case 9:
					func_300(&Var1, -99, -99, 4, 131, 24, -99, 240, 0, 0, 0, 0, 223, 8);
					break;
				
				case 10:
					func_300(&Var1, -99, -99, 1, 209, 188, -99, 208, 0, 0, 0, 0, 64, 9);
					break;
				
				case 11:
					func_300(&Var1, -99, -99, 1, 209, 160, -99, 211, 0, 0, 0, 43, 157, 10);
					break;
				
				case 12:
					func_300(&Var1, -99, -99, 1, 162, 174, -99, 201, 0, 0, 0, 0, 158, 11);
					break;
				
				case 13:
					func_300(&Var1, -99, -99, 1, 4, 240, -99, 34, 0, 0, 0, 0, 97, 12);
					break;
				
				case 14:
					func_300(&Var1, -99, -99, 1, 128, 232, -99, 43, 0, 0, 0, 0, 102, 13);
					break;
				
				case 15:
					func_300(&Var1, -99, -99, 1, 66, 65, -99, 224, 0, 0, 0, 0, 100, 14);
					break;
				
				case 16:
					func_300(&Var1, -99, -99, 1, 65, 172, -99, 202, 0, 0, 0, 0, 64, 15);
					break;
				
				case 17:
					func_300(&Var1, -99, -99, 1, 64, 10, -99, 1, 0, 0, 0, 0, 66, 16);
					break;
				
				case 18:
					func_300(&Var1, -99, -99, 5, 98, 80, -99, 240, 0, 0, 0, 0, 87, 17);
					break;
				
				case 19:
					func_300(&Var1, -99, -99, 5, 192, 96, -99, 240, 0, 0, 0, 0, 80, 18);
					break;
				
				case 20:
					func_300(&Var1, -99, -99, 1, 124, 96, -99, 11, 0, 0, 0, 0, 110, 19);
					break;
				
				case 21:
					func_300(&Var1, -99, -99, 0, 80, 114, -99, 240, 0, 0, 0, 0, 2, 20);
					break;
				
				case 22:
					func_300(&Var1, -99, -99, 6, 43, 112, -99, 82, 0, 0, 0, 0, 48, 21);
					break;
				
				case 23:
					func_300(&Var1, -99, -99, 1, 116, 144, -99, 2, 0, 0, 0, 0, 108, 22);
					break;
				
				case 24:
					func_300(&Var1, -99, -99, 1, 63, 38, -99, 3, 0, 0, 0, 0, 63, 23);
					break;
				
				case 25:
					func_300(&Var1, -99, -99, 2, 64, 10, -99, 240, 0, 0, 0, 0, 41, 24);
					break;
				
				default:
					func_298(&Var1, iParam0, iParam1, 26);
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 0:
					func_300(&Var1, -99, -99, 0, 0, 0, -99, 0, -99, -99, 0, -99, 0, 31);
					break;
				
				case 1:
					func_300(&Var1, -99, -99, 5, 136, 241, -99, 47, 0, 0, 0, 0, 21, 31);
					break;
				
				case 2:
					func_300(&Var1, -99, -99, 4, 1, 96, -99, 32, 0, 0, 0, 7, 215, 0);
					break;
				
				case 3:
					func_300(&Var1, -99, -99, 1, 73, 241, -99, 3, 0, 0, 0, 0, 25, 1);
					break;
				
				case 4:
					func_300(&Var1, -99, -99, 2, 88, 217, -99, 32, 0, 0, 0, 0, 33, 2);
					break;
				
				case 5:
					func_300(&Var1, -99, -99, 9, 7, 98, -99, 32, 0, 0, 0, 7, 153, 3);
					break;
				
				case 6:
					func_300(&Var1, -99, -99, 1, 140, 241, -99, 7, 0, 0, 0, 31, 16, 4);
					break;
				
				case 7:
					func_300(&Var1, -99, -99, 4, 139, 112, -99, 32, 0, 0, 0, 49, 78, 5);
					break;
				
				case 8:
					func_300(&Var1, -99, -99, 1, 193, 48, -99, 108, 0, 0, 0, 0, 17, 6);
					break;
				
				case 9:
					func_300(&Var1, -99, -99, 5, 114, 97, -99, 103, 0, 0, 0, 0, 98, 7);
					break;
				
				case 10:
					func_300(&Var1, -99, -99, 9, 134, 239, -99, 32, 0, 0, 0, 2, 144, 8);
					break;
				
				case 11:
					func_300(&Var1, -99, -99, 5, 152, 96, -99, 10, 0, 0, 0, 31, 96, 9);
					break;
				
				case 12:
					func_300(&Var1, -99, -99, 6, 129, 1, -99, 96, 0, 0, 0, 5, 120, 10);
					break;
				
				case 13:
					func_300(&Var1, -99, -99, 5, 0, 0, -99, 10, 0, 0, 0, 0, 130, 31);
					break;
				
				case 14:
					func_300(&Var1, -99, -99, 4, 159, 96, -99, 32, 0, 0, 0, 22, 214, 11);
					break;
				
				case 15:
					func_300(&Var1, -99, -99, 9, 232, 213, -99, 32, 0, 0, 0, 22, 147, 12);
					break;
				
				case 16:
					func_300(&Var1, -99, -99, 2, 8, 98, -99, 32, 0, 0, 0, 33, 39, 13);
					break;
				
				case 17:
					func_300(&Var1, -99, -99, 5, 150, 235, -99, 106, 0, 0, 0, 0, 128, 14);
					break;
				
				case 18:
					func_300(&Var1, -99, -99, 6, 96, 97, -99, 7, 0, 0, 0, 32, 114, 15);
					break;
				
				case 19:
					func_300(&Var1, -99, -99, 4, 48, 64, -99, 32, 0, 0, 0, 0, 89, 16);
					break;
				
				case 20:
					func_300(&Var1, -99, -99, 4, 62, 64, -99, 32, 0, 0, 0, 0, 78, 17);
					break;
				
				case 21:
					func_300(&Var1, -99, -99, 4, 49, 65, -99, 32, 0, 0, 0, 8, 80, 31);
					break;
				
				case 22:
					func_300(&Var1, -99, -99, 3, 20, 16, -99, 32, 0, 0, 0, 0, 49, 18);
					break;
				
				case 23:
					func_300(&Var1, -99, -99, 0, 73, 178, -99, 32, 0, 0, 0, 38, 11, 19);
					break;
				
				case 24:
					func_300(&Var1, -99, -99, 5, 135, 53, -99, 9, 0, 0, 0, 29, 27, 20);
					break;
				
				case 25:
					func_300(&Var1, -99, -99, 7, 233, 176, -99, 120, 0, 0, 0, 11, 160, 21);
					break;
				
				case 26:
					func_300(&Var1, -99, -99, 4, 34, 179, -99, 32, 0, 0, 0, 0, 77, 22);
					break;
				
				case 27:
					func_300(&Var1, -99, -99, 15, 131, 93, -99, 32, 0, 0, 0, 0, 250, 23);
					break;
				
				default:
					func_298(&Var1, iParam0, iParam1, 28);
					break;
			}
			break;
	}
	return Var1;
}

void func_298(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0x29ADF
{
	int iVar0;
	struct<5> Var1;
	vector3 vVar2;
	struct<2> Var3;
	int iVar4;
	
	(*uParam0)[0] = 0;
	(*uParam0)[2] = -99;
	(*uParam0)[3] = 0;
	(*uParam0)[4] = 0;
	(*uParam0)[6] = 0;
	(*uParam0)[5] = 0;
	(*uParam0)[8] = 0;
	(*uParam0)[9] = 0;
	(*uParam0)[10] = 0;
	(*uParam0)[1] = 0;
	(*uParam0)[7] = 0;
	(*uParam0)[11] = 0;
	(*uParam0)[13] = -99;
	(*uParam0)[14] = -99;
	uParam0->f_16 = 0;
	iVar0 = 0;
	if (iParam1 == joaat("player_zero"))
	{
		iVar0 = 0;
		(*uParam0)[13] = (10 + (iParam2 - iParam3));
	}
	else if (iParam1 == joaat("player_one"))
	{
		iVar0 = 1;
		(*uParam0)[13] = (9 + (iParam2 - iParam3));
	}
	else if (iParam1 == joaat("player_two"))
	{
		iVar0 = 2;
		(*uParam0)[13] = (9 + (iParam2 - iParam3));
	}
	else if (iParam1 == joaat("mp_m_freemode_01"))
	{
		iVar0 = 3;
	}
	else if (iParam1 == joaat("mp_f_freemode_01"))
	{
		iVar0 = 4;
	}
	unk_0x23A6BE673BD02B2D(iVar0, 0);
	unk_0x54F960113E1CDCA9((iParam2 - iParam3), &Var1);
	if (!unk_0x42683C90F2D005ED(Var1))
	{
		iVar4 = 0;
		while (iVar4 < Var1.f_4)
		{
			if (unk_0x4D94EF46ACF845D4(Var1.f_1, iVar4, &vVar2))
			{
				if ((vVar2.x != 0 && vVar2.x != -1) && vVar2.x != 1849449579)
				{
					if (vVar2.z == 10)
					{
						unk_0x74B493EE892897A5(&Var3);
						unk_0xD1994E7F12547273(vVar2.x, &Var3);
						if (vVar2.x != Var3.f_1)
						{
							uParam0->f_16 = 1;
						}
					}
					if (vVar2.z == 10 && uParam0->f_16)
					{
						(*uParam0)[func_299(vVar2.z)] = vVar2.x;
						uParam0->f_16 = 1;
					}
					else
					{
						(*uParam0)[func_299(vVar2.z)] = func_293(iParam1, vVar2.x, func_299(vVar2.z), iVar0);
					}
				}
				else if (vVar2.y != -1)
				{
					(*uParam0)[func_299(vVar2.z)] = vVar2.y;
				}
			}
			iVar4++;
		}
		if (Var1.f_3 == 0)
		{
			(*uParam0)[13] = -99;
		}
		else
		{
			(*uParam0)[13] = Var1.f_1;
		}
	}
}

int func_299(int iParam0)//Position - 0x29CC9
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 2:
			return 2;
			break;
		
		case 3:
			return 3;
			break;
		
		case 4:
			return 4;
			break;
		
		case 6:
			return 6;
			break;
		
		case 5:
			return 5;
			break;
		
		case 8:
			return 8;
			break;
		
		case 9:
			return 9;
			break;
		
		case 10:
			return 10;
			break;
		
		case 1:
			return 1;
			break;
		
		case 7:
			return 7;
			break;
		
		case 11:
			return 11;
			break;
	}
	return 0;
}

void func_300(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)//Position - 0x29D79
{
	(*uParam0)[0] = iParam1;
	(*uParam0)[2] = iParam2;
	(*uParam0)[3] = iParam3;
	(*uParam0)[4] = iParam4;
	(*uParam0)[6] = iParam5;
	(*uParam0)[5] = iParam6;
	(*uParam0)[8] = iParam7;
	(*uParam0)[9] = iParam8;
	(*uParam0)[10] = iParam9;
	(*uParam0)[1] = iParam10;
	(*uParam0)[7] = iParam11;
	(*uParam0)[11] = iParam12;
	(*uParam0)[13] = iParam13;
	(*uParam0)[14] = -99;
}

int func_301(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x29DEA
{
	Global_70671[1 /*14*/] = { func_219(iParam0, iParam1, iParam2) };
	if (unk_0xC80D31E4B587871C(Global_70671[1 /*14*/].f_6, 0) && !unk_0xC80D31E4B587871C(Global_70671[1 /*14*/].f_6, 6))
	{
		if (bParam3)
		{
			func_218(iParam1, Global_70671[1 /*14*/].f_5, Global_70671[1 /*14*/].f_2, 0, Global_70671[1 /*14*/].f_1, 1, 0);
		}
		else
		{
			func_218(iParam1, Global_70671[1 /*14*/].f_5, Global_70671[1 /*14*/].f_2, 0, Global_70671[1 /*14*/].f_1, 0, 1);
		}
		return 1;
	}
	return 0;
}

int func_302(int iParam0)//Position - 0x29E85
{
	if (func_66(iParam0))
	{
		return Global_104555.f_28020[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_303(int iParam0, int iParam1, int iParam2)//Position - 0x29EAF
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x3AB6A1A9084FB0A4(iParam0))
	{
		if (iParam1 == 12)
		{
			iVar0 = 0;
			while (iVar0 <= 53)
			{
				if (func_310(iParam0, iParam1, iVar0))
				{
					return iVar0;
				}
				iVar0++;
			}
		}
		else if (iParam1 == 13)
		{
			iVar1 = 0;
			while (iVar1 <= 19)
			{
				if (func_310(iParam0, iParam1, iVar1))
				{
					return iVar1;
				}
				iVar1++;
			}
			return 31;
		}
		else if (iParam1 == 14)
		{
			if (iParam2 == -1)
			{
			}
			else
			{
				return func_306(iParam0, iParam2);
			}
		}
		else
		{
			return func_304(iParam0, iParam1);
		}
	}
	return -99;
}

int func_304(int iParam0, int iParam1)//Position - 0x29F50
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (((iParam1 == 12 || iParam1 == 13) || iParam1 == 14) || unk_0x3AB6A1A9084FB0A4(iParam0))
	{
		return -99;
	}
	iVar0 = func_234(iParam1);
	iVar1 = unk_0x4CDD2D1D66ED1DE4(iParam0, iVar0);
	iVar2 = unk_0xDCC2BD4C56470D10(iParam0, iVar0);
	return func_305(iParam0, iVar1, iVar2, iParam1);
}

int func_305(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x29FB0
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = func_234(iParam3);
	iVar1 = unk_0x7A8C4EAB4DAEE8ED(iParam0, iVar0);
	iVar3 = 0;
	while (iVar3 <= (iVar1 - 1))
	{
		iVar5 = unk_0x0BE76048E700C028(iParam0, iVar0, iVar3);
		if (iVar3 != iParam1)
		{
			iVar2 = (iVar2 + iVar5);
		}
		else
		{
			iVar4 = 0;
			while (iVar4 <= (iVar5 - 1))
			{
				if (iVar3 == iParam1 && iVar4 == iParam2)
				{
					return iVar2;
				}
				else
				{
					iVar2++;
				}
				iVar4++;
			}
		}
		iVar3++;
	}
	return -99;
}

int func_306(int iParam0, int iParam1)//Position - 0x2A034
{
	int iVar0;
	int iVar1;
	
	if (unk_0x3AB6A1A9084FB0A4(iParam0))
	{
		return -99;
	}
	iVar0 = unk_0x742D2DEFFDC66EB8(iParam0, iParam1);
	if (iVar0 == -1)
	{
		return func_309(iParam1);
	}
	iVar1 = unk_0xC563C871267881C4(iParam0, iParam1);
	return func_307(iParam0, iVar0, iVar1, iParam1);
}

int func_307(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x2A07A
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (iParam1 == -1)
	{
		return func_309(iParam3);
	}
	iVar0 = unk_0x82FF3DFBC3965CC0(iParam0);
	iVar1 = unk_0xA2FAB7A15B84DCA2(iParam0, iParam3, iParam1, iParam2);
	if (iVar1 != -1 && iVar1 != 0)
	{
		if (iVar0 == joaat("mp_m_freemode_01"))
		{
			return func_293(unk_0x82FF3DFBC3965CC0(iParam0), iVar1, 14, 3);
		}
		else if (iVar0 == joaat("mp_f_freemode_01"))
		{
			return func_293(unk_0x82FF3DFBC3965CC0(iParam0), iVar1, 14, 4);
		}
	}
	iVar2 = unk_0x52913C7C981BE317(iParam0, iParam3);
	iVar4 = 0;
	while (iVar4 <= (iVar2 - 1))
	{
		iVar6 = unk_0x34221E435D75D46F(iParam0, iParam3, iVar4);
		if (iVar4 != iParam1)
		{
			iVar3 = (iVar3 + iVar6);
		}
		else
		{
			iVar5 = 0;
			while (iVar5 <= (iVar6 - 1))
			{
				if (iVar4 == iParam1 && iVar5 == iParam2)
				{
					iVar3 = (iVar3 + func_308(iParam0, iParam3));
					return iVar3;
				}
				else
				{
					iVar3++;
				}
				iVar5++;
			}
		}
		iVar4++;
	}
	return func_309(iParam3);
}

int func_308(int iParam0, int iParam1)//Position - 0x2A176
{
	int iVar0;
	
	iVar0 = unk_0x82FF3DFBC3965CC0(iParam0);
	switch (iVar0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 58;
					break;
				
				case 2:
					return 112;
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 82;
					break;
				
				case 2:
					return 158;
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 88;
					break;
				
				case 2:
					return 154;
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 155;
					break;
				
				case 6:
					return 319;
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 155;
					break;
				
				case 6:
					return 319;
					break;
			}
			break;
	}
	return -99;
}

int func_309(int iParam0)//Position - 0x2A2B4
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			return 1;
			break;
		
		case 2:
			return 2;
			break;
		
		case 3:
			return 3;
			break;
		
		case 4:
			return 4;
			break;
		
		case 5:
			return 5;
			break;
		
		case 6:
			return 6;
			break;
		
		case 7:
			return 7;
			break;
		
		case 8:
			return 8;
			break;
	}
	return 0;
}

int func_310(int iParam0, int iParam1, int iParam2)//Position - 0x2A33A
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	int iVar7;
	var uVar8;
	
	if (unk_0x3AB6A1A9084FB0A4(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0x82FF3DFBC3965CC0(iParam0);
	Global_70671[1 /*14*/] = { func_219(iVar0, iParam1, iParam2) };
	if (!unk_0xC80D31E4B587871C(Global_70671[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (iParam1 == 12)
	{
		uVar5 = { func_297(iVar0, iParam2) };
		iVar2 = 0;
		while (iVar2 <= 14)
		{
			if ((uVar5[iVar2] != -99 && iVar2 != 12) && iVar2 != 14)
			{
				if (!func_310(iParam0, iVar2, uVar5[iVar2]))
				{
					if (iVar2 == 13)
					{
						uVar6 = { func_291(iVar0, uVar5[iVar2]) };
						iVar3 = 0;
						while (iVar3 <= 8)
						{
							if (!func_310(iParam0, 14, uVar6[iVar3]))
							{
								iVar4 = 0;
								while (iVar4 <= 19)
								{
									Global_70671[2 /*14*/] = { func_219(iVar0, 14, iVar4) };
									if (Global_70671[2 /*14*/].f_12 == iVar3)
									{
										if (func_310(iParam0, 14, iVar4))
										{
											if (!func_311(iVar0, iParam2, 14, iVar4, &uVar5, &(Global_70671[2 /*14*/])))
											{
												return 0;
											}
										}
									}
									iVar4++;
								}
							}
							iVar3++;
						}
					}
					else
					{
						iVar1 = func_304(iParam0, iVar2);
						Global_70671[2 /*14*/] = { func_219(iVar0, iVar2, iVar1) };
						if (!func_311(iVar0, iParam2, iVar2, iVar1, &uVar5, &(Global_70671[2 /*14*/])))
						{
							return 0;
						}
					}
				}
			}
			iVar2++;
		}
		return 1;
	}
	else if (iParam1 == 13)
	{
		uVar8 = { func_291(iVar0, iParam2) };
		iVar7 = 0;
		while (iVar7 <= 8)
		{
			if (!func_310(iParam0, 14, uVar8[iVar7]))
			{
				return 0;
			}
			iVar7++;
		}
		return 1;
	}
	else if (iParam1 == 14)
	{
		if (unk_0x742D2DEFFDC66EB8(iParam0, Global_70671[1 /*14*/].f_12) == Global_70671[1 /*14*/].f_3 && (unk_0xC563C871267881C4(iParam0, Global_70671[1 /*14*/].f_12) == Global_70671[1 /*14*/].f_4 || Global_70671[1 /*14*/].f_3 == -1))
		{
			return 1;
		}
	}
	else if (Global_70671[1 /*14*/].f_3 == unk_0x4CDD2D1D66ED1DE4(iParam0, func_234(iParam1)) && Global_70671[1 /*14*/].f_4 == unk_0xDCC2BD4C56470D10(iParam0, func_234(iParam1)))
	{
		return 1;
	}
	return 0;
}

int func_311(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4, var uParam5)//Position - 0x2A592
{
	var uVar0;
	int iVar1;
	
	if ((*uParam4)[iParam2] == iParam3)
	{
		return 1;
	}
	if (((*uParam4)[iParam2] == -99 && iParam2 != 14) && iParam2 != 13)
	{
		return 1;
	}
	if (iParam2 == 13 || (iParam2 == 14 && (*uParam4)[13] == 31))
	{
		if ((((((((iParam3 == 0 || iParam3 == 1) || iParam3 == 2) || iParam3 == 3) || iParam3 == 4) || iParam3 == 5) || iParam3 == 6) || iParam3 == 7) || iParam3 == 8)
		{
			return 1;
		}
	}
	if (iParam3 == -99 || uParam5->f_1 == -1)
	{
		return 1;
	}
	if (iParam2 == 14)
	{
		uVar0 = { func_291(iParam0, (*uParam4)[13]) };
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			if (uVar0[iVar1] == iParam3)
			{
				return 1;
			}
			iVar1++;
		}
	}
	if (func_316(iParam0, iParam2, iParam3))
	{
		return 1;
	}
	if (iParam0 == joaat("player_zero"))
	{
		if (func_315(iParam0, iParam2, iParam3, -1))
		{
			if ((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 10) || iParam1 == 11) || iParam1 == 12) || iParam1 == 18) || iParam1 == 50)
			{
				return 0;
			}
			return 1;
		}
		else if (func_314(iParam0, iParam2, iParam3, -1))
		{
			if (((((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 4) || iParam1 == 5) || iParam1 == 10) || iParam1 == 11) || iParam1 == 12) || iParam1 == 14) || iParam1 == 18) || iParam1 == 50)
			{
				return 0;
			}
			if (iParam2 == 8)
			{
				if ((*uParam4)[8] != 0)
				{
					return 0;
				}
			}
			else if (iParam2 == 9)
			{
				if ((*uParam4)[9] != 0)
				{
					return 0;
				}
			}
			return 1;
		}
		else if (func_312(iParam0, iParam2, iParam3, -1))
		{
			if (((((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 4) || iParam1 == 5) || iParam1 == 10) || iParam1 == 11) || iParam1 == 12) || iParam1 == 14) || iParam1 == 18) || iParam1 == 50)
			{
				return 0;
			}
			return 1;
		}
	}
	else if (iParam0 == joaat("player_one"))
	{
		if (func_315(iParam0, iParam2, iParam3, -1))
		{
			if ((iParam1 == 3 || iParam1 == 5) || iParam1 == 7)
			{
				return 0;
			}
			return 1;
		}
		else if (func_314(iParam0, iParam2, iParam3, -1))
		{
			if ((((iParam1 == 3 || iParam1 == 5) || iParam1 == 7) || iParam1 == 8) || iParam1 == 21)
			{
				if (iParam2 == 8)
				{
					if (iParam3 == 9)
					{
						if (iParam1 == 8 || iParam1 == 21)
						{
							return 1;
						}
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
			if (iParam2 == 8)
			{
				if ((*uParam4)[8] != 26)
				{
					return 0;
				}
			}
			else if (iParam2 == 9)
			{
				if ((*uParam4)[9] != 0)
				{
					return 0;
				}
				if (((iParam1 == 43 || iParam1 == 44) || iParam1 == 45) || iParam1 == 46)
				{
					if (iParam3 >= 5 && iParam3 <= 10)
					{
						return 0;
					}
				}
			}
			else if (iParam2 == 14)
			{
				if (((iParam1 == 43 || iParam1 == 44) || iParam1 == 45) || iParam1 == 46)
				{
					if (iParam3 >= 26 && iParam3 <= 39)
					{
						return 0;
					}
				}
			}
			return 1;
		}
		else if (func_312(iParam0, iParam2, iParam3, -1))
		{
			if (((((iParam1 == 3 || iParam1 == 3) || iParam1 == 5) || iParam1 == 7) || iParam1 == 8) || iParam1 == 21)
			{
				return 0;
			}
			return 1;
		}
		else if (iParam2 == 14)
		{
			if (iParam3 >= 159 && iParam3 <= 174)
			{
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("player_two"))
	{
		if (iParam1 == 2)
		{
			if (iParam2 == 14 && iParam3 == 0)
			{
				return 1;
			}
		}
		if (func_315(iParam0, iParam2, iParam3, -1))
		{
			if (((((iParam1 == 1 || iParam1 == 2) || iParam1 == 6) || iParam1 == 8) || iParam1 == 45) || iParam1 == 12)
			{
				return 0;
			}
			return 1;
		}
		else if (func_314(iParam0, iParam2, iParam3, -1))
		{
			if (((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 3) || iParam1 == 6) || iParam1 == 8) || iParam1 == 11) || iParam1 == 45) || iParam1 == 12)
			{
				return 0;
			}
			if (iParam2 == 8)
			{
				if ((*uParam4)[8] != 15)
				{
					return 0;
				}
			}
			else if (iParam2 == 9)
			{
				if ((*uParam4)[9] != 0)
				{
					return 0;
				}
			}
			return 1;
		}
		else if (func_312(iParam0, iParam2, iParam3, -1))
		{
			if ((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 3) || iParam1 == 6) || iParam1 == 8) || iParam1 == 11) || iParam1 == 12)
			{
				return 0;
			}
			return 1;
		}
	}
	return 0;
}

int func_312(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x2AB96
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 14:
					if (iParam2 == 16)
					{
						return 1;
					}
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 14:
					if ((iParam2 == 40 || (iParam2 >= 41 && iParam2 <= 56)) || (iParam2 >= 64 && iParam2 <= 79))
					{
						return 1;
					}
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 14:
					if ((iParam2 >= 17 && iParam2 <= 18) || (iParam2 >= 71 && iParam2 <= 86))
					{
						return 1;
					}
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 14:
					if (iParam2 >= 18 && iParam2 <= 130)
					{
						return 1;
					}
					else if (iParam2 >= 10 && iParam2 <= 17)
					{
						return 1;
					}
					else if (iParam2 >= 327)
					{
						if (iParam3 == -1)
						{
							iParam3 = func_313(iParam0, iParam2, 14, 3);
						}
						return (unk_0x6C297174CFC8C5B2(iParam3, -1757550583, 1) || unk_0x6C297174CFC8C5B2(func_313(iParam0, iParam2, 14, 3), -1842686353, 1));
					}
					break;
				
				case 1:
					if (iParam2 >= 26)
					{
						if (iParam3 == -1)
						{
							iParam3 = func_313(iParam0, iParam2, 1, 3);
						}
						return (unk_0x6C297174CFC8C5B2(iParam3, -1757550583, 0) || unk_0x6C297174CFC8C5B2(func_313(iParam0, iParam2, 1, 3), -1842686353, 0));
					}
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 14:
					if (iParam2 >= 18 && iParam2 <= 130)
					{
						return 1;
					}
					else if (iParam2 >= 10 && iParam2 <= 17)
					{
						return 1;
					}
					else if (iParam2 >= 327)
					{
						if (iParam3 == -1)
						{
							iParam3 = func_313(iParam0, iParam2, 14, 4);
						}
						return (unk_0x6C297174CFC8C5B2(iParam3, -1757550583, 1) || unk_0x6C297174CFC8C5B2(func_313(iParam0, iParam2, 14, 4), -1842686353, 1));
					}
					break;
				
				case 1:
					if (iParam2 >= 26)
					{
						if (iParam3 == -1)
						{
							iParam3 = func_313(iParam0, iParam2, 1, 4);
						}
						return (unk_0x6C297174CFC8C5B2(iParam3, -1757550583, 0) || unk_0x6C297174CFC8C5B2(func_313(iParam0, iParam2, 1, 4), -1842686353, 0));
					}
					break;
			}
			break;
	}
	return 0;
}

int func_313(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x2AE13
{
	struct<2> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<2> Var5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	if (iParam2 == 12)
	{
	}
	else if (iParam2 == 13)
	{
	}
	else if (iParam2 == 14)
	{
		unk_0x92C15BF999ED89EE(&Var0);
		iVar2 = 0;
		iVar3 = (iParam1 - func_295(iParam0));
		if (iVar3 < 0)
		{
			return -1;
		}
		iVar4 = unk_0xB214E83F6B0D8129(iParam3, 6, -1, 1, -1, -1);
		iVar1 = 0;
		while (iVar1 < iVar4)
		{
			unk_0x53CE22B0EDFAB540(iVar1, &Var0);
			if (!unk_0x42683C90F2D005ED(Var0))
			{
				if (iVar2 == iVar3)
				{
					return Var0.f_1;
				}
				iVar2++;
			}
			iVar1++;
		}
	}
	else
	{
		unk_0x74B493EE892897A5(&Var5);
		iVar7 = 0;
		iVar8 = (iParam1 - func_294(iParam0, func_234(iParam2)));
		if (iVar8 < 0)
		{
			return -1;
		}
		if ((iParam0 == Global_70793.f_26[iParam2] && iParam1 == Global_70793[iParam2]) && Global_70793.f_13[iParam2] != 0)
		{
			return Global_70793.f_13[iParam2];
		}
		iVar9 = unk_0xB214E83F6B0D8129(iParam3, 6, -1, 0, -1, func_234(iParam2));
		iVar6 = 0;
		while (iVar6 < iVar9)
		{
			unk_0x19002A6D4CBCE1E2(iVar6, &Var5);
			if (!unk_0x42683C90F2D005ED(Var5))
			{
				if (iVar7 == iVar8)
				{
					Global_70793.f_13[iParam2] = Var5.f_1;
					Global_70793[iParam2] = iParam1;
					Global_70793.f_26[iParam2] = iParam0;
					return Var5.f_1;
				}
				iVar7++;
			}
			iVar6++;
		}
	}
	return -1;
}

int func_314(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x2AF6F
{
	if (iParam0 == joaat("player_zero"))
	{
		if (iParam1 == 6)
		{
			if (iParam2 == 10)
			{
				return 1;
			}
		}
		else if (iParam1 == 8)
		{
			if ((iParam2 == 9 || iParam2 == 7) || iParam2 == 23)
			{
				return 1;
			}
		}
		else if (iParam1 == 9)
		{
			if (iParam2 >= 9 && iParam2 <= 14)
			{
				return 1;
			}
		}
		else if (iParam1 == 14)
		{
			if ((((((((((((((((iParam2 == 12 || iParam2 == 59) || iParam2 == 60) || iParam2 == 31) || iParam2 == 32) || iParam2 == 33) || iParam2 == 34) || iParam2 == 35) || iParam2 == 36) || iParam2 == 37) || iParam2 == 38) || iParam2 == 39) || iParam2 == 40) || iParam2 == 41) || (iParam2 >= 42 && iParam2 <= 44)) || iParam2 == 54) || iParam2 == 55)
			{
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("player_one"))
	{
		if (iParam1 == 2)
		{
			if (iParam2 == 20)
			{
				return 1;
			}
		}
		else if (iParam1 == 8)
		{
			if ((iParam2 == 3 || iParam2 == 5) || iParam2 == 9)
			{
				return 1;
			}
		}
		else if (iParam1 == 9)
		{
			if (iParam2 >= 5 && iParam2 <= 10)
			{
				return 1;
			}
		}
		else if (iParam1 == 14)
		{
			if (((((((((((((iParam2 == 82 || iParam2 == 10) || iParam2 == 26) || iParam2 == 27) || iParam2 == 28) || iParam2 == 29) || iParam2 == 30) || iParam2 == 31) || iParam2 == 32) || iParam2 == 33) || iParam2 == 34) || iParam2 == 35) || iParam2 == 36) || (iParam2 >= 37 && iParam2 <= 39))
			{
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("player_two"))
	{
		if (iParam1 == 8)
		{
			if (iParam2 == 14 || iParam2 == 7)
			{
				return 1;
			}
		}
		else if (iParam1 == 9)
		{
			if (((iParam2 == 8 || (iParam2 >= 9 && iParam2 <= 14)) || iParam2 == 15) || iParam2 == 16)
			{
				return 1;
			}
		}
		else if (iParam1 == 14)
		{
			if (((((((((((((iParam2 == 88 || iParam2 == 12) || iParam2 == 47) || iParam2 == 48) || iParam2 == 49) || iParam2 == 50) || iParam2 == 51) || iParam2 == 52) || iParam2 == 53) || iParam2 == 54) || iParam2 == 55) || iParam2 == 56) || iParam2 == 57) || (iParam2 >= 58 && iParam2 <= 60))
			{
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("mp_m_freemode_01"))
	{
		if (iParam1 == 1)
		{
			if (iParam2 > 0)
			{
				if (iParam2 >= 26)
				{
					if (iParam3 == -1)
					{
						iParam3 = func_313(iParam0, iParam2, 1, 3);
					}
					if (unk_0x6C297174CFC8C5B2(iParam3, -1757550583, 0) || unk_0x6C297174CFC8C5B2(iParam3, 66092876, 0))
					{
						return 0;
					}
				}
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("mp_f_freemode_01"))
	{
		if (iParam1 == 1)
		{
			if (iParam2 > 0)
			{
				if (iParam2 >= 26)
				{
					if (iParam3 == -1)
					{
						iParam3 = func_313(iParam0, iParam2, 1, 4);
					}
					if (unk_0x6C297174CFC8C5B2(iParam3, -1757550583, 0) || unk_0x6C297174CFC8C5B2(iParam3, 66092876, 0))
					{
						return 0;
					}
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_315(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x2B394
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			if (iParam1 == 14)
			{
				if ((((((((iParam2 == 58 || iParam2 == 61) || (iParam2 >= 62 && iParam2 <= 69)) || (iParam2 >= 70 && iParam2 <= 79)) || (iParam2 >= 80 && iParam2 <= 89)) || iParam2 == 90) || (iParam2 >= 91 && iParam2 <= 102)) || (iParam2 >= 103 && iParam2 <= 110)) || iParam2 == 111)
				{
					return 1;
				}
			}
			break;
		
		case joaat("player_one"):
			if (iParam1 == 14)
			{
				if (((((((((((iParam2 >= 83 && iParam2 <= 92) || iParam2 == 93) || iParam2 == 94) || (iParam2 >= 95 && iParam2 <= 101)) || (iParam2 >= 102 && iParam2 <= 111)) || (iParam2 >= 112 && iParam2 <= 121)) || (iParam2 >= 122 && iParam2 <= 131)) || (iParam2 >= 132 && iParam2 <= 139)) || (iParam2 >= 140 && iParam2 <= 149)) || (iParam2 >= 150 && iParam2 <= 156)) || iParam2 == 157)
				{
					return 1;
				}
			}
			break;
		
		case joaat("player_two"):
			if (iParam1 == 14)
			{
				if (((((((((iParam2 == 89 || (iParam2 >= 90 && iParam2 <= 99)) || (iParam2 >= 100 && iParam2 <= 109)) || iParam2 == 111) || iParam2 == 112) || (iParam2 >= 113 && iParam2 <= 122)) || (iParam2 >= 123 && iParam2 <= 132)) || (iParam2 >= 133 && iParam2 <= 142)) || (iParam2 >= 143 && iParam2 <= 152)) || iParam2 == 153)
				{
					return 1;
				}
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			if (iParam1 == 14)
			{
				if (iParam2 >= 155 && iParam2 <= 318)
				{
					return 1;
				}
				else if (iParam2 >= 327)
				{
					if (iParam3 == -1)
					{
						iParam3 = func_313(iParam0, iParam2, 14, 3);
					}
					return unk_0x6C297174CFC8C5B2(iParam3, 97230661, 1);
				}
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			if (iParam1 == 14)
			{
				if (iParam2 >= 155 && iParam2 <= 318)
				{
					return 1;
				}
				else if (iParam2 >= 327)
				{
					if (iParam3 == -1)
					{
						iParam3 = func_313(iParam0, iParam2, 14, 4);
					}
					return unk_0x6C297174CFC8C5B2(iParam3, 97230661, 1);
				}
			}
			break;
	}
	return 0;
}

int func_316(int iParam0, int iParam1, int iParam2)//Position - 0x2B687
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 8:
					if (iParam2 == 15)
					{
						return 1;
					}
					break;
				
				case 9:
					if (iParam2 == 6)
					{
						return 1;
					}
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 8:
					if (iParam2 == 1 || iParam2 == 10)
					{
						return 1;
					}
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 8:
					if (iParam2 == 4)
					{
						return 1;
					}
					break;
			}
			break;
	}
	return 0;
}

bool func_317(int iParam0)//Position - 0x2B720
{
	return Global_104555.f_9055.f_330[iParam0 /*6*/];
}

void func_318(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)//Position - 0x2B736
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	if (!unk_0x3AB6A1A9084FB0A4(iParam0) || iParam5)
	{
		iVar0 = func_504(iParam0);
		iVar1 = unk_0x82FF3DFBC3965CC0(iParam0);
		iVar3 = 0;
		while (iVar3 < 12)
		{
			if (iVar3 != 1 || (iVar3 == 1 && !bParam2))
			{
				if (bParam4)
				{
					if (uParam1->f_13[iVar3] != 0 && uParam1->f_13[iVar3] >= unk_0x7A8C4EAB4DAEE8ED(iParam0, iVar3))
					{
						uParam1->f_13[iVar3] = 0;
					}
					if ((*uParam1)[iVar3] != 0 && (*uParam1)[iVar3] >= unk_0x0BE76048E700C028(iParam0, iVar3, uParam1->f_13[iVar3]))
					{
						(*uParam1)[iVar3] = 0;
					}
				}
				unk_0x03924C68EFCBC511(iParam0, iVar3, uParam1->f_13[iVar3], (*uParam1)[iVar3], uParam1->f_26[iVar3]);
			}
			iVar3++;
		}
		iVar3 = 0;
		while (iVar3 < 9)
		{
			if (bParam4)
			{
				if (uParam1->f_39[iVar3] != -1 && uParam1->f_39[iVar3] != 255)
				{
					if (uParam1->f_39[iVar3] >= unk_0x52913C7C981BE317(iParam0, iVar3))
					{
						uParam1->f_39[iVar3] = -1;
					}
					else if (uParam1->f_49[iVar3] >= unk_0x34221E435D75D46F(iParam0, iVar3, uParam1->f_39[iVar3]))
					{
						uParam1->f_49[iVar3] = 0;
					}
				}
			}
			if (uParam1->f_39[iVar3] != -1 && uParam1->f_39[iVar3] != 255)
			{
				unk_0x0B652E456D6A7E32(iParam0, iVar3, uParam1->f_39[iVar3], uParam1->f_49[iVar3], false);
			}
			else
			{
				unk_0x6057F5872C9EFA39(iParam0, iVar3);
			}
			iVar3++;
		}
		if (func_66(iVar0))
		{
			Global_104555.f_2353.f_539[iVar0 /*65*/].f_59 = uParam1->f_59;
			Global_104555.f_2353.f_539[iVar0 /*65*/].f_60 = uParam1->f_60;
			Global_104555.f_2353.f_539[iVar0 /*65*/].f_61 = uParam1->f_61;
			if (func_501(iParam0, iVar1, &iVar2, 0))
			{
				func_487(iParam0, 2, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
			Global_104555.f_2353.f_539[iVar0 /*65*/].f_62 = uParam1->f_62;
			Global_104555.f_2353.f_539[iVar0 /*65*/].f_63 = uParam1->f_63;
			Global_104555.f_2353.f_539[iVar0 /*65*/].f_64 = uParam1->f_64;
			if (func_485(iParam0, iVar1, &iVar2))
			{
				func_487(iParam0, 1, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
		else if (unk_0x3A711520F83BAE98() && unk_0x82FF3DFBC3965CC0(iParam0) == unk_0x82FF3DFBC3965CC0(unk_0xFC1458A37D98B502()))
		{
			bVar4 = func_482(iParam0);
			func_481(750, uParam1->f_60, Global_70668, 1, 0);
			func_481(751, uParam1->f_61, Global_70668, 1, 0);
			iVar5 = func_305(iParam0, uParam1->f_13[2], (*uParam1)[2], 2);
			if (iVar5 != -99)
			{
				iVar6 = -99;
				if (iVar1 == joaat("mp_m_freemode_01"))
				{
					iVar6 = func_479(iVar5);
				}
				else if (iVar1 == joaat("mp_f_freemode_01"))
				{
					iVar6 = func_477(iVar5);
				}
				if (iVar6 != -99 && iVar5 != iVar6)
				{
					iVar5 = iVar6;
				}
			}
			func_321(iParam0, 2, iVar5, 0, -1, 0, 0, 0, -1, -1, Global_70668, bVar4, 0, 0);
			if (!bParam2)
			{
				iVar7 = func_305(iParam0, uParam1->f_13[1], (*uParam1)[1], 1);
				func_321(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, Global_70668, bVar4, 0, 0);
			}
			if (!bParam3)
			{
				iVar8 = func_307(iParam0, uParam1->f_39[0], uParam1->f_49[0], 0);
				func_321(iParam0, 14, iVar8, 0, -1, 0, 0, 0, -1, -1, Global_70668, bVar4, 0, 0);
			}
		}
		if (unk_0x3A711520F83BAE98() && iParam0 == unk_0xFC1458A37D98B502())
		{
			iVar9 = uParam1->f_59;
			if (iVar1 == joaat("mp_m_freemode_01"))
			{
				iVar9 = func_479(iVar9);
			}
			else
			{
				iVar9 = func_477(iVar9);
			}
			func_481(749, iVar9, Global_70668, 1, 0);
			func_481(2048, iVar9, Global_70668, 1, 0);
			func_319(161, 1, -1, 1);
		}
	}
}

void func_319(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x2BB11
{
	int iVar0;
	
	if (func_320())
	{
		iVar0 = Global_2547365[iParam0 /*3*/][func_226(iParam2)];
		if (iVar0 != 0)
		{
			unk_0x41495934EA1DEC56(iVar0, iParam1, iParam3);
		}
	}
}

int func_320()//Position - 0x2BB43
{
	return 1;
	return 0;
}

int func_321(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, bool bParam12, bool bParam13)//Position - 0x2BB50
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	var uVar13;
	var uVar14;
	var uVar15;
	var uVar16;
	var uVar17;
	int iVar18;
	var uVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	int iVar31;
	int iVar32;
	int iVar33;
	int iVar34;
	int iVar35;
	int iVar36;
	int iVar37;
	int iVar38;
	int iVar39;
	int iVar40;
	int iVar41;
	int iVar42;
	int iVar43;
	int iVar44;
	int iVar45;
	int iVar46;
	int iVar47;
	int iVar48;
	int iVar49;
	int iVar50;
	int iVar51;
	float fVar52;
	int iVar53;
	int iVar54;
	int iVar55;
	int iVar56;
	int iVar57;
	int iVar58;
	int iVar59;
	int iVar60;
	int iVar61;
	int iVar62;
	int iVar63;
	var uVar64;
	int iVar65;
	int iVar66;
	int iVar67;
	int iVar68;
	int iVar69;
	int iVar70;
	int iVar71;
	int iVar72;
	int iVar73;
	int iVar74;
	int iVar75;
	var uVar76;
	int iVar77;
	int iVar78;
	int iVar79;
	int iVar80;
	int iVar81;
	
	if (!unk_0x3A711520F83BAE98())
	{
		if ((Global_1312788 != 4 && Global_1312788 != 5) && Global_1312788 != 7)
		{
			return 0;
		}
	}
	if (unk_0x3AB6A1A9084FB0A4(iParam0) || iParam2 == -99)
	{
		return 0;
	}
	if (iParam0 == unk_0xFC1458A37D98B502() && Global_2422736[unk_0x9EB17624F44A8DA4() /*420*/].f_237 == 2)
	{
		if (!bParam12)
		{
			return 0;
		}
	}
	if (iParam10 == -1)
	{
		iParam10 = Global_70668;
	}
	Global_70669++;
	iVar5 = unk_0x82FF3DFBC3965CC0(iParam0);
	iVar6 = -99;
	iVar7 = -99;
	iVar8 = -1;
	iVar9 = -99;
	iVar10 = -99;
	iVar11 = -1;
	iVar12 = -1;
	if (iParam5 == 0)
	{
		Global_70671[1 /*14*/] = { func_444(iVar5, iParam1, iParam2) };
		if (!func_443(iParam3))
		{
			Global_70669 = (Global_70669 - 1);
			return 0;
		}
		func_440(iVar5, iParam1, iParam2, 1);
	}
	if (iParam1 == 12)
	{
		uVar13 = Global_2621444;
		uVar14 = Global_2621445;
		unk_0x945B0045DE0394EE(iParam0);
		uVar15 = 15;
		if (iParam5 == 1)
		{
			uVar15 = { Global_70714 };
		}
		else
		{
			uVar15 = { func_297(iVar5, iParam2) };
		}
		iVar0 = 0;
		while (iVar0 <= 14)
		{
			if (uVar15[iVar0] != -99)
			{
				if (iVar0 == 10 && uVar15.f_16)
				{
					Global_70671[1 /*14*/] = { func_444(iVar5, 10, 0) };
					if (iParam4 == -1)
					{
						unk_0x03924C68EFCBC511(iParam0, func_234(iVar0), Global_70671[1 /*14*/].f_3, Global_70671[1 /*14*/].f_4, unk_0x6AC6F0502D04B9F9(iParam0, func_234(iVar0)));
					}
					else
					{
						unk_0x03924C68EFCBC511(iParam0, func_234(iVar0), Global_70671[1 /*14*/].f_3, Global_70671[1 /*14*/].f_4, iParam4);
					}
					if (unk_0xC80D31E4B587871C(Global_70671[1 /*14*/].f_6, 1))
					{
						func_440(iVar5, 10, 0, 1);
					}
				}
				else
				{
					Global_70671[1 /*14*/] = { func_444(iVar5, iVar0, uVar15[iVar0]) };
					if (unk_0xC80D31E4B587871C(Global_70671[1 /*14*/].f_6, 0) || iVar0 == 13)
					{
						if (iVar0 == 13)
						{
							uVar16 = 9;
							if (iParam5 == 1)
							{
								uVar16 = { Global_70731 };
							}
							else
							{
								uVar16 = { func_291(iVar5, uVar15[iVar0]) };
							}
							iVar1 = 0;
							while (iVar1 <= 8)
							{
								Global_70671[1 /*14*/] = { func_444(iVar5, 14, uVar16[iVar1]) };
								func_439(iParam0, Global_70671[1 /*14*/].f_12, Global_70671[1 /*14*/].f_3, Global_70671[1 /*14*/].f_4);
								if (unk_0xC80D31E4B587871C(Global_70671[1 /*14*/].f_6, 1))
								{
									func_440(iVar5, iVar0, uVar15[iVar0], 1);
								}
								iVar1++;
							}
						}
						else if (iVar0 != 14 && iVar0 != 12)
						{
							if (iVar0 != 1)
							{
								if (iParam4 == -1)
								{
									unk_0x03924C68EFCBC511(iParam0, func_234(iVar0), Global_70671[1 /*14*/].f_3, Global_70671[1 /*14*/].f_4, unk_0x6AC6F0502D04B9F9(iParam0, func_234(iVar0)));
								}
								else
								{
									unk_0x03924C68EFCBC511(iParam0, func_234(iVar0), Global_70671[1 /*14*/].f_3, Global_70671[1 /*14*/].f_4, iParam4);
								}
							}
							else
							{
								func_321(iParam0, iVar0, uVar15[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							if (unk_0xC80D31E4B587871C(Global_70671[1 /*14*/].f_6, 1))
							{
								func_440(iVar5, iVar0, uVar15[iVar0], 1);
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_70671[1 /*14*/] = { func_444(iVar5, iVar0, func_438(iParam0, iVar0, -1)) };
				if (unk_0xC80D31E4B587871C(Global_70671[1 /*14*/].f_6, 3))
				{
					uVar17 = { func_297(iVar5, 0) };
					func_321(iParam0, iVar0, uVar17[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
			}
			iVar0++;
		}
		Global_2621444 = uVar13;
		Global_2621445 = uVar14;
		if (iParam5 == 0)
		{
			iVar18 = func_437();
			if (iVar18 != -1)
			{
				func_435(iVar18, 0, iParam10);
			}
			func_433(iParam0, 11, uVar15[11], iParam6, 0);
		}
	}
	else if (iParam1 == 13)
	{
		uVar19 = { func_291(iVar5, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			Global_70671[1 /*14*/] = { func_444(iVar5, 14, uVar19[iVar1]) };
			func_439(iParam0, Global_70671[1 /*14*/].f_12, Global_70671[1 /*14*/].f_3, Global_70671[1 /*14*/].f_4);
			if (unk_0xC80D31E4B587871C(Global_70671[1 /*14*/].f_6, 1))
			{
				func_440(iVar5, 14, uVar19[iVar1], 1);
			}
			if (iParam5 == 0)
			{
				if (Global_70669 == 1)
				{
					iVar2 = 0;
					while (iVar2 < 15)
					{
						iVar3 = func_431(iParam0, iVar5, 14, uVar19[iVar1], iVar2, 0);
						if (iVar3 != -99)
						{
							func_321(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
						iVar2++;
					}
				}
			}
			iVar1++;
		}
	}
	else if (iParam1 == 14)
	{
		func_439(iParam0, Global_70671[1 /*14*/].f_12, Global_70671[1 /*14*/].f_3, Global_70671[1 /*14*/].f_4);
		if (unk_0xC80D31E4B587871C(Global_70671[1 /*14*/].f_6, 1))
		{
			func_440(iVar5, iParam1, iParam2, 1);
		}
		if (Global_70671[1 /*14*/].f_12 == 0)
		{
			if (unk_0xC80D31E4B587871C(Global_70671[1 /*14*/].f_6, 6) && unk_0x6C297174CFC8C5B2(Global_2621444, 537651880, 1))
			{
			}
			else
			{
				iVar20 = unk_0xE1AE92097550A727(iParam0, 1, unk_0x4CDD2D1D66ED1DE4(iParam0, 1), unk_0xDCC2BD4C56470D10(iParam0, 1));
				if (unk_0x6C297174CFC8C5B2(iVar20, 66092876, 0))
				{
					func_321(iParam0, 1, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					Global_70671[1 /*14*/] = { func_444(iVar5, iParam1, iParam2) };
				}
			}
		}
		if (Global_70671[1 /*14*/].f_12 == 0)
		{
			func_426(iParam0);
		}
		if (iParam5 == 0)
		{
			if (Global_70669 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = func_431(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_321(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar2++;
				}
				iVar3 = func_431(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_321(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
			}
		}
	}
	else
	{
		if (iParam1 == 11)
		{
			if (iParam5 == 0)
			{
				iVar21 = -1;
				if (unk_0xC80D31E4B587871C(Global_70671[1 /*14*/].f_6, 6) && unk_0x6C297174CFC8C5B2(Global_2621444, -1996375172, 11))
				{
					unk_0x0501826E124470E8(iParam0, Global_1314011, Global_1314012, Global_1314013, 0);
					unk_0x0501826E124470E8(iParam0, Global_1314011, Global_1314012, Global_1314013, 1);
					unk_0x0501826E124470E8(iParam0, Global_1314011, Global_1314012, Global_1314013, 2);
					unk_0x0501826E124470E8(iParam0, Global_1314011, Global_1314012, Global_1314013, 3);
				}
				iVar22 = func_304(iParam0, 11);
				iVar23 = func_304(iParam0, 8);
				iVar24 = func_304(iParam0, 4);
				iVar8 = unk_0xE1AE92097550A727(iParam0, 8, unk_0x4CDD2D1D66ED1DE4(iParam0, 8), unk_0xDCC2BD4C56470D10(iParam0, 8));
				if (unk_0x6C297174CFC8C5B2(iVar8, 240476421, 8))
				{
					if (iVar5 == joaat("mp_m_freemode_01"))
					{
						iVar21 = func_313(iVar5, iParam2, 11, 3);
					}
					else if (iVar5 == joaat("mp_f_freemode_01"))
					{
						iVar21 = func_313(iVar5, iParam2, 11, 4);
					}
					if ((((((unk_0x6C297174CFC8C5B2(iVar21, 320460654, 0) || unk_0x6C297174CFC8C5B2(iVar21, -2017999390, 0)) || unk_0x6C297174CFC8C5B2(iVar21, -1410897066, 0)) || unk_0x6C297174CFC8C5B2(iVar21, -826135203, 0)) || unk_0x6C297174CFC8C5B2(iVar21, -1855618474, 0)) || unk_0x6C297174CFC8C5B2(iVar21, -1420825402, 0)) || unk_0x6C297174CFC8C5B2(iVar21, -299089347, 0))
					{
					}
					else
					{
						iVar9 = func_304(iParam0, 8);
					}
				}
				iVar25 = unk_0xE1AE92097550A727(iParam0, 3, unk_0x4CDD2D1D66ED1DE4(iParam0, 3), 0);
				if (unk_0x6C297174CFC8C5B2(iVar25, -356646862, 0))
				{
					iVar26 = func_425(iVar5, iVar23, iVar22, iVar24);
					if (iVar26 == -99)
					{
						iVar26 = func_431(iParam0, iVar5, 11, iVar22, 3, 0);
					}
					switch (iVar25)
					{
						case 1165919867:
						case 1606204151:
						case 1774276352:
						case 1934254610:
						case 980775017:
						case 399321881:
							iVar26 = 11;
							iVar21 = func_313(iVar5, iParam2, 11, 4);
							if (!unk_0x6C297174CFC8C5B2(iVar21, -530089825, 0))
							{
								iVar26 = -99;
							}
							break;
					}
					if (iVar26 != -99)
					{
						iVar27 = 0;
						while (iVar27 < 17)
						{
							if (func_424(iVar5, iVar26, iVar27) == iVar25)
							{
								iVar11 = iVar27;
								iVar12 = unk_0xDCC2BD4C56470D10(iParam0, 3);
							}
							iVar27++;
						}
					}
				}
				iVar21 = -1;
				if ((iVar5 == joaat("mp_f_freemode_01") && iParam2 >= 256) && unk_0x6C297174CFC8C5B2(func_313(iVar5, iParam2, 11, 4), -1200513218, 0))
				{
					iVar22 = func_304(iParam0, 11);
					if (iVar22 >= 256)
					{
						iVar21 = func_313(iVar5, iVar22, 11, 4);
					}
					if (iVar22 >= 256 && unk_0x6C297174CFC8C5B2(iVar21, 1965569012, 0))
					{
						iVar28 = func_422(iVar5, iVar22, iParam2, unk_0xDCC2BD4C56470D10(iParam0, 11));
						if (iVar28 != -99)
						{
							func_321(iParam0, 8, iVar28, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							Global_70671[1 /*14*/] = { func_444(iVar5, iParam1, iParam2) };
						}
					}
				}
				else if (func_421(iVar5, iParam2, -1))
				{
					if (iVar5 == joaat("mp_m_freemode_01"))
					{
						if (iVar22 >= 237)
						{
							iVar21 = func_313(iVar5, iVar22, 11, 3);
						}
					}
					else if (iVar5 == joaat("mp_f_freemode_01"))
					{
						if (iVar22 >= 256)
						{
							iVar21 = func_313(iVar5, iVar22, 11, 4);
						}
					}
					iVar9 = -99;
					if (!func_421(iVar5, iVar22, -1))
					{
						if ((iVar5 == joaat("mp_f_freemode_01") && iVar22 >= 256) && (unk_0x6C297174CFC8C5B2(iVar21, -1200513218, 0) || unk_0x6C297174CFC8C5B2(iVar21, 1965569012, 0)))
						{
						}
						else if ((iVar5 == joaat("mp_f_freemode_01") && iVar22 >= 256) && ((((((((unk_0x6C297174CFC8C5B2(iVar21, 684992453, 0) || unk_0x6C297174CFC8C5B2(iVar21, 916636514, 0)) || unk_0x6C297174CFC8C5B2(iVar21, -1939378450, 0)) || unk_0x6C297174CFC8C5B2(iVar21, -820724897, 0)) || unk_0x6C297174CFC8C5B2(iVar21, 153792394, 0)) || unk_0x6C297174CFC8C5B2(iVar21, -872449705, 0)) || unk_0x6C297174CFC8C5B2(iVar21, 700658917, 0)) || unk_0x6C297174CFC8C5B2(iVar21, -549843760, 0)) || unk_0x6C297174CFC8C5B2(iVar21, 1830529185, 0)))
						{
						}
						else
						{
							iVar29 = func_420(iParam0, iParam2);
							iVar30 = func_422(iVar5, iVar22, iParam2, unk_0xDCC2BD4C56470D10(iParam0, 11));
							if (iVar30 != -99)
							{
								func_321(iParam0, 8, iVar30, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_70671[1 /*14*/] = { func_444(iVar5, iParam1, iParam2) };
								iVar9 = -99;
							}
							else if (iVar29 != -99 && (iParam0 == unk_0xFC1458A37D98B502() || iParam0 == Global_4264923))
							{
								func_321(iParam0, 8, iVar29, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_70671[1 /*14*/] = { func_444(iVar5, iParam1, iParam2) };
							}
							else
							{
								if (iVar5 == joaat("mp_m_freemode_01"))
								{
									iVar31 = func_419(iVar5, 11, -1);
									Global_70671[1 /*14*/] = { func_444(iVar5, 11, iVar31) };
									iVar30 = func_422(iVar5, iVar31, iParam2, Global_70671[1 /*14*/].f_4);
									if (iVar30 == -99 || unk_0x6C297174CFC8C5B2(func_313(iVar5, iParam2, 11, 3), -1237899132, 0))
									{
										iVar30 = 240;
									}
								}
								else if (iVar5 == joaat("mp_f_freemode_01"))
								{
									if (unk_0x6C297174CFC8C5B2(func_313(iVar5, iParam2, 11, 4), -1237899132, 0))
									{
										iVar30 = 120;
									}
									else
									{
										iVar30 = 48;
									}
								}
								func_321(iParam0, 8, iVar30, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_70671[1 /*14*/] = { func_444(iVar5, iParam1, iParam2) };
							}
						}
					}
					else
					{
						Global_70671[1 /*14*/] = { func_444(iVar5, 11, iVar22) };
						iVar32 = Global_70671[1 /*14*/].f_3;
						Global_70671[1 /*14*/] = { func_444(iVar5, 11, iParam2) };
						iVar33 = Global_70671[1 /*14*/].f_3;
						if (iVar32 != iVar33)
						{
							iVar35 = func_420(iParam0, iParam2);
							Global_70671[1 /*14*/] = { func_444(iVar5, 8, iVar23) };
							iVar34 = Global_70671[1 /*14*/].f_4;
							iVar36 = func_418(iVar5, iVar23, iVar34);
							if (iVar35 != -99 && (iParam0 == unk_0xFC1458A37D98B502() || iParam0 == Global_4264923))
							{
								iVar37 = iVar35;
							}
							else if (iVar36 == -99)
							{
								iVar37 = iVar23;
								if (iVar5 == joaat("mp_m_freemode_01"))
								{
									iVar38 = func_313(iVar5, iParam2, 11, 3);
									if (((iParam2 >= 96 && iParam2 <= 107) || func_417(iVar38) == 6) || unk_0x6C297174CFC8C5B2(iVar38, -1237899132, 0))
									{
										iVar36 = func_419(iVar5, 11, -1);
										Global_70671[1 /*14*/] = { func_444(iVar5, 11, iVar36) };
										iVar37 = func_422(iVar5, iVar36, iParam2, Global_70671[1 /*14*/].f_4);
									}
								}
								if (iVar5 == joaat("mp_f_freemode_01") && (iVar23 == 32 || iVar23 == 33))
								{
									if (!unk_0x6C297174CFC8C5B2(func_313(iVar5, iParam2, 11, 4), -491588875, 0))
									{
										iVar36 = func_419(iVar5, 11, -1);
										Global_70671[1 /*14*/] = { func_444(iVar5, 11, iVar36) };
										iVar37 = func_422(iVar5, iVar36, iParam2, Global_70671[1 /*14*/].f_4);
									}
								}
								iVar39 = -1;
								if (iVar5 == joaat("mp_m_freemode_01"))
								{
									iVar39 = func_313(iVar5, iVar23, 8, 3);
								}
								else if (iVar5 == joaat("mp_f_freemode_01"))
								{
									iVar39 = func_313(iVar5, iVar23, 8, 4);
								}
								if (unk_0x6C297174CFC8C5B2(iVar39, -316495692, 0))
								{
									iVar36 = func_419(iVar5, 11, -1);
									Global_70671[1 /*14*/] = { func_444(iVar5, 11, iVar36) };
									iVar37 = func_422(iVar5, iVar36, iParam2, Global_70671[1 /*14*/].f_4);
								}
							}
							else
							{
								iVar37 = func_422(iVar5, iVar36, iParam2, iVar34);
								if (iVar5 == joaat("mp_m_freemode_01"))
								{
									if (unk_0x6C297174CFC8C5B2(func_313(iVar5, iParam2, 11, 3), -1719338724, 0))
									{
										if (!func_416(iVar5, func_304(iParam0, 4), iVar36))
										{
											iVar37 = 240;
										}
									}
								}
								else if (iVar5 == joaat("mp_f_freemode_01"))
								{
									if (unk_0x6C297174CFC8C5B2(func_313(iVar5, iParam2, 11, 4), -1719338724, 0))
									{
										if (!func_416(iVar5, func_304(iParam0, 4), iVar36))
										{
											iVar37 = 48;
										}
									}
								}
							}
							if (iVar37 != -99)
							{
								func_321(iParam0, 8, iVar37, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							else if (iVar5 == joaat("mp_m_freemode_01"))
							{
								iVar36 = func_419(iVar5, 11, -1);
								Global_70671[1 /*14*/] = { func_444(iVar5, 11, iVar36) };
								iVar37 = func_422(iVar5, iVar36, iParam2, Global_70671[1 /*14*/].f_4);
								if (iVar37 == -99)
								{
									iVar37 = 240;
								}
								func_321(iParam0, 8, iVar37, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							else if (iVar5 == joaat("mp_f_freemode_01"))
							{
								func_321(iParam0, 8, 48, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							Global_70671[1 /*14*/] = { func_444(iVar5, iParam1, iParam2) };
						}
					}
				}
				func_413(iVar5, iParam2);
				if (!bParam13)
				{
					unk_0x03924C68EFCBC511(iParam0, 10, 0, 0, unk_0x6AC6F0502D04B9F9(iParam0, 10));
				}
			}
			func_433(iParam0, iParam1, iParam2, iParam6, 0);
			if (iParam5 == 0)
			{
				iVar6 = func_425(iVar5, func_438(iParam0, 8, -1), iParam2, func_438(iParam0, 4, -1));
			}
		}
		else if (iParam1 == 2)
		{
			if (iParam5 == 0)
			{
				if (iParam8 == -1)
				{
					iParam8 = func_225(2148, iParam10, 0);
				}
				if (iParam9 == -1)
				{
					iParam9 = func_225(2155, iParam10, 0);
				}
				unk_0xD2806E6ED9B5009B(iParam0, iParam8, iParam9);
			}
			if (iParam7 == 0)
			{
				func_370(iParam0, iParam2, iParam10, bParam11);
			}
		}
		else if (iParam1 == 8)
		{
			iVar40 = unk_0xE1AE92097550A727(iParam0, 3, unk_0x4CDD2D1D66ED1DE4(iParam0, 3), 0);
			if (unk_0x6C297174CFC8C5B2(iVar40, -356646862, 0))
			{
				iVar41 = func_304(iParam0, 11);
				iVar42 = func_304(iParam0, 4);
				iVar43 = func_425(iVar5, iParam2, iVar41, iVar42);
				if (iVar43 == -99)
				{
					iVar43 = func_431(iParam0, iVar5, 11, iVar41, 3, 0);
				}
				switch (iVar40)
				{
					case 1165919867:
					case 1606204151:
					case 1774276352:
					case 1934254610:
					case 980775017:
					case 399321881:
						iVar43 = 11;
						iVar44 = func_313(iVar5, iParam2, 11, 4);
						if (!unk_0x6C297174CFC8C5B2(iVar44, -530089825, 0))
						{
							iVar43 = -99;
						}
						break;
				}
				if (iVar43 != -99)
				{
					iVar45 = 0;
					while (iVar45 < 17)
					{
						if (func_424(iVar5, iVar43, iVar45) == iVar40)
						{
							iVar11 = iVar45;
							iVar12 = unk_0xDCC2BD4C56470D10(iParam0, 3);
						}
						iVar45++;
					}
				}
			}
			func_433(iParam0, iParam1, iParam2, iParam6, 0);
			iVar46 = func_304(iParam0, 11);
			if (func_421(iVar5, iVar46, -1))
			{
				iVar47 = func_418(iVar5, iParam2, Global_70671[1 /*14*/].f_4);
				func_413(iVar5, iVar47);
			}
			if (iParam5 == 0)
			{
				iVar6 = func_425(iVar5, iParam2, func_304(iParam0, 11), func_304(iParam0, 4));
			}
		}
		else if (iParam1 == 9)
		{
			if (iParam2 >= 1 && iParam2 <= 41)
			{
				iVar48 = func_304(iParam0, 7);
				if (!func_367(iVar5, iVar48, 9, -99, -99, -99, iParam0, 0, iParam2, -99, -99, -99))
				{
					unk_0x03924C68EFCBC511(iParam0, func_234(7), 0, 0, 0);
				}
			}
		}
		else if (iParam1 == 1)
		{
			if (((iVar5 == joaat("mp_m_freemode_01") && iParam2 >= 26) && unk_0x6C297174CFC8C5B2(Global_2621444, -921710083, 0)) || ((iVar5 == joaat("mp_f_freemode_01") && iParam2 >= 26) && unk_0x6C297174CFC8C5B2(Global_2621444, -921710083, 0)))
			{
				iVar49 = func_225(2095, iParam10, 0);
				iVar50 = func_225(2096, iParam10, 0);
				iVar51 = func_225(2097, iParam10, 0);
				fVar52 = func_366(135, iParam10);
				if (iVar5 == joaat("mp_m_freemode_01"))
				{
					unk_0x64A3137B87FA03C0(iParam0, 0, 0, 0, iVar49, iVar50, iVar51, 0f, fVar52, 0f, false);
				}
				else if (iVar5 == joaat("mp_f_freemode_01"))
				{
					unk_0x64A3137B87FA03C0(iParam0, 21, 0, 0, iVar49, iVar50, iVar51, 0f, fVar52, 0f, false);
				}
				iVar53 = 0;
				while (iVar53 < 20)
				{
					unk_0xE72080A9CD807C97(iParam0, iVar53, 0f);
					iVar53++;
				}
			}
			else
			{
				func_350(iParam0, iParam10);
			}
		}
		else if (iParam1 == 4)
		{
			iVar54 = func_304(iParam0, 11);
			iVar55 = func_304(iParam0, 8);
			if (iVar5 == joaat("mp_m_freemode_01"))
			{
				if (unk_0x6C297174CFC8C5B2(func_313(iVar5, iVar54, 11, 3), -1719338724, 0))
				{
					if (!func_416(iVar5, iParam2, func_418(iVar5, iVar55, 0)))
					{
						func_321(iParam0, 8, 240, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						Global_70671[1 /*14*/] = { func_444(iVar5, iParam1, iParam2) };
					}
				}
			}
			else if (iVar5 == joaat("mp_f_freemode_01"))
			{
				if (unk_0x6C297174CFC8C5B2(func_313(iVar5, iVar54, 11, 4), -1719338724, 0))
				{
					if (!func_416(iVar5, iParam2, func_418(iVar5, iVar55, 0)))
					{
						func_321(iParam0, 8, 78, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						Global_70671[1 /*14*/] = { func_444(iVar5, iParam1, iParam2) };
					}
				}
			}
			if (iParam5 == 0)
			{
				iVar6 = func_425(iVar5, func_304(iParam0, 8), func_304(iParam0, 11), iParam2);
			}
			iVar56 = unk_0xE1AE92097550A727(iParam0, 3, unk_0x4CDD2D1D66ED1DE4(iParam0, 3), 0);
			if (unk_0x6C297174CFC8C5B2(iVar56, -356646862, 0))
			{
				iVar57 = func_425(iVar5, iVar55, iVar54, iParam2);
				if (iVar57 == -99)
				{
					iVar57 = func_431(iParam0, iVar5, 11, iVar54, 3, 0);
				}
				switch (iVar56)
				{
					case 1165919867:
					case 1606204151:
					case 1774276352:
					case 1934254610:
					case 980775017:
					case 399321881:
						iVar57 = 11;
						iVar58 = func_313(iVar5, iParam2, 11, 4);
						if (!unk_0x6C297174CFC8C5B2(iVar58, -530089825, 0))
						{
							iVar57 = -99;
						}
						break;
				}
				if (iVar57 != -99)
				{
					iVar59 = 0;
					while (iVar59 < 17)
					{
						if (func_424(iVar5, iVar57, iVar59) == iVar56)
						{
							iVar11 = iVar59;
							iVar12 = unk_0xDCC2BD4C56470D10(iParam0, 3);
						}
						iVar59++;
					}
				}
			}
		}
		if (iParam4 == -1)
		{
			unk_0x03924C68EFCBC511(iParam0, func_234(iParam1), Global_70671[1 /*14*/].f_3, Global_70671[1 /*14*/].f_4, unk_0x6AC6F0502D04B9F9(iParam0, func_234(iParam1)));
		}
		else
		{
			unk_0x03924C68EFCBC511(iParam0, func_234(iParam1), Global_70671[1 /*14*/].f_3, Global_70671[1 /*14*/].f_4, iParam4);
		}
		if (iParam5 == 0)
		{
			if (Global_70669 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = func_431(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_321(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, iParam1 == 10);
						if (iVar2 == 3)
						{
							switch (Global_2621444)
							{
								case 1165919867:
								case 1606204151:
								case 1774276352:
								case 1934254610:
								case 980775017:
								case 399321881:
									iVar11 = -1;
									break;
							}
						}
						else if (iVar2 == 8)
						{
							if (iVar6 != -99)
							{
								iVar6 = func_425(iVar5, iVar3, func_304(iParam0, 11), func_304(iParam0, 4));
							}
						}
					}
					iVar2++;
				}
				iVar3 = func_431(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_321(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
			}
			if ((iParam1 == 11 || iParam1 == 8) || iParam1 == 4)
			{
				if (func_349(iParam0))
				{
					iVar60 = func_347(iParam0, iVar5, iParam1, iParam2);
					if (iVar60 > 0)
					{
						iVar60 = (iVar60 + unk_0xDCC2BD4C56470D10(iParam0, 9));
						if (!func_346(iParam0, 9, iVar60))
						{
							func_321(iParam0, 9, iVar60, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
					else
					{
						func_321(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar8 = unk_0xE1AE92097550A727(iParam0, 8, unk_0x4CDD2D1D66ED1DE4(iParam0, 8), unk_0xDCC2BD4C56470D10(iParam0, 8));
					if (unk_0x6C297174CFC8C5B2(iVar8, 240476421, 8))
					{
						func_321(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iParam1 == 11 || iParam1 == 8)
			{
				iVar61 = func_225(2037, -1, 0);
				if (unk_0x4CDD2D1D66ED1DE4(iParam0, 5) != 0)
				{
					unk_0x03924C68EFCBC511(iParam0, 5, func_340(iParam0, iVar61), func_339(iParam0, iVar61), func_338(iParam0, iVar61));
				}
				if (iParam0 == unk_0xFC1458A37D98B502())
				{
					unk_0x440777357A46FCC8(unk_0x9EB17624F44A8DA4(), 5, func_340(unk_0xFC1458A37D98B502(), iVar61), func_339(unk_0xFC1458A37D98B502(), iVar61), 0);
					unk_0xE1D0F0036E01DD8A(unk_0x9EB17624F44A8DA4(), func_338(unk_0xFC1458A37D98B502(), iVar61));
					func_335(unk_0x9EB17624F44A8DA4(), iVar61);
				}
			}
			if (iParam1 == 7)
			{
				if ((iVar5 == joaat("mp_m_freemode_01") && iParam2 >= 92) || (iVar5 == joaat("mp_f_freemode_01") && iParam2 >= 55))
				{
					if (unk_0x6C297174CFC8C5B2(Global_2621444, -319568873, 0))
					{
						func_321(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iVar5 == joaat("mp_f_freemode_01") && (iParam1 == 11 || iParam1 == 4))
			{
				if (iParam1 == 11)
				{
					iVar62 = func_438(iParam0, 4, -1);
					iVar63 = iParam2;
				}
				else
				{
					iVar62 = iParam2;
					iVar63 = func_438(iParam0, 11, -1);
				}
				if (func_334(iVar5, 11, iVar63, -1))
				{
					if (!func_333(iVar5, 4, iVar62, -1))
					{
						if (func_332(iVar5, 4, iVar62, &uVar64))
						{
							func_321(iParam0, 4, uVar64, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
				}
				else if (func_333(iVar5, 4, iVar62, -1))
				{
					if (func_331(iVar5, 4, iVar62, &uVar64))
					{
						func_321(iParam0, 4, uVar64, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iParam1 == 4 || iParam1 == 6)
			{
				iVar65 = unk_0x4CDD2D1D66ED1DE4(iParam0, 6);
				iVar66 = unk_0xDCC2BD4C56470D10(iParam0, 6);
				iVar67 = unk_0xE1AE92097550A727(iParam0, 6, iVar65, iVar66);
				iVar68 = unk_0x4CDD2D1D66ED1DE4(iParam0, 4);
				iVar69 = unk_0xDCC2BD4C56470D10(iParam0, 4);
				iVar70 = unk_0xE1AE92097550A727(iParam0, 4, iVar68, iVar69);
				iVar71 = func_304(iParam0, 4);
				iVar72 = func_304(iParam0, 6);
				if (func_330(iVar5, iVar67))
				{
					if (unk_0x6C297174CFC8C5B2(iVar67, 1812005517, 0) != func_329(iVar5, iVar71, iVar67))
					{
						iVar73 = unk_0x88B561883D9520BE(iVar67);
						iVar74 = 0;
						while (iVar74 < iVar73)
						{
							unk_0xCE86001874B11267(iVar67, iVar74, &iVar75, &uVar76, &iVar77);
							if (iVar77 == 6)
							{
								if (iVar75 != 0 && iVar75 != 1849449579)
								{
									if (iVar5 == joaat("mp_m_freemode_01"))
									{
										iVar72 = func_293(iVar5, iVar75, 6, 3);
										iVar67 = iVar75;
										func_321(iParam0, 6, iVar72, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("mp_f_freemode_01"))
									{
										iVar72 = func_293(iVar5, iVar75, 6, 4);
										iVar67 = iVar75;
										func_321(iParam0, 6, iVar72, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar74 = iVar73 + 1;
								}
							}
							iVar74++;
						}
					}
					else if (unk_0x6C297174CFC8C5B2(iVar70, -2042643157, 0) != func_328(iVar5, iVar72, iVar70))
					{
						iVar73 = unk_0x88B561883D9520BE(iVar70);
						iVar74 = 0;
						while (iVar74 < iVar73)
						{
							unk_0xCE86001874B11267(iVar70, iVar74, &iVar75, &uVar76, &iVar77);
							if (iVar77 == 4)
							{
								if (iVar75 != 0 && iVar75 != 1849449579)
								{
									if (iVar5 == joaat("mp_m_freemode_01"))
									{
										iVar71 = func_293(iVar5, iVar75, 4, 3);
										iVar70 = iVar75;
										func_321(iParam0, 4, iVar71, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("mp_f_freemode_01"))
									{
										iVar71 = func_293(iVar5, iVar75, 4, 4);
										iVar70 = iVar75;
										func_321(iParam0, 4, iVar71, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar74 = iVar73 + 1;
								}
							}
							iVar74++;
						}
					}
				}
				if (func_330(iVar5, iVar70))
				{
					if (unk_0x6C297174CFC8C5B2(iVar70, -2042643157, 0) != func_328(iVar5, iVar72, iVar70))
					{
						iVar73 = unk_0x88B561883D9520BE(iVar70);
						iVar74 = 0;
						while (iVar74 < iVar73)
						{
							unk_0xCE86001874B11267(iVar70, iVar74, &iVar75, &uVar76, &iVar77);
							if (iVar77 == 4)
							{
								if (iVar75 != 0 && iVar75 != 1849449579)
								{
									if (iVar5 == joaat("mp_m_freemode_01"))
									{
										iVar71 = func_293(iVar5, iVar75, 4, 3);
										iVar70 = iVar75;
										func_321(iParam0, 4, iVar71, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("mp_f_freemode_01"))
									{
										iVar71 = func_293(iVar5, iVar75, 4, 4);
										iVar70 = iVar75;
										func_321(iParam0, 4, iVar71, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar74 = iVar73 + 1;
								}
							}
							iVar74++;
						}
					}
					else if (unk_0x6C297174CFC8C5B2(iVar67, 1812005517, 0) != func_329(iVar5, iVar71, iVar67))
					{
						iVar73 = unk_0x88B561883D9520BE(iVar67);
						iVar74 = 0;
						while (iVar74 < iVar73)
						{
							unk_0xCE86001874B11267(iVar67, iVar74, &iVar75, &uVar76, &iVar77);
							if (iVar77 == 6)
							{
								if (iVar75 != 0 && iVar75 != 1849449579)
								{
									if (iVar5 == joaat("mp_m_freemode_01"))
									{
										iVar72 = func_293(iVar5, iVar75, 6, 3);
										iVar67 = iVar75;
										func_321(iParam0, 6, iVar72, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("mp_f_freemode_01"))
									{
										iVar72 = func_293(iVar5, iVar75, 6, 4);
										iVar67 = iVar75;
										func_321(iParam0, 6, iVar72, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar74 = iVar73 + 1;
								}
							}
							iVar74++;
						}
					}
				}
			}
			if (iParam1 == 11 || iParam1 == 1)
			{
				func_426(iParam0);
				iVar78 = unk_0x4CDD2D1D66ED1DE4(iParam0, 1);
				iVar79 = unk_0xDCC2BD4C56470D10(iParam0, 1);
				iVar80 = unk_0xE1AE92097550A727(iParam0, 1, iVar78, iVar79);
				if (unk_0x6C297174CFC8C5B2(iVar80, 838607662, 0))
				{
					iVar3 = func_431(iParam0, iVar5, iParam1, iParam2, 14, 0);
					if (iVar3 != -99)
					{
						func_321(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar3 = func_431(iParam0, iVar5, iParam1, iParam2, 14, 1);
					if (iVar3 != -99)
					{
						func_321(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
		}
	}
	if (iParam1 != 2)
	{
		if (func_322(iParam0, &uVar4))
		{
			func_321(iParam0, 2, uVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	if (iVar6 != -99 && !bParam13)
	{
		func_321(iParam0, 3, iVar6, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar9 != -99)
	{
		func_321(iParam0, 8, iVar9, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar7 != -99)
	{
		func_321(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar11 != -1)
	{
		iVar81 = func_424(iVar5, func_438(iParam0, 3, -1), iVar11);
		if (iVar81 != -1)
		{
			if (iVar5 == joaat("mp_m_freemode_01"))
			{
				iVar10 = func_293(iVar5, iVar81, 3, 3);
			}
			else if (iVar5 == joaat("mp_f_freemode_01"))
			{
				iVar10 = func_293(iVar5, iVar81, 3, 4);
			}
			if (iVar10 != -99)
			{
				iVar10 = (iVar10 + iVar12);
				func_321(iParam0, 3, iVar10, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
	}
	Global_70669 = (Global_70669 - 1);
	return 1;
}

int func_322(int iParam0, var uParam1)//Position - 0x2D883
{
	int iVar0;
	int iVar1;
	
	*uParam1 = func_438(unk_0xFC1458A37D98B502(), 2, -1);
	if (func_225(750, Global_70668, 0) != -99 && func_325())
	{
		if (func_324() == 4)
		{
			return 1;
		}
		if (func_225(750, Global_70668, 0) == 0 && func_225(751, Global_70668, 0) == 0)
		{
			if (func_323(161, Global_70668))
			{
				if (func_225(2048, Global_70668, 0) == 0)
				{
					return 0;
				}
			}
			else if (func_225(749, Global_70668, 0) == 0)
			{
				return 0;
			}
		}
		iVar0 = func_225(750, Global_70668, 0);
		iVar1 = func_225(751, Global_70668, 0);
		if (!func_346(iParam0, iVar1, iVar0))
		{
			if (func_323(161, Global_70668))
			{
				*uParam1 = func_225(2048, Global_70668, 0);
			}
			else
			{
				*uParam1 = func_225(749, Global_70668, 0);
			}
			func_481(750, -99, Global_70668, 1, 0);
			func_481(751, 2, Global_70668, 1, 0);
			return 1;
		}
	}
	return 0;
}

int func_323(int iParam0, int iParam1)//Position - 0x2D997
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2547365[iParam0 /*3*/][func_226(iParam1)];
	if (unk_0xACAF9DBDD76F24DF(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_324()//Position - 0x2D9C3
{
	return Global_1312788;
}

int func_325()//Position - 0x2D9CF
{
	if (func_327() && func_326(0))
	{
		return 1;
	}
	return 0;
}

var func_326(int iParam0)//Position - 0x2D9ED
{
	return Global_1312373[iParam0];
}

var func_327()//Position - 0x2D9FD
{
	return func_326(func_227() + 1);
}

int func_328(int iParam0, int iParam1, int iParam2)//Position - 0x2DA0F
{
	int iVar0;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			if (iParam1 >= 256)
			{
				iVar0 = func_313(iParam0, iParam1, 6, 3);
			}
			if (unk_0x6C297174CFC8C5B2(iVar0, -364248070, 0))
			{
				if ((unk_0x6C297174CFC8C5B2(iParam2, -1080576805, 0) || unk_0x6C297174CFC8C5B2(iParam2, -1387458490, 0)) || unk_0x6C297174CFC8C5B2(iParam2, -1420825402, 0))
				{
					return 0;
				}
			}
			if (unk_0x6C297174CFC8C5B2(iParam2, -56268180, 0))
			{
				if ((((((((((unk_0x6C297174CFC8C5B2(iVar0, -713698407, 0) || unk_0x6C297174CFC8C5B2(iVar0, 140732128, 0)) || unk_0x6C297174CFC8C5B2(iVar0, 2106216756, 0)) || unk_0x6C297174CFC8C5B2(iVar0, -849839091, 0)) || unk_0x6C297174CFC8C5B2(iVar0, -1446333198, 0)) || unk_0x6C297174CFC8C5B2(iVar0, -269266203, 0)) || unk_0x6C297174CFC8C5B2(iVar0, 201427653, 0)) || unk_0x6C297174CFC8C5B2(iVar0, 967829025, 0)) || unk_0x6C297174CFC8C5B2(iVar0, -685039259, 0)) || unk_0x6C297174CFC8C5B2(iVar0, -1266557933, 0)) || unk_0x6C297174CFC8C5B2(iVar0, -364248070, 0))
				{
					return 1;
				}
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			if (iParam1 >= 256)
			{
				iVar0 = func_313(iParam0, iParam1, 6, 4);
			}
			if (unk_0x6C297174CFC8C5B2(iParam2, -56268180, 0))
			{
				if (((((((((unk_0x6C297174CFC8C5B2(iVar0, -713698407, 0) || unk_0x6C297174CFC8C5B2(iVar0, 140732128, 0)) || unk_0x6C297174CFC8C5B2(iVar0, 1863955539, 0)) || unk_0x6C297174CFC8C5B2(iVar0, -849839091, 0)) || unk_0x6C297174CFC8C5B2(iVar0, -269266203, 0)) || unk_0x6C297174CFC8C5B2(iVar0, 201427653, 0)) || unk_0x6C297174CFC8C5B2(iVar0, 967829025, 0)) || unk_0x6C297174CFC8C5B2(iVar0, -685039259, 0)) || unk_0x6C297174CFC8C5B2(iVar0, -1266557933, 0)) || unk_0x6C297174CFC8C5B2(iVar0, -309899747, 0))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
	return 0;
}

int func_329(int iParam0, int iParam1, int iParam2)//Position - 0x2DC40
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = -1;
	iVar1 = -1;
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			if (iParam1 >= 256)
			{
				iVar0 = func_313(iParam0, iParam1, 4, 3);
				iVar1 = func_417(iVar0);
			}
			if (unk_0x6C297174CFC8C5B2(iParam2, -364248070, 0) || unk_0x6C297174CFC8C5B2(iParam2, -56268180, 0))
			{
				iVar2 = 1;
				if ((((((((((((((((((((((iParam1 >= 32 && iParam1 <= 47) || (iParam1 >= 64 && iParam1 <= 79)) || (iParam1 >= 96 && iParam1 <= 111)) || (iParam1 >= 176 && iParam1 <= 191)) || (iParam1 >= 192 && iParam1 <= 207)) || (iParam1 >= 224 && iParam1 <= 239)) || (iParam1 >= 240 && iParam1 <= 255)) || iVar1 == 2) || iVar1 == 4) || iVar1 == 6) || iVar1 == 11) || iVar1 == 12) || iVar1 == 14) || iVar1 == 15) || unk_0x6C297174CFC8C5B2(iVar0, 320460654, 0)) || unk_0x6C297174CFC8C5B2(iVar0, -269266203, 0)) || unk_0x6C297174CFC8C5B2(iVar0, 201427653, 0)) || unk_0x6C297174CFC8C5B2(iVar0, 967829025, 0)) || unk_0x6C297174CFC8C5B2(iVar0, -685039259, 0)) || (unk_0x6C297174CFC8C5B2(iVar0, -1080576805, 0) && !unk_0x6C297174CFC8C5B2(iParam2, -364248070, 0))) || (unk_0x6C297174CFC8C5B2(iVar0, -1387458490, 0) && !unk_0x6C297174CFC8C5B2(iParam2, -364248070, 0))) || (unk_0x6C297174CFC8C5B2(iVar0, -1420825402, 0) && !unk_0x6C297174CFC8C5B2(iParam2, -364248070, 0)))
				{
					iVar2 = 0;
				}
				switch (iVar0)
				{
					case -439764935:
					case 1858824227:
					case -44268217:
					case 301706885:
					case 1283072893:
					case -1590178565:
					case 1995307108:
					case 1029014836:
					case -365568266:
					case -138446327:
					case -2034722819:
					case -1219513062:
					case 153704652:
					case 356276239:
					case 586511233:
					case 1558996842:
					case 1183988406:
					case 1000678684:
					case 761792674:
					case -145679239:
					case 686423978:
					case -763407658:
					case 74266289:
					case 987390769:
					case 1591372991:
					case 1834027448:
					case 913054691:
					case 1142372153:
					case -1698011990:
					case -1443101939:
					case 2133699953:
					case -1924511318:
					case -475531676:
					case -237137197:
					case 754461254:
					case -1155840382:
					case 629180074:
					case 859251223:
					case 1610316715:
					case 901392169:
					case -92983136:
					case 1346362420:
					case 485782942:
					case 312004063:
					case 6695290:
					case 1724446270:
					case -448105673:
					case -611098679:
					case -1111088081:
					case -1406369540:
					case -1912159043:
					case 2076516410:
					case 1919618438:
					case 45227112:
					case -2129094253:
					case -421370587:
					case -675363106:
						iVar2 = 0;
						break;
				}
				if (unk_0x6C297174CFC8C5B2(iParam2, 1248753945, 0) || unk_0x6C297174CFC8C5B2(iParam2, 481861038, 0))
				{
					if ((((((unk_0x6C297174CFC8C5B2(iVar0, -1080576805, 0) || unk_0x6C297174CFC8C5B2(iVar0, -1387458490, 0)) || unk_0x6C297174CFC8C5B2(iVar0, -269266203, 0)) || unk_0x6C297174CFC8C5B2(iVar0, 201427653, 0)) || unk_0x6C297174CFC8C5B2(iVar0, 967829025, 0)) || unk_0x6C297174CFC8C5B2(iVar0, -685039259, 0)) || unk_0x6C297174CFC8C5B2(iVar0, -1420825402, 0))
					{
						iVar2 = 1;
					}
				}
				return iVar2;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			if (iParam1 >= 256)
			{
				iVar0 = func_313(iParam0, iParam1, 4, 4);
				iVar1 = func_417(iVar0);
			}
			if (unk_0x6C297174CFC8C5B2(iParam2, -364248070, 0) || unk_0x6C297174CFC8C5B2(iParam2, -56268180, 0))
			{
				if ((unk_0x6C297174CFC8C5B2(iVar0, -1080576805, 0) || unk_0x6C297174CFC8C5B2(iVar0, -1387458490, 0)) || unk_0x6C297174CFC8C5B2(iVar0, -1420825402, 0))
				{
					if ((((unk_0x6C297174CFC8C5B2(iParam2, -364248070, 0) || unk_0x6C297174CFC8C5B2(iParam2, -979468724, 0)) || unk_0x6C297174CFC8C5B2(iParam2, -1813210391, 0)) || unk_0x6C297174CFC8C5B2(iParam2, 1248753945, 0)) || unk_0x6C297174CFC8C5B2(iParam2, 481861038, 0))
					{
						return 1;
					}
					return 0;
				}
				if (((((((((((((((((((((((((iParam1 >= 16 && iParam1 <= 31) || (iParam1 >= 48 && iParam1 <= 63)) || (iParam1 >= 96 && iParam1 <= 111)) || iVar1 == 1) || iVar1 == 3) || iVar1 == 6) || unk_0x6C297174CFC8C5B2(iVar0, 1863955539, 0)) || unk_0x6C297174CFC8C5B2(iVar0, 2106216756, 0)) || unk_0x6C297174CFC8C5B2(iVar0, -761463976, 0)) || unk_0x6C297174CFC8C5B2(iVar0, 684992453, 0)) || unk_0x6C297174CFC8C5B2(iVar0, 916636514, 0)) || unk_0x6C297174CFC8C5B2(iVar0, -1939378450, 0)) || unk_0x6C297174CFC8C5B2(iVar0, 264959411, 0)) || unk_0x6C297174CFC8C5B2(iVar0, -1127835965, 0)) || unk_0x6C297174CFC8C5B2(iVar0, -1119232689, 0)) || unk_0x6C297174CFC8C5B2(iVar0, -1207283343, 0)) || unk_0x6C297174CFC8C5B2(iVar0, -849839091, 0)) || unk_0x6C297174CFC8C5B2(iVar0, -2088146832, 0)) || unk_0x6C297174CFC8C5B2(iVar0, -1446333198, 0)) || unk_0x6C297174CFC8C5B2(iVar0, -430330349, 0)) || unk_0x6C297174CFC8C5B2(iVar0, -1103045158, 0)) || unk_0x6C297174CFC8C5B2(iVar0, 1055526375, 0)) || unk_0x6C297174CFC8C5B2(iVar0, -2020757158, 0)) || unk_0x6C297174CFC8C5B2(iVar0, -1325813684, 0)) || unk_0x6C297174CFC8C5B2(iVar0, 1052059919, 0))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_330(int iParam0, int iParam1)//Position - 0x2E2D5
{
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			if (unk_0x6C297174CFC8C5B2(iParam1, -364248070, 0) || unk_0x6C297174CFC8C5B2(iParam1, -56268180, 0))
			{
				return 1;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			if (unk_0x6C297174CFC8C5B2(iParam1, -364248070, 0) || unk_0x6C297174CFC8C5B2(iParam1, -56268180, 0))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_331(int iParam0, int iParam1, int iParam2, var uParam3)//Position - 0x2E341
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	
	switch (iParam0)
	{
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 4:
					if (iParam2 >= 256)
					{
						iVar0 = func_313(iParam0, iParam2, iParam1, 4);
						if (iVar0 != -1)
						{
							iVar1 = unk_0x88B561883D9520BE(iVar0);
							iVar2 = 0;
							while (iVar2 < iVar1)
							{
								unk_0xCE86001874B11267(iVar0, iVar2, &iVar3, &uVar4, &iVar5);
								if (iVar5 == 4)
								{
									if (iVar3 != 0 && iVar3 != 1849449579)
									{
										if (!unk_0x6C297174CFC8C5B2(iVar3, -1100807313, 0))
										{
											*uParam3 = func_293(iParam0, iVar3, iParam1, 4);
											return 1;
										}
									}
								}
								iVar2++;
							}
						}
					}
					break;
			}
			break;
	}
	return 0;
}

int func_332(int iParam0, int iParam1, int iParam2, var uParam3)//Position - 0x2E3EA
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	
	switch (iParam0)
	{
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 4:
					if (iParam2 >= 256)
					{
						iVar0 = func_313(iParam0, iParam2, iParam1, 4);
						if (iVar0 != -1)
						{
							iVar1 = unk_0x88B561883D9520BE(iVar0);
							iVar2 = 0;
							while (iVar2 < iVar1)
							{
								unk_0xCE86001874B11267(iVar0, iVar2, &iVar3, &uVar4, &iVar5);
								if (iVar5 == 4)
								{
									if (iVar3 != 0 && iVar3 != 1849449579)
									{
										if (unk_0x6C297174CFC8C5B2(iVar3, -1100807313, 0))
										{
											*uParam3 = func_293(iParam0, iVar3, iParam1, 4);
											return 1;
										}
									}
								}
								iVar2++;
							}
						}
					}
					break;
			}
			break;
	}
	return 0;
}

int func_333(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x2E492
{
	switch (iParam0)
	{
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 4:
					if (iParam2 >= 256)
					{
						if (iParam3 == -1)
						{
							iParam3 = func_313(iParam0, iParam2, 4, 4);
						}
						if (unk_0x6C297174CFC8C5B2(iParam3, -1100807313, 0))
						{
							return 1;
						}
					}
					break;
			}
			break;
	}
	return 0;
}

int func_334(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x2E4E8
{
	switch (iParam0)
	{
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 11:
					if (iParam2 >= 256)
					{
						if (iParam3 == -1)
						{
							iParam3 = func_313(iParam0, iParam2, 11, 4);
						}
						return unk_0x6C297174CFC8C5B2(iParam3, -530089825, 0);
					}
					break;
			}
			break;
	}
	return 0;
}

void func_335(int iParam0, int iParam1)//Position - 0x2E53B
{
	if (func_337())
	{
		if (iParam1 > 51)
		{
			unk_0x9925526A3F4F2570(iParam0, 1269440357);
		}
		else if (iParam1 > 46)
		{
			unk_0x9925526A3F4F2570(iParam0, 1766664132);
		}
		else if (iParam1 > 26)
		{
			unk_0x9925526A3F4F2570(iParam0, 1277738372);
		}
		else if (iParam1 > 0)
		{
			unk_0x9925526A3F4F2570(iParam0, 1269440357);
		}
		else
		{
			unk_0x7FC5A62030D9EF74(iParam0);
		}
	}
	else if (func_336())
	{
		if (iParam1 > 0)
		{
			unk_0x9925526A3F4F2570(iParam0, 1479397204);
		}
		else
		{
			unk_0x7FC5A62030D9EF74(iParam0);
		}
	}
}

bool func_336()//Position - 0x2E5C7
{
	return unk_0x21EA5D4DC72DE119(1428761799);
}

bool func_337()//Position - 0x2E5D8
{
	return unk_0x21EA5D4DC72DE119(-1005876368);
}

int func_338(int iParam0, int iParam1)//Position - 0x2E5E9
{
	return 0;
}

int func_339(int iParam0, int iParam1)//Position - 0x2E5F2
{
	if (iParam1 > 62)
	{
		return (iParam1 - 63);
	}
	if (iParam1 > 51)
	{
		return (iParam1 - 52);
	}
	if (iParam1 > 46)
	{
		return (iParam1 - 47);
	}
	if (iParam1 > 26)
	{
		return (iParam1 - 27);
	}
	if (iParam1 > 0)
	{
		return (iParam1 - 1);
	}
	return iParam1;
}

var func_340(int iParam0, int iParam1)//Position - 0x2E654
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	bVar0 = unk_0x4CDD2D1D66ED1DE4(iParam0, 9) != false;
	iVar1 = unk_0xE1AE92097550A727(iParam0, 8, unk_0x4CDD2D1D66ED1DE4(iParam0, 8), unk_0xDCC2BD4C56470D10(iParam0, 8));
	iVar2 = unk_0xE1AE92097550A727(iParam0, 11, unk_0x4CDD2D1D66ED1DE4(iParam0, 11), unk_0xDCC2BD4C56470D10(iParam0, 11));
	iVar3 = unk_0xE1AE92097550A727(iParam0, 4, unk_0x4CDD2D1D66ED1DE4(iParam0, 4), unk_0xDCC2BD4C56470D10(iParam0, 4));
	if ((((!bVar0 == Global_70832 || !iParam1 == Global_70833) || !iVar1 == Global_70834) || !iVar2 == Global_70835) || !iVar3 == Global_70836)
	{
		Global_70832 = bVar0;
		Global_70833 = iParam1;
		Global_70834 = iVar1;
		Global_70835 = iVar2;
		Global_70836 = iVar3;
		Global_70837 = func_341(iParam0, iParam1);
	}
	return Global_70837;
}

int func_341(int iParam0, int iParam1)//Position - 0x2E724
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	iVar0 = unk_0x4CDD2D1D66ED1DE4(iParam0, 11);
	if (unk_0x4CDD2D1D66ED1DE4(iParam0, 9) != 0)
	{
		bVar1 = true;
	}
	iVar2 = unk_0x82FF3DFBC3965CC0(iParam0);
	iVar3 = 0;
	if (iParam1 > 61)
	{
		iVar3 = 50;
	}
	else if (iParam1 > 51)
	{
		iVar3 = (iParam1 - 1);
	}
	else if (iParam1 > 46)
	{
		iVar3 = 30;
	}
	else if (iParam1 > 26)
	{
		iVar3 = 20;
	}
	else if (iParam1 > 0)
	{
		iVar3 = 9;
	}
	else
	{
		iVar3 = 0;
	}
	iVar4 = unk_0xE1AE92097550A727(iParam0, 8, unk_0x4CDD2D1D66ED1DE4(iParam0, 8), unk_0xDCC2BD4C56470D10(iParam0, 8));
	if (unk_0x6C297174CFC8C5B2(iVar4, 240476421, 8))
	{
		if (iVar2 == joaat("mp_m_freemode_01"))
		{
			if (unk_0x6C297174CFC8C5B2(iVar4, -1499233212, 8))
			{
				return (2 + iVar3);
			}
			if (unk_0x6C297174CFC8C5B2(iVar4, 350281921, 8))
			{
				return func_345(iParam0, iParam1) + 15;
			}
			if (unk_0x6C297174CFC8C5B2(iVar4, -887141061, 8))
			{
				return func_345(iParam0, iParam1) + 15;
			}
			if (unk_0x6C297174CFC8C5B2(iVar4, -1185371730, 8))
			{
				return func_345(iParam0, iParam1) + 15;
			}
			if (unk_0x6C297174CFC8C5B2(iVar4, -2124629577, 8))
			{
				return func_345(iParam0, iParam1) + 15;
			}
		}
		else
		{
			if (unk_0x6C297174CFC8C5B2(iVar4, -1499233212, 8))
			{
				return (7 + iVar3);
			}
			if (unk_0x6C297174CFC8C5B2(iVar4, 350281921, 8))
			{
				return (8 + iVar3);
			}
			if (unk_0x6C297174CFC8C5B2(iVar4, -887141061, 8))
			{
				return func_345(iParam0, iParam1) + 15;
			}
			if (unk_0x6C297174CFC8C5B2(iVar4, -1185371730, 8))
			{
				return func_345(iParam0, iParam1) + 15;
			}
			if (unk_0x6C297174CFC8C5B2(iVar4, -2124629577, 8))
			{
				return func_345(iParam0, iParam1) + 15;
			}
		}
		return func_345(iParam0, iParam1);
	}
	if (func_344(iParam0))
	{
		if (bVar1)
		{
			return (8 + iVar3);
		}
		else
		{
			return (2 + iVar3);
		}
	}
	if (iVar0 > 15)
	{
		iVar5 = unk_0xE1AE92097550A727(iParam0, 11, iVar0, unk_0xDCC2BD4C56470D10(iParam0, 11));
		if (unk_0x6C297174CFC8C5B2(iVar5, 655081063, 0))
		{
			if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (2 + iVar3);
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, -530089825, 0))
		{
			if (bVar1)
			{
				return (6 + iVar3);
			}
			else
			{
				return (6 + iVar3);
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, -713698407, 0))
		{
			if (iParam1 > 51)
			{
				if (iVar2 == joaat("mp_m_freemode_01"))
				{
					return 60;
				}
				else
				{
					return 53;
				}
			}
			else if (iParam1 > 46)
			{
				return 39;
			}
			else if (iParam1 > 26)
			{
				return 29;
			}
			else if (iParam1 > 0)
			{
				return 18;
			}
			else
			{
				return 19;
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, -1882920022, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
			}
			else if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (2 + iVar3);
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, -317649054, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
			}
			else if (unk_0x6C297174CFC8C5B2(iVar5, -979468724, 0))
			{
				return func_345(iParam0, iParam1) + 15;
			}
			else if (unk_0x6C297174CFC8C5B2(iVar5, -306768813, 0))
			{
				return func_345(iParam0, iParam1) + 15;
			}
			else if (unk_0x6C297174CFC8C5B2(iVar5, -58412562, 0))
			{
				return func_345(iParam0, iParam1) + 15;
			}
			else if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (2 + iVar3);
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, 1536649085, 0) && !unk_0x6C297174CFC8C5B2(iVar5, 350281921, 0))
		{
			iVar6 = func_343(iVar5, 0);
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				switch (iVar6)
				{
					case 0:
						return (2 + iVar3);
						break;
					
					case 2:
						if (iParam1 > 46)
						{
							return 39;
						}
						else if (iParam1 > 26)
						{
							return 29;
						}
						else if (iParam1 > 0)
						{
							return 18;
						}
						else
						{
							return 19;
						}
						break;
					
					default:
						iVar0 = func_417(iVar5);
						break;
				}
			}
			else
			{
				switch (iVar6)
				{
					case 2:
						return (7 + iVar3);
						break;
					
					default:
						iVar0 = func_417(iVar5);
						break;
					}
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, 248194463, 0))
		{
			if (unk_0x6C297174CFC8C5B2(iVar5, -1347486026, 0))
			{
				return (3 + iVar3);
			}
			else
			{
				return (7 + iVar3);
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, 396458410, 0))
		{
			iVar7 = func_342(iVar5, 0);
			switch (iVar7)
			{
				case 4:
					if (iParam1 > 46)
					{
						return 39;
					}
					else if (iParam1 > 26)
					{
						return 28;
					}
					else if (iParam1 > 0)
					{
						return 17;
					}
					else
					{
						return 8;
					}
					break;
				
				case 5:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
					}
					else
					{
						return (8 + iVar3);
					}
					break;
				
				case 6:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
					}
					else
					{
						return (8 + iVar3);
					}
					break;
				
				case 7:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
					}
					else
					{
						return (8 + iVar3);
					}
					break;
				
				case 11:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
					}
					else
					{
						return (8 + iVar3);
					}
					break;
				
				case 12:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
					}
					else
					{
						return (8 + iVar3);
					}
					break;
				
				case 14:
					if (iParam1 > 46)
					{
						return 39;
					}
					else if (iParam1 > 26)
					{
						return 29;
					}
					else if (iParam1 > 0)
					{
						return 18;
					}
					else
					{
						return 19;
					}
					break;
				
				default:
					iVar0 = func_417(iVar5);
					break;
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, -779835469, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
			}
			else if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (2 + iVar3);
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, -1119232689, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (1 + iVar3);
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, -2102859770, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (2 + iVar3);
			}
			else
			{
				return (2 + iVar3);
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, 1784133476, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (2 + iVar3);
			}
			else if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (1 + iVar3);
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, -1607949555, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, 1976716889, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, 2099109084, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (2 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, -1488441032, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (iParam1 > 46)
				{
					return 39;
				}
				else if (iParam1 > 26)
				{
					return 29;
				}
				else if (iParam1 > 0)
				{
					return 18;
				}
				else
				{
					return 19;
				}
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, -1719167561, 0) || unk_0x6C297174CFC8C5B2(iVar5, 1431529976, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, -1274099003, 0) || unk_0x6C297174CFC8C5B2(iVar5, 1723403459, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (unk_0x6C297174CFC8C5B2(iVar5, -1407614029, 0))
				{
					return func_345(iParam0, iParam1) + 15;
				}
				else
				{
					return (3 + iVar3);
				}
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, 912543594, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (2 + iVar3);
			}
		}
		else if ((unk_0x6C297174CFC8C5B2(iVar5, -1086258388, 0) || unk_0x6C297174CFC8C5B2(iVar5, 103539798, 0)) || unk_0x6C297174CFC8C5B2(iVar5, -994703884, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (6 + iVar3);
				}
			}
			else if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (7 + iVar3);
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, 2044466679, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (iParam1 > 46)
				{
					return 39;
				}
				else if (iParam1 > 26)
				{
					return 29;
				}
				else if (iParam1 > 0)
				{
					return 18;
				}
				else
				{
					return 19;
				}
			}
			else if (bVar1)
			{
				return (4 + iVar3);
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, -2020757158, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (2 + iVar3);
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, -1064262817, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
			}
			else if (bVar1)
			{
				return func_345(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, -1419806467, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (7 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, -1053842259, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, -1358888880, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, -441291342, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, -747583185, 0))
		{
			if (iVar2 == joaat("mp_f_freemode_01"))
			{
				if (bVar1)
				{
					return func_345(iParam0, iParam1);
				}
				else
				{
					return (2 + iVar3);
				}
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, -1986415230, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, -2088146832, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (6 + iVar3);
				}
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, -785939537, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, -872449705, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, 700658917, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, 1714969731, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, 745826556, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, 1055526375, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, 144417099, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, 492620493, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, -416620954, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, -102825006, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
			}
			else
			{
				return (7 + iVar3);
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, -733792105, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (7 + iVar3);
				}
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, 137011325, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, -641612092, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return (6 + iVar3);
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, -1351486939, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
			}
			else if (bVar1)
			{
				return func_345(iParam0, iParam1);
			}
			else
			{
				return (2 + iVar3);
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, -2119756144, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, -1507532917, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_345(iParam0, iParam1);
			}
			else
			{
				return (7 + iVar3);
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, 947651647, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, -1506370874, 0) || unk_0x6C297174CFC8C5B2(iVar5, 1927516484, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, -1786447517, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, -1010805287, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, -1325813684, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else if (bVar1)
			{
				return func_345(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, -549843760, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, -828478571, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_345(iParam0, iParam1);
			}
			else if (bVar1)
			{
				return (55 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, 1690933245, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else if (bVar1)
			{
				return func_345(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, 1360588936, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, 2136821028, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, 1830529185, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, -269266203, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, 201427653, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, 967829025, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, -685039259, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, -1266557933, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_345(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, -979468724, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_345(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, -1813210391, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, 263623295, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_345(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, -309899747, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, -89003918, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, -747858475, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_345(iParam0, iParam1);
			}
			else
			{
				return func_345(iParam0, iParam1);
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, 490219883, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_345(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, 1208450825, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_345(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, 297865853, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_345(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, 602650322, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_345(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, 905042630, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_345(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, 1204125293, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_345(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, 310055897, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_345(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, 606713654, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_345(iParam0, iParam1);
			}
			else
			{
				return func_345(iParam0, iParam1);
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, 1831422288, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, -838136846, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, 655638019, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, 970679185, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, 83294665, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, 382246252, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, -99064836, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_345(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, -697656159, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_345(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, -398213037, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_345(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, 1380605304, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_345(iParam0, iParam1);
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, -306768813, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_345(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, -58412562, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_345(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, 1711219157, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_345(iParam0, iParam1) + 15;
			}
			else
			{
				return func_345(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, 1466664110, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_345(iParam0, iParam1) + 15;
			}
			else
			{
				return func_345(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, -1968575702, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_345(iParam0, iParam1) + 15;
			}
			else
			{
				return func_345(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, 245429010, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (48 + iVar3);
			}
			else
			{
				return func_345(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, 15161247, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (48 + iVar3);
			}
			else
			{
				return (48 + iVar3);
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, 2044923487, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_345(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, -915352927, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_345(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, -538378351, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_345(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, -2139144017, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_345(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, -435539886, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_345(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, 695107163, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				iVar0 = 7;
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, -1499233212, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_345(iParam0, iParam1) + 15;
			}
			else
			{
				return func_345(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, 350281921, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_345(iParam0, iParam1) + 15;
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, -2124629577, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_345(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, 1877382859, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_345(iParam0, iParam1) + 15;
			}
			else
			{
				return func_345(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, -1375878737, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, 1965569012, 0) && iVar2 == joaat("mp_f_freemode_01"))
		{
			if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (1 + iVar3);
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, 2026620439, 0) && iVar2 == joaat("mp_f_freemode_01"))
		{
			if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (2 + iVar3);
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, -1410897066, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if ((unk_0x6C297174CFC8C5B2(iVar5, -2017999390, 0) || unk_0x6C297174CFC8C5B2(iVar5, 320460654, 0)) || unk_0x6C297174CFC8C5B2(iVar5, -826135203, 0))
		{
			return (7 + iVar3);
		}
		else
		{
			iVar8 = iVar0;
			iVar0 = func_417(iVar5);
		}
	}
	if (iVar2 == joaat("mp_m_freemode_01"))
	{
		switch (iVar0)
		{
			case 0:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 1:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 2:
				if (bVar1)
				{
					return (7 + iVar3);
				}
				else
				{
					return (7 + iVar3);
				}
				break;
			
			case 3:
				if (bVar1)
				{
					return (3 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
				break;
			
			case 4:
				if (bVar1)
				{
					return (3 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
				break;
			
			case 5:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 6:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
				break;
			
			case 7:
				if (bVar1)
				{
					return (3 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
				break;
			
			case 8:
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 9:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 10:
				if (bVar1)
				{
					return (3 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
				break;
			
			case 11:
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
				break;
			
			case 12:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 13:
				if (bVar1)
				{
					return (7 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
				break;
			
			case 14:
				if (bVar1)
				{
					return (6 + iVar3);
				}
				else
				{
					return (6 + iVar3);
				}
				break;
			
			case 15:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (5 + iVar3);
				}
				break;
		}
	}
	else
	{
		switch (iVar0)
		{
			case 0:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 1:
				if (bVar1)
				{
					return (7 + iVar3);
				}
				else
				{
					return (7 + iVar3);
				}
				break;
			
			case 2:
				if (bVar1)
				{
					return (4 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
				break;
			
			case 3:
				if (bVar1)
				{
					return (6 + iVar3);
				}
				else
				{
					return (5 + iVar3);
				}
				break;
			
			case 4:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 5:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 6:
				if (bVar1)
				{
					return (7 + iVar3);
				}
				else
				{
					return (7 + iVar3);
				}
				break;
			
			case 7:
				if (bVar1)
				{
					return (7 + iVar3);
				}
				else
				{
					return (7 + iVar3);
				}
				break;
			
			case 8:
				if (bVar1)
				{
					return (7 + iVar3);
				}
				else
				{
					return (7 + iVar3);
				}
				break;
			
			case 9:
				return (2 + iVar3);
				break;
			
			case 10:
				if (bVar1)
				{
					return (7 + iVar3);
				}
				else
				{
					return (7 + iVar3);
				}
				break;
			
			case 11:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 12:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 13:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 14:
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (4 + iVar3);
				}
				break;
			
			case 15:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			}
	}
	return (1 + iVar3);
	return 0;
}

int func_342(int iParam0, int iParam1)//Position - 0x305A3
{
	int iVar0;
	
	iVar0 = -1;
	if (unk_0x6C297174CFC8C5B2(iParam0, 140732128, iParam1))
	{
		iVar0 = 0;
	}
	else if (unk_0x6C297174CFC8C5B2(iParam0, 1863955539, iParam1))
	{
		iVar0 = 1;
	}
	else if (unk_0x6C297174CFC8C5B2(iParam0, 2106216756, iParam1))
	{
		iVar0 = 2;
	}
	else if (unk_0x6C297174CFC8C5B2(iParam0, -761463976, iParam1))
	{
		iVar0 = 3;
	}
	else if (unk_0x6C297174CFC8C5B2(iParam0, 1627756587, iParam1))
	{
		iVar0 = 4;
	}
	else if (unk_0x6C297174CFC8C5B2(iParam0, 684992453, iParam1))
	{
		iVar0 = 5;
	}
	else if (unk_0x6C297174CFC8C5B2(iParam0, 916636514, iParam1))
	{
		iVar0 = 6;
	}
	else if (unk_0x6C297174CFC8C5B2(iParam0, -1939378450, iParam1))
	{
		iVar0 = 7;
	}
	else if (unk_0x6C297174CFC8C5B2(iParam0, 441715397, iParam1))
	{
		iVar0 = 8;
	}
	else if (unk_0x6C297174CFC8C5B2(iParam0, 264959411, iParam1))
	{
		iVar0 = 9;
	}
	else if (unk_0x6C297174CFC8C5B2(iParam0, -1127835965, iParam1))
	{
		iVar0 = 10;
	}
	else if (unk_0x6C297174CFC8C5B2(iParam0, -820724897, iParam1))
	{
		iVar0 = 11;
	}
	else if (unk_0x6C297174CFC8C5B2(iParam0, 153792394, iParam1))
	{
		iVar0 = 12;
	}
	else if (unk_0x6C297174CFC8C5B2(iParam0, -672871169, iParam1))
	{
		iVar0 = 13;
	}
	else if (unk_0x6C297174CFC8C5B2(iParam0, 572416369, iParam1))
	{
		iVar0 = 14;
	}
	else if (unk_0x6C297174CFC8C5B2(iParam0, -196114988, iParam1))
	{
		iVar0 = 15;
	}
	else if (unk_0x6C297174CFC8C5B2(iParam0, 1322269404, iParam1))
	{
		iVar0 = 16;
	}
	else if (unk_0x6C297174CFC8C5B2(iParam0, 548036233, iParam1))
	{
		iVar0 = 17;
	}
	return iVar0;
}

int func_343(int iParam0, int iParam1)//Position - 0x30743
{
	int iVar0;
	
	iVar0 = -1;
	if (unk_0x6C297174CFC8C5B2(iParam0, -870074461, iParam1))
	{
		iVar0 = 0;
	}
	else if (unk_0x6C297174CFC8C5B2(iParam0, -1174924468, iParam1))
	{
		iVar0 = 1;
	}
	else if (unk_0x6C297174CFC8C5B2(iParam0, -868698159, iParam1))
	{
		iVar0 = 2;
	}
	else if (unk_0x6C297174CFC8C5B2(iParam0, -1177480446, iParam1))
	{
		iVar0 = 3;
	}
	else if (unk_0x6C297174CFC8C5B2(iParam0, -1347486026, iParam1))
	{
		iVar0 = 4;
	}
	else if (unk_0x6C297174CFC8C5B2(iParam0, -1655154167, iParam1))
	{
		iVar0 = 5;
	}
	else if (unk_0x6C297174CFC8C5B2(iParam0, -2105858993, iParam1))
	{
		iVar0 = 6;
	}
	else if (unk_0x6C297174CFC8C5B2(iParam0, 1893564692, iParam1))
	{
		iVar0 = 7;
	}
	else if (unk_0x6C297174CFC8C5B2(iParam0, 1710451520, iParam1))
	{
		iVar0 = 8;
	}
	else if (unk_0x6C297174CFC8C5B2(iParam0, 1416808511, iParam1))
	{
		iVar0 = 9;
	}
	else if (unk_0x6C297174CFC8C5B2(iParam0, 1641506460, iParam1))
	{
		iVar0 = 10;
	}
	else if (unk_0x6C297174CFC8C5B2(iParam0, 699233865, iParam1))
	{
		iVar0 = 11;
	}
	else if (unk_0x6C297174CFC8C5B2(iParam0, 393400788, iParam1))
	{
		iVar0 = 12;
	}
	else if (unk_0x6C297174CFC8C5B2(iParam0, 216120498, iParam1))
	{
		iVar0 = 13;
	}
	return iVar0;
}

int func_344(int iParam0)//Position - 0x30887
{
	if (unk_0x6C297174CFC8C5B2(unk_0xE1AE92097550A727(iParam0, 4, unk_0x4CDD2D1D66ED1DE4(iParam0, 4), unk_0xDCC2BD4C56470D10(iParam0, 4)), 1052059919, 0))
	{
		return 1;
	}
	return 0;
}

int func_345(int iParam0, int iParam1)//Position - 0x308B6
{
	if (iParam1 > 61)
	{
		return 61;
	}
	if (iParam1 == 53 || iParam1 == 54)
	{
		return 61;
	}
	if (iParam1 > 51)
	{
		return 51;
	}
	if (iParam1 > 46)
	{
		return 51;
	}
	if (iParam1 > 26)
	{
		return 50;
	}
	if (iParam1 > 0)
	{
		return 49;
	}
	return 48;
}

int func_346(int iParam0, int iParam1, int iParam2)//Position - 0x30925
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	var uVar8;
	var uVar9;
	int iVar10;
	var uVar11;
	int iVar12;
	int iVar13;
	var uVar14;
	var uVar15;
	int iVar16;
	struct<5> Var17;
	var uVar18;
	
	if (unk_0x3AB6A1A9084FB0A4(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0x82FF3DFBC3965CC0(iParam0);
	Global_70671[1 /*14*/] = { func_444(iVar0, iParam1, iParam2) };
	uVar2 = Global_2621444;
	uVar3 = Global_2621445;
	if (!unk_0xC80D31E4B587871C(Global_70671[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (iParam1 == 12)
	{
		uVar8 = { func_297(iVar0, iParam2) };
		iVar7 = 0;
		while (iVar7 < 7)
		{
			switch (iVar7)
			{
				case 0:
					iVar4 = 1;
					break;
				
				case 1:
					iVar4 = 4;
					break;
				
				case 2:
					iVar4 = 6;
					break;
				
				case 3:
					iVar4 = 7;
					break;
				
				case 4:
					iVar4 = 8;
					break;
				
				case 5:
					iVar4 = 11;
					break;
				
				case 6:
					iVar4 = 13;
					break;
			}
			if (uVar8[iVar4] != -99)
			{
				if (!func_346(iParam0, iVar4, uVar8[iVar4]))
				{
					Global_2621444 = uVar2;
					Global_2621445 = uVar3;
					return 0;
					if (iVar4 == 13)
					{
						uVar9 = { func_291(iVar0, uVar8[iVar4]) };
						iVar5 = 0;
						while (iVar5 <= 8)
						{
							if (!func_346(iParam0, 14, uVar9[iVar5]))
							{
								iVar6 = 0;
								while (iVar6 <= 19)
								{
									Global_70671[2 /*14*/] = { func_444(iVar0, 14, iVar6) };
									if (Global_70671[2 /*14*/].f_12 == iVar5)
									{
										if (func_346(iParam0, 14, iVar6))
										{
											if (!func_311(iVar0, iParam2, 14, iVar6, &uVar8, &(Global_70671[2 /*14*/])))
											{
												Global_2621444 = uVar2;
												Global_2621445 = uVar3;
												return 0;
											}
										}
									}
									iVar6++;
								}
							}
							iVar5++;
						}
					}
					else
					{
						iVar1 = func_304(iParam0, iVar4);
						Global_70671[2 /*14*/] = { func_444(iVar0, iVar4, iVar1) };
						if (!func_311(iVar0, iParam2, iVar4, iVar1, &uVar8, &(Global_70671[2 /*14*/])))
						{
							Global_2621444 = uVar2;
							Global_2621445 = uVar3;
							return 0;
						}
					}
				}
			}
			iVar7++;
		}
		if ((uVar8[10] != 0 && uVar8[10] != 1849449579) && uVar8.f_16)
		{
			if (func_225(1754, Global_70668, 0) != uVar8[10])
			{
				Global_2621444 = uVar2;
				Global_2621445 = uVar3;
				return 0;
			}
		}
		Global_2621444 = uVar2;
		Global_2621445 = uVar3;
		return 1;
	}
	else if (iParam1 == 13)
	{
		uVar11 = { func_291(iVar0, iParam2) };
		iVar10 = 0;
		while (iVar10 <= 8)
		{
			if (!func_346(iParam0, 14, uVar11[iVar10]))
			{
				return 0;
			}
			iVar10++;
		}
		return 1;
	}
	else if (iParam1 == 14)
	{
		if (unk_0x742D2DEFFDC66EB8(iParam0, Global_70671[1 /*14*/].f_12) == Global_70671[1 /*14*/].f_3 && (unk_0xC563C871267881C4(iParam0, Global_70671[1 /*14*/].f_12) == Global_70671[1 /*14*/].f_4 || Global_70671[1 /*14*/].f_3 == -1))
		{
			return 1;
		}
		if (((Global_70671[1 /*14*/].f_12 == 0 && unk_0xC80D31E4B587871C(Global_70671[1 /*14*/].f_6, 6)) && unk_0x6C297174CFC8C5B2(Global_2621444, -1033433901, 1)) && unk_0x299BD3B2DAAE7526(Global_2621444) > 0)
		{
			iVar16 = unk_0x299BD3B2DAAE7526(Global_2621444);
			iVar12 = 0;
			while (iVar12 < iVar16)
			{
				unk_0xCCCB91859C614F91(Global_2621444, iVar12, &iVar13, &uVar14, &uVar15);
				if (iVar13 != 0 && iVar13 != 1849449579)
				{
					unk_0x92C15BF999ED89EE(&Var17);
					unk_0x16327A71AB47E5CD(iVar13, &Var17);
					if (Var17.f_3 == unk_0x742D2DEFFDC66EB8(iParam0, Global_70671[1 /*14*/].f_12) && Var17.f_4 == unk_0xC563C871267881C4(iParam0, Global_70671[1 /*14*/].f_12))
					{
						return 1;
					}
				}
				iVar12++;
			}
		}
	}
	else
	{
		if (Global_70671[1 /*14*/].f_3 == unk_0x4CDD2D1D66ED1DE4(iParam0, func_234(iParam1)) && Global_70671[1 /*14*/].f_4 == unk_0xDCC2BD4C56470D10(iParam0, func_234(iParam1)))
		{
			return 1;
		}
		if (iParam1 == 4)
		{
			Global_70670++;
			if (Global_70670 == 1)
			{
				if (func_334(iVar0, 11, func_304(iParam0, 11), -1))
				{
					if (func_332(iVar0, 4, iParam2, &uVar18))
					{
						return func_346(iParam0, 4, uVar18);
					}
				}
				else if (func_331(iVar0, 4, iParam2, &uVar18))
				{
					return func_346(iParam0, 4, uVar18);
				}
			}
			Global_70670 = (Global_70670 - 1);
		}
	}
	return 0;
}

int func_347(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x30D82
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	var uVar10;
	int iVar11;
	
	if (func_344(iParam0))
	{
		return -99;
	}
	if (func_348(iParam0))
	{
		return -99;
	}
	if (iParam2 == 11)
	{
		if (iParam1 == joaat("mp_m_freemode_01"))
		{
			if (((((iParam3 >= 0 && iParam3 <= 15) || (iParam3 >= 16 && iParam3 <= 31)) || (iParam3 >= 80 && iParam3 <= 95)) || (iParam3 >= 140 && iParam3 <= 155)) || (iParam3 >= 188 && iParam3 <= 203))
			{
				return 1;
			}
			else if (iParam3 >= 32 && iParam3 <= 47)
			{
				return 6;
			}
			else if (((iParam3 >= 48 && iParam3 <= 63) || (iParam3 >= 64 && iParam3 <= 79)) || (iParam3 >= 108 && iParam3 <= 123))
			{
				return 11;
			}
			else if (iParam3 >= 96 && iParam3 <= 107)
			{
				return 41;
			}
			else if (iParam3 >= 156 && iParam3 <= 171)
			{
				return 36;
			}
			else if (iParam3 >= 172 && iParam3 <= 187)
			{
				return 31;
			}
			else if (iParam3 >= 204 && iParam3 <= 219)
			{
				return 16;
			}
			else if ((iParam3 >= 220 && iParam3 <= 235) || (iParam3 >= 124 && iParam3 <= 139))
			{
				return 26;
			}
			else if (iParam3 == 236)
			{
				return 21;
			}
			else if (iParam3 >= 237)
			{
				iVar0 = func_313(iParam1, iParam3, 11, 3);
				if (iVar0 != -1)
				{
					iVar1 = unk_0x88B561883D9520BE(iVar0);
					iVar2 = 0;
					while (iVar2 < iVar1)
					{
						unk_0xCE86001874B11267(iVar0, iVar2, &iVar3, &uVar4, &iVar5);
						if (iVar5 == 9)
						{
							if (iVar3 != 0 && iVar3 != 1849449579)
							{
								return func_293(iParam1, iVar3, 9, 3);
							}
							else
							{
								return uVar4;
							}
						}
						iVar2++;
					}
				}
				return -99;
			}
		}
		else if (iParam1 == joaat("mp_f_freemode_01"))
		{
			if ((((((iParam3 >= 0 && iParam3 <= 15) || (iParam3 >= 64 && iParam3 <= 79)) || (iParam3 >= 176 && iParam3 <= 191)) || (iParam3 >= 192 && iParam3 <= 207)) || (iParam3 >= 208 && iParam3 <= 223)) || (iParam3 >= 240 && iParam3 <= 255))
			{
				return 1;
			}
			else if (((iParam3 >= 16 && iParam3 <= 31) || (iParam3 >= 112 && iParam3 <= 127)) || (iParam3 >= 128 && iParam3 <= 143))
			{
				return 16;
			}
			else if (iParam3 >= 32 && iParam3 <= 47)
			{
				return 6;
			}
			else if (iParam3 >= 48 && iParam3 <= 63)
			{
				return 11;
			}
			else if ((iParam3 >= 96 && iParam3 <= 111) || (iParam3 >= 160 && iParam3 <= 175))
			{
				return 21;
			}
			else if (iParam3 >= 224 && iParam3 <= 239)
			{
				return 26;
			}
			else if (iParam3 >= 144 && iParam3 <= 159)
			{
				return 0;
			}
			else if (iParam3 >= 80 && iParam3 <= 95)
			{
				return 31;
			}
			else if (iParam3 >= 256)
			{
				iVar6 = func_313(iParam1, iParam3, 11, 4);
				if (iVar6 != -1)
				{
					iVar7 = unk_0x88B561883D9520BE(iVar6);
					iVar8 = 0;
					while (iVar8 < iVar7)
					{
						unk_0xCE86001874B11267(iVar6, iVar8, &iVar9, &uVar10, &iVar11);
						if (iVar11 == 9)
						{
							if (iVar9 != 0 && iVar9 != 1849449579)
							{
								return func_293(iParam1, iVar9, 9, 4);
							}
							else
							{
								return uVar10;
							}
						}
						iVar8++;
					}
				}
				return -99;
			}
		}
	}
	return -99;
}

int func_348(int iParam0)//Position - 0x311A1
{
	if (unk_0x6C297174CFC8C5B2(unk_0xE1AE92097550A727(iParam0, 8, unk_0x4CDD2D1D66ED1DE4(iParam0, 8), unk_0xDCC2BD4C56470D10(iParam0, 8)), -2124629577, 0))
	{
		return 1;
	}
	return 0;
}

int func_349(int iParam0)//Position - 0x311D3
{
	int iVar0;
	
	if (!unk_0x3AB6A1A9084FB0A4(iParam0))
	{
		iVar0 = unk_0x82FF3DFBC3965CC0(iParam0);
		if (iVar0 == joaat("mp_m_freemode_01"))
		{
			if (unk_0x4CDD2D1D66ED1DE4(iParam0, 9) != 0)
			{
				return 1;
			}
		}
		else if (iVar0 == joaat("mp_f_freemode_01"))
		{
			if (unk_0x4CDD2D1D66ED1DE4(iParam0, 9) != 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_350(int iParam0, int iParam1)//Position - 0x31225
{
	struct<10> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	bool bVar10;
	int iVar11;
	
	if (!unk_0x5507A29F391CCC1F(iParam0))
	{
	}
	unk_0x5AC6011E8B92FAC1(iParam0, &Var0);
	iVar1 = func_225(2092, iParam1, 0);
	iVar2 = func_225(2093, iParam1, 0);
	iVar3 = func_225(2094, iParam1, 0);
	iVar4 = func_225(2095, iParam1, 0);
	iVar5 = func_225(2096, iParam1, 0);
	iVar6 = func_225(2097, iParam1, 0);
	fVar7 = func_366(134, iParam1);
	fVar8 = func_366(135, iParam1);
	fVar9 = func_366(136, iParam1);
	bVar10 = func_323(160, iParam1);
	if (((((((((Var0 != iVar1 || Var0.f_1 != iVar2) || Var0.f_2 != iVar3) || Var0.f_3 != iVar4) || Var0.f_4 != iVar5) || Var0.f_5 != iVar6) || Var0.f_6 != fVar7) || Var0.f_7 != fVar8) || Var0.f_8 != fVar9) || Var0.f_9 != bVar10)
	{
		unk_0x64A3137B87FA03C0(iParam0, iVar1, iVar2, iVar3, iVar4, iVar5, iVar6, fVar7, fVar8, fVar9, bVar10);
		iVar11 = func_225(2098, iParam1, 0);
		if (iVar11 > 0)
		{
			func_351(iParam0, iParam1, 0);
		}
	}
}

void func_351(int iParam0, int iParam1, bool bParam2)//Position - 0x31365
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	float fVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	
	iVar0 = 0;
	while (iVar0 < 20)
	{
		iVar1 = iVar0;
		iVar2 = func_365(iVar1);
		if (!bParam2)
		{
			fVar3 = func_366(iVar2, iParam1);
		}
		else
		{
			fVar3 = func_364(iVar2, iParam1);
		}
		unk_0xE72080A9CD807C97(iParam0, iVar1, fVar3);
		iVar0++;
	}
	iVar4 = 0;
	while (iVar4 < 13)
	{
		iVar5 = func_363(iVar4);
		iVar6 = func_362(iVar5);
		iVar7 = func_361(iVar5);
		if (iVar6 != -1 && iVar7 != -1)
		{
			if (!bParam2)
			{
				iVar10 = func_358(iVar6, iParam1, -1);
				fVar11 = func_366(iVar7, iParam1);
			}
			else
			{
				iVar10 = func_357(iVar6, iParam1);
				fVar11 = func_364(iVar7, iParam1);
			}
			unk_0x8C329427621752BF(iParam0, iVar5, iVar10, fVar11);
			iVar8 = func_356(iVar5);
			iVar9 = func_355(iVar5);
			if (iVar8 != -1)
			{
				if (!bParam2)
				{
					iVar13 = func_225(iVar8, iParam1, 0);
					iVar14 = func_225(iVar9, iParam1, 0);
				}
				else
				{
					iVar13 = func_354(iVar8, iParam1);
					iVar14 = func_354(iVar9, iParam1);
				}
				func_353(iVar13, &iVar12, &iVar15);
				unk_0x7395988BBE102146(iParam0, iVar5, iVar15, iVar12, iVar14);
			}
		}
		iVar4++;
	}
	func_352(&iParam0, iParam1, bParam2);
}

void func_352(int iParam0, int iParam1, bool bParam2)//Position - 0x31497
{
	float fVar0;
	
	if (!bParam2)
	{
		fVar0 = func_366(157, iParam1);
	}
	else
	{
		fVar0 = func_364(157, iParam1);
	}
	if (*iParam0 == unk_0xFC1458A37D98B502())
	{
	}
	unk_0xB78817FBDFAB7608(*iParam0, system::round(fVar0));
}

void func_353(int iParam0, var uParam1, var uParam2)//Position - 0x314D6
{
	int iVar0;
	
	*uParam1 = system::shift_right(iParam0, 16);
	iVar0 = iParam0 & 65535;
	*uParam2 = iVar0;
}

int func_354(int iParam0, int iParam1)//Position - 0x314F7
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2523060[iParam0 /*3*/][func_226(iParam1)];
	if (unk_0x524D460A1E843912(uVar0, &uVar1))
	{
		return uVar1;
	}
	return 0;
}

int func_355(int iParam0)//Position - 0x31522
{
	switch (iParam0)
	{
		case 2:
			return 2156;
		
		case 1:
			return 2157;
		
		case 5:
			return 2158;
		
		case 8:
			return 2159;
		
		case 10:
			return 2154;
		
		default:
	}
	return -1;
}

int func_356(int iParam0)//Position - 0x3156E
{
	switch (iParam0)
	{
		case 2:
			return 2149;
		
		case 1:
			return 2150;
		
		case 5:
			return 2151;
		
		case 8:
			return 2152;
		
		case 10:
			return 2153;
		
		default:
	}
	return -1;
}

int func_357(int iParam0, int iParam1)//Position - 0x315BA
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_227();
	}
	iVar1 = 0;
	iVar2 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar1 = unk_0xDDC64F790F77A7E2((iParam0 - 384), 0, 1, iParam1);
		iVar2 = ((iParam0 - 384) - unk_0x05D1B2AB3DEB3094((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar1 = unk_0xDDC64F790F77A7E2((iParam0 - 457), 1, 1, iParam1);
		iVar2 = ((iParam0 - 457) - unk_0x05D1B2AB3DEB3094((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar1 = unk_0xDDC64F790F77A7E2((iParam0 - 1281), 0, 0, 0);
		iVar2 = ((iParam0 - 1281) - unk_0x05D1B2AB3DEB3094((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar1 = unk_0xDDC64F790F77A7E2((iParam0 - 1305), 1, 0, 0);
		iVar2 = ((iParam0 - 1305) - unk_0x05D1B2AB3DEB3094((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar1 = unk_0x51999F13DC0B6E31((iParam0 - 1393), 0, 1, iParam1);
		iVar2 = ((iParam0 - 1393) - unk_0x05D1B2AB3DEB3094((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar1 = unk_0x51999F13DC0B6E31((iParam0 - 1361), 0, 0, 0);
		iVar2 = ((iParam0 - 1361) - unk_0x05D1B2AB3DEB3094((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar1 = unk_0xF7C9F48C0D054EBF((iParam0 - 3879), 0, 1, iParam1, "_NGPSTAT_INT");
		iVar2 = ((iParam0 - 3879) - unk_0x05D1B2AB3DEB3094((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar1 = unk_0xF7C9F48C0D054EBF((iParam0 - 4143), 0, 0, 0, "_MP_NGPSTAT_INT");
		iVar2 = ((iParam0 - 4143) - unk_0x05D1B2AB3DEB3094((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar1 = unk_0xF7C9F48C0D054EBF((iParam0 - 4399), 0, 1, iParam1, "_MP_LRPSTAT_INT");
		iVar2 = ((iParam0 - 4399) - unk_0x05D1B2AB3DEB3094((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar1 = unk_0xF7C9F48C0D054EBF((iParam0 - 6413), 0, 1, iParam1, "_MP_APAPSTAT_INT");
		iVar2 = ((iParam0 - 6413) - unk_0x05D1B2AB3DEB3094((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar1 = unk_0xF7C9F48C0D054EBF((iParam0 - 7262), 0, 1, iParam1, "_MP_LR2PSTAT_INT");
		iVar2 = ((iParam0 - 7262) - unk_0x05D1B2AB3DEB3094((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar1 = unk_0xF7C9F48C0D054EBF((iParam0 - 7681), 0, 1, iParam1, "_MP_BIKEPSTAT_INT");
		iVar2 = ((iParam0 - 7681) - unk_0x05D1B2AB3DEB3094((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar1 = unk_0xF7C9F48C0D054EBF((iParam0 - 9553), 0, 1, iParam1, "_MP_IMPEXPPSTAT_INT");
		iVar2 = ((iParam0 - 9553) - unk_0x05D1B2AB3DEB3094((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar1 = unk_0xF7C9F48C0D054EBF((iParam0 - 15265), 0, 1, iParam1, "_MP_GUNRPSTAT_INT");
		iVar2 = ((iParam0 - 15265) - unk_0x05D1B2AB3DEB3094((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar1 = unk_0xF7C9F48C0D054EBF((iParam0 - 7641), 0, 1, iParam1, "_NGDLCPSTAT_INT");
		iVar2 = ((iParam0 - 7641) - unk_0x05D1B2AB3DEB3094((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar1 = unk_0xF7C9F48C0D054EBF((iParam0 - 7313), 0, 0, 0, "_MP_NGDLCPSTAT_INT");
		iVar2 = ((iParam0 - 7313) - unk_0x05D1B2AB3DEB3094((iParam0 - 7313)) * 8) * 8;
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar1 = unk_0xF7C9F48C0D054EBF((iParam0 - 16010), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_INT");
		iVar2 = ((iParam0 - 16010) - unk_0x05D1B2AB3DEB3094((iParam0 - 16010)) * 8) * 8;
	}
	else if (iParam0 >= 18162 && iParam0 < 19016)
	{
		iVar1 = unk_0xF7C9F48C0D054EBF((iParam0 - 18162), 0, 1, iParam1, "_GANGOPSPSTAT_INT");
		iVar2 = ((iParam0 - 18162) - unk_0x05D1B2AB3DEB3094((iParam0 - 18162)) * 8) * 8;
	}
	if (!unk_0xCF0A1C49425E8F8B(iVar1, &iVar0, iVar2, 8))
	{
		iVar0 = 0;
	}
	if (iParam0 == 384)
	{
	}
	return iVar0;
}

int func_358(int iParam0, int iParam1, int iParam2)//Position - 0x31A78
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam1 == -1)
	{
		iParam1 = func_227();
	}
	iVar0 = 0;
	iVar1 = func_360(iParam0, iParam1);
	iVar2 = func_359(iParam0);
	if (0 != iVar1)
	{
		if (!unk_0xB1AF044156BFE093(iVar1, &iVar0, iVar2, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_359(int iParam0)//Position - 0x31ABE
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = ((iParam0 - 384) - unk_0x05D1B2AB3DEB3094((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = ((iParam0 - 457) - unk_0x05D1B2AB3DEB3094((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = ((iParam0 - 1281) - unk_0x05D1B2AB3DEB3094((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = ((iParam0 - 1305) - unk_0x05D1B2AB3DEB3094((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = ((iParam0 - 1361) - unk_0x05D1B2AB3DEB3094((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = ((iParam0 - 1393) - unk_0x05D1B2AB3DEB3094((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = ((iParam0 - 4143) - unk_0x05D1B2AB3DEB3094((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = ((iParam0 - 3879) - unk_0x05D1B2AB3DEB3094((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = ((iParam0 - 4399) - unk_0x05D1B2AB3DEB3094((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = ((iParam0 - 6413) - unk_0x05D1B2AB3DEB3094((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = ((iParam0 - 7262) - unk_0x05D1B2AB3DEB3094((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = ((iParam0 - 7681) - unk_0x05D1B2AB3DEB3094((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = ((iParam0 - 9553) - unk_0x05D1B2AB3DEB3094((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = ((iParam0 - 15265) - unk_0x05D1B2AB3DEB3094((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = ((iParam0 - 7313) - unk_0x05D1B2AB3DEB3094((iParam0 - 7313)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = ((iParam0 - 7641) - unk_0x05D1B2AB3DEB3094((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = ((iParam0 - 16010) - unk_0x05D1B2AB3DEB3094((iParam0 - 16010)) * 8) * 8;
	}
	else if (iParam0 >= 18162 && iParam0 < 19016)
	{
		iVar0 = ((iParam0 - 18162) - unk_0x05D1B2AB3DEB3094((iParam0 - 18162)) * 8) * 8;
	}
	return iVar0;
}

int func_360(int iParam0, int iParam1)//Position - 0x31E04
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_227();
	}
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = unk_0xDDC64F790F77A7E2((iParam0 - 384), 0, 1, iParam1);
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = unk_0xDDC64F790F77A7E2((iParam0 - 457), 1, 1, iParam1);
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = unk_0xDDC64F790F77A7E2((iParam0 - 1281), 0, 0, 0);
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = unk_0xDDC64F790F77A7E2((iParam0 - 1305), 1, 0, 0);
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = unk_0x51999F13DC0B6E31((iParam0 - 1361), 0, 0, 0);
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = unk_0x51999F13DC0B6E31((iParam0 - 1393), 0, 1, iParam1);
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = unk_0xF7C9F48C0D054EBF((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = unk_0xF7C9F48C0D054EBF((iParam0 - 3879), 0, 1, iParam1, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = unk_0xF7C9F48C0D054EBF((iParam0 - 4399), 0, 1, iParam1, "_LRPSTAT_INT");
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = unk_0xF7C9F48C0D054EBF((iParam0 - 6413), 0, 1, iParam1, "_APAPSTAT_INT");
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = unk_0xF7C9F48C0D054EBF((iParam0 - 7262), 0, 1, iParam1, "_LR2PSTAT_INT");
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = unk_0xF7C9F48C0D054EBF((iParam0 - 7681), 0, 1, iParam1, "_BIKEPSTAT_INT");
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = unk_0xF7C9F48C0D054EBF((iParam0 - 9553), 0, 1, iParam1, "_IMPEXPPSTAT_INT");
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = unk_0xF7C9F48C0D054EBF((iParam0 - 15265), 0, 1, iParam1, "_GUNRPSTAT_INT");
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = unk_0xF7C9F48C0D054EBF((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = unk_0xF7C9F48C0D054EBF((iParam0 - 7641), 0, 1, iParam1, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = unk_0xF7C9F48C0D054EBF((iParam0 - 16010), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_INT");
	}
	else if (iParam0 >= 18162 && iParam0 < 19016)
	{
		iVar0 = unk_0xF7C9F48C0D054EBF((iParam0 - 18162), 0, 1, iParam1, "_GANGOPSPSTAT_INT");
	}
	return iVar0;
}

int func_361(int iParam0)//Position - 0x32103
{
	switch (iParam0)
	{
		case 3:
			return 90;
		
		case 7:
			return 93;
		
		case 0:
			return 87;
		
		case 6:
			return 92;
		
		case 2:
			return 89;
		
		case 1:
			return 88;
		
		case 4:
			return 91;
		
		case 8:
			return 158;
		
		case 9:
			return 159;
		
		case 5:
			return 160;
		
		case 10:
			return 163;
		
		case 11:
			return 161;
		
		case 12:
			return 162;
		
		default:
	}
	return -1;
}

int func_362(int iParam0)//Position - 0x321A2
{
	switch (iParam0)
	{
		case 3:
			return 450;
		
		case 7:
			return 453;
		
		case 0:
			return 447;
		
		case 6:
			return 452;
		
		case 2:
			return 449;
		
		case 1:
			return 448;
		
		case 4:
			return 451;
		
		case 8:
			return 3940;
		
		case 9:
			return 3941;
		
		case 5:
			return 3942;
		
		case 10:
			return 3943;
		
		case 11:
			return 3944;
		
		case 12:
			return 3945;
		
		default:
	}
	return -1;
}

int func_363(int iParam0)//Position - 0x3224E
{
	switch (iParam0)
	{
		case 0:
			return 7;
		
		case 1:
			return 3;
		
		case 2:
			return 9;
		
		case 3:
			return 6;
		
		case 4:
			return 0;
		
		case 5:
			return 4;
		
		case 6:
			return 5;
		
		case 7:
			return 2;
		
		case 8:
			return 1;
		
		case 9:
			return 8;
		
		case 10:
			return 10;
		
		case 11:
			return 11;
		
		case 12:
			return 12;
		
		default:
	}
	return -1;
}

float func_364(int iParam0, int iParam1)//Position - 0x322E5
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2546677[iParam0 /*3*/][func_226(iParam1)];
	if (unk_0x1E82F70471F8870F(uVar0, &uVar1))
	{
		return uVar1;
	}
	return 0f;
}

int func_365(int iParam0)//Position - 0x32310
{
	switch (iParam0)
	{
		case 0:
			return 137;
		
		case 1:
			return 138;
		
		case 2:
			return 139;
		
		case 3:
			return 140;
		
		case 4:
			return 141;
		
		case 5:
			return 142;
		
		case 6:
			return 143;
		
		case 7:
			return 144;
		
		case 8:
			return 145;
		
		case 9:
			return 146;
		
		case 10:
			return 147;
		
		case 11:
			return 148;
		
		case 12:
			return 149;
		
		case 13:
			return 150;
		
		case 14:
			return 151;
		
		case 15:
			return 152;
		
		case 16:
			return 153;
		
		case 17:
			return 154;
		
		case 18:
			return 155;
		
		case 19:
			return 156;
		
		default:
	}
	return -1;
}

float func_366(int iParam0, int iParam1)//Position - 0x323FC
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_2546677[iParam0 /*3*/][func_226(iParam1)];
	if (unk_0xBF9EAA044015B0A2(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0f;
}

int func_367(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)//Position - 0x32428
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	struct<7> Var21;
	int iVar22;
	
	if (iParam0 == joaat("mp_m_freemode_01"))
	{
		iVar1 = -1;
		iVar2 = -1;
		if (Global_4264635 == iParam1)
		{
			iVar2 = Global_4264634;
			iVar1 = Global_4264633;
		}
		else if (iParam1 >= 92)
		{
			iVar2 = func_313(iParam0, iParam1, 7, 3);
			iVar1 = func_417(iVar2);
			Global_4264635 = iParam1;
			Global_4264634 = iVar2;
			Global_4264633 = iVar1;
		}
		iVar3 = -1;
		iVar4 = -1;
		if (Global_4264638 == iParam3)
		{
			iVar4 = Global_4264637;
			iVar3 = Global_4264636;
		}
		else if (iParam3 >= 237)
		{
			iVar4 = func_313(iParam0, iParam3, 11, 3);
			iVar3 = func_417(iVar4);
			Global_4264638 = iParam3;
			Global_4264637 = iVar4;
			Global_4264636 = iVar3;
		}
		iVar5 = -1;
		iVar6 = -1;
		if (Global_4264641 == iParam4)
		{
			iVar6 = Global_4264640;
			iVar5 = Global_4264639;
		}
		else if (iParam4 >= 241)
		{
			iVar6 = func_313(iParam0, iParam4, 8, 3);
			iVar5 = func_417(iVar6);
			Global_4264641 = iParam4;
			Global_4264640 = iVar6;
			Global_4264639 = iVar5;
		}
		iVar7 = -1;
		iVar8 = -1;
		if (Global_4264644 == iParam10)
		{
			iVar8 = Global_4264643;
			iVar7 = Global_4264642;
		}
		else if (iParam10 >= 26)
		{
			iVar8 = func_313(iParam0, iParam10, 1, 3);
			iVar7 = func_417(iVar8);
			Global_4264644 = iParam10;
			Global_4264643 = iVar8;
			Global_4264642 = iVar7;
		}
		if (iParam3 != -99)
		{
			if ((unk_0x6C297174CFC8C5B2(iVar4, -1855618474, 0) || unk_0x6C297174CFC8C5B2(iVar4, 351511157, 0)) || unk_0x6C297174CFC8C5B2(iVar4, -1420825402, 0))
			{
				if (iParam1 != 0)
				{
					return 0;
				}
			}
		}
		if (iParam10 != -99)
		{
			if (unk_0x6C297174CFC8C5B2(iVar8, 1438931885, 0) && !unk_0x6C297174CFC8C5B2(iVar8, -973213642, 0))
			{
				if (iParam1 != 0)
				{
					return 0;
				}
			}
		}
		if (iParam3 != -99)
		{
			if (unk_0x6C297174CFC8C5B2(iVar4, -713698407, 0))
			{
				if (iParam1 != 0 && !(iVar2 != -1 && unk_0x6C297174CFC8C5B2(iVar2, -713698407, 0)))
				{
					return 0;
				}
			}
		}
		if (unk_0x6C297174CFC8C5B2(iVar2, -120244486, 0))
		{
			if (iParam9 != -99)
			{
				iVar9 = -1;
				if (iParam9 >= 327)
				{
					iVar9 = func_313(iParam0, iParam9, 14, 3);
				}
				if (((iParam9 >= 27 && iParam9 <= 34) || (iParam9 >= 75 && iParam9 <= 82)) || (iParam9 >= 107 && iParam9 <= 114))
				{
					return 0;
				}
				switch (iVar9)
				{
					case 1411612772:
					case 1399488226:
					case 1103092621:
					case 798340921:
					case 495850282:
					case -1972900644:
					case 2016102499:
					case 1719477511:
					case 288210625:
					case -882756821:
					case -1242625979:
					case -1358792084:
					case -1854813796:
					case -1257185072:
					case -75666008:
					case -451657514:
					case -1339992339:
					case -1987638855:
					case 1148780446:
					case 1379309694:
					case 491826867:
					case 1855607109:
					case -1962767847:
					case -1654116636:
					case -1485356286:
					case -1178212449:
					case -766633809:
					case 665568109:
					case -288304716:
					case 1772824957:
					case 1533381874:
					case -2012223930:
					case 2008237453:
					case -1304118613:
					case -1543430620:
					case -854101936:
					case -1061103709:
					case -616035151:
					case 1307111925:
					case 1759289928:
					case -1036580403:
					case -203035350:
					case 917598912:
					case 682284723:
					case 481083063:
					case 114660105:
					case 1897981854:
					case 1601455173:
					case 1932815241:
					case 1626031863:
					case 926585800:
						return 0;
						break;
					}
			}
			if (iParam10 != -99)
			{
				if (unk_0x6C297174CFC8C5B2(iVar8, 1438931885, 0))
				{
					return 0;
				}
			}
		}
		if (iParam3 != -99)
		{
			if (iVar2 != -1 && unk_0x6C297174CFC8C5B2(iVar2, -1473812293, 0))
			{
				if (unk_0x6C297174CFC8C5B2(iVar2, 1396865968, 0))
				{
					if (((((((((((((((((((((((((((((((((((((((((unk_0x6C297174CFC8C5B2(iVar4, -63750166, 0) || unk_0x6C297174CFC8C5B2(iVar4, -870074461, 0)) || unk_0x6C297174CFC8C5B2(iVar4, -868698159, 0)) || unk_0x6C297174CFC8C5B2(iVar4, 1769225721, 0)) || unk_0x6C297174CFC8C5B2(iVar4, -1834446747, 0)) || unk_0x6C297174CFC8C5B2(iVar4, -1119232689, 0)) || unk_0x6C297174CFC8C5B2(iVar4, -2102859770, 0)) || unk_0x6C297174CFC8C5B2(iVar4, 1784133476, 0)) || unk_0x6C297174CFC8C5B2(iVar4, 2099109084, 0)) || unk_0x6C297174CFC8C5B2(iVar4, -1488441032, 0)) || unk_0x6C297174CFC8C5B2(iVar4, -1719167561, 0)) || unk_0x6C297174CFC8C5B2(iVar4, -1274099003, 0)) || unk_0x6C297174CFC8C5B2(iVar4, -1410897066, 0)) || unk_0x6C297174CFC8C5B2(iVar4, 320460654, 0)) || unk_0x6C297174CFC8C5B2(iVar4, -826135203, 0)) || unk_0x6C297174CFC8C5B2(iVar4, 1431529976, 0)) || unk_0x6C297174CFC8C5B2(iVar4, 1723403459, 0)) || unk_0x6C297174CFC8C5B2(iVar4, 2044466679, 0)) || unk_0x6C297174CFC8C5B2(iVar4, -2020757158, 0)) || unk_0x6C297174CFC8C5B2(iVar4, -1064262817, 0)) || unk_0x6C297174CFC8C5B2(iVar4, -1419806467, 0)) || unk_0x6C297174CFC8C5B2(iVar4, -1053842259, 0)) || unk_0x6C297174CFC8C5B2(iVar4, -1358888880, 0)) || unk_0x6C297174CFC8C5B2(iVar4, -441291342, 0)) || unk_0x6C297174CFC8C5B2(iVar4, -785939537, 0)) || unk_0x6C297174CFC8C5B2(iVar4, -1507532917, 0)) || unk_0x6C297174CFC8C5B2(iVar4, -1446333198, 0)) || unk_0x6C297174CFC8C5B2(iVar4, 492620493, 0)) || unk_0x6C297174CFC8C5B2(iVar4, -416620954, 0)) || unk_0x6C297174CFC8C5B2(iVar4, -102825006, 0)) || unk_0x6C297174CFC8C5B2(iVar4, 137011325, 0)) || unk_0x6C297174CFC8C5B2(iVar4, -641612092, 0)) || unk_0x6C297174CFC8C5B2(iVar4, -1506370874, 0)) || unk_0x6C297174CFC8C5B2(iVar4, -1786447517, 0)) || unk_0x6C297174CFC8C5B2(iVar4, -1010805287, 0)) || unk_0x6C297174CFC8C5B2(iVar4, -1325813684, 0)) || unk_0x6C297174CFC8C5B2(iVar4, -549843760, 0)) || unk_0x6C297174CFC8C5B2(iVar4, 1690933245, 0)) || unk_0x6C297174CFC8C5B2(iVar4, 1360588936, 0)) || unk_0x6C297174CFC8C5B2(iVar4, 2136821028, 0)) || unk_0x6C297174CFC8C5B2(iVar4, 1830529185, 0)) || unk_0x6C297174CFC8C5B2(iVar4, 1927516484, 0))
					{
						return 0;
					}
					else if (func_369(iParam0, iParam3))
					{
					}
					else
					{
						return 0;
					}
				}
				else if (unk_0x6C297174CFC8C5B2(iVar4, -63750166, 0))
				{
					return 0;
				}
				else if (func_369(iParam0, iParam3))
				{
					return 0;
				}
				else if (unk_0x6C297174CFC8C5B2(iVar2, -120244486, 0))
				{
					if (((((((((((((iParam3 >= 188 && iParam3 <= 203) || (iParam3 >= 220 && iParam3 <= 235)) || iVar3 == 12) || iVar3 == 14) || unk_0x6C297174CFC8C5B2(iVar4, -1127835965, 0)) || unk_0x6C297174CFC8C5B2(iVar4, -1506370874, 0)) || unk_0x6C297174CFC8C5B2(iVar4, -1786447517, 0)) || unk_0x6C297174CFC8C5B2(iVar4, -1010805287, 0)) || unk_0x6C297174CFC8C5B2(iVar4, -1325813684, 0)) || unk_0x6C297174CFC8C5B2(iVar4, 1690933245, 0)) || unk_0x6C297174CFC8C5B2(iVar4, 1360588936, 0)) || unk_0x6C297174CFC8C5B2(iVar4, 2136821028, 0)) || unk_0x6C297174CFC8C5B2(iVar4, 1927516484, 0))
					{
						return 0;
					}
				}
				if (iParam10 != -99)
				{
					if (unk_0x6C297174CFC8C5B2(iVar8, 1438931885, 0))
					{
						return 0;
					}
				}
			}
			if (iVar2 != -1 && unk_0x6C297174CFC8C5B2(iVar2, -353070590, 0))
			{
				if (((unk_0x6C297174CFC8C5B2(iVar4, -870074461, 0) || unk_0x6C297174CFC8C5B2(iVar4, -868698159, 0)) || unk_0x6C297174CFC8C5B2(iVar4, 1769225721, 0)) || unk_0x6C297174CFC8C5B2(iVar4, -1834446747, 0))
				{
				}
				else
				{
					return 0;
				}
			}
		}
		if ((iVar2 != -1 && unk_0x6C297174CFC8C5B2(iVar2, -1473812293, 0)) || (iVar2 != -1 && unk_0x6C297174CFC8C5B2(iVar2, -319568873, 0)))
		{
			if (iParam11 != -99)
			{
				iVar10 = -1;
				if (iParam11 >= 256)
				{
					iVar10 = func_313(iParam0, iParam11, 4, 3);
				}
				if (unk_0x6C297174CFC8C5B2(iVar10, 1052059919, 0))
				{
					return 0;
				}
			}
		}
		if (iParam3 != -99)
		{
			if (iVar2 != -1 && unk_0x6C297174CFC8C5B2(iVar2, 654065530, 0))
			{
				if (unk_0x6C297174CFC8C5B2(iVar4, -7109286, 0) || unk_0x6C297174CFC8C5B2(iVar4, -641612092, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
		}
		if (iVar2 != -1 && unk_0x6C297174CFC8C5B2(iVar2, 596326873, 0))
		{
			if (iParam3 != -99)
			{
				if (unk_0x6C297174CFC8C5B2(iVar2, -319568873, 0))
				{
					if ((iParam3 >= 96 && iParam3 <= 107) || iVar3 == 6)
					{
						return 0;
					}
				}
				if (iParam3 == 236)
				{
					if (unk_0x6C297174CFC8C5B2(iVar2, 525778571, 0))
					{
						return 0;
					}
				}
				else if (((((((((((((((((((((((((((((((((((((((((((((((((((((((((iParam3 >= 172 && iParam3 <= 187) || (iParam3 >= 188 && iParam3 <= 203)) || (iParam3 >= 204 && iParam3 <= 219)) || (iParam3 >= 220 && iParam3 <= 235)) || iVar3 == 11) || iVar3 == 12) || iVar3 == 13) || iVar3 == 14) || unk_0x6C297174CFC8C5B2(iVar4, 974680318, 0)) || unk_0x6C297174CFC8C5B2(iVar4, 1625463492, 0)) || unk_0x6C297174CFC8C5B2(iVar4, -713698407, 0)) || unk_0x6C297174CFC8C5B2(iVar4, 1843965488, 0)) || unk_0x6C297174CFC8C5B2(iVar4, -779835469, 0)) || unk_0x6C297174CFC8C5B2(iVar4, -1086258388, 0)) || unk_0x6C297174CFC8C5B2(iVar4, 1627756587, 0)) || unk_0x6C297174CFC8C5B2(iVar4, 1021189127, 0)) || unk_0x6C297174CFC8C5B2(iVar4, -1939378450, 0)) || unk_0x6C297174CFC8C5B2(iVar4, 441715397, 0)) || unk_0x6C297174CFC8C5B2(iVar4, 264959411, 0)) || unk_0x6C297174CFC8C5B2(iVar4, -1127835965, 0)) || unk_0x6C297174CFC8C5B2(iVar4, 153792394, 0)) || unk_0x6C297174CFC8C5B2(iVar4, -672871169, 0)) || unk_0x6C297174CFC8C5B2(iVar4, 572416369, 0)) || unk_0x6C297174CFC8C5B2(iVar4, -196114988, 0)) || unk_0x6C297174CFC8C5B2(iVar4, 1322269404, 0)) || unk_0x6C297174CFC8C5B2(iVar4, 1769225721, 0)) || unk_0x6C297174CFC8C5B2(iVar4, -1655154167, 0)) || unk_0x6C297174CFC8C5B2(iVar4, -1607949555, 0)) || unk_0x6C297174CFC8C5B2(iVar4, 2099109084, 0)) || unk_0x6C297174CFC8C5B2(iVar4, -1488441032, 0)) || unk_0x6C297174CFC8C5B2(iVar4, -1719167561, 0)) || unk_0x6C297174CFC8C5B2(iVar4, 320460654, 0)) || unk_0x6C297174CFC8C5B2(iVar4, -2017999390, 0)) || unk_0x6C297174CFC8C5B2(iVar4, -1410897066, 0)) || unk_0x6C297174CFC8C5B2(iVar4, -826135203, 0)) || unk_0x6C297174CFC8C5B2(iVar4, 1431529976, 0)) || unk_0x6C297174CFC8C5B2(iVar4, 1723403459, 0)) || unk_0x6C297174CFC8C5B2(iVar4, 2044466679, 0)) || unk_0x6C297174CFC8C5B2(iVar4, -1419806467, 0)) || unk_0x6C297174CFC8C5B2(iVar4, -1053842259, 0)) || unk_0x6C297174CFC8C5B2(iVar4, -1358888880, 0)) || unk_0x6C297174CFC8C5B2(iVar4, -785939537, 0)) || unk_0x6C297174CFC8C5B2(iVar4, -416620954, 0)) || unk_0x6C297174CFC8C5B2(iVar4, -102825006, 0)) || unk_0x6C297174CFC8C5B2(iVar4, 137011325, 0)) || unk_0x6C297174CFC8C5B2(iVar4, -641612092, 0)) || unk_0x6C297174CFC8C5B2(iVar4, -1351486939, 0)) || unk_0x6C297174CFC8C5B2(iVar4, -491588875, 0)) || unk_0x6C297174CFC8C5B2(iVar4, -1506370874, 0)) || unk_0x6C297174CFC8C5B2(iVar4, -1786447517, 0)) || unk_0x6C297174CFC8C5B2(iVar4, -1010805287, 0)) || unk_0x6C297174CFC8C5B2(iVar4, -1325813684, 0)) || unk_0x6C297174CFC8C5B2(iVar4, -828478571, 0)) || unk_0x6C297174CFC8C5B2(iVar4, 1690933245, 0)) || unk_0x6C297174CFC8C5B2(iVar4, 2136821028, 0)) || unk_0x6C297174CFC8C5B2(iVar4, 2136821028, 0)) || unk_0x6C297174CFC8C5B2(iVar4, 1927516484, 0))
				{
					return 0;
				}
				else if (!unk_0x6C297174CFC8C5B2(iVar2, 525778571, 0))
				{
					return 0;
				}
			}
			else if (iParam4 != -99)
			{
				if ((((((((((((((((iParam4 >= 48 && iParam4 <= 63) || (iParam4 >= 64 && iParam4 <= 79)) || (iParam4 >= 96 && iParam4 <= 111)) || (iParam4 >= 112 && iParam4 <= 127)) || (iParam4 >= 192 && iParam4 <= 207)) || (iParam4 >= 208 && iParam4 <= 223)) || iVar5 == 3) || iVar5 == 4) || iVar5 == 6) || iVar5 == 7) || iVar5 == 12) || iVar5 == 13) || unk_0x6C297174CFC8C5B2(iVar6, 651155766, 0)) || unk_0x6C297174CFC8C5B2(iVar6, 974680318, 0)) || unk_0x6C297174CFC8C5B2(iVar6, -1786447517, 0)) || unk_0x6C297174CFC8C5B2(iVar6, -1010805287, 0))
				{
					return 0;
				}
			}
		}
		if (iVar2 != -1 && unk_0x6C297174CFC8C5B2(iVar2, -319568873, 0))
		{
			if (iParam8 != -99)
			{
				return 0;
			}
		}
		if (iVar2 != -1 && unk_0x6C297174CFC8C5B2(iVar2, -713698407, 0))
		{
			if (iParam9 >= 327 && unk_0x6C297174CFC8C5B2(func_313(iParam0, iParam9, 14, 3), -713698407, 1))
			{
			}
			else if (iParam2 == 14 || (iParam2 == 1 && iParam10 != 0))
			{
				return 0;
			}
		}
		else if ((iParam9 >= 327 && unk_0x6C297174CFC8C5B2(func_313(iParam0, iParam9, 14, 3), -713698407, 1)) && iParam1 != 0)
		{
			return 0;
		}
		if (iVar2 != -1 && unk_0x6C297174CFC8C5B2(iVar2, -1119006951, 0))
		{
			if (iParam3 != -99)
			{
				if (((((((((((((((((((((((((((((((((((((((((((iParam3 >= 140 && iParam3 <= 155) || (iParam3 >= 188 && iParam3 <= 203)) || (iParam3 >= 204 && iParam3 <= 219)) || (iParam3 >= 220 && iParam3 <= 235)) || iVar3 == 9) || iVar3 == 12) || iVar3 == 13) || iVar3 == 14) || unk_0x6C297174CFC8C5B2(iVar4, 248194463, 0)) || unk_0x6C297174CFC8C5B2(iVar4, 572350888, 0)) || unk_0x6C297174CFC8C5B2(iVar4, -1817355735, 0)) || unk_0x6C297174CFC8C5B2(iVar4, -713698407, 0)) || unk_0x6C297174CFC8C5B2(iVar4, 1843965488, 0)) || unk_0x6C297174CFC8C5B2(iVar4, 140732128, 0)) || unk_0x6C297174CFC8C5B2(iVar4, 1863955539, 0)) || unk_0x6C297174CFC8C5B2(iVar4, 1627756587, 0)) || unk_0x6C297174CFC8C5B2(iVar4, 441715397, 0)) || unk_0x6C297174CFC8C5B2(iVar4, 153792394, 0)) || unk_0x6C297174CFC8C5B2(iVar4, 572416369, 0)) || unk_0x6C297174CFC8C5B2(iVar4, 2099109084, 0)) || unk_0x6C297174CFC8C5B2(iVar4, -1488441032, 0)) || unk_0x6C297174CFC8C5B2(iVar4, 1538937264, 0)) || unk_0x6C297174CFC8C5B2(iVar4, 2044466679, 0)) || unk_0x6C297174CFC8C5B2(iVar4, -1064262817, 0)) || unk_0x6C297174CFC8C5B2(iVar4, -1053842259, 0)) || unk_0x6C297174CFC8C5B2(iVar4, -1358888880, 0)) || unk_0x6C297174CFC8C5B2(iVar4, -441291342, 0)) || unk_0x6C297174CFC8C5B2(iVar4, -785939537, 0)) || unk_0x6C297174CFC8C5B2(iVar4, -641612092, 0)) || unk_0x6C297174CFC8C5B2(iVar4, -1506370874, 0)) || unk_0x6C297174CFC8C5B2(iVar4, -1786447517, 0)) || unk_0x6C297174CFC8C5B2(iVar4, -1010805287, 0)) || unk_0x6C297174CFC8C5B2(iVar4, -1325813684, 0)) || unk_0x6C297174CFC8C5B2(iVar4, -828478571, 0)) || unk_0x6C297174CFC8C5B2(iVar4, 1690933245, 0)) || unk_0x6C297174CFC8C5B2(iVar4, 1360588936, 0)) || unk_0x6C297174CFC8C5B2(iVar4, 2136821028, 0)) || unk_0x6C297174CFC8C5B2(iVar4, 602650322, 0)) || unk_0x6C297174CFC8C5B2(iVar4, -99064836, 0)) || unk_0x6C297174CFC8C5B2(iVar4, -148928294, 0)) || unk_0x6C297174CFC8C5B2(iVar4, 1927516484, 0)) || unk_0x6C297174CFC8C5B2(iVar4, -435539886, 0)) || unk_0x6C297174CFC8C5B2(iVar4, -1375878737, 0))
				{
					return 0;
				}
			}
			else if (iParam4 != -99)
			{
				if ((((((((((((((((((((((((iParam4 >= 48 && iParam4 <= 63) || (iParam4 >= 64 && iParam4 <= 79)) || (iParam4 >= 96 && iParam4 <= 111)) || (iParam4 >= 112 && iParam4 <= 127)) || (iParam4 >= 144 && iParam4 <= 159)) || (iParam4 >= 160 && iParam4 <= 175)) || (iParam4 >= 176 && iParam4 <= 191)) || (iParam4 >= 192 && iParam4 <= 207)) || (iParam4 >= 208 && iParam4 <= 223)) || iVar5 == 3) || iVar5 == 4) || iVar5 == 6) || iVar5 == 7) || iVar5 == 9) || iVar5 == 10) || iVar5 == 11) || iVar5 == 12) || iVar5 == 13) || unk_0x6C297174CFC8C5B2(iVar6, -1778265882, 0)) || unk_0x6C297174CFC8C5B2(iVar6, 1965569012, 0)) || unk_0x6C297174CFC8C5B2(iVar6, 651155766, 0)) || unk_0x6C297174CFC8C5B2(iVar6, -1914383230, 0)) || unk_0x6C297174CFC8C5B2(iVar6, 1553766533, 0)) || unk_0x6C297174CFC8C5B2(iVar6, 505220913, 0))
				{
					return 0;
				}
			}
		}
		if ((iParam1 >= 1 && iParam1 <= 3) || iVar1 == 1)
		{
			if (iParam5 != -99)
			{
				if (iParam5 != 15)
				{
					return 0;
				}
			}
			if (iParam3 != -99)
			{
				if (iParam3 != 236)
				{
					return 0;
				}
			}
			if (iVar4 != -1 && unk_0x6C297174CFC8C5B2(iVar4, 2066241403, 0))
			{
				return 0;
			}
		}
		else if ((iParam1 >= 4 && iParam1 <= 6) || iVar1 == 2)
		{
			if (iParam3 != -99)
			{
				if ((((((((((iParam3 >= 0 && iParam3 <= 15) || (iParam3 >= 16 && iParam3 <= 31)) || (iParam3 >= 32 && iParam3 <= 47)) || (iParam3 >= 80 && iParam3 <= 95)) || (iParam3 >= 124 && iParam3 <= 139)) || iVar3 == 0) || iVar3 == 1) || iVar3 == 2) || iVar3 == 5) || iVar3 == 8)
				{
				}
				else
				{
					return 0;
				}
			}
			else if (iParam4 != -99)
			{
				if ((((((((((((iParam4 >= 0 && iParam4 <= 15) || (iParam4 >= 16 && iParam4 <= 31)) || (iParam4 >= 32 && iParam4 <= 47)) || (iParam4 >= 80 && iParam4 <= 95)) || (iParam4 >= 128 && iParam4 <= 143)) || iParam4 == 240) || iVar5 == 0) || iVar5 == 1) || iVar5 == 2) || iVar5 == 5) || iVar5 == 8) || iVar5 == 15)
				{
				}
				else
				{
					return 0;
				}
			}
			else if (iParam8 != -99)
			{
				if (!(iParam8 >= 1 && iParam8 <= 41))
				{
				}
				else
				{
					return 0;
				}
			}
		}
		else if ((iParam1 >= 10 && iParam1 <= 25) || iVar1 == 4)
		{
			if (iParam3 != -99)
			{
				if ((((((((((((((((((iParam3 >= 0 && iParam3 <= 15) || (iParam3 >= 16 && iParam3 <= 31)) || (iParam3 >= 32 && iParam3 <= 47)) || (iParam3 >= 80 && iParam3 <= 95)) || (iParam3 >= 124 && iParam3 <= 139)) || (iParam3 >= 140 && iParam3 <= 155)) || (iParam3 >= 172 && iParam3 <= 187)) || (iParam3 >= 204 && iParam3 <= 219)) || iParam3 == 236) || iVar3 == 0) || iVar3 == 1) || iVar3 == 2) || iVar3 == 5) || iVar3 == 8) || iVar3 == 9) || iVar3 == 11) || iVar3 == 13) || iVar3 == 15)
				{
				}
				else
				{
					return 0;
				}
			}
		}
		else if ((iParam1 >= 32 && iParam1 <= 37) || iVar1 == 6)
		{
			if (iParam3 != -99)
			{
				if ((((iParam3 >= 96 && iParam3 <= 107) || (iParam3 >= 156 && iParam3 <= 171)) || iVar3 == 6) || iVar3 == 10)
				{
				}
				else
				{
					return 0;
				}
			}
		}
		else if (((((iParam1 >= 41 && iParam1 <= 56) || (iParam1 >= 73 && iParam1 <= 88)) || iVar1 == 10) || iVar1 == 12) || (iVar2 != -1 && unk_0x6C297174CFC8C5B2(iVar2, -920534092, 0)))
		{
			if (iParam3 != -99)
			{
				if (((iParam3 >= 204 && iParam3 <= 219) || func_421(iParam0, iParam3, -1)) || iVar3 == 13)
				{
					if (((unk_0x6C297174CFC8C5B2(iVar4, -1446333198, 0) || unk_0x6C297174CFC8C5B2(iVar4, 492620493, 0)) || unk_0x6C297174CFC8C5B2(iVar4, -1351486939, 0)) || unk_0x6C297174CFC8C5B2(iVar4, -7109286, 0))
					{
						return 0;
					}
				}
				else
				{
					return 0;
				}
			}
			else if (iParam4 != -99)
			{
				if ((((((iParam4 >= 160 && iParam4 <= 175) || (iParam4 >= 208 && iParam4 <= 223)) || iVar5 == 10) || iVar5 == 13) || (iVar6 != -1 && unk_0x6C297174CFC8C5B2(iVar6, -1778265882, 0))) || (iVar6 != -1 && unk_0x6C297174CFC8C5B2(iVar6, 505220913, 0)))
				{
				}
				else
				{
					iVar0 = func_304(iParam6, 11);
					if ((iVar0 >= 204 && iVar0 <= 219) || (iVar0 >= 237 && func_417(func_313(iParam0, iVar0, 11, 3)) == 13))
					{
						return 1;
					}
					if (iParam7 == 1)
					{
						if ((iParam4 >= 176 && iParam4 <= 191) || iVar5 == 11)
						{
							return 1;
						}
					}
					return 0;
				}
			}
		}
		else if ((iParam1 >= 57 && iParam1 <= 72) || iVar1 == 11)
		{
			if (iParam3 != -99)
			{
				if (((((iParam3 >= 204 && iParam3 <= 219) || (iParam3 >= 172 && iParam3 <= 187)) || func_421(iParam0, iParam3, -1)) || iVar3 == 13) || iVar3 == 11)
				{
					if ((unk_0x6C297174CFC8C5B2(iVar4, -1446333198, 0) || unk_0x6C297174CFC8C5B2(iVar4, 492620493, 0)) || unk_0x6C297174CFC8C5B2(iVar4, -7109286, 0))
					{
						return 0;
					}
				}
				else
				{
					return 0;
				}
			}
			else if (iParam4 != -99)
			{
				if ((((((((((((((((((iParam4 >= 64 && iParam4 <= 79) || (iParam4 >= 96 && iParam4 <= 111)) || (iParam4 >= 160 && iParam4 <= 175)) || (iParam4 >= 208 && iParam4 <= 223)) || iVar5 == 4) || iVar5 == 6) || iVar5 == 10) || iVar5 == 13) || (iVar6 != -1 && unk_0x6C297174CFC8C5B2(iVar6, -1778265882, 0))) || (iVar6 != -1 && unk_0x6C297174CFC8C5B2(iVar6, 1965569012, 0))) || (iVar6 != -1 && unk_0x6C297174CFC8C5B2(iVar6, 651155766, 0))) || (iVar6 != -1 && unk_0x6C297174CFC8C5B2(iVar6, 505220913, 0))) || unk_0x6C297174CFC8C5B2(iVar6, -893126917, 0)) || iVar6 == 2018316953) || iVar6 == 1771468076) || iVar6 == 1529567318) || iVar6 == 1299823859) || iVar6 == 1130047658)
				{
				}
				else
				{
					iVar0 = func_304(iParam6, 11);
					if ((iVar0 >= 204 && iVar0 <= 219) || (iVar0 >= 237 && func_417(func_313(iParam0, iVar0, 11, 3)) == 13))
					{
						return 1;
					}
					if (iParam7 == 1)
					{
						if ((((((iParam4 >= 48 && iParam4 <= 63) || (iParam4 >= 112 && iParam4 <= 127)) || (iParam4 >= 176 && iParam4 <= 191)) || iVar5 == 3) || iVar5 == 7) || iVar5 == 11)
						{
							if (!unk_0x6C297174CFC8C5B2(iVar6, -7109286, 0))
							{
								return 1;
							}
						}
					}
					return 0;
				}
			}
		}
		else if (iParam1 >= 92 && unk_0x6C297174CFC8C5B2(iVar2, -1950939707, 0))
		{
			if (iParam3 != -99)
			{
				if ((((((((((((((((((((((iParam3 >= 172 && iParam3 <= 187) || iVar3 == 11) || iVar4 == -27166014) || iVar4 == -273228435) || iVar4 == -2118057713) || iVar4 == -1809078812) || iVar4 == -1522415600) || iVar4 == -1212584705) || iVar4 == -886664231) || iVar4 == -646500230) || iVar4 == -290891042) || iVar4 == 15400801) || iVar4 == -485413449) || iVar4 == -254359230) || unk_0x6C297174CFC8C5B2(iVar4, 1769225721, 0)) || iVar4 == 1343601766) || iVar4 == 567992305) || iVar4 == -192707261) || iVar4 == 1156347903) || iVar4 == 1853344529) || iVar4 == 1597648022) || iVar4 == -1995669446)
				{
					if (!unk_0x6C297174CFC8C5B2(iVar4, -7109286, 0))
					{
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
			else if (iParam4 != -99)
			{
				if (((((((((((iParam4 >= 64 && iParam4 <= 79) || (iParam4 >= 96 && iParam4 <= 111)) || iVar5 == 4) || iVar5 == 6) || (iVar6 != -1 && unk_0x6C297174CFC8C5B2(iVar6, 1965569012, 0))) || unk_0x6C297174CFC8C5B2(iVar6, -893126917, 0)) || iVar6 == 2018316953) || iVar6 == 1771468076) || iVar6 == 1529567318) || iVar6 == 1299823859) || iVar6 == 1130047658)
				{
				}
				else
				{
					if (iParam7 == 1)
					{
						if ((((((iParam4 >= 48 && iParam4 <= 63) || (iParam4 >= 112 && iParam4 <= 127)) || (iParam4 >= 176 && iParam4 <= 191)) || iVar5 == 3) || iVar5 == 7) || iVar5 == 11)
						{
							if (!unk_0x6C297174CFC8C5B2(iVar6, -7109286, 0))
							{
								return 1;
							}
						}
					}
					return 0;
				}
			}
		}
		else if (iParam1 >= 92 && unk_0x6C297174CFC8C5B2(iVar2, -1371423804, 0))
		{
			if (iParam3 != -99)
			{
				if (iVar4 != -1 && unk_0x6C297174CFC8C5B2(iVar4, 1625463492, 0))
				{
				}
				else
				{
					return 0;
				}
			}
			else if (iParam4 != -99)
			{
				if (((iVar6 != -1 && unk_0x6C297174CFC8C5B2(iVar6, 651155766, 0)) && unk_0x6C297174CFC8C5B2(iVar2, -277681306, 0)) || ((iVar6 != -1 && unk_0x6C297174CFC8C5B2(iVar6, 505220913, 0)) && !unk_0x6C297174CFC8C5B2(iVar2, -277681306, 0)))
				{
				}
				else
				{
					return 0;
				}
			}
		}
		else if (iParam1 >= 92 && unk_0x6C297174CFC8C5B2(iVar2, -108328099, 0))
		{
			if (iParam4 != -99)
			{
				if (((((((((((((((((((((((((((((((((((((((((iParam4 >= 48 && iParam4 <= 63) || (iParam4 >= 112 && iParam4 <= 127)) || (iParam4 >= 176 && iParam4 <= 191)) || iVar6 == 2018316953) || iVar6 == 1771468076) || iVar6 == 1529567318) || iVar6 == 1299823859) || iVar6 == 1130047658) || iVar6 == 936913256) || iVar6 == -1891018679) || iVar6 == -1583940380) || iVar6 == -693410036) || iVar6 == -2129413154) || iVar6 == -1280171750) || iVar6 == -971192849) || iVar6 == 389965873) || iVar6 == -1451291468) || iVar6 == -50613332) || iVar6 == 318070129) || iVar6 == -1851794728) || iVar6 == 673515492) || iVar6 == 889168281) || iVar6 == 1270009599) || iVar6 == 1866208765) || iVar6 == 1546649325) || iVar6 == 1180816209) || iVar6 == -1305325922) || iVar6 == 242616108) || iVar6 == 1085565864) || iVar6 == -1968210019) || iVar6 == 2028002304) || iVar6 == 830393657) || iVar6 == -473747009) || iVar6 == 240453350) || iVar6 == 1083927410) || iVar6 == -374729298) || iVar6 == 399897093) || unk_0x6C297174CFC8C5B2(iVar6, 684992453, 0)) || unk_0x6C297174CFC8C5B2(iVar6, 1458930564, 0)) || unk_0x6C297174CFC8C5B2(iVar6, 2048281121, 0)) || unk_0x6C297174CFC8C5B2(iVar6, 19149565, 0))
				{
					if (!unk_0x6C297174CFC8C5B2(iVar6, -7109286, 0))
					{
					}
					else
					{
						return 0;
					}
				}
				else
				{
					if (iParam7 == 1)
					{
						if ((((((iParam4 >= 64 && iParam4 <= 79) || (iParam4 >= 96 && iParam4 <= 111)) || (iParam4 >= 160 && iParam4 <= 175)) || iVar5 == 4) || iVar5 == 6) || iVar5 == 10)
						{
							if (!unk_0x6C297174CFC8C5B2(iVar6, -7109286, 0))
							{
								return 1;
							}
						}
					}
					return 0;
				}
			}
		}
		else if (iParam1 >= 92 && unk_0x6C297174CFC8C5B2(iVar2, -378906828, 0))
		{
			if (iParam3 != -99)
			{
				if (((((iParam3 >= 64 && iParam3 <= 79) || (iParam3 >= 156 && iParam3 <= 171)) || iVar3 == 4) || iVar3 == 10) || unk_0x6C297174CFC8C5B2(iVar4, 470686834, 0))
				{
				}
				else
				{
					return 0;
				}
			}
			else if (iParam4 != -99)
			{
				if (((((((((((((((((((((((((((iParam4 >= 176 && iParam4 <= 191) || iVar6 == 2018316953) || iVar6 == 1771468076) || iVar6 == 1529567318) || iVar6 == 1299823859) || iVar6 == 1130047658) || iVar6 == 936913256) || iVar6 == -1891018679) || iVar6 == -1583940380) || iVar6 == -693410036) || iVar6 == -2129413154) || iVar6 == -1280171750) || iVar6 == -971192849) || iVar6 == 389965873) || iVar6 == -1451291468) || iVar6 == -50613332) || iVar6 == 318070129) || iVar6 == -1851794728) || iVar6 == 673515492) || iVar6 == 889168281) || iVar6 == 1270009599) || iVar6 == 1866208765) || iVar6 == 1546649325) || iVar6 == 1180816209) || iVar6 == -374729298) || iVar6 == 399897093) || unk_0x6C297174CFC8C5B2(iVar6, 684992453, 0))
				{
					if (!unk_0x6C297174CFC8C5B2(iVar6, -7109286, 0))
					{
					}
					else
					{
						return 0;
					}
				}
				else
				{
					if (iParam7 == 1)
					{
						if ((iParam4 >= 160 && iParam4 <= 175) || iVar5 == 10)
						{
							if (!unk_0x6C297174CFC8C5B2(iVar6, -7109286, 0))
							{
								return 1;
							}
						}
					}
					return 0;
				}
			}
		}
		else if (iParam1 >= 92 && unk_0x6C297174CFC8C5B2(iVar2, -695703461, 0))
		{
			if (iParam3 != -99)
			{
				if (((((iParam3 >= 64 && iParam3 <= 79) || (iParam3 >= 188 && iParam3 <= 203)) || iVar3 == 12) || iVar3 == 4) || unk_0x6C297174CFC8C5B2(iVar4, 470686834, 0))
				{
				}
				else
				{
					return 0;
				}
			}
			else if (iParam4 != -99)
			{
				if (((iParam4 >= 192 && iParam4 <= 207) || func_368(iVar6)) || (iVar6 != -1 && unk_0x6C297174CFC8C5B2(iVar6, 310957510, 0)))
				{
				}
				else
				{
					return 0;
				}
			}
		}
		else if (iParam1 >= 92 && unk_0x6C297174CFC8C5B2(iVar2, -1473812293, 0))
		{
			if (iParam3 != -99)
			{
				if ((iParam3 >= 172 && iParam3 <= 187) || iVar3 == 11)
				{
					return 0;
				}
				else if ((iVar4 != -1 && unk_0x6C297174CFC8C5B2(iVar4, 1627756587, 0)) || (iVar4 != -1 && unk_0x6C297174CFC8C5B2(iVar4, 1322269404, 0)))
				{
					return 0;
				}
				else if (iVar4 != -1 && unk_0x6C297174CFC8C5B2(iVar4, -713698407, 0))
				{
					return 0;
				}
			}
			if (iParam8 != -99)
			{
				if (!(iParam8 >= 1 && iParam8 <= 41))
				{
				}
				else
				{
					return 0;
				}
			}
			if (iParam10 != -99)
			{
				if (unk_0x6C297174CFC8C5B2(iVar8, 1438931885, 0))
				{
					return 0;
				}
			}
		}
	}
	else if (iParam0 == joaat("mp_f_freemode_01"))
	{
		iVar11 = -1;
		iVar12 = -1;
		if (Global_4264635 == iParam1)
		{
			iVar12 = Global_4264634;
			iVar11 = Global_4264633;
		}
		else if (iParam1 >= 55)
		{
			iVar12 = func_313(iParam0, iParam1, 7, 4);
			iVar11 = func_417(iVar12);
			Global_4264635 = iParam1;
			Global_4264634 = iVar12;
			Global_4264633 = iVar11;
		}
		iVar13 = -1;
		iVar14 = -1;
		if (Global_4264638 == iParam3)
		{
			iVar14 = Global_4264637;
			iVar13 = Global_4264636;
		}
		else if (iParam3 >= 256)
		{
			iVar14 = func_313(iParam0, iParam3, 11, 4);
			iVar13 = func_417(iVar14);
			Global_4264638 = iParam3;
			Global_4264637 = iVar14;
			Global_4264636 = iVar13;
		}
		iVar15 = -1;
		iVar16 = -1;
		if (Global_4264641 == iParam4)
		{
			iVar16 = Global_4264640;
			iVar15 = Global_4264639;
		}
		else if (iParam4 >= 136)
		{
			iVar16 = func_313(iParam0, iParam4, 8, 4);
			iVar15 = func_417(iVar16);
			Global_4264641 = iParam4;
			Global_4264640 = iVar16;
			Global_4264639 = iVar15;
		}
		iVar17 = -1;
		iVar18 = -1;
		if (Global_4264644 == iParam10)
		{
			iVar18 = Global_4264643;
			iVar17 = Global_4264642;
		}
		else if (iParam10 >= 26)
		{
			iVar18 = func_313(iParam0, iParam10, 1, 4);
			iVar17 = func_417(iVar18);
			Global_4264644 = iParam10;
			Global_4264643 = iVar18;
			Global_4264642 = iVar17;
		}
		iVar19 = -1;
		if (iParam9 >= 327)
		{
			iVar19 = func_313(iParam0, iParam9, 14, 4);
		}
		if (iParam3 != -99)
		{
			if (((unk_0x6C297174CFC8C5B2(iVar14, -1855618474, 0) || unk_0x6C297174CFC8C5B2(iVar14, 351511157, 0)) || unk_0x6C297174CFC8C5B2(iVar14, -299089347, 0)) || unk_0x6C297174CFC8C5B2(iVar14, -1420825402, 0))
			{
				if (iParam1 != 0)
				{
					return 0;
				}
			}
		}
		if (iParam10 != -99)
		{
			if (unk_0x6C297174CFC8C5B2(iVar18, 1438931885, 0) && !unk_0x6C297174CFC8C5B2(iVar18, -973213642, 0))
			{
				if (((((((iParam1 == 0 || (iParam1 >= 13 && iParam1 <= 18)) || iVar11 == 3) || (iVar12 != -1 && unk_0x6C297174CFC8C5B2(iVar12, -1320139576, 0))) || (iParam1 >= 19 && iParam1 <= 24)) || iVar11 == 4) || (iParam1 >= 25 && iParam1 <= 30)) || iVar11 == 5)
				{
				}
				else
				{
					return 0;
				}
			}
			if (unk_0x6C297174CFC8C5B2(iVar18, 1438931885, 0))
			{
				if ((((iParam1 >= 1 && iParam1 <= 12) || iVar11 == 1) || iVar11 == 2) || (iVar12 != -1 && unk_0x6C297174CFC8C5B2(iVar12, 1406402954, 0)))
				{
					return 0;
				}
			}
		}
		if (iParam3 != -99)
		{
			if (unk_0x6C297174CFC8C5B2(iVar14, -713698407, 0))
			{
				if (iParam1 != 0 && !(iVar12 != -1 && unk_0x6C297174CFC8C5B2(iVar12, -713698407, 0)))
				{
					return 0;
				}
			}
		}
		if ((iVar12 == 281786684 || iVar12 == 653911448) || iVar12 == -1519558015)
		{
			if (iParam9 != -99)
			{
				switch (iVar19)
				{
					case 1446628467:
					case -1938048778:
					case 2041418586:
					case -1342898200:
					case 2026483804:
					case -1977527541:
					case -1670449242:
					case -1385031204:
					case -1088111295:
					case -1530918836:
					case -1221415631:
					case -629869643:
					case 530255864:
					case 38181873:
					case 319110510:
					case 482562282:
					case -1178170642:
					case -880726429:
					case -699776011:
					case -401873032:
					case -700496933:
					case -404429018:
					case -2134238990:
					case -2136376254:
					case 1861212367:
					case -789144321:
					case -223092615:
					case 763352592:
					case -549897852:
					case -1976889495:
					case -1410575637:
					case -428980242:
					case -1731482454:
					case -1390357480:
					case -1765816422:
					case -1533320367:
					case 939297301:
					case 1186965403:
					case 1575507436:
					case 1783131820:
					case 2059866009:
					case -1997689882:
					case -1617209023:
					case -1391954917:
					case -1832969872:
						return 0;
						break;
					}
			}
			if (iParam10 != -99)
			{
				if (unk_0x6C297174CFC8C5B2(iVar18, 1438931885, 0))
				{
					return 0;
				}
			}
			if (unk_0x6C297174CFC8C5B2(iVar16, 240476421, 0))
			{
				return 0;
			}
		}
		if (iParam3 != -99)
		{
			if (iVar12 != -1 && unk_0x6C297174CFC8C5B2(iVar12, -1473812293, 0))
			{
				if (unk_0x6C297174CFC8C5B2(iVar12, 1396865968, 0))
				{
					if ((((((((((((((((unk_0x6C297174CFC8C5B2(iVar14, -63750166, 0) || unk_0x6C297174CFC8C5B2(iVar14, -1410897066, 0)) || unk_0x6C297174CFC8C5B2(iVar14, 320460654, 0)) || unk_0x6C297174CFC8C5B2(iVar14, -826135203, 0)) || unk_0x6C297174CFC8C5B2(iVar14, -747583185, 0)) || unk_0x6C297174CFC8C5B2(iVar14, -416620954, 0)) || unk_0x6C297174CFC8C5B2(iVar14, -733792105, 0)) || unk_0x6C297174CFC8C5B2(iVar14, -641612092, 0)) || unk_0x6C297174CFC8C5B2(iVar14, -1507532917, 0)) || unk_0x6C297174CFC8C5B2(iVar14, 1360588936, 0)) || unk_0x6C297174CFC8C5B2(iVar14, -549843760, 0)) || unk_0x6C297174CFC8C5B2(iVar14, 1830529185, 0)) || unk_0x6C297174CFC8C5B2(iVar14, -1506370874, 0)) || unk_0x6C297174CFC8C5B2(iVar14, -1786447517, 0)) || unk_0x6C297174CFC8C5B2(iVar14, -1010805287, 0)) || unk_0x6C297174CFC8C5B2(iVar14, 2136821028, 0)) || unk_0x6C297174CFC8C5B2(iVar14, 1927516484, 0))
					{
						return 0;
					}
					else if (func_369(iParam0, iParam3))
					{
					}
					else
					{
						return 0;
					}
				}
				else if (func_369(iParam0, iParam3) || unk_0x6C297174CFC8C5B2(iVar14, -63750166, 0))
				{
					return 0;
				}
				if (iParam10 != -99)
				{
					if (unk_0x6C297174CFC8C5B2(iVar18, 1438931885, 0))
					{
						return 0;
					}
				}
			}
			if (iVar12 != -1 && unk_0x6C297174CFC8C5B2(iVar12, -353070590, 0))
			{
				if ((((unk_0x6C297174CFC8C5B2(iVar14, -870074461, 0) || unk_0x6C297174CFC8C5B2(iVar14, -1174924468, 0)) || unk_0x6C297174CFC8C5B2(iVar14, -868698159, 0)) || unk_0x6C297174CFC8C5B2(iVar14, 1769225721, 0)) || unk_0x6C297174CFC8C5B2(iVar14, -1834446747, 0))
				{
				}
				else
				{
					return 0;
				}
			}
		}
		else if (iVar12 != -1 && unk_0x6C297174CFC8C5B2(iVar12, -1473812293, 0))
		{
			if (unk_0x6C297174CFC8C5B2(iVar16, -63750166, 0))
			{
				return 0;
			}
		}
		else if (iVar12 != -1 && unk_0x6C297174CFC8C5B2(iVar12, 596326873, 0))
		{
			if (unk_0x6C297174CFC8C5B2(iVar16, 974680318, 0))
			{
				return 0;
			}
		}
		if (iVar12 != -1 && unk_0x6C297174CFC8C5B2(iVar12, -713698407, 0))
		{
			if (iParam9 >= 327 && unk_0x6C297174CFC8C5B2(func_313(iParam0, iParam9, 14, 4), -713698407, 1))
			{
			}
			else if (iParam2 == 14 || (iParam2 == 1 && iParam10 != 0))
			{
				return 0;
			}
		}
		else if ((iParam9 >= 327 && unk_0x6C297174CFC8C5B2(func_313(iParam0, iParam9, 14, 4), -713698407, 1)) && iParam1 != 0)
		{
			return 0;
		}
		if ((((iVar12 != -1 && unk_0x6C297174CFC8C5B2(iVar12, -1473812293, 0)) || (iVar12 != -1 && unk_0x6C297174CFC8C5B2(iVar12, -319568873, 0))) || (iParam1 >= 43 && iParam1 <= 48)) || iVar11 == 8)
		{
			if (iParam11 != -99)
			{
				iVar20 = -1;
				if (iParam11 >= 256)
				{
					iVar20 = func_313(iParam0, iParam11, 4, 4);
				}
				if (unk_0x6C297174CFC8C5B2(iVar20, 1052059919, 0))
				{
					return 0;
				}
			}
		}
		if (iVar12 != -1 && (unk_0x6C297174CFC8C5B2(iVar12, -920534092, 0) || unk_0x6C297174CFC8C5B2(iVar12, 1537081084, 0)))
		{
			if (iParam2 == 11)
			{
				if ((((((((((((unk_0x6C297174CFC8C5B2(iVar14, 684992453, 0) || unk_0x6C297174CFC8C5B2(iVar14, 916636514, 0)) || unk_0x6C297174CFC8C5B2(iVar14, -1939378450, 0)) || unk_0x6C297174CFC8C5B2(iVar14, -820724897, 0)) || unk_0x6C297174CFC8C5B2(iVar14, 153792394, 0)) || unk_0x6C297174CFC8C5B2(iVar14, -872449705, 0)) || unk_0x6C297174CFC8C5B2(iVar14, 1714969731, 0)) || unk_0x6C297174CFC8C5B2(iVar14, 1055526375, 0)) || unk_0x6C297174CFC8C5B2(iVar14, 947651647, 0)) || unk_0x6C297174CFC8C5B2(iVar14, -549843760, 0)) || unk_0x6C297174CFC8C5B2(iVar14, 1830529185, 0)) || (iParam3 >= 112 && iParam3 <= 127)) || iVar13 == 7)
				{
				}
				else if ((unk_0x6C297174CFC8C5B2(iVar14, 700658917, 0) || unk_0x6C297174CFC8C5B2(iVar14, 745826556, 0)) || unk_0x6C297174CFC8C5B2(iVar14, 144417099, 0))
				{
					if (unk_0x6C297174CFC8C5B2(iVar12, 1537081084, 0))
					{
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
			else if (iParam2 == 8)
			{
				if (unk_0x6C297174CFC8C5B2(iVar16, 1553766533, 0) || unk_0x6C297174CFC8C5B2(iVar16, -1914383230, 0))
				{
					if (unk_0x6C297174CFC8C5B2(iVar12, -920534092, 0))
					{
						if (unk_0x6C297174CFC8C5B2(iVar16, 441715397, 0) || unk_0x6C297174CFC8C5B2(iVar16, 264959411, 0))
						{
							if (unk_0x6C297174CFC8C5B2(iVar12, 1828206051, 0))
							{
							}
							else
							{
								return 0;
							}
						}
						else if (unk_0x6C297174CFC8C5B2(iVar12, 1828206051, 0))
						{
							return 0;
						}
					}
				}
				else
				{
					return 0;
				}
			}
		}
		if (iParam9 != -99)
		{
			if ((iVar19 != -1 && unk_0x6C297174CFC8C5B2(iVar19, 1406402954, 1)) || (iVar19 != -1 && unk_0x6C297174CFC8C5B2(iVar19, 499051427, 1)))
			{
				if ((((iParam1 >= 1 && iParam1 <= 12) || iVar11 == 1) || iVar11 == 2) || (iVar12 != -1 && unk_0x6C297174CFC8C5B2(iVar12, 1406402954, 0)))
				{
					return 0;
				}
			}
		}
		if (iVar12 != -1 && unk_0x6C297174CFC8C5B2(iVar12, 596326873, 0))
		{
			if (iParam3 != -99)
			{
				if (((((((unk_0x6C297174CFC8C5B2(iVar14, -1358888880, 0) || unk_0x6C297174CFC8C5B2(iVar14, -102825006, 0)) || unk_0x6C297174CFC8C5B2(iVar14, -733792105, 0)) || unk_0x6C297174CFC8C5B2(iVar14, -641612092, 0)) || unk_0x6C297174CFC8C5B2(iVar14, -1507532917, 0)) || unk_0x6C297174CFC8C5B2(iVar14, -828478571, 0)) || unk_0x6C297174CFC8C5B2(iVar14, 1360588936, 0)) || unk_0x6C297174CFC8C5B2(iVar14, 974680318, 0))
				{
					return 0;
				}
				else if (func_421(iParam0, iParam3, -1))
				{
				}
				else if ((((((((((((((((((((iParam3 >= 32 && iParam3 <= 47) || (iParam3 >= 176 && iParam3 <= 191)) || iVar13 == 2) || iVar13 == 11) || unk_0x6C297174CFC8C5B2(iVar14, 2026620439, 0)) || unk_0x6C297174CFC8C5B2(iVar14, -761463976, 0)) || unk_0x6C297174CFC8C5B2(iVar14, -1347486026, 0)) || unk_0x6C297174CFC8C5B2(iVar14, -939525357, 0)) || unk_0x6C297174CFC8C5B2(iVar14, -1119232689, 0)) || unk_0x6C297174CFC8C5B2(iVar14, -2102859770, 0)) || unk_0x6C297174CFC8C5B2(iVar14, 1784133476, 0)) || unk_0x6C297174CFC8C5B2(iVar14, -1488441032, 0)) || unk_0x6C297174CFC8C5B2(iVar14, 2044466679, 0)) || unk_0x6C297174CFC8C5B2(iVar14, -2020757158, 0)) || unk_0x6C297174CFC8C5B2(iVar14, -430330349, 0)) || unk_0x6C297174CFC8C5B2(iVar14, -1351486939, 0)) || unk_0x6C297174CFC8C5B2(iVar14, 2030343924, 0)) || iVar14 == 998321559) || iVar14 == 619380843) || unk_0x6C297174CFC8C5B2(iVar14, -55550566, 0))
				{
					if (!unk_0x6C297174CFC8C5B2(iVar12, 525778571, 0))
					{
						return 0;
					}
				}
				else if ((((((((((((((((((((((((((((((((((((((((((((((((iParam3 >= 48 && iParam3 <= 63) || (iParam3 >= 144 && iParam3 <= 159)) || (iParam3 >= 224 && iParam3 <= 239)) || iVar13 == 3) || iVar13 == 9) || iVar13 == 14) || unk_0x6C297174CFC8C5B2(iVar14, -530089825, 0)) || unk_0x6C297174CFC8C5B2(iVar14, 1965569012, 0)) || unk_0x6C297174CFC8C5B2(iVar14, -1200513218, 0)) || unk_0x6C297174CFC8C5B2(iVar14, -713698407, 0)) || unk_0x6C297174CFC8C5B2(iVar14, 1843965488, 0)) || unk_0x6C297174CFC8C5B2(iVar14, -55104292, 0)) || unk_0x6C297174CFC8C5B2(iVar14, -779835469, 0)) || unk_0x6C297174CFC8C5B2(iVar14, -1086258388, 0)) || unk_0x6C297174CFC8C5B2(iVar14, 140732128, 0)) || unk_0x6C297174CFC8C5B2(iVar14, 2106216756, 0)) || unk_0x6C297174CFC8C5B2(iVar14, 1627756587, 0)) || unk_0x6C297174CFC8C5B2(iVar14, 441715397, 0)) || unk_0x6C297174CFC8C5B2(iVar14, 264959411, 0)) || unk_0x6C297174CFC8C5B2(iVar14, -1127835965, 0)) || unk_0x6C297174CFC8C5B2(iVar14, -672871169, 0)) || unk_0x6C297174CFC8C5B2(iVar14, 572416369, 0)) || unk_0x6C297174CFC8C5B2(iVar14, -196114988, 0)) || unk_0x6C297174CFC8C5B2(iVar14, -1607949555, 0)) || unk_0x6C297174CFC8C5B2(iVar14, 1976716889, 0)) || unk_0x6C297174CFC8C5B2(iVar14, 2099109084, 0)) || unk_0x6C297174CFC8C5B2(iVar14, -1488441032, 0)) || unk_0x6C297174CFC8C5B2(iVar14, 320460654, 0)) || unk_0x6C297174CFC8C5B2(iVar14, -2017999390, 0)) || unk_0x6C297174CFC8C5B2(iVar14, -1410897066, 0)) || unk_0x6C297174CFC8C5B2(iVar14, -826135203, 0)) || unk_0x6C297174CFC8C5B2(iVar14, -1053842259, 0)) || unk_0x6C297174CFC8C5B2(iVar14, -1358888880, 0)) || unk_0x6C297174CFC8C5B2(iVar14, -441291342, 0)) || unk_0x6C297174CFC8C5B2(iVar14, -747583185, 0)) || unk_0x6C297174CFC8C5B2(iVar14, 1407863332, 0)) || unk_0x6C297174CFC8C5B2(iVar14, -1986415230, 0)) || unk_0x6C297174CFC8C5B2(iVar14, -785939537, 0)) || unk_0x6C297174CFC8C5B2(iVar14, -1103045158, 0)) || unk_0x6C297174CFC8C5B2(iVar14, -102825006, 0)) || unk_0x6C297174CFC8C5B2(iVar14, -641612092, 0)) || unk_0x6C297174CFC8C5B2(iVar14, -1507532917, 0)) || unk_0x6C297174CFC8C5B2(iVar14, -1506370874, 0)) || unk_0x6C297174CFC8C5B2(iVar14, -1786447517, 0)) || unk_0x6C297174CFC8C5B2(iVar14, -1010805287, 0)) || unk_0x6C297174CFC8C5B2(iVar14, 2136821028, 0)) || unk_0x6C297174CFC8C5B2(iVar14, 1360588936, 0)) || unk_0x6C297174CFC8C5B2(iVar14, 1927516484, 0))
				{
					return 0;
				}
				else if (unk_0x6C297174CFC8C5B2(iVar12, 525778571, 0))
				{
					return 0;
				}
			}
			else if (iParam4 != -99)
			{
				if ((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((iParam4 >= 71 && iParam4 <= 86) || iVar15 == 11) || unk_0x6C297174CFC8C5B2(iVar16, 1455992833, 0)) || unk_0x6C297174CFC8C5B2(iVar16, 153792394, 0)) || unk_0x6C297174CFC8C5B2(iVar16, -870074461, 0)) || unk_0x6C297174CFC8C5B2(iVar16, -1174924468, 0)) || unk_0x6C297174CFC8C5B2(iVar16, -868698159, 0)) || unk_0x6C297174CFC8C5B2(iVar16, -1177480446, 0)) || unk_0x6C297174CFC8C5B2(iVar16, -1347486026, 0)) || unk_0x6C297174CFC8C5B2(iVar16, -1655154167, 0)) || unk_0x6C297174CFC8C5B2(iVar16, -2105858993, 0)) || unk_0x6C297174CFC8C5B2(iVar16, 1893564692, 0)) || unk_0x6C297174CFC8C5B2(iVar16, 1710451520, 0)) || unk_0x6C297174CFC8C5B2(iVar16, 1416808511, 0)) || unk_0x6C297174CFC8C5B2(iVar16, 1641506460, 0)) || unk_0x6C297174CFC8C5B2(iVar16, 699233865, 0)) || iVar16 == -565297075) || iVar16 == 262349558) || iVar16 == -917804055) || iVar16 == -1156067454) || iVar16 == -2124751863) || iVar16 == 1812836719) || iVar16 == 1582116924) || iVar16 == 877452376) || iVar16 == 1117419763) || iVar16 == 732885188) || iVar16 == -1037820496) || iVar16 == -79097863) || unk_0x6C297174CFC8C5B2(iVar16, -1119232689, 0)) || unk_0x6C297174CFC8C5B2(iVar16, -2102859770, 0)) || unk_0x6C297174CFC8C5B2(iVar16, 1784133476, 0)) || unk_0x6C297174CFC8C5B2(iVar16, -1607949555, 0)) || unk_0x6C297174CFC8C5B2(iVar16, 1976716889, 0)) || unk_0x6C297174CFC8C5B2(iVar16, 2099109084, 0)) || unk_0x6C297174CFC8C5B2(iVar16, -1488441032, 0)) || unk_0x6C297174CFC8C5B2(iVar16, 2044466679, 0)) || unk_0x6C297174CFC8C5B2(iVar16, -2020757158, 0)) || unk_0x6C297174CFC8C5B2(iVar16, -1064262817, 0)) || unk_0x6C297174CFC8C5B2(iVar16, -1419806467, 0)) || unk_0x6C297174CFC8C5B2(iVar16, -1053842259, 0)) || unk_0x6C297174CFC8C5B2(iVar16, -1358888880, 0)) || unk_0x6C297174CFC8C5B2(iVar16, -849839091, 0)) || unk_0x6C297174CFC8C5B2(iVar16, -2088146832, 0)) || unk_0x6C297174CFC8C5B2(iVar16, -352447393, 0)) || unk_0x6C297174CFC8C5B2(iVar16, -642551350, 0)) || unk_0x6C297174CFC8C5B2(iVar16, -819569488, 0)) || unk_0x6C297174CFC8C5B2(iVar16, -2020068325, 0)) || unk_0x6C297174CFC8C5B2(iVar16, -1786447517, 0)) || unk_0x6C297174CFC8C5B2(iVar16, -1010805287, 0)) || unk_0x6C297174CFC8C5B2(iVar16, -1325813684, 0)) || unk_0x6C297174CFC8C5B2(iVar16, -549843760, 0)) || unk_0x6C297174CFC8C5B2(iVar16, -269266203, 0)) || unk_0x6C297174CFC8C5B2(iVar16, 201427653, 0)) || unk_0x6C297174CFC8C5B2(iVar16, 967829025, 0)) || unk_0x6C297174CFC8C5B2(iVar16, -685039259, 0)) || unk_0x6C297174CFC8C5B2(iVar16, -1266557933, 0)) || unk_0x6C297174CFC8C5B2(iVar16, -979468724, 0)) || unk_0x6C297174CFC8C5B2(iVar16, -58412562, 0)) || unk_0x6C297174CFC8C5B2(iVar16, -435539886, 0)) || unk_0x6C297174CFC8C5B2(iVar16, 974680318, 0))
				{
					if (!unk_0x6C297174CFC8C5B2(iVar12, 525778571, 0))
					{
						return 0;
					}
				}
				else if (((((((unk_0x6C297174CFC8C5B2(iVar16, 1965569012, 0) || unk_0x6C297174CFC8C5B2(iVar16, 684992453, 0)) || unk_0x6C297174CFC8C5B2(iVar16, 916636514, 0)) || unk_0x6C297174CFC8C5B2(iVar16, -1939378450, 0)) || unk_0x6C297174CFC8C5B2(iVar16, 441715397, 0)) || unk_0x6C297174CFC8C5B2(iVar16, 264959411, 0)) || unk_0x6C297174CFC8C5B2(iVar16, 1353777856, 0)) || unk_0x6C297174CFC8C5B2(iVar16, -1207283343, 0))
				{
					return 0;
				}
				else if (func_418(iParam0, iParam4, 0) != -99)
				{
					if (unk_0x6C297174CFC8C5B2(iVar12, 525778571, 0))
					{
						return 0;
					}
				}
			}
			if (iParam8 != -99)
			{
				if (!(iParam8 >= 1 && iParam8 <= 31))
				{
				}
				else
				{
					return 0;
				}
			}
		}
		if (iParam3 != -99)
		{
			if (iVar12 != -1 && unk_0x6C297174CFC8C5B2(iVar12, 654065530, 0))
			{
				if (unk_0x6C297174CFC8C5B2(iVar14, -1351486939, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
		}
		if (((iParam1 >= 13 && iParam1 <= 18) || iVar11 == 3) || (iVar12 != -1 && unk_0x6C297174CFC8C5B2(iVar12, -1320139576, 0)))
		{
			if (iParam3 != -99)
			{
				if (((((((((iParam3 >= 48 && iParam3 <= 63) || (iParam3 >= 112 && iParam3 <= 127)) || (iParam3 >= 160 && iParam3 <= 175)) || iVar13 == 3) || iVar13 == 7) || iVar13 == 10) || (iParam3 >= 256 && unk_0x6C297174CFC8C5B2(iVar14, 2026620439, 0))) || (iParam3 >= 256 && unk_0x6C297174CFC8C5B2(iVar14, -1882920022, 0))) || (iParam3 >= 256 && unk_0x6C297174CFC8C5B2(iVar14, 1147939952, 0)))
				{
					return 0;
				}
			}
			else if (iParam4 != -99)
			{
				if (iParam4 >= 136 && unk_0x6C297174CFC8C5B2(func_313(iParam0, iParam4, 8, 4), 1147939952, 0))
				{
					return 0;
				}
			}
			else if (iParam9 != -99)
			{
				if (iVar19 != -1 && unk_0x6C297174CFC8C5B2(iVar19, -1320139576, 1))
				{
					return 0;
				}
			}
		}
		else if ((iParam1 >= 19 && iParam1 <= 24) || iVar11 == 4)
		{
			if (iParam3 != -99)
			{
				if (((((((((iParam3 >= 48 && iParam3 <= 63) || (iParam3 >= 112 && iParam3 <= 127)) || (iParam3 >= 160 && iParam3 <= 175)) || iVar13 == 3) || iVar13 == 7) || iVar13 == 10) || (iParam3 >= 256 && unk_0x6C297174CFC8C5B2(iVar14, 2026620439, 0))) || (iParam3 >= 256 && unk_0x6C297174CFC8C5B2(iVar14, -1882920022, 0))) || (iParam3 >= 256 && unk_0x6C297174CFC8C5B2(iVar14, 1147939952, 0)))
				{
					return 0;
				}
			}
			else if (iParam4 != -99)
			{
				if (iParam4 >= 136 && unk_0x6C297174CFC8C5B2(func_313(iParam0, iParam4, 8, 4), 1147939952, 0))
				{
					return 0;
				}
			}
			else if (iParam9 != -99)
			{
				if (iVar19 != -1 && unk_0x6C297174CFC8C5B2(iVar19, -1320139576, 1))
				{
					unk_0x16327A71AB47E5CD(iVar19, &Var21);
					if (Var21.f_6 == 7)
					{
						return 0;
					}
				}
			}
		}
		else if ((iParam1 >= 25 && iParam1 <= 30) || iVar11 == 5)
		{
			if (iParam3 != -99)
			{
				if (((((((((iParam3 >= 48 && iParam3 <= 63) || (iParam3 >= 112 && iParam3 <= 127)) || (iParam3 >= 160 && iParam3 <= 175)) || iVar13 == 3) || iVar13 == 7) || iVar13 == 10) || (iParam3 >= 256 && unk_0x6C297174CFC8C5B2(iVar14, 2026620439, 0))) || (iParam3 >= 256 && unk_0x6C297174CFC8C5B2(iVar14, -1882920022, 0))) || (iParam3 >= 256 && unk_0x6C297174CFC8C5B2(iVar14, 1147939952, 0)))
				{
					return 0;
				}
			}
			else if (iParam4 != -99)
			{
				if (iParam4 >= 136 && unk_0x6C297174CFC8C5B2(func_313(iParam0, iParam4, 8, 4), 1147939952, 0))
				{
					return 0;
				}
			}
			else if (iParam9 != -99)
			{
				if (iVar19 != -1 && unk_0x6C297174CFC8C5B2(iVar19, -1320139576, 1))
				{
					return 0;
				}
			}
		}
		else if ((iParam1 >= 31 && iParam1 <= 36) || iVar11 == 6)
		{
			if (iParam3 != -99)
			{
				if ((((((((((((((((((((((((((((((((((((((((((((((iParam3 >= 48 && iParam3 <= 63) || (iParam3 >= 144 && iParam3 <= 159)) || (iParam3 >= 224 && iParam3 <= 239)) || iVar13 == 3) || iVar13 == 9) || iVar13 == 14) || (iParam3 >= 256 && unk_0x6C297174CFC8C5B2(iVar14, 1965569012, 0))) || (iParam3 >= 256 && unk_0x6C297174CFC8C5B2(iVar14, 2026620439, 0))) || (iParam3 >= 256 && unk_0x6C297174CFC8C5B2(iVar14, -1882920022, 0))) || (iParam3 >= 256 && unk_0x6C297174CFC8C5B2(iVar14, 396458410, 0))) || (iParam3 >= 256 && unk_0x6C297174CFC8C5B2(iVar14, -761463976, 0))) || (iParam3 >= 256 && unk_0x6C297174CFC8C5B2(iVar14, 103539798, 0))) || (iParam3 >= 256 && unk_0x6C297174CFC8C5B2(iVar14, -1347486026, 0))) || (iParam3 >= 256 && unk_0x6C297174CFC8C5B2(iVar14, -994703884, 0))) || (iParam3 >= 256 && unk_0x6C297174CFC8C5B2(iVar14, -1119232689, 0))) || unk_0x6C297174CFC8C5B2(iVar14, 320460654, 0)) || unk_0x6C297174CFC8C5B2(iVar14, -2017999390, 0)) || unk_0x6C297174CFC8C5B2(iVar14, -1410897066, 0)) || unk_0x6C297174CFC8C5B2(iVar14, -826135203, 0)) || unk_0x6C297174CFC8C5B2(iVar14, 2044466679, 0)) || unk_0x6C297174CFC8C5B2(iVar14, -2020757158, 0)) || unk_0x6C297174CFC8C5B2(iVar14, -1064262817, 0)) || unk_0x6C297174CFC8C5B2(iVar14, -1053842259, 0)) || unk_0x6C297174CFC8C5B2(iVar14, -1358888880, 0)) || unk_0x6C297174CFC8C5B2(iVar14, -441291342, 0)) || unk_0x6C297174CFC8C5B2(iVar14, -747583185, 0)) || unk_0x6C297174CFC8C5B2(iVar14, -1986415230, 0)) || unk_0x6C297174CFC8C5B2(iVar14, -430330349, 0)) || unk_0x6C297174CFC8C5B2(iVar14, -102825006, 0)) || unk_0x6C297174CFC8C5B2(iVar14, -733792105, 0)) || unk_0x6C297174CFC8C5B2(iVar14, -641612092, 0)) || unk_0x6C297174CFC8C5B2(iVar14, -1351486939, 0)) || unk_0x6C297174CFC8C5B2(iVar14, -1507532917, 0)) || unk_0x6C297174CFC8C5B2(iVar14, 2030343924, 0)) || unk_0x6C297174CFC8C5B2(iVar14, -828478571, 0)) || unk_0x6C297174CFC8C5B2(iVar14, 1360588936, 0)) || unk_0x6C297174CFC8C5B2(iVar14, -1506370874, 0)) || unk_0x6C297174CFC8C5B2(iVar14, -1786447517, 0)) || unk_0x6C297174CFC8C5B2(iVar14, -1010805287, 0)) || unk_0x6C297174CFC8C5B2(iVar14, 2136821028, 0)) || unk_0x6C297174CFC8C5B2(iVar14, 602650322, 0)) || unk_0x6C297174CFC8C5B2(iVar14, 905042630, 0)) || unk_0x6C297174CFC8C5B2(iVar14, 1204125293, 0)) || unk_0x6C297174CFC8C5B2(iVar14, -1855618474, 0)) || unk_0x6C297174CFC8C5B2(iVar14, 1927516484, 0)) || unk_0x6C297174CFC8C5B2(iVar14, -1375878737, 0))
				{
					return 0;
				}
			}
		}
		else if (((iParam1 >= 37 && iParam1 <= 42) || iVar11 == 7) || (iParam1 >= 55 && unk_0x6C297174CFC8C5B2(iVar12, 2083259958, 0)))
		{
			if (iParam3 != -99)
			{
				if (((((((((((((((((((((((((((((((((((((((((((((iParam3 >= 32 && iParam3 <= 47) || (iParam3 >= 48 && iParam3 <= 63)) || (iParam3 >= 144 && iParam3 <= 159)) || (iParam3 >= 224 && iParam3 <= 239)) || iVar13 == 2) || iVar13 == 3) || iVar13 == 9) || iVar13 == 14) || (iParam3 >= 256 && unk_0x6C297174CFC8C5B2(iVar14, 2026620439, 0))) || (iParam3 >= 256 && unk_0x6C297174CFC8C5B2(iVar14, -1882920022, 0))) || (iParam3 >= 256 && unk_0x6C297174CFC8C5B2(iVar14, 396458410, 0))) || (iParam3 >= 256 && unk_0x6C297174CFC8C5B2(iVar14, -761463976, 0))) || (iParam3 >= 256 && unk_0x6C297174CFC8C5B2(iVar14, 821147517, 0))) || (iParam3 >= 256 && unk_0x6C297174CFC8C5B2(iVar14, 103539798, 0))) || (iParam3 >= 256 && unk_0x6C297174CFC8C5B2(iVar14, -1347486026, 0))) || (iParam3 >= 256 && unk_0x6C297174CFC8C5B2(iVar14, -994703884, 0))) || (iParam3 >= 256 && unk_0x6C297174CFC8C5B2(iVar14, -1119232689, 0))) || (iParam3 >= 256 && unk_0x6C297174CFC8C5B2(iVar14, -1607949555, 0))) || unk_0x6C297174CFC8C5B2(iVar14, 320460654, 0)) || unk_0x6C297174CFC8C5B2(iVar14, -2017999390, 0)) || unk_0x6C297174CFC8C5B2(iVar14, -1410897066, 0)) || unk_0x6C297174CFC8C5B2(iVar14, -826135203, 0)) || unk_0x6C297174CFC8C5B2(iVar14, 1965569012, 0)) || unk_0x6C297174CFC8C5B2(iVar14, -1064262817, 0)) || unk_0x6C297174CFC8C5B2(iVar14, -1053842259, 0)) || unk_0x6C297174CFC8C5B2(iVar14, -1358888880, 0)) || unk_0x6C297174CFC8C5B2(iVar14, -441291342, 0)) || unk_0x6C297174CFC8C5B2(iVar14, -747583185, 0)) || unk_0x6C297174CFC8C5B2(iVar14, -1986415230, 0)) || unk_0x6C297174CFC8C5B2(iVar14, -430330349, 0)) || unk_0x6C297174CFC8C5B2(iVar14, -102825006, 0)) || unk_0x6C297174CFC8C5B2(iVar14, -733792105, 0)) || unk_0x6C297174CFC8C5B2(iVar14, -641612092, 0)) || unk_0x6C297174CFC8C5B2(iVar14, -1351486939, 0)) || unk_0x6C297174CFC8C5B2(iVar14, -1507532917, 0)) || unk_0x6C297174CFC8C5B2(iVar14, 2030343924, 0)) || unk_0x6C297174CFC8C5B2(iVar14, -828478571, 0)) || unk_0x6C297174CFC8C5B2(iVar14, 1360588936, 0)) || unk_0x6C297174CFC8C5B2(iVar14, -1506370874, 0)) || unk_0x6C297174CFC8C5B2(iVar14, -1786447517, 0)) || unk_0x6C297174CFC8C5B2(iVar14, -1010805287, 0)) || unk_0x6C297174CFC8C5B2(iVar14, 2136821028, 0)) || unk_0x6C297174CFC8C5B2(iVar14, 1831422288, 0)) || unk_0x6C297174CFC8C5B2(iVar14, 1927516484, 0)) || unk_0x6C297174CFC8C5B2(iVar14, 974680318, 0))
				{
					return 0;
				}
				else if (((((((((((iParam3 >= 112 && iParam3 <= 127) || (iParam3 >= 160 && iParam3 <= 175)) || (iParam3 >= 192 && iParam3 <= 207)) || iVar13 == 7) || iVar13 == 10) || iVar13 == 12) || (iParam3 >= 256 && unk_0x6C297174CFC8C5B2(iVar14, 1147939952, 0))) || (iParam3 >= 256 && unk_0x6C297174CFC8C5B2(iVar14, -1200513218, 0))) || (iParam3 >= 256 && unk_0x6C297174CFC8C5B2(iVar14, 2026620439, 0))) || (iParam3 >= 256 && unk_0x6C297174CFC8C5B2(iVar14, -1882920022, 0))) || unk_0x6C297174CFC8C5B2(iVar14, -747583185, 0))
				{
					if (iParam1 >= 55 && unk_0x6C297174CFC8C5B2(iVar12, 2083259958, 0))
					{
						return 0;
					}
				}
			}
			else if (iParam4 != -99)
			{
				if (unk_0x6C297174CFC8C5B2(iVar16, 1965569012, 0))
				{
					if (unk_0x6C297174CFC8C5B2(iVar12, 2083259958, 0))
					{
						return 0;
					}
				}
				else if (((unk_0x6C297174CFC8C5B2(iVar16, -1786447517, 0) || unk_0x6C297174CFC8C5B2(iVar16, -1010805287, 0)) || unk_0x6C297174CFC8C5B2(iVar16, -1325813684, 0)) || unk_0x6C297174CFC8C5B2(iVar16, -549843760, 0))
				{
					return 0;
				}
				else if ((unk_0x6C297174CFC8C5B2(iVar16, -1703203608, 0) || unk_0x6C297174CFC8C5B2(iVar16, -1415000253, 0)) || unk_0x6C297174CFC8C5B2(iVar16, -168336417, 0))
				{
					return 0;
				}
			}
			else if (iParam9 != -99)
			{
				if (iVar19 != -1 && unk_0x6C297174CFC8C5B2(iVar19, -1320139576, 1))
				{
					return 0;
				}
			}
		}
		else if ((iParam1 >= 43 && iParam1 <= 48) || iVar11 == 8)
		{
			if (iParam3 != -99)
			{
				if ((((((((((((((((((((((iParam3 >= 0 && iParam3 <= 15) || (iParam3 >= 32 && iParam3 <= 47)) || (iParam3 >= 64 && iParam3 <= 79)) || (iParam3 >= 80 && iParam3 <= 95)) || (iParam3 >= 144 && iParam3 <= 159)) || (iParam3 >= 176 && iParam3 <= 191)) || (iParam3 >= 192 && iParam3 <= 207)) || (iParam3 >= 208 && iParam3 <= 223)) || (iParam3 >= 240 && iParam3 <= 255)) || iVar13 == 0) || iVar13 == 2) || iVar13 == 4) || iVar13 == 5) || iVar13 == 9) || iVar13 == 11) || iVar13 == 12) || iVar13 == 13) || iVar13 == 15) || (iParam3 >= 256 && unk_0x6C297174CFC8C5B2(iVar14, -1200513218, 0))) || (iParam3 >= 256 && unk_0x6C297174CFC8C5B2(iVar14, -530089825, 0))) || (iParam3 >= 256 && unk_0x6C297174CFC8C5B2(iVar14, 103539798, 0))) || (iParam3 >= 256 && unk_0x6C297174CFC8C5B2(iVar14, -994703884, 0)))
				{
				}
				else
				{
					return 0;
				}
			}
		}
		else if ((iParam1 >= 49 && iParam1 <= 54) || iVar11 == 9)
		{
			if (iParam3 != -99)
			{
				if ((((((((((((((((iParam3 >= 0 && iParam3 <= 15) || (iParam3 >= 64 && iParam3 <= 79)) || (iParam3 >= 80 && iParam3 <= 95)) || (iParam3 >= 176 && iParam3 <= 191)) || (iParam3 >= 192 && iParam3 <= 207)) || (iParam3 >= 208 && iParam3 <= 223)) || (iParam3 >= 240 && iParam3 <= 255)) || iVar13 == 0) || iVar13 == 4) || iVar13 == 5) || iVar13 == 11) || iVar13 == 12) || iVar13 == 13) || iVar13 == 15) || (iParam3 >= 256 && unk_0x6C297174CFC8C5B2(iVar14, -1200513218, 0))) || (iParam3 >= 256 && unk_0x6C297174CFC8C5B2(iVar14, -530089825, 0)))
				{
				}
				else
				{
					return 0;
				}
			}
			else if (iParam4 != -99)
			{
				if (unk_0x6C297174CFC8C5B2(iVar16, -7109286, 0))
				{
					return 0;
				}
				else if (((unk_0x6C297174CFC8C5B2(iVar16, -1786447517, 0) || unk_0x6C297174CFC8C5B2(iVar16, -1010805287, 0)) || unk_0x6C297174CFC8C5B2(iVar16, -1325813684, 0)) || unk_0x6C297174CFC8C5B2(iVar16, -549843760, 0))
				{
					return 0;
				}
			}
			if (iParam8 != -99)
			{
				if (!(iParam8 >= 1 && iParam8 <= 31))
				{
				}
				else
				{
					return 0;
				}
			}
			if (iParam10 != -99)
			{
				if (unk_0x6C297174CFC8C5B2(iVar18, 1438931885, 0))
				{
					return 0;
				}
			}
		}
		else if (iParam1 >= 55 && unk_0x6C297174CFC8C5B2(iVar12, 1716958480, 0))
		{
			if (iParam3 != -99)
			{
				if (iVar14 != -1 && unk_0x6C297174CFC8C5B2(iVar14, -747583185, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (iParam11 != -99)
			{
				iVar22 = -1;
				if (iParam11 >= 256)
				{
					iVar22 = func_313(iParam0, iParam11, 4, 4);
				}
				if (unk_0x6C297174CFC8C5B2(iVar22, -33031567, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
		}
	}
	return 1;
}

int func_368(int iParam0)//Position - 0x3717B
{
	if (iParam0 != -1)
	{
		return 0;
	}
	switch (iParam0)
	{
		case -783649692:
		case 691352495:
		case 1313566316:
		case 451909412:
		case 1552550633:
		case -206550874:
		case 860928119:
		case -445797343:
		case 1107219923:
		case -173716332:
		case -2017140386:
		case -538304226:
		case -1235599732:
		case -592242000:
		case 1815489089:
		case -831095241:
		case 2062043045:
		case -1092100326:
		case -1065332020:
		case -1465994616:
		case -1516536717:
		case 507503642:
		case -1470397961:
		case -1392082519:
		case 264425668:
		case -88859389:
		case 560755735:
		case 157858412:
		case -593565059:
		case -513152401:
		case -286945526:
		case 2004948615:
			return 1;
			break;
	}
	return 0;
}

int func_369(int iParam0, int iParam1)//Position - 0x3725C
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 == joaat("mp_m_freemode_01"))
	{
		iVar0 = func_313(iParam0, iParam1, 11, 3);
		if (iVar0 != -1)
		{
			if (((((((((((((((((((((((((((((((unk_0x6C297174CFC8C5B2(iVar0, -1119232689, 0) || unk_0x6C297174CFC8C5B2(iVar0, -2102859770, 0)) || unk_0x6C297174CFC8C5B2(iVar0, 1784133476, 0)) || unk_0x6C297174CFC8C5B2(iVar0, 1976716889, 0)) || unk_0x6C297174CFC8C5B2(iVar0, 2099109084, 0)) || unk_0x6C297174CFC8C5B2(iVar0, -1488441032, 0)) || unk_0x6C297174CFC8C5B2(iVar0, -1719167561, 0)) || unk_0x6C297174CFC8C5B2(iVar0, -1274099003, 0)) || unk_0x6C297174CFC8C5B2(iVar0, -1410897066, 0)) || unk_0x6C297174CFC8C5B2(iVar0, 320460654, 0)) || unk_0x6C297174CFC8C5B2(iVar0, -826135203, 0)) || unk_0x6C297174CFC8C5B2(iVar0, 1431529976, 0)) || unk_0x6C297174CFC8C5B2(iVar0, 1723403459, 0)) || unk_0x6C297174CFC8C5B2(iVar0, 2044466679, 0)) || unk_0x6C297174CFC8C5B2(iVar0, -2020757158, 0)) || unk_0x6C297174CFC8C5B2(iVar0, -1064262817, 0)) || unk_0x6C297174CFC8C5B2(iVar0, -1419806467, 0)) || unk_0x6C297174CFC8C5B2(iVar0, -1053842259, 0)) || unk_0x6C297174CFC8C5B2(iVar0, -1358888880, 0)) || unk_0x6C297174CFC8C5B2(iVar0, -441291342, 0)) || unk_0x6C297174CFC8C5B2(iVar0, -785939537, 0)) || unk_0x6C297174CFC8C5B2(iVar0, -1446333198, 0)) || unk_0x6C297174CFC8C5B2(iVar0, 492620493, 0)) || unk_0x6C297174CFC8C5B2(iVar0, -1506370874, 0)) || unk_0x6C297174CFC8C5B2(iVar0, -1786447517, 0)) || unk_0x6C297174CFC8C5B2(iVar0, -1010805287, 0)) || unk_0x6C297174CFC8C5B2(iVar0, -1325813684, 0)) || unk_0x6C297174CFC8C5B2(iVar0, 1690933245, 0)) || unk_0x6C297174CFC8C5B2(iVar0, 1360588936, 0)) || unk_0x6C297174CFC8C5B2(iVar0, 2136821028, 0)) || unk_0x6C297174CFC8C5B2(iVar0, 1927516484, 0)) || unk_0x6C297174CFC8C5B2(iVar0, -1603194928, 0))
			{
				return 1;
			}
		}
		if (iVar0 != -1)
		{
			if (unk_0x6C297174CFC8C5B2(iVar0, -2017999390, 0))
			{
				return 1;
			}
		}
		return func_421(iParam0, iParam1, -1);
	}
	else if (iParam0 == joaat("mp_f_freemode_01"))
	{
		iVar1 = func_313(iParam0, iParam1, 11, 4);
		iVar2 = -1;
		if (iVar1 != -1)
		{
			iVar2 = func_417(iVar1);
		}
		if (((((((((((((((((((((((((((((((((((((iParam1 >= 16 && iParam1 < 32) || (iParam1 >= 48 && iParam1 < 64)) || (iParam1 >= 96 && iParam1 < 112)) || (iParam1 >= 112 && iParam1 < 128)) || (iParam1 >= 128 && iParam1 < 144)) || (iParam1 >= 144 && iParam1 < 160)) || (iParam1 >= 160 && iParam1 < 176)) || (iParam1 >= 224 && iParam1 < 240)) || iVar2 == 1) || iVar2 == 3) || iVar2 == 6) || iVar2 == 7) || iVar2 == 8) || iVar2 == 9) || iVar2 == 10) || iVar2 == 14) || unk_0x6C297174CFC8C5B2(iVar1, -1393156190, 0)) || unk_0x6C297174CFC8C5B2(iVar1, 1843965488, 0)) || unk_0x6C297174CFC8C5B2(iVar1, 441715397, 0)) || unk_0x6C297174CFC8C5B2(iVar1, 264959411, 0)) || unk_0x6C297174CFC8C5B2(iVar1, -1410897066, 0)) || unk_0x6C297174CFC8C5B2(iVar1, 320460654, 0)) || unk_0x6C297174CFC8C5B2(iVar1, -2017999390, 0)) || unk_0x6C297174CFC8C5B2(iVar1, -826135203, 0)) || unk_0x6C297174CFC8C5B2(iVar1, -747583185, 0)) || unk_0x6C297174CFC8C5B2(iVar1, -102825006, 0)) || unk_0x6C297174CFC8C5B2(iVar1, -733792105, 0)) || unk_0x6C297174CFC8C5B2(iVar1, -641612092, 0)) || unk_0x6C297174CFC8C5B2(iVar1, -1507532917, 0)) || unk_0x6C297174CFC8C5B2(iVar1, -1506370874, 0)) || unk_0x6C297174CFC8C5B2(iVar1, -1786447517, 0)) || unk_0x6C297174CFC8C5B2(iVar1, -1010805287, 0)) || unk_0x6C297174CFC8C5B2(iVar1, -1325813684, 0)) || unk_0x6C297174CFC8C5B2(iVar1, 1690933245, 0)) || unk_0x6C297174CFC8C5B2(iVar1, 1360588936, 0)) || unk_0x6C297174CFC8C5B2(iVar1, 2136821028, 0)) || unk_0x6C297174CFC8C5B2(iVar1, 1927516484, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_370(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x3778A
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x82FF3DFBC3965CC0(iParam0);
	func_412(unk_0x8B948C59217A295D("hairOverlay"), iParam0);
	iVar1 = func_411(iVar0, iParam1);
	if (iVar1 != -1)
	{
		if (iParam2 == -1)
		{
			iParam2 = Global_70668;
		}
		func_435(iVar1, 1, iParam2);
	}
	func_371(iParam0, bParam3, 0);
}

void func_371(int iParam0, bool bParam1, bool bParam2)//Position - 0x377D6
{
	int iVar0;
	struct<9> Var1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	struct<8> Var9;
	int iVar10;
	
	if (!unk_0x3AB6A1A9084FB0A4(iParam0))
	{
		iVar0 = Global_70668;
		unk_0xD097B48247D9FC03(iParam0);
		iVar2 = func_410(iParam0);
		bVar3 = func_403(iParam0, 0);
		bVar4 = func_401(iParam0);
		bVar5 = func_400(iParam0);
		if (bParam1)
		{
			bVar4 = true;
		}
		if (bParam2)
		{
			bVar4 = false;
		}
		iVar6 = 0;
		while (iVar6 < 127)
		{
			if (func_397(iVar6, iVar0))
			{
				if (func_392(&Var1, iVar6, iVar2, iParam0, -1))
				{
					if (func_389(iParam0, &Var1, iVar6, Var1.f_4, Var1.f_8, bVar3, bVar4, bParam1, bVar5))
					{
						unk_0x6F93105D4DDD526A(iParam0, Var1.f_4, Var1.f_5);
					}
				}
			}
			iVar6++;
		}
		if (func_397(123, iVar0))
		{
			if (unk_0x9FCD3CECD966A589(-1719270477, -1824026490) != 7)
			{
				unk_0x6F93105D4DDD526A(iParam0, -1719270477, -1824026490);
			}
		}
		iVar8 = unk_0xE94DD0E75DE69D1E(iVar2);
		iVar7 = 0;
		while (iVar7 < iVar8)
		{
			if (unk_0x5260EED750B93264(iVar2, iVar7, &Var9))
			{
				if (!unk_0x42683C90F2D005ED(Var9))
				{
					iVar10 = (129 + iVar7);
					if (func_397(iVar10, iVar0))
					{
						if (func_389(iParam0, &(Var9.f_7), iVar10, Var9.f_2, Var9.f_6, bVar3, bVar4, bParam1, bVar5))
						{
							if (!func_373(Var9.f_2, Var9.f_3))
							{
								unk_0x6F93105D4DDD526A(iParam0, Var9.f_2, Var9.f_3);
								func_372(iParam0, Var9.f_2, Var9.f_3);
							}
						}
					}
				}
			}
			iVar7++;
		}
	}
}

void func_372(int iParam0, int iParam1, int iParam2)//Position - 0x3793A
{
	switch (iParam1)
	{
		case -1016521996:
			switch (iParam2)
			{
				case 1321477520:
					unk_0x6F93105D4DDD526A(iParam0, -1016521996, 5866095);
					break;
				
				case -670835215:
					unk_0x6F93105D4DDD526A(iParam0, -1016521996, 1257645214);
					break;
				
				case -32315658:
					unk_0x6F93105D4DDD526A(iParam0, -1016521996, -1938877708);
					break;
				
				case -715501640:
					unk_0x6F93105D4DDD526A(iParam0, -1016521996, 177616986);
					break;
				
				case 812138662:
					unk_0x6F93105D4DDD526A(iParam0, -1016521996, -437640642);
					break;
				
				case -1950509905:
					unk_0x6F93105D4DDD526A(iParam0, -1016521996, 460297451);
					break;
				
				case 1850969667:
					unk_0x6F93105D4DDD526A(iParam0, -1016521996, -589899025);
					break;
				
				case 997671095:
					unk_0x6F93105D4DDD526A(iParam0, -1016521996, 342543493);
					break;
				
				case -1526467268:
					unk_0x6F93105D4DDD526A(iParam0, -1016521996, -950134188);
					break;
				
				case -881852779:
					unk_0x6F93105D4DDD526A(iParam0, -1016521996, 2043701187);
					break;
				
				case -570992218:
					unk_0x6F93105D4DDD526A(iParam0, -1016521996, 794519137);
					break;
				
				case -1075500139:
					unk_0x6F93105D4DDD526A(iParam0, -1016521996, 90598123);
					break;
				
				case -791689054:
					unk_0x6F93105D4DDD526A(iParam0, -1016521996, -151296204);
					break;
				
				case 699980662:
					unk_0x6F93105D4DDD526A(iParam0, -1016521996, 386731882);
					break;
				
				case -583230088:
					unk_0x6F93105D4DDD526A(iParam0, -1016521996, -1129017399);
					break;
				
				case 1922201848:
					unk_0x6F93105D4DDD526A(iParam0, -1016521996, -1175077252);
					break;
				
				case -767702908:
					unk_0x6F93105D4DDD526A(iParam0, -1016521996, -1710583235);
					break;
				
				case 1979813112:
					unk_0x6F93105D4DDD526A(iParam0, -1016521996, 900966291);
					break;
				
				case -2056272592:
					unk_0x6F93105D4DDD526A(iParam0, -1016521996, -153754682);
					break;
			}
			switch (iParam2)
			{
				case 371389080:
					unk_0x6F93105D4DDD526A(iParam0, -1016521996, 580372087);
					break;
				
				case -521204587:
					unk_0x6F93105D4DDD526A(iParam0, -1016521996, -326572091);
					break;
				
				case 1685732560:
					unk_0x6F93105D4DDD526A(iParam0, -1016521996, -1550532305);
					break;
				
				case -1386443378:
					unk_0x6F93105D4DDD526A(iParam0, -1016521996, -1913405685);
					break;
				
				case -1706648281:
					unk_0x6F93105D4DDD526A(iParam0, -1016521996, -956341143);
					break;
				
				case -519957866:
					unk_0x6F93105D4DDD526A(iParam0, -1016521996, 2063062018);
					break;
				
				case 653935582:
					unk_0x6F93105D4DDD526A(iParam0, -1016521996, 605481338);
					break;
				
				case 2111779395:
					unk_0x6F93105D4DDD526A(iParam0, -1016521996, -1708926987);
					break;
				
				case 428988289:
					unk_0x6F93105D4DDD526A(iParam0, -1016521996, 264383347);
					break;
				
				case -1903962822:
					unk_0x6F93105D4DDD526A(iParam0, -1016521996, 1101363062);
					break;
				
				case 1365770911:
					unk_0x6F93105D4DDD526A(iParam0, -1016521996, -1963254369);
					break;
				
				case 42029862:
					unk_0x6F93105D4DDD526A(iParam0, -1016521996, 390663856);
					break;
				
				case 438631811:
					unk_0x6F93105D4DDD526A(iParam0, -1016521996, 916481637);
					break;
				
				case -1478715891:
					unk_0x6F93105D4DDD526A(iParam0, -1016521996, 1930151778);
					break;
				
				case -1395531229:
					unk_0x6F93105D4DDD526A(iParam0, -1016521996, -1731016702);
					break;
				
				case 30333135:
					unk_0x6F93105D4DDD526A(iParam0, -1016521996, -1915197882);
					break;
				
				case 1783341339:
					unk_0x6F93105D4DDD526A(iParam0, -1016521996, -25535717);
					break;
				
				case -16077126:
					unk_0x6F93105D4DDD526A(iParam0, -1016521996, 1193200233);
					break;
				
				case -833643184:
					unk_0x6F93105D4DDD526A(iParam0, -1016521996, 1031663893);
					break;
			}
			break;
		
		case 1616273011:
			switch (iParam2)
			{
				case -1318802347:
					unk_0x6F93105D4DDD526A(iParam0, 1616273011, -815706791);
					break;
				
				case -1366750043:
					unk_0x6F93105D4DDD526A(iParam0, 1616273011, -1066127505);
					break;
			}
			break;
		
		case -1194930348:
			switch (iParam2)
			{
				case -841238543:
					unk_0x6F93105D4DDD526A(iParam0, -1194930348, -441419962);
					break;
				
				case -1405854945:
					unk_0x6F93105D4DDD526A(iParam0, -1194930348, 1647997020);
					break;
			}
			break;
		
		case -777275782:
			switch (iParam2)
			{
				case 671171671:
					unk_0x6F93105D4DDD526A(iParam0, -777275782, 904519720);
					break;
				
				case 1911627074:
					unk_0x6F93105D4DDD526A(iParam0, -777275782, -607391498);
					break;
			}
			break;
		
		case 484754152:
			switch (iParam2)
			{
				case 266230635:
					unk_0x6F93105D4DDD526A(iParam0, 484754152, -588549683);
					unk_0x6F93105D4DDD526A(iParam0, 484754152, 464027076);
					break;
				
				case -1261787835:
					unk_0x6F93105D4DDD526A(iParam0, 484754152, -965491494);
					unk_0x6F93105D4DDD526A(iParam0, 484754152, 939374190);
					break;
			}
			break;
	}
}

int func_373(int iParam0, int iParam1)//Position - 0x37E3D
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	
	switch (iParam0)
	{
		case 1616273011:
			switch (iParam1)
			{
				case -2123485438:
				case 1457900554:
					if (func_386(15426, -1, -1))
					{
						return 0;
					}
					if (iParam1 == -2123485438)
					{
						return !func_376(func_383(iParam1, 3), -1);
					}
					else
					{
						return !func_376(func_383(iParam1, 4), -1);
					}
					break;
				
				case -815706791:
				case -1066127505:
					if (func_386(15422, -1, -1))
					{
						return 0;
					}
					if (iParam1 == -815706791)
					{
						return !func_376(func_383(iParam1, 3), -1);
					}
					else
					{
						return !func_376(func_383(iParam1, 4), -1);
					}
					break;
				
				case -1318802347:
				case -1366750043:
					if (func_386(15423, -1, -1))
					{
						return 0;
					}
					if (iParam1 == -1318802347)
					{
						return !func_376(func_383(iParam1, 3), -1);
					}
					else
					{
						return !func_376(func_383(iParam1, 4), -1);
					}
					break;
				
				case 306110040:
				case 1944822196:
					if (func_386(15421, -1, -1))
					{
						return 0;
					}
					if (iParam1 == 306110040)
					{
						return !func_376(func_383(iParam1, 3), -1);
					}
					else
					{
						return !func_376(func_383(iParam1, 4), -1);
					}
					break;
				
				case 1828101251:
				case -1639289459:
					if (func_386(15427, -1, -1))
					{
						return 0;
					}
					if (iParam1 == 1828101251)
					{
						return !func_376(func_383(iParam1, 3), -1);
					}
					else
					{
						return !func_376(func_383(iParam1, 4), -1);
					}
					break;
				
				case -919314748:
				case 1282565442:
					if (func_386(15419, -1, -1))
					{
						return 0;
					}
					if (iParam1 == -919314748)
					{
						return !func_376(func_383(iParam1, 3), -1);
					}
					else
					{
						return !func_376(func_383(iParam1, 4), -1);
					}
					break;
				
				case 1971111649:
				case -884280700:
					if (func_386(15420, -1, -1))
					{
						return 0;
					}
					if (iParam1 == 1971111649)
					{
						return !func_376(func_383(iParam1, 3), -1);
					}
					else
					{
						return !func_376(func_383(iParam1, 4), -1);
					}
					break;
			}
			switch (iParam1)
			{
				case 1029334921:
				case -322091380:
					if (func_386(15394, -1, -1))
					{
						return 0;
					}
					if (iParam1 == 1029334921)
					{
						return !func_376(func_383(iParam1, 3), -1);
					}
					else
					{
						return !func_376(func_383(iParam1, 4), -1);
					}
					break;
				
				case -534855486:
				case -1168575065:
					if (func_323(209, -1))
					{
						return 0;
					}
					if (iParam1 == -534855486)
					{
						return !func_376(func_383(iParam1, 3), -1);
					}
					else
					{
						return !func_376(func_383(iParam1, 4), -1);
					}
					break;
				
				case -516333262:
				case 756873456:
					if (func_386(15406, -1, -1))
					{
						return 0;
					}
					if (iParam1 == -516333262)
					{
						return !func_376(func_383(iParam1, 3), -1);
					}
					else
					{
						return !func_376(func_383(iParam1, 4), -1);
					}
					break;
				
				case 485135095:
				case -730037708:
					if (func_386(15395, -1, -1))
					{
						return 0;
					}
					if (iParam1 == 485135095)
					{
						return !func_376(func_383(iParam1, 3), -1);
					}
					else
					{
						return !func_376(func_383(iParam1, 4), -1);
					}
					break;
				
				case 1713551997:
				case -970458486:
					if (func_323(209, -1))
					{
						return 0;
					}
					if (iParam1 == 1713551997)
					{
						return !func_376(func_383(iParam1, 3), -1);
					}
					else
					{
						return !func_376(func_383(iParam1, 4), -1);
					}
					break;
				
				case -1490658501:
				case 975601953:
					if (func_386(15410, -1, -1))
					{
						return 0;
					}
					if (iParam1 == -1490658501)
					{
						return !func_376(func_383(iParam1, 3), -1);
					}
					else
					{
						return !func_376(func_383(iParam1, 4), -1);
					}
					break;
				
				case -1735635238:
				case 1614208560:
					if (func_386(15407, -1, -1))
					{
						return 0;
					}
					if (iParam1 == -1735635238)
					{
						return !func_376(func_383(iParam1, 3), -1);
					}
					else
					{
						return !func_376(func_383(iParam1, 4), -1);
					}
					break;
				
				case 1931303956:
				case -726032561:
					if (func_323(209, -1))
					{
						return 0;
					}
					if (iParam1 == 1931303956)
					{
						return !func_376(func_383(iParam1, 3), -1);
					}
					else
					{
						return !func_376(func_383(iParam1, 4), -1);
					}
					break;
				
				case -1931617488:
				case -1824987162:
					if (func_323(209, -1))
					{
						return 0;
					}
					if (iParam1 == -1931617488)
					{
						return !func_376(func_383(iParam1, 3), -1);
					}
					else
					{
						return !func_376(func_383(iParam1, 4), -1);
					}
					break;
				
				case -1726332301:
				case 417579524:
					if (func_386(15414, -1, -1))
					{
						return 0;
					}
					if (iParam1 == -1726332301)
					{
						return !func_376(func_383(iParam1, 3), -1);
					}
					else
					{
						return !func_376(func_383(iParam1, 4), -1);
					}
					break;
				
				case -1382922530:
				case 734151492:
					if (func_386(15415, -1, -1))
					{
						return 0;
					}
					if (iParam1 == -1382922530)
					{
						return !func_376(func_383(iParam1, 3), -1);
					}
					else
					{
						return !func_376(func_383(iParam1, 4), -1);
					}
					break;
				
				case 452778672:
				case -1766862320:
					if (func_386(15399, -1, -1))
					{
						return 0;
					}
					if (iParam1 == 452778672)
					{
						return !func_376(func_383(iParam1, 3), -1);
					}
					else
					{
						return !func_376(func_383(iParam1, 4), -1);
					}
					break;
				
				case -1776790350:
				case 579562906:
					if (func_386(15404, -1, -1))
					{
						return 0;
					}
					if (iParam1 == -1776790350)
					{
						return !func_376(func_383(iParam1, 3), -1);
					}
					else
					{
						return !func_376(func_383(iParam1, 4), -1);
					}
					break;
				
				case -1988057295:
				case -619754931:
					if (func_323(209, -1))
					{
						return 0;
					}
					if (iParam1 == -1988057295)
					{
						return !func_376(func_383(iParam1, 3), -1);
					}
					else
					{
						return !func_376(func_383(iParam1, 4), -1);
					}
					break;
				
				case 816707921:
				case 1424441799:
					if (func_386(15392, -1, -1))
					{
						return 0;
					}
					if (iParam1 == 816707921)
					{
						return !func_376(func_383(iParam1, 3), -1);
					}
					else
					{
						return !func_376(func_383(iParam1, 4), -1);
					}
					break;
				
				case 744446190:
				case -1405036369:
					if (func_386(15390, -1, -1))
					{
						return 0;
					}
					if (iParam1 == 744446190)
					{
						return !func_376(func_383(iParam1, 3), -1);
					}
					else
					{
						return !func_376(func_383(iParam1, 4), -1);
					}
					break;
				
				case 917772807:
				case 1929056908:
					if (func_386(15402, -1, -1))
					{
						return 0;
					}
					if (iParam1 == 917772807)
					{
						return !func_376(func_383(iParam1, 3), -1);
					}
					else
					{
						return !func_376(func_383(iParam1, 4), -1);
					}
					break;
				
				case -292922355:
				case -34538790:
					if (func_386(15416, -1, -1))
					{
						return 0;
					}
					if (iParam1 == -292922355)
					{
						return !func_376(func_383(iParam1, 3), -1);
					}
					else
					{
						return !func_376(func_383(iParam1, 4), -1);
					}
					break;
				
				case -1495432685:
				case 1898518287:
					if (func_323(209, -1))
					{
						return 0;
					}
					if (iParam1 == -1495432685)
					{
						return !func_376(func_383(iParam1, 3), -1);
					}
					else
					{
						return !func_376(func_383(iParam1, 4), -1);
					}
					break;
			}
			break;
		
		case -240234547:
			switch (iParam1)
			{
				case 769964545:
				case 1916093085:
					if (func_386(9366, -1, -1))
					{
						return 0;
					}
					if (iParam1 == 769964545)
					{
						return !func_376(func_383(iParam1, 3), -1);
					}
					else
					{
						return !func_376(func_383(iParam1, 4), -1);
					}
					break;
				
				case 1424500982:
				case -701486200:
					if (func_386(9367, -1, -1))
					{
						return 0;
					}
					if (iParam1 == 1424500982)
					{
						return !func_376(func_383(iParam1, 3), -1);
					}
					else
					{
						return !func_376(func_383(iParam1, 4), -1);
					}
					break;
				
				case -1810785185:
				case 1951718630:
					if (func_386(9369, -1, -1))
					{
						return 0;
					}
					if (iParam1 == -1810785185)
					{
						return !func_376(func_383(iParam1, 3), -1);
					}
					else
					{
						return !func_376(func_383(iParam1, 4), -1);
					}
					break;
				
				case 837990279:
				case -1981978861:
					if (func_386(9368, -1, -1))
					{
						return 0;
					}
					if (iParam1 == 837990279)
					{
						return !func_376(func_383(iParam1, 3), -1);
					}
					else
					{
						return !func_376(func_383(iParam1, 4), -1);
					}
					break;
				
				case 1752551314:
				case 468661890:
					if (func_386(9365, -1, -1))
					{
						return 0;
					}
					if (iParam1 == 1752551314)
					{
						return !func_376(func_383(iParam1, 3), -1);
					}
					else
					{
						return !func_376(func_383(iParam1, 4), -1);
					}
					break;
				
				case 735155845:
				case 1907925586:
					if (func_386(9364, -1, -1))
					{
						return 0;
					}
					if (iParam1 == 735155845)
					{
						return !func_376(func_383(iParam1, 3), -1);
					}
					else
					{
						return !func_376(func_383(iParam1, 4), -1);
					}
					break;
				
				case 1863251462:
				case 646243571:
					if (func_386(9363, -1, -1))
					{
						return 0;
					}
					if (iParam1 == 1863251462)
					{
						return !func_376(func_383(iParam1, 3), -1);
					}
					else
					{
						return !func_376(func_383(iParam1, 4), -1);
					}
					break;
				
				case -2142058763:
				case 1953935161:
					if (func_386(9362, -1, -1))
					{
						return 0;
					}
					if (iParam1 == -2142058763)
					{
						return !func_376(func_383(iParam1, 3), -1);
					}
					else
					{
						return !func_376(func_383(iParam1, 4), -1);
					}
					break;
				
				case -207591105:
				case 874867224:
					if (func_386(9370, -1, -1))
					{
						return 0;
					}
					if (iParam1 == -207591105)
					{
						return !func_376(func_383(iParam1, 3), -1);
					}
					else
					{
						return !func_376(func_383(iParam1, 4), -1);
					}
					break;
				
				case -932813887:
				case 1344008898:
					if (func_386(9371, -1, -1))
					{
						return 0;
					}
					if (iParam1 == -932813887)
					{
						return !func_376(func_383(iParam1, 3), -1);
					}
					else
					{
						return !func_376(func_383(iParam1, 4), -1);
					}
					break;
				
				case -313503199:
				case 1297781304:
					if (func_386(9372, -1, -1))
					{
						return 0;
					}
					if (iParam1 == -313503199)
					{
						return !func_376(func_383(iParam1, 3), -1);
					}
					else
					{
						return !func_376(func_383(iParam1, 4), -1);
					}
					break;
				
				case 718936417:
				case 1977233252:
					if (func_386(9373, -1, -1))
					{
						return 0;
					}
					if (iParam1 == 718936417)
					{
						return !func_376(func_383(iParam1, 3), -1);
					}
					else
					{
						return !func_376(func_383(iParam1, 4), -1);
					}
					break;
				
				case -1107649605:
				case -194410344:
					if (func_386(9374, -1, -1))
					{
						return 0;
					}
					if (iParam1 == -1107649605)
					{
						return !func_376(func_383(iParam1, 3), -1);
					}
					else
					{
						return !func_376(func_383(iParam1, 4), -1);
					}
					break;
				
				case 39090475:
				case 392012609:
					if (func_386(9384, -1, -1))
					{
						return 0;
					}
					if (iParam1 == 39090475)
					{
						return !func_376(func_383(iParam1, 3), -1);
					}
					else
					{
						return !func_376(func_383(iParam1, 4), -1);
					}
					break;
				
				case 1628251208:
				case 705148450:
					if (func_386(9385, -1, -1))
					{
						return 0;
					}
					if (iParam1 == 1628251208)
					{
						return !func_376(func_383(iParam1, 3), -1);
					}
					else
					{
						return !func_376(func_383(iParam1, 4), -1);
					}
					break;
			}
			break;
		
		case -1194930348:
			switch (iParam1)
			{
				case -621355603:
				case -46521805:
					if (func_386(7551, -1, -1) || func_225(3772, -1, 0) >= Global_262145.f_15634)
					{
						return 0;
					}
					if (iParam1 == -621355603)
					{
						return !func_376(func_383(iParam1, 3), -1);
					}
					else
					{
						return !func_376(func_383(iParam1, 4), -1);
					}
					break;
				
				case -1006202521:
				case -1549217620:
					if (func_386(7467, -1, -1))
					{
						return 0;
					}
					if (iParam1 == -1006202521)
					{
						return !func_376(func_383(iParam1, 3), -1);
					}
					else
					{
						return !func_376(func_383(iParam1, 4), -1);
					}
					break;
				
				case -1834049539:
				case 1674429052:
					if (func_386(7468, -1, -1))
					{
						return 0;
					}
					if (iParam1 == -1834049539)
					{
						return !func_376(func_383(iParam1, 3), -1);
					}
					else
					{
						return !func_376(func_383(iParam1, 4), -1);
					}
					break;
				
				case -2060372580:
				case -254669596:
					if (func_386(7469, -1, -1))
					{
						return 0;
					}
					if (iParam1 == -2060372580)
					{
						return !func_376(func_383(iParam1, 3), -1);
					}
					else
					{
						return !func_376(func_383(iParam1, 4), -1);
					}
					break;
				
				case 1057304170:
				case 1802602254:
					if (func_386(7470, -1, -1))
					{
						return 0;
					}
					if (iParam1 == 1057304170)
					{
						return !func_376(func_383(iParam1, 3), -1);
					}
					else
					{
						return !func_376(func_383(iParam1, 4), -1);
					}
					break;
				
				case 1421572640:
				case -941072260:
					if (func_386(7471, -1, -1))
					{
						return 0;
					}
					if (iParam1 == 1421572640)
					{
						return !func_376(func_383(iParam1, 3), -1);
					}
					else
					{
						return !func_376(func_383(iParam1, 4), -1);
					}
					break;
				
				case 481259621:
				case -1844749517:
					if (func_386(7472, -1, -1))
					{
						return 0;
					}
					if (iParam1 == 481259621)
					{
						return !func_376(func_383(iParam1, 3), -1);
					}
					else
					{
						return !func_376(func_383(iParam1, 4), -1);
					}
					break;
				
				case 1227497670:
				case 82745424:
					if (func_386(7473, -1, -1))
					{
						return 0;
					}
					if (iParam1 == 1227497670)
					{
						return !func_376(func_383(iParam1, 3), -1);
					}
					else
					{
						return !func_376(func_383(iParam1, 4), -1);
					}
					break;
				
				case 319276780:
				case -673460083:
					if (func_386(7474, -1, -1))
					{
						return 0;
					}
					if (iParam1 == 319276780)
					{
						return !func_376(func_383(iParam1, 3), -1);
					}
					else
					{
						return !func_376(func_383(iParam1, 4), -1);
					}
					break;
				
				case 2070827921:
				case -99954496:
					if (func_386(7475, -1, -1))
					{
						return 0;
					}
					if (iParam1 == 2070827921)
					{
						return !func_376(func_383(iParam1, 3), -1);
					}
					else
					{
						return !func_376(func_383(iParam1, 4), -1);
					}
					break;
				
				case 1433629991:
				case 2078163456:
					if (func_386(7476, -1, -1))
					{
						return 0;
					}
					if (iParam1 == 1433629991)
					{
						return !func_376(func_383(iParam1, 3), -1);
					}
					else
					{
						return !func_376(func_383(iParam1, 4), -1);
					}
					break;
				
				case -1712994650:
				case 1362343227:
					if (func_386(7477, -1, -1))
					{
						return 0;
					}
					if (iParam1 == -1712994650)
					{
						return !func_376(func_383(iParam1, 3), -1);
					}
					else
					{
						return !func_376(func_383(iParam1, 4), -1);
					}
					break;
				
				case 2125094286:
				case 1176005743:
					if (func_386(7478, -1, -1))
					{
						return 0;
					}
					if (iParam1 == 2125094286)
					{
						return !func_376(func_383(iParam1, 3), -1);
					}
					else
					{
						return !func_376(func_383(iParam1, 4), -1);
					}
					break;
				
				case 712298404:
				case -1504557219:
					if (func_386(7479, -1, -1))
					{
						return 0;
					}
					if (iParam1 == 712298404)
					{
						return !func_376(func_383(iParam1, 3), -1);
					}
					else
					{
						return !func_376(func_383(iParam1, 4), -1);
					}
					break;
				
				case 1998072324:
				case 367912881:
					if (func_386(7480, -1, -1))
					{
						return 0;
					}
					if (iParam1 == 1998072324)
					{
						return !func_376(func_383(iParam1, 3), -1);
					}
					else
					{
						return !func_376(func_383(iParam1, 4), -1);
					}
					break;
				
				case 1249206960:
				case -836343280:
					if (func_386(7481, -1, -1))
					{
						return 0;
					}
					if (iParam1 == 1249206960)
					{
						return !func_376(func_383(iParam1, 3), -1);
					}
					else
					{
						return !func_376(func_383(iParam1, 4), -1);
					}
					break;
			}
			break;
		
		case -1907832850:
			switch (iParam1)
			{
				case 2062186390:
				case 283190173:
					if (func_386(4260, -1, -1))
					{
						return 0;
					}
					if (iParam1 == 283190173)
					{
						return !func_376(func_383(iParam1, 3), -1);
					}
					else
					{
						return !func_376(func_383(iParam1, 4), -1);
					}
					break;
				
				case -60867780:
				case 1528527015:
					if (func_386(4257, -1, -1))
					{
						return 0;
					}
					if (iParam1 == 1528527015)
					{
						return !func_376(func_383(iParam1, 3), -1);
					}
					else
					{
						return !func_376(func_383(iParam1, 4), -1);
					}
					break;
				
				case 926967912:
				case -1690029966:
					if (func_386(4269, -1, -1))
					{
						return 0;
					}
					if (iParam1 == -1690029966)
					{
						return !func_376(func_383(iParam1, 3), -1);
					}
					else
					{
						return !func_376(func_383(iParam1, 4), -1);
					}
					break;
				
				case -1886278590:
				case -1685994466:
					if (func_386(4261, -1, -1))
					{
						return 0;
					}
					if (iParam1 == -1685994466)
					{
						return !func_376(func_383(iParam1, 3), -1);
					}
					else
					{
						return !func_376(func_383(iParam1, 4), -1);
					}
					break;
				
				case -1314959708:
				case 255166927:
					if (func_386(4259, -1, -1))
					{
						return 0;
					}
					if (iParam1 == 255166927)
					{
						return !func_376(func_383(iParam1, 3), -1);
					}
					else
					{
						return !func_376(func_383(iParam1, 4), -1);
					}
					break;
				
				case -1696774529:
				case -271257487:
					if (func_386(4268, -1, -1))
					{
						return 0;
					}
					if (iParam1 == -271257487)
					{
						return !func_376(func_383(iParam1, 3), -1);
					}
					else
					{
						return !func_376(func_383(iParam1, 4), -1);
					}
					break;
				
				case -356446484:
				case 1885215284:
					if (func_386(4265, -1, -1))
					{
						return 0;
					}
					if (iParam1 == 1885215284)
					{
						return !func_376(func_383(iParam1, 3), -1);
					}
					else
					{
						return !func_376(func_383(iParam1, 4), -1);
					}
					break;
				
				case 857810380:
				case -1935156988:
					if (func_386(4258, -1, -1))
					{
						return 0;
					}
					if (iParam1 == -1935156988)
					{
						return !func_376(func_383(iParam1, 3), -1);
					}
					else
					{
						return !func_376(func_383(iParam1, 4), -1);
					}
					break;
				
				case -629676646:
				case 1061465906:
					if (func_386(4264, -1, -1))
					{
						return 0;
					}
					if (iParam1 == 1061465906)
					{
						return !func_376(func_383(iParam1, 3), -1);
					}
					else
					{
						return !func_376(func_383(iParam1, 4), -1);
					}
					break;
				
				case -1879530481:
				case -871031729:
					if (func_386(4267, -1, -1))
					{
						return 0;
					}
					if (iParam1 == -871031729)
					{
						return !func_376(func_383(iParam1, 3), -1);
					}
					else
					{
						return !func_376(func_383(iParam1, 4), -1);
					}
					break;
				
				case -1265847311:
				case -101171485:
					if (func_386(4262, -1, -1))
					{
						return 0;
					}
					if (iParam1 == -101171485)
					{
						return !func_376(func_383(iParam1, 3), -1);
					}
					else
					{
						return !func_376(func_383(iParam1, 4), -1);
					}
					break;
				
				case 32094424:
				case -1590298770:
					if (func_386(4263, -1, -1))
					{
						return 0;
					}
					if (iParam1 == -1590298770)
					{
						return !func_376(func_383(iParam1, 3), -1);
					}
					else
					{
						return !func_376(func_383(iParam1, 4), -1);
					}
					break;
				
				case 1969286744:
				case 303441856:
					if (func_386(4266, -1, -1))
					{
						return 0;
					}
					if (iParam1 == 303441856)
					{
						return !func_376(func_383(iParam1, 3), -1);
					}
					else
					{
						return !func_376(func_383(iParam1, 4), -1);
					}
					break;
			}
			break;
		
		case 62137527:
			switch (iParam1)
			{
				case 386581472:
				case 1466454525:
					if (func_225(2920, -1, 0) > 0)
					{
						return 0;
					}
					return !func_376(func_383(iParam1, 3), -1);
					break;
				
				case 979307144:
				case -473732439:
					if (func_225(2920, -1, 0) > 0)
					{
						return 0;
					}
					return !func_376(func_383(iParam1, 4), -1);
					break;
			}
			break;
		
		case -1542189594:
			switch (iParam1)
			{
				case -2049689650:
				case 560620683:
					if (func_386(113, -1, -1))
					{
						return 0;
					}
					if (iParam1 == -2049689650)
					{
						return !func_376(func_383(iParam1, 3), -1);
					}
					else
					{
						return !func_376(func_383(iParam1, 4), -1);
					}
					break;
			}
			break;
		
		case -777275782:
			switch (iParam1)
			{
				case -627999265:
				case 1682346315:
				case 1021952654:
				case 1319396867:
				case 560794517:
				case 858697496:
				case -30981230:
				case -328032215:
				case -1451681225:
				case 267904819:
					if (iParam1 == -627999265)
					{
						if (func_386(3770, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == 1682346315)
					{
						if (func_386(3771, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == 1021952654)
					{
						if (func_386(3772, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == 1319396867)
					{
						if (func_386(3773, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == 560794517)
					{
						if (func_386(3774, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == 858697496)
					{
						if (func_386(3775, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == -30981230)
					{
						if (func_386(3776, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == -328032215)
					{
						if (func_386(3777, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == -1451681225)
					{
						if (func_386(3778, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == 267904819)
					{
						if (func_386(3779, -1, -1))
						{
							return 0;
						}
					}
					return !func_376(func_383(iParam1, 3), -1);
					break;
				
				case -1864998224:
				case -2140814897:
				case 223468453:
				case -83970305:
				case -406843262:
				case -954740942:
				case -1675526854:
				case 2111717556:
				case -415395003:
				case 427521984:
					if (iParam1 == -1864998224)
					{
						if (func_386(3770, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == -2140814897)
					{
						if (func_386(3771, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == 223468453)
					{
						if (func_386(3772, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == -83970305)
					{
						if (func_386(3773, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == -406843262)
					{
						if (func_386(3774, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == -954740942)
					{
						if (func_386(3775, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == -1675526854)
					{
						if (func_386(3776, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == 2111717556)
					{
						if (func_386(3777, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == -415395003)
					{
						if (func_386(3778, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == 427521984)
					{
						if (func_386(3779, -1, -1))
						{
							return 0;
						}
					}
					return !func_376(func_383(iParam1, 4), -1);
					break;
				
				case -863391184:
				case 671171671:
				case 1675446188:
				case 1911627074:
					if ((((func_386(3765, -1, -1) && func_386(3766, -1, -1)) && func_386(3767, -1, -1)) && func_386(3768, -1, -1)) && func_386(3769, -1, -1))
					{
						return 0;
					}
					return 1;
					break;
			}
			break;
		
		case 243848076:
			switch (iParam1)
			{
				case 632918673:
				case 1525246127:
					return !func_386(3593, -1, -1);
					break;
			}
			break;
		
		case -1398869298:
			switch (iParam1)
			{
				case 1443536758:
				case 1333229624:
				case -1665422117:
				case 1100930183:
				case -1595008258:
				case 94055115:
				case -627896761:
				case 1873477305:
					return 1;
					break;
				
				case 196632624:
				case -1644428107:
				case 1108198688:
				case 810099095:
					return 1;
					break;
				
				case 300677115:
				case 262692161:
				case -1684141219:
				case 390655118:
				case -479442624:
				case -542924311:
				case 1696910411:
				case -1259058037:
					return 1;
					break;
				
				case 1980445908:
				case -1882429354:
				case -1235341889:
				case -1544517404:
					return 1;
					break;
				
				case -1450406320:
				case 1412653072:
					return (!func_323(152, -1) && !func_386(9440, -1, -1));
					break;
				
				case 210195800:
				case 7463306:
					return (!func_323(151, -1) && !func_386(9430, -1, -1));
					break;
				
				case 953986562:
					return (!func_376(func_383(iParam1, 3), -1) && !func_386(9426, -1, -1));
					break;
				
				case 585335312:
					return (!func_376(func_383(iParam1, 3), -1) && !func_386(9427, -1, -1));
					break;
				
				case 489617063:
					return (!func_376(func_383(iParam1, 3), -1) && !func_386(9428, -1, -1));
					break;
				
				case 1843402776:
					return (!func_376(func_383(iParam1, 3), -1) && !func_386(9431, -1, -1));
					break;
				
				case -1600520821:
					return (!func_376(func_383(iParam1, 3), -1) && !func_386(9432, -1, -1));
					break;
				
				case 1399087889:
					return (!func_376(func_383(iParam1, 3), -1) && !func_386(9433, -1, -1));
					break;
				
				case 1169344430:
					return (!func_376(func_383(iParam1, 3), -1) && !func_386(9439, -1, -1));
					break;
				
				case -2028647818:
					return (!func_376(func_383(iParam1, 3), -1) && !func_386(9434, -1, -1));
					break;
				
				case -1335845620:
					return (!func_376(func_383(iParam1, 3), -1) && !func_386(9435, -1, -1));
					break;
				
				case -1209849091:
					return (!func_376(func_383(iParam1, 3), -1) && !func_386(9436, -1, -1));
					break;
				
				case 2065609077:
					return (!func_376(func_383(iParam1, 3), -1) && !func_386(9429, -1, -1));
					break;
				
				case -664245241:
					return (!func_376(func_383(iParam1, 3), -1) && !func_386(9437, -1, -1));
					break;
				
				case 1531057961:
					return (!func_376(func_383(iParam1, 4), -1) && !func_386(9426, -1, -1));
					break;
				
				case 1986678137:
					return (!func_376(func_383(iParam1, 4), -1) && !func_386(9427, -1, -1));
					break;
				
				case 2142789653:
					return (!func_376(func_383(iParam1, 4), -1) && !func_386(9428, -1, -1));
					break;
				
				case 308053343:
					return (!func_376(func_383(iParam1, 4), -1) && !func_386(9431, -1, -1));
					break;
				
				case 753842819:
					return (!func_376(func_383(iParam1, 4), -1) && !func_386(9432, -1, -1));
					break;
				
				case 1052794406:
					return (!func_376(func_383(iParam1, 4), -1) && !func_386(9433, -1, -1));
					break;
				
				case -695726661:
					return (!func_376(func_383(iParam1, 4), -1) && !func_386(9439, -1, -1));
					break;
				
				case -1001821890:
					return (!func_376(func_383(iParam1, 4), -1) && !func_386(9434, -1, -1));
					break;
				
				case -1425459522:
					return (!func_376(func_383(iParam1, 4), -1) && !func_386(9435, -1, -1));
					break;
				
				case 1163510365:
					return (!func_376(func_383(iParam1, 4), -1) && !func_386(9436, -1, -1));
					break;
				
				case 933242602:
					return (!func_376(func_383(iParam1, 4), -1) && !func_386(9429, -1, -1));
					break;
				
				case -1347021116:
					return (!func_376(func_383(iParam1, 4), -1) && !func_386(9437, -1, -1));
					break;
				
				case 1676130538:
				case -1730534702:
				case -1767432596:
				case 1297354841:
				case -839806574:
				case -542100209:
					return !func_375();
					break;
			}
			break;
		
		case -1684351737:
			switch (iParam1)
			{
				case -190040148:
				case -11341151:
					return !func_386(3608, -1, -1);
					break;
			}
			break;
		
		case -1677471575:
			switch (iParam1)
			{
				case 42936837:
				case 516055815:
					return (!func_386(3615, -1, -1) && !func_386(9438, -1, -1));
					break;
			}
			break;
		
		case -1056335443:
			if (iParam1 == -963164512)
			{
				return 1;
			}
			switch (iParam1)
			{
				case 670952414:
				case -1544625218:
					return !func_386(3783, -1, -1);
					break;
				
				case -282875325:
				case 1185175875:
					return !func_386(3784, -1, -1);
					break;
				
				case 2079623104:
				case 155591269:
					return !func_386(3785, -1, -1);
					break;
				
				case 1088443427:
				case -1057958846:
					return !func_386(3786, -1, -1);
					break;
				
				case 200001600:
				case -1853795495:
					return !func_386(3787, -1, -1);
					break;
				
				case 1620729159:
				case -1860485560:
					return !func_386(3788, -1, -1);
					break;
				
				case -1713274238:
				case 499288642:
					return !func_386(3789, -1, -1);
					break;
				
				case -1571590969:
				case -7887054:
					return !func_386(3790, -1, -1);
					break;
				
				case -457639374:
				case -1553041502:
					return !func_386(3791, -1, -1);
					break;
				
				case 64160805:
				case -1080591445:
					return !func_386(3792, -1, -1);
					break;
				
				case 776078819:
				case -1303573005:
					if (iParam1 == 776078819)
					{
						iVar0 = func_225(2431, -1, 0);
						if (unk_0xC80D31E4B587871C(iVar0, 0))
						{
							return 0;
						}
					}
					else if (iParam1 == -1303573005)
					{
						iVar1 = func_225(2411, -1, 0);
						if (unk_0xC80D31E4B587871C(iVar1, 18))
						{
							return 0;
						}
					}
					return !func_386(3793, -1, -1);
					break;
				
				case -1069464482:
				case 2085207152:
					if (iParam1 == -1069464482)
					{
						iVar2 = func_225(2431, -1, 0);
						if (unk_0xC80D31E4B587871C(iVar2, 1))
						{
							return 0;
						}
					}
					else if (iParam1 == 2085207152)
					{
						iVar3 = func_225(2411, -1, 0);
						if (unk_0xC80D31E4B587871C(iVar3, 19))
						{
							return 0;
						}
					}
					return !func_386(3794, -1, -1);
					break;
				
				case -1342875239:
				case 857137150:
					if (iParam1 == -1342875239)
					{
						iVar4 = func_225(2431, -1, 0);
						if (unk_0xC80D31E4B587871C(iVar4, 2))
						{
							return 0;
						}
					}
					else if (iParam1 == 857137150)
					{
						iVar5 = func_225(2411, -1, 0);
						if (unk_0xC80D31E4B587871C(iVar5, 20))
						{
							return 0;
						}
					}
					return !func_386(3795, -1, -1);
					break;
				
				case 1967892405:
				case 535952639:
					if (iParam1 == 1967892405)
					{
						iVar6 = func_225(2431, -1, 0);
						if (unk_0xC80D31E4B587871C(iVar6, 3))
						{
							return 0;
						}
					}
					else if (iParam1 == 535952639)
					{
						iVar7 = func_225(2411, -1, 0);
						if (unk_0xC80D31E4B587871C(iVar7, 21))
						{
							return 0;
						}
					}
					return !func_386(3796, -1, -1);
					break;
				
				case 642864781:
				case -1974657401:
					if (iParam1 == 642864781)
					{
						iVar8 = func_225(2431, -1, 0);
						if (unk_0xC80D31E4B587871C(iVar8, 4))
						{
							return 0;
						}
					}
					else if (iParam1 == -1974657401)
					{
						iVar9 = func_225(2411, -1, 0);
						if (unk_0xC80D31E4B587871C(iVar9, 22))
						{
							return 0;
						}
					}
					return !func_386(3797, -1, -1);
					break;
				
				case 1270860039:
				case 129909013:
					if (iParam1 == 1270860039)
					{
						iVar10 = func_225(2431, -1, 0);
						if (unk_0xC80D31E4B587871C(iVar10, 5))
						{
							return 0;
						}
					}
					else if (iParam1 == 129909013)
					{
						iVar11 = func_225(2411, -1, 0);
						if (unk_0xC80D31E4B587871C(iVar11, 23))
						{
							return 0;
						}
					}
					return !func_386(3798, -1, -1);
					break;
				
				case -1290780406:
				case -1499060170:
					if (iParam1 == -1290780406)
					{
						iVar12 = func_225(2431, -1, 0);
						if (unk_0xC80D31E4B587871C(iVar12, 6))
						{
							return 0;
						}
					}
					else if (iParam1 == -1499060170)
					{
						iVar13 = func_225(2411, -1, 0);
						if (unk_0xC80D31E4B587871C(iVar13, 24))
						{
							return 0;
						}
					}
					return !func_386(3799, -1, -1);
					break;
				
				case 1127641545:
				case 412032123:
					if (iParam1 == 1127641545)
					{
						iVar14 = func_225(2431, -1, 0);
						if (unk_0xC80D31E4B587871C(iVar14, 7))
						{
							return 0;
						}
					}
					else if (iParam1 == 412032123)
					{
						iVar15 = func_225(2411, -1, 0);
						if (unk_0xC80D31E4B587871C(iVar15, 25))
						{
							return 0;
						}
					}
					return !func_386(3800, -1, -1);
					break;
				
				case -1221948530:
				case 915049044:
					if (iParam1 == -1221948530)
					{
						iVar16 = func_225(2431, -1, 0);
						if (unk_0xC80D31E4B587871C(iVar16, 8))
						{
							return 0;
						}
					}
					else if (iParam1 == 915049044)
					{
						iVar17 = func_225(2411, -1, 0);
						if (unk_0xC80D31E4B587871C(iVar17, 26))
						{
							return 0;
						}
					}
					return !func_386(3801, -1, -1);
					break;
				
				case 1954153055:
				case 456478679:
					if (iParam1 == 1954153055)
					{
						iVar18 = func_225(2431, -1, 0);
						if (unk_0xC80D31E4B587871C(iVar18, 9))
						{
							return 0;
						}
					}
					else if (iParam1 == 456478679)
					{
						iVar19 = func_225(2411, -1, 0);
						if (unk_0xC80D31E4B587871C(iVar19, 27))
						{
							return 0;
						}
					}
					return !func_386(3802, -1, -1);
					break;
			}
			break;
		
		case 484754152:
			switch (iParam1)
			{
				case -588549683:
				case 464027076:
					return 1;
					break;
				
				case -965491494:
				case 939374190:
					return 1;
					break;
			}
			break;
		
		case 598190139:
			switch (iParam1)
			{
				case -1458541976:
				case -606014753:
				case -613376371:
				case -446291501:
				case -1034642040:
				case 1022637316:
				case -1677156418:
				case -1130213300:
					return !func_374();
					break;
			}
			break;
	}
	return 0;
}

int func_374()//Position - 0x3A2CD
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

bool func_375()//Position - 0x3A388
{
	return unk_0x21EA5D4DC72DE119(-1762644250);
}

bool func_376(int iParam0, int iParam1)//Position - 0x3A399
{
	int iVar0;
	int iVar1;
	
	if (func_379(iParam0) == 7872)
	{
		return 0;
	}
	iVar0 = func_378(iParam0, iParam1);
	iVar1 = iParam0;
	return unk_0xC80D31E4B587871C(iVar0, func_377(iVar1));
}

int func_377(int iParam0)//Position - 0x3A3CB
{
	return (iParam0 % 32);
}

int func_378(var uParam0, int iParam1)//Position - 0x3A3D8
{
	int iVar0;
	
	iVar0 = func_225(func_379(uParam0), iParam1, 0);
	return iVar0;
}

int func_379(var uParam0)//Position - 0x3A3F1
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	iVar1 = func_382(iVar0);
	if ((func_381() == 0 || func_380() == 0) || (func_381() == 999 && func_380() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 1035;
				break;
			
			case 1:
				return 1036;
				break;
			
			case 2:
				return 1037;
				break;
			
			case 3:
				return 1038;
				break;
			
			case 4:
				return 1039;
				break;
			
			case 5:
				return 1499;
				break;
			
			case 6:
				return 1753;
				break;
			
			case 7:
				return 1947;
				break;
			
			case 8:
				return 1948;
				break;
			
			case 9:
				return 1949;
				break;
			
			case 10:
				return 1950;
				break;
			
			case 11:
				return 1951;
				break;
			
			case 12:
				return 1952;
				break;
			
			case 13:
				return 2411;
				break;
			
			case 14:
				return 2431;
				break;
			
			case 15:
				return 2434;
				break;
			
			case 16:
				return 2437;
				break;
			
			case 17:
				return 2600;
				break;
			
			case 18:
				return 2603;
				break;
			
			case 19:
				return 2606;
				break;
			
			case 20:
				return 3766;
				break;
			
			case 21:
				return 3769;
				break;
			
			case 22:
				return 3844;
				break;
			
			case 23:
				return 3847;
				break;
			
			case 24:
				return 3850;
				break;
			
			case 25:
				return 3853;
				break;
			
			case 26:
				return 5344;
				break;
			
			case 27:
				return 5347;
				break;
			
			case 28:
				return 5449;
				break;
			
			case 29:
				return 5452;
				break;
			
			case 30:
				return 6411;
				break;
			
			case 31:
				return 6414;
				break;
			}
	}
	return 7872;
}

int func_380()//Position - 0x3A61F
{
	return Global_25234;
}

int func_381()//Position - 0x3A62A
{
	return Global_25233;
}

int func_382(int iParam0)//Position - 0x3A635
{
	return (iParam0 / 32);
}

int func_383(int iParam0, int iParam1)//Position - 0x3A642
{
	var uVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;
	
	if (iParam1 == 3)
	{
		if (func_385(iParam0, &uVar0))
		{
			return uVar0;
		}
	}
	else if (iParam1 == 4)
	{
		if (func_384(iParam0, &uVar0))
		{
			return uVar0;
		}
	}
	iVar2 = unk_0xE94DD0E75DE69D1E(iParam1);
	iVar1 = 0;
	while (iVar1 < iVar2)
	{
		if (unk_0x5260EED750B93264(iParam1, iVar1, &Var3))
		{
			if (iParam0 == Var3.f_3)
			{
				return (129 + iVar1);
			}
		}
		iVar1++;
	}
	return -1;
}

int func_384(int iParam0, var uParam1)//Position - 0x3A6B3
{
	int iVar0;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case 497719213:
			iVar0 = 0;
			break;
		
		case -1575660783:
			iVar0 = 1;
			break;
		
		case -720631087:
			iVar0 = 2;
			break;
		
		case 2143620721:
			iVar0 = 3;
			break;
		
		case 2049754822:
			iVar0 = 4;
			break;
		
		case -1293749076:
			iVar0 = 5;
			break;
		
		case -1571403599:
			iVar0 = 6;
			break;
		
		case -711123906:
			iVar0 = 7;
			break;
		
		case 152801037:
			iVar0 = 8;
			break;
		
		case -1324018585:
			iVar0 = 9;
			break;
		
		case -481068829:
			iVar0 = 10;
			break;
		
		case -1486741196:
			iVar0 = 11;
			break;
		
		case 939412564:
			iVar0 = 12;
			break;
		
		case 1187637739:
			iVar0 = 13;
			break;
		
		case -1092669445:
			iVar0 = 14;
			break;
		
		case 1659530389:
			iVar0 = 15;
			break;
		
		case 996857777:
			iVar0 = 16;
			break;
		
		case 817476859:
			iVar0 = 17;
			break;
		
		case -17051268:
			iVar0 = 18;
			break;
		
		case 1293774274:
			iVar0 = 19;
			break;
		
		case 567121699:
			iVar0 = 20;
			break;
		
		case -1179302160:
			iVar0 = 21;
			break;
		
		case -949165473:
			iVar0 = 22;
			break;
		
		case 354975189:
			iVar0 = 23;
			break;
		
		case -489121482:
			iVar0 = 24;
			break;
		
		case -1636954018:
			iVar0 = 25;
			break;
		
		case -1277740240:
			iVar0 = 26;
			break;
		
		case -1047439708:
			iVar0 = 27;
			break;
		
		case -814026121:
			iVar0 = 28;
			break;
		
		case 1732157956:
			iVar0 = 29;
			break;
		
		case 1024282018:
			iVar0 = 30;
			break;
		
		case -2099685063:
			iVar0 = 31;
			break;
		
		case 1483932781:
			iVar0 = 32;
			break;
		
		case 1406925627:
			iVar0 = 33;
			break;
		
		case 698590923:
			iVar0 = 34;
			break;
		
		case 1869001296:
			iVar0 = 35;
			break;
		
		case 1169907450:
			iVar0 = 36;
			break;
		
		case 717727185:
			iVar0 = 37;
			break;
		
		case 1058197095:
			iVar0 = 38;
			break;
		
		case 434115743:
			iVar0 = 39;
			break;
		
		case 665432114:
			iVar0 = 40;
			break;
		
		case 1198780358:
			iVar0 = 41;
			break;
		
		case -2128873857:
			iVar0 = 42;
			break;
		
		case -148547780:
			iVar0 = 43;
			break;
		
		case 1819096318:
			iVar0 = 44;
			break;
		
		case 1051122042:
			iVar0 = 45;
			break;
		
		case -1350495965:
			iVar0 = 46;
			break;
		
		case -150859291:
			iVar0 = 47;
			break;
		
		case -1186193045:
			iVar0 = 48;
			break;
		
		case -1206837515:
			iVar0 = 49;
			break;
		
		case -1513653662:
			iVar0 = 50;
			break;
		
		case -543948331:
			iVar0 = 51;
			break;
		
		case -175559233:
			iVar0 = 52;
			break;
		
		case -131530830:
			iVar0 = 53;
			break;
		
		case -1816086813:
			iVar0 = 54;
			break;
		
		case -2113006722:
			iVar0 = 55;
			break;
		
		case -1101886458:
			iVar0 = 56;
			break;
		
		case -1398740829:
			iVar0 = 57;
			break;
		
		case 1939258347:
			iVar0 = 58;
			break;
		
		case -1004151544:
			iVar0 = 59;
			break;
		
		case -822873436:
			iVar0 = 60;
			break;
		
		case -1445222284:
			iVar0 = 61;
			break;
		
		case -63910623:
			iVar0 = 62;
			break;
		
		case 101834979:
			iVar0 = 63;
			break;
		
		case -673512330:
			iVar0 = 64;
			break;
		
		case -423845319:
			iVar0 = 65;
			break;
		
		case 963561372:
			iVar0 = 66;
			break;
		
		case 1384839636:
			iVar0 = 67;
			break;
		
		case -1712879828:
			iVar0 = 68;
			break;
		
		case -951688727:
			iVar0 = 69;
			break;
		
		case -1132639145:
			iVar0 = 70;
			break;
		
		case -513632731:
			iVar0 = 71;
			break;
		
		case 263680718:
			iVar0 = 72;
			break;
		
		case 36296627:
			iVar0 = 73;
			break;
		
		case 800240324:
			iVar0 = 74;
			break;
		
		case 614243480:
			iVar0 = 75;
			break;
		
		case 1408138043:
			iVar0 = 76;
			break;
		
		case 957564293:
			iVar0 = 77;
			break;
		
		case -1614279399:
			iVar0 = 78;
			break;
		
		case -1451286393:
			iVar0 = 79;
			break;
		
		case -1758069771:
			iVar0 = 80;
			break;
		
		case -1225475222:
			iVar0 = 81;
			break;
		
		case -1992892433:
			iVar0 = 82;
			break;
		
		case -1838157215:
			iVar0 = 83;
			break;
		
		case 1688803028:
			iVar0 = 84;
			break;
		
		case 1844259164:
			iVar0 = 85;
			break;
		
		case 1070943545:
			iVar0 = 86;
			break;
		
		case 1234460855:
			iVar0 = 87;
			break;
		
		case -753798460:
			iVar0 = 88;
			break;
		
		case -1453351072:
			iVar0 = 89;
			break;
		
		case -1308053326:
			iVar0 = 90;
			break;
		
		case -2083859401:
			iVar0 = 91;
			break;
		
		case 1586137527:
			iVar0 = 92;
			break;
		
		case 1884564810:
			iVar0 = 93;
			break;
		
		case 1092964089:
			iVar0 = 94;
			break;
		
		case 1264280421:
			iVar0 = 95;
			break;
		
		case 496601058:
			iVar0 = 96;
			break;
		
		case 861352797:
			iVar0 = 97;
			break;
		
		case 1418328330:
			iVar0 = 98;
			break;
		
		case 1784554566:
			iVar0 = 99;
			break;
	}
	switch (iParam0)
	{
		case 2081736627:
			iVar0 = 100;
			break;
		
		case -1897271971:
			iVar0 = 101;
			break;
		
		case -1666742056:
			iVar0 = 102;
			break;
		
		case -1282165072:
			iVar0 = 103;
			break;
		
		case -1052880379:
			iVar0 = 104;
			break;
		
		case -745474390:
			iVar0 = 105;
			break;
		
		case -515796465:
			iVar0 = 106;
			break;
		
		case -811206225:
			iVar0 = 107;
			break;
		
		case -1586815686:
			iVar0 = 108;
			break;
		
		case -1423429452:
			iVar0 = 109;
			break;
		
		case -1697869815:
			iVar0 = 110;
			break;
		
		case -1470846183:
			iVar0 = 111;
			break;
		
		case 1093884035:
			iVar0 = 112;
			break;
		
		case 861256904:
			iVar0 = 113;
			break;
		
		case 603201029:
			iVar0 = 114;
			break;
		
		case 1991426949:
			iVar0 = 115;
			break;
		
		case -135838228:
			iVar0 = 116;
			break;
		
		case 121616864:
			iVar0 = 117;
			break;
		
		case -834517002:
			iVar0 = 118;
			break;
		
		case -403932342:
			iVar0 = 119;
			break;
		
		case -1179738417:
			iVar0 = 120;
			break;
		
		case -1022250603:
			iVar0 = 121;
			break;
		
		case 558694786:
			iVar0 = 122;
			break;
		
		case 569279177:
			iVar0 = 123;
			break;
		
		case 544309199:
			iVar0 = 124;
			break;
		
		case 1190448341:
			iVar0 = 125;
			break;
		
		case 885139568:
			iVar0 = 126;
			break;
		
		case -1845683606:
			iVar0 = 127;
			break;
		
		case -1555317497:
			iVar0 = 128;
			break;
		
		case 1704673699:
			iVar0 = 129;
			break;
		
		case 1993401358:
			iVar0 = 130;
			break;
		
		case 1227065524:
			iVar0 = 131;
			break;
		
		case -533227790:
			iVar0 = 132;
			break;
		
		case 309459814:
			iVar0 = 133;
			break;
		
		case 77815753:
			iVar0 = 134;
			break;
		
		case -280939203:
			iVar0 = 135;
			break;
		
		case 1246882601:
			iVar0 = 136;
			break;
		
		case 314833986:
			iVar0 = 137;
			break;
		
		case -25635924:
			iVar0 = 138;
			break;
		
		case 351567983:
			iVar0 = 139;
			break;
		
		case -2027428652:
			iVar0 = 140;
			break;
		
		case 962677064:
			iVar0 = 141;
			break;
		
		case -105475497:
			iVar0 = 142;
			break;
		
		case 766835283:
			iVar0 = 143;
			break;
		
		case 471979821:
			iVar0 = 144;
			break;
		
		case 1122542778:
			iVar0 = 145;
			break;
		
		case 815530017:
			iVar0 = 146;
			break;
		
		case 1157900525:
			iVar0 = 147;
			break;
		
		case 859243859:
			iVar0 = 148;
			break;
		
		case 2032013608:
			iVar0 = 149;
			break;
		
		case 1471663700:
			iVar0 = 150;
			break;
		
		case -1679206722:
			iVar0 = 151;
			break;
		
		case -309397848:
			iVar0 = 152;
			break;
		
		case 534666054:
			iVar0 = 153;
			break;
		
		case -769376301:
			iVar0 = 154;
			break;
		
		case 1531057961:
			iVar0 = 155;
			break;
		
		case 1986678137:
			iVar0 = 156;
			break;
		
		case 2142789653:
			iVar0 = 157;
			break;
		
		case 7463306:
			iVar0 = 158;
			break;
		
		case 308053343:
			iVar0 = 159;
			break;
		
		case 753842819:
			iVar0 = 160;
			break;
		
		case 1052794406:
			iVar0 = 161;
			break;
		
		case -695726661:
			iVar0 = 162;
			break;
		
		case -1001821890:
			iVar0 = 163;
			break;
		
		case -1425459522:
			iVar0 = 164;
			break;
		
		case 1412653072:
			iVar0 = 165;
			break;
		
		case 1163510365:
			iVar0 = 166;
			break;
		
		case 933242602:
			iVar0 = 167;
			break;
		
		case -1347021116:
			iVar0 = 168;
			break;
		
		case 1297354841:
			iVar0 = 169;
			break;
		
		case -839806574:
			iVar0 = 170;
			break;
		
		case -542100209:
			iVar0 = 171;
			break;
		
		case 1472218269:
			iVar0 = 172;
			break;
		
		case 1783196079:
			iVar0 = 173;
			break;
		
		case 1007062314:
			iVar0 = 174;
			break;
		
		case -870732522:
			iVar0 = 175;
			break;
		
		case 547542627:
			iVar0 = 176;
			break;
		
		case 863894553:
			iVar0 = 177;
			break;
		
		case -2099242332:
			iVar0 = 178;
			break;
		
		case -1860028632:
			iVar0 = 179;
			break;
		
		case -560967165:
			iVar0 = 180;
			break;
		
		case -59437904:
			iVar0 = 181;
			break;
		
		case 757067269:
			iVar0 = 182;
			break;
		
		case 455625238:
			iVar0 = 183;
			break;
		
		case -1750514914:
			iVar0 = 184;
			break;
		
		case -983982466:
			iVar0 = 185;
			break;
		
		case -232228837:
			iVar0 = 186;
			break;
		
		case 1558269323:
			iVar0 = 187;
			break;
		
		case 2070579873:
			iVar0 = 188;
			break;
		
		case -1203181916:
			iVar0 = 189;
			break;
		
		case -2112587204:
			iVar0 = 190;
			break;
		
		case 1942412705:
			iVar0 = 191;
			break;
		
		case -1846437386:
			iVar0 = 192;
			break;
		
		case 61799795:
			iVar0 = 193;
			break;
		
		case -1388490611:
			iVar0 = 194;
			break;
		
		case -1627212776:
			iVar0 = 195;
			break;
		
		case 1525246127:
			iVar0 = 196;
			break;
		
		case -11341151:
			iVar0 = 197;
			break;
		
		case 516055815:
			iVar0 = 198;
			break;
		
		case -1034642040:
			iVar0 = 199;
			break;
	}
	switch (iParam0)
	{
		case 1022637316:
			iVar0 = 200;
			break;
		
		case -1677156418:
			iVar0 = 201;
			break;
		
		case -1130213300:
			iVar0 = 202;
			break;
		
		case 104062694:
			iVar0 = 203;
			break;
		
		case 869579299:
			iVar0 = 204;
			break;
		
		case 1201332655:
			iVar0 = 205;
			break;
		
		case 1028967715:
			iVar0 = 206;
			break;
		
		case -1651634800:
			iVar0 = 207;
			break;
		
		case -892278763:
			iVar0 = 208;
			break;
		
		case -1032005779:
			iVar0 = 209;
			break;
		
		case -255675400:
			iVar0 = 210;
			break;
		
		case 1890137027:
			iVar0 = 211;
			break;
		
		case -406805808:
			iVar0 = 212;
			break;
		
		case -592540500:
			iVar0 = 213;
			break;
		
		case 205417419:
			iVar0 = 214;
			break;
		
		case -2127276619:
			iVar0 = 215;
			break;
		
		case -1362677538:
			iVar0 = 216;
			break;
		
		case -1549722990:
			iVar0 = 217;
			break;
		
		case 3495990:
			iVar0 = 218;
			break;
		
		case -285526590:
			iVar0 = 219;
			break;
		
		case 1907377338:
			iVar0 = 220;
			break;
		
		case 2136399879:
			iVar0 = 221;
			break;
		
		case 1568410532:
			iVar0 = 222;
			break;
		
		case 1068879892:
			iVar0 = 223;
			break;
		
		case -1592750929:
			iVar0 = 224;
			break;
		
		case 772896404:
			iVar0 = 225;
			break;
		
		case -1999229916:
			iVar0 = 226;
			break;
		
		case -744701520:
			iVar0 = 227;
			break;
		
		case -425039925:
			iVar0 = 228;
			break;
		
		case -798409911:
			iVar0 = 229;
			break;
		
		case 1379974898:
			iVar0 = 230;
			break;
		
		case -1681436154:
			iVar0 = 231;
			break;
		
		case -1486919370:
			iVar0 = 232;
			break;
		
		case 2014677667:
			iVar0 = 233;
			break;
		
		case 325697857:
			iVar0 = 234;
			break;
		
		case -1188819501:
			iVar0 = 235;
			break;
		
		case -1765193438:
			iVar0 = 236;
			break;
		
		case -1416269126:
			iVar0 = 237;
			break;
		
		case -2111365154:
			iVar0 = 238;
			break;
		
		case -1880573087:
			iVar0 = 239;
			break;
		
		case 1421296887:
			iVar0 = 240;
			break;
		
		case 1655562468:
			iVar0 = 241;
			break;
		
		case 946048080:
			iVar0 = 242;
			break;
		
		case 1188768063:
			iVar0 = 243;
			break;
		
		case 498456313:
			iVar0 = 244;
			break;
		
		case 323007907:
			iVar0 = 245;
			break;
		
		case -1325371100:
			iVar0 = 246;
			break;
		
		case -829313978:
			iVar0 = 247;
			break;
		
		case -530624543:
			iVar0 = 248;
			break;
		
		case -299046020:
			iVar0 = 249;
			break;
		
		case 1812260650:
			iVar0 = 250;
			break;
		
		case 2043511487:
			iVar0 = 251;
			break;
		
		case -1753235933:
			iVar0 = 252;
			break;
		
		case -1525589690:
			iVar0 = 253;
			break;
		
		case 31003408:
			iVar0 = 254;
			break;
		
		case -1864998224:
			iVar0 = 255;
			break;
		
		case -2140814897:
			iVar0 = 256;
			break;
		
		case 223468453:
			iVar0 = 257;
			break;
		
		case -83970305:
			iVar0 = 258;
			break;
		
		case -406843262:
			iVar0 = 259;
			break;
		
		case -954740942:
			iVar0 = 260;
			break;
		
		case -1675526854:
			iVar0 = 261;
			break;
		
		case 2111717556:
			iVar0 = 262;
			break;
		
		case -415395003:
			iVar0 = 263;
			break;
		
		case 427521984:
			iVar0 = 264;
			break;
		
		case 1570178485:
			iVar0 = 265;
			break;
		
		case -1619850916:
			iVar0 = 266;
			break;
		
		case -713067148:
			iVar0 = 267;
			break;
		
		case 946477614:
			iVar0 = 268;
			break;
		
		case -1423343701:
			iVar0 = 269;
			break;
		
		case 445931457:
			iVar0 = 270;
			break;
		
		case 678558588:
			iVar0 = 271;
			break;
		
		case -854631987:
			iVar0 = 272;
			break;
		
		case -1707871209:
			iVar0 = 273;
			break;
		
		case 1675446188:
			iVar0 = 274;
			break;
		
		case 1911627074:
			iVar0 = 275;
			break;
		
		case -607391498:
			iVar0 = 276;
			break;
		
		case -1544625218:
			iVar0 = 277;
			break;
		
		case 1185175875:
			iVar0 = 278;
			break;
		
		case 155591269:
			iVar0 = 279;
			break;
		
		case -1057958846:
			iVar0 = 280;
			break;
		
		case -1853795495:
			iVar0 = 281;
			break;
		
		case -1860485560:
			iVar0 = 282;
			break;
		
		case 499288642:
			iVar0 = 283;
			break;
		
		case -7887054:
			iVar0 = 284;
			break;
		
		case -1553041502:
			iVar0 = 285;
			break;
		
		case -1080591445:
			iVar0 = 286;
			break;
		
		case -741060436:
			iVar0 = 287;
			break;
		
		case 645634644:
			iVar0 = 288;
			break;
		
		case -1096728771:
			iVar0 = 289;
			break;
		
		case 503268386:
			iVar0 = 290;
			break;
		
		case 109804153:
			iVar0 = 291;
			break;
		
		case 1410910279:
			iVar0 = 292;
			break;
		
		case 1501700194:
			iVar0 = 293;
			break;
		
		case -1793199216:
			iVar0 = 294;
			break;
		
		case 1405944575:
			iVar0 = 295;
			break;
		
		case 1731382556:
			iVar0 = 296;
			break;
		
		case 1743809026:
			iVar0 = 297;
			break;
		
		case 1589237530:
			iVar0 = 298;
			break;
		
		case -1558441108:
			iVar0 = 299;
			break;
	}
	switch (iParam0)
	{
		case 793815980:
			iVar0 = 303;
			break;
		
		case 87277824:
			iVar0 = 304;
			break;
		
		case 1305470790:
			iVar0 = 305;
			break;
		
		case 252924758:
			iVar0 = 306;
			break;
		
		case 1043745875:
			iVar0 = 307;
			break;
		
		case 24304530:
			iVar0 = 308;
			break;
		
		case 582246031:
			iVar0 = 309;
			break;
		
		case 1840225396:
			iVar0 = 310;
			break;
		
		case -47863515:
			iVar0 = 311;
			break;
		
		case 26968202:
			iVar0 = 312;
			break;
		
		case 1720638120:
			iVar0 = 313;
			break;
		
		case 1372737856:
			iVar0 = 314;
			break;
		
		case -675719916:
			iVar0 = 315;
			break;
		
		case -610888268:
			iVar0 = 316;
			break;
		
		case -129698248:
			iVar0 = 317;
			break;
		
		case 1060644905:
			iVar0 = 318;
			break;
		
		case 776078819:
			iVar0 = 319;
			break;
		
		case -1069464482:
			iVar0 = 320;
			break;
		
		case -1342875239:
			iVar0 = 321;
			break;
		
		case 1967892405:
			iVar0 = 322;
			break;
		
		case 642864781:
			iVar0 = 323;
			break;
		
		case 1270860039:
			iVar0 = 324;
			break;
		
		case -1290780406:
			iVar0 = 325;
			break;
		
		case 1127641545:
			iVar0 = 326;
			break;
		
		case -1221948530:
			iVar0 = 327;
			break;
		
		case 1954153055:
			iVar0 = 328;
			break;
		
		case 543727307:
			iVar0 = 329;
			break;
		
		case -1806626643:
			iVar0 = 330;
			break;
		
		case 1146362323:
			iVar0 = 331;
			break;
		
		case -1918158051:
			iVar0 = 332;
			break;
		
		case -1835082731:
			iVar0 = 333;
			break;
		
		case 1935907419:
			iVar0 = 334;
			break;
		
		case 961997868:
			iVar0 = 335;
			break;
		
		case -415246024:
			iVar0 = 336;
			break;
		
		case -2003529037:
			iVar0 = 337;
			break;
		
		case -1272951326:
			iVar0 = 338;
			break;
		
		case 837851491:
			iVar0 = 339;
			break;
		
		case -64649653:
			iVar0 = 340;
			break;
		
		case 1997623301:
			iVar0 = 341;
			break;
		
		case 1177835340:
			iVar0 = 342;
			break;
		
		case -1261787835:
			iVar0 = 343;
			break;
		
		case -965491494:
			iVar0 = 344;
			break;
		
		case 939374190:
			iVar0 = 345;
			break;
		
		case 149461503:
			iVar0 = 346;
			break;
		
		case -1117498985:
			iVar0 = 347;
			break;
		
		case 1184468662:
			iVar0 = 348;
			break;
		
		case -772488648:
			iVar0 = 349;
			break;
		
		case -1399171334:
			iVar0 = 350;
			break;
		
		case -963164512:
			iVar0 = 351;
			break;
		
		case -1284517669:
			iVar0 = 352;
			break;
		
		case 1613773443:
			iVar0 = 353;
			break;
		
		case 1963092516:
			iVar0 = 354;
			break;
		
		case -878642668:
			iVar0 = 355;
			break;
		
		case -1618544925:
			iVar0 = 356;
			break;
		
		case 1185417232:
			iVar0 = 357;
			break;
		
		case -1649044153:
			iVar0 = 358;
			break;
		
		case -1293956525:
			iVar0 = 359;
			break;
		
		case -84085370:
			iVar0 = 360;
			break;
		
		case -943861479:
			iVar0 = 361;
			break;
		
		case -1355455834:
			iVar0 = 362;
			break;
		
		case 711764191:
			iVar0 = 363;
			break;
		
		case 41616632:
			iVar0 = 364;
			break;
		
		case -2053984264:
			iVar0 = 365;
			break;
		
		case -522832741:
			iVar0 = 366;
			break;
		
		case 711940316:
			iVar0 = 367;
			break;
		
		case -1512107004:
			iVar0 = 368;
			break;
		
		case -273305505:
			iVar0 = 369;
			break;
		
		case -779122930:
			iVar0 = 370;
			break;
		
		case 565678099:
			iVar0 = 371;
			break;
		
		case 2130135469:
			iVar0 = 372;
			break;
		
		case 2142072717:
			iVar0 = 373;
			break;
		
		case -636638153:
			iVar0 = 374;
			break;
		
		case 289539239:
			iVar0 = 375;
			break;
		
		case -1040822561:
			iVar0 = 376;
			break;
		
		case 217486581:
			iVar0 = 377;
			break;
		
		case -2147244302:
			iVar0 = 378;
			break;
		
		case 830186237:
			iVar0 = 379;
			break;
		
		case -1902384566:
			iVar0 = 380;
			break;
		
		case 1471583453:
			iVar0 = 381;
			break;
		
		case 2007332931:
			iVar0 = 382;
			break;
		
		case 1104156493:
			iVar0 = 383;
			break;
		
		case 616400258:
			iVar0 = 384;
			break;
		
		case 511243162:
			iVar0 = 385;
			break;
		
		case -477451680:
			iVar0 = 386;
			break;
		
		case 743616295:
			iVar0 = 387;
			break;
		
		case 712215816:
			iVar0 = 388;
			break;
		
		case 1475570942:
			iVar0 = 389;
			break;
		
		case -1768978416:
			iVar0 = 390;
			break;
		
		case -2139711822:
			iVar0 = 391;
			break;
		
		case -1509236263:
			iVar0 = 392;
			break;
		
		case -1143383459:
			iVar0 = 393;
			break;
		
		case -1690206781:
			iVar0 = 394;
			break;
		
		case 1947095236:
			iVar0 = 395;
			break;
		
		case 300333876:
			iVar0 = 396;
			break;
		
		case 37732721:
			iVar0 = 397;
			break;
		
		case 959183706:
			iVar0 = 398;
			break;
		
		case -1542393224:
			iVar0 = 399;
			break;
	}
	switch (iParam0)
	{
		case 874488242:
			iVar0 = 400;
			break;
		
		case 1389335000:
			iVar0 = 401;
			break;
		
		case -366075547:
			iVar0 = 402;
			break;
		
		case -1125431584:
			iVar0 = 403;
			break;
		
		case -2000068963:
			iVar0 = 404;
			break;
		
		case 1497445248:
			iVar0 = 405;
			break;
		
		case 1989766704:
			iVar0 = 406;
			break;
		
		case -2086401979:
			iVar0 = 407;
			break;
		
		case -1846467361:
			iVar0 = 408;
			break;
		
		case -1325458477:
			iVar0 = 409;
			break;
		
		case -566725051:
			iVar0 = 410;
			break;
		
		case -787850263:
			iVar0 = 411;
			break;
		
		case -1885021085:
			iVar0 = 412;
			break;
		
		case 979307144:
			iVar0 = 413;
			break;
		
		case -473732439:
			iVar0 = 414;
			break;
		
		case 2062186390:
			iVar0 = 415;
			break;
		
		case -60867780:
			iVar0 = 416;
			break;
		
		case 926967912:
			iVar0 = 417;
			break;
		
		case -1886278590:
			iVar0 = 418;
			break;
		
		case -1314959708:
			iVar0 = 419;
			break;
		
		case -1696774529:
			iVar0 = 420;
			break;
		
		case -356446484:
			iVar0 = 421;
			break;
		
		case 857810380:
			iVar0 = 422;
			break;
		
		case -629676646:
			iVar0 = 423;
			break;
		
		case -1879530481:
			iVar0 = 424;
			break;
		
		case -1265847311:
			iVar0 = 425;
			break;
		
		case 32094424:
			iVar0 = 426;
			break;
		
		case 1969286744:
			iVar0 = 427;
			break;
		
		case 560620683:
			iVar0 = 428;
			break;
		
		case -148312642:
			iVar0 = 429;
			break;
		
		case -578277428:
			iVar0 = 430;
			break;
		
		case -718909970:
			iVar0 = 431;
			break;
		
		case -859026859:
			iVar0 = 432;
			break;
		
		case -839897805:
			iVar0 = 433;
			break;
		
		case 1676439910:
			iVar0 = 434;
			break;
		
		case -294157184:
			iVar0 = 435;
			break;
		
		case -1222200221:
			iVar0 = 436;
			break;
		
		case 874532672:
			iVar0 = 437;
			break;
		
		case -135929055:
			iVar0 = 438;
			break;
		
		case 1654917353:
			iVar0 = 439;
			break;
		
		case -13131391:
			iVar0 = 440;
			break;
		
		case 154845196:
			iVar0 = 441;
			break;
		
		case -1147884322:
			iVar0 = 442;
			break;
		
		case 291693311:
			iVar0 = 443;
			break;
		
		case -1401933531:
			iVar0 = 444;
			break;
		
		case 1820267020:
			iVar0 = 445;
			break;
		
		case 2134488961:
			iVar0 = 446;
			break;
		
		case -1861952745:
			iVar0 = 447;
			break;
		
		case 994458405:
			iVar0 = 448;
			break;
		
		case -1931715008:
			iVar0 = 449;
			break;
		
		case 1308745884:
			iVar0 = 450;
			break;
		
		case -1322955084:
			iVar0 = 451;
			break;
		
		case -816658183:
			iVar0 = 452;
			break;
		
		case -988307698:
			iVar0 = 453;
			break;
		
		case -1341411308:
			iVar0 = 454;
			break;
		
		case 1865570599:
			iVar0 = 455;
			break;
		
		case -549458010:
			iVar0 = 456;
			break;
		
		case -1328545177:
			iVar0 = 457;
			break;
		
		case -1361353619:
			iVar0 = 458;
			break;
		
		case 1103253806:
			iVar0 = 459;
			break;
		
		case -24183456:
			iVar0 = 460;
			break;
		
		case 436214104:
			iVar0 = 461;
			break;
		
		case 2072615278:
			iVar0 = 462;
			break;
		
		case -1131891426:
			iVar0 = 463;
			break;
		
		case 1392085456:
			iVar0 = 464;
			break;
		
		case 2035895234:
			iVar0 = 465;
			break;
		
		case 368784798:
			iVar0 = 466;
			break;
		
		case 1398938833:
			iVar0 = 467;
			break;
		
		case 1250040566:
			iVar0 = 468;
			break;
		
		case 2133228190:
			iVar0 = 469;
			break;
		
		case 675551540:
			iVar0 = 470;
			break;
		
		case -1826137848:
			iVar0 = 471;
			break;
		
		case -144105601:
			iVar0 = 472;
			break;
		
		case -748983650:
			iVar0 = 473;
			break;
		
		case 630291027:
			iVar0 = 474;
			break;
		
		case 293950434:
			iVar0 = 475;
			break;
		
		case 1857352111:
			iVar0 = 476;
			break;
		
		case -777671131:
			iVar0 = 477;
			break;
		
		case 221602924:
			iVar0 = 478;
			break;
		
		case 2039295216:
			iVar0 = 479;
			break;
		
		case 1800147054:
			iVar0 = 480;
			break;
		
		case -2019505897:
			iVar0 = 481;
			break;
		
		case 1647997020:
			iVar0 = 482;
			break;
		
		case -1405854945:
			iVar0 = 483;
			break;
		
		case -1171294997:
			iVar0 = 484;
			break;
		
		case -77076350:
			iVar0 = 485;
			break;
		
		case 775569873:
			iVar0 = 486;
			break;
		
		case 330569485:
			iVar0 = 487;
			break;
		
		case -1549217620:
			iVar0 = 488;
			break;
		
		case 1674429052:
			iVar0 = 489;
			break;
		
		case -254669596:
			iVar0 = 490;
			break;
		
		case 1802602254:
			iVar0 = 491;
			break;
		
		case -941072260:
			iVar0 = 492;
			break;
		
		case -1844749517:
			iVar0 = 493;
			break;
		
		case 82745424:
			iVar0 = 494;
			break;
		
		case -673460083:
			iVar0 = 495;
			break;
		
		case -99954496:
			iVar0 = 496;
			break;
		
		case 2078163456:
			iVar0 = 497;
			break;
		
		case 1362343227:
			iVar0 = 498;
			break;
		
		case 1176005743:
			iVar0 = 499;
			break;
	}
	switch (iParam0)
	{
		case -1504557219:
			iVar0 = 500;
			break;
		
		case 367912881:
			iVar0 = 501;
			break;
		
		case -836343280:
			iVar0 = 502;
			break;
		
		case -46521805:
			iVar0 = 503;
			break;
		
		case -743048780:
			iVar0 = 504;
			break;
		
		case 1294865118:
			iVar0 = 505;
			break;
		
		case -1479686374:
			iVar0 = 506;
			break;
		
		case 256017193:
			iVar0 = 507;
			break;
		
		case 1232443120:
			iVar0 = 508;
			break;
		
		case -803282271:
			iVar0 = 509;
			break;
		
		case 1788600442:
			iVar0 = 510;
			break;
		
		case 1439605343:
			iVar0 = 511;
			break;
		
		case -1094679264:
			iVar0 = 512;
			break;
		
		case 1230482241:
			iVar0 = 513;
			break;
		
		case 2054714291:
			iVar0 = 514;
			break;
		
		case 192117676:
			iVar0 = 515;
			break;
		
		case -2071204405:
			iVar0 = 516;
			break;
		
		case -1618181476:
			iVar0 = 517;
			break;
		
		case -1408253665:
			iVar0 = 518;
			break;
		
		case -134185391:
			iVar0 = 519;
			break;
		
		case -785783411:
			iVar0 = 520;
			break;
		
		case -633466710:
			iVar0 = 521;
			break;
		
		case -2072487372:
			iVar0 = 522;
			break;
		
		case 1211025296:
			iVar0 = 523;
			break;
		
		case 742659337:
			iVar0 = 524;
			break;
		
		case 1365533160:
			iVar0 = 525;
			break;
		
		case 1213205618:
			iVar0 = 526;
			break;
		
		case -164052103:
			iVar0 = 527;
			break;
		
		case -1306490297:
			iVar0 = 528;
			break;
		
		case -994802645:
			iVar0 = 529;
			break;
		
		case 637406209:
			iVar0 = 530;
			break;
		
		case -170855031:
			iVar0 = 531;
			break;
		
		case 1333098305:
			iVar0 = 532;
			break;
		
		case 119103934:
			iVar0 = 533;
			break;
		
		case -141369051:
			iVar0 = 534;
			break;
		
		case -593355218:
			iVar0 = 535;
			break;
		
		case 316832763:
			iVar0 = 536;
			break;
		
		case -393713544:
			iVar0 = 537;
			break;
		
		case -1876234625:
			iVar0 = 538;
			break;
		
		case -1453082334:
			iVar0 = 539;
			break;
		
		case -1397705983:
			iVar0 = 540;
			break;
		
		case -1278086171:
			iVar0 = 541;
			break;
		
		case -1510892268:
			iVar0 = 542;
			break;
		
		case 204876084:
			iVar0 = 543;
			break;
		
		case -988359492:
			iVar0 = 544;
			break;
		
		case 975745281:
			iVar0 = 545;
			break;
		
		case 591099372:
			iVar0 = 546;
			break;
		
		case -1014948306:
			iVar0 = 547;
			break;
		
		case -1866439788:
			iVar0 = 548;
			break;
		
		case -1265767186:
			iVar0 = 549;
			break;
		
		case 2070931859:
			iVar0 = 550;
			break;
		
		case 413611416:
			iVar0 = 551;
			break;
		
		case 765001063:
			iVar0 = 552;
			break;
		
		case -686624622:
			iVar0 = 553;
			break;
		
		case -937548349:
			iVar0 = 554;
			break;
		
		case 212584159:
			iVar0 = 555;
			break;
		
		case -328340062:
			iVar0 = 556;
			break;
		
		case 1657725123:
			iVar0 = 557;
			break;
		
		case -1517964336:
			iVar0 = 558;
			break;
		
		case -785490239:
			iVar0 = 559;
			break;
		
		case -11769229:
			iVar0 = 560;
			break;
		
		case 745912106:
			iVar0 = 561;
			break;
		
		case -2064265098:
			iVar0 = 562;
			break;
		
		case -1515892875:
			iVar0 = 563;
			break;
		
		case 1368234729:
			iVar0 = 564;
			break;
		
		case 1960230923:
			iVar0 = 565;
			break;
		
		case -860169810:
			iVar0 = 566;
			break;
		
		case -177882114:
			iVar0 = 567;
			break;
		
		case 661384509:
			iVar0 = 568;
			break;
		
		case 1221860095:
			iVar0 = 569;
			break;
		
		case 698192473:
			iVar0 = 570;
			break;
		
		case -817251083:
			iVar0 = 571;
			break;
		
		case -1108876323:
			iVar0 = 572;
			break;
		
		case 1274482696:
			iVar0 = 573;
			break;
		
		case 468009056:
			iVar0 = 574;
			break;
		
		case 2063732427:
			iVar0 = 575;
			break;
		
		case -764016411:
			iVar0 = 576;
			break;
		
		case -1530816149:
			iVar0 = 577;
			break;
		
		case 1189996018:
			iVar0 = 578;
			break;
		
		case -210110115:
			iVar0 = 579;
			break;
		
		case -207110256:
			iVar0 = 580;
			break;
		
		case 1801308144:
			iVar0 = 581;
			break;
		
		case 320631086:
			iVar0 = 582;
			break;
		
		case 1022560466:
			iVar0 = 583;
			break;
		
		case -952946041:
			iVar0 = 584;
			break;
		
		case 1321460664:
			iVar0 = 585;
			break;
		
		case -781625914:
			iVar0 = 586;
			break;
		
		case -1522247835:
			iVar0 = 587;
			break;
		
		case -1531245231:
			iVar0 = 588;
			break;
		
		case -1070472994:
			iVar0 = 589;
			break;
		
		case -2113341060:
			iVar0 = 590;
			break;
		
		case 965047293:
			iVar0 = 591;
			break;
		
		case 2114285045:
			iVar0 = 592;
			break;
		
		case -1635032213:
			iVar0 = 593;
			break;
		
		case 1310864345:
			iVar0 = 594;
			break;
		
		case -973977633:
			iVar0 = 595;
			break;
		
		case -1439643329:
			iVar0 = 596;
			break;
		
		case 434150104:
			iVar0 = 597;
			break;
		
		case 1243301688:
			iVar0 = 598;
			break;
		
		case -1233567982:
			iVar0 = 599;
			break;
	}
	switch (iParam0)
	{
		case 1262886680:
			iVar0 = 600;
			break;
		
		case 283135569:
			iVar0 = 601;
			break;
		
		case -548917969:
			iVar0 = 602;
			break;
		
		case 153465812:
			iVar0 = 603;
			break;
		
		case 1916093085:
			iVar0 = 604;
			break;
		
		case -701486200:
			iVar0 = 605;
			break;
		
		case 1951718630:
			iVar0 = 606;
			break;
		
		case -1981978861:
			iVar0 = 607;
			break;
		
		case -1998094267:
			iVar0 = 608;
			break;
		
		case -718445629:
			iVar0 = 609;
			break;
		
		case -35697399:
			iVar0 = 610;
			break;
		
		case -899081349:
			iVar0 = 611;
			break;
		
		case 1123547916:
			iVar0 = 612;
			break;
		
		case -1139893782:
			iVar0 = 613;
			break;
		
		case 1446511785:
			iVar0 = 614;
			break;
		
		case 1234256191:
			iVar0 = 615;
			break;
		
		case 413901048:
			iVar0 = 616;
			break;
		
		case 1527450164:
			iVar0 = 617;
			break;
		
		case -1786525476:
			iVar0 = 618;
			break;
		
		case 1439516635:
			iVar0 = 619;
			break;
		
		case 733800794:
			iVar0 = 620;
			break;
		
		case -399223540:
			iVar0 = 621;
			break;
		
		case -1894392230:
			iVar0 = 622;
			break;
		
		case 229993415:
			iVar0 = 623;
			break;
		
		case -620189683:
			iVar0 = 624;
			break;
		
		case 1846617794:
			iVar0 = 625;
			break;
		
		case -1142479347:
			iVar0 = 626;
			break;
		
		case -512960025:
			iVar0 = 627;
			break;
		
		case -759812557:
			iVar0 = 628;
			break;
		
		case 468661890:
			iVar0 = 629;
			break;
		
		case 1907925586:
			iVar0 = 630;
			break;
		
		case 646243571:
			iVar0 = 631;
			break;
		
		case 1953935161:
			iVar0 = 632;
			break;
		
		case 874867224:
			iVar0 = 633;
			break;
		
		case 1344008898:
			iVar0 = 634;
			break;
		
		case 1297781304:
			iVar0 = 635;
			break;
		
		case 1977233252:
			iVar0 = 636;
			break;
		
		case -194410344:
			iVar0 = 637;
			break;
		
		case 392012609:
			iVar0 = 638;
			break;
		
		case 705148450:
			iVar0 = 639;
			break;
		
		case 1677522529:
			iVar0 = 640;
			break;
		
		case -1362677538:
			iVar0 = 641;
			break;
		
		case 863458948:
			iVar0 = 642;
			break;
		
		case 9874621:
			iVar0 = 643;
			break;
		
		case 1809338990:
			iVar0 = 644;
			break;
		
		case -346939959:
			iVar0 = 645;
			break;
		
		case -934753544:
			iVar0 = 646;
			break;
		
		case 1604986209:
			iVar0 = 647;
			break;
		
		case -1514700421:
			iVar0 = 648;
			break;
		
		case 1177361060:
			iVar0 = 649;
			break;
		
		case -937529288:
			iVar0 = 650;
			break;
		
		case 547723644:
			iVar0 = 651;
			break;
		
		case 1750314531:
			iVar0 = 652;
			break;
		
		case -988332613:
			iVar0 = 653;
			break;
		
		case 80720443:
			iVar0 = 654;
			break;
		
		case -1220194634:
			iVar0 = 655;
			break;
		
		case -925735153:
			iVar0 = 656;
			break;
		
		case -1403745446:
			iVar0 = 657;
			break;
		
		case -1084626028:
			iVar0 = 658;
			break;
		
		case 2060572320:
			iVar0 = 659;
			break;
		
		case 1064377095:
			iVar0 = 660;
			break;
		
		case -1985597576:
			iVar0 = 661;
			break;
		
		case -2003189104:
			iVar0 = 662;
			break;
		
		case 1452329956:
			iVar0 = 663;
			break;
		
		case 1928573506:
			iVar0 = 664;
			break;
		
		case -185753722:
			iVar0 = 665;
			break;
		
		case -1580916109:
			iVar0 = 666;
			break;
		
		case -1077059973:
			iVar0 = 667;
			break;
		
		case 131755133:
			iVar0 = 668;
			break;
		
		case -253351038:
			iVar0 = 669;
			break;
		
		case 1332845224:
			iVar0 = 670;
			break;
		
		case -685051870:
			iVar0 = 671;
			break;
		
		case 2122847199:
			iVar0 = 672;
			break;
		
		case -149940744:
			iVar0 = 673;
			break;
		
		case -147741130:
			iVar0 = 674;
			break;
		
		case 302211868:
			iVar0 = 675;
			break;
		
		case -1361568592:
			iVar0 = 676;
			break;
		
		case -156600218:
			iVar0 = 677;
			break;
		
		case 1592739450:
			iVar0 = 678;
			break;
		
		case -633744004:
			iVar0 = 679;
			break;
		
		case -1467745952:
			iVar0 = 680;
			break;
		
		case 1129961041:
			iVar0 = 681;
			break;
		
		case -1221180772:
			iVar0 = 682;
			break;
		
		case 1957517559:
			iVar0 = 683;
			break;
		
		case -335233377:
			iVar0 = 684;
			break;
		
		case 2146762380:
			iVar0 = 685;
			break;
		
		case 427236107:
			iVar0 = 686;
			break;
		
		case -49636427:
			iVar0 = 687;
			break;
		
		case 1988133312:
			iVar0 = 688;
			break;
		
		case 40044091:
			iVar0 = 689;
			break;
		
		case -1189893809:
			iVar0 = 690;
			break;
		
		case 1182549017:
			iVar0 = 691;
			break;
		
		case 1403255481:
			iVar0 = 692;
			break;
		
		case 821579887:
			iVar0 = 693;
			break;
		
		case 1975948161:
			iVar0 = 694;
			break;
		
		case -953362234:
			iVar0 = 695;
			break;
		
		case 1521494915:
			iVar0 = 696;
			break;
		
		case 84635211:
			iVar0 = 697;
			break;
		
		case 2074655231:
			iVar0 = 698;
			break;
		
		case 1742494019:
			iVar0 = 699;
			break;
	}
	switch (iParam0)
	{
		case 1841934566:
			iVar0 = 700;
			break;
		
		case 1648222412:
			iVar0 = 701;
			break;
		
		case 1019312748:
			iVar0 = 702;
			break;
		
		case -1218730541:
			iVar0 = 703;
			break;
		
		case -88186884:
			iVar0 = 704;
			break;
		
		case 1428588096:
			iVar0 = 705;
			break;
		
		case -1788493673:
			iVar0 = 706;
			break;
		
		case -241894528:
			iVar0 = 707;
			break;
		
		case -1425414573:
			iVar0 = 708;
			break;
		
		case 1797163947:
			iVar0 = 709;
			break;
		
		case 823191231:
			iVar0 = 710;
			break;
		
		case 894133321:
			iVar0 = 711;
			break;
		
		case 1889485313:
			iVar0 = 712;
			break;
		
		case 687338866:
			iVar0 = 713;
			break;
		
		case 1827923343:
			iVar0 = 714;
			break;
		
		case -1893751733:
			iVar0 = 715;
			break;
		
		case 1739151647:
			iVar0 = 716;
			break;
		
		case 1361186211:
			iVar0 = 717;
			break;
		
		case -188624940:
			iVar0 = 718;
			break;
		
		case -1097074643:
			iVar0 = 719;
			break;
		
		case -609708185:
			iVar0 = 720;
			break;
		
		case 1295911115:
			iVar0 = 721;
			break;
		
		case -1694728829:
			iVar0 = 722;
			break;
		
		case -322091380:
			iVar0 = 723;
			break;
		
		case -1168575065:
			iVar0 = 724;
			break;
		
		case 756873456:
			iVar0 = 725;
			break;
		
		case -730037708:
			iVar0 = 726;
			break;
		
		case -970458486:
			iVar0 = 727;
			break;
		
		case 975601953:
			iVar0 = 728;
			break;
		
		case 1614208560:
			iVar0 = 729;
			break;
		
		case -726032561:
			iVar0 = 730;
			break;
		
		case -1824987162:
			iVar0 = 731;
			break;
		
		case 417579524:
			iVar0 = 732;
			break;
		
		case 734151492:
			iVar0 = 733;
			break;
		
		case -1766862320:
			iVar0 = 734;
			break;
		
		case 579562906:
			iVar0 = 735;
			break;
		
		case -619754931:
			iVar0 = 736;
			break;
		
		case 1424441799:
			iVar0 = 737;
			break;
		
		case -1405036369:
			iVar0 = 738;
			break;
		
		case 1929056908:
			iVar0 = 739;
			break;
		
		case -34538790:
			iVar0 = 740;
			break;
		
		case 1898518287:
			iVar0 = 741;
			break;
		
		case -893104650:
			iVar0 = 742;
			break;
		
		case -553814424:
			iVar0 = 743;
			break;
		
		case 201431212:
			iVar0 = 744;
			break;
		
		case 528695215:
			iVar0 = 745;
			break;
		
		case -1266435389:
			iVar0 = 746;
			break;
		
		case 980213248:
			iVar0 = 747;
			break;
		
		case 1019119277:
			iVar0 = 748;
			break;
		
		case 1187710323:
			iVar0 = 749;
			break;
		
		case 382848971:
			iVar0 = 750;
			break;
		
		case -1567832243:
			iVar0 = 751;
			break;
		
		case 2049506430:
			iVar0 = 752;
			break;
		
		case 92806870:
			iVar0 = 753;
			break;
		
		case -628203424:
			iVar0 = 754;
			break;
		
		case 2125178682:
			iVar0 = 755;
			break;
		
		case 399660858:
			iVar0 = 756;
			break;
		
		case -624842093:
			iVar0 = 757;
			break;
		
		case 282885412:
			iVar0 = 758;
			break;
		
		case 1599917585:
			iVar0 = 759;
			break;
		
		case -703540963:
			iVar0 = 760;
			break;
		
		case 904358018:
			iVar0 = 761;
			break;
		
		case 560877895:
			iVar0 = 762;
			break;
		
		case 2145953489:
			iVar0 = 763;
			break;
		
		case -87437351:
			iVar0 = 764;
			break;
		
		case -187239215:
			iVar0 = 765;
			break;
		
		case 1481255878:
			iVar0 = 766;
			break;
		
		case 1805700785:
			iVar0 = 767;
			break;
		
		case -368780168:
			iVar0 = 768;
			break;
		
		case 1457900554:
			iVar0 = 769;
			break;
		
		case -1066127505:
			iVar0 = 770;
			break;
		
		case -1366750043:
			iVar0 = 771;
			break;
		
		case 1944822196:
			iVar0 = 772;
			break;
		
		case -1639289459:
			iVar0 = 773;
			break;
		
		case 1282565442:
			iVar0 = 774;
			break;
		
		case -884280700:
			iVar0 = 775;
			break;
		
		case -1047313079:
			iVar0 = 776;
			break;
		
		case 1849315700:
			iVar0 = 777;
			break;
		
		case -2129853791:
			iVar0 = 778;
			break;
		
		case -643974508:
			iVar0 = 779;
			break;
		
		case 614424236:
			iVar0 = 780;
			break;
		
		case 2059836334:
			iVar0 = 781;
			break;
		
		case 221447729:
			iVar0 = 782;
			break;
		
		case 1965910391:
			iVar0 = 783;
			break;
		
		case 1822250244:
			iVar0 = 784;
			break;
		
		case 2144765713:
			iVar0 = 785;
			break;
		
		case 280971002:
			iVar0 = 786;
			break;
		
		case -1869294378:
			iVar0 = 787;
			break;
		
		case -869172334:
			iVar0 = 788;
			break;
		
		case -1028499109:
			iVar0 = 789;
			break;
		
		case 1076096084:
			iVar0 = 790;
			break;
		
		case -636780127:
			iVar0 = 791;
			break;
		
		case 603013184:
			iVar0 = 792;
			break;
		
		case 1351256035:
			iVar0 = 793;
			break;
		
		case 49108481:
			iVar0 = 794;
			break;
		
		case 354124980:
			iVar0 = 795;
			break;
		
		case -962894007:
			iVar0 = 796;
			break;
		
		case 1617075313:
			iVar0 = 797;
			break;
		
		case -635749278:
			iVar0 = 798;
			break;
		
		case -1208904204:
			iVar0 = 799;
			break;
	}
	switch (iParam0)
	{
		case 414914435:
			iVar0 = 800;
			break;
		
		case -2100006249:
			iVar0 = 801;
			break;
		
		case 424018111:
			iVar0 = 802;
			break;
		
		case 849119336:
			iVar0 = 803;
			break;
		
		case 1807228945:
			iVar0 = 804;
			break;
		
		case -1119071247:
			iVar0 = 805;
			break;
		
		case -1146714704:
			iVar0 = 806;
			break;
		
		case -288852985:
			iVar0 = 807;
			break;
		
		case -562029507:
			iVar0 = 808;
			break;
		
		case -470534615:
			iVar0 = 809;
			break;
		
		case 371389080:
			iVar0 = 810;
			break;
		
		case -521204587:
			iVar0 = 811;
			break;
		
		case 1685732560:
			iVar0 = 812;
			break;
		
		case -1386443378:
			iVar0 = 813;
			break;
		
		case -1706648281:
			iVar0 = 814;
			break;
		
		case -519957866:
			iVar0 = 815;
			break;
		
		case 653935582:
			iVar0 = 816;
			break;
		
		case 2111779395:
			iVar0 = 817;
			break;
		
		case 428988289:
			iVar0 = 818;
			break;
		
		case -1903962822:
			iVar0 = 819;
			break;
		
		case 1365770911:
			iVar0 = 820;
			break;
		
		case 42029862:
			iVar0 = 821;
			break;
		
		case 438631811:
			iVar0 = 822;
			break;
		
		case -1478715891:
			iVar0 = 823;
			break;
		
		case -1395531229:
			iVar0 = 824;
			break;
		
		case 30333135:
			iVar0 = 825;
			break;
		
		case 1783341339:
			iVar0 = 826;
			break;
		
		case -16077126:
			iVar0 = 827;
			break;
		
		case -833643184:
			iVar0 = 828;
			break;
	}
	if (iVar0 != -1)
	{
		*uParam1 = (129 + iVar0);
		return 1;
	}
	return 0;
}

int func_385(int iParam0, var uParam1)//Position - 0x3D335
{
	int iVar0;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case -1917324065:
			iVar0 = 0;
			break;
		
		case 1056297333:
			iVar0 = 1;
			break;
		
		case 494620709:
			iVar0 = 2;
			break;
		
		case 800453786:
			iVar0 = 3;
			break;
		
		case -1082736975:
			iVar0 = 4;
			break;
		
		case -754981437:
			iVar0 = 5;
			break;
		
		case -1801855538:
			iVar0 = 6;
			break;
		
		case 459313194:
			iVar0 = 7;
			break;
		
		case 2007087579:
			iVar0 = 8;
			break;
		
		case 1987172386:
			iVar0 = 9;
			break;
		
		case 1801787829:
			iVar0 = 10;
			break;
		
		case -221624488:
			iVar0 = 11;
			break;
		
		case 25158851:
			iVar0 = 12;
			break;
		
		case 472458130:
			iVar0 = 13;
			break;
		
		case 164352862:
			iVar0 = 14;
			break;
		
		case -904148779:
			iVar0 = 15;
			break;
		
		case -694439771:
			iVar0 = 16;
			break;
		
		case -1469590466:
			iVar0 = 17;
			break;
		
		case -1511207100:
			iVar0 = 18;
			break;
		
		case -1352670678:
			iVar0 = 19;
			break;
		
		case -1960273476:
			iVar0 = 20;
			break;
		
		case -1657389609:
			iVar0 = 21;
			break;
		
		case 1826839858:
			iVar0 = 22;
			break;
		
		case 1989701788:
			iVar0 = 23;
			break;
		
		case 1213109257:
			iVar0 = 24;
			break;
		
		case 607407061:
			iVar0 = 25;
			break;
		
		case 875031480:
			iVar0 = 26;
			break;
		
		case 1487418552:
			iVar0 = 27;
			break;
		
		case 264053475:
			iVar0 = 28;
			break;
		
		case 99094329:
			iVar0 = 29;
			break;
		
		case -244193715:
			iVar0 = 30;
			break;
		
		case -540785934:
			iVar0 = 31;
			break;
		
		case -694833003:
			iVar0 = 32;
			break;
		
		case -852058665:
			iVar0 = 33;
			break;
		
		case -1512648940:
			iVar0 = 34;
			break;
		
		case -761354077:
			iVar0 = 35;
			break;
		
		case 1560551467:
			iVar0 = 36;
			break;
		
		case 827974775:
			iVar0 = 37;
			break;
		
		case 1595162603:
			iVar0 = 38;
			break;
		
		case 709663738:
			iVar0 = 39;
			break;
		
		case 990002533:
			iVar0 = 40;
			break;
		
		case 1860213958:
			iVar0 = 41;
			break;
		
		case 2119318441:
			iVar0 = 42;
			break;
		
		case -1953737187:
			iVar0 = 43;
			break;
		
		case 193320466:
			iVar0 = 44;
			break;
		
		case 1936646403:
			iVar0 = 45;
			break;
		
		case -1126042648:
			iVar0 = 46;
			break;
		
		case -1125022512:
			iVar0 = 47;
			break;
		
		case -1304369017:
			iVar0 = 48;
			break;
		
		case -2018143375:
			iVar0 = 49;
			break;
		
		case 224730392:
			iVar0 = 50;
			break;
		
		case 439629494:
			iVar0 = 51;
			break;
		
		case 736778786:
			iVar0 = 52;
			break;
		
		case 1048444745:
			iVar0 = 53;
			break;
		
		case 1988816738:
			iVar0 = 54;
			break;
		
		case 2140603469:
			iVar0 = 55;
			break;
		
		case 214245031:
			iVar0 = 56;
			break;
		
		case 1006238992:
			iVar0 = 57;
			break;
		
		case 689952604:
			iVar0 = 58;
			break;
		
		case -681528353:
			iVar0 = 59;
			break;
		
		case 1157448359:
			iVar0 = 60;
			break;
		
		case 43105745:
			iVar0 = 61;
			break;
		
		case -270395278:
			iVar0 = 62;
			break;
		
		case 505181414:
			iVar0 = 63;
			break;
		
		case 254662409:
			iVar0 = 64;
			break;
		
		case -982924414:
			iVar0 = 65;
			break;
		
		case -1156010272:
			iVar0 = 66;
			break;
		
		case 1885313391:
			iVar0 = 67;
			break;
		
		case -694786597:
			iVar0 = 68;
			break;
		
		case -1950199756:
			iVar0 = 69;
			break;
		
		case 384168721:
			iVar0 = 70;
			break;
		
		case -369452741:
			iVar0 = 71;
			break;
		
		case -89113946:
			iVar0 = 72;
			break;
		
		case 1836261422:
			iVar0 = 73;
			break;
		
		case -1004417654:
			iVar0 = 74;
			break;
		
		case -754095263:
			iVar0 = 75;
			break;
		
		case -1210698509:
			iVar0 = 76;
			break;
		
		case 1332405298:
			iVar0 = 77;
			break;
		
		case 552929095:
			iVar0 = 78;
			break;
		
		case 861154309:
			iVar0 = 79;
			break;
		
		case -1653801207:
			iVar0 = 80;
			break;
		
		case -87213624:
			iVar0 = 81;
			break;
		
		case 1285643631:
			iVar0 = 82;
			break;
		
		case 523240077:
			iVar0 = 83;
			break;
		
		case 823174734:
			iVar0 = 84;
			break;
		
		case -1248612522:
			iVar0 = 85;
			break;
		
		case 123359970:
			iVar0 = 86;
			break;
		
		case 369684543:
			iVar0 = 87;
			break;
		
		case -337142787:
			iVar0 = 88;
			break;
		
		case 1395583642:
			iVar0 = 89;
			break;
		
		case 1782520810:
			iVar0 = 90;
			break;
		
		case -660506451:
			iVar0 = 91;
			break;
		
		case -1092860637:
			iVar0 = 92;
			break;
		
		case 524387820:
			iVar0 = 93;
			break;
		
		case -1829180023:
			iVar0 = 94;
			break;
		
		case 2091368679:
			iVar0 = 95;
			break;
		
		case 1851597906:
			iVar0 = 96;
			break;
		
		case -434629734:
			iVar0 = 97;
			break;
		
		case 1415278623:
			iVar0 = 98;
			break;
		
		case 1252285617:
			iVar0 = 99;
			break;
	}
	switch (iParam0)
	{
		case 893595891:
			iVar0 = 100;
			break;
		
		case 423819507:
			iVar0 = 101;
			break;
		
		case -1433887872:
			iVar0 = 102;
			break;
		
		case -464613621:
			iVar0 = 103;
			break;
		
		case -301227387:
			iVar0 = 104;
			break;
		
		case -701762906:
			iVar0 = 105;
			break;
		
		case -890282963:
			iVar0 = 106;
			break;
		
		case -1188251480:
			iVar0 = 107;
			break;
		
		case 258827560:
			iVar0 = 108;
			break;
		
		case 965649655:
			iVar0 = 109;
			break;
		
		case 718800778:
			iVar0 = 110;
			break;
		
		case 1959959422:
			iVar0 = 111;
			break;
		
		case 1200177388:
			iVar0 = 112;
			break;
		
		case -1874439579:
			iVar0 = 113;
			break;
		
		case -1679505893:
			iVar0 = 114;
			break;
		
		case -1976229188:
			iVar0 = 115;
			break;
		
		case 2037875009:
			iVar0 = 116;
			break;
		
		case -235146664:
			iVar0 = 117;
			break;
		
		case -441853516:
			iVar0 = 118;
			break;
		
		case -664221443:
			iVar0 = 119;
			break;
		
		case -371627042:
			iVar0 = 120;
			break;
		
		case -1266220742:
			iVar0 = 121;
			break;
		
		case -968055611:
			iVar0 = 122;
			break;
		
		case 248100286:
			iVar0 = 123;
			break;
		
		case 551606764:
			iVar0 = 124;
			break;
		
		case 1805971315:
			iVar0 = 125;
			break;
		
		case -43642121:
			iVar0 = 126;
			break;
		
		case 1172251624:
			iVar0 = 127;
			break;
		
		case 1471989667:
			iVar0 = 128;
			break;
		
		case -2124702788:
			iVar0 = 129;
			break;
		
		case -1826734271:
			iVar0 = 130;
			break;
		
		case -900452940:
			iVar0 = 131;
			break;
		
		case -292194762:
			iVar0 = 132;
			break;
		
		case 637166847:
			iVar0 = 133;
			break;
		
		case -1204844181:
			iVar0 = 134;
			break;
		
		case 324779970:
			iVar0 = 135;
			break;
		
		case 329039940:
			iVar0 = 136;
			break;
		
		case 1854928425:
			iVar0 = 137;
			break;
		
		case 13179549:
			iVar0 = 138;
			break;
		
		case 1899823455:
			iVar0 = 139;
			break;
		
		case -2090490448:
			iVar0 = 140;
			break;
		
		case -1801467868:
			iVar0 = 141;
			break;
		
		case 953986562:
			iVar0 = 142;
			break;
		
		case 585335312:
			iVar0 = 143;
			break;
		
		case 489617063:
			iVar0 = 144;
			break;
		
		case 210195800:
			iVar0 = 145;
			break;
		
		case 1843402776:
			iVar0 = 146;
			break;
		
		case -1600520821:
			iVar0 = 147;
			break;
		
		case 1399087889:
			iVar0 = 148;
			break;
		
		case 1169344430:
			iVar0 = 149;
			break;
		
		case -2028647818:
			iVar0 = 150;
			break;
		
		case -1335845620:
			iVar0 = 151;
			break;
		
		case -1450406320:
			iVar0 = 152;
			break;
		
		case -1209849091:
			iVar0 = 153;
			break;
		
		case 2065609077:
			iVar0 = 154;
			break;
		
		case -664245241:
			iVar0 = 155;
			break;
		
		case 1676130538:
			iVar0 = 156;
			break;
		
		case -1730534702:
			iVar0 = 157;
			break;
		
		case -1767432596:
			iVar0 = 158;
			break;
		
		case -2016105604:
			iVar0 = 159;
			break;
		
		case 1971947238:
			iVar0 = 160;
			break;
		
		case -362811247:
			iVar0 = 161;
			break;
		
		case -668087251:
			iVar0 = 162;
			break;
		
		case -821282326:
			iVar0 = 163;
			break;
		
		case -1083467095:
			iVar0 = 164;
			break;
		
		case 550067555:
			iVar0 = 165;
			break;
		
		case 1439221609:
			iVar0 = 166;
			break;
		
		case 67412954:
			iVar0 = 167;
			break;
		
		case -1999360357:
			iVar0 = 168;
			break;
		
		case 1461537582:
			iVar0 = 169;
			break;
		
		case -1828273408:
			iVar0 = 170;
			break;
		
		case -1319239762:
			iVar0 = 171;
			break;
		
		case -1234400821:
			iVar0 = 172;
			break;
		
		case -992303449:
			iVar0 = 173;
			break;
		
		case -638398249:
			iVar0 = 174;
			break;
		
		case -41543683:
			iVar0 = 175;
			break;
		
		case -1934903018:
			iVar0 = 176;
			break;
		
		case 2132090345:
			iVar0 = 177;
			break;
		
		case 1751052413:
			iVar0 = 178;
			break;
		
		case 1519604966:
			iVar0 = 179;
			break;
		
		case -1964624525:
			iVar0 = 180;
			break;
		
		case 2006191823:
			iVar0 = 181;
			break;
		
		case 1633280603:
			iVar0 = 182;
			break;
		
		case 632918673:
			iVar0 = 183;
			break;
		
		case -190040148:
			iVar0 = 184;
			break;
		
		case 42936837:
			iVar0 = 185;
			break;
		
		case -1458541976:
			iVar0 = 186;
			break;
		
		case -606014753:
			iVar0 = 187;
			break;
		
		case -613376371:
			iVar0 = 188;
			break;
		
		case -446291501:
			iVar0 = 189;
			break;
		
		case 739308497:
			iVar0 = 190;
			break;
		
		case 495343292:
			iVar0 = 191;
			break;
		
		case -1686711653:
			iVar0 = 192;
			break;
		
		case 1187457341:
			iVar0 = 193;
			break;
		
		case 956403122:
			iVar0 = 194;
			break;
		
		case 1647042566:
			iVar0 = 195;
			break;
		
		case -461478743:
			iVar0 = 196;
			break;
		
		case -1883325653:
			iVar0 = 197;
			break;
		
		case -2114248796:
			iVar0 = 198;
			break;
		
		case 314228205:
			iVar0 = 199;
			break;
	}
	switch (iParam0)
	{
		case 1503775674:
			iVar0 = 200;
			break;
		
		case 1862399610:
			iVar0 = 201;
			break;
		
		case 708472048:
			iVar0 = 202;
			break;
		
		case -1207367545:
			iVar0 = 203;
			break;
		
		case 111650251:
			iVar0 = 204;
			break;
		
		case -28941494:
			iVar0 = 205;
			break;
		
		case -1827173138:
			iVar0 = 206;
			break;
		
		case -520681423:
			iVar0 = 207;
			break;
		
		case -209343154:
			iVar0 = 208;
			break;
		
		case -293579471:
			iVar0 = 209;
			break;
		
		case 20871853:
			iVar0 = 210;
			break;
		
		case -89823344:
			iVar0 = 211;
			break;
		
		case -1820191335:
			iVar0 = 212;
			break;
		
		case -1588547274:
			iVar0 = 213;
			break;
		
		case -1224287070:
			iVar0 = 214;
			break;
		
		case -994150383:
			iVar0 = 215;
			break;
		
		case -869824793:
			iVar0 = 216;
			break;
		
		case -633330920:
			iVar0 = 217;
			break;
		
		case -308131364:
			iVar0 = 218;
			break;
		
		case -38278649:
			iVar0 = 219;
			break;
		
		case 555692245:
			iVar0 = 220;
			break;
		
		case 929455459:
			iVar0 = 221;
			break;
		
		case -2092436411:
			iVar0 = 222;
			break;
		
		case 1904300216:
			iVar0 = 223;
			break;
		
		case -1599361268:
			iVar0 = 224;
			break;
		
		case -1897002095:
			iVar0 = 225;
			break;
		
		case -1011813098:
			iVar0 = 226;
			break;
		
		case -1316794181:
			iVar0 = 227;
			break;
		
		case -416105443:
			iVar0 = 228;
			break;
		
		case -47978497:
			iVar0 = 229;
			break;
		
		case -358202620:
			iVar0 = 230;
			break;
		
		case 547139312:
			iVar0 = 231;
			break;
		
		case 1124688073:
			iVar0 = 232;
			break;
		
		case 888521890:
			iVar0 = 233;
			break;
		
		case 665823766:
			iVar0 = 234;
			break;
		
		case 427888057:
			iVar0 = 235;
			break;
		
		case 1121411181:
			iVar0 = 236;
			break;
		
		case 890225886:
			iVar0 = 237;
			break;
		
		case 651012186:
			iVar0 = 238;
			break;
		
		case 422776101:
			iVar0 = 239;
			break;
		
		case 1630543134:
			iVar0 = 240;
			break;
		
		case -1945668916:
			iVar0 = 241;
			break;
		
		case -627999265:
			iVar0 = 242;
			break;
		
		case 1682346315:
			iVar0 = 243;
			break;
		
		case 1021952654:
			iVar0 = 244;
			break;
		
		case 1319396867:
			iVar0 = 245;
			break;
		
		case 560794517:
			iVar0 = 246;
			break;
		
		case 858697496:
			iVar0 = 247;
			break;
		
		case -30981230:
			iVar0 = 248;
			break;
		
		case -328032215:
			iVar0 = 249;
			break;
		
		case -1451681225:
			iVar0 = 250;
			break;
		
		case 267904819:
			iVar0 = 251;
			break;
		
		case 1570178485:
			iVar0 = 252;
			break;
		
		case -1619850916:
			iVar0 = 253;
			break;
		
		case -713067148:
			iVar0 = 254;
			break;
		
		case 946477614:
			iVar0 = 255;
			break;
		
		case -1423343701:
			iVar0 = 256;
			break;
		
		case 445931457:
			iVar0 = 257;
			break;
		
		case 678558588:
			iVar0 = 258;
			break;
		
		case -854631987:
			iVar0 = 259;
			break;
		
		case -1707871209:
			iVar0 = 260;
			break;
		
		case -863391184:
			iVar0 = 261;
			break;
		
		case 671171671:
			iVar0 = 262;
			break;
		
		case 904519720:
			iVar0 = 263;
			break;
		
		case 670952414:
			iVar0 = 264;
			break;
		
		case -282875325:
			iVar0 = 265;
			break;
		
		case 2079623104:
			iVar0 = 266;
			break;
		
		case 1088443427:
			iVar0 = 267;
			break;
		
		case 200001600:
			iVar0 = 268;
			break;
		
		case 1620729159:
			iVar0 = 269;
			break;
		
		case -1713274238:
			iVar0 = 270;
			break;
		
		case -1571590969:
			iVar0 = 271;
			break;
		
		case -457639374:
			iVar0 = 272;
			break;
		
		case 64160805:
			iVar0 = 273;
			break;
		
		case 1015325203:
			iVar0 = 274;
			break;
		
		case -1951778967:
			iVar0 = 275;
			break;
		
		case 1836042304:
			iVar0 = 276;
			break;
		
		case -421094621:
			iVar0 = 277;
			break;
		
		case 641062099:
			iVar0 = 278;
			break;
		
		case 597454468:
			iVar0 = 279;
			break;
		
		case 713758205:
			iVar0 = 280;
			break;
		
		case 1042267708:
			iVar0 = 281;
			break;
		
		case -637951661:
			iVar0 = 282;
			break;
		
		case 195911857:
			iVar0 = 283;
			break;
		
		case 903988957:
			iVar0 = 284;
			break;
		
		case 1068170761:
			iVar0 = 285;
			break;
		
		case -619065384:
			iVar0 = 286;
			break;
		
		case -497085955:
			iVar0 = 287;
			break;
		
		case 1138369002:
			iVar0 = 288;
			break;
		
		case -1957731308:
			iVar0 = 289;
			break;
		
		case -2063712125:
			iVar0 = 290;
			break;
		
		case 1773674262:
			iVar0 = 291;
			break;
		
		case 1027059614:
			iVar0 = 292;
			break;
		
		case 1366782677:
			iVar0 = 293;
			break;
		
		case 216134256:
			iVar0 = 294;
			break;
		
		case 810154442:
			iVar0 = 295;
			break;
		
		case 77285961:
			iVar0 = 296;
			break;
		
		case 1617489838:
			iVar0 = 297;
			break;
		
		case 1697138602:
			iVar0 = 298;
			break;
		
		case 711811694:
			iVar0 = 299;
			break;
	}
	switch (iParam0)
	{
		case -895106351:
			iVar0 = 300;
			break;
		
		case 875367934:
			iVar0 = 301;
			break;
		
		case -979867160:
			iVar0 = 302;
			break;
		
		case -1233816942:
			iVar0 = 303;
			break;
		
		case -866958715:
			iVar0 = 304;
			break;
		
		case -1303573005:
			iVar0 = 305;
			break;
		
		case 2085207152:
			iVar0 = 306;
			break;
		
		case 857137150:
			iVar0 = 307;
			break;
		
		case 535952639:
			iVar0 = 308;
			break;
		
		case -1974657401:
			iVar0 = 309;
			break;
		
		case 129909013:
			iVar0 = 310;
			break;
		
		case -1499060170:
			iVar0 = 311;
			break;
		
		case 412032123:
			iVar0 = 312;
			break;
		
		case 915049044:
			iVar0 = 313;
			break;
		
		case 456478679:
			iVar0 = 314;
			break;
		
		case 907364848:
			iVar0 = 315;
			break;
		
		case -1783721060:
			iVar0 = 316;
			break;
		
		case -1008363280:
			iVar0 = 317;
			break;
		
		case 1429817922:
			iVar0 = 318;
			break;
		
		case -938326281:
			iVar0 = 319;
			break;
		
		case -1073925235:
			iVar0 = 320;
			break;
		
		case 1498524677:
			iVar0 = 321;
			break;
		
		case 1525596308:
			iVar0 = 322;
			break;
		
		case 1232639216:
			iVar0 = 323;
			break;
		
		case 956061600:
			iVar0 = 324;
			break;
		
		case 816551665:
			iVar0 = 325;
			break;
		
		case 2049704410:
			iVar0 = 326;
			break;
		
		case -796818724:
			iVar0 = 327;
			break;
		
		case 1775476370:
			iVar0 = 328;
			break;
		
		case 266230635:
			iVar0 = 329;
			break;
		
		case -588549683:
			iVar0 = 330;
			break;
		
		case 464027076:
			iVar0 = 331;
			break;
		
		case 2122049260:
			iVar0 = 332;
			break;
		
		case 1049130700:
			iVar0 = 333;
			break;
		
		case -116952560:
			iVar0 = 334;
			break;
		
		case 1424723115:
			iVar0 = 335;
			break;
		
		case -1007272003:
			iVar0 = 336;
			break;
		
		case -644829701:
			iVar0 = 337;
			break;
		
		case -2103222497:
			iVar0 = 338;
			break;
		
		case -1589795073:
			iVar0 = 339;
			break;
		
		case -1689668067:
			iVar0 = 340;
			break;
		
		case -189814108:
			iVar0 = 341;
			break;
		
		case -1595292141:
			iVar0 = 342;
			break;
		
		case -1540940714:
			iVar0 = 343;
			break;
		
		case -2136471172:
			iVar0 = 344;
			break;
		
		case -666892434:
			iVar0 = 345;
			break;
		
		case -1001125323:
			iVar0 = 346;
			break;
		
		case 904104464:
			iVar0 = 347;
			break;
		
		case 690016265:
			iVar0 = 348;
			break;
		
		case 38190590:
			iVar0 = 349;
			break;
		
		case 2119761078:
			iVar0 = 350;
			break;
		
		case -1213131712:
			iVar0 = 351;
			break;
		
		case 990079224:
			iVar0 = 352;
			break;
		
		case -905045993:
			iVar0 = 353;
			break;
		
		case 2104378143:
			iVar0 = 354;
			break;
		
		case -666631800:
			iVar0 = 355;
			break;
		
		case 549954933:
			iVar0 = 356;
			break;
		
		case 1830069972:
			iVar0 = 357;
			break;
		
		case 859320876:
			iVar0 = 358;
			break;
		
		case -552358316:
			iVar0 = 359;
			break;
		
		case 1522216340:
			iVar0 = 360;
			break;
		
		case -1783296601:
			iVar0 = 361;
			break;
		
		case 283995288:
			iVar0 = 362;
			break;
		
		case -975534410:
			iVar0 = 363;
			break;
		
		case -2088194624:
			iVar0 = 364;
			break;
		
		case 1744801848:
			iVar0 = 365;
			break;
		
		case -481389646:
			iVar0 = 366;
			break;
		
		case -1781363036:
			iVar0 = 367;
			break;
		
		case 496009839:
			iVar0 = 368;
			break;
		
		case -667608820:
			iVar0 = 369;
			break;
		
		case 460475899:
			iVar0 = 370;
			break;
		
		case 1491168919:
			iVar0 = 371;
			break;
		
		case -1611478806:
			iVar0 = 372;
			break;
		
		case 523495612:
			iVar0 = 373;
			break;
		
		case -78008273:
			iVar0 = 374;
			break;
		
		case -762375847:
			iVar0 = 375;
			break;
		
		case 331482129:
			iVar0 = 376;
			break;
		
		case -2083628050:
			iVar0 = 377;
			break;
		
		case -468800117:
			iVar0 = 378;
			break;
		
		case 724819757:
			iVar0 = 379;
			break;
		
		case -1058761348:
			iVar0 = 380;
			break;
		
		case -546178212:
			iVar0 = 381;
			break;
		
		case -118052734:
			iVar0 = 382;
			break;
		
		case 1654466691:
			iVar0 = 383;
			break;
		
		case -1077553649:
			iVar0 = 384;
			break;
		
		case -886092159:
			iVar0 = 385;
			break;
		
		case -1406331536:
			iVar0 = 386;
			break;
		
		case -1968934850:
			iVar0 = 387;
			break;
		
		case 3741245:
			iVar0 = 388;
			break;
		
		case 1387838298:
			iVar0 = 389;
			break;
		
		case -1941058219:
			iVar0 = 390;
			break;
		
		case 955033120:
			iVar0 = 391;
			break;
		
		case 677119231:
			iVar0 = 392;
			break;
		
		case -1616214916:
			iVar0 = 393;
			break;
		
		case -841195297:
			iVar0 = 394;
			break;
		
		case -909289279:
			iVar0 = 395;
			break;
		
		case -239567341:
			iVar0 = 396;
			break;
		
		case -613592707:
			iVar0 = 397;
			break;
		
		case -988568374:
			iVar0 = 398;
			break;
		
		case -1090807654:
			iVar0 = 399;
			break;
	}
	switch (iParam0)
	{
		case 534771589:
			iVar0 = 400;
			break;
		
		case -1340139519:
			iVar0 = 401;
			break;
		
		case -849980761:
			iVar0 = 402;
			break;
		
		case -551553478:
			iVar0 = 403;
			break;
		
		case 386581472:
			iVar0 = 404;
			break;
		
		case 1466454525:
			iVar0 = 405;
			break;
		
		case 283190173:
			iVar0 = 406;
			break;
		
		case 1528527015:
			iVar0 = 407;
			break;
		
		case -1690029966:
			iVar0 = 408;
			break;
		
		case -1685994466:
			iVar0 = 409;
			break;
		
		case 255166927:
			iVar0 = 410;
			break;
		
		case -271257487:
			iVar0 = 411;
			break;
		
		case 1885215284:
			iVar0 = 412;
			break;
		
		case -1935156988:
			iVar0 = 413;
			break;
		
		case 1061465906:
			iVar0 = 414;
			break;
		
		case -871031729:
			iVar0 = 415;
			break;
		
		case -101171485:
			iVar0 = 416;
			break;
		
		case -1590298770:
			iVar0 = 417;
			break;
		
		case 303441856:
			iVar0 = 418;
			break;
		
		case -2049689650:
			iVar0 = 419;
			break;
		
		case 788520303:
			iVar0 = 420;
			break;
		
		case -859861445:
			iVar0 = 421;
			break;
		
		case 1045897298:
			iVar0 = 422;
			break;
		
		case 116964921:
			iVar0 = 423;
			break;
		
		case -1502257606:
			iVar0 = 424;
			break;
		
		case -546150284:
			iVar0 = 425;
			break;
		
		case -357466888:
			iVar0 = 426;
			break;
		
		case 718674880:
			iVar0 = 427;
			break;
		
		case -1529401172:
			iVar0 = 428;
			break;
		
		case 2088037441:
			iVar0 = 429;
			break;
		
		case 2048866271:
			iVar0 = 430;
			break;
		
		case -1565431690:
			iVar0 = 431;
			break;
		
		case -1528465573:
			iVar0 = 432;
			break;
		
		case 401532197:
			iVar0 = 433;
			break;
		
		case 826974918:
			iVar0 = 434;
			break;
		
		case -676067408:
			iVar0 = 435;
			break;
		
		case 1877289089:
			iVar0 = 436;
			break;
		
		case 859380017:
			iVar0 = 437;
			break;
		
		case 233098354:
			iVar0 = 438;
			break;
		
		case 566101858:
			iVar0 = 439;
			break;
		
		case 529460830:
			iVar0 = 440;
			break;
		
		case -1833118141:
			iVar0 = 441;
			break;
		
		case 422823598:
			iVar0 = 442;
			break;
		
		case 1450358661:
			iVar0 = 443;
			break;
		
		case 741089893:
			iVar0 = 444;
			break;
		
		case 1289848370:
			iVar0 = 445;
			break;
		
		case 616166430:
			iVar0 = 446;
			break;
		
		case 1489225316:
			iVar0 = 447;
			break;
		
		case 753969632:
			iVar0 = 448;
			break;
		
		case -1182831168:
			iVar0 = 449;
			break;
		
		case 1545103753:
			iVar0 = 450;
			break;
		
		case 2090080808:
			iVar0 = 451;
			break;
		
		case 903606896:
			iVar0 = 452;
			break;
		
		case 26759391:
			iVar0 = 453;
			break;
		
		case 1651885364:
			iVar0 = 454;
			break;
		
		case 729529407:
			iVar0 = 455;
			break;
		
		case 528802126:
			iVar0 = 456;
			break;
		
		case -1468003071:
			iVar0 = 457;
			break;
		
		case 1683696787:
			iVar0 = 458;
			break;
		
		case -726859160:
			iVar0 = 459;
			break;
		
		case 1209899578:
			iVar0 = 460;
			break;
		
		case 930604285:
			iVar0 = 461;
			break;
		
		case -308584186:
			iVar0 = 462;
			break;
		
		case -64129874:
			iVar0 = 463;
			break;
		
		case -1431204514:
			iVar0 = 464;
			break;
		
		case -1133334304:
			iVar0 = 465;
			break;
		
		case -1809784771:
			iVar0 = 466;
			break;
		
		case -1576934998:
			iVar0 = 467;
			break;
		
		case -1570929684:
			iVar0 = 468;
			break;
		
		case 1976578151:
			iVar0 = 469;
			break;
		
		case -441419962:
			iVar0 = 470;
			break;
		
		case -841238543:
			iVar0 = 471;
			break;
		
		case 1644315794:
			iVar0 = 472;
			break;
		
		case 1964334039:
			iVar0 = 473;
			break;
		
		case -1168614925:
			iVar0 = 474;
			break;
		
		case -56760095:
			iVar0 = 475;
			break;
		
		case -1006202521:
			iVar0 = 476;
			break;
		
		case -1834049539:
			iVar0 = 477;
			break;
		
		case -2060372580:
			iVar0 = 478;
			break;
		
		case 1057304170:
			iVar0 = 479;
			break;
		
		case 1421572640:
			iVar0 = 480;
			break;
		
		case 481259621:
			iVar0 = 481;
			break;
		
		case 1227497670:
			iVar0 = 482;
			break;
		
		case 319276780:
			iVar0 = 483;
			break;
		
		case 2070827921:
			iVar0 = 484;
			break;
		
		case 1433629991:
			iVar0 = 485;
			break;
		
		case -1712994650:
			iVar0 = 486;
			break;
		
		case 2125094286:
			iVar0 = 487;
			break;
		
		case 712298404:
			iVar0 = 488;
			break;
		
		case 1998072324:
			iVar0 = 489;
			break;
		
		case 1249206960:
			iVar0 = 490;
			break;
		
		case -621355603:
			iVar0 = 491;
			break;
		
		case 1570835960:
			iVar0 = 492;
			break;
		
		case -1254202543:
			iVar0 = 493;
			break;
		
		case -956136061:
			iVar0 = 494;
			break;
		
		case -1925480683:
			iVar0 = 495;
			break;
		
		case 220143168:
			iVar0 = 496;
			break;
		
		case -1021851577:
			iVar0 = 497;
			break;
		
		case -773345516:
			iVar0 = 498;
			break;
		
		case 1091795205:
			iVar0 = 499;
			break;
	}
	switch (iParam0)
	{
		case -1159824040:
			iVar0 = 500;
			break;
		
		case 1448723789:
			iVar0 = 501;
			break;
		
		case -488127340:
			iVar0 = 502;
			break;
		
		case -1964967283:
			iVar0 = 503;
			break;
		
		case -1635180127:
			iVar0 = 504;
			break;
		
		case -10501563:
			iVar0 = 505;
			break;
		
		case 933419071:
			iVar0 = 506;
			break;
		
		case 1362374839:
			iVar0 = 507;
			break;
		
		case 488078687:
			iVar0 = 508;
			break;
		
		case -1869054624:
			iVar0 = 509;
			break;
		
		case -1817642831:
			iVar0 = 510;
			break;
		
		case 482472119:
			iVar0 = 511;
			break;
		
		case -1736839817:
			iVar0 = 512;
			break;
		
		case 415527077:
			iVar0 = 513;
			break;
		
		case -907440189:
			iVar0 = 514;
			break;
		
		case -2099454789:
			iVar0 = 515;
			break;
		
		case -1719543542:
			iVar0 = 516;
			break;
		
		case 1848661824:
			iVar0 = 517;
			break;
		
		case -2018029706:
			iVar0 = 518;
			break;
		
		case -717212544:
			iVar0 = 519;
			break;
		
		case -594210450:
			iVar0 = 520;
			break;
		
		case 1520437442:
			iVar0 = 521;
			break;
		
		case 374349467:
			iVar0 = 522;
			break;
		
		case 1533123503:
			iVar0 = 523;
			break;
		
		case -1832780872:
			iVar0 = 524;
			break;
		
		case 130721536:
			iVar0 = 525;
			break;
		
		case 195356001:
			iVar0 = 526;
			break;
		
		case -556915722:
			iVar0 = 527;
			break;
		
		case -1930562696:
			iVar0 = 528;
			break;
		
		case 941227127:
			iVar0 = 529;
			break;
		
		case -842699589:
			iVar0 = 530;
			break;
		
		case 1654019571:
			iVar0 = 531;
			break;
		
		case 224191803:
			iVar0 = 532;
			break;
		
		case -1996796255:
			iVar0 = 533;
			break;
		
		case -1850715440:
			iVar0 = 534;
			break;
		
		case 1603163718:
			iVar0 = 535;
			break;
		
		case 1567227108:
			iVar0 = 536;
			break;
		
		case -1630649997:
			iVar0 = 537;
			break;
		
		case -25727072:
			iVar0 = 538;
			break;
		
		case -1363418653:
			iVar0 = 539;
			break;
		
		case 1878229535:
			iVar0 = 540;
			break;
		
		case 1531050226:
			iVar0 = 541;
			break;
		
		case 1246243345:
			iVar0 = 542;
			break;
		
		case 463561930:
			iVar0 = 543;
			break;
		
		case 1431846777:
			iVar0 = 544;
			break;
		
		case -460168116:
			iVar0 = 545;
			break;
		
		case -2015343582:
			iVar0 = 546;
			break;
		
		case 2051301469:
			iVar0 = 547;
			break;
		
		case 1887452986:
			iVar0 = 548;
			break;
		
		case -1551331969:
			iVar0 = 549;
			break;
		
		case 682382693:
			iVar0 = 550;
			break;
		
		case 765481743:
			iVar0 = 551;
			break;
		
		case 1094179010:
			iVar0 = 552;
			break;
		
		case 1906582382:
			iVar0 = 553;
			break;
		
		case 1923135102:
			iVar0 = 554;
			break;
		
		case -964908188:
			iVar0 = 555;
			break;
		
		case -1145896773:
			iVar0 = 556;
			break;
		
		case -776248682:
			iVar0 = 557;
			break;
		
		case 872613482:
			iVar0 = 558;
			break;
		
		case 1049060638:
			iVar0 = 559;
			break;
		
		case -927135334:
			iVar0 = 560;
			break;
		
		case -445820043:
			iVar0 = 561;
			break;
		
		case 1610045630:
			iVar0 = 562;
			break;
		
		case -1070800165:
			iVar0 = 563;
			break;
		
		case -589592162:
			iVar0 = 564;
			break;
		
		case 1723966869:
			iVar0 = 565;
			break;
		
		case 402539085:
			iVar0 = 566;
			break;
		
		case 873283678:
			iVar0 = 567;
			break;
		
		case -883161109:
			iVar0 = 568;
			break;
		
		case -1764919154:
			iVar0 = 569;
			break;
		
		case -2050352513:
			iVar0 = 570;
			break;
		
		case 1114188021:
			iVar0 = 571;
			break;
		
		case 1798282399:
			iVar0 = 572;
			break;
		
		case 1944820428:
			iVar0 = 573;
			break;
		
		case 100210893:
			iVar0 = 574;
			break;
		
		case -1699022511:
			iVar0 = 575;
			break;
		
		case 466917406:
			iVar0 = 576;
			break;
		
		case -349746245:
			iVar0 = 577;
			break;
		
		case 715904570:
			iVar0 = 578;
			break;
		
		case 281777035:
			iVar0 = 579;
			break;
		
		case 1511283406:
			iVar0 = 580;
			break;
		
		case -241337647:
			iVar0 = 581;
			break;
		
		case 748393780:
			iVar0 = 582;
			break;
		
		case 709511536:
			iVar0 = 583;
			break;
		
		case -652535466:
			iVar0 = 584;
			break;
		
		case -1148900842:
			iVar0 = 585;
			break;
		
		case -271863310:
			iVar0 = 586;
			break;
		
		case 35654857:
			iVar0 = 587;
			break;
		
		case 1894813304:
			iVar0 = 588;
			break;
		
		case 1184660438:
			iVar0 = 589;
			break;
		
		case -1461750963:
			iVar0 = 590;
			break;
		
		case 769964545:
			iVar0 = 591;
			break;
		
		case 1424500982:
			iVar0 = 592;
			break;
		
		case -1810785185:
			iVar0 = 593;
			break;
		
		case 837990279:
			iVar0 = 594;
			break;
		
		case -1357788003:
			iVar0 = 595;
			break;
		
		case -8210327:
			iVar0 = 596;
			break;
		
		case 1186553524:
			iVar0 = 597;
			break;
		
		case 1174934203:
			iVar0 = 598;
			break;
		
		case -984449089:
			iVar0 = 599;
			break;
	}
	switch (iParam0)
	{
		case -49570837:
			iVar0 = 600;
			break;
		
		case -1680371785:
			iVar0 = 601;
			break;
		
		case -1850912390:
			iVar0 = 602;
			break;
		
		case -1740038087:
			iVar0 = 603;
			break;
		
		case -619541947:
			iVar0 = 604;
			break;
		
		case 294240494:
			iVar0 = 605;
			break;
		
		case -765542196:
			iVar0 = 606;
			break;
		
		case -1420662645:
			iVar0 = 607;
			break;
		
		case 331918356:
			iVar0 = 608;
			break;
		
		case 204953755:
			iVar0 = 609;
			break;
		
		case 1764172461:
			iVar0 = 610;
			break;
		
		case 1462870109:
			iVar0 = 611;
			break;
		
		case -2071014467:
			iVar0 = 612;
			break;
		
		case 478439238:
			iVar0 = 613;
			break;
		
		case 796489219:
			iVar0 = 614;
			break;
		
		case 843279688:
			iVar0 = 615;
			break;
		
		case 1752551314:
			iVar0 = 616;
			break;
		
		case 735155845:
			iVar0 = 617;
			break;
		
		case 1863251462:
			iVar0 = 618;
			break;
		
		case -2142058763:
			iVar0 = 619;
			break;
		
		case -207591105:
			iVar0 = 620;
			break;
		
		case -932813887:
			iVar0 = 621;
			break;
		
		case -313503199:
			iVar0 = 622;
			break;
		
		case 718936417:
			iVar0 = 623;
			break;
		
		case -1107649605:
			iVar0 = 624;
			break;
		
		case 39090475:
			iVar0 = 625;
			break;
		
		case 1628251208:
			iVar0 = 626;
			break;
		
		case -311245907:
			iVar0 = 627;
			break;
		
		case -942031335:
			iVar0 = 628;
			break;
		
		case -1285040537:
			iVar0 = 629;
			break;
		
		case -606706891:
			iVar0 = 630;
			break;
		
		case -1719095858:
			iVar0 = 631;
			break;
		
		case 1725502681:
			iVar0 = 632;
			break;
		
		case 609583888:
			iVar0 = 633;
			break;
		
		case -1172383155:
			iVar0 = 634;
			break;
		
		case -3492404:
			iVar0 = 635;
			break;
		
		case -1006004645:
			iVar0 = 636;
			break;
		
		case -1937311482:
			iVar0 = 637;
			break;
		
		case -2065604094:
			iVar0 = 638;
			break;
		
		case 2028818254:
			iVar0 = 639;
			break;
		
		case 1624012067:
			iVar0 = 640;
			break;
		
		case -1877817141:
			iVar0 = 641;
			break;
		
		case -911576192:
			iVar0 = 642;
			break;
		
		case -2038013276:
			iVar0 = 643;
			break;
		
		case -901986542:
			iVar0 = 644;
			break;
		
		case 1792492176:
			iVar0 = 645;
			break;
		
		case -86485329:
			iVar0 = 646;
			break;
		
		case -1083434268:
			iVar0 = 647;
			break;
		
		case 613606704:
			iVar0 = 648;
			break;
		
		case -394853815:
			iVar0 = 649;
			break;
		
		case -1103127620:
			iVar0 = 650;
			break;
		
		case -1565650506:
			iVar0 = 651;
			break;
		
		case 1845793118:
			iVar0 = 652;
			break;
		
		case 105835401:
			iVar0 = 653;
			break;
		
		case 874268443:
			iVar0 = 654;
			break;
		
		case 2088424900:
			iVar0 = 655;
			break;
		
		case -786732051:
			iVar0 = 656;
			break;
		
		case 2054090970:
			iVar0 = 657;
			break;
		
		case 1878368697:
			iVar0 = 658;
			break;
		
		case 569662133:
			iVar0 = 659;
			break;
		
		case -792802958:
			iVar0 = 660;
			break;
		
		case 2006001399:
			iVar0 = 661;
			break;
		
		case 1785762805:
			iVar0 = 662;
			break;
		
		case 737220320:
			iVar0 = 663;
			break;
		
		case 1396060544:
			iVar0 = 664;
			break;
		
		case -1964728736:
			iVar0 = 665;
			break;
		
		case 1593302778:
			iVar0 = 666;
			break;
		
		case 84849272:
			iVar0 = 667;
			break;
		
		case -402776165:
			iVar0 = 668;
			break;
		
		case -221660734:
			iVar0 = 669;
			break;
		
		case 1648112645:
			iVar0 = 670;
			break;
		
		case 2066668749:
			iVar0 = 671;
			break;
		
		case -4424163:
			iVar0 = 672;
			break;
		
		case -173288591:
			iVar0 = 673;
			break;
		
		case 253771760:
			iVar0 = 674;
			break;
		
		case -1431574022:
			iVar0 = 675;
			break;
		
		case 959314664:
			iVar0 = 676;
			break;
		
		case 1670479428:
			iVar0 = 677;
			break;
		
		case 1779534675:
			iVar0 = 678;
			break;
		
		case -1268204471:
			iVar0 = 679;
			break;
		
		case -1937668252:
			iVar0 = 680;
			break;
		
		case -192802570:
			iVar0 = 681;
			break;
		
		case 1200380295:
			iVar0 = 682;
			break;
		
		case -644503216:
			iVar0 = 683;
			break;
		
		case 496410473:
			iVar0 = 684;
			break;
		
		case 462780886:
			iVar0 = 685;
			break;
		
		case 211198653:
			iVar0 = 686;
			break;
		
		case -504012739:
			iVar0 = 687;
			break;
		
		case 34276608:
			iVar0 = 688;
			break;
		
		case -2088223199:
			iVar0 = 689;
			break;
		
		case 2056773549:
			iVar0 = 690;
			break;
		
		case 962023066:
			iVar0 = 691;
			break;
		
		case 893288510:
			iVar0 = 692;
			break;
		
		case 1963590204:
			iVar0 = 693;
			break;
		
		case 919272855:
			iVar0 = 694;
			break;
		
		case 413754974:
			iVar0 = 695;
			break;
		
		case -1862916472:
			iVar0 = 696;
			break;
		
		case -1184732039:
			iVar0 = 697;
			break;
		
		case -143503455:
			iVar0 = 698;
			break;
		
		case -1119221482:
			iVar0 = 699;
			break;
	}
	switch (iParam0)
	{
		case -1642199958:
			iVar0 = 700;
			break;
		
		case 133895676:
			iVar0 = 701;
			break;
		
		case -2040228203:
			iVar0 = 702;
			break;
		
		case -783643150:
			iVar0 = 703;
			break;
		
		case 291473683:
			iVar0 = 704;
			break;
		
		case -545474062:
			iVar0 = 705;
			break;
		
		case 1013405919:
			iVar0 = 706;
			break;
		
		case 673922718:
			iVar0 = 707;
			break;
		
		case -1707377523:
			iVar0 = 708;
			break;
		
		case 1029334921:
			iVar0 = 709;
			break;
		
		case -534855486:
			iVar0 = 710;
			break;
		
		case -516333262:
			iVar0 = 711;
			break;
		
		case 485135095:
			iVar0 = 712;
			break;
		
		case 1713551997:
			iVar0 = 713;
			break;
		
		case -1490658501:
			iVar0 = 714;
			break;
		
		case -1735635238:
			iVar0 = 715;
			break;
		
		case 1931303956:
			iVar0 = 716;
			break;
		
		case -1931617488:
			iVar0 = 717;
			break;
		
		case -1726332301:
			iVar0 = 718;
			break;
		
		case -1382922530:
			iVar0 = 719;
			break;
		
		case 452778672:
			iVar0 = 720;
			break;
		
		case -1776790350:
			iVar0 = 721;
			break;
		
		case -1988057295:
			iVar0 = 722;
			break;
		
		case 816707921:
			iVar0 = 723;
			break;
		
		case 744446190:
			iVar0 = 724;
			break;
		
		case 917772807:
			iVar0 = 725;
			break;
		
		case -292922355:
			iVar0 = 726;
			break;
		
		case -1495432685:
			iVar0 = 727;
			break;
		
		case -811147717:
			iVar0 = 728;
			break;
		
		case -851111149:
			iVar0 = 729;
			break;
		
		case 1404205290:
			iVar0 = 730;
			break;
		
		case -1365916084:
			iVar0 = 731;
			break;
		
		case -422913369:
			iVar0 = 732;
			break;
		
		case -892793487:
			iVar0 = 733;
			break;
		
		case -1795208156:
			iVar0 = 734;
			break;
		
		case 573261452:
			iVar0 = 735;
			break;
		
		case 2111374302:
			iVar0 = 736;
			break;
		
		case 1832021545:
			iVar0 = 737;
			break;
		
		case 209273925:
			iVar0 = 738;
			break;
		
		case -54254731:
			iVar0 = 739;
			break;
		
		case 112211142:
			iVar0 = 740;
			break;
		
		case 1306824915:
			iVar0 = 741;
			break;
		
		case -1841627189:
			iVar0 = 742;
			break;
		
		case -1814153457:
			iVar0 = 743;
			break;
		
		case -46260381:
			iVar0 = 744;
			break;
		
		case -303409019:
			iVar0 = 745;
			break;
		
		case -1521133289:
			iVar0 = 746;
			break;
		
		case -648193607:
			iVar0 = 747;
			break;
		
		case 820296726:
			iVar0 = 748;
			break;
		
		case 2025651359:
			iVar0 = 749;
			break;
		
		case 1082588124:
			iVar0 = 750;
			break;
		
		case -457752320:
			iVar0 = 751;
			break;
		
		case 1173525590:
			iVar0 = 752;
			break;
		
		case -2123485438:
			iVar0 = 753;
			break;
		
		case -815706791:
			iVar0 = 754;
			break;
		
		case -1318802347:
			iVar0 = 755;
			break;
		
		case 306110040:
			iVar0 = 756;
			break;
		
		case 1828101251:
			iVar0 = 757;
			break;
		
		case -919314748:
			iVar0 = 758;
			break;
		
		case 1971111649:
			iVar0 = 759;
			break;
		
		case -1477471726:
			iVar0 = 760;
			break;
		
		case -650926235:
			iVar0 = 761;
			break;
		
		case -618318124:
			iVar0 = 762;
			break;
		
		case -1820938681:
			iVar0 = 763;
			break;
		
		case -1532633409:
			iVar0 = 764;
			break;
		
		case 1605199232:
			iVar0 = 765;
			break;
		
		case 113768799:
			iVar0 = 766;
			break;
		
		case -267657422:
			iVar0 = 767;
			break;
		
		case -543540488:
			iVar0 = 768;
			break;
		
		case 146774245:
			iVar0 = 769;
			break;
		
		case -439062355:
			iVar0 = 770;
			break;
		
		case -187785912:
			iVar0 = 771;
			break;
		
		case 654127400:
			iVar0 = 772;
			break;
		
		case -2031558195:
			iVar0 = 773;
			break;
		
		case -1071879097:
			iVar0 = 774;
			break;
		
		case 2048147896:
			iVar0 = 775;
			break;
		
		case -1545551839:
			iVar0 = 776;
			break;
		
		case -1811149087:
			iVar0 = 777;
			break;
		
		case -256036523:
			iVar0 = 778;
			break;
		
		case -247186222:
			iVar0 = 779;
			break;
		
		case -355946577:
			iVar0 = 780;
			break;
		
		case 181399885:
			iVar0 = 781;
			break;
		
		case -1219430710:
			iVar0 = 782;
			break;
		
		case 928781515:
			iVar0 = 783;
			break;
		
		case -1757440846:
			iVar0 = 784;
			break;
		
		case -887356639:
			iVar0 = 785;
			break;
		
		case -162415909:
			iVar0 = 786;
			break;
		
		case -1822176783:
			iVar0 = 787;
			break;
		
		case -131581709:
			iVar0 = 788;
			break;
		
		case -969415240:
			iVar0 = 789;
			break;
		
		case 1482211094:
			iVar0 = 790;
			break;
		
		case 1942093304:
			iVar0 = 791;
			break;
		
		case 1376322385:
			iVar0 = 792;
			break;
		
		case 1678423640:
			iVar0 = 793;
			break;
		
		case 1321477520:
			iVar0 = 794;
			break;
		
		case -670835215:
			iVar0 = 795;
			break;
		
		case -32315658:
			iVar0 = 796;
			break;
		
		case -715501640:
			iVar0 = 797;
			break;
		
		case 812138662:
			iVar0 = 798;
			break;
		
		case -1950509905:
			iVar0 = 799;
			break;
	}
	switch (iParam0)
	{
		case 1850969667:
			iVar0 = 800;
			break;
		
		case 997671095:
			iVar0 = 801;
			break;
		
		case -1526467268:
			iVar0 = 802;
			break;
		
		case -881852779:
			iVar0 = 803;
			break;
		
		case -570992218:
			iVar0 = 804;
			break;
		
		case -1075500139:
			iVar0 = 805;
			break;
		
		case -791689054:
			iVar0 = 806;
			break;
		
		case 699980662:
			iVar0 = 807;
			break;
		
		case -583230088:
			iVar0 = 808;
			break;
		
		case 1922201848:
			iVar0 = 809;
			break;
		
		case -767702908:
			iVar0 = 810;
			break;
		
		case 1979813112:
			iVar0 = 811;
			break;
		
		case -2056272592:
			iVar0 = 812;
			break;
		
		case 909368414:
			iVar0 = 813;
			break;
		
		case -940321245:
			iVar0 = 814;
			break;
		
		case -2018521849:
			iVar0 = 815;
			break;
		
		case 1113883376:
			iVar0 = 816;
			break;
		
		case 296940654:
			iVar0 = 817;
			break;
	}
	if (iVar0 != -1)
	{
		*uParam1 = (129 + iVar0);
		return 1;
	}
	return 0;
}

int func_386(int iParam0, int iParam1, int iParam2)//Position - 0x3FF46
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_227();
	}
	iVar1 = func_388(iParam0, iParam1);
	uVar2 = func_387(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0xDDC963E2AB1431C4(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_387(int iParam0)//Position - 0x3FF83
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = ((iParam0 - 0) - unk_0xDBE4A47179904C7B((iParam0 - 0)) * 64);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = ((iParam0 - 192) - unk_0xDBE4A47179904C7B((iParam0 - 192)) * 64);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = ((iParam0 - 513) - unk_0xDBE4A47179904C7B((iParam0 - 513)) * 64);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = ((iParam0 - 705) - unk_0xDBE4A47179904C7B((iParam0 - 705)) * 64);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = ((iParam0 - 2919) - unk_0xDBE4A47179904C7B((iParam0 - 2919)) * 64);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = ((iParam0 - 3111) - unk_0xDBE4A47179904C7B((iParam0 - 3111)) * 64);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = ((iParam0 - 4335) - unk_0xDBE4A47179904C7B((iParam0 - 4335)) * 64);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = ((iParam0 - 4207) - unk_0xDBE4A47179904C7B((iParam0 - 4207)) * 64);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = ((iParam0 - 6029) - unk_0xDBE4A47179904C7B((iParam0 - 6029)) * 64);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = ((iParam0 - 7385) - unk_0xDBE4A47179904C7B((iParam0 - 7385)) * 64);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = ((iParam0 - 7321) - unk_0xDBE4A47179904C7B((iParam0 - 7321)) * 64);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = ((iParam0 - 9361) - unk_0xDBE4A47179904C7B((iParam0 - 9361)) * 64);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = ((iParam0 - 15369) - unk_0xDBE4A47179904C7B((iParam0 - 15369)) * 64);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = ((iParam0 - 15562) - unk_0xDBE4A47179904C7B((iParam0 - 15562)) * 64);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = ((iParam0 - 15946) - unk_0xDBE4A47179904C7B((iParam0 - 15946)) * 64);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = ((iParam0 - 18098) - unk_0xDBE4A47179904C7B((iParam0 - 18098)) * 64);
	}
	return iVar0;
}

int func_388(int iParam0, int iParam1)//Position - 0x40244
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_227();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = unk_0xA7C33AF584635A56((iParam0 - 0), 0, 1, iParam1);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = unk_0xA7C33AF584635A56((iParam0 - 192), 1, 1, iParam1);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = unk_0xA7C33AF584635A56((iParam0 - 513), 0, 0, 0);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = unk_0xA7C33AF584635A56((iParam0 - 705), 1, 0, 0);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = unk_0x88B5FB6273C3123E((iParam0 - 2919), 0, 0, 0);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = unk_0x88B5FB6273C3123E((iParam0 - 3111), 0, 1, iParam1);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = unk_0x7CD64EB2C84F32FF((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = unk_0x7CD64EB2C84F32FF((iParam0 - 4207), 0, 1, iParam1, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = unk_0x7CD64EB2C84F32FF((iParam0 - 6029), 0, 1, iParam1, "_NGTATPSTAT_BOOL");
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = unk_0x7CD64EB2C84F32FF((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = unk_0x7CD64EB2C84F32FF((iParam0 - 7385), 0, 1, iParam1, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = unk_0x7CD64EB2C84F32FF((iParam0 - 9361), 0, 1, iParam1, "_DLCBIKEPSTAT_BOOL");
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = unk_0x7CD64EB2C84F32FF((iParam0 - 15369), 0, 1, iParam1, "_DLCGUNPSTAT_BOOL");
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = unk_0x7CD64EB2C84F32FF((iParam0 - 15562), 0, 1, iParam1, "_GUNTATPSTAT_BOOL");
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = unk_0x7CD64EB2C84F32FF((iParam0 - 15946), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_BOOL");
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = unk_0x7CD64EB2C84F32FF((iParam0 - 18098), 0, 1, iParam1, "_GANGOPSPSTAT_BOOL");
	}
	return iVar0;
}

int func_389(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)//Position - 0x404E6
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x82FF3DFBC3965CC0(iParam0);
	if (iParam4 == 0)
	{
		iVar1 = func_391(iVar0, sParam1, iParam4);
		iParam4 = unk_0x8B948C59217A295D(func_390(iVar1));
	}
	if (iParam3 == 449512698)
	{
		return 0;
	}
	switch (iParam4)
	{
		case -793495770:
		case -763917073:
		case -1409061796:
		case -2066166276:
		case 849089063:
		case 1192230427:
		case -454273031:
		case -1459967458:
		case 1548327796:
		case -1238079313:
		case 129912816:
		case -1469750959:
		case 1586504577:
		case 1753976524:
		case 1361645381:
		case -388268096:
			if (bParam5)
			{
				return 0;
			}
			if ((((iParam4 == -793495770 || (iParam4 == -1409061796 && iVar0 == joaat("mp_f_freemode_01"))) || iParam4 == -2066166276) || iParam4 == 849089063) || iParam4 == 1192230427)
			{
				if (!bParam6)
				{
					if (Global_4265621 == -1)
					{
						if (!Global_92885.f_1473)
						{
							if (func_397(13, -1))
							{
								return 0;
							}
							else if (func_397(14, -1))
							{
								return 0;
							}
							else if (func_397(15, -1))
							{
								return 0;
							}
							else if (func_397(16, -1))
							{
								return 0;
							}
							else if (func_397(71, -1))
							{
								return 0;
							}
							else if (func_397(72, -1))
							{
							}
						}
					}
					else if (Global_4265621 == 13)
					{
						return 0;
					}
					else if (Global_4265621 == 14)
					{
						return 0;
					}
					else if (Global_4265621 == 15)
					{
						return 0;
					}
					else if (Global_4265621 == 16)
					{
						return 0;
					}
					else if (Global_4265621 == 71)
					{
						return 0;
					}
					else if (Global_4265621 == 72)
					{
					}
				}
			}
			else if (iParam4 == -763917073)
			{
				if (!bParam6)
				{
					if (Global_4265621 == -1)
					{
						if (!Global_92885.f_1473)
						{
							if (func_397(13, -1))
							{
								return 0;
							}
							else if (func_397(14, -1))
							{
								return 0;
							}
							else if (func_397(15, -1))
							{
								return 0;
							}
							else if (func_397(16, -1))
							{
								return 0;
							}
							else if (func_397(71, -1))
							{
								return 0;
							}
							else if (func_397(72, -1))
							{
							}
						}
					}
					else if (Global_4265621 == 13)
					{
						return 0;
					}
					else if (Global_4265621 == 14)
					{
						return 0;
					}
					else if (Global_4265621 == 15)
					{
						return 0;
					}
					else if (Global_4265621 == 16)
					{
						return 0;
					}
					else if (Global_4265621 == 71)
					{
						return 0;
					}
					else if (Global_4265621 == 72)
					{
					}
				}
			}
			else if ((iParam4 == 129912816 || iParam4 == 1361645381) || iParam4 == -1469750959)
			{
				if (!bParam6)
				{
					if (Global_4265621 == -1)
					{
						if (!Global_92885.f_1473)
						{
							if (func_397(13, -1))
							{
							}
							else if (func_397(14, -1))
							{
								return 0;
							}
							else if (func_397(15, -1))
							{
								return 0;
							}
							else if (func_397(16, -1))
							{
							}
							else if (func_397(71, -1))
							{
								return 0;
							}
							else if (func_397(72, -1))
							{
							}
						}
					}
					else if (Global_4265621 == 13)
					{
					}
					else if (Global_4265621 == 14)
					{
						return 0;
					}
					else if (Global_4265621 == 15)
					{
						return 0;
					}
					else if (Global_4265621 == 16)
					{
					}
					else if (Global_4265621 == 71)
					{
						return 0;
					}
					else if (Global_4265621 == 72)
					{
					}
				}
			}
			else if (iParam4 == 1928884106)
			{
				if (!bParam6)
				{
					if (Global_4265621 == -1)
					{
						if (!Global_92885.f_1473)
						{
							if (func_397(13, -1))
							{
							}
							else if (func_397(14, -1))
							{
							}
							else if (func_397(15, -1))
							{
							}
							else if (func_397(16, -1))
							{
							}
							else if (func_397(71, -1))
							{
							}
							else if (func_397(72, -1))
							{
							}
						}
					}
					else if (Global_4265621 == 13)
					{
					}
					else if (Global_4265621 == 14)
					{
					}
					else if (Global_4265621 == 15)
					{
					}
					else if (Global_4265621 == 16)
					{
					}
					else if (Global_4265621 == 71)
					{
					}
					else if (Global_4265621 == 72)
					{
					}
				}
			}
			break;
		
		case 1484379715:
		case 711089605:
		case 1206993109:
		case 32564956:
		case 1618133209:
		case 314326195:
		case 1928884106:
		case 1565386395:
		case 2107621060:
			if (bParam8)
			{
				return 0;
			}
			if (!bParam6)
			{
				if (Global_4265621 == -1)
				{
					if (!Global_92885.f_1473)
					{
						if (func_397(13, -1))
						{
						}
						else if (func_397(14, -1))
						{
						}
						else if (func_397(15, -1))
						{
							return 0;
						}
						else if (func_397(16, -1))
						{
						}
						else if (func_397(71, -1))
						{
						}
						else if (func_397(72, -1))
						{
							return 0;
						}
					}
				}
				else if (Global_4265621 == 13)
				{
				}
				else if (Global_4265621 == 14)
				{
				}
				else if (Global_4265621 == 15)
				{
					return 0;
				}
				else if (Global_4265621 == 16)
				{
				}
				else if (Global_4265621 == 71)
				{
				}
				else if (Global_4265621 == 72)
				{
					return 0;
				}
			}
			break;
		
		case 1019352240:
			if (bParam8)
			{
				if (iVar0 == joaat("mp_m_freemode_01"))
				{
					if (Global_4265621 == -1)
					{
						if (!Global_92885.f_1473)
						{
							if (func_397(15, -1))
							{
								return 0;
							}
						}
					}
					else if (Global_4265621 == 15)
					{
						return 0;
					}
				}
			}
			if (bParam6)
			{
				return 0;
			}
			if (bParam5)
			{
				if (Global_4265621 == -1)
				{
					if (!Global_92885.f_1473)
					{
						if (func_397(13, -1))
						{
							return 0;
						}
						else if (func_397(14, -1))
						{
							return 0;
						}
						else if (func_397(15, -1))
						{
							if (!unk_0x74C475EB8E73D398(sParam1, "TAT_FMM_CLB"))
							{
								return 0;
							}
						}
						else if (func_397(16, -1))
						{
						}
						else if (func_397(71, -1))
						{
						}
						else if (func_397(72, -1))
						{
						}
					}
				}
				else if (Global_4265621 == 13)
				{
					return 0;
				}
				else if (Global_4265621 == 14)
				{
					return 0;
				}
				else if (Global_4265621 == 15)
				{
					if (!unk_0x74C475EB8E73D398(sParam1, "TAT_FMM_CLB"))
					{
						return 0;
					}
				}
				else if (Global_4265621 == 16)
				{
				}
				else if (Global_4265621 == 71)
				{
				}
				else if (Global_4265621 == 72)
				{
				}
			}
			break;
		
		case 0:
		case 2:
		case -518474626:
			if (bParam5)
			{
				if (!unk_0xAB019B170BF1309C(sParam1))
				{
					switch (unk_0x8B948C59217A295D(sParam1))
					{
						case 1774176944:
						case 1363941829:
						case -328314869:
						case -1903783095:
						case -1674924399:
						case -106785870:
						case -344656041:
						case 1480281490:
						case -2097372400:
						case 118598456:
						case -1386676768:
						case 1464947154:
						case -1282504117:
						case -1877294236:
						case 736950162:
							return 0;
							break;
						}
					}
			}
			if (iVar0 == joaat("mp_m_freemode_01"))
			{
			}
			else if (iVar0 == joaat("mp_f_freemode_01"))
			{
				if (!bParam6)
				{
					if (Global_4265621 == -1)
					{
						if (!Global_92885.f_1473)
						{
							if (func_397(13, -1))
							{
							}
							else if (func_397(14, -1))
							{
							}
							else if (func_397(15, -1))
							{
							}
							else if (func_397(16, -1))
							{
							}
							else if (func_397(71, -1))
							{
							}
							else if (func_397(72, -1))
							{
							}
						}
					}
					else if (Global_4265621 == 13)
					{
						return 0;
					}
					else if (Global_4265621 == 14)
					{
					}
					else if (Global_4265621 == 15)
					{
						return 0;
					}
					else if (Global_4265621 == 16)
					{
					}
					else if (Global_4265621 == 71)
					{
					}
					else if (Global_4265621 == 72)
					{
					}
				}
			}
			break;
		
		case 277073536:
			if (bParam7)
			{
				return 0;
			}
			break;
	}
	return 1;
}

char* func_390(int iParam0)//Position - 0x40D0E
{
	switch (iParam0)
	{
		case 0:
			return "ARM_LEFT_FULL_SLEEVE";
			break;
		
		case 1:
			return "ARM_LEFT_SHORT_SLEEVE";
			break;
		
		case 2:
			return "ARM_LEFT_LOWER_SLEEVE";
			break;
		
		case 3:
			return "ARM_LEFT_LOWER_INNER";
			break;
		
		case 4:
			return "ARM_LEFT_LOWER_OUTER";
			break;
		
		case 5:
			return "ARM_LEFT_WRIST";
			break;
		
		case 6:
			return "ARM_LEFT_UPPER_SLEEVE";
			break;
		
		case 7:
			return "ARM_LEFT_UPPER_TRICEP";
			break;
		
		case 8:
			return "ARM_LEFT_UPPER_SIDE";
			break;
		
		case 9:
			return "ARM_LEFT_UPPER_BICEP";
			break;
		
		case 10:
			return "ARM_LEFT_SHOULDER";
			break;
		
		case 11:
			return "ARM_LEFT_ELBOW";
			break;
		
		case 12:
			return "ARM_RIGHT_FULL_SLEEVE";
			break;
		
		case 13:
			return "ARM_RIGHT_SHORT_SLEEVE";
			break;
		
		case 14:
			return "ARM_RIGHT_LOWER_SLEEVE";
			break;
		
		case 15:
			return "ARM_RIGHT_LOWER_INNER";
			break;
		
		case 16:
			return "ARM_RIGHT_LOWER_OUTER";
			break;
		
		case 17:
			return "ARM_RIGHT_WRIST";
			break;
		
		case 18:
			return "ARM_RIGHT_UPPER_SLEEVE";
			break;
		
		case 19:
			return "ARM_RIGHT_UPPER_TRICEP";
			break;
		
		case 20:
			return "ARM_RIGHT_UPPER_SIDE";
			break;
		
		case 21:
			return "ARM_RIGHT_UPPER_BICEP";
			break;
		
		case 22:
			return "ARM_RIGHT_SHOULDER";
			break;
		
		case 23:
			return "ARM_RIGHT_ELBOW";
			break;
		
		case 24:
			return "HAND_LEFT";
			break;
		
		case 25:
			return "HAND_RIGHT";
			break;
		
		case 26:
			return "BACK_FULL";
			break;
		
		case 27:
			return "BACK_FULL_ARMS_FULL_BACK";
			break;
		
		case 28:
			return "BACK_FULL_SHORT";
			break;
		
		case 29:
			return "BACK_MID";
			break;
		
		case 30:
			return "BACK_UPPER";
			break;
		
		case 31:
			return "BACK_UPPER_LEFT";
			break;
		
		case 32:
			return "BACK_UPPER_RIGHT";
			break;
		
		case 33:
			return "BACK_LOWER";
			break;
		
		case 34:
			return "BACK_LOWER_LEFT";
			break;
		
		case 35:
			return "BACK_LOWER_MID";
			break;
		
		case 36:
			return "BACK_LOWER_RIGHT";
			break;
		
		case 37:
			return "CHEST_FULL";
			break;
		
		case 38:
			return "CHEST_STOM";
			break;
		
		case 39:
			return "CHEST_STOM_FULL";
			break;
		
		case 40:
			return "CHEST_LEFT";
			break;
		
		case 41:
			return "CHEST_UPPER_LEFT";
			break;
		
		case 42:
			return "CHEST_RIGHT";
			break;
		
		case 43:
			return "CHEST_UPPER_RIGHT";
			break;
		
		case 44:
			return "CHEST_MID";
			break;
		
		case 45:
			return "TORSO_SIDE_RIGHT";
			break;
		
		case 46:
			return "TORSO_SIDE_LEFT";
			break;
		
		case 47:
			return "STOMACH_FULL";
			break;
		
		case 48:
			return "STOMACH_UPPER";
			break;
		
		case 49:
			return "STOMACH_UPPER_LEFT";
			break;
		
		case 50:
			return "STOMACH_UPPER_RIGHT";
			break;
		
		case 51:
			return "STOMACH_LOWER";
			break;
		
		case 52:
			return "STOMACH_LOWER_LEFT";
			break;
		
		case 53:
			return "STOMACH_LOWER_RIGHT";
			break;
		
		case 54:
			return "STOMACH_LEFT";
			break;
		
		case 55:
			return "STOMACH_RIGHT";
			break;
		
		case 56:
			return "FACE";
			break;
		
		case 57:
			return "HEAD_LEFT";
			break;
		
		case 58:
			return "HEAD_RIGHT";
			break;
		
		case 59:
			return "NECK_FRONT";
			break;
		
		case 60:
			return "NECK_BACK";
			break;
		
		case 61:
			return "NECK_LEFT_FULL";
			break;
		
		case 62:
			return "NECK_LEFT_BACK";
			break;
		
		case 63:
			return "NECK_RIGHT_FULL";
			break;
		
		case 64:
			return "NECK_RIGHT_BACK";
			break;
		
		case 65:
			return "LEG_LEFT_FULL_SLEEVE";
			break;
		
		case 66:
			return "LEG_LEFT_FULL_FRONT";
			break;
		
		case 67:
			return "LEG_LEFT_FULL_BACK";
			break;
		
		case 68:
			return "LEG_LEFT_UPPER_SLEEVE";
			break;
		
		case 69:
			return "LEG_LEFT_UPPER_FRONT";
			break;
		
		case 70:
			return "LEG_LEFT_UPPER_BACK";
			break;
		
		case 71:
			return "LEG_LEFT_UPPER_OUTER";
			break;
		
		case 72:
			return "LEG_LEFT_UPPER_INNER";
			break;
		
		case 73:
			return "LEG_LEFT_LOWER_SLEEVE";
			break;
		
		case 74:
			return "LEG_LEFT_LOWER_FRONT";
			break;
		
		case 75:
			return "LEG_LEFT_LOWER_BACK";
			break;
		
		case 76:
			return "LEG_LEFT_LOWER_OUTER";
			break;
		
		case 77:
			return "LEG_LEFT_LOWER_INNER";
			break;
		
		case 78:
			return "LEG_LEFT_KNEE";
			break;
		
		case 79:
			return "LEG_LEFT_ANKLE";
			break;
		
		case 80:
			return "LEG_LEFT_CALF";
			break;
		
		case 81:
			return "LEG_RIGHT_FULL_SLEEVE";
			break;
		
		case 82:
			return "LEG_RIGHT_FULL_FRONT";
			break;
		
		case 83:
			return "LEG_RIGHT_FULL_BACK";
			break;
		
		case 84:
			return "LEG_RIGHT_UPPER_SLEEVE";
			break;
		
		case 85:
			return "LEG_RIGHT_UPPER_FRONT";
			break;
		
		case 86:
			return "LEG_RIGHT_UPPER_BACK";
			break;
		
		case 87:
			return "LEG_RIGHT_UPPER_OUTER";
			break;
		
		case 88:
			return "LEG_RIGHT_UPPER_INNER";
			break;
		
		case 89:
			return "LEG_RIGHT_LOWER_SLEEVE";
			break;
		
		case 90:
			return "LEG_RIGHT_LOWER_FRONT";
			break;
		
		case 91:
			return "LEG_RIGHT_LOWER_BACK";
			break;
		
		case 92:
			return "LEG_RIGHT_LOWER_OUTER";
			break;
		
		case 93:
			return "LEG_RIGHT_LOWER_INNER";
			break;
		
		case 94:
			return "LEG_RIGHT_KNEE";
			break;
		
		case 95:
			return "LEG_RIGHT_ANKLE";
			break;
		
		case 96:
			return "LEG_RIGHT_CALF";
			break;
		
		case 97:
			return "FOOT_LEFT";
			break;
		
		case 98:
			return "FOOT_RIGHT";
			break;
	}
	return "";
}

int func_391(int iParam0, char* sParam1, int iParam2)//Position - 0x41351
{
	switch (iParam2)
	{
		case 1019352240:
		case 2140335355:
		case 277073536:
			return -1;
			break;
	}
	switch (iParam2)
	{
		case -1775023605:
			return 0;
			break;
		
		case 917950949:
			return 1;
			break;
		
		case -1684314297:
			return 2;
			break;
		
		case -1546663824:
			return 3;
			break;
		
		case -2119253768:
			return 4;
			break;
		
		case 1639951086:
			return 5;
			break;
		
		case 1372660034:
			return 6;
			break;
		
		case -1524227787:
			return 7;
			break;
		
		case -311742370:
			return 8;
			break;
		
		case -2057190659:
			return 9;
			break;
		
		case -686545645:
			return 10;
			break;
		
		case -80377674:
			return 11;
			break;
		
		case -1055976551:
			return 12;
			break;
		
		case 1963750528:
			return 13;
			break;
		
		case 796226384:
			return 14;
			break;
		
		case 123428314:
			return 15;
			break;
		
		case 1944550961:
			return 16;
			break;
		
		case 2136911405:
			return 17;
			break;
		
		case -1309595991:
			return 18;
			break;
		
		case 1470319061:
			return 19;
			break;
		
		case -1716562576:
			return 20;
			break;
		
		case -1940582056:
			return 21;
			break;
		
		case 1089807219:
			return 22;
			break;
		
		case -1073830579:
			return 23;
			break;
		
		case 1071134407:
			return 24;
			break;
		
		case 1455567330:
			return 25;
			break;
		
		case 711089605:
			return 26;
			break;
		
		case 1206993109:
			return 27;
			break;
		
		case 32564956:
			return 28;
			break;
		
		case 314326195:
			return 29;
			break;
		
		case 1928884106:
			return 30;
			break;
		
		case 1565386395:
			return 31;
			break;
		
		case 2107621060:
			return 32;
			break;
		
		case 1618133209:
			return 33;
			break;
		
		case -951899470:
			return 34;
			break;
		
		case 2048696626:
			return 35;
			break;
		
		case 74017048:
			return 36;
			break;
		
		case -793495770:
			return 37;
			break;
		
		case 849089063:
			return 38;
			break;
		
		case 1192230427:
			return 39;
			break;
		
		case -763917073:
			return 40;
			break;
		
		case 337552605:
			return 41;
			break;
		
		case -2066166276:
			return 42;
			break;
		
		case 100935796:
			return 43;
			break;
		
		case -1409061796:
			return 44;
			break;
		
		case 1548327796:
			return 45;
			break;
		
		case -1459967458:
			return 46;
			break;
		
		case 129912816:
			return 47;
			break;
		
		case 1387715942:
			return 48;
			break;
		
		case -1871804242:
			return 49;
			break;
		
		case 1603728616:
			return 50;
			break;
		
		case -742053244:
			return 51;
			break;
		
		case 1586504577:
			return 52;
			break;
		
		case 1753976524:
			return 53;
			break;
		
		case -1469750959:
			return 54;
			break;
		
		case -388268096:
			return 55;
			break;
		
		case -1538681432:
			return 56;
			break;
		
		case -737856380:
			return 57;
			break;
		
		case 1261643197:
			return 58;
			break;
		
		case 436139458:
			return 59;
			break;
		
		case 1012782925:
			return 60;
			break;
		
		case -277214012:
			return 61;
			break;
		
		case -484264198:
			return 62;
			break;
		
		case 1708200656:
			return 63;
			break;
		
		case 758827473:
			return 64;
			break;
		
		case 1039283199:
			return 65;
			break;
		
		case 325801797:
			return 66;
			break;
		
		case -1946435033:
			return 67;
			break;
		
		case -1917346117:
			return 68;
			break;
		
		case -382139768:
			return 69;
			break;
		
		case 1725561361:
			return 70;
			break;
		
		case -266913369:
			return 71;
			break;
		
		case 511433871:
			return 72;
			break;
		
		case -1399656601:
			return 73;
			break;
		
		case -1560441083:
			return 74;
			break;
		
		case 1034503747:
			return 75;
			break;
		
		case -1170681301:
			return 76;
			break;
		
		case 660577126:
			return 77;
			break;
		
		case -818089340:
			return 78;
			break;
		
		case 1052642087:
			return 79;
			break;
		
		case 134497037:
			return 80;
			break;
		
		case -624267373:
			return 81;
			break;
		
		case -1178847967:
			return 82;
			break;
		
		case -197292861:
			return 83;
			break;
		
		case 730193962:
			return 84;
			break;
		
		case 1469472731:
			return 85;
			break;
		
		case -1918884694:
			return 86;
			break;
		
		case -1670727628:
			return 87;
			break;
		
		case -1389296468:
			return 88;
			break;
		
		case -405262373:
			return 89;
			break;
		
		case -1619609833:
			return 90;
			break;
		
		case 2060550302:
			return 91;
			break;
		
		case -1202647020:
			return 92;
			break;
		
		case 12584588:
			return 93;
			break;
		
		case -1559605744:
			return 94;
			break;
		
		case -88374898:
			return 95;
			break;
		
		case -292219126:
			return 96;
			break;
		
		case -634232984:
			return 97;
			break;
		
		case -1259754598:
			return 98;
			break;
	}
	switch (unk_0x8B948C59217A295D(sParam1))
	{
		case 1948764112:
			return -1;
			break;
		
		case 1099734529:
			return 12;
			break;
		
		case 1875475066:
			return 12;
			break;
		
		case -2027116220:
			if (iParam0 == joaat("mp_m_freemode_01"))
			{
				return 75;
			}
			else
			{
				return 65;
			}
			break;
		
		case 973279522:
			return 26;
			break;
		
		case -344656041:
			return 47;
			break;
		
		case 437243648:
			return 1;
			break;
		
		case -1636967950:
			return 75;
			break;
		
		case -1759426263:
			return 1;
			break;
		
		case 1702259548:
			return 89;
			break;
		
		case 1471205329:
			return 73;
			break;
		
		case -33154131:
			return 22;
			break;
		
		case -1364624791:
			return 91;
			break;
		
		case 2048169112:
			return 26;
			break;
		
		case -2132107540:
			return 73;
			break;
		
		case -2097372400:
			return 38;
			break;
		
		case -106785870:
			if (iParam0 == joaat("mp_m_freemode_01"))
			{
				return 40;
			}
			else
			{
				return 42;
			}
			break;
		
		case 1116120433:
			return 31;
			break;
		
		case 118598456:
			return 42;
			break;
		
		case 1480281490:
			return 47;
			break;
		
		case -652292269:
			return 75;
			break;
		
		case -1179283327:
			return 20;
			break;
		
		case 860620540:
			return 32;
			break;
		
		case -880004050:
			return 14;
			break;
		
		case -1386676768:
			return 52;
			break;
		
		case 2104696341:
			return 30;
			break;
		
		case -1952728474:
			return 6;
			break;
		
		case 1464947154:
			return 80;
			break;
		
		case -1134718043:
			return 13;
			break;
		
		case -440373586:
			if (iParam0 == joaat("mp_m_freemode_01"))
			{
				return 67;
			}
			else
			{
				return 75;
			}
			break;
		
		case -1282504117:
			if (iParam0 == joaat("mp_m_freemode_01"))
			{
				return 40;
			}
			else
			{
				return 42;
			}
			break;
		
		case -1035884623:
			return 73;
			break;
		
		case -1877294236:
			return 47;
			break;
		
		case 1289632992:
			return 73;
			break;
		
		case 1152623695:
			return 10;
			break;
		
		case 1705208746:
			return 26;
			break;
		
		case 1774176944:
			return 42;
			break;
		
		case -2016202731:
			return 89;
			break;
		
		case 474241973:
			return 16;
			break;
		
		case 1549424756:
			return 91;
			break;
		
		case 1915520024:
			return 82;
			break;
		
		case -654914345:
			return 13;
			break;
		
		case -1745115353:
			return 75;
			break;
		
		case 1466027815:
			return 26;
			break;
		
		case -161772432:
			return 10;
			break;
		
		case 74131599:
			return 90;
			break;
		
		case 363383562:
			return 89;
			break;
		
		case 736950162:
			return 38;
			break;
		
		case 1291882802:
			return 20;
			break;
		
		case -281772534:
			return 26;
			break;
		
		case -837798134:
			return 18;
			break;
		
		case 62456:
			return 56;
			break;
		
		case -800320369:
			return 3;
			break;
		
		case 1363941829:
			return 47;
			break;
		
		case 1586377801:
			if (iParam0 == joaat("mp_m_freemode_01"))
			{
				return 28;
			}
			else
			{
				return 26;
			}
			break;
		
		case -1514257748:
			return 89;
			break;
		
		case -1023836894:
			return 6;
			break;
		
		case -1974105125:
			return 33;
			break;
		
		case -558386018:
			return 16;
			break;
		
		case -328314869:
			return 40;
			break;
		
		case -1903783095:
			return 40;
			break;
		
		case -1674924399:
			return 40;
			break;
		
		case -252323802:
			return 33;
			break;
		
		case 11466648:
			return 6;
			break;
		
		case 927130819:
			if (iParam0 == joaat("mp_m_freemode_01"))
			{
				return 28;
			}
			else
			{
				return 26;
			}
			break;
		
		case -978943608:
			if (iParam0 == joaat("mp_m_freemode_01"))
			{
				return 28;
			}
			else
			{
				return 26;
			}
			break;
		
		case 452144164:
			if (iParam0 == joaat("mp_m_freemode_01"))
			{
				return 28;
			}
			else
			{
				return 26;
			}
			break;
		
		case 691194019:
			if (iParam0 == joaat("mp_m_freemode_01"))
			{
				return 28;
			}
			else
			{
				return 26;
			}
			break;
		
		case -1516865571:
			return 44;
			break;
		
		case 2130586285:
			return 32;
			break;
		
		case 386521802:
			return 3;
			break;
		
		case 579924440:
			return 33;
			break;
		
		case 741770527:
			return 31;
			break;
		
		case 1173403795:
			return 33;
			break;
		
		case -569087776:
			return 45;
			break;
		
		case -1344959389:
			return 89;
			break;
		
		case -211217527:
			return 64;
			break;
		
		case 86488838:
			return 53;
			break;
		
		case 705494964:
			return 52;
			break;
		
		case -137684175:
			return 30;
			break;
		
		case -979388709:
			return 41;
			break;
		
		case 324653646:
			return 43;
			break;
		
		case -518820414:
			return 52;
			break;
		
		case -1361737401:
			return 20;
			break;
		
		case 2010946386:
			return 8;
			break;
		
		case -894811920:
			return 10;
			break;
		
		case 165068612:
			return 28;
			break;
		
		case 1549427782:
			return 40;
			break;
		
		case -927613913:
			return 42;
			break;
		
		case 385144996:
			return 56;
			break;
		
		case -814626401:
			return 57;
			break;
		
		case -1248225809:
			return 52;
			break;
		
		case 1910378101:
			return 8;
			break;
		
		case -2124501642:
			return 91;
			break;
		
		case -1943747838:
			return 20;
			break;
		
		case -1570115700:
			return 75;
			break;
		
		case 931699147:
			return 62;
			break;
		
		case 1019520067:
			return 63;
			break;
		
		case -859358814:
			return 20;
			break;
		
		case -1157818866:
			return 58;
			break;
		
		case -247856505:
			return 47;
			break;
		
		case -1628534963:
			return 37;
			break;
		
		case -1051898870:
			return 33;
			break;
		
		case 1334929540:
			return 80;
			break;
		
		case 1097124907:
			return 64;
			break;
		
		case 747545215:
			return 62;
			break;
		
		case 61892743:
			return 96;
			break;
		
		case 501548332:
			return 15;
			break;
		
		case -244169717:
			return 48;
			break;
		
		case 421886905:
			return 37;
			break;
		
		case -1398791504:
			return 33;
			break;
		
		case -106152761:
			return 3;
			break;
		
		case 125491300:
			return 41;
			break;
		
		case -1576950557:
			return 52;
			break;
		
		case -1815115649:
			return 53;
			break;
		
		case -1043396870:
			return 59;
			break;
		
		case -1388618285:
			return 3;
			break;
		
		case -948484638:
			return 48;
			break;
		
		case 643387405:
			return 33;
			break;
		
		case 979630098:
			return 64;
			break;
		
		case 211688583:
			return 62;
			break;
		
		case 1343791995:
			return 60;
			break;
		
		case 576309246:
			return 20;
			break;
		
		case 949154944:
			return 40;
			break;
		
		case -622511834:
			return 42;
			break;
		
		case -275651969:
			return 11;
			break;
		
		case -1256283855:
			return 15;
			break;
		
		case 955525350:
			return 40;
			break;
		
		case 1252641873:
			return 22;
			break;
		
		case -2034766264:
			return 40;
			break;
		
		case 1748021562:
			return 22;
			break;
		
		case -657146050:
			return 30;
			break;
		
		case -955835485:
			return 19;
			break;
		
		case -1269959119:
			return 40;
			break;
		
		case -1478763187:
			return 4;
			break;
		
		case -1881592504:
			return 15;
			break;
		
		case 2115996117:
			return 62;
			break;
		
		case 1824417551:
			return 45;
			break;
		
		case 1502068898:
			return 24;
			break;
		
		case -2019287742:
			return 22;
			break;
		
		case -1780827729:
			return 80;
			break;
		
		case -1966497207:
			return 25;
			break;
		
		case -2126999769:
			return 30;
			break;
		
		case 2014772448:
			return 30;
			break;
		
		case 1705760778:
			return 44;
			break;
		
		case 497993745:
			return 15;
			break;
		
		case 1142887665:
			return 9;
			break;
		
		case 22777707:
			return 3;
			break;
		
		case 799173624:
			return 16;
			break;
		
		case -410297401:
			return 17;
			break;
		
		case 214410819:
			return 75;
			break;
		
		case -2098342992:
			return 23;
			break;
		
		case -1280920283:
			return 64;
			break;
		
		case -1501455653:
			return 16;
			break;
		
		case 2117454408:
			return 25;
			break;
		
		case -1945704982:
			return 32;
			break;
		
		case -1581870771:
			return 31;
			break;
		
		case -1350521631:
			return 10;
			break;
		
		case -954508266:
			return 5;
			break;
		
		case -716244867:
			return 4;
			break;
		
		case 185361399:
			return 52;
			break;
		
		case -1208107213:
			return 35;
			break;
		
		case -812421538:
			return 30;
			break;
		
		case -566096965:
			return 32;
			break;
		
		case -316757644:
			return 38;
			break;
		
		case -103496992:
			return 24;
			break;
		
		case 391708136:
			return 52;
			break;
		
		case 616667309:
			return 20;
			break;
		
		case 870102755:
			return 10;
			break;
		
		case 1093030262:
			return 92;
			break;
		
		case 1378218869:
			return 0;
			break;
		
		case 332555747:
			return 80;
			break;
		
		case 1077526193:
			return 34;
			break;
		
		case 1332632858:
			return 91;
			break;
		
		case 1556379590:
			return 10;
			break;
		
		case 1780093553:
			return 22;
			break;
		
		case 2001284303:
			return 14;
			break;
		
		case -2059941716:
			return 30;
			break;
		
		case -1759875983:
			return 40;
			break;
		
		case -1521153818:
			return 24;
			break;
	}
	if (iParam2 == 0 && unk_0xAB019B170BF1309C(sParam1))
	{
		return -1;
	}
	switch (iParam2)
	{
		case -518474626:
			return -1;
			break;
	}
	return -1;
}

bool func_392(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x42383
{
	int iVar0;
	int iVar1;
	
	func_396(sParam0, -1, 0, "", "", "", "", iParam2, -1, 0);
	if (unk_0x6ADD12BF4D6D2587(iParam3) && !unk_0x3AB6A1A9084FB0A4(iParam3))
	{
		iVar0 = unk_0x82FF3DFBC3965CC0(iParam3);
	}
	switch (iParam2)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					func_396(sParam0, iParam1, iParam3, "TAT_MIC_01", "singleplayer_overlays", "MK_000", "", iParam2, 300, 3);
					break;
				
				case 1:
					func_396(sParam0, iParam1, iParam3, "TAT_MIC_02", "singleplayer_overlays", "MK_001", "", iParam2, 450, 0);
					break;
				
				case 2:
					func_396(sParam0, iParam1, iParam3, "TAT_MIC_03", "singleplayer_overlays", "MK_002", "", iParam2, 250, 4);
					break;
				
				case 3:
					func_396(sParam0, iParam1, iParam3, "TAT_MIC_04", "singleplayer_overlays", "MK_003", "", iParam2, 175, 0);
					break;
				
				case 4:
					func_396(sParam0, iParam1, iParam3, "TAT_MIC_06", "singleplayer_overlays", "MK_005", "", iParam2, 380, 0);
					break;
				
				case 5:
					func_396(sParam0, iParam1, iParam3, "TAT_MIC_07", "singleplayer_overlays", "MK_006", "", iParam2, 180, 0);
					break;
				
				case 6:
					func_396(sParam0, iParam1, iParam3, "TAT_MIC_08", "singleplayer_overlays", "MK_007", "", iParam2, 240, 0);
					break;
				
				case 7:
					func_396(sParam0, iParam1, iParam3, "TAT_MIC_10", "singleplayer_overlays", "MK_009", "", iParam2, 195, 0);
					break;
				
				case 8:
					func_396(sParam0, iParam1, iParam3, "TAT_MIC_11", "singleplayer_overlays", "MK_010", "", iParam2, 280, 6);
					break;
				
				case 9:
					if (func_18() || func_17())
					{
						iVar1 = 400;
						if (func_374() && (func_395() || func_394()))
						{
							iVar1 = 0;
						}
						func_396(sParam0, iParam1, iParam3, "TAT_MIC_12", "singleplayer_overlays", "MK_011", "", iParam2, iVar1, 2);
					}
					break;
				
				case 10:
					func_396(sParam0, iParam1, iParam3, "TAT_MIC_13", "singleplayer_overlays", "MK_012", "", iParam2, 320, 3);
					break;
				
				case 11:
					func_396(sParam0, iParam1, iParam3, "TAT_MIC_14", "singleplayer_overlays", "MK_013", "", iParam2, 500, 2);
					break;
				
				case 12:
					func_396(sParam0, iParam1, iParam3, "TAT_MIC_16", "singleplayer_overlays", "MK_015", "", iParam2, 220, 0);
					break;
				
				case 13:
					func_396(sParam0, iParam1, iParam3, "TAT_MIC_17", "singleplayer_overlays", "MK_016", "", iParam2, 320, 4);
					break;
				
				case 14:
					func_396(sParam0, iParam1, iParam3, "TAT_MIC_18", "singleplayer_overlays", "MK_017", "", iParam2, 140, 2);
					break;
				
				case 15:
					func_396(sParam0, iParam1, iParam3, "TAT_MIC_20", "singleplayer_overlays", "MK_019", "", iParam2, 350, 0);
					break;
				
				case 16:
					func_396(sParam0, iParam1, iParam3, "TAT_MIC_21", "singleplayer_overlays", "MK_020", "", iParam2, 350, 0);
					break;
				
				case 17:
					func_396(sParam0, iParam1, iParam3, "TAT_MIC_05", "singleplayer_overlays", "MK_004", "", iParam2, 120, 1);
					break;
				
				case 18:
					func_396(sParam0, iParam1, iParam3, "TAT_MIC_09", "singleplayer_overlays", "MK_008", "", iParam2, 99, 1);
					break;
				
				case 19:
					func_396(sParam0, iParam1, iParam3, "TAT_MIC_15", "singleplayer_overlays", "MK_014", "", iParam2, 400, 1);
					break;
				
				case 20:
					func_396(sParam0, iParam1, iParam3, "TAT_MIC_19", "singleplayer_overlays", "MK_018", "", iParam2, 420, 1);
					break;
				
				default:
					func_393(sParam0, iParam2, iParam1, 21);
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					if (func_18() || func_17())
					{
						iVar1 = 450;
						if (func_374() && (func_395() || func_394()))
						{
							iVar1 = 0;
						}
						func_396(sParam0, iParam1, iParam3, "TAT_FRA_01", "singleplayer_overlays", "fr_000", "", iParam2, iVar1, 0);
					}
					break;
				
				case 1:
					func_396(sParam0, iParam1, iParam3, "TAT_FRA_02", "singleplayer_overlays", "fr_001", "", iParam2, 230, 0);
					break;
				
				case 2:
					func_396(sParam0, iParam1, iParam3, "TAT_FRA_03", "singleplayer_overlays", "fr_002", "", iParam2, 310, 0);
					break;
				
				case 3:
					func_396(sParam0, iParam1, iParam3, "TAT_FRA_04", "singleplayer_overlays", "fr_003", "", iParam2, 260, 0);
					break;
				
				case 4:
					func_396(sParam0, iParam1, iParam3, "TAT_FRA_07", "singleplayer_overlays", "fr_006", "", iParam2, 240, 2);
					break;
				
				case 5:
					func_396(sParam0, iParam1, iParam3, "TAT_FRA_08", "singleplayer_overlays", "fr_007", "", iParam2, 190, 3);
					break;
				
				case 6:
					func_396(sParam0, iParam1, iParam3, "TAT_FRA_09", "singleplayer_overlays", "fr_008", "", iParam2, 200, 2);
					break;
				
				case 7:
					func_396(sParam0, iParam1, iParam3, "TAT_FRA_10", "singleplayer_overlays", "fr_009", "", iParam2, 225, 0);
					break;
				
				case 8:
					func_396(sParam0, iParam1, iParam3, "TAT_FRA_12", "singleplayer_overlays", "fr_011", "", iParam2, 195, 0);
					break;
				
				case 9:
					func_396(sParam0, iParam1, iParam3, "TAT_FRA_13", "singleplayer_overlays", "fr_012", "", iParam2, 275, 2);
					break;
				
				case 10:
					func_396(sParam0, iParam1, iParam3, "TAT_FRA_14", "singleplayer_overlays", "fr_013", "", iParam2, 80, 0);
					break;
				
				case 11:
					func_396(sParam0, iParam1, iParam3, "TAT_FRA_15", "singleplayer_overlays", "fr_014", "", iParam2, 95, 0);
					break;
				
				case 12:
					func_396(sParam0, iParam1, iParam3, "TAT_FRA_16", "singleplayer_overlays", "fr_015", "", iParam2, 300, 3);
					break;
				
				case 13:
					func_396(sParam0, iParam1, iParam3, "TAT_FRA_17", "singleplayer_overlays", "fr_016", "", iParam2, 450, 3);
					break;
				
				case 14:
					func_396(sParam0, iParam1, iParam3, "TAT_FRA_18", "singleplayer_overlays", "fr_017", "", iParam2, 345, 3);
					break;
				
				case 15:
					func_396(sParam0, iParam1, iParam3, "TAT_FRA_19", "singleplayer_overlays", "fr_018", "", iParam2, 550, 0);
					break;
				
				case 16:
					func_396(sParam0, iParam1, iParam3, "TAT_FRA_20", "singleplayer_overlays", "fr_019", "", iParam2, 200, 0);
					break;
				
				case 17:
					func_396(sParam0, iParam1, iParam3, "TAT_FRA_21", "singleplayer_overlays", "fr_020", "", iParam2, 180, 0);
					break;
				
				case 18:
					func_396(sParam0, iParam1, iParam3, "TAT_FRA_22", "singleplayer_overlays", "fr_021", "", iParam2, 140, 0);
					break;
				
				case 19:
					func_396(sParam0, iParam1, iParam3, "TAT_FRA_24", "singleplayer_overlays", "fr_023", "", iParam2, 245, 0);
					break;
				
				case 20:
					break;
				
				case 21:
					func_396(sParam0, iParam1, iParam3, "TAT_FRA_26", "singleplayer_overlays", "fr_025", "", iParam2, 370, 0);
					break;
				
				case 22:
					func_396(sParam0, iParam1, iParam3, "TAT_FRA_27", "singleplayer_overlays", "fr_026", "", iParam2, 350, 0);
					break;
				
				case 23:
					func_396(sParam0, iParam1, iParam3, "TAT_FRA_28", "singleplayer_overlays", "fr_027", "", iParam2, 310, 0);
					break;
				
				case 24:
					func_396(sParam0, iParam1, iParam3, "TAT_FRA_29", "singleplayer_overlays", "fr_028", "", iParam2, 210, 0);
					break;
				
				case 25:
					func_396(sParam0, iParam1, iParam3, "TAT_FRA_30", "singleplayer_overlays", "fr_029", "", iParam2, 245, 0);
					break;
				
				case 26:
					func_396(sParam0, iParam1, iParam3, "TAT_FRA_31", "singleplayer_overlays", "fr_030", "", iParam2, 85, 0);
					break;
				
				case 27:
					func_396(sParam0, iParam1, iParam3, "TAT_FRA_32", "singleplayer_overlays", "fr_031", "", iParam2, 210, 0);
					break;
				
				case 28:
					func_396(sParam0, iParam1, iParam3, "TAT_FRA_33", "singleplayer_overlays", "fr_032", "", iParam2, 225, 0);
					break;
				
				case 29:
					func_396(sParam0, iParam1, iParam3, "TAT_FRA_34", "singleplayer_overlays", "fr_033", "", iParam2, 145, 0);
					break;
				
				case 30:
					func_396(sParam0, iParam1, iParam3, "TAT_FRA_35", "singleplayer_overlays", "fr_034", "", iParam2, 230, 0);
					break;
				
				case 31:
					func_396(sParam0, iParam1, iParam3, "TAT_FRA_36", "singleplayer_overlays", "fr_035", "", iParam2, 195, 0);
					break;
				
				case 32:
					func_396(sParam0, iParam1, iParam3, "TAT_FRA_37", "singleplayer_overlays", "fr_036", "", iParam2, 255, 0);
					break;
				
				case 33:
					func_396(sParam0, iParam1, iParam3, "TAT_FRA_38", "singleplayer_overlays", "fr_037", "", iParam2, 300, 0);
					break;
				
				case 34:
					func_396(sParam0, iParam1, iParam3, "TAT_FRA_40", "singleplayer_overlays", "fr_039", "", iParam2, 300, 0);
					break;
				
				case 35:
					func_396(sParam0, iParam1, iParam3, "TAT_FRA_05", "singleplayer_overlays", "fr_004", "", iParam2, 255, 1);
					break;
				
				case 36:
					func_396(sParam0, iParam1, iParam3, "TAT_FRA_06", "singleplayer_overlays", "fr_005", "", iParam2, 175, 1);
					break;
				
				case 37:
					func_396(sParam0, iParam1, iParam3, "TAT_FRA_11", "singleplayer_overlays", "fr_010", "", iParam2, 520, 1);
					break;
				
				case 38:
					func_396(sParam0, iParam1, iParam3, "TAT_FRA_23", "singleplayer_overlays", "fr_022", "", iParam2, 125, 1);
					break;
				
				case 39:
					func_396(sParam0, iParam1, iParam3, "TAT_FRA_39", "singleplayer_overlays", "fr_038", "", iParam2, 365, 1);
					break;
				
				default:
					func_393(sParam0, iParam2, iParam1, 40);
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					func_396(sParam0, iParam1, iParam3, "TAT_TRV_01", "singleplayer_overlays", "tp_000", "", iParam2, 120, 0);
					break;
				
				case 1:
					func_396(sParam0, iParam1, iParam3, "TAT_TRV_02", "singleplayer_overlays", "tp_001", "", iParam2, 150, 3);
					break;
				
				case 2:
					func_396(sParam0, iParam1, iParam3, "TAT_TRV_03", "singleplayer_overlays", "tp_002", "", iParam2, 100, 0);
					break;
				
				case 3:
					func_396(sParam0, iParam1, iParam3, "TAT_TRV_04", "singleplayer_overlays", "tp_003", "", iParam2, 140, 0);
					break;
				
				case 4:
					func_396(sParam0, iParam1, iParam3, "TAT_TRV_05", "singleplayer_overlays", "tp_004", "", iParam2, 250, 0);
					break;
				
				case 5:
					if (func_18() || func_17())
					{
						iVar1 = 380;
						if (func_374() && (func_395() || func_394()))
						{
							iVar1 = 0;
						}
						func_396(sParam0, iParam1, iParam3, "TAT_TRV_06", "singleplayer_overlays", "tp_005", "", iParam2, iVar1, 3);
					}
					break;
				
				case 6:
					func_396(sParam0, iParam1, iParam3, "TAT_TRV_07", "singleplayer_overlays", "tp_006", "", iParam2, 120, 0);
					break;
				
				case 7:
					func_396(sParam0, iParam1, iParam3, "TAT_TRV_08", "singleplayer_overlays", "tp_007", "", iParam2, 250, 0);
					break;
				
				case 8:
					func_396(sParam0, iParam1, iParam3, "TAT_TRV_09", "singleplayer_overlays", "tp_008", "", iParam2, 50, 3);
					break;
				
				case 9:
					func_396(sParam0, iParam1, iParam3, "TAT_TRV_10", "singleplayer_overlays", "tp_009", "", iParam2, 135, 2);
					break;
				
				case 10:
					func_396(sParam0, iParam1, iParam3, "TAT_TRV_11", "singleplayer_overlays", "tp_010", "", iParam2, 245, 0);
					break;
				
				case 11:
					func_396(sParam0, iParam1, iParam3, "TAT_TRV_12", "singleplayer_overlays", "tp_011", "", iParam2, 280, 0);
					break;
				
				case 12:
					func_396(sParam0, iParam1, iParam3, "TAT_TRV_13", "singleplayer_overlays", "tp_012", "", iParam2, 65, 0);
					break;
				
				case 13:
					func_396(sParam0, iParam1, iParam3, "TAT_TRV_14", "singleplayer_overlays", "tp_013", "", iParam2, 150, 6);
					break;
				
				case 14:
					func_396(sParam0, iParam1, iParam3, "TAT_TRV_15", "singleplayer_overlays", "tp_014", "", iParam2, 200, 0);
					break;
				
				case 15:
					func_396(sParam0, iParam1, iParam3, "TAT_TRV_16", "singleplayer_overlays", "tp_015", "", iParam2, 145, 0);
					break;
				
				case 16:
					func_396(sParam0, iParam1, iParam3, "TAT_TRV_17", "singleplayer_overlays", "tp_016", "", iParam2, 290, 0);
					break;
				
				case 17:
					func_396(sParam0, iParam1, iParam3, "TAT_TRV_18", "singleplayer_overlays", "tp_017", "", iParam2, 350, 3);
					break;
				
				case 18:
					func_396(sParam0, iParam1, iParam3, "TAT_TRV_19", "singleplayer_overlays", "tp_018", "", iParam2, 70, 0);
					break;
				
				case 19:
					func_396(sParam0, iParam1, iParam3, "TAT_TRV_20", "singleplayer_overlays", "tp_019", "", iParam2, 180, 6);
					break;
				
				case 20:
					func_396(sParam0, iParam1, iParam3, "TAT_TRV_21", "singleplayer_overlays", "tp_020", "", iParam2, 230, 0);
					break;
				
				case 21:
					func_396(sParam0, iParam1, iParam3, "TAT_TRV_22", "singleplayer_overlays", "tp_021", "", iParam2, 200, 0);
					break;
				
				case 22:
					func_396(sParam0, iParam1, iParam3, "TAT_TRV_24", "singleplayer_overlays", "tp_023", "", iParam2, 240, 0);
					break;
				
				case 23:
					func_396(sParam0, iParam1, iParam3, "TAT_TRV_25", "singleplayer_overlays", "tp_024", "", iParam2, 195, 0);
					break;
				
				case 24:
					func_396(sParam0, iParam1, iParam3, "TAT_TRV_26", "singleplayer_overlays", "tp_025", "", iParam2, 225, 2);
					break;
				
				case 25:
					func_396(sParam0, iParam1, iParam3, "TAT_TRV_28", "singleplayer_overlays", "tp_027", "", iParam2, 175, 0);
					break;
				
				case 26:
					func_396(sParam0, iParam1, iParam3, "TAT_TRV_29", "singleplayer_overlays", "tp_028", "", iParam2, 65, 0);
					break;
				
				case 27:
					func_396(sParam0, iParam1, iParam3, "TAT_TRV_30", "singleplayer_overlays", "tp_029", "", iParam2, 50, 0);
					break;
				
				case 28:
					func_396(sParam0, iParam1, iParam3, "TAT_TRV_31", "singleplayer_overlays", "tp_030", "", iParam2, 70, 0);
					break;
				
				case 29:
					func_396(sParam0, iParam1, iParam3, "TAT_TRV_34", "singleplayer_overlays", "tp_033", "", iParam2, 70, 0);
					break;
				
				case 30:
					func_396(sParam0, iParam1, iParam3, "TAT_TRV_23", "singleplayer_overlays", "tp_022", "", iParam2, 500, 1);
					break;
				
				case 31:
					func_396(sParam0, iParam1, iParam3, "TAT_TRV_27", "singleplayer_overlays", "tp_026", "", iParam2, 300, 1);
					break;
				
				case 32:
					func_396(sParam0, iParam1, iParam3, "TAT_TRV_32", "singleplayer_overlays", "tp_031", "", iParam2, 190, 1);
					break;
				
				case 33:
					func_396(sParam0, iParam1, iParam3, "TAT_TRV_33", "singleplayer_overlays", "tp_032", "", iParam2, 129, 1);
					break;
				
				default:
					func_393(sParam0, iParam2, iParam1, 34);
					break;
			}
			break;
		
		case 3:
		case 4:
			switch (iParam1)
			{
				case 0:
					func_396(sParam0, iParam1, iParam3, "TAT_FM_008", "multiplayer_overlays", "000", "", iParam2, system::round((system::to_float(20000) * Global_262145.f_2906)), 0);
					break;
				
				case 1:
					func_396(sParam0, iParam1, iParam3, "TAT_FM_009", "multiplayer_overlays", "001", "", iParam2, system::round((system::to_float(1400) * Global_262145.f_2907)), 2);
					break;
				
				case 2:
					func_396(sParam0, iParam1, iParam3, "TAT_FM_010", "multiplayer_overlays", "002", "", iParam2, system::round((system::to_float(9750) * Global_262145.f_2908)), 3);
					break;
				
				case 3:
					func_396(sParam0, iParam1, iParam3, "TAT_FM_011", "multiplayer_overlays", "003", "", iParam2, system::round((system::to_float(2150) * Global_262145.f_2909)), 0);
					break;
				
				case 4:
					func_396(sParam0, iParam1, iParam3, "TAT_FM_012", "multiplayer_overlays", "004", "", iParam2, system::round((system::to_float(10000) * Global_262145.f_2910)), 0);
					break;
				
				case 54:
					func_396(sParam0, iParam1, iParam3, "TAT_FM_013", "multiplayer_overlays", "005", "", iParam2, system::round((system::to_float(12400) * Global_262145.f_2911)), 1);
					break;
				
				case 5:
					func_396(sParam0, iParam1, iParam3, "TAT_FM_014", "multiplayer_overlays", "006", "", iParam2, system::round((system::to_float(3500) * Global_262145.f_2912)), 0);
					break;
				
				case 6:
					func_396(sParam0, iParam1, iParam3, "TAT_FM_015", "multiplayer_overlays", "007", "", iParam2, system::round((system::to_float(4950) * Global_262145.f_2913)), 2);
					break;
				
				case 55:
					func_396(sParam0, iParam1, iParam3, "TAT_FM_016", "multiplayer_overlays", "008", "", iParam2, system::round((system::to_float(1350) * Global_262145.f_2914)), 1);
					break;
				
				case 7:
					func_396(sParam0, iParam1, iParam3, "TAT_FM_017", "multiplayer_overlays", "009", "", iParam2, system::round((system::to_float(1450) * Global_262145.f_2915)), 0);
					break;
				
				case 8:
					func_396(sParam0, iParam1, iParam3, "TAT_FM_018", "multiplayer_overlays", "010", "", iParam2, system::round((system::to_float(2700) * Global_262145.f_2916)), 7);
					break;
				
				case 9:
					func_396(sParam0, iParam1, iParam3, "TAT_FM_019", "multiplayer_overlays", "011", "rank", iParam2, system::round((system::to_float(1200) * Global_262145.f_2917)), 0);
					break;
				
				case 10:
					func_396(sParam0, iParam1, iParam3, "TAT_FM_020", "multiplayer_overlays", "012", "rank", iParam2, system::round((system::to_float(1500) * Global_262145.f_2918)), 0);
					break;
				
				case 11:
					func_396(sParam0, iParam1, iParam3, "TAT_FM_021", "multiplayer_overlays", "013", "rank", iParam2, system::round((system::to_float(2650) * Global_262145.f_2919)), 0);
					break;
				
				case 56:
					func_396(sParam0, iParam1, iParam3, "TAT_FM_022", "multiplayer_overlays", "014", "", iParam2, system::round((system::to_float(1900) * Global_262145.f_2920)), 1);
					break;
				
				case 12:
					func_396(sParam0, iParam1, iParam3, "TAT_FM_023", "multiplayer_overlays", "015", "", iParam2, system::round((system::to_float(4950) * Global_262145.f_2921)), 2);
					break;
				
				case 57:
					func_396(sParam0, iParam1, iParam3, "TAT_FM_024", "multiplayer_overlays", "016", "", iParam2, system::round((system::to_float(2400) * Global_262145.f_2922)), 1);
					break;
				
				case 58:
					func_396(sParam0, iParam1, iParam3, "TAT_FM_025", "multiplayer_overlays", "017", "", iParam2, system::round((system::to_float(5100) * Global_262145.f_2923)), 1);
					break;
				
				case 59:
					func_396(sParam0, iParam1, iParam3, "TAT_FM_026", "multiplayer_overlays", "018", "", iParam2, system::round((system::to_float(7400) * Global_262145.f_2924)), 1);
					break;
				
				case 60:
					func_396(sParam0, iParam1, iParam3, "TAT_FM_027", "multiplayer_overlays", "019", "", iParam2, system::round((system::to_float(10000) * Global_262145.f_2925)), 1);
					break;
				
				case 17:
					func_396(sParam0, iParam1, iParam3, "TAT_FM_201", "multiplayer_overlays", "005", "", iParam2, system::round((system::to_float(2400) * Global_262145.f_2930)), 2);
					break;
				
				case 18:
					func_396(sParam0, iParam1, iParam3, "TAT_FM_202", "multiplayer_overlays", "006", "", iParam2, system::round((system::to_float(5100) * Global_262145.f_2931)), 2);
					break;
				
				case 19:
					func_396(sParam0, iParam1, iParam3, "TAT_FM_203", "multiplayer_overlays", "015", "", iParam2, system::round((system::to_float(3600) * Global_262145.f_2932)), 2);
					break;
				
				case 20:
					func_396(sParam0, iParam1, iParam3, "TAT_FM_204", "multiplayer_overlays", "000", "", iParam2, system::round((system::to_float(10000) * Global_262145.f_2933)), 3);
					break;
				
				case 21:
					func_396(sParam0, iParam1, iParam3, "TAT_FM_205", "multiplayer_overlays", "001", "", iParam2, system::round((system::to_float(12500) * Global_262145.f_2934)), 3);
					break;
				
				case 22:
					func_396(sParam0, iParam1, iParam3, "TAT_FM_206", "multiplayer_overlays", "003", "", iParam2, system::round((system::to_float(10000) * Global_262145.f_2935)), 3);
					break;
				
				case 23:
					func_396(sParam0, iParam1, iParam3, "TAT_FM_207", "multiplayer_overlays", "014", "", iParam2, system::round((system::to_float(5000) * Global_262145.f_2936)), 3);
					break;
				
				case 24:
					func_396(sParam0, iParam1, iParam3, "TAT_FM_208", "multiplayer_overlays", "018", "", iParam2, system::round((system::to_float(7500) * Global_262145.f_2937)), 3);
					break;
				
				case 25:
					func_396(sParam0, iParam1, iParam3, "TAT_FM_209", "multiplayer_overlays", "002", "", iParam2, system::round((system::to_float(3750) * Global_262145.f_2938)), 2);
					break;
				
				case 26:
					func_396(sParam0, iParam1, iParam3, "TAT_FM_210", "multiplayer_overlays", "007", "", iParam2, system::round((system::to_float(3750) * Global_262145.f_2939)), 3);
					break;
				
				case 27:
					func_396(sParam0, iParam1, iParam3, "TAT_FM_211", "multiplayer_overlays", "008", "", iParam2, system::round((system::to_float(4800) * Global_262145.f_2940)), 3);
					break;
				
				case 28:
					func_396(sParam0, iParam1, iParam3, "TAT_FM_212", "multiplayer_overlays", "017", "", iParam2, system::round((system::to_float(3500) * Global_262145.f_2941)), 3);
					break;
				
				case 61:
					func_396(sParam0, iParam1, iParam3, "TAT_FM_213", "multiplayer_overlays", "009", "", iParam2, system::round((system::to_float(12350) * Global_262145.f_2942)), 1);
					break;
				
				case 62:
					func_396(sParam0, iParam1, iParam3, "TAT_FM_214", "multiplayer_overlays", "011", "", iParam2, system::round((system::to_float(1900) * Global_262145.f_2943)), 1);
					break;
				
				case 63:
					func_396(sParam0, iParam1, iParam3, "TAT_FM_215", "multiplayer_overlays", "013", "", iParam2, system::round((system::to_float(4500) * Global_262145.f_2944)), 1);
					break;
				
				case 64:
					func_396(sParam0, iParam1, iParam3, "TAT_FM_216", "multiplayer_overlays", "016", "", iParam2, system::round((system::to_float(12250) * Global_262145.f_2945)), 1);
					break;
				
				case 65:
					func_396(sParam0, iParam1, iParam3, "TAT_FM_217", "multiplayer_overlays", "019", "", iParam2, system::round((system::to_float(12300) * Global_262145.f_2946)), 1);
					break;
				
				case 29:
					func_396(sParam0, iParam1, iParam3, "TAT_FM_218", "multiplayer_overlays", "010", "", iParam2, system::round((system::to_float(2500) * Global_262145.f_2947)), 0);
					break;
				
				case 30:
					func_396(sParam0, iParam1, iParam3, "TAT_FM_219", "multiplayer_overlays", "004", "", iParam2, system::round((system::to_float(10000) * Global_262145.f_2948)), 0);
					break;
				
				case 31:
					func_396(sParam0, iParam1, iParam3, "TAT_FM_220", "multiplayer_overlays", "012", "", iParam2, system::round((system::to_float(10000) * Global_262145.f_2949)), 0);
					break;
				
				case 66:
					func_396(sParam0, iParam1, iParam3, "TAT_FM_221", "multiplayer_overlays", "020", "", iParam2, system::round((system::to_float(7500) * Global_262145.f_2950)), 1);
					break;
				
				case 32:
					func_396(sParam0, iParam1, iParam3, "TAT_FM_222", "multiplayer_overlays", "021", "", iParam2, system::round((system::to_float(5000) * Global_262145.f_2951)), 2);
					break;
				
				case 33:
					func_396(sParam0, iParam1, iParam3, "TAT_FM_223", "multiplayer_overlays", "022", "", iParam2, system::round((system::to_float(7300) * Global_262145.f_2952)), 3);
					break;
				
				case 34:
					func_396(sParam0, iParam1, iParam3, "TAT_FM_224", "multiplayer_overlays", "023", "", iParam2, system::round((system::to_float(7250) * Global_262145.f_2953)), 2);
					break;
				
				case 35:
					func_396(sParam0, iParam1, iParam3, "TAT_FM_225", "multiplayer_overlays", "024", "", iParam2, system::round((system::to_float(11900) * Global_262145.f_2954)), 0);
					break;
				
				case 36:
					func_396(sParam0, iParam1, iParam3, "TAT_FM_226", "multiplayer_overlays", "025", "", iParam2, system::round((system::to_float(2750) * Global_262145.f_2955)), 0);
					break;
				
				case 37:
					func_396(sParam0, iParam1, iParam3, "TAT_FM_227", "multiplayer_overlays", "026", "", iParam2, system::round((system::to_float(1750) * Global_262145.f_2956)), 0);
					break;
				
				case 38:
					func_396(sParam0, iParam1, iParam3, "TAT_FM_228", "multiplayer_overlays", "027", "", iParam2, system::round((system::to_float(7300) * Global_262145.f_2957)), 3);
					break;
				
				case 39:
					func_396(sParam0, iParam1, iParam3, "TAT_FM_229", "multiplayer_overlays", "028", "", iParam2, system::round((system::to_float(3250) * Global_262145.f_2958)), 2);
					break;
				
				case 40:
					func_396(sParam0, iParam1, iParam3, "TAT_FM_230", "multiplayer_overlays", "029", "", iParam2, system::round((system::to_float(1000) * Global_262145.f_2959)), 0);
					break;
				
				case 67:
					func_396(sParam0, iParam1, iParam3, "TAT_FM_231", "multiplayer_overlays", "030", "", iParam2, system::round((system::to_float(5000) * Global_262145.f_2960)), 1);
					break;
				
				case 41:
					func_396(sParam0, iParam1, iParam3, "TAT_FM_232", "multiplayer_overlays", "031", "", iParam2, system::round((system::to_float(7500) * Global_262145.f_2961)), 2);
					break;
				
				case 68:
					func_396(sParam0, iParam1, iParam3, "TAT_FM_233", "multiplayer_overlays", "032", "", iParam2, system::round((system::to_float(5100) * Global_262145.f_2962)), 1);
					break;
				
				case 42:
					func_396(sParam0, iParam1, iParam3, "TAT_FM_234", "multiplayer_overlays", "033", "", iParam2, system::round((system::to_float(5050) * Global_262145.f_2963)), 0);
					break;
				
				case 43:
					func_396(sParam0, iParam1, iParam3, "TAT_FM_235", "multiplayer_overlays", "034", "", iParam2, system::round((system::to_float(2450) * Global_262145.f_2964)), 2);
					break;
				
				case 44:
					func_396(sParam0, iParam1, iParam3, "TAT_FM_236", "multiplayer_overlays", "035", "", iParam2, system::round((system::to_float(4950) * Global_262145.f_2965)), 0);
					break;
				
				case 45:
					func_396(sParam0, iParam1, iParam3, "TAT_FM_237", "multiplayer_overlays", "036", "", iParam2, system::round((system::to_float(5100) * Global_262145.f_2966)), 0);
					break;
				
				case 46:
					func_396(sParam0, iParam1, iParam3, "TAT_FM_238", "multiplayer_overlays", "037", "", iParam2, system::round((system::to_float(12250) * Global_262145.f_2967)), 0);
					break;
				
				case 47:
					func_396(sParam0, iParam1, iParam3, "TAT_FM_239", "multiplayer_overlays", "038", "", iParam2, system::round((system::to_float(1150) * Global_262145.f_2968)), 3);
					break;
				
				case 48:
					func_396(sParam0, iParam1, iParam3, "TAT_FM_240", "multiplayer_overlays", "039", "", iParam2, system::round((system::to_float(7500) * Global_262145.f_2969)), 3);
					break;
				
				case 49:
					func_396(sParam0, iParam1, iParam3, "TAT_FM_241", "multiplayer_overlays", "040", "", iParam2, system::round((system::to_float(7600) * Global_262145.f_2970)), 3);
					break;
				
				case 50:
					func_396(sParam0, iParam1, iParam3, "TAT_FM_242", "multiplayer_overlays", "041", "", iParam2, system::round((system::to_float(2600) * Global_262145.f_2971)), 2);
					break;
				
				case 51:
					func_396(sParam0, iParam1, iParam3, "TAT_FM_243", "multiplayer_overlays", "042", "", iParam2, system::round((system::to_float(2500) * Global_262145.f_2972)), 3);
					break;
				
				case 52:
					func_396(sParam0, iParam1, iParam3, "TAT_FM_244", "multiplayer_overlays", "043", "", iParam2, system::round((system::to_float(7450) * Global_262145.f_2973)), 3);
					break;
				
				case 53:
					func_396(sParam0, iParam1, iParam3, "TAT_FM_245", "multiplayer_overlays", "044", "", iParam2, system::round((system::to_float(7500) * Global_262145.f_2974)), 0);
					break;
				
				case 69:
					func_396(sParam0, iParam1, iParam3, "TAT_FM_246", "multiplayer_overlays", "045", "", iParam2, system::round((system::to_float(10000) * Global_262145.f_2975)), 1);
					break;
				
				case 70:
					func_396(sParam0, iParam1, iParam3, "TAT_FM_247", "multiplayer_overlays", "047", "", iParam2, system::round((system::to_float(2500) * Global_262145.f_2976)), 2);
					break;
			}
			if (iVar0 == joaat("mp_m_freemode_01"))
			{
				switch (iParam1)
				{
					case 73:
						func_396(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_001", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 74:
						func_396(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_002", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 75:
						func_396(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_003", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 76:
						func_396(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_004", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 77:
						func_396(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_005", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 78:
						func_396(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_006", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 79:
						func_396(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_009", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 80:
						func_396(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_013", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 81:
						func_396(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_014", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 82:
						func_396(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_015", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 83:
						func_396(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_016", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 84:
}