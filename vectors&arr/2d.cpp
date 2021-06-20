//Hourglass

#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int a[6][6]={{1, 1, 1, 0, 0, 0}, {0, 1, 0, 0, 0, 0},{1, 1, 1, 0, 0, 0}, {0, 0, 2, 4, 4, 0}, {0, 0, 0, 2, 0, 0}, {0, 0, 1, 2, 4, 0}};
	int i, j;
	vector <int> v;
	/*for(i=0;i<6;i++)
	{
		for(j=0;j<6;j++)
		{
			cout<<"\nEnter element "<<arr[i][j]<<":: ";
			cin>>arr[i][j];
		}
	}*/
	
	for(i=0;i<4;i++)
	{
		int sum = 0;
		for(j=1;j<5;j++)
		{
			int sum = a[i][j-1]+a[i][j]+a[i][j+1]+a[i+1][j]+a[i+2][j-1]+a[i+2][j]+a[i+2][j+1];
			v.push_back(sum);
		}
	}
//	cout << "\nMax Element = "<< *max_element(v.begin(), v.end()); 
//	cout<<"\nMax is :: "<<*max_element(v.begin(), v.end());
int max = 0;
	for(i=0;i<v.size();i++)
	{
		if(max<v[i])
		{
			max = v[i];
		}
		
	}
/*	for(i=0;i<v.size();i++)
	{
		cout<<"\n"<<i<<"::"<<v[i];
	}*/
	cout<<max;
}
