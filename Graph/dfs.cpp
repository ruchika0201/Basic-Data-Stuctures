#include<iostream>
#include<string>
#include<list>
#include<vector>
using namespace std;
void dfs(vector<vector<int> > v, int n, int c, int visited[])
{
	visited[c]=1;
	cout<<c<<"\t";
	for(auto i=v[c].begin();i!=v[c].end();i++)
	{
		if(!visited[*i])
		{
			dfs(v, n, *i, visited);
		}
	}
}
void add(int x, int y, vector<vector<int> >&v)
{
v[x].push_back(y);
	
}
int main()
{
	
	int n, i, j, e;
	cout<<"\nEnter number of nodes :";
	cin>>n;
	vector<vector<int> > v; 
	v.assign(n, vector<int>());
	cout<<"\nEnter number of edges :";
	cin>>e;
	int x, y;
	for(i=0;i<e;i++)
	{
		
		cout<<"\nEnter start vertex : ";
		cin>>x;
		cout<<"\nEnter end vertex : ";
		cin>>y;
		add(x, y, v);
		
		
		
	}
	cout<<"\nPrint list \n";
	for(i=0;i<n;i++)
	{
		cout<<"\n"<<i<<" : ";
		for(j=0;j<v[i].size();j++)
		{
			cout<<"\t"<<v[i][j];
		}
		cout<<"\n";
	}
	int visited[n]={0};
	cout<<"\nEnter the vertex for DFS :: ";
	int c;
	cin>>c;
	cout<<"\nDFS OF A GRAPH\n";
	dfs(v, n, c, visited);
}
