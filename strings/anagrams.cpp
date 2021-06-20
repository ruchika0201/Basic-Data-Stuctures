#include <bits/stdc++.h>

using namespace std;

// Complete the makeAnagram function below.
int makeAnagram(string a, string b) {
    int tempA[26];
    int tempB[26];
    int i, j, count=0;
    int al=a.length(), bl = b.length();
    cout<<"\nA="<<al;
    cout<<"\nB="<<bl;
    if(al>=bl)
    {
    	   for(i=0;i<a.length();i++)
    {
        for(j=0;j<b.length();j++)
        {
            if(a[i]==b[j])
            {
                count++;
            }
        }
    }
	}
	else
	{
		 for(i=0;i<b.length();i++)
    {
        for(j=0;j<a.length();j++)
        {
            if(b[i]==a[j])
            {
                count++;
            }
        }
    }
	}
     
    
    
    int a_t = a.length()-count;
    int b_t= b.length()-count;
    int total = a_t + b_t;
    return total;

}

int main()
{
 //   ofstream fout(getenv("OUTPUT_PATH"));

    string a;
    getline(cin, a);

    string b;
    getline(cin, b);

    int res = makeAnagram(a, b);
	cout<<"\n"<<res;
    //fout << res << "\n";

    //fout.close();

    return 0;
}

