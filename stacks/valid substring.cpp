#include<iostream>
#include<string>
#include<algorithm>
#include<stack>
using namespace std;

int main()
{
	string str ="(()(";
	stack <char> s;
	int i;
	int count=0;
	for(i=0;i<str.length();i++)
	{
		if(str[i]=='(')
		{
			s.push('(');
		}
		else
		{
			if(!s.empty())
			{
				s.pop();
				count++;
			}
		}
	}
	cout<<"\nResult = "<<count*2;
}
