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
	Skill_Type_Heal = 1000,
	Skill_Type_SuperAtk,
	Skill_Type_RivivialPlus,
	Skill_Type_Provocation,
};

class Skill {
private:
	int Skill_Power, Skill_Cooldown, Skill_Count, Skill_Type;

	Skill(int _Skill_Type, int _Skill_Power, int _Skill_Cooldown, int _Skill_Count);
	void Skill_Use();
	  
// 17-12-21 ������

};
 class hero{
 private: int HP_Full;
		  int HP_Now;
		  int Revive_Count;

	 hero(int _HP_Full, int _Revive_Count);

	 void  revive();
	 // 17-12-21 ������
 };

