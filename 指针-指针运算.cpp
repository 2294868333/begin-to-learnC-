/* *******************************************************************
								指针运算
实质：地址的运算

赋值运算
作用：用来给指针变量赋初值，使指针变量在使用前有确定的指向
注意：
1.给指针赋值时 不能将取地址符的值赋值到取内容符的值上
2.给指针赋值时 定义的指针类型与取地址的类型相同
3.不能用常数给指针变量赋值

关系运算
作用：一般用来判断是否是空指针
p == 0 ;  //空指针
p ！= 0 ; //非空指针
注意：
1.指针变量进行关系运算时，应该是指向同一数据类型的数据

算数运算
包括：指针的加减，自增自减等
********************************************************************* */

/*
//赋值运算
#include <iostream>
using namespace std;
int main()
{
	int a; int b;       //定义两个变量
	int *p1; int *p2;   //定义两个指针变量
	a = 10; b = 10;     //对变量赋值
	p1 = &a; p2 = &b;   //将指针p1指向a的地址 ， 将指针p2指向b的地址
	cout << "a = " << a <<"	"<< "b = " << b <<"	"<< "a+b = " << a + b << endl;
	cout << "*p1 = " << *p1 <<"	"<< "*p2 = " << *p2 <<"	"<< "*p1+*p2 = " << *p1 + *p2 << endl;

	*p1 = 20; *p2 = 20;//对指针p1,p2所指向的内容进行赋值
	cout << "a = " << a << "	" << "b = " << b << "	" << "a+b = " << a + b << endl;
	cout << "*p1 = " << *p1 << "	" << "*p2 = " << *p2 << "	" << "*p1+*p2 = " << *p1 + *p2 << endl;
	
	system("pause");
	return 0;
}
*/

//赋值运算注意的问题
#include <iostream>
using namespace std;
int main()
{
	//定义常量
	int a = 10; 
	float x = 3.14; 
	//定义指针
	int *p1,*p2 = &a;
	int *p3 = &a;
	float *p4 = &x;
	/*
	//1.给指针赋值时 不能将取地址符的值赋值到指针变量内容上
	*p1 = &a;  //错误
	*p1 = 10;  //正确
	//2.给指针赋值时 定义的指针变量类型要与取地址符值的类型相同
	p1 = &a;   //正确
	p1 = &x;   //错误
	//3.不能用常数给指针变量赋值
	p2 = 0x3000;     //错误
	*p2 = 0x3000;    //正确
	*/
	/*
	//关系运算
	//1.指针变量进行关系运算时，应该是指向同一数据类型的数据
	if (p2 = p4)
	{
		cout << "*p2 = *p3" << endl;
	}
	*/

	//算数运算
	int i = 0, j = 1, *p = &j;
	cout << &j << endl;
	i = *p++;  //i = *(p++) , 先进行赋值运算i = j，再进行指针变量的自增运算p+1，
	cout << i <<"	"<<p<< endl;
	i = *++p;  //i = *(++p) ，先进行指针变量的自增运算 再进行赋值运算
	cout << i << endl;
	i ==(*p)++; //先给i赋值，i = j ，后使指针变量指向的内容自增运算，j++
	cout << i << endl;
	i = ++(*p);  //先给指针变量指向的内容自增运算 ，再进行赋值运算 i = j+1 ,
	cout << i << endl;

	system("pause");
	return 0;
}
