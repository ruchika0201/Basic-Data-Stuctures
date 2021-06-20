#include<iostream>
#include<algorithm>
#include<string>
#include<map>
using namespace std;

int main()
{
	string str = "aaa";
	int n = str.length();
	string temp = str;
	int count = 0;
	rotate(str.begin(), str.begin()+1, str.end());
	do 
	{
		count++;
		int res = temp.compare(str);
		if(res==0)
		{
			break;
		}
		n--;
	}while(n!=0);
	cout<<count;
}
