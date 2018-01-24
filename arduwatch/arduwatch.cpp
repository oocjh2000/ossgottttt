#include "arduwatch.h"









void Hero::Hero_Set(int _HP_Full, int _Revive_Count)
{
	HP_Full = _HP_Full;
	HP_Now = HP_Full;
	Revive_Count = _Revive_Count;
}



void Hero::Hero_Revive()
{
	HP_Now = HP_Full;
	Revive_Count--;
}

int Hero::Hero_print_HP_Now()
{
	int hp = HP_Now;
	return hp;
}

int Hero::Hero_print_ReviveCount()
{
	int rc = Revive_Count;
	return rc;
}









int Skill::Skill_print_Power()
{
	int ssp = Skill_Power;
	return ssp;
}

int Skill::Skill_print_Cooldown()
{
	int ssc = Skill_Cooldown;
	return ssc;
}

int Skill::Skill_print_Count()
{
	int ssu = Skill_Count;
	return ssu;
}

int Skill::Skill_print_Type()//문자열로 수정g해야함 언젠가
{
	int sst = Skill_Type;
	return sst;
}







void Wepon::Wepon_Set(int _Wepon_Power, int _Wepon_Reload, int _Wepon_Magazine, int _Wepon_Speed, int _Magazine_Full)
{
	Wepon_Magmzine = _Wepon_Magazine;
	Wepon_Power = _Wepon_Power;
	Wepon_Reload = _Wepon_Reload;
	Wepon_Speed = _Wepon_Speed;
	Magazine_Full = _Magazine_Full;
}


int Wepon::Wepon_print_Power()
{
	int WSP = Wepon_Power;
	return WSP;
}

int Wepon::Wepon_print_Reload()
{
	int WSR = Wepon_Reload;
	return WSR;
}

int Wepon::Wepon_print_Magazine()
{
	int WSM = Wepon_Magmzine;
	return WSM;
}

int Wepon::Wepon_print_Speed()
{
	int WSS = Wepon_Speed;
	return WSS;
}

int Wepon::Shot(int atk)
{
	Wepon_Magmzine--;
	return atk;
}

void Wepon::DiscountMag()
{
	Wepon_Magmzine--;
}

int Wepon::Reload()
{
	Wepon_Magmzine = Magazine_Full;
	return Wepon_Reload;
}









void Game::Game_Judge_Damage(int damage)
{
	Hero_Discount_HP(damage);
}

void Game::Game_Start()
{
}

