#include<iostream>
#include<stack>
#include<vector>
using namespace std;
int insert_at_bottom(stack <int> &st, int m)
{
	if(st.size()==0)
	{
		st.push(m);
	}
	else
	{
		int n= st.top();
		st.pop();
		insert_at_bottom(st, m);
		st.push(n);
	}
}
int reverse(stack <int> &st)
{
	if(st.size()>0)
	{
		int m = st.top();
		st.pop();
		reverse(st);
		insert_at_bottom(st, m);
	}
}

int main()
{
	int i, j, n;
	string s="";
	stack <int> st;
	st.push(4);
	st.push(3);
	st.push(2);
	st.push(1);
	cout<<"\nBefore reversing the stack :: "<<"1 , 2, 3, 4";
	reverse(st);
	cout<<"\nAfter reversing :: ";
	while(!st.empty())
	{
		cout<<st.top()<<"\t";
		st.pop();
	}
}
