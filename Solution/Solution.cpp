#include <iostream>
#include "Marine.h"

using namespace std;

#pragma region �Լ��� �����ε�
   // ���� �̸��� �Լ��� �Ű� ������ �ڷ����� �Ű�������
   // ���� �����Ͽ� ���� ���� ������ �� �ִ� ����Դϴ�.

void Calculator(char x, char y)
{
	cout << "x + y : " << x + y << endl;
}

void Calculator(int x, int y)
{
	cout << "x + y : " << x + y << endl;
}

void Calculator(float x, float y)
{
	cout << "x + y : " << x + y << endl;
}

// �Լ��� �����ε��� ��� �Լ��� �Ű� ������
// �����ϴ� �μ��� ���¸� ���� ȣ���ϹǷ�, ��ȯ������
// �Լ��� �����ε��� ������ �� �����ϴ�.
//int Calculator(float x, float y)
//{
//
//}

#pragma endregion

void Recovery(Unit * unit)
{

}

int main()
{
#pragma region  �Լ��� �����ε�
	//Calculator('A', 'B');
	//Calculator(10, 20);
	//Calculator(5.75f, 6.25f);	
#pragma endregion

#pragma region ���� ���� �Լ�
	// �Լ��� ���� �� �� ������, �ش� Ŭ�������� ������ �� �� ����,
	// ��ӹ��� ���� Ŭ�������� �ݵ�� �����Ǹ� �ؾ��ϴ� ��� �Լ��Դϴ�.

	Marine * marine = new Marine;

	marine->SetHP(75);
	marine->Skill();

	Recovery(marine);

	cout << marine->GetHP() << endl;
#pragma endregion


	return 0;
}

