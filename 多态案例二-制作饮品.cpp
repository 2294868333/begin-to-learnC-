/*
��̬������-������Ʒ
����������
������Ʒ�Ĵ�������Ϊ����ˮ -  ���� - ���뱭�� - ���븨��
���ö�̬����ʵ�ֱ��������ṩ����������Ʒ���࣬�ṩ�����������ȺͲ�Ҷ
*/
#include <iostream>
using namespace std;
class yinpin
{
public:
	//������ˮ
	virtual void zhushui() = 0;
	//�������
	virtual void chongpao() = 0;
	//����ˮ
	virtual void daoshui() = 0;
	//�������
	virtual void jialiao() = 0;
	//���
	void makedrink()
	{
		 zhushui();
		 chongpao();
		 daoshui();
		 jialiao();
	}
};

//��
class tea:public yinpin
{
	virtual void zhushui()
	{
		cout << "���ˮ" << endl;
	}
	virtual void chongpao()
	{
		cout << "���ݲ�Ҷ" << endl;
	}
	virtual void daoshui()
	{
		cout << "�����ˮ" << endl;
	}
	virtual void jialiao()
	{
		cout << "�����Ҷ" << endl;
	}
};

//����
class coffic:public yinpin
{
	virtual void zhushui()
	{
		cout << "��ˮ" << endl;
	}
	virtual void chongpao()
	{
		cout << "���ݿ���" << endl;
	}
	virtual void daoshui()
	{
		cout << "���뿧��" << endl;
	}
	virtual void jialiao()
	{
		cout << "�����Ǻ�ţ��" << endl;
	}
};

void dowork(yinpin *drink)
{
	drink->makedrink();
	delete drink;
}

void test()
{
	dowork(new tea);
	cout << "--------------" << endl;
	dowork(new coffic);

}
int main()
{
	test();
	system("pause");
	return 0;
}