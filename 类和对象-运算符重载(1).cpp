/*
���������
��������ظ�������е���������½��ж��壬��������һ�ֹ��ܣ�����Ӧ��ͬ����������
�Ӻ����������
���ã�ʵ�������Զ�������������ӵ�����
�������������
���ã���������Զ�����������
������������������Ԫ����ʵ������Զ�����������


*/

#include <iostream>
using namespace std;

class Person
{
	friend ostream& operator<<(ostream &cout, Person &p);
private:
	int m_A;
	int m_B;
public:
	Person()
	{
		m_A = 10;
		m_B = 10;
	}
	//��Ա�������ؼӺ������
	Person operator+ (Person &p)
	{
		Person temp;
		temp.m_A = this->m_A + p.m_A;
		temp.m_B = this->m_B + p.m_B;
		return temp;
	}
};

////ȫ�ֺ������ؼӺ������
//Person operator+ (Person &p1, Person &p2)
//{
//	Person temp;
//	temp.m_A = p1.m_A + p2.m_A;
//	temp.m_B = p1.m_B + p2.m_B;
//	return temp;
//}
//ȫ�ֺ����������������
ostream& operator<<(ostream &cout, Person& p)
{
	cout << "A = " << p.m_A << "	B = " << p.m_B ;
	return cout;
}

void test()
{
	Person p1;
	Person p2;
	//����+�����
	Person p3 = p1 + p2;
	//����<<�����
	cout << p3 << endl;
}

int main()
{
	test();

	system("pause");
	return 0;
}