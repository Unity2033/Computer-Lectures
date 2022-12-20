#pragma once
#include <stdio.h>

// �������̶�?
// �ݵ�� �ϳ��� ���� ������ �� �������� ����ü�Դϴ�.

// �������� ���������� ������ �� �����ϴ�.
enum State
{
	// enum�� �������� ���� �Ǹ�, ���� �ʱ�ȭ�� ������ 
	// �ʾ��� �� ���� ���� �ִ� ��� ���� 0���� �ʱ�ȭ�˴ϴ�.
	IDLE,    // ��� ����
	ATTACK = 10,	// ���� ����
	DEFENSE,	// ��� ����
	DEATH    // ���� ����

 // ������ ��� �߿��� ���� �����ϰ� �Ǹ� �� �ڿ� �ִ� ������
 // ����鵵 ���� ���� �ٲ�ϴ�.
};

// typedef 
// �̹� ���Ǵ� �ڷ����� �ٸ� ���ο� �ڷ������� 
// ���������ִ� Ű�����Դϴ�.

typedef int INT32; // int == INT32

typedef struct Player
{
	int x;
	int y;
	const char* shape;
}PLAYER; // typedef�� ������ ���� �̸��� �ٸ��� �����ؾ� �մϴ�.

typedef enum Color
{
	BLACK,
	BLUE
}COLOR;

int main()
{
	// enum
	/*
	enum State state;

	// ĳ���� ���¸� �������� �� �ֽ��ϴ�.
	state = ATTACK;

	// enum�� ����̱� ������ ���� �ٲ� �� �����ϴ�.
	// IDLE = 99;

	//printf("state�� �� : %d", state);

	switch (state)
	{
		case IDLE :	printf("��� ����");
			break;
		case ATTACK : printf("���� ����");
			break;
		case DEFENSE : printf("��� ����");
			break;
		case DEATH : printf("���� ����");
			break;
	}
	*/

	// typedef
	/*
	int value1 = 10;
	INT32 value2 = 20;

	COLOR color;
	color = BLUE;

	PLAYER player;
	player.shape = 'A';
	*/

	// �Ҽ�
	// 1���� ū �ڿ��� �� 1�� �ڱ� �ڽŸ��� ����� ������ ��

	// 1. ������ �Է�
	int value = 0;
	int flag = 0;

	scanf_s("%d", &value);

	for (int i = 2; i < value; i++)
	{
		if (value % i == 0)
		{
			flag = 1;
			break;
		}
	}

	if (flag == 0)
	{
		printf("�Ҽ�");
	}
	else
	{
		printf("�Ҽ��� �ƴմϴ�.");
	}


	// �Ҽ�(O) vs �Ҽ�(X)

	// 2,3,5,7,11,13,17,19,23,29,31

	return 0;
}
