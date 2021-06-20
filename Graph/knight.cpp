#include<iostream>
#include<string>
#include<vector>
#include<queue>
using namespace std;
struct cell
{
	int s, d, dist;
	cell(){
	}
	cell(int x, int y, int dist):s(x), d(y), dist(dist)
	{
		
	}
};

bool isInside(int x, int y, int N) 
{ 
    if (x >= 1 && x <= N && y >= 1 && y <= N) 
        return true; 
    return false; 
} 

int mindist(int start[], int dest[], int n)
{
	int dx[] = {-2, -1, 1, 2, -2, -1, 1, 2 };
	int dy[] = {-1, -2, -2, -1, 1, 2, 2, 1};
	queue <cell> q;
	q.push(cell(start[0], start[1], 0));
	struct cell t;
	int x, y;
	int visited[n+1][n+1], i,j,k;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			visited[i][j]=0;
		}
	}
	visited[start[0]][start[1]]=1;
	while(!q.empty())
	{
		t=q.front();
		q.pop();
		if(t.s==dest[0] && t.d==dest[1])
		{
			return t.dist;
		}
			for(i=0;i<8;i++)
			{
				x = t.s + dx[i];
				y = t.d + dy[i];
				
				if(isInside(x, y, n) && !visited[x][y])
				{
					visited[x][y]=1;
					q.push(cell(x, y, t.dist+1));
				}
			}
	}
	
}
int main()
{
	int n=30;
	int start[] = {1, 1};
	int dest[] = {30, 30};
	cout<<mindist(start, dest, n);
}
