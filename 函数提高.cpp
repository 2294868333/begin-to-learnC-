/* ***********************************************************************************
									�������
������Ĭ�ϲ���������ȱʡֵ��ֵ�ĺ�����
�����β��б��е��β��ǿ���Ĭ�ϵ�
�﷨�� ����ֵ���� ������ ������ = Ĭ��ֵ��
		{
			���������;
		}
����������
���ã�������������ͬ����߸����ԡ�
������������������
1.ͬһ����������
2.����������ͬ
3.���������� ���Ͳ�ͬ��������ͬ��˳��ͬ

�������ص�ע�����
1.�����ķ���ֵ��������Ϊ�������ص�������
2.������Ϊ����������
3.����������������Ĭ�ϲ���
************************************************************************************* */

//���ĳ��λ���в���ֵ����ô�����λ�����󣬴������ң����붼Ҫ��Ĭ��ֵ
/*
int func(int a = 10, int b = 10,int c)
{
	return a + b;
}
*/
//�������������Ĭ��ֵ������ʵ�ֵ�ʱ��Ͳ�����Ĭ�ϲ����������ԣ�
/*
int func(int a = 10, int b = 10);//��������
int func(int a = 10, int b = 10) //ʵ�ֺ���
{
	return a + b;
}
*/

/*
int func(int a = 10, int b = 10)
{
	return a + b;
}
#include <iostream>
using namespace std;
int main()
{
	cout << func() << endl;
	system("pause");
	return 0;
}
*/

//����������
/*
#include <iostream>
using namespace std;
void func()
{
	cout << "func()�ĵ��� " << endl;
}
void func(float b)    //���Ͳ�ͬ
{
	cout << "func(float b)�ĵ��� " << endl;
}
void func(int a, int b)  //������ͬ
{
	cout << "func(int a, int b)�ĵ��� "<<endl;
}
void func(int a, double b)   //˳��ͬ
{
	cout << "func(int a, double b)�ĵ��� "<<endl;
}
void func(double b, int a)   //˳��ͬ
{
	cout << "func(double b, int a)�ĵ��� "<<endl;
}
int main()
{
	func();
	func(10.6);
	func(10, 12);
	func(10, 1.3);
	func(1.3, 10);

}
*/

/*
//������Ϊ��������
#include <iostream>
using namespace std;
void func(int &a)
{
	cout << "func(int &a)�ĵ���" << endl;
}
void func(const int &a)
{
	cout << "func(const int &a)�ĵ���" << endl;
}

int main()
{
	int a = 10;
	func(a);

	func(10);
}
*/


//����������������Ĭ�ϲ���
#include <iostream>
using namespace std;
void func(int a)
{
	cout << "func(int a)�ĵ���" << endl;
}
void func(int a, int b = 10)
{
	cout << "func(int a, int b = 10)�ĵ���" << endl;
}
int main()
{
	//func(10); ����ԭ������Ĭ��ֵ��������� �������ԣ����������⡣
	func(10,10);
}
