#include<iostream>
#include<string>
#include<list>
#include<vector>
using namespace std;

int main()
{
	int n, i, x, y;
	cout<<"\nEnter vertices :: ";
	cin>>n;
	vector <int> g[n];
	int e;
	cout<<"\nEnter the edges ::";
	cin>>e;
	for(i=0;i<e;i++)
	{
		cout<<"\nEnter start ::";
		cin>>x;
		cout<<"\nEnter end ::";
		cin>>y;
		g[x].push_back(y);
		g[y].push_back(x);
	}
	int visited[n]={0};
	for(i=0;i<n;i++)
	{
		visited[i]=visited[i]+(int)g[i].size();
	}
	int even=0, odd=0;
	for(i=0;i<n;i++)
	{
		if(visited[i]%2==0)
		{
			even++;
		}
		else
		{
			odd++;
		}
	}
	if(even==n)
	{
		cout<<"\nThere exist EULARIAN CIRCUIT\n";
	}
	else if(odd==2)
	{
		cout<<"\nThere exist EULARIAN PATH\n";
	}
	else
	{
		cout<<"\nThere exist no EULARIAN PATH OR CIRCUIT";
	}
	
}
