/*
�������캯������ʱ��
C++�п������캯������ʱ��ͨ�����������

1.ʹ��һ���Ѿ�������ϵĶ�������ʼ��һ���¶���
2.ֵ���ݵķ�ʽ������������ֵ
3.��ֵ��ʽ���ؾֲ�����

*/
#include <iostream>
using namespace std;
class Person
{
public:
	//�޲ι��캯��
	Person()
	{
		cout << "Person ���޲ι��캯������" << endl;
	}
	//�вι��캯��
	Person(int p)
	{
		cout << "Person ���вι��캯������" << endl;
	}
	//�������캯��
	Person(const Person &p)
	{
		cout << "Person �Ŀ������캯������" << endl;
	}
	//��������
	~Person()
	{
		cout << "Person ��������������" << endl;
	}

};
void test01()
{
	Person man(10);//�����вι��캯��
	Person neman(man);//���ÿ������캯��

}
void dowork(Person p)
{

}
void test02()
{
	Person p; //�����޲ι��캯��
	dowork(p);
}

Person test03()
{
	Person p1;//�����޲ι��캯��
	return p1;
}
int main()
{
	//test01();
	//test02();
	test03();
	system("pause");
	return 0;
}