#include<iostream>
#include<string>
#include<vector>
#include<queue>
#include <stdio.h>
#include<string.h>
using namespace std;

#define ROW 5 
#define COL 5 
int isSafe(int m[][COL], int row, int col, int visited[][COL])
{
	return (row >= 0) && (row < ROW) && (col >= 0) && (col < COL) && (m[row][col] && !visited[row][col]); 
}
void dfs(int m[][COL], int row, int col, int visited[][COL])
{
	static int rowNbr[] = { -1, -1, -1, 0, 0, 1, 1, 1 }; 
    static int colNbr[] = { -1, 0, 1, -1, 1, -1, 0, 1 }; 
    visited[row][col]=1;
    int k;
    for(k=0;k<8;k++)
    {
    	if(isSafe(m, row+rowNbr[k], col+colNbr[k], visited))
    	{
    		dfs(m, row+rowNbr[k], col+colNbr[k], visited);
		}
	}
}
int countIslands(int m[][COL])
{
	int visited[ROW][COL], i, j;
	for(i=0;i<ROW;i++)
	{
		for(j=0;j<COL;j++)
		{
			visited[i][j]=0;
		}
	}
	//memset(visited, 0, sizeof(visited)); 
	int count=0;
//	int i, j;
	for(i=0;i<ROW;i++)
	{
		for(j=0;j<COL;j++)
		{
			if(m[i][j]==1 && !visited[i][j])
			{
				dfs(m, i, j, visited);
				++count;
			}
		}
	}
	return count;
}

int main()
{
	int M[][COL] = { { 1, 1, 0, 0, 0 }, 
                     { 0, 1, 0, 0, 1 }, 
                     { 1, 0, 0, 1, 1 }, 
                     { 0, 0, 0, 0, 0 }, 
                     { 1, 0, 1, 0, 1 } }; 
  
    cout << "Number of islands is: " << countIslands(M); 
  
    return 0; 
}
