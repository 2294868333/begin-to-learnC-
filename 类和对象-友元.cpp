/*
��Ԫ

�ڳ������Щ˽������ Ҳ�������������һЩ������������з��ʣ�����Ҫ�õ���Ԫ�ļ���
��Ԫ��Ŀ�ľ�����һ������������ ������һ������˽�г�Ա

��Ԫ�Ĺؼ���Ϊ friend

��Ԫ������ʵ�֣�
ȫ�ֺ�������Ԫ
������Ԫ
��Ա��������Ԫ

*/

/*
//ȫ�ֺ�������Ԫ
#include <iostream>
using namespace std;
#include <string>
class Building
{
	//���߱����� goodGayȫ�ֺ��� �� Building��ĺ����ѣ����Է������е�˽������
	friend void goodGay();
private:
	string m_BedRoom; // ����
public:
	string m_SittingRoom; //����

	//���캯�� ����ֵ
	Building()
	{
		m_BedRoom = "����";
		m_SittingRoom = "����";
	}

};
void goodGay()
{
	Building building;
	cout << "�û������ڷ���:" << building.m_SittingRoom << endl;
	cout << "�û������ڷ���:" << building.m_BedRoom << endl;
}
int main()
{
	goodGay();
	system("pause");
	return 0;
}
*/
/*
//������Ԫ
#include <iostream>
using namespace std;
#include <string>

class Building
{
	friend class goodGay;

private:
	string m_BedRoom; // ����
public:
	string m_SittingRoom; //����

	//���캯�� ����ֵ
	Building()
	{
		m_BedRoom = "����";
		m_SittingRoom = "����";
	}
};

class goodGay
{
//private:
//	Building *building;
public:
	 Building building;
	//goodGay()
	//{
	//	building = new Building;
	//}

	void visit()
	{
		cout << "�û������ڷ���:" << building.m_SittingRoom << endl;

		cout << "�û������ڷ���:" << building.m_BedRoom<< endl;
	}
};

void test()
{
	goodGay gg;
	gg.visit();
}
int main()
{
	test();
	system("pause");
	return 0;
}
*/

//��ĳ�Ա������Ԫ
#include <iostream>
using namespace std;
#include <string>
class Building;
class goodGay
{
public:

	goodGay();
	void visit(); //ֻ��visit������ΪBuilding�ĺ����ѣ����Է�����Building��˽������
	void visit2();

private:
	Building *building;
};


class Building
{
	//���߱�����  goodGay���е�visit��Ա���� ��Building�����ѣ����Է���˽������
	friend void goodGay::visit();

public:
	Building();

public:
	string m_SittingRoom; //����
private:
	string m_BedRoom;//����
};

Building::Building()
{
	this->m_SittingRoom = "����";
	this->m_BedRoom = "����";
}

goodGay::goodGay()
{
	building = new Building;
}

void goodGay::visit()
{
	cout << "�û������ڷ���" << building->m_SittingRoom << endl;
	cout << "�û������ڷ���" << building->m_BedRoom << endl;
}

void goodGay::visit2()
{
	cout << "�û������ڷ���" << building->m_SittingRoom << endl;
	//cout << "�û������ڷ���" << building->m_BedRoom << endl;
}

void test01()
{
	goodGay  gg;
	gg.visit();

}

int main() {

	test01();

	system("pause");
	return 0;
}
```


