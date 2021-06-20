#include<iostream>
#include<algorithm>
#include<string>
#include<map>
using namespace std;


int main()
{
	map <string, int> mob ={{"abc", 2}, {"def", 3}, {"ghi", 4}, {"jkl", 5}, {"mno", 6}, {"pqrs", 7}, {"tuv", 8}, {"wxyz", 9}};
	string str;
	getline(cin, str);
	string output= "";
	int i, j;
	for(i=0;i<str.length(); i++)
	{
		string result(1, str[i]);
	//	result = result + c;
	for(auto iter=mob.begin(); iter!=mob.end();iter++)
	{
		string k = iter->first;
		auto res = k.find(result);
		if(res != k.npos)
		{
			//cout<<"\nHello "<<res<<"\t"<<iter->first<<"\t"<<iter->second;
			int count=iter->second;
			for(j=0;j<res+1;j++)
			{
				output = output+to_string(iter->second);
			}
		}
	}
	//	auto it = mob.find("d");
	//	cout<<"\n"<<it->first<<"\t"<<it->second;
	}
	cout<<"\nResult is :: "<<output;
}
