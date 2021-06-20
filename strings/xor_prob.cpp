#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'maxXorValue' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts following parameters:
 *  1. STRING x
 *  2. INTEGER k
 */


string maxXorValue(string x, int k) {
//	cout<<"\nHello from maxXor";
   bitset <8> bset(x);
    int num = bset.to_ulong();
    int n = x.length();
   // vector <node> v;
    double power = pow(2, n);
    int i, sum=0; 
    int val=0;
    for(i=0;i<power;i++)
    {
    //	cout<<"\nHeyyyy";
        bitset<8> b(i);
         int c = b.count();
        if(c<=k)
        {
             int temp = i^num;
            if(sum<temp)
            {
  //          	cout<<"\nAre you alive?";
                sum=temp;
                val=i;
            }
        }
    }
    bitset<8> bs(val);
    string result = bs.to_string();
    int w = result.length();
    int res_ind = w-n;
   	string final_res;
   	for(i=0;i<n;i++)
   	{
   		final_res.push_back(result[res_ind++]);
	   }
    return final_res;

}

int main()
{
	string s;
	cout<<"\nEnter string ::";
	cin>>s;
	int k;
	cout<<"\nEnter k ::";
	cin>>k;
	string result = maxXorValue(s, k);
	cout<<"\nResult is "<<result;

    return 0;
}


