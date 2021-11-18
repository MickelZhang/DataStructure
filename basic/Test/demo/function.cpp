﻿/*----------------------------------------------------------------
// Copyright (C) MickelZhang
// License:MIT
// 文件名：function.cpp
// 文件功能描述：菜鸟教程函数部分
// 创建者：MickelZhang
// 时间：2020/12/15
// 修改人：
// 时间：
// 修改说明：
// 软件版本：VS2015
//----------------------------------------------------------------*/
#include <iostream>
#include "function.h"
using namespace std;
/*
函数由一个函数头+一个函数主体组成：
包含：
返回类型
函数名称
参数
函数主体

//  
函数声明
函数调用
函数参数：
	传值调用 该方法把参数的实际值赋值给函数的形式参数。在这种情况下，修改函数内的形式参数对实际参数没有影响。
	指针调用 该方法把参数的地址赋值给形式参数。在函数内，该地址用于访问调用中要用到的实际参数。这意味着，修改形式参数会影响实际参数。
	引用调用 该方法把参数的引用赋值给形式参数。在函数内，该引用用于访问调用中要用到的实际参数。这意味着，修改形式参数会影响实际参数。
参数的默认值：
lambda表达式：匿名函数（不太熟悉）
*/


// 传值调用：向函数传递参数的传值调用方法，把参数的实际值复制给函数的形式参数。在这种情况下，修改函数内的形式参数不会影响实际参数。
// 可以在主函数中写相应的代码检测，交换后原始的值是否发生变化
/*-----------------------------------------------------------------
// 输入：整形变量 
// 输出：
// 功能描述：交换两个数
// 作者：MickelZhang
// 日期：2020/12/16
// 修改人：
// 记录：
// 修改人：
// 记录：
// 版本：
-----------------------------------------------------------------*/
void SwapOfValue(int x, int y)
{
	int temp;
	temp = x; /* 保存 x 的值 */
	x = y;    /* 把 y 赋值给 x */
	y = temp; /* 把 x 赋值给 y */
	cout << "x的值：" << x << "y的值:" << y << endl;
	return;
}

// 指针调用：把参数的地址复制给形式参数。在函数内，该地址用于访问调用中要用到的实际参数。
// 这意味着，修改形式参数会影响实际参数。按指针传递值，参数指针被传递给函数，就像传递其他值给函数一样
/*-----------------------------------------------------------------
// 输入：两个整形变量的地址 
// 输出：
// 功能描述：交换两个整形变量 
// 作者：MickelZhang
// 日期：2020/12/16
// 修改人：
// 记录：
// 修改人：
// 记录：
// 版本：
-----------------------------------------------------------------*/
void SwapOfPointer(int *x, int *y)
{
	int temp;
	temp = *x;    /* 保存地址 x 的值 */
	*x = *y;        /* 把 y 赋值给 x */
	*y = temp;    /* 把 x 赋值给 y */
	cout << "*x的值：" << *x << "*y的值:" << *y << endl; // 指针的内容得知：此时的*x代表对应的值
	return;
}

// 引用调用：向函数传递参数的引用调用方法，把引用的地址复制给形式参数。
// 在函数内，该引用用于访问调用中要用到的实际参数。这意味着，修改形式参数会影响实际参数。需要声明函数参数为引用类型，该函数用于交换参数所指向的两个整数变量的值
/*-----------------------------------------------------------------
// 输入：两个整形变量的地址赋值给形参 
// 输出：
// 功能描述：交换两个整形变量，函数传参数，传引用
// 作者：MickelZhang
// 日期：2020/12/16
// 修改人：
// 记录：
// 修改人：
// 记录：
// 版本：
-----------------------------------------------------------------*/
void SwapOfQuote(int &x, int &y)
{
	int temp;
	temp = x; /* 保存地址 x 的值 */
	x = y;    /* 把 y 赋值给 x */
	y = temp; /* 把 x 赋值给 y  */
	cout << "x的值：" << x << "y的值:" << y << endl;
	return;
}

