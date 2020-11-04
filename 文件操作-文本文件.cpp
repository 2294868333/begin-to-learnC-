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

�ı��ļ�
д�ļ��������£�
1. ����ͷ�ļ�
	 #include <fstream>
2. ����������
   ofstream ofs;
3. ���ļ�
   ofs.open("�ļ�·��",�򿪷�ʽ);
4. д����
   ofs << "д�������";
5. �ر��ļ�
   ofs.close();
�ļ��򿪷�ʽ��

| �򿪷�ʽ    | ����                       |
| ----------- | -------------------------- |
| ios::in     | Ϊ���ļ������ļ�         |
| ios::out    | Ϊд�ļ������ļ�         |
| ios::ate    | ��ʼλ�ã��ļ�β           |
| ios::app    | ׷�ӷ�ʽд�ļ�             |
| ios::trunc  | ����ļ�������ɾ�����ٴ��� |
| ios::binary | �����Ʒ�ʽ                 |

ע�⣺�ļ��򿪷�ʽ�������ʹ�ã�����|������
���磺�ö����Ʒ�ʽд�ļ� ios::binary |  ios:: out

���ļ���д�ļ��������ƣ����Ƕ�ȡ��ʽ����ڱȽ϶�
���ļ��������£�
1. ����ͷ�ļ�
	#include <fstream>
2. ����������
   ifstream ifs;
3. ���ļ����ж��ļ��Ƿ�򿪳ɹ�
   ifs.open("�ļ�·��",�򿪷�ʽ);
4. ������
   ���ַ�ʽ��ȡ
5. �ر��ļ�
   ifs.close();

*/
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
void test()
{
	//д�ļ�
	ofstream ofs;
	ofs.open("test.txt", ios::out);

	ofs << "����" << endl;
	ofs << "����" << endl;
	ofs << "����" << endl;

	ofs.close();
	//���ļ�
	ifstream ifs;
	ifs.open("test.txt", ios::in);

	if ( !ifs.is_open())
	{
		cout << "�ļ���ʧ��" << endl;
	}
	//����һ
	char buf[1024] = { 0 };
	while (ifs >> buf)
	{
		cout << buf << endl;
	}

	//������
	//char buf[1024] = { 0 };
	//while (ifs.getline(buf, sizeof(buf)))
	//{
	//	cout << buf << endl;
	//}
	//ifs.close();


	//������
	//string buf;
	//while (getline (ifs ,buf ))
	//{
	//	cout << buf << endl;
	//}
}
int main()
{
	test();
	system("pause");
	return 0;
}