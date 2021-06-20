#include<iostream>
#include<string>
#include<string.h>
using namespace std;

int main()
{
	string str1, str2, temp;
	cout<<"\nEnter string one :: ";
	getline(cin, str1);
//	cin.ignore();
	cout<<"\nEnter string two :: ";
	getline(cin, str2);
	//cin.ignore();
	temp.append(str1);
	int n = str2.length();
	temp.append(str2);
	cout<<"\nString is :: "<<temp;
}
