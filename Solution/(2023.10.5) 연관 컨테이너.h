#pragma once
#include <iostream>
#include <list>
#include <vector>

using namespace std;

int main()
{
#pragma region ���ڿ�
	// KEY�� VALUE�� �ϳ��� �������� �̷����
// �����̳��Դϴ�.

//std::string content = "HELLO";

//// const char * name
//cout << "content ������ �� : " << content << endl;
//cout << "content ������ �� : " << content.size() << endl;
//cout << "content ������ �� : " << content.length() << endl;


//content = "League";
//cout << "content ������ �� : " << content << endl;
//
//cout << content.find("ue") << endl;
#pragma endregion

#pragma region ���� �����̳�

	//std::list<int> dataList;

	//dataList.push_back(10);
	//dataList.push_front(50);
	//dataList.push_front(25);
	//dataList.push_back(33);

	//// 25 50 10 33
	//// dataList.begin()	: ù ��° �ּҷ� ��ȯ
	//// dataList.end() : �������� �ִ� �״��� �ּҸ� ��ȯ

	//// (begin)				 (end)
	////  [25] [50] [10] [33] 
	//// �ݺ���

	//// [25] [50] [10]
	//dataList.pop_back();

	//list<int>::iterator iter; 

	//iter = dataList.begin();

	//dataList.insert(iter, 77);

	//for (iter = dataList.begin(); iter != dataList.end(); iter++)
	//{	
	//	cout << *iter << endl;
	//}

	// �ݺ��� ��ȿȭ

	// [���� ����]

	/*std::vector<int> vectorInt;

	vector<int>::iterator vectorIter;

	vectorInt.reserve(8);

	vectorInt.emplace_back(10);
	vectorInt.emplace_back(20);
	vectorInt.emplace_back(30);
	vectorInt.emplace_back(40);

	vectorIter = vectorInt.begin();

	vectorInt.erase(vectorIter + 2);

	for (int i = 0; i < vectorInt.size(); i++)
	{
		cout << vectorInt[i] << endl;
	}*/

#pragma endregion

	return 0;
}