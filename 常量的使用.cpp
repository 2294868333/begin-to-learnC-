#include <iostream>
using namespace std;

//����
//���ã���¼�����в��ɸ��ĵ�����
//�÷���1.�곣��           #define ������ ����ֵ
//      2.���εĳ���       const �������� ������ = ����ֵ ��

#define year 2020

int main()
{
	cout << endl<<"������" << year << "��";
	//year = 2020;  ����ԭ�� �곣���ǲ����Ա��޸ĵ�

	const int month = 10;                               //����һ�����ͳ���month
	cout << month << "��";
	//month = 11;   ����ԭ���� �����ǲ����Ա��޸ĵ�

	int day = 10;                                       //����һ�����ͱ���day
	cout << day << "��" << endl << endl;
	
	system("pause");
	return 0;
}