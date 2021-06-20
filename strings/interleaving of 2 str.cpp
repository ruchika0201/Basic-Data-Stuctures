#include<iostream>
#include<string>
using namespace std;
int solve(string str1, string str2, string str3)
{
	int i=0, j=0, x=0, m, n, k;
	m=str1.length();
	n=str2.length();
	k=str3.length();
	while(x<k)
	{
		if(str3[x]==str1[i])
		{
			i++;
			x++;
		}
		else if(str3[x]==str2[j])
		{
			j++;
			x++;
		}
		else
		{
			return 0;
		}
		
	}
	return 1;
	
}
int main()
{
	int i=0,j=0,n, m, k,x=0;
	string str1, str2, str3;
	str1 = "ab";
	str2 = "cd";
	str3 = "ad";
	int res = solve(str1, str2, str3);
	if(res==0)
	{
		cout<<"\n"<<str3<<" is not interleaved of "<<str1<<" & "<<str2;
	}
	else
	{
		cout<<"\n"<<str3<<" is interleaved of "<<str1<<" & "<<str2;
	}
	
	
}
