#include<iostream>
#include<string>
#include<algorithm>
#include<stack>
using namespace std;
int solve(int arr[], int n)
{
	int i, j;
	int max = arr[0]*1;
	for(i=1; i<n;i++)
	{
		int ind = i;
		int x =ind;
		int y= ind;
		int countl =1, countr=1;
		while(x!=0)
		{
			if(arr[--x]>arr[ind])
			{
				countl++;
			}
			else
			{
				break;
			}
		}
		while(y!=n)
		{
			if(arr[++y]>arr[ind])
			{
				countr++;
			}
			else
			{
				break;
			}
		}
		int area=0;
		if(countr>=countl)
		{
			area = countr*arr[ind];	
		}
		else
		{
			area = countl*arr[ind];	
		}
		cout<<"\nArea of rectangle "<<arr[ind]<<" :: "<<area;
		if(max<area)
		{
			max=area;
		}
	}
	return max;
}
int main()
{
	int arr[] ={6, 2, 5, 4, 5, 1, 6};
	int n=7;
	int res = solve(arr, n); 
	cout<<"\nMax area is ::"<<res;
}
