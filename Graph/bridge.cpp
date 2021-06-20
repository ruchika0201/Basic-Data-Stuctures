#include<bits/stdc++.h>
using namespace std;
void addEdge(vector <int> v[], int x, int y)
{
	v[x].push_back(y);
	v[y].push_back(x);
}
int ti =0;
void dfs(int x, int visited[], int dist[], int time[], vector<int> v[], int parent)
{
	visited[x]=1;
	dist[x]=++ti;
	time[x]=ti;
	for(auto it = v[x].begin();it!=v[x].end();it++)
	{
		if(!visited[*it])
		{
			int m = *it;
			parent[m]=x;
			dfs(m, visited, dist, time, v, parent);
			time[x] = min(time[x], dist[m])
			
		}
	}
}
int main()
{
	vector <int> v[5];
	addEdge(v, 1, 0); 
    addEdge(v, 0, 2); 
    addEdge(v, 2, 1); 
    addEdge(v, 0, 3); 
    addEdge(v, 3, 4);
    int i;
    int visited[5], dist[5], time[5], parent[5];
    memset(visited, 0, sizeof(visited));
    memset(dist, 0, sizeof(dist));
    memset(time, 0, sizeof(time));
    memset(parent, 0, sizeof(parent));
    for(i=0;i<5;i++)
    {
    	dfs(i, visited, dist, time, v, parent);
	}
}

