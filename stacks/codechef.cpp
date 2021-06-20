#include <iostream>
#include<stack>
#include <vector> 
#include <algorithm>
using namespace std;


int solve(vector <int> &v, int n, int k)
{
    int i, j, sum=0, count=0;
    sort(v.begin(), v.end(), greater<int>());
    stack <int> st;
    
    for(i=0;i<n;i++)
    {
        st.push(v[i]);
    }
   // cout<<"\n"<<st.top();
    while(!st.empty())
    {
        sum = sum+st.top();
        //cout<<"\nSum : "<<sum;
       if(st.size()==1)
        {
            count++;
            st.pop();
        }
        if(sum>=k)
        {
            count++;
            sum=0;
        }
        else
        {
            st.pop();
        }
        
    }
    if(count==0)
    {
         return -1;
    }
    else
    {
        return count;
    }
    
}

int main() {
	// your code goes here
	int n, k,t, i,j;
	vector<int> v;
	cin>>t;
	for(i=0;i<t;i++)
	{
	    cin>>n>>k;
	    for(j=0;j<n;j++)
	    {
	        int x;
	        cin>>x;
	        v.push_back(x);
	    }
	   int result = solve(v, n, k);
	   cout<<result<<"\n";
	   v.clear();
	}
	return 0;
}

