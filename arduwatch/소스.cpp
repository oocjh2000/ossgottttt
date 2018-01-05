#include <iostream>
#include "arduwatch.h"
#include "소스.h"


using namespace std;

void main()
{	
	cout << "==============운주워치 테스트================" << endl;
	Hero park;
	cout << "hp=" << park.Hero_Output_HP_Now()<<endl;
	cout << "목숨=" << park.Hero_Output_ReviveCount() << endl;
	cout << "============영웅초기설정 테스트==============" << endl;
	park.Hero_Set(10,10);
	cout << "hp=" << park.Hero_Output_HP_Now() << endl;
	cout << "목숨=" << park.Hero_Output_ReviveCount() << endl;
	cout << "============영웅설정함수테스트===============" << endl;
	Skill asdf;
	cout << "스킬파워=" << asdf.Skill_Output_Power() << endl;
	cout << "스킬쿨다운=" << asdf.Skill_Output_Cooldown() << endl;
	cout << "스킬카운트=" << asdf.Skill_Output_Count() << endl;
	cout << "스킬타입=" << asdf.Skill_Output_Type() << endl;
	asdf.Skill_Set(20,20,20,Skill_Type_RivivialPlus);
	cout << "=============스킬 초기설정테스트============="<<endl;
	cout << "스킬파워=" << asdf.Skill_Output_Power() << endl;
	cout << "스킬쿨다운=" << asdf.Skill_Output_Cooldown() << endl;
	cout << "스킬카운트=" << asdf.Skill_Output_Count() << endl;
	cout << "스킬타입=" << asdf.Skill_Output_Type() << endl;
	cout << "============스킬설정함수테스트===============" << endl;
	Wepon assult;
	cout << "무기파워" << assult.Wepon_Output_Power() << endl;
	cout << "무기재장전" << assult.Wepon_Output_Reload() << endl;
	cout << "무기탄창" << assult.Wepon_Output_Magazine() << endl;
	cout << "발사속도" << assult.Wepon_Output_Speed() << endl;
	cout << "============무기초기설정테스트===============" << endl;
	assult.Wepon_Set(30,5,100,5000);
	cout << "무기파워" << assult.Wepon_Output_Power() << endl;
	cout << "무기재장전" << assult.Wepon_Output_Reload() << endl;
	cout << "무기탄창" << assult.Wepon_Output_Magazine() << endl;
	cout << "발사속도" << assult.Wepon_Output_Speed() << endl;
	cout << "============무기설정함수테스트===============" << endl;
	Game qwerty;
	system("pause");
	
}