/*
�������������
���ã� ͨ�����ص����������ʵ���Լ�����������

*/
#include <iostream>
using namespace std;
class Myinteger
{
	friend ostream& operator<< (ostream& cout, Myinteger myint);
private:
	int m_Num;
public:
	Myinteger()
	{
		m_Num = 1;
	}
	//����ǰ��++
	Myinteger& operator--()
	{
		//�ȼ�һ
		m_Num--;
		//�ٷ���
		return *this;
	}
	//�������++
	Myinteger operator--(int)
	{
		//�ȱ��汾��
		Myinteger temp = *this;
		//�ټ�һ
		m_Num--;
		//�ٷ��ر���
		return temp;
	}
};

//����<<
ostream& operator<< (ostream& cout, Myinteger myint)
{
	cout << myint.m_Num << endl;
	return cout;
}

void test01()
{
	Myinteger myint;
	cout << --myint << endl;
	cout << myint << endl;
}
void test02()
{
	Myinteger myint;
	cout << myint-- << endl;
	cout << myint << endl;
}
int main() {

	test01();
	test02();

	system("pause");

	return 0;
}