#include<iostream>
#include<vector>
#include<bitset>
#include<algorithm>
#include<string>
#include<climits>
using namespace std;


int solve(	bitset <32>a)
{
	unsigned long long i, count=0;
	for(i=0;i<32;i++)
	{
		if(a[i]==1)
		{
			count++;
		}
	}
	if(count==1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main()
{
	int t, i, k, res;
	
	cout<<"\nEnter test cases :: ";
	cin>>t;
	for(i=0;i<t;i++)
	{
		unsigned long long n;
	//	cout<<"\nEnter n ::";
		cin>>n;
		bitset <32>a(n);
	//	cout<<a;
		res = solve(a);
		if(res==1)
		{
			cout<<"YES\n";
		}
		else
		{
			cout<<"NO\n";
		}
	
	}
	
}
