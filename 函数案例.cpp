//����ѧ������ ���� ѧ�� �ɼ� ����ѧ�����ճɼ�������������

#include<iostream>
using namespace std;
int n;
//����ѧ���Ľṹ��
struct student
{
	long long num;
	char name[10];
	float score;
};
student stu[];
int main()
{
	student stu[3];
	cout << "������ѧ���������3�ˣ�";
	cin >> n;
	if (n > 3 || n < 0)
	{
		cout << "�������ѧ����������" << endl;
	}
	else
	{
		for (int i = 0; i < n; i++)
		{
			cout << "������ ���� ѧ�� �ɼ���" << endl;
			cin >> stu[i].name >> stu[i].num >> stu[i].score ;
		}
		void maopao(student stu[3], int n); //����ð������
		cout << "****************�����****************" << endl;
		cout <<" ����"<<'	'<<"   ѧ��"<<'	'<<'	'<<"�ɼ�" << endl;
		for (int j = 0; j < n; j++)
		{

			cout << stu[j].name <<"	"<< stu[j].num <<"	"<< stu[j].score <<"	"<< endl;;
		}

	}
	system("pause");
	return 0;
}

//����ð������
void maopao(student stu[], int n)
{
	int temp;
	for (int i = 0; i < n-1; i++)
	{
		for (int j = 0; j < n - i - 1; j++)
		{
			if (stu[j].score > stu[j + 1].score)
			{
				temp = stu[j].score;
				stu[j].score = stu[j + 1].score;
				stu[j + 1].score = temp;
			}
		}
	}
}