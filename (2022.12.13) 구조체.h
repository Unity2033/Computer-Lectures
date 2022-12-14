#pragma once
#include <stdio.h>

// �Լ� ������
/*
void Calculator()
{
	printf("Calculator Call\n");
}

void Function(int x)
{
	x = 100;
	printf("Function Call %d\n", x);
}

int Process(int x, int y)
{
	return x + y;
}
*/

// ����ü
struct Character
{
	char* name;
	int attack;
	float health;
};

void ObjectOutput(struct Character character)
{
	printf("character�� �̸� : %s\n", character.name);
	printf("character�� ���ݷ� : %d\n", character.attack);
	printf("character�� ü�� : %f\n", character.health);
}

int main()
{
	// �Լ� �����Ͷ�?		  
	/*
	// �Լ��� �ּڰ��� �����ϰ� ����ų �� �ִ� �����Դϴ�.

	// �Լ��� �̸��� �Լ��� �ּҸ� ��Ÿ���ϴ�.
	// printf("Calculator�� �ּ� : %p", Calculator);

	// ��ȯ�� (* ������ �̸�) (�Ű����� ���)
	// void     (*ptr)          ( )

	// �Լ� ������ ����
	void (*ptr) ();
	int (*ptr1) (int, int);

	ptr = Calculator;
	ptr1 = Process;

	ptr();

	ptr = Function;

	ptr(10);

	printf("�Լ� �����Ͱ� ����ϴ� �� : %d\n", ptr1(10, 20));

	// �Լ� �����ʹ� �Լ��� ��ȯ���� �Ű������� Ÿ���� ��ġ�ؾ� �ϸ�,
	// �Լ� �����͸� ����Ͽ� �������� �޸𸮸� �Ҵ��� �� �����ϴ�.

	void (*arrayPtr[2]) ();
	arrayPtr[0] = Calculator;
	arrayPtr[1] = Function;

	// �Լ��� ȣ���ϴ� ����� ȣ���� �Լ��� ������ �ÿ� �����Ǿ�� �մϴ�.
	// �׷��� ������ ���� �ð��� �������� ������ �� �����ϴ�.
	arrayPtr[0]();
	arrayPtr[1](10);
	*/

	// ����ü��?
	// ���� ���� ������ �ϳ��� �������� ����ȭ�� ����  
	// �ϳ��� ��ü�� �����ϴ� ���Դϴ�.

	struct Character champion1;

	// ����ü ������ �ʱ�ȭ�� �� �ʱ�ȭ ����� ����� ���
	// ���� ù ��° ��� �������� �ڷ����� ���߾� �����͸� �����ؾ� �մϴ�.
	struct Character champion2 = { "Alistar", 200.0f ,5 };

	champion1.name = "Leesin";
	champion1.attack = 10;
	champion1.health = 100.0f;

	ObjectOutput(champion1);
	ObjectOutput(champion2);

	return 0;
}
