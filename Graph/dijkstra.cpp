#include<bits/stdc++.h>
using namespace std;
typedef pair<int, int> iPair; 
void addEdge(vector <pair<int, int> > graph[], int u, int v, int w)
{
	graph[u].push_back(make_pair(v, w));
	graph[v].push_back(make_pair(u, w));
	
}
void dij(vector <pair<int, int> > graph[], int src, int n)
{
	vector<int> dist(n,99999);
//	priority_queue< pair<int, int>, vector <pair<int, int> > , greater<pair<int, int> > pq;
	priority_queue< iPair, vector <iPair> , greater<iPair> > pq; 
	dist[src]=0;
	int visited [n];
	for(int k =0;k<n;k++)
	{
		visited[k]=0;
	}
	pq.push(make_pair(0, src));
	dist[src]=0;
	
	while(!pq.empty())
	{
		int u = pq.top().second;
		pq.pop();
		for(auto it = graph[u].begin(); it!=graph[u].end();it++)
		{
			int v = it->first;
			int w = it->second;
			if(dist[v]>dist[u]+w)
			{
				dist[v]=dist[u]+w;
				pq.push(make_pair(dist[v], v));
			}
		}
	}
	int i;
	cout<<"\nVertex\tDistance from source";
	for(i=0;i<n;i++)
	{
		cout<<"\n"<<i<<" : "<<dist[i];
	}
	
}
void print(vector <pair<int, int> > graph[], int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		for(auto it = graph[i].begin();it!=graph[i].end();it++)
		{
			cout<<"\nSource : "<<i<<"\tDestination : "<<it->first<<"\tWeight :"<<it->second;
		}
	}
}
int main()
{
	int n=9;
	int i, j;
//	cout<<"\nEnter number of vertices :";
//	cin>>n;
	vector <pair<int, int> > graph[n];
	int e;
//	cout<<"\nEnter number of edges :";
//	cin>>e;
	addEdge(graph, 0, 1, 4); 
    addEdge(graph, 0, 7, 8); 
    addEdge(graph, 1, 2, 8); 
    addEdge(graph, 1, 7, 11); 
    addEdge(graph, 2, 3, 7); 
    addEdge(graph, 2, 8, 2); 
    addEdge(graph, 2, 5, 4); 
    addEdge(graph, 3, 4, 9); 
    addEdge(graph, 3, 5, 14); 
    addEdge(graph, 4, 5, 10); 
    addEdge(graph, 5, 6, 2); 
    addEdge(graph, 6, 7, 1); 
    addEdge(graph, 6, 8, 6); 
    addEdge(graph, 7, 8, 7); 
	print(graph, n);
	dij(graph, 0, n);
	
	
}
