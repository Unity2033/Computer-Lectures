#pragma once
#include <stdio.h>

// ����Ʈ �е�
/*
// ��� ������ �޸𸮿��� CPU�� ���� �� �� ���� ���� �� �ֵ���
// �����Ϸ��� ������������ ��Ͽ� ���߾ ����Ʈ�� �е����ִ� ����ȭ �۾��Դϴ�.

// �������Ͷ�?
// ���μ����� ��ġ�� ��� �޸𸮷� ���� �ҷ��� �����ͳ� ó�� ���� �߰� ����͵� ����
// ���μ����� �ٷ� ����� �� �ִ� �����͸� ��� �ִ� ����

struct Champion
{
	// ����ü�� ũ��� ����ü�� �����ϴ� ��� ���� �߿��� ���� ū ��� ������ �ڷ�����
	// ����� �ǵ��� �����մϴ�.

	char grade;	// 1 byte
	double position; // 8 byte
	int health;	// 4 byte
};
*/

// �ڱ� ���� ����ü
struct Node
{
	int data; // 4 byte
	struct Node* next; // 8 byte
};

int main()
{
	// ����Ʈ �е�
	/*
	struct Champion champion;

	printf("Champion�� ũ�� : %d", sizeof(champion));
	*/

	// �ڱ� ���� ����ü
	struct Node node1 = { 10, NULL };
	struct Node node2 = { 20, NULL };
	struct Node node3 = { 30, NULL };

	node1.next = &node2;
	node2.next = &node3;

	printf("Node1�� data�� �� : %d\n", node1.data);
	printf("Node2�� data�� �� : %d\n", node1.next->data);
	printf("Node3�� data�� �� : %d\n", node1.next->next->data);
	return 0;
}
