#include<iostream>
#include<vector>
#include<bitset>
#include<algorithm>
#include<string>
using namespace std;
int result(bitset<8>bset, int p1, int p2, int n)
{
	int i, j;
	bitset<8>a1, a2;
	int x=p1, y=p2;
	for(i=0;i<n;i++)
	{
		cout<<"bset[x]::"<<bset[x];
			cout<<"bset[y]::"<<bset[y];
		a1[i]=bset[x];
		a2[i]=bset[y];
		x++;
		y++;
	}
		for(i=0;i<n;i++)
	{
	cout<<"\nArray 1::"<<a1[i];
	}
			for(i=0;i<n;i++)
	{
	cout<<"\nArray 2::"<<a2[i];
	}
	x=p1;
	y=p2;
	for(i=0;i<n;i++)
	{
		bset[x]=a2[i];
		bset[y]=a1[i];
		x++;
		y++;
	}
	int res = (int) bset.to_ulong();
	return res;
	
	
	
	
}
int main()
{
	int p1, p2, num, res;
	int n;
	
	cout<<"\nEnter number ::";
	cin>>num;
	bitset<8> bset(num); 
	cout<<bset;
	cout<<"\nEnter p1 & p2 ::";
	cin>>p1>>p2;
	cout<<"\nEnter number of swaps ::";
	cin>>n;
	res = result(bset, p1, p2, n);
	cout<<"\nResult is ::"<<res;
	
}
