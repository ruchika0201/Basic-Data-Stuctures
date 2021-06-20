#include<bits/stdc++.h>
using namespace std;

int find_par(int parent[], int ind)
{
	if(parent[ind]==-1)
	{
		return ind;
	}
	return find_par(parent, parent[ind]);
}
void union_set(int parent[], int p, int q)
{
	parent[p]=q;
}
int main()
{
	int n;
	cout<<"\nEnter number of vertices : ";
	cin>>n;
	int e;
	cout<<"\nEnter number of vertices : ";
	cin>>e;
	vector <pair<int, int> > v;
	int i;
	for(i=0;i<e;i++)
	{
		int x, y;
		cout<<"\nEnter pairs :: ";
		cin>>x>>y;
		v.push_back(make_pair(x, y));
	}
	int parent[n];
	memset(parent, -1, sizeof(parent));
	for(i=0;i<e;i++)
	{
		int p = find_par(parent, v[i].first);
		int q = find_par(parent, v[i].second);
		
		if(p==q)
		{
			cout<<"\nCycle Detected !";
			break;
		}
		union_set(parent, p, q);
		
	}
}

