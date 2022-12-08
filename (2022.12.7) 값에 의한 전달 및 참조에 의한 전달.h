#pragma once
#include <stdio.h>

void Calculator(int x)
{
	x = 1000;
}

void Swap(int* x, int* y)
{
	int temp = *x;
	*x = *y;
	*y = temp;

	printf("x�� �ּ� : %p\n", x);
	printf("y�� �ּ� : %p\n", y);

	printf("x�� �� : %d\n", *x);
	printf("y�� �� : %d\n", *y);
}


int main()
{
	// call by value (���� ���� ����)
	/*
	// �Լ� ȣ�� �� �ѱ�� ������ ���� �Ű�������
	// ����Ǿ �Լ� ������ �Ű������� ��������
	// �����͸� �����ص� �μ��� ������ ���� �ʴ� �����Դϴ�.
	int value = 0;

	Calculator(value); // <- ���� ��ȯ�� ���Դϴ�.

	printf("value�� �� : %d", value);
	*/

	// call by reference (������ ���� ����)
	// �Լ� ȣ�� �� �μ��� ������ �ּڰ��� �����Ͽ�
	// �Լ� ���ο��� ����� ������ �Լ� �ܺο�����
	// ������ ��ĥ �� �ֵ��� �����ϴ� ����Դϴ�.

	int A = 10;
	int B = 20;

	Swap(&A, &B);

	printf("A�� �ּ� : %p\n", &A);
	printf("B�� �ּ� : %p\n", &B);

	printf("A�� �� : %d\n", A);
	printf("B�� �� : %d\n", B);

	return 0;
}
