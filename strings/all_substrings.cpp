#include<iostream>
#include<string>
#include<bitset>
#include<math.h>
using namespace std;
void solve(string str, int n, int binary)
{
	string s = "";
	int i, j, k;
	for(i=0;i<n;i++)
	{
		if(binary&(1<<i))
		{
			s+=str[i];
		}
	}
	cout<<"\n"<<s;
}
int main()
{
	string str;
	str = "abcd";
	int n = str.length();
	int count = pow(2,n)-1;
	cout<<"\nCount = "<<count;
	int i, m;
	for(i=1;i<=count;i++)
	{
		solve(str, n, i);
	}
}
