/* **************************************************
                    ���ݵ����������
1.cin �����룩 -- Ĭ����������ӣ����ܴӼ��������������Ϣ��
�﷨��cin >> ���� ��
2.cout������� -- Ĭ������Ļ���ӣ���������ʾ����Ļ�ϡ�
�﷨�� cout << ���� ��

**************************************************** */
#include <iostream>
using namespace std;
#include<string>
int main()
{
	//���͵��������
	int num ;
	cout << "�������int��ֵ��" << endl;
	cin >> num;
	cout << "����int = " << num << endl;
	//�����͵��������
	double d ;
	cout << "��������� double ��ֵ��" << endl;
	cin >> d;
	cout << "������ double = " <<d<< endl;
	//�ַ��͵��������
	char ch ;
	cout << "����ַ��� char ��ֵ��" << endl;
	cin >> ch;
	cout << "�ַ��� char = " << ch << endl;
	//�ַ������������
	string str;
	cout << "����ַ�����ֵ��" << endl;
	cin >> str;
	cout << "ans = " << str << endl;
	//�������������
	bool flag;
	cout << "���������bool��ֵ��" << endl;
	cin >> flag;    //����0Ϊ0 �����κη�0������1��
	cout << "������ bool = " << flag << endl;

	//ʵ��     ����-520   ��ʾ-�Ұ�C++��
	int num1;
	string str1 = "�Ұ�C++��";
	cout << "������ 520 ��" << endl;
	cin >> num1;
	cout << str1 << endl;

	system("pause");
	return 0;
}