#include<iostream>
#include<set>
#include<vector>
using namespace std;
int count=0;
int dfs(vector <int> v[], int visited[], int x)
{
    visited[x]=1;
    count++;
  //  cout<<"\nCount for "<<x<<" is "<<count;
    vector <int> res;
    int n = (int)v[x].size();
    res.push_back(x);
    for(int i=0;i<n;i++)
    {
        int y = v[x][i];
        if(!visited[y])
        {
            dfs(v, visited, y);
        }
    }
    return count;
}
int main()
{
    int i, h, n,q, x, y;
    cin>>n>>q;
    vector <int> v[n];
    int visited[n];
    for(i=0;i<q;i++)
    {
        cin>>x>>y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    for(i=0;i<n;i++)
    {
        visited[i]=0;
    }
    int res;
    vector <int> ans;
    set <vector<int> > s[100];
    int ind=0;
    for(i=0;i<n;i++)
    {
        if(!visited[i])
        {
            res = dfs(v, visited, i);
            count=0;
            //cout<<"\n"<<res;
            ans.push_back(res);
        }
        
    }
    int j, k, count=0;
    int sum =0;
    for(i=0;i<(int)ans.size()-1;i++)
    {
        for(j=i+1;j<(int)ans.size();j++)
        {
            sum = sum+ ans[i]*ans[j];
        }
        
    }
    cout<<sum;

}

