#include <iostream>
#include "arduwatch.h"


using namespace std;

void main()
{	
	cout << "==============���ֿ�ġ �׽�Ʈ================" << endl;
	Hero park;
	cout << "hp=" << park.Hero_print_HP_Now()<<endl;
	cout << "���=" << park.Hero_print_ReviveCount() << endl;
	cout << "============�����ʱ⼳�� �׽�Ʈ==============" << endl;
	park.Hero_Set(10,10);
	cout << "hp=" << park.Hero_print_HP_Now() << endl;
	cout << "���=" << park.Hero_print_ReviveCount() << endl;
	cout << "============���������Լ��׽�Ʈ===============" << endl;
	Skill asdf;
	cout << "��ų�Ŀ�=" << asdf.Skill_print_Power() << endl;
	cout << "��ų��ٿ�=" << asdf.Skill_print_Cooldown() << endl;
	cout << "��ųī��Ʈ=" << asdf.Skill_print_Count() << endl;
	cout << "��ųŸ��=" << asdf.Skill_print_Type() << endl;
	asdf.Skill_Set(20,20,20,Skill_Type_RivivialPlus);
	cout << "=============��ų �ʱ⼳���׽�Ʈ============="<<endl;
	cout << "��ų�Ŀ�=" << asdf.Skill_print_Power() << endl;
	cout << "��ų��ٿ�=" << asdf.Skill_print_Cooldown() << endl;
	cout << "��ųī��Ʈ=" << asdf.Skill_print_Count() << endl;
	cout << "��ųŸ��=" << asdf.Skill_print_Type() << endl;
	cout << "============��ų�����Լ��׽�Ʈ===============" << endl;
	Wepon assult;
	cout << "�����Ŀ�" << assult.Wepon_print_Power() << endl;
	cout << "����������" << assult.Wepon_print_Reload() << endl;
	cout << "����źâ" << assult.Wepon_print_Magazine() << endl;
	cout << "�߻�ӵ�" << assult.Wepon_print_Speed() << endl;
	cout << "============�����ʱ⼳���׽�Ʈ===============" << endl;
	assult.Wepon_Set(30,5,100,5000,30);
	cout << "�����Ŀ�" << assult.Wepon_print_Power() << endl;
	cout << "����������" << assult.Wepon_print_Reload() << endl;
	cout << "����źâ" << assult.Wepon_print_Magazine() << endl;
	cout << "�߻�ӵ�" << assult.Wepon_print_Speed() << endl;
	cout << "============���⼳���Լ��׽�Ʈ===============" << endl;
	Game qwerty;
	system("pause");
	
}