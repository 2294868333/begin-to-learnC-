/*
���鰸��
*/

/*
//����1--��ֻС�������
#include <iostream>
using namespace std;
int main()
{
	//����һ�����飬��¼��ֻС������
	int arr[] = { 300,350,200,500,400 };
	//�Ƚϳ�������
	int max = 0;
	for (int i = 0; i < 5; i++)
	{
		
		if (max < arr[i])
		{
			max = arr[i];
		}
	}
	cout << "���ص�С�������� �� " << max << endl;
	system("pause");
	return 0;
}
*/
/*
//����2--����Ԫ������
#include<iostream>
using namespace std;
int main()
{
	//������Ԫ������
	int arr[5] = { 1,2,3,4,5 };
	//������Ԫ������
	int start = 0; //��ʼԪ���±�
	int end = sizeof(arr) / sizeof(arr[0])-1;  //ĩβԪ���±�
	int temp = 0;
	while (start < end)
	{
		temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;

		start++; end--;
	}
	cout << "���ú������Ϊ��";
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << '	';
	}
	system("pause");
	return 0;
}
*/

//��ά���鰸��--���Գɼ�ͳ��
#include <iostream>
using namespace std;
#include <string>
int main()
{
	//��������
	int score[3][3] =
	{
		{100,100,100},
		{90,50,100},
		{60,70,80},
	};
	string name[] = {"����	","����	","����	" };
	string subject[] = {"����	","��ѧ	","Ӣ��" };
	for (int i = 0; i < 3; i++)
	{
		int sum;
		cout << name[i];
		for (int j = 0; j < 3; j++)
		{
			cout <<score[i][j]<<'	' ;
		}
		cout << endl;
		
	}

	system("pause");
	return 0;
}

