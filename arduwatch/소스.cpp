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
	asdf.Skill_Set(3, 5, 78, 7);
	cout << "============================================="<<endl;
	cout << "��ų�Ŀ�=" << asdf.Skill_Show_Power() << endl;
	cout << "��ų��ٿ�=" << asdf.Skill_Show_Cooldown() << endl;
	cout << "��ųī��Ʈ=" << asdf.Skill_Show_Count() << endl;
	cout << "��ųŸ��=" << asdf.Skill_Show_Type() << endl;
	cout << "=============================================" << endl;
	system("pause");
	
}