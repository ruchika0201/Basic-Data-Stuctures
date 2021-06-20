#include<iostream>
using namespace std;

struct node {
	int data;
	struct node *left;
	struct node *right;
};


struct node * create(int x)
		{
			int k;
			struct node *newnode;
			newnode = new node;
			if (x==-2)
			{
				cout<<"\nEnter the data of the root node";
			}
			cout<<"\nEnter -1 for no data::";
			cin>>k;
			if(k == -1)
			{
				return NULL;
			}
			newnode->data = k;
			x=k;
			
				cout<<"\nEnter the left node of "<<x<<"::";
			//	cin>>k;
				newnode->left = create(x);
				cout<<"\nEnter the right node of "<<x<<"::";
			//	cin>>k;
				newnode->right = create(x);
				return newnode;
			
			
			
			
		}
		
		void preorder(struct node *root)
		{
			if(root)
			{
				preorder(root->left);
				cout<<root->data<<" ";
				preorder(root->right);
			}
		}
		struct node * delete_node(struct node *root, int key)
		{
			if(root)
		}

int main()
{
	struct node * root = NULL;
	int del;
	root = create(-2);
	preorder(root);
	cout<<"\n\nEnter the element you want to delete::";
	cin>>del;
	preorder()
}
