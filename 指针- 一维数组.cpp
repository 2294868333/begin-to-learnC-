/*
ָ��������
���ã�����ָ�����������Ԫ��
ָ����һά����
1.�����ָ�뼴�������������ڴ��е���ʼ��ַ
2.��������������洢���׵�ַ

*/
/*
#include <iostream>
using namespace std;
int main()
{
	//��������
	int str[] = { 1,2,3,4,5,6,7,8,9,10 };
	cout <<"�鿴����ĵ�һ��Ԫ�أ�"<< str[0] << endl;
	//����һ��ָ����� ʹ��ָ������
	int *p = str;
	cout << "����ָ��鿴����ĵ�һ��Ԫ�صĵ�ַ��" << *p << endl;
	int *p1 = str;
	cout << "����ָ���������Ԫ�أ�" << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << *p1 << endl;
		p1++;
	}
	system("pause");
	return 0;
}
*/
/*
#include <iostream>
using namespace std;
int main()
{
	
	//1.�����ָ�뼴�������������ڴ��е���ʼ��ַ
	int str[10];
	int *p;
	p = str;  //��������������洢���׵�ַ
	cout << "����ĵ�ַ��" << str << endl;
	cout << "ͨ��ָ��������飺" << p << endl;
	system("pause");
	return 0;
}
*/

//���� -- ���������ȫ��Ԫ��
#include <iostream>
using namespace  std;
int main()
{
	/*
	//�±귨
	int str[10];
	for (int i = 0; i < 10; i++)
	{
		str[i] = 2 * (i + 1);
		cout << str[i] << "	" ;
	}
	cout << endl;
	*/

	/*
	//ͨ����������������Ԫ�ص�ַ���ҳ�Ԫ�ص�ֵ
	int str[10];
	int *p = str;
	for (int i = 0; i < 10; i++)
	{
		*(p + i) = 2 * (i + 1);
		cout << *( p + i ) << "	";
	}
	*/

	//��ָ�����ָ������Ԫ��
	int str[10];
	int *p;
	for (int i = 0; i < 10; i++)
	{
		p = &str[i];
		*p = 2 * (i + 1);
		cout << *p << "	";
	}


	system("pause");
	return 0;
}