#pragma once
#include <stdio.h>

void main()
{
	// 2�� for��
	/*
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("���ο� �ִ� for��\n");
		}

		printf("�ܺο� �ִ� for��\n");
	}
	*/

	// ������
	/*
	for (int i = 2; i < 10; i++)
	{
		for (int j = 1; j < 10; j++)
		{
			printf("%d x %d : %d\n", i, j, i * j);
		}

		printf("\n");
	}
	*/

	// continue��
	/*
	// ���� �ݺ����� ��ɹ��� ������ �����ϰ� �ݺ�����
	// ó������ ���ư��� �ݺ����� ���� �ڵ带 �����ϴ� ��ɹ��Դϴ�.
	for (int i = 0; i < 5; i++)
	{
		if (i == 3)
		{
			break;
		}

		printf("i�� �� : %d\n", i);
	}
	*/

	// �� ���� �˰���
	/*
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			printf("��");
		}

		printf("\n");
	}
	*/

	// ����Ʈ ������
	// ��Ʈ ���� �־��� ���ڸ�ŭ ��ȣ �������� �̵���Ű�� �������Դϴ�.

	char value = 10; // 0000 1010

	printf("��Ʈ �������� 3�� �̵��� ��� : %d\n", value << 3); // 0101 0000 

	printf("��Ʈ ���������� 2�� �̵��� ��� : %d\n", value >> 2); // 0000 0010

	// ����Ʈ �����ڿ��� ���� ������ �ؾ� ������ ���� ����˴ϴ�.
	printf("value �� : %d\n", value);
}
