#pragma once
#include <stdio.h>

// ��� �Լ�
/*
void Function(int x)
{
	if (x == 0)
	{
		return;
	}

	// ��� �Լ��� �Լ��� ��� ȣ���ϱ� ������ ���� ������
	// �޸𸮰� ��� ���̰� �ǹǷ� ���� �����÷ο찡 �Ͼ�ϴ�.
	printf("�Լ� ����\n");
	Function(x - 1);

	// ��� �Լ��� ��� Ư���� �������� �Լ��� ��ȯ�ؾ� �ϸ�,
	// ��������� ȣ���� �Լ��� ���� �����ӿ� ���� �������� ȣ���
	// �Լ����� ���ʴ�� ���� �������� �����˴ϴ�.
}
*/

int Factorial(int x)
{
	if (x == 1)
	{
		return 1;
	}
	else
	{
		return x * Factorial(x - 1);
	}
}

int main()
{
	// ��� �Լ�
	/*
	// � �Լ����� �ڽ��� �ٽ� ȣ���Ͽ� �۾���
	// �����ϴ� �Լ��Դϴ�.
	int count = 5;

	Function(count);
	*/

	// ���� ������
	/*
	int value1 = 10;
	int value2 = 20;

	//           ����          ���� �� ������ ��
	printf("%d", value1 != value2 ? 1 : 0);
	*/

	// ���丮��
	int value = 0;
	int result = 1;

	scanf_s("%d", &value);

	//for (int i = 1; i <= value; i++)
	//{
	//	result = result * i;
	//}

	// printf("result ������ �� : %d", result);

	printf("%d", Factorial(value));

	return 0;
}
