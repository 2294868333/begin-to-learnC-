/*
ͨѶ¼��һ�����Լ�¼���ˡ�������Ϣ�Ĺ��ߡ�
���̳���Ҫ����C++��ʵ��һ��ͨѶ¼����ϵͳ
ϵͳ����Ҫʵ�ֵĹ������£�

* �����ϵ�ˣ���ͨѶ¼��������ˣ���Ϣ�������������Ա����䡢��ϵ�绰����ͥסַ������¼1000��
* ��ʾ��ϵ�ˣ���ʾͨѶ¼��������ϵ����Ϣ
* ɾ����ϵ�ˣ�������������ɾ��ָ����ϵ��
* ������ϵ�ˣ����������鿴ָ����ϵ����Ϣ
* �޸���ϵ�ˣ��������������޸�ָ����ϵ��
* �����ϵ�ˣ����ͨѶ¼��������Ϣ
* �˳�ͨѶ¼���˳���ǰʹ�õ�ͨѶ¼

*/
#include <iostream>
using namespace std;
#include <string>
#define  MAX  1000
//�������˵�������
void Menu()
{
	cout << "***********���˵�**********" << endl;
	cout << "*****  1�������ϵ��  *****" << endl;
	cout << "*****  2����ʾ��ϵ��  *****" << endl;
	cout << "*****  3��ɾ����ϵ��  *****" << endl;
	cout << "*****  4��������ϵ��  *****" << endl;
	cout << "*****  5���޸���ϵ��  *****" << endl;
	cout << "*****  6�������ϵ��  *****" << endl;
	cout << "*****  0���˳�ͨѶ¼  *****" << endl;
	cout << "***************************" << endl;
}
//������ϵ�˽ṹ��
struct people
{
	//����
	string name;
	//�Ա�
	string sex;
	//����
	int age;
	//��ϵ�绰
	string phone;
	//��ͥסַ
	string address;
};
//����ͨѶ¼�ṹ��
struct Addressbooks
{
	struct people peopleArray[MAX]; //ͨѶ¼�б������ϵ������
	int sum;//ͨѶ¼������
};

//���������ϵ�˺�����
void addpeople(struct Addressbooks *abs )
{
	if (abs->sum == MAX)
	{
		cout << "��ϵ���������޷����!" << endl;
		return;
	}
	else
	{
		//��������
		cout << "������������" << endl;
		string  name;
		cin >> name;
		abs->peopleArray[abs->sum].name = name;
		//�����Ա�
		cout << "�������Ա�" << endl;
		string sex;
		cin>> sex;
		abs->peopleArray[abs->sum].sex = sex;
		//��������
		cout << "���������䣺" << endl;
		int age;
		cin >> age;
		abs->peopleArray[abs->sum].age = age;
		//������ϵ�绰
		cout << "��������ϵ�绰��" << endl;
		string phone;
		cin >> phone;
		abs->peopleArray[abs->sum].phone = phone;
		//�����ͥסַ
		cout << "�������ͥסַ��" << endl;
		string address;
		cin >> address;
		abs->peopleArray[abs->sum].address = address;

		//ͨѶ¼������һ
		abs->sum++;
		cout << "��ӳɹ�" << endl;
		system("pause");
		system("cls");

	}
}
//������ʾ��ϵ�˺�����
void dispeople(Addressbooks *abs)
{
	if (abs->sum == 0)
	{
		cout << "����ϵ��" << endl;
	}
	else
	{
		cout <<"���"<<"	����" << "	�Ա�" << "	����" << "	��ϵ��ʽ" << "	��ͥ��ַ" << endl;
		for (int i = 0; i < abs->sum; i++)
		{
			cout << i << "	" << abs->peopleArray[i].name << "	" << abs->peopleArray[i].sex << "	" << abs->peopleArray[i].age << "	" << abs->peopleArray[i].phone << "	" << abs->peopleArray[i].address << endl;
		}
	}
	system("pause");
	system("cls");
}

int main()
{
	//����ͨѶ¼�ṹ�����
	Addressbooks abs;
	//����ͨѶ¼��ʼ����ϵ��
	abs.sum = 0;
	//����˵�ѡ��ϵͳ
	int a = 0;
	while (true)
	{
		Menu();

		cout << "��������Ҫִ�еĲ�����" << endl;
		cin >> a;

		switch (a)
		{
			case 0:
				cout << "��ӭ�´�ʹ��" << endl;
				system("pause"); 
				return 0;
				break;
			case 1:addpeople(&abs); break;
			case 2:dispeople(&abs); break;
			case 3: break;
			case 4: break;
			case 5: break;
			case 6: break;
			default:break;
		}
	}
	system("pause");
	return 0;
}