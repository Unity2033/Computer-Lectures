#pragma once
#include <iostream>
using namespace std;

int data = 25;

namespace A
{
	void Attack()
	{
		cout << "A ������ Attack( )" << endl;
	}
}

namespace B
{
	void Attack()
	{
		cout << "B ������ Attack( )" << endl;
	}
}

void Damage(int hp = 100)
{
	hp -= 25;
	cout << "hp�� �� : " << hp << endl;
}

// �⺻ �Ű������� �����ʿ��� ���ʹ� �����ؾ� �մϴ�.
void Move(int x, int y, int z = 10)
{
	cout << "x�� �� : " << x << endl;
	cout << "y�� �� : " << y << endl;
	cout << "z�� �� : " << z << endl;
}

int main()
{
#pragma region ���� ���� ������
	// ���� �������� ���Ǵ� �ĺ��ڸ� �����ϴµ�
	// ����ϴ� �������Դϴ�.

	/*int data = 100;

	std::cout << "���� ���� data�� �� : " << data << std::endl;
	std::cout << "���� ���� data�� �� : " << ::data << std::endl;*/

	// ���� ���� �����ڴ� ���� ������ ���� �̸��� ���� ������
	// ����Ǿ��� �� ���� ����� ������ ����� ������ �̸���
	// ����ϴ� ���� ��Ģ�� �����ϱ� ������ ���� ������ ȣ����� �ʽ��ϴ�.
#pragma endregion

#pragma region �̸� ����
	// �Ӽ��� ������ �� �ֵ��� ��ȿ ������ �����ϴ� �����Դϴ�.

	// A::Attack();
	// B::Attack();

#pragma endregion

#pragma region �⺻ �Ű�����
	// �Լ��� �Ű� ������ ���� ���޵��� �ʾ��� ��
	// �⺻ ������ �����Ǵ� �Ű� �����Դϴ�.

	//int hp = 100;

	//Damage();
	//Move(5, 10);

	//// �⺻ �Ű������� �ִ� ��ġ�� �ٽ� ���ο� �μ���
	//// �־��� �� �ֽ��ϴ�.
	//Move(5, 10, 25);
#pragma endregion

#pragma region �ּ� �����

	int x = 0;
	int y = 0;
	int count = 1;

	std::cin >> x >> y;

	for (int i = 2; i <= y; i++)
	{
		if (x % i == 0 && y % i == 0)
		{
			count *= i;
			x /= i;
			y /= i;

			i--;
		}
	}

	std::cout << count * x * y << std::endl;

#pragma endregion

	return 0;
}

