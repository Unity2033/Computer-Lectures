#include "Marine.h"

int Marine::GetHP()
{
	return health;
}

void Marine::Skill()
{
	std::cout << "������" << std::endl;
}

void Marine::SetHP(int value)
{
	if (value >= 0 && value <= 100)
	{
		health = value;
	}
	else
	{
		std::cout << "�߸��� ���� ���Խ��ϴ�." << std::endl;
	}
}
