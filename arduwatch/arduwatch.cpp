#include "arduwatch.h"



Skill::Skill(int _Skill_Type, int _Skill_Power, int _Skill_Cooldown, int _Skill_Count) //스킬생성자 17-12-21 차재훈
{
	Skill_Type = _Skill_Type;
	Skill_Power = _Skill_Power;
	Skill_Cooldown = _Skill_Power;
	Skill_Count = _Skill_Count;
}

/*void Skill::Skill_Use()
{
	if (Skill_Type_Heal) {
		
	}
	else if (Skill_Type_Provocation) {

	}
	else if (Skill_Type_RivivialPlus) {

	}
	else if (Skill_Type_Provocation) {

	}
	 
}*/





void Hero::Hero_Set(int _HP_Full, int _Revive_Count)
{
	HP_Full = _HP_Full;
	Revive_Count = _Revive_Count;
}

int Hero::Hero_Show_HP_Now()
{
	return HP_Now;
}





/*void hero::revive()//부활함수 17-12-21 차재훈
{
	if (Revive_Count) {
		HP_Now = HP_Full;
		Revive_Count--;
	}
}*/





