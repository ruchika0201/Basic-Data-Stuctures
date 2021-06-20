#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void solve(vector <unsigned long long int> &v, unsigned long long int ind1, unsigned long long int ind2,unsigned long long int elem, unsigned long long int n)
{
    unsigned long long int start, stop, i;
    start=ind1-1;
    stop=ind2-1;
    for(i=start;i<=stop;i++)
    {
        v[i]=v[i]+elem;
    }
}
int main()
{
    
    unsigned long long int m, n, i,j, ind1, ind2, elem;
    //cout<<"\nEnter n ::";
    cin>>n;
   // cout<<"\nEnter m ::";
    cin>>m;
    vector <unsigned long long int> v(n,0);
    for(i=0;i<m;i++)
    {
      scanf("%llu",&ind1);
		//cout<<"\nEnter index 2 ::";
		scanf("%llu",&ind2);
		//cout<<"\nEnter element ::";
		scanf("%llu",&elem);
        solve(v, ind1, ind2, elem, n);
        
    }
    unsigned long long int max=0, *i1;
   // i1 = max_element(v, v + n); 
     cout << *max_element(v.begin(), v.end()); 
    /*for(i=0;i<n;i++)
    {
        if(max<v[i])
        {
            max=v[i];
            }    
    }*/
   // cout<<max;
}
