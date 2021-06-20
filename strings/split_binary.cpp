#include<iostream>
#include<algorithm>
#include<bitset>
using namespace std;

int solve(string str, int n)
{
	bitset<16> bset(str);
	string st="", zero="0", one="1";
	cout<<bset;
	int set = bset.count();
	cout<<"\n"<<set;
	int m = n-set;
	int c=0, i, flag=0;
	while(m>0&&n>0)
	{
		c++;
		for(i=0;i<c;i++)
		{
			st = st + zero + one;
			
		}
		sort(st.begin(), st.end());
		do
		{
			int found = str.find(st);
			if(found!=str.npos)
			{
				flag=1;
				cout<<"\n"<<st;
			}
			
			
		}while(next_permutation(st.begin(), st.end()));
		m--;
		n--;
		st.clear();
	}
	if(flag==1)
	{
		return c;
	}
	else
	{
		return -1;
	}
}

int main()
{
	string str="0111100010";
	int n =str.length();
	cout<<"\n"<<solve(str, n);
}
