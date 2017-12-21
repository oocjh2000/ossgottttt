#define PainPin 13
#define InputPin 12
#define SpkPin 8
#define Revive_Pin 2

 class hero{
 private:
	 int HP_Full;
	 int HP_Now;
	 int Revive_Count;
	 int Skill_Count;

	 hero(int _HP_Full, int _Revive_Count, int _Skill_Count);

	  void Use_Skill();

	  void  revive();
 };

