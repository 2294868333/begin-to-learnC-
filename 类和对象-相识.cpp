/*
�������ʱ�����԰����Ժ���Ϊ���ڲ�ͬ��Ȩ���£����Կ���
����Ȩ�������֣�
����Ȩ��  public     ���ڿ��Է���  ������Է���
����Ȩ��  protected  ���ڿ��Է���  ���ⲻ���Է���
˽��Ȩ��  private    ���ڿ��Է���  ���ⲻ���Է���

struct��class����

��C++�� struct��classΨһ�����������Ĭ�ϵķ���Ȩ�޲�ͬ

����
struct  Ĭ��Ȩ��Ϊ����
class   Ĭ��Ȩ��Ϊ˽��

��Ա��������Ϊ˽��
�ŵ�1�������г�Ա��������Ϊ˽�У������Լ����ƶ�дȨ��
�ŵ�2������дȨ�ޣ����ǿ��Լ�����ݵ���Ч��
*/

#include <iostream>
using namespace std;
#include <string>
class lei
{
public:
	//д����
	void writename(string name)
	{
		lei_name = name;
	}
	//������
	string redname()
	{
		return lei_name;
	}

	//д����
	void writeage(int age)
	{
		if (age < 0 || age>100)
		{
			cout << "������������" << endl;
		}
		lei_age = age;
	}
	//������
	int redage()
	{
		return lei_age;
	}
	//����Ȩ��
private:
	//����
	string lei_name;
	//����
	int lei_age;

};
int main()
{
	//ʵ����һ����
	lei people;

	people.writename ("�Ժ���");//	д����
	cout << "������" << people.redname() << endl;//������

	people.writeage(21);
	cout << "���䣺" << people.redage() << endl;

	system("pause");
	return 0;
}
