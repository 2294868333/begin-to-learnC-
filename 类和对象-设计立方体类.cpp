/*
�����������
�����������(Cube)
������������������
�ֱ���ȫ�ֺ����ͳ�Ա�����ж������������Ƿ���ȡ�
*/
#include <iostream>
using namespace std;
//������������
class cube
{
private:
	//��
	int m_l;
	//��
	int m_w;
	//��
	int m_h;


public:

	//д������
	void writel(int w_l)
	{
		m_l = w_l;
	}
	int readl()
	{
		return m_l;
	}
	//д�����
	void writew(int w_w)
	{
		m_w = w_w;
	}

	int readw()
	{
		return  m_w;
	}
	//д�߶���
	void writeh(int w_h)
	{
		m_h = w_h;
	}
	int readh()
	{
		return m_h;
	}
	//��ȡ���
	int getarea()
	{
		return ((m_l * m_w) + (m_l * m_h) + (m_w * m_h)) * 2;
	}
	//��ȡ���
	int getvolt()
	{
		return  m_l * m_w * m_h;
	}
	//��Ա��������ȽϺ�����
	void bijiao(cube cu2)
	{
		if (m_l == cu2.readl() && m_w == cu2.readw() && m_h == cu2.readh())
		{
			cout << "������1����������2" << endl;
		}
		else
		{
			cout << "������1������������2" << endl;
		}
	}
};
//ȫ�ֺ�������ȽϺ�����
void bijiao(cube &cu1, cube &cu2)
{
	if (cu1.readl() == cu2.readl() && cu1.readw() == cu2.readw() && cu1.readh() == cu2.readh())
	{
		cout << "������1����������2" << endl;
	}
	else
	{
		cout << "������1������������2" << endl;
	}
}
int main()
{
	int w_l, w_w, w_h;
	//ʵ����������1
	cube cu1;
	cout << "������������1����";
	cin >> w_l;
	cu1.writel(w_l);
	cout << "������������1��";
	cin >> w_w;
	cu1.writew(w_w);
	cout << "������������1�ߣ�";
	cin >> w_h;
	cu1.writeh(w_h);

	cout << "������1 �����Ϊ��" << cu1.getarea() << endl;
	cout << "������1 �����Ϊ��" << cu1.getvolt() << endl;

	//ʵ����������2

	cube cu2;
	cout << "������������2����";
	cin >> w_l;
	cu2.writel(w_l);
	cout << "������������2��";
	cin >> w_w;
	cu2.writew(w_w);
	cout << "������������2�ߣ�";
	cin >> w_h;
	cu2.writeh(w_h);

	cout << "������2 �����Ϊ��" << cu2.getarea() << endl;
	cout << "������2 �����Ϊ��" << cu2.getvolt() << endl;

	cout << endl;
	//�Ƚ��������С
	bijiao(cu1, cu2);

	system("pause");
	return 0;
}