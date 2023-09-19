#include "Firebat.h"

Firebat::Firebat()
{
	health = 50;
	maxHP = health;
}

int Firebat::GetHP()
{
	return health;
}

void Firebat::Skill()
{
}

void Firebat::RecoveryHP()
{
	health = maxHP;
}

void Firebat::SetHP(int value)
{
	if (value >= 0 && value <= maxHP)
	{
		health = value;
	}
	else
	{
		std::cout << "�߸��� ���� ���Խ��ϴ�." << std::endl;
	}
}
