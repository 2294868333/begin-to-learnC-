/* ***********************************************************************
						�����
���ã�����ִ�д��������

					  ��ֵ�����
���ã����ڽ����ʽ��ֵ����������
������ =��+=��-=��*=��/=��%=

************************************************************************* */
#include<iostream>
using namespace std;
int main()
{
	int num;
	//  =
	num = 10;
	cout << "num =  :" << num << endl;
	//  +=
	num += 2;                               //û�и�num����ֵ �� num��Ȼȡ��һ���� num = 10
	cout << "num += 2 :" << num << endl;    // num = num+2 = 10+2 = 12
	//  -=
	num -= 2;                               //numȡ��һ���� num = 12
	cout << "num -= 2 :" << num << endl;    // num = num-2 = 12-2 = 10
	//  *=
	num *= 2;                               //numȡ��һ���� num = 10
	cout << "num *= 2 :" << num << endl;    //num = num*2 = 10*2 = 20
	//  /=
	num /= 2;                               //numȡ��һ���� num = 20
	cout << "num /= 2 :" << num << endl;    //num = num/2 = 20/2 = 10
	//  %=
	num %= 3;                               //numȡ��һ���� num = 10
	cout << "num %= 3 :" << num << endl;    //num = num%3 = 10%3 = 1

	system("pause");
	return 0;
}