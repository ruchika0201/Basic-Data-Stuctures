#include<iostream>
#include<stack>
#include<vector>
using namespace std;


int main()
{
	int n;
	//cout<<"Enter n::";
	//cin>>n;
	vector <int> a ={1, 3, 2, 4};
	stack <int> s;
	n = a.size();
	int i, j;
	s.push(a[0]);
	cout<<s.top();
/*	for(i=1;i<n;i++)
	{
		//int m = a[i-1];
		if(a[i]>s.top())
		{
			cout<<"\n"<<a[i];
			s.pop();
			s.push(a[i]);
		}
		if(a[i]<s.top())
		{
			s.push(a[i]);
		}
			
	}
	while(!s.empty())
	{
		cout<<"\n"<<"-1";
	}
	
	*/
}
