/* ***********************************************************************
						运算符
作用：用于执行代码的运算

					  条件运算符
是一个三目运算符（三元运算符）
语法： 操作数1 ？ 操作数2 ： 操作数3 ；
用法： “操作数1”一般表示一个条件，若成立，则运算结果为“操作数2”的值，否则为“操作数3”的值

                      逗号运算符
语法： 表达式1,表达式2,表达式3, ..... ,表达式n
用法： 计算时，从左到右逐个计算每个表达式，最终的结果是最后表达式的类型和值。

************************************************************************* */
#include<iostream>
using namespace std;
#include<string>
int main()
{
	//条件运算符
	int a = 10;
	int b = 20;
	int c = 1;
	int d = 0;
	int min = (a <= b ? c : d);
	cout <<"a <= b ?	ans="<< min << endl;

	//逗号运算符
	int j;
	double i;
	j = (i = 12.14 , i + 8.5);
	cout << j << endl;

	system("pause");
	return 0;
}