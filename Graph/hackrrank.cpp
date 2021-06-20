#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'configureProjectPresentation' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts following parameters:
 *  1. INTEGER n
 *  2. 2D_INTEGER_ARRAY friendships
 */
int check(vector <int> v, int x)
{
    int i;
    for(i=0;i<(int)v.size();i++)
    {
        if(v[i]==x || x==2)
        {
        	//cout<<"\n"<<x<<" is present in 2 vector\n"; 
            return 1;
        }
    }
  //  cout<<"\n"<<x<<" is not present in 2 vector\n"; 
    return 0;
}
//int visited[10]={0};
int uni =0;
int dfs(int x, vector <int>v[], int n, int visited[] )
{
    int i;
    visited[x]=1;
  /*  cout<<"\n";
    for(i=1;i<n+1;i++)
    {
    	cout<<"\t"<<visited[i];
	}*/
//	cout<<"\nHello for loop";
    for(i=0;i<v[x].size();i++)
    {
        int u = v[x][i];
        cout<<"\nAdjacent elemnt of "<<x<<" is "<<u;
        if(u==2)
        {
        //	cout<<"\nHello "<<u;
        	//uni =1;
            return 0;
        }
        if(!visited[u])
        {
           int res = dfs(u, v, n, visited);
           if(res==0)
           {
           	return 0;
		   }
        }
    }
  return 1;
}

vector<int> configureProjectPresentation(int n, vector<vector<int>> friendships, int m) {

    int i, j;
    vector <int> v[n+1];
    vector <int> v1[n+1];
    int visited[n+1];
    for(i=0;i<n+1;i++)
    {
        visited[i]=0;
    }
    for(i=0;i<m;i++)
    {
        int x = friendships[i][0];
        int y = friendships[i][1];
        v[x].push_back(y);
        v[y].push_back(x);
        
    }
   // v1=v;
   /*cout<<"\nPrinting the graph\n";
   for(i=1;i<n+1;i++)
   {
   	cout<<i<<" : ";
   	for(j=0;j<v[i].size();j++)
   	{
   		cout<<v[i][j]<<"\t";
	   }
	   cout<<"\n";
   }*/
    vector <int> ans;
    for(i=0;i<(int)v[1].size();i++)
    {
       // visited[n+1]={0};
        int flag = check(v[2], v[1][i]);
        
        if(flag==1)
        {
            continue;
        }
        if(flag==0)
        {
           int flag2=  dfs(v[1][i], v, n, visited);
           //cout<<"\nDfs val is "<<flag2;
            if(flag2==1)
            {
            //	cout<<"\nPushed element is :: "<<v[1][i];
                ans.push_back(v[1][i]);
            }
            
        }
      //  uni=0;
        
    }
    return ans;
    
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string t_temp;
    getline(cin, t_temp);

    int t = stoi(ltrim(rtrim(t_temp)));

    for (int t_itr = 0; t_itr < t; t_itr++) {
        string first_multiple_input_temp;
        getline(cin, first_multiple_input_temp);

        vector<string> first_multiple_input = split(rtrim(first_multiple_input_temp));

        int n = stoi(first_multiple_input[0]);

        int m = stoi(first_multiple_input[1]);

        vector<vector<int>> freiendships(m);

        for (int i = 0; i < m; i++) {
            freiendships[i].resize(2);

            string freiendships_row_temp_temp;
            getline(cin, freiendships_row_temp_temp);

            vector<string> freiendships_row_temp = split(rtrim(freiendships_row_temp_temp));

            for (int j = 0; j < 2; j++) {
                int freiendships_row_item = stoi(freiendships_row_temp[j]);

                freiendships[i][j] = freiendships_row_item;
            }
        }

        vector<int> result = configureProjectPresentation(n, freiendships, m);
        if((int)result.size()==0)
        {
            fout<< "-1";
        }
        else
        {
            for (int i = 0; i < (int)result.size(); i++) {
            fout << result[i];

            if (i != (int)result.size() - 1) {
                fout << " ";
            }
        }
        }
        

        fout << "\n";
    }

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

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}

