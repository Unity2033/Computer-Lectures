#pragma once
#include <stdio.h>
#include <windows.h> // window�� ���õ� ��� ����

int main()
{
	// Blocking ������ Ű �Է�
	/*
	while (1)
	{
				   // 224
		int key = _getch(); // Ű�� �Է��� ���� �� 224��� ���� ��ȯ�˴ϴ�.

		// key <- ��(72)
		key = _getch();

		switch (key)
		{
			// UP KEY
			case 72: printf("��\n");
				break;
			// LEFT KEY
			case 75: printf("��\n");
				break;
			// RIGHT KEY
			case 77: printf("��\n");
				break;
			// DOWN KEY
			case 80: printf("��\n");
				break;
		}

		printf("���� �ִϸ��̼� ����\n");
		printf("�� ���� �ý��� ����\n");
	}
	*/

	while (1)
	{
		// Non Blocking ������ Ű �Է�
		if (GetAsyncKeyState(VK_UP)) // UP
		{
			printf("��\n");
			Sleep(100); // 1/1000�� ���˴ϴ�.
			// Sleep() : Ư���� �ð��� ����ϴ� �Լ�
		}
		else if (GetAsyncKeyState(VK_LEFT))	// LEFT
		{
			printf("��\n");
			Sleep(100);
		}
		else if (GetAsyncKeyState(VK_RIGHT))	// LEFT
		{
			printf("��\n");
			Sleep(100);
		}
		else if (GetAsyncKeyState(VK_DOWN))	// LEFT
		{
			printf("��\n");
			Sleep(100);
		}

		// printf("���� �ִϸ��̼� ����\n");
		// printf("�� ���� �ý��� ����\n");
	}

	return 0;
}
