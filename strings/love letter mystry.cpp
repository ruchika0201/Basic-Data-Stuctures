#include <bits/stdc++.h>

using namespace std;
int count_str(string str)
{
    int n = str.length();
    int i, count=0, j=n-1;
    for(i=0;i<n/2;i++)
    {
        if(i==j)
        {
            break;
        }
        if(str[i]==str[j])
        {
            j--;
        }
        if(str[i]!=str[j])
        {
            int x = str[i];
            int y = str[j];
            int diff = abs(x-y);
            count = count + diff;
            //str[i]=str[j];
            j--;
        }
    }
    return count;
}
int check_pall(string str)
{
	int n = str.length();
	int i;
	int j = n-1;
	//cout<<"\n"<<n/2;
	while(j>i)
	{
		if(str[i]!=str[j])
		{
			return 0;
		}
		i++;
		j--;
	}
	return 1;
}
int main()
{
    int t, i;
    cin>>t;
    vector<int> ans;
    for(i=0;i<t;i++)
    {
        string str;
        cin>>str;
        int check = check_pall(str);
        if(check==0)
        {
        	int res = count_str(str);
        ans.push_back(res);
		}
		else
		{
			ans.push_back(0);
		}
        
    }
    for(i=0;i<(int)ans.size();i++)
    {
        cout<<ans[i]<<"\n";
    }
}
