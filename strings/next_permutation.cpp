#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main()
{
	string str = "321", temp;
	temp = str;
	int n =stoi(str);
	int flag=0;
	while(next_permutation(str.begin(), str.end()))
	{
		int max = stoi(str);
		if(max>n)
		{
		cout<<max<<"\n";
		flag=1;
		break;	
		}
	}
	if(flag==0)
	{
		int num;
		while(prev_permutation(temp.begin(), temp.end()))
		{
			num = stoi(temp);
			
		}
		cout<<num<<"\n";
	}
}
