class hero{
private: int HP_Full;
		 int HP_Now;
		 int Revive_Count;
		 int Skill_Count;

 hero(int _HP_Full,int _Revive_Count,int _Skill_Count){
    HP_Full=_HP_Full;
    Revive_Count=_Revive_Count;
    Skill_Count=_Skill_Count;
  }

  void Use_Skill(){
    if(Skill_Count)

    Skill_Count--;
  }

  void  revive(){
    if(Revive_Count){
      HP_Now=HP_Full;
      Revive_Count--;
    }
  }

};
