/* ****************************************************************
                         sizeof �ؼ���
���ã���ĳһ���������ͻ�ĳһ�������ڴ�����ռ�ռ���ֽ�����

�﷨��  sizeof (������/��������)

***************************************************************** */
#include <iostream>
using namespace std;
int main()
{
	long int along; //�������along
	cout << "��������	������ռ�ڴ�ռ�"  << endl;
	cout << "short int\t\t" << sizeof(short int) << endl;
	cout << "int		\t" << sizeof(int) << endl;
	cout << "float		\t" << sizeof(float) << endl;
	cout << "char		\t" << sizeof(char) << endl;  //�鿴����������ռ�ڴ��е��ֽ�����

	cout << "long int	\t" << sizeof(along) << endl; //�鿴������ռ�ڴ��е��ֽ�����

	system("pause");
	return 0;
}