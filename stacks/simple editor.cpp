#include<iostream>
#include<stack>
#include<string>
using namespace std;

int main()
{
	string str = "";
	string w;
	stack <string> st;
	int ch, i, j, k, n;
	do
	{
		cout<<"\n1.      append - Append string W to the end of S.\n2.      delete - Delete the last k characters of S .\n3.      print - Print the kth character of S.\n4.      undo - Undo the last (not previously undone) operation of type 1 or 2\n5.	Exit\n";
		cout<<"\nEnter the choice :: ";
		cin>>ch;
		switch(ch)
		{
			case 1:
				{
						//append
				st.push(str);
				cout<<"\nEnter the string :: ";
				cin>>w;
				str.append(w);
				
				break;
					
				}
			
			case 2:
				//delete
				{
				st.push(str);
				int k;
				cout<<"\nEnter the number of characters you want to delete from the string from the end ::";
				cin>>k;
				int pos = str.length()-k;
				str.erase(pos);
				break;	
				}
				
			case 3:
				//print
				{
					int r;
				cout<<"\nEnter the character you want to print ::";
				cin>>r;
				cout<<str[r-1];
				break;
					
				}
				
			case 4:
				//undo
				{
					string top = st.top();
				st.pop();
				cout<<top;
				break;	
				}
			
			case 5:
				return 0;
		}
		
	}while(1);
}
