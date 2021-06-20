#include<iostream>
#include<string>
#include<vector>
#include<list>
using namespace std;
int bfs(vector <int> v[], int s, int d, int pre[], int dist[], int n)
{
	list <int> q;
	int visited[n]={0}, j;
	  for (int i = 0; i < n; i++) { 
        visited[i] = 0; 
        dist[i] = 0; 
        pre[i] = -1; 
    } 
	visited[s]=1;
	q.push_back(s);
	while(!q.empty())
	{
		int c = q.front();
		q.pop_front();
		for(auto i=0;i< v[c].size();i++)
		{
			int u = v[c][i];
			if(visited[u]==0)
			{
				visited[u]=1;
				pre[u]=c;
				dist[u]=dist[c]+1;
				q.push_back(u);
			}
			if(u==d)
			{
				return 1;
			}
		}
	}
	return 0;
}

void shortest_path(vector<int> v[], int n)
{
	int visited[n]={0}, pre[n]={0}, dist[n]={-1}, s, d, i;
	cout<<"\nEnter the source ::";
	cin>>s;
	cout<<"\nEnter the destination ::";
	cin>>d;
	if(bfs(v, s, d, pre, dist, n)==0)
	{
		cout<<"\nThere exist no path between source and the destination\n";
		return ;
	}
	else
	{
		vector <int> path;
		int crawl=d;
		path.push_back(crawl);
		while(crawl!=-1)
		{
			crawl = pre[crawl];
			path.push_back(crawl);
		}
		cout<<"\nPath is ";
		for(i=0;i<path.size();i++)
		{
			cout<<path[i]<<"\t";	
		}
		cout<<"\nDistance is "<<dist[d];
		
	}
}
int main()
{
	int n, e, i, j, x, y;
	cout<<"\nEnter the number of vertices ::";
	cin>>n;
	cout<<"\nEnter the number of edges ::";
	cin>>e;
	vector <int> v[n];
	for(i=0;i<e;i++)
	{
		cout<<"\nEnter the start point :";
		cin>>x;
		cout<<"\nEnter the ending point :";
		cin>>y;
		v[x].push_back(y);
		
	}
	cout<<"\nPrinting the graph\n";
	for(i=0;i<n;i++)
	{
		for(j=0;j<v[i].size();j++)
		{
			cout<<v[i][j];
		}
	}
	shortest_path(v, n);
}
