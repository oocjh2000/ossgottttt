/*�Ƶο�ġ ������
2017�� 9/9 ~NOW 
2017/9/9-2017/9/18 : https://github.com/KGSHS-ResearchClub/UnjuWatch
9/18~NOW : https://github.com/oocjh2000/unjuwatch_dev/commits/master
*/
#define PainPin 13
#define InputPin 12
#define SpkPin 8
#define Revive_Pin 2
//��ų�з� ���� ��ų�߰��� ����� arduwatch.cpp������ Skill_Use�������ּ���  17-12-21 ������
enum Skill_Type {
	Skill_Type_Heal = 20,
	Skill_Type_SuperAtk,
	Skill_Type_RivivialPlus,
	Skill_Type_Provocation,
};

class Skill {
private:
	int Skill_Power, Skill_Cooldown, Skill_Count, Skill_Type;

	Skill(int _Skill_Type, int _Skill_Power, int _Skill_Cooldown, int _Skill_Count);
	
	  
// 17-12-21 ������

};
 class Hero{
 private: int HP_Full;
		  int HP_Now;
		  int Revive_Count;

	 Hero(int _HP_Full, int _Revive_Count);

	

	 // 17-12-21 ������
 };

 class Network {

 };//18-1-3
 class Game: Hero , Skill , Network {

 };//18-1-3