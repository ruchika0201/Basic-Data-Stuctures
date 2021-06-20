#include<iostream>
#include<vector>
#include<string>
#include<set>
using namespace std;

const int INF = 1000000000;
int n, m, k;
int dist[1000+10][1024 + 10];
int a[1000+10];
vector <pair<int, int> > v;
set<pair< int, pair<int, int> > > s
int main()
{
    int i, j;
    cin>>n>>m>>k;
   // int arr[n][2];
    for(i=1;i<=n;i++)
    {
        int fish;
        cin>>fish;
        for(int j =1; j<=fish;j++)
        {
            int x;
            cin>>x;
            a[i]|= (1<<(x-1));

        }
    }
    int g, h, t;
    for(i=0;i<m;i++)
    {
        cin>>g>>h>>t;
        v[g].push_back(make_pair(h, t));
        v[h].push_back(make_pair(g, t));
    }
    for(i=1;i<=n;i++)
    {
        for(j=0;j<(1<<k);j++)
        {
            dist[i][j]=INF;
        }
    }
}
