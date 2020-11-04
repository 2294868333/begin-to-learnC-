/*
��̬������-������װ
����������
������Ҫ��ɲ���Ϊ CPU�����ڼ��㣩���Կ���������ʾ�����ڴ��������ڴ洢��
��ÿ�������װ��������࣬�����ṩ��ͬ�ĳ���������ͬ�����������Intel���̺�Lenovo����
�����������ṩ�õ��Թ����ĺ��������ҵ���ÿ����������Ľӿ�
����ʱ��װ��̨��ͬ�ĵ��Խ��й���
*/
#include <iostream>
#include <string>
using namespace std;
//CPU������
class CPU
{
public:
	virtual void calculate() = 0;
};
//�Կ�������
class videocard
{
public:
	virtual void display() = 0;
};
//�ڴ���������
class memary
{
public:
	virtual void storage() = 0;
};
//Intel��
class IntelCpu : public CPU
{
public:
	void calculate()
	{
		cout << "Intel ��cpu��ʼ������" << endl;
	}
};
class Intelvideocard : public videocard
{
public:
	void display()
	{
		cout << "Intel ���Կ���ʼ������" << endl;
	}
};
class Intelmemary : public memary
{
public:
	void storage()
	{
		cout << "Intel ���ڴ�����ʼ������" << endl;
	}
};
//Lenovo��
class LenovoCpu : public CPU
{
public:
	void calculate()
	{
		cout << "Lenovo ��cpu��ʼ������" << endl;
	}
};
class Lenovovideocard : public videocard
{
public:
	void display()
	{
		cout << "Lenovo ���Կ���ʼ������" << endl;
	}
};
class Lenovomemary : public memary
{
public:
	void storage()
	{
		cout << "Lenovo ���ڴ�����ʼ������" << endl;
	}
};

//����������
class computer
{
private:
	CPU *m_cpu;
	videocard *m_vdc;
	memary *m_mem;
public:
	//���캯��
	computer(CPU *cpu, videocard *vdc, memary *mem)
	{
		m_cpu = cpu;
		m_vdc = vdc;
		m_mem = mem;
	}
	//���ú����ӿ�
	void dowark()
	{
		m_cpu->calculate();
		m_vdc->display();
		m_mem->storage();
	}
	//��������
	~computer()
	{
		if (m_cpu != NULL)
		{
			delete m_cpu;
			m_cpu = NULL;
		}
		if (m_vdc != NULL)
		{
			delete m_vdc;
			m_vdc = NULL;
		}
		if (m_vdc != NULL)
		{
			delete m_vdc;
			m_vdc = NULL;
		}
	}
};
void test()
{
	//��װ����1
	computer *computer1 = new computer(new IntelCpu, new Intelvideocard, new Intelmemary);
	computer1->dowark();
	delete computer1;
	cout << "--------------" << endl;
	//��װ����2
	computer *computer2 = new computer(new LenovoCpu, new Lenovovideocard, new Lenovomemary);
	computer2->dowark();
	delete computer2;
}
int main()
{
	test();
	system("pause");
	return 0;
}