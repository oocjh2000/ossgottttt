#include "arduwatch.h"



Skill::Skill(int _Skill_Type, int _Skill_Power, int _Skill_Cooldown, int _Skill_Count) //스킬생성자 17-12-21 차재훈
{
	Skill_Type = _Skill_Type;
	Skill_Power = _Skill_Power;
	Skill_Cooldown = _Skill_Power;
	Skill_Count = _Skill_Count;
}

void Skill::Skill_Use()//스킬사용함수 (구현중) 17-12-21 차재훈
{
	switch (Skill_Type)//스킬추가시 여기와 열거형에  추가해주세요
	{
	case :Skill_Type_Heal
		break;
	default:

		break;
	}
}

hero::hero(int _HP_Full, int _Revive_Count)//히어로 생성자 17-12-21 차재훈
{
	HP_Full = _HP_Full;
	Revive_Count = _Revive_Count;
}

void hero::revive()//부활함수 17-12-21 차재훈
{
	if (Revive_Count) {
		HP_Now = HP_Full;
		Revive_Count--;
	}
}
