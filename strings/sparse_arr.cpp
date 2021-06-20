/*Complete the function matchingStrings in the editor below.
 The function must return an array of integers representing the frequency of occurrence of each query string in strings.*/

#include<iostream>
#include<string>
using namespace std;

int main()
{
	string str[1000], que[1000];
	int i, n, m, j, k;
	cout<<"\nEnter n::";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<"\nEnter string :";
		cin>>str[i];
		
	}
	cout<<"\nEnter m::";
	cin>>m;
	for(i=0;i<m;i++)
	{
		cout<<"\nEnter string :";
		cin>>que[i];
		
	}
	int result[m];
	for(i=0;i<m;i++)
	{
		result[i]=0;
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			
			int res = que[i].compare(str[j]);
			if(res==0)
			{
				result[i]=result[i]+1;
			}
		}
	}
	for(i=0;i<m;i++)
	{
		cout<<result[i]<<"\t";
	}
	
	
	
}
