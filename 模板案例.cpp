/*
����������

���ú���ģ���װһ������ĺ��������Զ� ��ͬ������������ ��������
�������Ӵ�С�������㷨Ϊ ѡ������ 
�ֱ����� char���� �� int���� ���в���

*/
#include <iostream>
using namespace std;
//����ģ��
template<typename T>
void mySwap(T &a, T &b)
{
	T temp = a;
	a = b;
	b = temp;
}
//����ģ��
template<typename T>
void paixu(T arr[] , int len )
{
	for (int i = 0; i < len; i++)
	{
		int max = i;  //������ͷ�����ֵ
		for (int j = i+1; j < len ; j++)
		{
			if (arr[max]<arr[j]) 
			{
				max =  j;    //��¼�����
			}
		}
		if (i != max)   //֤�����ڸ������
		{
			/*	temp = arr[i];
				arr[i] = arr[k];
				arr[k] = temp;*/
			mySwap(arr[i], arr[max]);  //���������ͷ����
		}
	}
	for (int i = 0; i < len; i++)
	{
		cout << arr[i] <<" ";
	}
	cout << endl;
}


void test()
{
	int arr[] = { 1,3,2,8,6,5,9,4,7,10 };
	int len = sizeof(arr) / sizeof(int);
	paixu(arr , len);
}
void testo1()
{
	char arr1[] = "acbedgf";
	char len = sizeof(arr1) / sizeof(char);
	paixu(arr1 , len);
}
int main()
{
	test();
	testo1();
	system("pause");
	return 0;
}