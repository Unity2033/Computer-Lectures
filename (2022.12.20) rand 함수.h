#pragma once
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
	// rand( )
	/*
	// 0 ~ 32767 ������ ���� ���� ��ȯ�ϴ�
	// �Լ��Դϴ�.

	// time.h
	// 1970�� 1�� 1�� 0�� 0�� 0�ʺ��� ����Ǵ�.
	// �ð��� ��(sec)�� ��ȯ�ϴ� �Լ�

	srand(time(NULL));

	for (int i = 0; i < 10; i++)
	{
		// rand()�Լ��� ���α׷��� ������ �� ������
		// ���� ��µǱ� ������ ���α׷��� ���� �� ������ѵ�
		// ��� ���� ���� ��µ˴ϴ�.
		int value = rand() % 10 + 1;
		printf("value�� �� : %d\n", value);
	}
	*/

	// UP-DOWN ����
	// ��ǻ�ʹ� 1 ~ 50 ������ ���� ���� ������ �˴ϴ�.
	srand(time(NULL));

	int answer = 0;
	int computer = rand() % 50 + 1;
	int life = 10;

	while (1) // <- ���� ������Ʈ
	{
		if (life <= 0)
		{
			printf("\n����� �� �Ҹ��Ͽ����ϴ�. (�й�)\n");
			break;
		}

		printf("��ǻ�Ͱ� ������ �ִ� ���� ������ּ���.\n");
		printf("���� ��� : %d", life);
		printf("\n���� ������ �� : ");

		// ���� ����(����) == ���� �Է��� ������ �ڷ��� 
		// call by reference (* ???) 

		scanf_s("%d", &answer);

		if (answer < computer)
		{
			life--;
			printf("\ncomputer�� ������ �ִ� ������ �۽��ϴ�.\n");
		}
		else if (answer > computer)
		{
			life--;
			printf("\ncomputer�� ������ �ִ� ������ Ů�ϴ�.\n");
		}
		else if (answer == computer)
		{
			printf("\n��ǻ�Ͱ� ������ �ִ� ���� ã�ҽ��ϴ�. (�¸�)\n");

		}
	}


	return 0;
}
