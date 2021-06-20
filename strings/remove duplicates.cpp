#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main()
{
	unordered_map <char, int> u;
	string s, str;
	int i, j=0, n;
	cout<<"\nEnter string:";
	cin>>s;
	n=s.length();
	cout<<"\nLength is "<<n;
	for(i=0;i<n;i++)
	{
		if(u[s[i]]==0)
		{
			s[j++]=s[i];
		//	cout<<"\nprev::"<<u[s[i]];
			u[s[i]]=1;
		}
		else
		{
			s.erase(i,1);
		}
	}
	cout<<"\nFinal string is ::"<<s;
}
