#include <iostream>
#include <vector>
#include <string>
using namespace std;
/*
string ltrim(const string &);
string rtrim(const string &);*/



/*
 * Complete the 'stringReduction' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts following parameters:
 *  1. INTEGER k
 *  2. STRING s
 */
void add(vector<int>&result, string str[100000], int n, int x)
{
	int i;
	     for(i=0;i<n;i++)
    {
        result.push_back(int(str[i][x]));
    }
}
string stringReduction(int k, string s) {
    int n = s.length();
    vector <int> result;
    string str[100000];
    int i, j, x=0;
    string temp = s;
    for(i=0;i<n;i++)
    {
        temp.erase(i,k);
        cout<<"\n"<<temp;
        str[i]=temp;
        temp=s;

    }
    add(result, str, n, x);
   
    for(i=0;i<result.size();i++)
    {
    	cout<<"\n"<<result[i];
	}
	int index=0;
	while(1)
	{
		int max=0;
    vector<int> res;
for(j=0;j<result.size();j++)
{
    if(max<=result[j])
    {
    	if(max==result[j])
    	{
    		res.push_back(index);
		}
        max = result[j];
        index = j;
        
        
    }
}
if(res.size()!=1)
{
	result.clear();
	add(result, str, n, x++);
}
else
{
	break;
}
	}
    
//cout<<"\nMax is :"<<max<<" at "<<index;
//cout<<"\nString is :"<<str[index];
return str[index];



}

int main()
{
   // ofstream fout(getenv("OUTPUT_PATH"));

  //  string k_temp;
   // getline(cin, k_temp);

 //   int k = stoi(ltrim(rtrim(k_temp)));

    string s;
    cout<<"\nEnter string::";
    getline(cin, s);
int k;
cout<<"\nEnter k::";
cin>>k;
    string result = stringReduction(k, s);
cout<<result;
   // fout << result << "\n";

  //  fout.close();

    return 0;
}

/*string ltrim(const string &str) {
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
}*/

