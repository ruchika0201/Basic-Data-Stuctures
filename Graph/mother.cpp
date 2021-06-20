#include <iostream>
#include <list>
#include <vector>
#include <algorithm>
using namespace std;
int findmother(list<int> ver[], int i, vector<int> visited, int n);
int motherUtil(list<int> ver[], int n)
{
	vector<int> visited(n, 0);
	int result =0;
	list<int>::iterator it;
	int i;
	for (i = 0; i < n; i++)
	{
		result = findmother(ver, i, visited, n);
		int j;
		for (j = 0; j < n; j++)
		{
			if (visited[j] == 0)
			{
				break;
			}
		}

		if (j == n)
		{
			
			return result;
		}

		for (j = 0; j < n; j++)
		{
			visited[j] = 0;

		}
	}
}

int findmother(list<int> ver[], int i, vector<int> visited, int n)
{
	visited[i] = 1;
	int j;
	for (j = 0; j < n; j++)
	{
		if (visited[j] == 0)
		{
			break;
		}
		else
		{
			continue;
		}
	}

	if (j == n)
	{
		return i;
	}
	else
	{
		list <int>::iterator it;
		for (it = ver[i].begin(); it != ver[i].end(); it++)
		{
			findmother(ver, *it, visited, n);
		}
	}
}

void add(list<int> ver[], int u, int v)
{
	ver[u].push_back(v);
	//	ver[v].push_back(u);
}

int main()
{
	int n, i, e, u, v, x;
	cout << "\nEnter the number of vertices :: ";
	cin >> n;
	list<int> ver[n];
	cout << "\nEnter the number of edges :: ";
	cin >> e;
	for (i = 0; i < e; i++)
	{
		cout << "\nEnter the initial vertex of the edge :: ";
		cin >> u;
		cout << "\nEnter the final vertex of the edge :: ";
		cin >> v;
		add(ver, u, v);
	}

	for (int j = 0; j < n; ++j)
	{
		cout << "\n Adjacency list of vertex " << j << "\n head ";
		cout << "--->";
		list<int>::iterator it;
		for (it = ver[j].begin(); it != ver[j].end(); ++it)
		{
			cout << *it << " ";
		}

		cout << "\n";
	}

	int result = motherUtil(ver, n);
	cout << "Count is :: " << result;
}
