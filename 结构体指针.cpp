/*
�ṹ��ָ��
���ã�ͨ��ָ����ʽṹ���еĳ�Ա

���ò����� -> ����ͨ���ṹ��ָ����ʽṹ������

*/

#include <iostream>
using namespace std;
#include <string>
//����ṹ��
struct student
{
	string name;  //����
	int num;     //ѧ��
	float score; //����
};
int main()
{
	student s ;
	student *p = &s;
	cout << "���������� ѧ�� ������" << endl;
	cin >> s.name >> s.num >> s.score;
	cout << endl;
	for (int i = 0; i < 50; i++)
	{
		cout << "-";
	}
	cout << endl;
	cout << p->name <<"	"<< p->num <<"	"<< p->score << endl;

	system("pause");
	return 0;
}