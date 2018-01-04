#include "arduwatch.h"









void Hero::Hero_Set(int _HP_Full, int _Revive_Count)
{
	HP_Full = _HP_Full;
	HP_Now = HP_Full;
	Revive_Count = _Revive_Count;
}

void Hero::Hero_Discount_HP(int atk)
{
	HP_Now = HP_Now - atk;
}



void Hero::Hero_Discount_ReviveCount()
{
	HP_Now = HP_Full;
	Revive_Count--;
}


int Hero::Hero_Show_HP_Now()
{
	int hp = HP_Now;
	return hp;
}

int Hero::Hero_Show_ReviveCount()
{
	int rc = Revive_Count;
	return rc;
}








void Skill::Skill_Set(int Power, int Cooldown, int Count, int Type)
{
	Skill_Power = Power;
	Skill_Cooldown = Cooldown;
	Skill_Count = Count;
	Skill_Type = Type;
}

int Skill::Skill_Show_Power()
{
	int ssp = Skill_Power;
	return ssp;
}

int Skill::Skill_Show_Cooldown()
{
	int ssc = Skill_Cooldown;
	return ssc;
}

int Skill::Skill_Show_Count()
{
	int ssu = Skill_Count;
	return ssu;
}

int Skill::Skill_Show_Type()//문자열로 수정할것
{
	int sst = Skill_Type;
	return sst;
}

void Game::revive()
{
	
}
