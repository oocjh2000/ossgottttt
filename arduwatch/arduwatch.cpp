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

int Hero::Hero_Output_HP_Now()
{
	int hp = HP_Now;
	return hp;
}

int Hero::Hero_Output_ReviveCount()
{
	int rc = Revive_Count;
	return rc;
}









int Skill::Skill_Output_Power()
{
	int ssp = Skill_Power;
	return ssp;
}

int Skill::Skill_Output_Cooldown()
{
	int ssc = Skill_Cooldown;
	return ssc;
}

int Skill::Skill_Output_Count()
{
	int ssu = Skill_Count;
	return ssu;
}

int Skill::Skill_Output_Type()//문자열로 수정할것
{
	int sst = Skill_Type;
	return sst;
}







void Wepon::Wepon_Set(int _Wepon_Power, int _Wepon_Reload, int _Wepon_Magazine, int Wepon_Speed)
{
	Wepon_Magmzine = _Wepon_Magazine;
	Wepon_Power = _Wepon_Power;
	Wepon_Reload = _Wepon_Reload;
	Wepon_Speed = Wepon_Speed;
}


int Wepon::Wepon_Output_Power()
{
	int WSP = Wepon_Power;
	return WSP;
}

int Wepon::Wepon_Output_Reload()
{
	int WSR = Wepon_Reload;
	return WSR;
}

int Wepon::Wepon_Output_Magazine()
{
	int WSM = Wepon_Magmzine;
	return WSM;
}

int Wepon::Wepon_Output_Speed()
{
	int WSS = Wepon_Speed;
	return WSS;
}






void Game::Game_Judge_Damage(int damage)
{
	Hero_Discount_HP(damage);
}

void Game::Game_Start()
{
}

