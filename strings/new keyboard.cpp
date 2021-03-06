#include<bits/stdc++.h>
#include<set>
#include<iterator>
#include<algorithm>
using namespace std;
#define forr(i,a,n) for (int i = (a); i < (n); ++i)
#define fore(i,a,n) for (int i = (a); i <= (n); ++i)
#define ford(i,a,b) for (int i = (a); i >= (b); --i)
#define MAX 1000000007LL
#define mod 998244353
#define forn(n,a) for(int i=n;i>=a;i--)
#define all(x) x.begin() , x.end()
#define mp(x,y) make_pair(x,y)
#define pb(x) push_back(x)
#define pii pair<int,int>
#define ll long long
#define pii pair<int,int>
#define pll pair<long,long>
const int N = (int)1e5 + 9;
ll power(ll x,ll y)
{
    if(y == 0)
        return 1;
    ll temp = power(x,y/2);
    if(y%2 == 1)
        return temp*temp*x;
    else    
        return temp*temp;
}
 
struct Node{
    char data;
    struct Node *next;
    struct Node *prev;
 
    Node(char d){
        data = d;
        next = NULL;
        prev = NULL;
    }
};
 
int main()
{
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt" , "r" , stdin);
    // freopen("output.txt" , "w" , stdout);    
    // #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    string s;
    cin>>s;
    int n = s.length();
 
    struct Node *head,*last,*pos; 
    bool num = true;
 
    head = new Node('a');
    last = head;
    pos = head;
 
    for(int i=0;i<n;i++)
    {
        if(s[i] == '*')
        {
            if(pos->prev != NULL)
            {
                struct Node* cur = pos;
                cur->prev->next = cur->next;
                if(pos->next == NULL)
                {
                    last = pos->prev;
                }
                else{
                    cur->next->prev = cur->prev;
                }
                pos = pos->prev;
            }
        }
        else if(s[i] == '<')
        {
            pos = head;
        }
        else if(s[i] == '>')
        {
            pos = last;
        }
        else if(s[i] == '#')
        {
            num = !num;
        }
        else{
            if(s[i] >='0' && s[i]<='9' && !num)
                continue;
            struct Node* cur = new Node(s[i]);
            cur->prev = pos;
            cur->next = pos->next;
            if(pos->next == NULL)
            {
                last = cur;
                pos->next = cur;
            }
            else{
                pos->next->prev = cur;
                pos->next = cur;
            }
            pos = pos->next;
        }
    }
 
    head = head->next;
    while(head != NULL)
    {
        cout<<head->data;
        head = head->next;
    }
 
 
    return 0;
}
