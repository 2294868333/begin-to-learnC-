/*
��ͨ�����뺯��ģ��ĵ��ù���

���ù������£�
1. �������ģ�����ͨ����������ʵ�֣����ȵ�����ͨ����
2. ����ͨ����ģ������б���ǿ�Ƶ��ú���ģ��
3. ����ģ��Ҳ���Է�������
4. �������ģ����Բ������õ�ƥ��,���ȵ��ú���ģ��

ע�⣺��Ȼ�ṩ�˺���ģ�壬��þͲ�Ҫ�ṩ��ͨ�������������׳��ֶ�����

*/
#include <iostream>
using namespace std;
template<typename T>
void disp1(int  a, int  b)
{
	cout << "��ͨ��������" << endl;
}
template<typename T>
void disp1(T a, T b)
{
	cout << "����ģ�����" << endl;
}
template<typename T>
void disp1(T a, T b, T c)
{
	cout << "��������ģ��ĵ���" << endl;
}
void test()
{
	int a = 10;
	int b = 20;
	disp1(a, b);
	disp1<>(a, b);
	int c = 30;
	disp1(a, b, c);
	char c1 = 'a';
	char c2 = 'b';
	disp1(c1, c2);
}
int main()
{
	test();
	system("pause");
	return 0;
}