#include<iostream>
#include<algorithm>
#include<string>
#include<unordered_map>
#include<vector>
#include <string.h> 
#include<sstream>
using namespace std;


int main()
{
	string str = "Ravi had been saying that he had been there";
	string temp = str;
	unordered_map <string, int> dict;
	int n = str.length();
	vector <string> v;
	int i, j, k;
	stringstream check(str);
	string intermediate;
	//char *p = strtok(str, " ");
	while(getline(check, intermediate, ' '))
	{
		v.push_back(intermediate);
	}
	for(i=0;i<v.size();i++)
	{
		//cout<<"\n"<<v[i];
		dict.insert(pair<string, int> (v[i], 0));
	}
	stringstream check2(temp);
	string result;
	while(getline(check2, result, ' '))
	{
		auto it = dict.find(result);
		if(it!=dict.end())
		{
			//cout<<"\nHie";
			it->second = it->second + 1;
		}
	}
		for(auto it = dict.begin(); it!=dict.end();it++)
	{
		cout<<"\n"<<it->first<<"\t"<<it->second;
	}
}
