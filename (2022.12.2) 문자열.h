#pragma once
#include <stdio.h>

void main()
{
	// ���ڿ�
	/*
	// �������� �޸� ������ ����� ���� ������ �����Դϴ�.

	// �迭�� ũ�⸦ �����ϰ� �����͸� �ְ� �Ǹ� �����Ϸ��� �ڵ�
	// ���� �迭�� ũ�⸦ ����մϴ�.

	// string [A] [B] [C] [D] [E] [\0]
	char string [ ] = "ABCDE";

	const char * charPoint = "ABCDE";

	// ���ڿ��� ��� �����͸� �̿��Ͽ� ���ڿ� ����� ����Ű����
	// �� �� ������, ���ڿ� ����� ������ ������ �б� ����
	// ������ ����Ǳ� ������ ���ڿ��� ���� ������ �� �����ϴ�.

	// charPoint[3] = 'G';
	// string = "ABCd";
	charPoint = "BBDDEEGG";

	// ���ڿ� ������ ���� NULL���ڰ� ���Ե˴ϴ�.
	// NULL������ ũ��� 1 Byte�Դϴ�.
	//printf("string �迭�� ũ�� : %d\n", sizeof(string));

	// ���ڿ��� ���鵵 �Բ� �޸� ������ �����Ͽ� ũ�Ⱑ �����Ǹ�
	// , �������� ���ڿ��� ���� �˷��ִ� ���� ���ڰ� �߰��˴ϴ�.

	//char * charPtr = string;

	//printf("charPtr�� ũ�� : %d", sizeof(charPtr));

	//charPtr[1] = 'Z';
	//charPtr[3] = 'T';

	//* charPtr = 'O';
	//string[3] = '\0';

	//charPtr = &string[4];
	//* charPtr = 'M';

	// %s : ���ڿ��� �ѹ��� ����ϴ� ���� �������Դϴ�.
	//printf("%s\n", string);

	// ���ڿ��� ��� ���� �������� �޸� �������� ����Ǿ� ������,
	// ���� �迭 ���̿� ��ȿ�� ���ڸ� �ְ� �Ǹ� ��ȿ�� ���ڱ�����
	// ���ڿ��� ����մϴ�.
	//for (int i = 0; i < 5; i++)
	//{
		//printf("%c ", string[i]);
	//}
	*/

	// sizeof ������
	/*
	// �ڷ����� ũ�⸦ ��ȯ�ϴ� �������Դϴ�.
	printf("char �������� ũ�� : %d\n", sizeof(char));
	printf("short �������� ũ�� : %d\n", sizeof(short));

	int value = 10;
	long data = 10;

	// sizeof �����ڴ� �����͸� Byte ������ ǥ���մϴ�.
	printf("int �������� ũ�� : %d\n", sizeof(value));
	printf("long �������� ũ�� : %d\n", sizeof(data));


	// ���̻縦 �����ؼ� ���ͷ� ����� �ڷ��� ũ�⸦ �����
	// �����մϴ�.
	printf("float �������� ũ�� : %d\n", sizeof(3.14f));

	// ���̻�
	// �Ǽ��� ������ ��
	// 3.14f (float)
	// 3.65 (double)

	printf("double �������� ũ�� : %d\n", sizeof(3.65));
	*/
}
