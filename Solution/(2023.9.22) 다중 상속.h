#pragma once
#include <iostream>
#include "Computer.h"
#include "Player.h"
#include "Bank.h"
using namespace std;


int main()
{
#pragma region ���� ���
	// �ϳ��� ���� Ŭ������ ���� ���� ���� Ŭ������ ��ӹ޴� ���Դϴ�.

	/*
	Computer computer;
	computer.Use();
	*/
#pragma endregion

#pragma region Friend 
	// Friend�� ����� Ŭ������ private �� proetected �����
	// ������ �� �ֵ��� �������ִ� ����Դϴ�.

	Player player;
	player.ShowInfo();

	Bank bank;
	bank.Withdrawal(player, 15000);

	bank.ShowInfo();
	player.ShowInfo();

#pragma endregion

	return 0;
}