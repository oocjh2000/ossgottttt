#include "arduwatch.h"



Skill::Skill(int _Skill_Type, int _Skill_Power, int _Skill_Cooldown, int _Skill_Count) //��ų������ 17-12-21 ������
{
	Skill_Type = _Skill_Type;
	Skill_Power = _Skill_Power;
	Skill_Cooldown = _Skill_Power;
	Skill_Count = _Skill_Count;
}

void Skill::Skill_Use()//��ų����Լ� (������) 17-12-21 ������
{
	switch (Skill_Type)//��ų�߰��� ����� ��������  �߰����ּ���  Case 1000���ͽ���
	{
	case 1000:
		break;

	default:
		
		break;
	}
}

hero::hero(int _HP_Full, int _Revive_Count)//����� ������ 17-12-21 ������
{
	HP_Full = _HP_Full;
	Revive_Count = _Revive_Count;
}

void hero::revive()//��Ȱ�Լ� 17-12-21 ������
{
	if (Revive_Count) {
		HP_Now = HP_Full;
		Revive_Count--;
	}
}
