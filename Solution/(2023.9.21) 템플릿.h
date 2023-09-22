#pragma once
#include <iostream>
#include "LinkedList.h"

using namespace std;

#pragma region ���ø�
// ������ ���Ŀ� �������� �ʰ�, �ϳ��� ����
// ���� �ٸ� ������ Ÿ�Ե��� ���� �� �ִ�
// ����� ������ �ξ� ���뼺�� ���� �� �ִ� ����Դϴ�.

// int	     �����̸�
// typename	 �����̸�

template <typename T>
void Add(T value1, T value2)
{
	cout << value1 + value2 << endl;
}

template <>
void Add(char value1, char value2)
{
	cout << value1 << " : " << value2 << endl;
}

template<typename T1, typename T2>
void Add(T1 value1, T2 value2)
{
	cout << value1 + value2 << endl;
}
#pragma endregion


int main()
{
#pragma region  ���ø�
	/*
	Add( 'A', 2 );

	Add( 10, 15.75);
	Add( 5.75f, 4.85f );
	*/

	LinkedList<int> linkedList();


	// linkedList.Push(10);

#pragma endregion



	return 0;
}