/*
ָ������һά�����ָ�����
���ã�����˵��һ��ָ�����ʹ��ָ������һά����
�﷨��
�������� ��*��������[Ԫ�ظ���] = ������;
*/
#include <iostream>
using namespace std;
int main()
{
	int b[3][5] = { 12,36,62,14,56,89,74,63,56,99,55,88,33,22,11 };
	int(*p)[5] = b;    //p��һ����ָ�����
	//ָ�뷽ʽ����е�ַ
	cout << "���b����ÿ�е��׵�ַ:\n";
	for (int i = 0; i < 3; i++)
	{
		cout << p+i << "	";
	}
	cout << endl;
	//���鷽ʽ����е�ַ
	cout << "���b����ÿ�е��׵�ַ:\n";
	for (int i = 0; i < 3; i++)
	{
		cout << p[i] <<"	";
	}
	cout << endl;
	//���b����ÿ��Ԫ�صĵ�ַ
	//ָ�뷽ʽ�������ÿ��Ԫ�صĵ�ַ
	cout << "���b����ÿ��Ԫ�صĵ�ַ:\n";
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cout << *(p + i) + j << "	";
		}
		cout << endl;
	}
	cout << endl;
	//���鷽ʽ�������ÿ��Ԫ�صĵ�ַ
	cout << "���b����ÿ��Ԫ�صĵ�ַ:\n";
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cout << p[i] + j << "	";
		}
		cout << endl;
	}
	cout << endl;
	//ָ�뷽ʽ�������ÿ��Ԫ�ص�ֵ
	cout << "���b����ÿ��Ԫ�ص�ֵ��" << endl;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cout << *(*(p + i) + j) << "	";
		}
		cout << endl;
	}
	cout << endl;
	//���鷽ʽ�������ÿ��Ԫ�ص�ֵ
	cout << "���b����ÿ��Ԫ�ص�ֵ��" << endl;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cout << p[i][j] << "	";
		}
		cout << endl;
	}
	cout << endl;
	system("pause");
	return 0;
}