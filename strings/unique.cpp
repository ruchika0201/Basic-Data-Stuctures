#include<iostream>
#include<algorithm>
#include<set>
using namespace std;

int main()
{
	string str = "aaabc";
	int n = str.length();
	auto it = unique(str.begin(), str.end());
	str.resize(distance(str.begin(), it));
	cout<<str;
}
