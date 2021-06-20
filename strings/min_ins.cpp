#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);



/*
 * Complete the 'getMinInsertions' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER_ARRAY firstArray
 *  2. INTEGER_ARRAY secondArray
 */

int getMinInsertions(vector<int> firstArray, vector<int> secondArray) {
int i, j;
vector<int>::iterator it;
for(j=0;j<firstArray.size();j++)
    {
         it = find (secondArray.begin(), secondArray.end(),firstArray[j]); 
          if (it == secondArray.end()) 
    { 
    firstArray.erase(firstArray.begin()+j);
    //cout<<*it;
       // int ind =  it - firstArray.begin();
        //int index = int(ind);
        //firstArray.erase(firstArray.begin() + it);
    }
    }
int m = firstArray.size();
int n=secondArray.size();
if(m==n)
{
    for(i=0;i<m;i++)
    {
        
            if(firstArray[i]==secondArray[i])
            {
                continue;
            }
            else
            {
                break;
            }
        
    }
    if(i==m)
    {
        return 0;
    }
}
}

int main()
{
	vector<int> firstArray, secondArray;
	int i, j, k, m, n;
	firstArray.push_back(3);
	firstArray.push_back(1);
	firstArray.push_back(4);
	firstArray.push_back(2);
	firstArray.push_back(5);
	
	secondArray.push_back(3);
	secondArray.push_back(4);
	secondArray.push_back(5);
	int res = getMinInsertions(firstArray, secondArray);
	cout<<"\nResult is ::"<<res;
	/*cout<<"\nEnter size of first array::";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<"\Enter elem::";
		cin>>k;
		firstArray.push_back(k);
	}
	cout<<"\nEnter size of first array::";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<"\Enter elem::";
		cin>>k;
		firstArray.push_back(k);
	}*/
	
}
