#pragma once
#include <iostream>
#include <stack>
#include <queue>

using namespace std;

#pragma region �����̳� �����
// ���� �����̳��� �������̽��� �����Ͽ�
// ���� ����� ���ѵǰų� ������ �����̳��Դϴ�.
#pragma endregion

int main()
{
#pragma region �����̳� ����� (Stack) 

    //std::stack<int> stack;

    //stack.push(10);
    //stack.push(20);
    //stack.push(30);
    //stack.push(40);
    //stack.push(50);
    //
    //// cout << "Stack�� Top : " << stack.top() << endl;

    // 50
    // 40
    // 30
    // 20
    // 10 

    //while (stack.empty() == false)
    //{
    //    cout << "Stack�� Top : " << stack.top() << endl;
    //    stack.pop();
    //}
#pragma endregion 

#pragma region �����̳� ����� (Queue) 

  /*  std::queue<int> queue;

    queue.push(10);
    queue.push(20);
    queue.push(30);
    queue.push(40);

    while (queue.size())
    {
        cout << queue.front() << endl;
        queue.pop();
    }*/


#pragma endregion

#pragma region �����̳� ����� (Priority Queue)
    //std::priority_queue<int> priorityQueue;

    //priorityQueue.push(4);  // [0] (7) 
    //                        
    //priorityQueue.push(7);  // [1] (4)
    //priorityQueue.push(3);  // [2] (3)
    //priorityQueue.push(1);  // [3] (1)
    //priorityQueue.push(10); // [4] (10)
    //                        
    //while (priorityQueue.size())
    //{
    //    cout << priorityQueue.top() << endl;
    //    priorityQueue.pop();
    //}

#pragma endregion

    return 0;
}