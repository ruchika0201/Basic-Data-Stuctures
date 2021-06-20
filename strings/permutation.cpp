#include<iostream>
#include<algorithm>
using namespace std;
void solve(string str)
{
	sort(str.begin(), str.end());
	do
	{
		cout<<"\n"<<str;
	}while(next_permutation(str.begin(), str.end()));
}
int main()
{
	string str="abc";
	solve(str);
}
