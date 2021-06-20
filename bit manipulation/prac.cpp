/*
// Sample code to perform I/O:

cin >> name;                            // Reading input from STDIN
cout << "Hi, " << name << ".\n";        // Writing output to STDOUT

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code here
#include<string>
#include<bitset>
#include<vector>
#include<algorithm>
#include<iostream>
using namespace std;
int solve(string s, int n, int k)
{
    int i, countt=0, j;
    vector <int> r;
    vector <string> str;
    vector <string> :: iterator it;
    bitset<64> bset(s);
    for(i=1;i<=n;i++)
    {
    	string t;
    	t.push_back(bset[i-1]);
        r.push_back(bset[i-1]);
        for(j=1;j<n;j++)
        {
        	t.push_back(bset[j]);
            r.push_back(bset[j]);
            int c = count(r.begin(), r.end(), 1);
            if(c==k || c>=k)
            {
            	
            	if(find(str.begin(), str.end(), t)==str.end())
            	{
            		countt++;
            		str.push_back(t);
            		cout<<"\n:: "<<t;
				}
             	   
            }

        }
        r.clear();
    }
return countt;
}
int main()
    {
        int t, k, n, i;
        string s;
        cin>>t;
        for(i=0;i<t;i++)
        {
         cin>>n;
         cin>>s;  
         cin>>k; 
         int res = solve(s, n, k);
         cout<<"result::"<<res;
        }
    }

