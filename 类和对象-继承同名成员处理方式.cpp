/*
�̳�ͬ����Ա����ʽ
��������ͬ����Ա   ֱ�ӷ��ʼ���
���ʸ���ͬ����Ա   ��Ҫ��������

1. ����������ֱ�ӷ��ʵ�������ͬ����Ա
2. ����������������Է��ʵ�����ͬ����Ա
3. �������븸��ӵ��ͬ���ĳ�Ա��������������ظ�����ͬ����Ա����������������Է��ʵ�������ͬ������

�̳�ͬ����̬��Ա����ʽ
��̬��Ա�ͷǾ�̬��Ա����ͬ��������ʽһ��
��������ͬ����Ա   ֱ�ӷ��ʼ���
���ʸ���ͬ����Ա   ��Ҫ��������
ͬ����̬��Ա����ʽ�ͷǾ�̬����ʽһ����ֻ���������ַ��ʵķ�ʽ��ͨ������ �� ͨ��������

*/
#include <iostream>
#include <string>
using namespace std;
class father
{
public:
	string m_name;

	father()
	{
		m_name = "���";
	}
	void name()
	{
		cout << "���׵�����Ϊ��" << m_name << endl;
	}
	void name(string name)
	{
		cout << "���׵�����Ϊ��" << m_name << endl;
	}
};
class son : public father
{
public:
	string m_name;
	son()
	{
		m_name = "�Ժ���";
	}
	void name()
	{
		cout << "���ӵ�����Ϊ��" << m_name << endl;
	}
};
//��̬
class Base
{
public:
	static int m_A;
	static void func()
	{
		cout << "Base��func����" << endl;
	}
	static void func(int a)
	{
		cout << "Base��func��int a ���ĵ���" << endl;
	}
};
int Base::m_A = 100;
class Son : public Base
{
public:
	static int m_A;
	static void func()
	{
		cout << "Son �� func �ĵ���" << endl;
	}
};
int Son::m_A = 200;
void test01()
{
	//ͨ���������
	Son son1;
	son1.func();
	son1.Base::func();
	son1.Base::func(10);
	cout << "--------------"<< endl;
	//ͨ����������
	Son::func();
	Son::Base::func();
	Son::Base::func(100);
}
void test()
{
	son son1;
	string name = "���";
	son1.m_name;
	son1.name(); // ���������Ա ֱ�ӷ���
	//�������븸��ӵ��ͬ���ĳ�Ա��������������ظ��������а汾��ͬ����Ա����
	//son1.name(name);  
	//�������ʸ����б����ص�ͬ����Ա��������Ҫ�Ӹ����������
	son1.father::m_name;
	son1.father::name(name);
	son1.father::name(); //���ʸ����Ա �����������
} 
int main()
{
	//test();
	test01();
	system("pause");
	return 0;
}