#pragma once
#include <stdio.h>

void main()
{
	// �Ǽ��� �����ϴ� ���
	/*
	float x = 3.6;	// 4 byte
	// float : �Ҽ��� 6�ڸ� ���ϱ�����, ��Ȯ���� ǥ���մϴ�.

	double y = 3.6;	// 8 byte
	// double : �Ҽ��� 15�ڸ� ���ϱ�����, ��Ȯ���� ǥ���մϴ�.

	// �Ҽ����� �ڸ����� �����Ϸ��� (%.���ϴ� ��f)�� ���ֽø� �˴ϴ�.
	printf("x ������ �� : %.10f\n", x);
	printf("y ������ �� : %.20lf\n", y);
	*/

	// switch��
	// Ư�� ������ ���� ����Ǵ� ���ǹ��Դϴ�.

	// switch ������ ���ǽ����� �Ǽ��� ������
	// �Ǽ��� ����� ����� �� �����ϴ�.

	char character = 'A';
	int data = 1;
	float value = 3.6;

	switch (character) // <- ������ �Ǵ� ��
	{
	case 'A': printf("Ÿ��Ʋ");
		break;
	case 1: printf("����");
		break;
	case 2: printf("����");
		break;
	default: printf("���� ó��");
	}
}
