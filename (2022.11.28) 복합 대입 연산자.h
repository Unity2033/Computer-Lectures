#pragma once
#include <stdio.h>

void main()
{
	// ��ⷯ ������
	// ��� ���ڸ� �ٸ� ���ڷ� ���� ��������
	// ���ϴ� �������Դϴ�.
	// printf("%d", 11 % 4);

	// ���
	/*
	// 12�� ����� ������ּ���,
	// 1,2,3,4,6,12
	int value = 12;

	for (int i = 1; i <= value; i++)
	{
		if (value % i == 0)
		{
			printf("%d ", i);
		}
	}
	*/

	// while��
	/*
	// Ư�� ������ ������ ������ ����ؼ� �־���
	// ��ɹ��� �����ϴ� �ݺ����Դϴ�.

	int variable = 5;

	while(variable > 0) // <- ������ ���̱� ������
	{
		if (variable == 1)
		{
			break;
		}

		if (variable == 3)
		{
			variable--;
			continue;
		}

		// while���� ������ ��� ���� ��
		// ���� �ݺ��մϴ�.
		printf("variable�� �� : %d\n", variable);
		variable--;
	}
	*/

	// do-while��
	/*
	// ���ǰ� ������� �� ���� �۾��� ������ ���� ���ǿ�
	// ���� ��ɹ��� �����ϴ� �ݺ����Դϴ�.

	int data = 5;

	do
	{
		printf("data�� �� : %d\n", data);
		data--;
	}
	while (data > 5);
	*/

	// ���� ���� ������
	/*
	int value = 10;
	value += 1;

	printf("value�� �� : %d\n", value);

	value -= 6;

	printf("value�� �� : %d\n", value);

	value *= 2;

	printf("value�� �� : %d\n", value);

	value /= 4;

	// ������ ������ ����ϰ� �Ǹ� ������ ������ ����մϴ�.
	printf("value�� �� : %d\n", value);

	value %= 2;

	printf("value�� �� : %d\n", value);
	*/
}
