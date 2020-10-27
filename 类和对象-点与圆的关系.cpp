#include <iostream>
using namespace std;
const double PI = 3.14;
//#include "point.h"
//#include "circle.h"

//����һ������
class Point
{
private:
	int m_X;//X����
	int m_Y;//Y����
public:
	//д����
	void writeX(int w_X)
	{
		m_X = w_X;
	}
	void writeY(int w_Y)
	{
		m_Y = w_Y;
	}
	//������
	int readX()
	{
		return m_X;
	}
	int readY()
	{
		return m_Y;
	}
};

//����һ��Բ��
class Circle
{
private:
	int m_R;//�뾶
	Point m_center;//Բ��
public:
	//дԲ��
	void writeCenter(Point center)
	{
		m_center = center;
	}
	//��ȡԲ��
	Point readCenter()
	{
		return m_center;
	}

	//д�뾶
	void writeR(int w_R)
	{
		m_R = w_R;
	}
	//��ȡ�뾶
	int readR()
	{
		return m_R;
	}
};
//����㵽ֱ�߾���ȫ�ֺ���
//�����жϵ��Բ��ϵ
void isInCircle(Circle &c, Point &p)
{
	//��������֮�����
	int pdistance = (c.readCenter().readX() - p.readX()) * (c.readCenter().readX() - p.readX()) + (c.readCenter().readY() - p.readY()) * (c.readCenter().readY() - p.readY());
	int rdistance = c.readR() * c.readR();

	if (pdistance == rdistance)
	{
		cout << "����Բ��" << endl;
	}
	else if (pdistance > rdistance)
	{
		cout << "����Բ��" << endl;
	}
	else
	{
		cout << "����Բ��" << endl;
	}
}
int main()
{
	//ʵ����һ��Բ
	Circle c;
	//���ð뾶
	c.writeR(10);
	//����Բ��
	Point center;
	center.writeX(10);
	center.writeY(0);
	c.writeCenter(center);

	//ʵ����һ����
	Point p;
	p.writeX(10);
	p.writeY(10);

	isInCircle(c, p);

}
