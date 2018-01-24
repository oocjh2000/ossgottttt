/*
arduwatch.h - Library for  Arduino Network FPSgame.
Created by Jaehoon Cha, September 9, 2018.
Released MIT.

아두워치 개발중
2017년 9/9 ~NOW 
2017/9/9-2017/9/18 : https://github.com/KGSHS-ResearchClub/UnjuWatch
9/18~NOW : https://github.com/oocjh2000/unjuwatch_dev/commits/master
mail oocjh200@gmail.com
*/

#pragma once
#include<time.h>


#define PainPin 13
#define InputPin 12
#define SpkPin 8
#define Revive_Pin 2

enum Skill_Type {
	Skill_Type_Heal = 20,
	Skill_Type_SuperAtk,
	Skill_Type_RivivialPlus,
	Skill_Type_Provocation,
};

class Skill
{
	int Skill_Power, Skill_Cooldown, Skill_Count, Skill_Type;

public:
	void Skill_Set(int _Skill_Power, int _Skill_Cooldown, int _Skill_Count, int _Skill_Type)
	{
		Skill_Power = _Skill_Power;
		Skill_Cooldown = _Skill_Cooldown;
		Skill_Count = _Skill_Count;
		Skill_Type = _Skill_Type;
	}
	Skill() 
	{
		Skill_Power = 1;
		Skill_Count = 1;
		Skill_Cooldown = 1;
		Skill_Type = Skill_Type_Heal;
	};

	//스킬상태 출력함수
	int Skill_print_Power();
	int Skill_print_Cooldown();
	int Skill_print_Count();
	int Skill_print_Type();
	//스킬상태 출력함수 2018 01 04 차재훈
	  
// 17-12-21 차재훈
};

class Hero
{
private:
	int HP_Full;
	int HP_Now;
	int Revive_Count;

public:
	Hero()
	{
		HP_Full = 100, Revive_Count = 10;
		HP_Now = HP_Full;
	}
	
	void Hero_Set(int _HP_Full, int _Revive_Count); 

	void Hero_Discount_HP(int atk)
	{
		HP_Now = HP_Now - atk;
	}

	void Hero_Revive();
	
	//영웅상태 출력함수
	int Hero_print_HP_Now();
	int Hero_print_ReviveCount();
	// 2018 01 04 차재훈

 };// 17-12-21 차재훈

class Wepon {
private:
	int Wepon_Power;
	int Wepon_Reload;
	int Wepon_Magmzine;
	int Magazine_Full;
	int Wepon_Speed;
public:
	Wepon() {
		Wepon_Magmzine = 30;//millis
		Wepon_Power = 20;
		Wepon_Reload = 3;
		Wepon_Speed = 100;
		Magazine_Full = 30;
	}
	void Wepon_Set(int _Wepon_Power,int _Wepon_Reload,int _Wepon_Magazine,int _Wepon_Speed, int _Magazine_Full);

	//무기상태 출력함수 2018 01 04 차재훈
	int Wepon_print_Power();
	int Wepon_print_Reload();
	int Wepon_print_Magazine();
	int Wepon_print_Speed();
	//

	int Shot(int atk);//2018 01 18 차재훈
	void DiscountMag();
	int Reload();
};//2018 01 04 차재훈



 class Network
 {

 };//18-1-3
 class Game : Hero, Skill, Network, Wepon
 {
 public:
	 Game() 
	 {

	 }
	 void Game_Judge_Damage(int damage);
	 void Game_Start();
 };//18-1-3