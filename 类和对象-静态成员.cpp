/*
��̬��Ա
��̬��Ա�����ڳ�Ա�����ͳ�Ա����ǰ���Ϲؼ���static����Ϊ��̬��Ա
��̬��Ա��Ϊ��
��̬��Ա����
  ���ж�����ͬһ������
  �ڱ���׶η����ڴ�
  ���������������ʼ��
��̬��Ա����
  ���ж�����ͬһ������
  ��̬��Ա����ֻ�ܷ��ʾ�̬��Ա����

*/
#include <iostream>
using namespace std;
class Person
{
public:
	//��̬��Ա����ֻ�ܷ��ʾ�̬��Ա����
	static void func() //��̬��Ա����
	{
		m_A = 100;
		//m_B = 100;  �����Է��ʷǾ�̬��Ա����
		cout << "func�ĵ���" << endl;
	}
	static int m_A;//��̬��Ա����
	int m_B;
};

int Person::m_A = 10;

void test()
{
	//��̬��Ա�������ʷ�ʽ
	//1.ͨ������
	Person p1;
	p1.func();
	//2.ͨ������
	Person::func();

	cout << p1.m_A << endl;
	cout << Person::m_A << endl;

}
int main()
{
	test();

	system("pause");
	return 0;
}
