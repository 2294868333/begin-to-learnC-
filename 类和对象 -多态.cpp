/*
��̬
��̬��C++���������������֮һ
��̬��Ϊ����
��̬��̬: �������� �� ������������ھ�̬��̬�����ú�����
��̬��̬: ��������麯��ʵ������ʱ��̬

��̬��̬�Ͷ�̬��̬����
��̬��̬�ĺ�����ַ���  -  ����׶�ȷ��������ַ
��̬��̬�ĺ�����ַ���  -  ���н׶�ȷ��������ַ

����ϣ������ʲô������ô�͵���ʲô����ĺ���
���������ַ�ڱ���׶ξ���ȷ������ô��̬����
���������ַ�����н׶β���ȷ�������Ƕ�̬����
��̬��������
�м̳й�ϵ
������д�����е��麯��
��̬ʹ������
����ָ�������ָ���������
��д����������ֵ����  ������ �����б� ��ȫһ�³�Ϊ��д
*/
#include <iostream>
#include <string>
using namespace std;
class Animal
{
public:
	virtual void speak()
	{
		cout << "������˵��" << endl;
	}
};

class Cat :public Animal
{
public:
	void speak()
	{
		cout << "������" << endl;
	}
};

class Dog :public Animal
{
public:

	void speak()
	{
		cout << "������" << endl;
	}

};

void DoSpeak(Animal & animal)
{
	animal.speak();
}

void test()
{
	Cat cat;
	DoSpeak(cat);


	Dog dog;
	DoSpeak(dog);
}


int main() 
{

	test();

	system("pause");

	return 0;
}