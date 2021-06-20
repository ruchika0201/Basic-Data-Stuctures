#include <iostream>
#include <string>
using namespace std;
void print(string s, int m, int n)
{
	cout<<"m::"<<m<<"\nn::"<<n;
	cout<<"\nLongest Pallindrome is :: ";
	int i;
	for(i=m;i<n;i++)
	{
		cout<<s[i];
	}
}
void solve(string str)
{
	int len, i, j, k, maxlen=0, start=0,n;
	n = str.length();
	int table[n][n]={{0}};
	for(i=0;i<n;i++)
	{
		table[i][i]=1;
		maxlen=1;
	}
	for(i=1;i<=n;i++)
	{
		if(str[i-1]==str[i])
		{
			table[i-1][i]=1;
			maxlen=2;
			start = i;
		}
	}
	for(k=3;k<=n;k++)
	{
		for(i=0;i<n-k+1	;i++)
		{
			int j = i+k-1;
			if(str[i]==str[j] && table[i+1][j-1]==1)
			{
				table[i][j]=1;
			}
			if(k>maxlen)
			{
				maxlen=k;
				start=i;
			}
		}
	}
	print(str, start, start+maxlen-1);
	
}

int main()
{
	int i,j,n;
	string str="aaaabbaa";
	solve(str);
}
