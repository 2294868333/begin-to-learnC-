/*
��̬����һ-��������
����������
�ֱ�������ͨд���Ͷ�̬���������ʵ��������������������ļ�������
��̬���ŵ㣺
������֯�ṹ����
�ɶ���ǿ
����ǰ�ںͺ��ڵ���չ�Լ�ά��
*/

/*
//��ͨд��
#include <iostream>
#include<string>
using namespace std;
class computer
{
private:
	int m_num1;
	int m_num2;
public:
	void func(int a, int b)
	{
		m_num1 = a;
		m_num2 = b;
	}
	int oper(string sign)
	{
		if (sign == "+")
		{
			return m_num1 + m_num2;
		}
		else if (sign == "-")
		{
			return m_num1 - m_num2;
		}
		else if (sign == "*")
		{
			return m_num1 * m_num2;
		}
	}
};
void test()
{
	int a, b;
	string sign;
	computer com1;
	cout << "��������ֵa = ";
	cin >> a;
	cout << "��������ֵb = ";
	cin >> b;
	cout << "����������� + - * ��";
	cin >> sign;
	com1.func(a, b);
	cout << a << sign << b << "=" << com1.oper(sign) << endl;
}
int main()
{
	test();
	system("pause");
	return 0;
}
*/

//��̬д��
#include <iostream>
#include<string>
using namespace std;
class computer
{
public:
	int m_num1;
	int m_num2;

	virtual int oper() = 0;
};
//�ӷ�
class add :public computer
{
public:
	int oper()
	{
		return m_num1 + m_num2;
	}
};
//����
class cod :public computer
{
public:
	int oper()
	{
		return m_num1 - m_num2;
	}
};
//�˷�
class cheng :public computer
{
public:
	int oper()
	{
		return m_num1 * m_num2;
	}
};
void test()
{
	computer *abc = NULL;
	string sign;
	cout << "����������� + - * ��";
	cin >> sign;
	if (sign == "+")
	{
		//�ӷ�ʵ��
		abc = new add;
		cout << "��������ֵa = ";
		cin >> abc->m_num1;
		cout << "��������ֵb = ";
		cin >> abc->m_num2;
		cout << abc->m_num1 << sign << abc->m_num2 << "=" << abc->oper() << endl;
		delete abc;
	}
	else if (sign == "-")
	{
		//����ʵ��
		abc = new cod;

		cout << abc->m_num1 << sign << abc->m_num2 << "=" << abc->oper() << endl;
		delete abc;
	}
	else if (sign == "*")
	{
		//�˷�ʵ��
		abc = new cheng;
		cout << "��������ֵa = ";
		cin >> abc->m_num1;
		cout << "��������ֵb = ";
		cin >> abc->m_num2;
		cout << abc->m_num1 << sign << abc->m_num2 << "=" << abc->oper() << endl;
		delete abc;
	}
}
int main()
{
	test();
	system("pause");
	return 0;
}