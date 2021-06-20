#include<iostream>
#include<string.h>	
#include<stack>
using namespace std;
int isop(char c);
int prec(char c);
struct node{
char data;
struct node *left;
struct node *right;	
};
stack <char> st;
string postfix(string s)
{
	int n;
	
	n=s.length();
	char ar[n+1], arn[n+1];
	strcpy(ar, s.c_str());
	int j=0;
	for(int i=0;i<n;i++)
	{
		if(isalpha(ar[i]))
		{
			arn[j]=ar[i];
			j++;
		//	cout<<"Hey alpha";
			continue;
		}
		if(isop(ar[i]))
		{
			if(st.empty())
			{
				st.push(ar[i]);
			//	cout<<"Hey empt stackk";
				continue;
			}
			if(prec(ar[i])>prec(st.top()))
			{
				st.push(ar[i]);
			}
			else if(prec(ar[i])<prec(st.top()))
			{
				char c = st.top();
				st.pop();
				arn[j]=c;
				j++;
				st.push(ar[i]);
				continue;
			}
			else if(prec(ar[i])==prec(st.top()))
			{
				char c = st.top();
				st.pop();
				arn[j]=c;
				j++;
				while(prec(ar[i])<prec(st.top()))
				{
					char c = st.top();
					st.pop();
					arn[j]=c;
					j++;
				}
				st.push(ar[i]);
			}
			else
			{
				
			}
		}
	
	}
		while(!st.empty())
		{
		//	cout<<"Yes";
			arn[j]=st.top();
			st.pop();
			j++;
			
		}
	//	cout<<"\n";
		string f = "";
		for(int i=0;i<n;i++)
		{
			f=f+arn[i];
		}
		
	return f;
}
int isop(char c)
{
	if(c=='+' || c=='-' ||c=='*' ||c=='/' || c=='^')
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int prec(char c)
{
	if(c=='^')
	{
		return 3;
	}
	else if(c=='*' || c=='/')
	{
		return 2;
	}
	else if(c=='+' || c=='-')
	{
		return 1;
	}
}
void build(string s)
{
	int n, i;
	stack <struct node *> t;
	n=s.length();
	char ar[n+1], arn[n+1];
	strcpy(ar, s.c_str());
	for(i=0;i<n;i++)
	{
		struct node *newnode;
		newnode = new node;
		if(isalpha(ar[i]))
		{
			newnode->data=ar[i];
			newnode->left=NULL;
			newnode->right=NULL;
			t.push(newnode);
			continue;
		}
		if(isop(ar[i]))
		{
			struct node *right, *left;
			right = new node;
			left = new node;
			right = t.top();
			t.pop();
			left = t.top();
			t.pop();
			newnode->data = ar[i];
			newnode->right = right;
			newnode->left = left;
			t.push(newnode);
		}
		
	}
	struct node *root;
	root = new node;
	root = t.top();
	t.pop();
	cout<<"\nRoot is : "<<root->data;
}
int main()
{
	string s, n;
	cout<<"\nEnter the expression::";
	cin>>s;
	n = postfix(s);
	cout<<"\nPostFix Expression = "<<n;
	build(n);
}
