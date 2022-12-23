#pragma once
#define _CRT_SECURE_NO_WARNINGS
// ���ڿ� �Լ��� ���� ��� �����ϴ� ��ó����

#include <stdio.h>
#include <windows.h>
#include <conio.h>

// HANDLE �ε����� �����ؼ� ���۸� ��ü��ų ����
int screenIndex = 0;

int width = 100;
int height = 60;

// ���۸� 2�� ����
HANDLE Screen[2];

struct Player
{
	int x;
	int y;
	const char* shape;
};

// ����ü ������ ����
Player* player;

// ĳ���� ��ǥ�� �����̴� �Լ�
void GotoXY(int x, int y)
{
	// COORD�� ��� ���� x�� y�� ������ �ִ� ����ü�Դϴ�.
	// ����ü�� ������ ���� x�� y�� �Ű������� �־��ִ� ���Դϴ�.
	COORD position = { x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), position);
}

// ���۸� �ʱ�ȭ�ϴ� �Լ�
void ScreenInit()
{
	CONSOLE_CURSOR_INFO cursor;

	// ������ ���� ������, ������ ���� ������
	COORD size = { width, height };

	// Left, Top, Right, Bottom
	SMALL_RECT rect = { 0, 0, width - 1, height - 1 };

	// ȭ�� 2���� �����մϴ�.
	// Front Buffer
	Screen[0] = CreateConsoleScreenBuffer
	(
		GENERIC_READ | GENERIC_WRITE,
		FILE_SHARE_READ | FILE_SHARE_WRITE,
		NULL,
		CONSOLE_TEXTMODE_BUFFER,
		NULL
	);

	SetConsoleScreenBufferSize(Screen[0], size);

	SetConsoleWindowInfo(Screen[0], TRUE, &rect);

	// Back Buffer
	Screen[1] = CreateConsoleScreenBuffer
	(
		GENERIC_READ | GENERIC_WRITE,
		FILE_SHARE_READ | FILE_SHARE_WRITE,
		NULL,
		CONSOLE_TEXTMODE_BUFFER,
		NULL
	);

	SetConsoleScreenBufferSize(Screen[1], size);

	SetConsoleWindowInfo(Screen[1], TRUE, &rect);

	// Ŀ���� ������ 
	cursor.dwSize = 1;

	// Ŀ���� Ȱ��ȭ ����
	// false : ����
	// true : ��
	cursor.bVisible = false;

	SetConsoleCursorInfo(Screen[0], &cursor);
	SetConsoleCursorInfo(Screen[1], &cursor);
}

// ���۸� ��ü�ϴ� �Լ�
void ScreenFlipping()
{
	// ���۴� �ϳ��� Ȱ��ȭ��ų �� �ֽ��ϴ�.
	SetConsoleActiveScreenBuffer(Screen[screenIndex]);
	screenIndex = !screenIndex;
}

void ScreenClear()
{
	COORD coord = { 0,0 };

	// �����͸� �����ϴ� BUS(���)
	DWORD dw; // unsigned short (2 byte)

	FillConsoleOutputCharacter
	(
		Screen[screenIndex],
		' ',
		width * height,
		coord,
		&dw
	);
}

// ���۸� �����ϴ� �Լ�
void ScreenRelease()
{
	CloseHandle(Screen[0]);
	CloseHandle(Screen[1]);
}

// ���� ���۸��� �̿��ؼ� ����ϴ� �Լ�
void ScreenPrint(int x, int y, const char* string)
{
	COORD cursorPosition = { x, y };

	DWORD dw;

	SetConsoleCursorPosition(Screen[screenIndex], cursorPosition);

	WriteFile
	(
		Screen[screenIndex],
		string,
		strlen(string),
		&dw,
		NULL
	);

}

int main()
{
	// Player ����
	player = (Player*)malloc(sizeof(Player));

	player->x = 5;
	player->y = 5;
	player->shape = "��";

	// 1. ���� �ʱ�ȭ
	ScreenInit();

	while (1)
	{
		if (GetAsyncKeyState(VK_UP)) // UP
		{
			player->y--;
			Sleep(100);
		}
		else if (GetAsyncKeyState(VK_LEFT))	// LEFT
		{
			player->x--;
			Sleep(100);
		}
		else if (GetAsyncKeyState(VK_RIGHT))	// LEFT
		{
			player->x++;
			Sleep(100);
		}
		else if (GetAsyncKeyState(VK_DOWN))	// LEFT
		{
			player->y++;
			Sleep(100);
		}

		ScreenPrint(player->x, player->y, player->shape);

		// 2. ���� ��ü
		ScreenFlipping();

		// 3. ��ü�� ������ ������ ����
		ScreenClear();
	}

	// ������ ����Ǿ��� �� ���۸� �����մϴ�.
	ScreenRelease();

	return 0;
}
