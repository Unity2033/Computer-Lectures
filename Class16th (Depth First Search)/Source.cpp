#include <iostream>
#include <vector>

using namespace std;

#define SIZE 8

class Graph
{
private:
	bool visited[SIZE];
	vector<int> graph[SIZE];

public:
	Graph()
	{
		for (int i = 0; i < SIZE; i++)
		{
			visited[i] = false;
		}
	}

	void InsertEdge(int vertex, int edge)
	{
		graph[vertex].push_back(edge);
		graph[edge].push_back(vertex);

	}

	void DFS(int start)
	{
		// ���� ��带 �湮�� ������ ǥ���մϴ�.
		visited[start] = true;

		// ���� ��带 ����մϴ�.
		cout << start << " ";

		// ���� ���� ����� �ٸ� ��带 ��������� �湮�մϴ�.
		for (int i = 0; i < graph[start].size(); i++)
		{
			// ���� ���� ����� ���� ��带 �����ɴϴ�.
			int next = graph[start][i];

			if (visited[next] == false)
			{
				// ���� ��尡 �湮���� ���� ����� `DFS` �Լ��� ȣ���մϴ�.
				DFS(next);
			}
		}
	}
};

int main()
{
#pragma region ���� �켱 Ž�� (Depth First Search)
	// root ��忡�� �����ؼ� ���� �б�� �Ѿ�� ����
	// �ش� �б⸦ �Ϻ��ϰ� Ž���ϴ� ����Դϴ�.

	// ���� �켱 Ž���� ���� �ڷᱸ���� ����մϴ�

	// 1. ���� ��带 ���ÿ� �ְ� �湮 ó���մϴ�.

	// 2. ������ �ֻ�� ��忡 �湮���� ���� ���� ��尡 ������
	//    �� ��带 ���ÿ� �ְ� �湮 ó���մϴ�.

	// 3. �湮���� ���� ���� ��尡 ������ ���ÿ��� �ֻ�� ��带 �����ϴ�.

	// 4. �� �̻� 2���� ������ ������ �� ���� ������ �ݺ��մϴ�.

	Graph graph;

	graph.InsertEdge(1, 2);
	graph.InsertEdge(1, 3);

	graph.InsertEdge(2, 3);
	graph.InsertEdge(2, 4);
	graph.InsertEdge(2, 5);

	graph.InsertEdge(3, 6);
	graph.InsertEdge(3, 7);

	graph.InsertEdge(4, 5);
	graph.InsertEdge(6, 7);


	graph.DFS(1);

#pragma endregion



	return 0;
}