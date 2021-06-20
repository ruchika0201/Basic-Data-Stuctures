#include <iostream>
#include <bitset>
#include <vector>
using namespace std;
int xorfunc(int x, int y)
{
    return (x | y ) - (x&y);
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int k, x, y, m;
    unsigned long long int n, i, j;
    vector <int> a;
   /* for(i=0;i<100;i++)
    {
    	for(j=0;j<100;j++)
    	{
    		b[i][j]=0;
		}
	}*/
    cout<<"\nEnter n:";
    cin>>n;
    cout<<"\nEnter k ::";
    cin>>k;
    cout<<"\nEnter index:";
    cin>>m;
    for(i=0;i<n;i++)
    {
        cin>>x;
		a.push_back(x);
    }
    int count=0;
    for(j=0;j<k;j++)
    {
    	 for(i=1;i<a.size();i++)
    {
        x = a[i-1];
         y = a[i];
        int result = xorfunc(x, y);
      //  b[count][i-1] = result;
        a[i-1]=result;
       // cout<<result<<"\t";
    }
    
    count++;
	}
//	cout<<b[k-1][m];
   cout<<a[m];
    return 0;
}
