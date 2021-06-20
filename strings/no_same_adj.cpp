#include<iostream>
#include<algorithm>
#include<bitset>
using namespace std;

void solve(string str, int n)
{
	int i, j, x=0, flag=0;
	for(i=1;i<=n;i++)
	{
		flag=0;
		x=i;
		while(str[x]==str[x-1])
		{
			x++;
			flag=1;
		}
		if(flag==1)
		{
			swap(str[i], str[x]);
		}
		
	}
	cout<<"\n"<<str;
}
int main()
{
	string str = "aaabc";
	int n = str.length();
	solve(str, n);
}
