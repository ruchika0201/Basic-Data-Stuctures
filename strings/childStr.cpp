#include<iostream>
#include<set>
#include<vector>
using namespace std;

int main()
{
    string str1, str2;
    set<char> s;
    cin>>str1;
    cin>>str2;
    int i, j;
    for(i=0;i<str1.length();i++)
    {
        for(j=0;j<str2.length();j++)
        {
            if(str1[i]==str2[j])
            {
                s.insert(str1[i]);
            }
        }
    }
    int n = (int)s.size();
    cout<<n;
}