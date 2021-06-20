#include<bits/stdc++.h>
using namespace std;
typedef pair<int, int> iPair;
struct edge
{
	int u, v, w;
};
int ind =0;
void addEdge(vector <pair<int, int> > adj[], int u, int v, int w, struct edge ed[], int e)
{
	adj[u].push_back(make_pair(v, w));
	adj[v].push_back(make_pair(u, w));
	ed[ind].u = u;
	ed[ind].v = v;
	ed[ind].w = w;
	ind++;
	
}
int find_par(int parents[], int i)
{
	if(parents[i]!=i)
	{
		return find_par(parents, parents[i]);
	}
	return parents[i];
}
int krus(vector <pair<int, int> > adj[], int n, struct edge ed[], int e)
{
//	priority_queue< iPair, vector <iPair> , greater<iPair> > pq;
int out = 0;
struct edge output[20];
	sort(ed, ed+e, [](struct edge a, struct edge b){
		return a.w<b.w;
	});
	int visited[n] = {0};
	int parents[n];
	memset(visited, 0, sizeof(visited));
	int i;
	for(i=0;i<n;i++)
	{
		parents[i]=i;
	}
	for(i=0;i<e;i++)
	{
		cout<<"\n"<<ed[i].u<<" "<<ed[i].v<<" "<<ed[i].w;
	//	cout<<"visited "<<visited[i];
	}
	for(i=0;i<e;i++)
	{
		int x = find_par(parents, ed[i].u);
		int y = find_par(parents, ed[i].v);
		if(x!=y)
		{
			parents[x]=y;
			output[out]=ed[i];
			out++;
		}
	}
	int cost = 0;
	for(i=0;i<out;i++)
	{
		cost = cost + output[i].w;
	}
	cout<<"\nMinimum cost is "<<cost;
	
	 
}
int main()
{
	int n=5, e=7;
	vector <pair<int, int> > adj[n];
	struct edge ed[e];
	addEdge(adj, 0, 1, 10, ed, e); 
    addEdge(adj, 0, 4, 20, ed, e); 
    addEdge(adj, 1, 2, 30, ed, e); 
    addEdge(adj, 1, 3, 40, ed, e); 
    addEdge(adj, 1, 4, 50, ed, e); 
    addEdge(adj, 2, 3, 60, ed, e); 
    addEdge(adj, 3, 4, 70, ed, e);
	int cost = krus(adj, n, ed, e);
}
