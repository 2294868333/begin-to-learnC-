/*
��ʼ���б�
���ã�
C++�ṩ�˳�ʼ���б��﷨��������ʼ������

�﷨�����캯��()������1(ֵ1),����2��ֵ2��..
		{
			
		}

�������Ϊ���Ա
C++���еĳ�Ա��������һ����Ķ������ǳƸó�ԱΪ �����Ա

*/
#include <iostream>
using namespace std;
#include<string>
class Phone
{
public:
	//�ֻ�����
	string m_pname;
	Phone(string pname)
	{
		m_pname = pname;
	}
	~Phone()
	{
		cout << "Phone���������ĵ���" << endl;
	}
};

class Person
{
public:
	//����
	//����
	string m_name;
	//�ֻ�
	Phone m_Phone;
	Person(string name, string pname) :m_name(name), m_Phone(pname)
	{
		//m_name = name;
		//m_Phone = pname;
	}
	~Person()
	{
		cout << "Person���������ĵ���" << endl;
	}
};
//�����������Ϊ�����Ա�����캯���ȹ���������ٹ�������
//���������빹�캯���෴��
void test()
{
	Person p1("�Ժ���","��Ϊ");
	cout << p1.m_name << "	�ã�" << p1.m_Phone.m_pname << endl;

}
int main()
{
	test();
	system("pause");
	return 0;
}