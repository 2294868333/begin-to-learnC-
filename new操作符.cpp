/*
new������

C++������new�������ڶ�����������
�������ٵ����ݣ��ɳ���Ա�ֶ����٣��ֶ��ͷţ��ͷ����ò����� delete 

�﷨��ָ������ *ָ������� =  new �������ͣ�����ֵ��

����new���������ݣ��᷵�ظ����ݶ�Ӧ�����͵�ָ��

�﷨��ָ������ *ָ������� =  new ��������[]
*/

#include <iostream>
using namespace std;
#include <string>
//����ѧ���ṹ��
struct student
{
	//����
	string name;
	//ѧ��
	string num;
	//ѧУ
	string school;
};
//������ʾ����
void printf(int n)
{
	//�﷨��ָ������ *ָ������� = new ��������[]
	struct student *p = new student[n]; //��new���������� ��̬���������С
	//������Ϣ
	for (int i = 0; i < n; i++)
	{
		cout << "������ѧ��������" ;
		cin >> p->name;
		cout << "������ѧ��ѧ�ţ�" ;
		cin >> p->num;
		cout << "������ѧ��ѧУ��" ;
		cin >> p->school;
		cout << endl;
	}
	cout << endl;
	//�����Ϣ
	for (int i = 0; i < n; i++)
	{
		cout << "	������" << p->name << "	ѧ�ţ�" << p->num << "	 ѧУ��" << p->school << endl;
	}
	cout << endl;
}

int* func()
{
	//�﷨��ָ������ *ָ������� =  new �������ͣ�����ֵ��
	int* a = new int(10);
	return a;
}
int main()
{
	struct student;
	int n;
	cout << "��������Ҫ����ѧ���ĸ�����";
	cin >> n;
	printf(n); //���ú���
	int *p = func();
	cout << *p << endl;
	
}