/*
���鰸��2
1.ð������
*/

//1.ð������
/*
#include<iostream>
using namespace std;
int main()
{
	//��������
	int a[10];
	int n;
	cout << "����ʮ������" << endl;
	for (int i = 0; i < 10; i++)
	{
		cin >> a[i];
	}
	//�ִ�
	for (int j = 0; j < 10 - 1; j++)
	{
		for (int k = 0; k < 10 - j - 1; k++)
		{
			if (a[k] > a[k + 1])
			{
				n = a[k];
				a[k] = a[k + 1];
				a[k + 1] = n;
			}
		}
	}
	cout << "����� = ";
	for (int z = 0; z < 10; z++)
	{
		cout << a[z]<<" ";
	}

	int low;
	int hight;
	int mid;
	int x;
	cout << "��������Ҫ�ҵ����ݣ�";
	cin >> x;
		low = 0;
		hight = 9;
		mid = (low + hight) / 2;
		while (x != a[mid] && low < hight)
		{
			if (x < a[mid])
			{
				hight = mid - 1;
			}
			else
			{
				low = mid + 1;
			}
			mid = (hight + low) / 2;
		}
		if (low <= hight)
		{
			cout << "��ϲ����ҳɹ����������е��±�Ϊ��" << a[mid] << endl;
		}
		else
		{
			cout << "û���ҵ������������" << endl;
		}
}
*/



