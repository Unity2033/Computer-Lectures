#pragma once
#include <iostream>
#include <vector>
#include <deque>
#include <time.h>
#include <conio.h>
#include <windows.h>

using namespace std;

#pragma region ���� �����̳�
// �����͸� �������� �����ϸ�, Ư���� �����̳�
// ��Ģ�� ���� �Ϲ����� �����̳��Դϴ�.

#pragma endregion

#define UP 72
#define DOWN 80
#define LEFT 75
#define RIGHT 77

int createCount;

void GotoXY(int x, int y)
{
	// x, y ��ǥ ����
	COORD position = { x, y };

	// Ŀ�� �̵�
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), position);
}

int main()
{
#pragma region Vector �����̳�
	//std::vector<int> vector;

	//// push_back() : �� �ʿ� �����͸� �����ϴ� �Լ�
	////  0	 1	  2
	//// [10]	[20] [30]
	//vector.push_back(10);
	//vector.push_back(20);
	//vector.push_back(30);

	//cout << "vector.size : " << vector.size() << endl;
	//cout << "capacity : " << vector.capacity() << endl;
 //
	//for (int i = 0; i < vector.size(); i++)
	//{
	//	cout << vector[i] << endl;
	//}

	//vector.push_back(40);
	//vector.push_back(50);

	////  0	 1	  2	   3
 //   // [10]	[20] [30] [40]
	//vector.pop_back();

	//cout << "vector.size : " << vector.size() << endl;
	//cout << "capacity : " << vector.capacity() << endl;

	//for (int i = 0; i < vector.size(); i++)
	//{
	//	cout << vector[i] << endl;
	//}
#pragma endregion

#pragma region ���� ����
	//srand(time(NULL));

	//std::vector<const char*> note;
	//createCount = 5;

	//for (int i = 0; i < createCount; i++)
	//{
	//	int random = rand() % 4;

	//	switch (random)
	//	{
	//		case 0: note.push_back("��");
	//			break; 
	//		case 1: note.push_back("��");
	//			break;
	//		case 2: note.push_back("��");
	//			break;
	//		case 3: note.push_back("��");
	//			break;
	//	}
	//}

	//char key = 0;
	//
	//// note ����ִ�.  note.empty() -> 0  

	//while (note.empty() == false)
	//{
	//	for (int i = 0; i < note.size(); i++)
	//	{
	//		cout << note[i] << " ";
	//	}

	//	key = _getch();

	//	if (key == -32)
	//	{
	//		key = _getch();
	//	}

	//	switch (key)
	//	{
	//	case UP : if (note[note.size() - 1] == "��")
	//		{
	//			note.pop_back();
	//		}
	//		break;
	//	case LEFT : if (note[note.size() - 1] == "��")
	//		{
	//			note.pop_back();
	//		}
	//		break;
	//	case RIGHT : if (note[note.size() - 1] == "��")
	//		{
	//			note.pop_back();
	//		}
	//		break;
	//	case DOWN : if (note[note.size() - 1] == "��")
	//		{
	//			note.pop_back();
	//		}
	//		break;
	//	}

	//	system("cls");	
	//}

#pragma endregion

#pragma region deque �����̳�

	// Deque ����
	std::deque<int> deque;

	deque.push_back(10);
	deque.push_back(20);
	deque.push_front(99);

	for (int i = 0; i < deque.size(); i++)
	{
		cout << deque[i] << endl;
	}

#pragma endregion

	return 0;
}