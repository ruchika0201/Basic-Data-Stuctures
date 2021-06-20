#include<iostream>
#include<string>
#include<algorithm>
#include<stack>
using namespace std;
struct interval{
	int start, end;
};
bool compareInterval(interval i1, interval i2) 
{ 
    return (i1.start < i2.start); 
} 
void mergeinterval(interval arr[], int n)
{
	if(n<=0)
	{
		return;
	}
	stack <interval> s;
	sort(arr, arr+n, compareInterval); 
	s.push(arr[0]);
	int i;
	for(i=1;i<n;i++)
	{
		interval top = s.top();
		cout<<"\n"<<s.top().start<<"\t"<<s.top().end;
		if(top.end<arr[i].start)
		{
			s.push(arr[i]);
		}
		else if(top.end<arr[i].end)
		{
			top.end = arr[i].end;
			s.pop();
			s.push(top);
		}
	}
	while(!s.empty())
	{
		cout<<"\n"<<s.top().start<<"\t"<<s.top().end;
		s.pop();
	}
}
int main()
{
	struct interval arr[] = { {6,8}, {1,9}, {2,4}, {4,7}
	};
	int n = sizeof(arr)/sizeof(arr[0]); 
	cout<<"\nSize = "<<n;
	mergeinterval(arr, n);
}
