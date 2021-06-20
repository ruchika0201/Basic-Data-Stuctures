//BFS OF A GRAPH
#include<iostream>
#include<string>
#include<list>
#include<vector>
using namespace std;
void bfs(vector<vector<int> > v, int n)
{
	int i, s;
	list<int> q;
	int visited [n]={0};
	cout<<"\nBFS\n";
	cout<<"\nEnter the starting point :";
	cin>>s;
	visited[s]=1;
	q.push_back(s);
	list <int> :: iterator it;
	while(!q.empty())
	{
		int f = q.front();
		cout<<"\t"<<f;
		q.pop_front();
	  for (auto i = v[f].begin(); i != v[f].end(); i++) { 
            if (!visited[*i]) { 
                q.push_back(*i); 
                visited[*i] = 1; 
            } 
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
	bfs(v, n);
}
