#pragma once
#include <stdio.h>

int main()
{
	// ��� ���� ������
	/*
	// �����Ͱ� ����Ű�� ���� ���ȭ�ϴ� �������Դϴ�.

	int value = 100;
	int variable = 200;

	const int * pointer = &value;

	pointer = &variable;

	// *pointer = 1000;	// ������ ������ ����Ű�� �޸��� ���� ������ �� �����ϴ�.
	value = 200; // �ش� ������ ���ȭ�� ���� �ʽ��ϴ�.
	variable = 300;
	*/

	// ������ ��� (�迭�� �̸�)
	/*
	int data = 10;
	int signal = 20;
	int * const address = &data;

	// ������ ����� ���ο� �ּҸ� ������ �� �����ϴ�.
	// address = &signal;
	*address = 300;
	*/

	// Ȧ�� & ¦�� 

	int value = 0;

	scanf_s("%d", &value);

	if (value % 2 == 0)
	{
		printf("¦��");
	}
	else
	{
		printf("Ȧ��");
	}

	return 0;
}
