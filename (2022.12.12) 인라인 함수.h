#pragma once
#include <stdio.h>

// ���� ����?
// ���α׷��� ���� �帧���� ��Ÿ���� �������� ���α׷��� ���� �帧 ���߿�
// �������ִ� ��ġ�� �ڵ带 ������Ѿ� �� �� �߰����� �ð��Ǵ� �޸� ������
// ����ϴ� �����Դϴ�.
/*
inline void Function(int x, int y)
{
	printf("x�� �� : %d\n", x);
	printf("y�� �� : %d\n", y);
	printf("�Լ� ȣ��");
}
*/

int main()
{
	// �ζ��� �Լ���?
	/*
	// �Լ��� ȣ���ϴ� ��� �Լ��� ȣ��Ǵ� ��ġ���� �Լ��� �ڵ带
	// �����Ͽ� �����ϴ� ����� �Լ��Դϴ�.

	Function(10, 20);

	// �ζ��� �Լ��� �Լ��� ȣ�� ������ �����Ƿ� ó�� �ӵ��� ��������,
	// �ζ��� �Լ��� ���� ����ϰ� �Ǹ� �Լ��� �ڵ尡 ����Ǳ� ������
	// ���� ������ ũ�Ⱑ Ŀ���� �˴ϴ�.
	*/

	// 1���� n������ ��
	/*
	int n = 0;
	int result = 0;

	scanf_s("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		result += i;
	}

	printf("result�� �� : %d", result);
	*/

	// �ƽ�Ű �ڵ�
	/*
	// �̱�������ȯǥ�غ�ȣ�� ���� ���ĺ��� ����ϴ� ��ǥ����
	// ���� ���ڵ��Դϴ�.

	// a ~ z
	char alphabet = 97;

	// printf("alphabet�� �� : %d\n", alphabet);
	// printf("alphabet�� �� : %c\n", alphabet);

	for (int i = 0; i < 26; i++)
	{
		printf("%c ", alphabet + i);
	}
	*/

	// ������ ����
	/*
	int data[5] = { 1,2,3,4,5 };

	int * ptr = data;

	printf("ptr�� ����Ű�� �� : %d\n", *ptr);

	ptr = ptr + 2;

	printf("ptr�� ������Ų �� ����Ű�� �� : %d\n", *ptr);

	ptr = ptr - 1;

	printf("ptr�� ���ҽ�Ų �� ����Ű�� �� : %d\n", *ptr);
	*/

	return 0;
}
