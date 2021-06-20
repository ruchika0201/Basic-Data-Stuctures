#include<iostream>
#include<vector>
#include<bitset>
#include<string>
using namespace std;

int main()
{
	int n;
	cout<<"\nEnter number::";
	cin>>n;
	bitset<32> bset2(n);
	cout<<"\nNumber is : "<<  bset2;
}
