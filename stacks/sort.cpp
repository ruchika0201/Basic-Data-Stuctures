#include<iostream>
#include<stack>
#include<vector>
using namespace std;
int insert(stack <int> &st, int t);
int sort(stack<int> &st)
{
	if(!st.empty())
	{
		int t = st.top();
		st.pop();
		sort(st);
		insert(st, t);
	}
}
int insert(stack <int> &st, int t)
{
	if(st.size()==0 || st.top()<t)
	{
		st.push(t);
		//return;
	}
	else
	{
		int temp = st.top();
		st.pop();
		insert(st, t);
		st.push(temp);
	}
}
int main()
{
	int i, j, n;
	stack <int> st;
	st.push(30);
	st.push(-5);
	st.push(18);
	st.push(14);
	st.push(-3);
	sort(st);
	while(!st.empty())
	{
		cout<<"\n"<<st.top();
		st.pop();
	}
}
