/*
ָ��ͺ���
���ã�����ָ�������������������޸�ʵ�ε�ֵ
ֵ���ݣ�����ı�ʵ��
��ַ���ݣ���ı�ʵ�Σ�ʵ�κ��βι���һ���ڴ�ռ䣩
*/
#include <iostream>
using namespace std;
void swap1(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
}
void swap2(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
int main()
{
	int a = 10;
	int b = 20;
	//ֵ����
	swap1(a, b);
	cout <<"ֵ���ݣ�"<< "a =" << a <<"	"<< "b = " << b << endl;
	//��ַ����
	swap2(&a,&b);
	cout <<"��ַ���ݣ�"<< "a =" << a << "	" << "b = " << b << endl;
	system("pause");
	return 0;
}