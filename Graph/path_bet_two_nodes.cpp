#include<bits/stdc++.h>
using namespace std;
void addEdge(vector <int> v[], int x, int y)
{
	v[x].push_back(y);
}
int bfs(int x, int y, vector <int> v[])
{
	list <int> q;
	int visited[4];
	memset(visited, 0, sizeof(visited));
	visited[x]=1;
	
	q.push_back(x);
	while(!q.empty())
	{
		int curr = q.front();
		q.pop_front();
		for(auto it=v[curr].begin();it!=v[curr].end();it++)
	{
		int m = *it;
		if(m==y)
		{
			return 1;
		}
		if(!visited[m])
		{
			q.push_back(m);
			visited[m]=1;
			//bfs(m, y, v);
		}
		
	}
	}
	return 0;
	
}
int main()
{
	int n=4;
	vector <int> v[n];
	addEdge(v, 0, 1); 
    addEdge(v, 0, 2); 
    addEdge(v, 1, 2); 
    addEdge(v, 2, 0); 
    addEdge(v, 2, 3); 
    addEdge(v, 3, 3); 
    int x=1, y=3;
    int res = bfs(x, y, v);
    if(res==1)
    {
    	cout<<"\nPath exist! ";
	}
}
