#include<iostream>
#include<list>
using namespace std;
void count(int s, int d, list<int> vec[], int& path_count);
int count_util(int s, int d, list<int>vec[])
{
	int path_count = 0;
	count(s, d, vec, path_count);
	return path_count;
}

void count(int s, int d, list<int> vec[], int& path_count)
{
	if(s==d)
	{
		path_count++;
	}
	else
	{
		list<int>::iterator it;
		for(it=vec[s].begin();it!=vec[s].end();it++)
		{
			count(*it, d, vec, path_count);
		}
	}
}
void add(list <int> ver[], int u, int v)
{
	ver[u].push_back(v);	
//	ver[v].push_back(u);
}

int main()
{
	
	int n, i, e, u, v, x;
	cout<<"\nEnter the number of vertices :: ";
	cin>>n;
	list <int> ver[n];
	cout<<"\nEnter the number of edges :: ";
	cin>>e;
	for(i=0;i<e;i++)
	{
		cout<<"\nEnter the initial vertex of the edge :: ";
		cin>>u;
		cout<<"\nEnter the final vertex of the edge :: ";
		cin>>v;
		add(ver, u, v);
	}
	for (int j = 0; j < n; ++j) 
    { 
        cout << "\n Adjacency list of vertex "<< j << "\n head ";
		cout << "--->"; 
         list<int> :: iterator it;
      for(it = ver[j].begin(); it != ver[j].end(); ++it) {
         cout << *it << " ";
      }
          
        cout<<"\n"; 
    } 
	int result = count_util(0, 4, ver);
	cout<<"Count is :: "<<result;
}
