/*----------------------------------------------------------------
// Copyright (C) MickelZhang
// License:MIT
// 文件名：base_code_style.cpp
// 文件功能描述：
// 创建者：MickelZhang
// 时间：2020/12/12
// 修改人：MickelZhang
// 时间：2020/12/14
// 修改说明：添加常量命名规则
// 修改人：MickelZhang
// 时间：2020/12/14
// 修改说明：添加常量命名规则
// 修改人：MickelZhang
// 时间：2020/12/18
// 修改说明：添加.h文件的书写规范,头文件规范重新书写，应该写成和项目源代码数的全路径相关
	    修改和添加一些规范
// 修改人：MickelZhang
// 时间：2020/12/22
// 修改说明：一些错别字的修改
// 软件版本：VS2015
//----------------------------------------------------------------*/
#include<iostream>

using namespace std;

// 常量定义的两种方法,常量一般为全部大写的方式
#define LENGHT 10
#define WIDTH 5
const int AREA = 50;

// 全局变量定义方式:全局变量以g_开头
int g_num;

// 求两数之和（函数声明处简单描述下函数功能即可）
int AddNumbers(int x, int y);

// 类的成员变量和普通变量命名规则一致，但是以一个下划线结尾()


// 主函数
int main()
{
	// 命名规范  
	// 文件命名全部小写，可以包含下划线或者连字符，一般使用下划线
	// 类，结构体，类型定义，别名，枚举，采用每个单词首字母均大写并且不包含下划线    MyClass()
	// 普通变量命名，函数参数，数据成员一律采用小写，单词之间下划线连接   
	// 函数命名采用大小写混合，取值和设值函数则要求与变量名匹配,如：MyExcitingFunction() 函数命名没有下划线
	int price_count_reader;  // 行尾注释要求 分号后面空两格，再一个空格后开始写注释（也可不加空格）
	return 0;
}

/*-----------------------------------------------------------------
// 输入：int x, int y
// 输出：int sum 
// 功能描述：求两个整数的和
// 作者：MickelZhang
// 日期：2020/12/12
// 修改人：MickelZhang 2020/12/12  （注：修改人这一行添加上修改人姓名+修改时间）
// 记录：
// 修改人：
// 记录：
// 版本：
-----------------------------------------------------------------*/
int AddNumbers(int x, int y)
{
	int sum;
	sum = x + y;
	return x + y;
}

/*-----------------------------------------------------------------
// 功能描述：
// 用法：（也可以举例添加详细的使用方法，或者尽可能描述清楚）
// 作者：MickelZhang
// 日期：2020/12/12
// 修改人：MickelZhang 2020/12/12
// 记录：
// 修改人：
// 记录：
// 版本：
-----------------------------------------------------------------*/
class MyClass
{

	/*
	*/
public:
private:

};

// TODO(1223256867@qq.com)
// TODO(MickelZhang)
// TODO(写上为什么要加TODO注释，有些待处理，或者暂时没有完成的一些功能等，描述清楚即可)

// 相关测试函数均以 TestForxxxxxx  开头

// .h文件书写规范： https://www.cnblogs.com/hokyhu/archive/2009/03/30/1425604.html
//采用：define后面应该写对应的格式：为保证唯一性, 头文件的命名应该基于所在项目源代码树的全路径. 例如, 项目 foo 中的头文件 foo/bar/baz.h
// #ifndef FOO_BAR_BAZ_H_
// #define FOO_BAR_BAZ_H_
// ...
// #endif // FOO_BAR_BAZ_H_


//  #ifndef __SOMEFILE_H__  
//  #define __SOMEFILE_H__
//    ... ... // 声明、定义语句
//  #endif

// 关于内联函数的要求：只有当函数之后10行甚至更少时候才将其定义为内联函数，注：递归函数不要声明为内联

// 使用c++风格的类型转换  static_cast<>()
