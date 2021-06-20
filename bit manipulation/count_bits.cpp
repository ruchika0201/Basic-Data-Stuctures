#include<iostream>
#include<vector>
#include<bitset>
#include<algorithm>
#include<string>
using namespace std;

int count_active(bitset<32> n)
{
	int i, count=0;
	for(i=0;i<32;i++)
	{
		if(n[i]==1)
		{
			count++;
			cout<<"\n1 is at ::"<<i;
		}
	}
	return count;
}

int main()
{
	long long n;
	cout<<"\nEnter number::";
	cin>>n;
	bitset<32> bset2(n);
	cout<<"\nBinary format :::"<<bset2;
	int x =  bset2.to_ulong();
	cout<<"\nNumber is :: "<<x;
	int count1 = count_active(bset2);
	cout<<"\nNumber of 1's is ::"<<count1;
	cout<<"\nNumber of 1's using inbuilt function ::"<<bset2.count();
	
	
}
