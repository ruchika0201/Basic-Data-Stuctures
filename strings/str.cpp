#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);



/*
 * Complete the 'getSpecialSubstring' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. STRING s
 *  2. INTEGER k
 *  3. STRING charValue
 */
int check(string str, set <char> st, int k )
{
	int count=0;
	for(int i=0;i<str.length();i++)
	{
		if(st.find(str[i])!=st.end())
		{
			count++;
		}
	}
	if(count>=k)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int getSpecialSubstring(string s, int k, string charValue) {
int i, j;
set <char> st;
vector <string> v;
for(i=0;i<s.length();i++)
{
    int x = s[i]-'a';
    cout<<x;
    if(charValue[x]=='0')
    {
        st.insert(s[i]);
    }
}
int n = s.length();
for (int j = 0; j < n; j++) 
{
	for (int len = 1; len <= n - j; len++) 
        {
        	string temp = s.substr(j, len);
            v.push_back(temp);
		}
 } 
        
            
            
vector <string> res;
for(i=0;i<v.size();i++)
{
	int flag=check(v[i], st, k);
	if(flag==1)
	{
		res.push_back(v[i]);
	}
}

int ans = (int)res.size();
return ans;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string k_temp;
    getline(cin, k_temp);

    int k = stoi(ltrim(rtrim(k_temp)));

    string charValue;
    getline(cin, charValue);

    int result = getSpecialSubstring(s, k, charValue);

    fout << result << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

