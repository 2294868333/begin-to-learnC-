/*
�ṹ������������
���ã����ṹ����Ϊ���������д���
���ݷ�ʽ��
ֵ���ݣ�����ı�ʵ��
��ַ���ݣ���ı�ʵ�Σ�ʵ�κ��βι���һ���ڴ�ռ䣩
*/

#include <iostream>
using namespace std;
#include <string>

//����һ���ṹ�����
struct student
{
	string name; //����
	int num; //����
	float score; //����
};
//���庯����
//ֵ����
void printStudent1(struct student s)
{
	cout << "����������ʾ��" << "������" << s.name << "	" << "���䣺" << s.num << "	" << "������" << s.score << endl;
}
//��ַ����
void printStudent2(struct student *s)
{
	s->name = "���";
	cout << "����������ʾ��" << "������" << s->name << "	" << "���䣺" << s->num << "	" << "������" << s->score << endl;
}
int main()
{
	student s;
	s.name = "�Ժ���";
	s.num = 21;
	s.score = 100;
	printStudent1(s);
	printStudent2(&s);
	cout <<"����������ʾ��"<< "������" << s.name << "	" << "���䣺" << s.num << "	" << "������" << s.score << endl;

	system("pause");
	return 0;
}