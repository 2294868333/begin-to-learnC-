/*
�ṹ������
���Զ���Ľṹ����뵽�����з���ά��
�﷨�� struct �ṹ���� ������[Ԫ�ظ���] = { {}��{}��...{}}

�ṹ����constʹ�ó���
���ã���const����ֹ�����
*/

#include <iostream>
using namespace std;
#include <string>
//����ṹ��
struct student
{
	string name;
	int age;
	int score;
};
void printstudent(const student stu[])//��const��ֹ�������е������
{
	//�����ṹ������
	//stu[0].age = 100;   ������const����
	for (int i = 0; i < 2; i++)
	{
		cout << "������" << stu[i].name << "���䣺" << stu[i].age << "������" << stu[i].score << endl;
	}
}

int main()
{
	student stu[2]
	{
		{"���", 21 ,100},
		{"�Ժ���",21,100}
	};

	//�����������

	printstudent(stu);

	system("pause");
	return 0;

}
