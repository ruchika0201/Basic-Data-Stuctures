#include<iostream>
#include<vector>
using namespace std;
int solve(vector<vector<int> > &v, unsigned long long int x, unsigned long long int y, unsigned long long int n)
{
	unsigned long long int k, i, j;
	cout<<"size of 2d vec::"<<v.size()<<"\n";
	for(i=0;i<v.size();i++)
	{
		v[x][i]=1;
		v[i][y]=1;
	}

for (i = 0; i < v.size(); i++) { 
        for (j = 0; j < v[i].size(); j++) 
            cout << v[i][j] << " "; 
        cout << endl; 
    }
/*	for(k=1;k<=n;k++)
	{
		//vinsert(j, 1);
		v[k][j]=1;
	}*/
	unsigned long long int count=0, l;
	for(k=0;k<v.size();k++)
	{
		//int l;
		for(l=0;l<v[k].size();l++)
		{
		//	cout<<v[k][l]<<"\t";
			if(v[k][l]==0)
			{
				count++;
			}
		}
	//	cout<<"\n";
}

	return count;
}
int main()
{
	vector<vector<int> > v;
	
	unsigned long long int n, i, j;
	
	cout<<"\nEnter n::";
	cin>>n;
	cout<<"\nValue of n is :: "<<n;
	for(i=0;i<n;i++)
	{
		vector <int> temp;
		for(j=1;j<=n;j++){
			temp.push_back(0);
		}
		v.push_back(temp);
	}
 	/*for (int i = 0; i < v.size(); i++) { 
        for (int j = 0; j < v[i].size(); j++) 
            cout << v[i][j] << " "; 
        cout << endl; 
    } */
    int k;
    cout<<"\nEnter number of operations::";
    cin>>k;
    while(k--)
    {
    	cin>>i>>j;
    //	cout<<solve(v, i, j, n)<<"\t";
   // cout<<i<<j;
    int c = solve(v, i-1, j-1, n);
    cout<<"\t"<<c;
	}
	
}
