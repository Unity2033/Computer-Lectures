#pragma once
#include <stdio.h>
#include <limits.h> // �ڷ��� �ִ񰪰� �ּڰ��� ������ִ� ��� ����

// char, int, double
void Generic(char* name, void* value)
{
	if (name == "char")
	{
		printf("%c\n", *(char*)value);
	}
	else if (name == "int")
	{
		printf("%d\n", *(int*)value);
	}
	else if (name == "double")
	{
		printf("%f\n", *(double*)value);
	}
}

int main()
{
	//���� �����Ͷ�?
	/*
	// �ڷ����� �������� ���� ���·� ��� �ڷ����� ������
	// �� �ִ� �������Դϴ�.

	char alphabet = 'A'; // 1 byte
	int integer = 10; // 4 byte
	double pi = 3.14; // 8 byte

	void * ptr = &alphabet;

	// ���� �����ʹ� �޸� �ּҿ� �����ؼ� ���� ������ �� �����ϴ�.

	printf("ptr�� ����Ű�� �� : %c\n", *(char *)ptr);
	printf("ptr�� ����Ű�� �ּ� : %p\n", ptr);

	ptr = &integer;
	printf("ptr�� ����Ű�� �� : %d\n", *(int*)ptr);
	printf("ptr�� ����Ű�� �ּ� : %p\n", ptr);

	ptr = &pi;
	printf("ptr�� ����Ű�� �� : %f\n", *(double*)ptr);
	printf("ptr�� ����Ű�� �ּ� : %p\n", ptr);

	// ���� �����ͷ� ������ �޸𸮿� �����Ϸ��� ���� �����Ͱ� ����Ű��
	// ������ �ڷ������� �� ��ȯ�� ���־�� �մϴ�.

	Generic("char", &alphabet); // ���� 'A'
	Generic("int", &integer);   // ���� 10
	Generic("double", &pi);     // �Ǽ� 3.14
	*/

	// �ִ밪�� �ּڰ�
	int max = 0;
	int min = INT_MAX;

	int data[] = { 6,10,1,2,8 };

	for (int i = 0; i < 5; i++)
	{
		if (data[i] > max)
		{
			max = data[i];
		}

		if (min >= data[i])
		{
			min = data[i];
		}
	}

	printf("data�� �ִ� : %d\n", max);
	printf("data�� �ּڰ� : %d\n", min);

	return 0;
}
