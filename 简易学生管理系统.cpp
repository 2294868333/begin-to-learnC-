//ʵ��----����ѧ������ϵͳ��������ϰ��
//
#include<iostream>
using namespace std;
enum sport         //����ö������-�����ɼ� ���� ���� �е� ���� ������
{
	excellence,
	good,
	middle,
	pass,
	failure
};
struct date        //����ṹ��-�� �� ��
{
	int year;
	int month;
	int day;
};
struct student     // ����ṹ��-ѧ��������Ϣ
{
	char name[8];    //����
	long long  num;        //ѧ��
	bool sex;        //�Ա�
	date birth;      //��������
	float culture;   //�Ļ��γɼ�
	float specialty; //רҵ�γɼ�
	sport sports;    //�����γɼ�
};
int main()
{
	student st1, st2;   //���������ṹ�����             
	cout << "������Ϣ��" << endl;
	cout << "	������" ;
	cin >> st1.name;        //�ڽṹ����Ѱ�� char name
	cout << "	ѧ��: " ;
	cin >> st1.num;         //�ڽṹ����Ѱ��long long num
	
	// ����bool�ͱ��� ����ֱ�ӽ������  ��bool���ͽ��б任
	cout << "	��(1)Ů(0)��" ;    
	int temp;
	cin >> temp;
	st1.sex = (temp != 0 ? true : false);   
	
	cout << "	��������:" ;
	cin >> st1.birth.year >> st1.birth.month >> st1.birth.day;
	cout << "	�Ļ��γɼ���" ;
	cin >> st1.culture;
	cout << "	רҵ�γɼ���" ;
	cin >> st1.specialty;
	
	// ����enum�ͱ���Ҳ����ֱ�ӽ�������/���  ��Ҫ��ö���ͽ��б任
	cout << "	�����γɼ�(0:����,1:����;2:�е�;3:����;4:������)��";
	cin >> temp;
	st1.sports = (temp == 0 ? excellence : (temp == 1 ? good : (temp == 2 ? middle : (temp == 3 ? pass : failure))));

	st2 = st1;
	cout << "��������" << endl;
	cout << "	������" << st2.name << endl;
	cout << "	ѧ��: " << st2.num << endl;
	cout << "	�Ա�" << (st2.sex == true ? "��":"Ů") << endl;   //����st1���Ѿ��жϳ� ����1��0��-���ture��false��; ��st2���ж�st1������� ture-�У�����false��- Ů��
	cout << "	���գ�" << st2.birth.year<<"-"<< st2.birth.month<<"-"<<st2.birth.day << endl;
	cout << "	�Ļ��γɼ���" << st2.culture << endl;
	cout << "	רҵ�γɼ���" << st2.specialty << endl;
	cout << "	�����γɼ���" << (st2.sports == excellence ? "����" : (st2.sports == good ? "����" : (st2.sports == middle ? "�е�" : (st2.sports == pass ? "����" : (st2.sports == failure ? "������" : "����"))))) << endl;

	//����st1���Ѿ��жϳ� ����0-���excellence; ��st2���ж�st1������� excellence-���㣻


}