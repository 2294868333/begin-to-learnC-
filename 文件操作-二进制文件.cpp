/*
�ļ�����
��������ʱ���������ݶ�������ʱ���ݣ�����һ�����н������ᱻ�ͷ�
ͨ���ļ����Խ����ݳ־û�
C++�ж��ļ�������Ҫ����ͷ�ļ� < fstream >

�ļ����ͷ�Ϊ���֣�

1. �ı��ļ� - �ļ����ı���ASCII����ʽ�洢�ڼ������
2. �������ļ� - �ļ����ı��Ķ�������ʽ�洢�ڼ�����У��û�һ�㲻��ֱ�Ӷ�������
�����ļ���������:

1. ofstream��д����
2. ifstream�� ������
3. fstream �� ��д����

�������ļ�
�Զ����Ƶķ�ʽ���ļ����ж�д����
�򿪷�ʽҪָ��Ϊ ios::binary

д�ļ�

�����Ʒ�ʽд�ļ���Ҫ������������ó�Ա����write
����ԭ�� ��ostream& write(const char * buffer,int len);
�������ͣ��ַ�ָ��bufferָ���ڴ���һ�δ洢�ռ䡣len�Ƕ�д���ֽ���

���ļ�

�����Ʒ�ʽ���ļ���Ҫ������������ó�Ա����read
����ԭ�ͣ�`istream& read(char *buffer,int len);`
�������ͣ��ַ�ָ��bufferָ���ڴ���һ�δ洢�ռ䡣len�Ƕ�д���ֽ���

*/
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
class Person
{
public:
	char m_name[1024];
	int m_age;
};
void test()
{
	////�������������
	//ofstream ofs("person.txt", ios::out | ios::binary);
	//Person p = { "����"  , 18 };
	////д�ļ�
	//ofs.write((const char *)&p, sizeof(p));
	////�ر��ļ�
	//ofs.close();


	//3�����ļ�
	ifstream ifs;
	ifs.open("person.txt", ios::in | ios::binary);
	if ( !ifs.is_open() )
	{
		cout << "���ļ�ʧ��" << endl;
	}
	Person p;
	ifs.read((char *)&p, sizeof(p));

	cout << "������ " << p.m_name << " ���䣺 " << p.m_age << endl;


}
int main()
{
	test();
	system("pause");
	return 0;
}