/*
ָ������
�﷨��
�������� *������[���鳤��];
*/
//��������Ԫ�صĴ�С������Ԫ�ص�ַ��������ð������
#include <iostream>
using namespace std;
//����һ��ָ�����͵�ð��������
void maopao(int *str[], int n)
{
	for (int i = 0; i < n-1; i++)
	{
		for (int j = 0; j < n - i - 1; j++)
		{
			int t;
			if (*str[j] > *str[j + 1])
			{
				t = *str[j];
				*str[j] = *str[j + 1];
				*str[j + 1] = t;
			}

		}
	}
}

int main()
{
	int a[10] = { 12,54,86,97,13,34,11,65,45,5 };
	int *p[10];
	for (int i = 0; i < 10; i++)
	{
		p[i] = &a[i];
	}
	maopao(p,10);
	cout << "�����:" << endl;
	for (int j = 0; j < 10; j++)
	{
		cout << *p[j] << "	";
	}

	system("pause");
	return 0;
}