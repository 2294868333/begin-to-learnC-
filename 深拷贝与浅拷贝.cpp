/*
�����ǳ����

ǳ�������򵥵ĸ�ֵ��������
������ڶ�����������ռ䣬���п�������

*/
#include <iostream>
using namespace std;
class Person
{
public:
	//����
	int m_age;
	int *m_height;
	//���캯��
	Person()
	{
		cout << "Ĭ�Ϲ��캯��" << endl;
	}
	//�вι��캯��
	Person( int age , int height)
	{
		cout << "�вι��캯��" << endl;
		m_age = age;
		m_height = new int(height);
	}
	//�������캯��
	Person(const Person &p)
	{
		cout << "�������캯��" << endl;
		m_age = p.m_age;//�������򵥸�ֵ
		//������ǳ��������
		//m_hight = p.m_height��
		//�������������ڶ����������ڴ棬�ᵼ��ǳ�����������ظ��ͷŶ�������
		m_height = new int(*p.m_height);
	}
	//��������
	~Person()
	{
		cout << "��������" << endl;
		if (m_height != NULL)
		{
			delete m_height;
		}
	}
};

void test01()
{
	Person p(21 , 175);
	cout << "p�����䣺" << p.m_age << "	p����ߣ�" << p.m_height << endl;
	Person copy(p);
	cout << "copy�����䣺" << p.m_age << "	copy����ߣ�" << p.m_height << endl;

}
int main()
{
	test01();
	system("pause");
	return 0;
}