#include <iostream>
#include "arduwatch.h"


using namespace std;

void main()
{	
	cout << "==============���ֿ�ġ �׽�Ʈ================" << endl;
	Hero park;
	cout << "hp=" << park.Hero_Show_HP_Now()<<endl;
	cout << "���=" << park.Hero_Show_ReviveCount() << endl;
	cout << "============�����ʱ⼳�� �׽�Ʈ==============" << endl;
	park.Hero_Set(10,10);
	cout << "hp=" << park.Hero_Show_HP_Now() << endl;
	cout << "���=" << park.Hero_Show_ReviveCount() << endl;
	cout << "============���������Լ��׽�Ʈ===============" << endl;
	Skill asdf(1,2,3,4);
	cout << "��ų�Ŀ�=" << asdf.Skill_Show_Power() << endl;
	cout << "��ų��ٿ�=" << asdf.Skill_Show_Cooldown() << endl;
	cout << "��ųī��Ʈ=" << asdf.Skill_Show_Count() << endl;
	cout << "��ųŸ��=" << asdf.Skill_Show_Type() << endl;
	asdf.Skill_Set();
	cout << "=============��ų �ʱ⼳���׽�Ʈ============="<<endl;
	cout << "��ų�Ŀ�=" << asdf.Skill_Show_Power() << endl;
	cout << "��ų��ٿ�=" << asdf.Skill_Show_Cooldown() << endl;
	cout << "��ųī��Ʈ=" << asdf.Skill_Show_Count() << endl;
	cout << "��ųŸ��=" << asdf.Skill_Show_Type() << endl;
	cout << "============��ų�����Լ��׽�Ʈ===============" << endl;
	Wepon assult;
	cout << "�����Ŀ�" << assult.Wepon_Show_Power() << endl;
	cout << "����������" << assult.Wepon_Show_Reload() << endl;
	cout << "����źâ" << assult.Wepon_Show_Magazine() << endl;
	cout << "�߻�ӵ�" << assult.Wepon_Show_Speed() << endl;
	cout << "============�����ʱ⼳���׽�Ʈ===============" << endl;
	assult.Wepon_Set(30,5,100,5000);
	cout << "�����Ŀ�" << assult.Wepon_Show_Power() << endl;
	cout << "����������" << assult.Wepon_Show_Reload() << endl;
	cout << "����źâ" << assult.Wepon_Show_Magazine() << endl;
	cout << "�߻�ӵ�" << assult.Wepon_Show_Speed() << endl;
	cout << "============���⼳���Լ��׽�Ʈ===============" << endl;
	system("pause");
	
}