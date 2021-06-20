#include<iostream>
#include<string>
#include<algorithm>
#include<stack>
using namespace std;
int isoper(char c)
{
	if(c=='+' || c=='-' || c=='*' || c=='/')
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
	string str = "(a+(b)/c)";
	int i, flag=0;
	for(i=0;i<str.length();i++)
	{
		if(str[i]=='(')
		{
			if(isoper(str[i+2]))
			{
				continue;
			}
			else
			{
				flag=1;
				cout<<"\nRedundant";
			}
		}
	}
	if(flag==0)
	{
		cout<<"\nNo redundancy";
	}
}
