#include <iostream>
#include "arduwatch.h"
#include "�ҽ�.h"


using namespace std;

void main()
{	
	cout << "==============���ֿ�ġ �׽�Ʈ================" << endl;
	Hero park;
	cout << "hp=" << park.Hero_Output_HP_Now()<<endl;
	cout << "���=" << park.Hero_Output_ReviveCount() << endl;
	cout << "============�����ʱ⼳�� �׽�Ʈ==============" << endl;
	park.Hero_Set(10,10);
	cout << "hp=" << park.Hero_Output_HP_Now() << endl;
	cout << "���=" << park.Hero_Output_ReviveCount() << endl;
	cout << "============���������Լ��׽�Ʈ===============" << endl;
	Skill asdf;
	cout << "��ų�Ŀ�=" << asdf.Skill_Output_Power() << endl;
	cout << "��ų��ٿ�=" << asdf.Skill_Output_Cooldown() << endl;
	cout << "��ųī��Ʈ=" << asdf.Skill_Output_Count() << endl;
	cout << "��ųŸ��=" << asdf.Skill_Output_Type() << endl;
	asdf.Skill_Set(20,20,20,Skill_Type_RivivialPlus);
	cout << "=============��ų �ʱ⼳���׽�Ʈ============="<<endl;
	cout << "��ų�Ŀ�=" << asdf.Skill_Output_Power() << endl;
	cout << "��ų��ٿ�=" << asdf.Skill_Output_Cooldown() << endl;
	cout << "��ųī��Ʈ=" << asdf.Skill_Output_Count() << endl;
	cout << "��ųŸ��=" << asdf.Skill_Output_Type() << endl;
	cout << "============��ų�����Լ��׽�Ʈ===============" << endl;
	Wepon assult;
	cout << "�����Ŀ�" << assult.Wepon_Output_Power() << endl;
	cout << "����������" << assult.Wepon_Output_Reload() << endl;
	cout << "����źâ" << assult.Wepon_Output_Magazine() << endl;
	cout << "�߻�ӵ�" << assult.Wepon_Output_Speed() << endl;
	cout << "============�����ʱ⼳���׽�Ʈ===============" << endl;
	assult.Wepon_Set(30,5,100,5000);
	cout << "�����Ŀ�" << assult.Wepon_Output_Power() << endl;
	cout << "����������" << assult.Wepon_Output_Reload() << endl;
	cout << "����źâ" << assult.Wepon_Output_Magazine() << endl;
	cout << "�߻�ӵ�" << assult.Wepon_Output_Speed() << endl;
	cout << "============���⼳���Լ��׽�Ʈ===============" << endl;
	Game qwerty;
	system("pause");
	
}