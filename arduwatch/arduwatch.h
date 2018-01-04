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
//스킬분류 열거 스킬추가시 여기와 arduwatch.cpp파일의 Skill_Use수정해주세요  17-12-21 차재훈
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
	Skill(int _Skill_Power, int _Skill_Cooldown, int _Skill_Count, int _Skill_Type)
	{
		Skill_Power = _Skill_Power;
		Skill_Cooldown = _Skill_Cooldown;
		Skill_Count = _Skill_Count;
		Skill_Type = _Skill_Type;
	}
	void Skill_Set(int Power,int Cooldown,int Count, int Type);

	//스킬상태 출력함수
	int Skill_Show_Power();
	int Skill_Show_Cooldown();
	int Skill_Show_Count();
	int Skill_Show_Type();
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
	int Hero_Show_HP_Now();
	int Hero_Show_ReviveCount();
	// 2018 01 04 차재훈

 };// 17-12-21 차재훈

 class Network
 {

 };//18-1-3
 class Game : Hero , Skill , Network
 {
	 void revive();
 };//18-1-3