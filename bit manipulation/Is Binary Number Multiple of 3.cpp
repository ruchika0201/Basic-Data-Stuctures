#include<iostream>
#include<vector>
#include<bitset>
#include<algorithm>
#include<string>
using namespace std;
int solve(string s)
{
	cout<<"\nString is ::"<<s;
	bitset<32> a(s);
	
	int n = (int) a.to_ulong();
	cout<<"\nNumber is ::"<<n<<"\n";
	if(n%3==0)
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
	int t, i, j;
	cout<<"\nEnter test cases :: ";
	cin>>t;
	string s;
	for(i=0;i<t;i++)
	{
		string s2;
		cout<<"Enter binary string::\n";
		//cin.ignore();
		//getline(cin,s2);
		cin>>s2;
		s.assign(s2);
		cout<<"\nAssigned string is ::"<<s;
		int res = solve(s);
	cout<<res;
	//s.clear();
	}

}
