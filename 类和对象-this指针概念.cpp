/*
C++����ģ�ͺ�thisָ��

1.��Ա�����ͳ�Ա�����ֿ��洢
��C++�У����ڵĳ�Ա�����ͳ�Ա�����ֿ��洢��ֻ�зǾ�̬��Ա������������Ķ����ϣ�������Ա��������Ķ����ϡ�

***�ն���ռ���ڴ�ռ䣺 1

thisָ�����

thisָ��ָ�򱻵��õĳ�Ա���������Ķ���
thisָ��������ÿһ���Ǿ�̬��Ա�����ڵ�һ��ָ��
thisָ�벻��Ҫ���壬ֱ��ʹ�ü���

thisָ�����;��

���βκͳ�Ա����ͬ��ʱ������thisָ��������
����ķǾ�̬��Ա�����з��ض�������ʹ��return *this

*/
#include <iostream>
using namespace std;
class Person
{
public:

	int age;
	//���βκͳ�Ա����ͬ��ʱ������thisָ��������
	Person(int age)
	{
		this->age = age;
	}

	Person& addpersonage(Person p)
	{
		this->age += p.age;
		return *this;
	}

};
void test01()
{
	Person p1(10);
	cout << p1.age << endl;
}
void test02()
{
	Person p1(10);
	Person p2(10);

	p2.addpersonage(p1).addpersonage(p1).addpersonage(p1).addpersonage(p1);
	cout << p2.age << endl;
}
int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}
