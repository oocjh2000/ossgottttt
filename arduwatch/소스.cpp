#include <iostream>
#include "arduwatch.h"


using namespace std;

void main()
{	
	cout << "==============운주워치 테스트================" << endl;
	Hero park;
	cout << "hp=" << park.Hero_Show_HP_Now()<<endl;
	cout << "목숨=" << park.Hero_Show_ReviveCount() << endl;
	cout << "============영웅초기설정 테스트==============" << endl;
	park.Hero_Set(10,10);
	cout << "hp=" << park.Hero_Show_HP_Now() << endl;
	cout << "목숨=" << park.Hero_Show_ReviveCount() << endl;
	cout << "============영웅설정함수테스트===============" << endl;
	Skill asdf(1,2,3,4);
	cout << "스킬파워=" << asdf.Skill_Show_Power() << endl;
	cout << "스킬쿨다운=" << asdf.Skill_Show_Cooldown() << endl;
	cout << "스킬카운트=" << asdf.Skill_Show_Count() << endl;
	cout << "스킬타입=" << asdf.Skill_Show_Type() << endl;
	asdf.Skill_Set(3, 5, 78, 7);
	cout << "============================================="<<endl;
	cout << "스킬파워=" << asdf.Skill_Show_Power() << endl;
	cout << "스킬쿨다운=" << asdf.Skill_Show_Cooldown() << endl;
	cout << "스킬카운트=" << asdf.Skill_Show_Count() << endl;
	cout << "스킬타입=" << asdf.Skill_Show_Type() << endl;
	cout << "=============================================" << endl;
	system("pause");
	
}