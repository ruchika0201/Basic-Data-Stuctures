#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);



/*
 * Complete the 'pilesOfBoxes' function below.
 *
 * The function is expected to return a LONG_INTEGER.
 * The function accepts INTEGER_ARRAY boxesInPiles as parameter.
 */
int check(vector<int> v)
{
    long unsigned i;
    int val=v[0];
    for(i=0;i<v.size();i++)
    {
        if(v[i]!=val)
        {
            return 1;
        }
    }
    return 0;
}
int find_max(vector <int> v)
{
    int i, max1=0;
    vector <int> temp;
    temp=v;

    for(i=0;i<v.size();i++)
    {
        if(max1<v[i])
        {
            max1=v[i];
            temp.erase(temp.begin()+i);
        }
    }
    int max2=0;
    for(i=0;i<temp.size();i++)
    {
            if(max2<temp[i])
            {
                max2=temp[i];
            }
    }
    return max2;
    
}
long pilesOfBoxes(vector<int> v) {
    int n = v.size();
    int i;
    long count=0;
    while(check(v))
    {
        int sec_max = find_max(v);
        for(i=0;i<v.size();i++)
        {
            if(v[i]>sec_max)
            {
                count++;
                v.erase(v.begin()+i);
            }
        }
    }
    return count;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string boxesInPiles_count_temp;
    getline(cin, boxesInPiles_count_temp);

    int boxesInPiles_count = stoi(ltrim(rtrim(boxesInPiles_count_temp)));

    vector<int> boxesInPiles(boxesInPiles_count);

    for (int i = 0; i < boxesInPiles_count; i++) {
        string boxesInPiles_item_temp;
        getline(cin, boxesInPiles_item_temp);

        int boxesInPiles_item = stoi(ltrim(rtrim(boxesInPiles_item_temp)));

        boxesInPiles[i] = boxesInPiles_item;
    }

    long result = pilesOfBoxes(boxesInPiles);

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

