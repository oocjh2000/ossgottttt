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
	asdf.Skill_Set();
	cout << "=============스킬 초기설정테스트============="<<endl;
	cout << "스킬파워=" << asdf.Skill_Show_Power() << endl;
	cout << "스킬쿨다운=" << asdf.Skill_Show_Cooldown() << endl;
	cout << "스킬카운트=" << asdf.Skill_Show_Count() << endl;
	cout << "스킬타입=" << asdf.Skill_Show_Type() << endl;
	cout << "============스킬설정함수테스트===============" << endl;
	Wepon assult;
	cout << "무기파워" << assult.Wepon_Show_Power() << endl;
	cout << "무기재장전" << assult.Wepon_Show_Reload() << endl;
	cout << "무기탄창" << assult.Wepon_Show_Magazine() << endl;
	cout << "발사속도" << assult.Wepon_Show_Speed() << endl;
	cout << "============무기초기설정테스트===============" << endl;
	assult.Wepon_Set(30,5,100,5000);
	cout << "무기파워" << assult.Wepon_Show_Power() << endl;
	cout << "무기재장전" << assult.Wepon_Show_Reload() << endl;
	cout << "무기탄창" << assult.Wepon_Show_Magazine() << endl;
	cout << "발사속도" << assult.Wepon_Show_Speed() << endl;
	cout << "============무기설정함수테스트===============" << endl;
	system("pause");
	
}