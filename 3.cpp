#include<iostream.h>
void main()
{
	const double PI = 3.1415926535898;
	double radius;
	double arear;
	double circumference;
	cout <<"����뾶��";
	cin >> radius;
	arear = PI*radius*radius;
	circumference = 2.0*PI*radius;
	cout << "Բ���Ϊ��" << arear << endl;
	cout << "Բ���ܳ���" << circumference << endl;
}