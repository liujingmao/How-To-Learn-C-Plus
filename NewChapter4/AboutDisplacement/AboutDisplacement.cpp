﻿// AboutDisplacement.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include<cstdio>

#include <bitset>
#include <iostream>
using namespace std;

int main()
{
	/*
	char a1 = 0x63;       // 0110 0011
	a1 = (a1 << 4);        // 0011 0000
	printf("0x%x\n", a1);

	a1 = 0x63;                // 0110 0011
	a1 = (a1 >> 4);        //  0000 0110 逻辑右移
	printf("0x%x\n", a1);


	char a2 = 0x95;       // 1001 0101
	a2 = (a2 << 4);        // 0101 0000
	printf("0x%x\n", a2);

	a2 = 0x95;                // 1001 0101
	a2 = (a2 >> 4);        //  1111 1001 算术右移
	printf("0x%x\n", a2);


	unsigned char a3 = 0x63;       // 0110 0011
	a3 = (a3 << 4);        // 0011 0000
	printf("0x%x\n", a3);

	a3 = 0x63;                // 0110 0011
	a3 = (a3 >> 4);        //  0000 0110 逻辑右移
	printf("0x%x\n", a3);


	unsigned char a4 = 0x95;       // 1001 0101
	a4 = (a4 << 4);        // 0101 0000
	printf("0x%x\n", a4);

	a4 = 0x95;                // 1001 0101
	a4 = (a4 >> 4);        //  0000 1001 逻辑右移
	printf("0x%x\n", a4);
	*/

	/*
	//0000 0000
	const unsigned char priv = 0xFF;
	const unsigned char P_BAKCUP = (1<<6);
	const unsigned char P_ADMIN = (1<<7);

	printf("0x%x\n", P_BAKCUP);
	printf("0x%x\n", P_ADMIN);
	if (priv & P_BAKCUP)
	{
		cout << "BAKUP" << endl;
	}
	if (priv & P_ADMIN)
	{
		cout << "ADMIN" << endl;
	}
	*/
	
	// bitset
	bitset<10> priv = 0x7F;
	bitset<10> P_BAKCUP = (1 << 6);
	bitset<10> P_ADMIN = (1 << 7);

	cout << priv << endl;
	cout << P_BAKCUP << endl;
	cout << P_ADMIN << endl;

	if ((priv & P_BAKCUP) == P_BAKCUP)
	{
		cout << "BAKUP" << endl;
	}
	if ((priv & P_ADMIN) == P_ADMIN)
	{
		cout << "ADMIN" << endl;
	}



	return 0;
}












// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
