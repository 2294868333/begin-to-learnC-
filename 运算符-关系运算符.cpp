/* ***********************************************************************
						     �����
���ã�����ִ�д��������

					  ��ϵ���Ƚϣ������
���ã����ڱ��ʽ�ıȽϣ�������һ����ֵ���ֵ��
������==����=��<��>��<=��>=

************************************************************************* */
#include<iostream>
using namespace std;
int main()
{
	int num1, num2,flag;
	cout << "������ֵ num1 = " << endl;
	cin >> num1;
	cout << "num1 = " << num1 << endl;
	cout << "������ֵ num2 = " << endl;
	cin >> num2;
	cout << "num2 = " << num2 << endl;

	//  ==
	flag = num1 == num2;
	cout << "num1 ���� num2?" << endl <<"�ǣ�1����0����"<< flag << endl;
	//  !=
	cout << "num1 ������ num2?" << endl << "�ǣ�1����0����" <<  (num1 != num2) << endl;   //���������ʱֱ������ ����С������ס��ϵ���ʽ��
	//  <
	flag = num1 < num2;
	cout << "num1 С�� num2?" << endl << "�ǣ�1����0����" << flag << endl;
	//  >
	flag = num1 > num2;
	cout << "num1 ���� num2?" << endl << "�ǣ�1����0����" << flag << endl;
	//  <=
	flag = num1 <= num2;
	cout << "num1 С�ڵ��� num2?" << endl << "�ǣ�1����0����" << flag << endl;
	//  >=
	flag = num1 >= num2;
	cout << "num1 ���ڵ��� num2?" << endl << "�ǣ�1����0����" << flag << endl;

	system("pause");
	return 0;
}