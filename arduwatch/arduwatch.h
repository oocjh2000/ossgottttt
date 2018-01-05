/*아두워치 개발중
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
	int Skill_Output_Power();
	int Skill_Output_Cooldown();
	int Skill_Output_Count();
	int Skill_Output_Type();
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

	void Hero_Discount_HP(int atk);

	void Hero_Discount_ReviveCount();

	
	//영웅상태 출력함수
	int Hero_Output_HP_Now();
	int Hero_Output_ReviveCount();
	// 2018 01 04 차재훈

 };// 17-12-21 차재훈

class Wepon {
private:
	int Wepon_Power;
	int Wepon_Reload;
	int Wepon_Magmzine;
	int Wepon_Speed;
public:
	Wepon() {
		Wepon_Magmzine = 30;//millis
		Wepon_Power = 20;
		Wepon_Reload = 3;
		Wepon_Speed = 100;
	}
	void Wepon_Set(int _Wepon_Power,int _Wepon_Reload,int _Wepon_Magazine,int Wepon_Speed);

	//무기상태 출력함수 2018 01 04 차재훈
	int Wepon_Output_Power();
	int Wepon_Output_Reload();
	int Wepon_Output_Magazine();
	int Wepon_Output_Speed();

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