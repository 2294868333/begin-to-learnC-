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
//��������ϵ���Ƿ���ں�����
int isExist (Addressbooks *abs,string name)
{
		for (int i = 0; i < abs->sum; i++)
		{
			if (abs->peopleArray[i].name == name)
			{
				return i;   //��ϵ�˴��ڷ�����ϵ���������е�λ��
			}		
		}
		return -1;  //��ϵ�˲����ڷ���-1
}
//����ɾ����ϵ�˺�����
void delpeople(Addressbooks *abs)
{
	cout << "��������Ҫɾ������ϵ��" << endl;
	string name;
	cin >> name;
	int ret = isExist(abs, name);
	if (ret != -1)
	{
		cout << "�Ѳ��ҵ���ϵ�ˣ��Ƿ�ɾ����ϵ��" << endl;
		cout << "��(Y)" << endl;
		cout << "��(N)" << endl;
		string choose;
		cin >> choose;
		if (choose == "Y")
		{
			for (int i = ret; i < abs->sum; i++)
			{
				abs->peopleArray[i] = abs->peopleArray[i++];
			}
			abs->sum--;
			cout << "��ϵ����ɾ��" << endl;
		}
		if (choose == "N")
		{
			cout << "��������������˵�" << endl;
			system("cls");
		}
	}
	else
	{
		cout << "���޴���" << endl;
	}
	system("pause");
	system("cls");
}
//���������ϵ�˺�����
void forpeople(Addressbooks *abs)
{
	cout << "��������Ҫ���ҵ���ϵ��" << endl;
	string name;
	cin >> name;
	int ret = isExist(abs, name);
	if (ret != -1)
	{
		cout << "�Ѳ��ҵ���ϵ�ˣ��Ƿ���ʾ��ϵ��" << endl;
		cout << "��(Y)" << endl;
		cout << "��(N)" << endl;
		string choose;
		cin >> choose;
		if (choose == "Y")
		{
	
			cout << "������" << abs->peopleArray[ret].name << endl;
			cout << "�Ա�" << abs->peopleArray[ret].sex << endl;
			cout << "����" << abs->peopleArray[ret].age << endl;
			cout << "��ϵ��ʽ��" << abs->peopleArray[ret].phone << endl;
			cout << "��ͥ��ַ��" << abs->peopleArray[ret].address << endl;
		}
		if (choose == "N")
		{
			cout << "��������������˵�" << endl;
			system("cls");
		}
	}
	else
	{
		cout << "���޴���" << endl;
	}
	system("pause");
	system("cls");
}
//�����޸���ϵ�˺�����
void xiupeople(Addressbooks *abs)
{
	cout << "��������Ҫ���ҵ���ϵ��" << endl;
	string name;
	cin >> name;
	int ret = isExist(abs, name);
	if (ret != -1)
	{
		cout << "�Ѳ��ҵ���ϵ�ˣ��Ƿ��޸���ϵ��" << endl;
		cout << "��(Y)" << endl;
		cout << "��(N)" << endl;
		string choose;
		cin >> choose;
		if (choose == "Y")
		{
			//��������
			cout << "������������" << endl;
			string  name;
			cin >> name;
			abs->peopleArray[ret].name = name;
			//�����Ա�
			cout << "�������Ա�" << endl;
			string sex;
			cin >> sex;
			abs->peopleArray[ret].sex = sex;
			//��������
			cout << "���������䣺" << endl;
			int age;
			cin >> age;
			abs->peopleArray[ret].age = age;
			//������ϵ�绰
			cout << "��������ϵ�绰��" << endl;
			string phone;
			cin >> phone;
			abs->peopleArray[ret].phone = phone;
			//�����ͥסַ
			cout << "�������ͥסַ��" << endl;
			string address;
			cin >> address;
			abs->peopleArray[ret].address = address;

			cout << "�ѳɹ��޸�" << endl;
		}
		if (choose == "N")
		{
			cout << "��������������˵�" << endl;
			system("cls");
		}
	}
	else
	{
		cout << "���޴���" << endl;
	}
	system("pause");
	system("cls");
}
//���������ϵ�˺�����
void kongpeople(Addressbooks *abs)
{
	abs->sum = 0;
	cout << "ͨѶ¼�����" << endl;
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
			case 3:delpeople(&abs); break;
			case 4:forpeople(&abs); break;
			case 5:xiupeople(&abs); break;
			case 6:kongpeople(&abs); break;
			default:break;
		}
	}
	system("pause");
	return 0;
}