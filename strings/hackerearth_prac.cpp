#include<iostream>
#include<vector>
using namespace std;

string FindIt (int N, vector<char> ch) {
   // Write your code here
   string temp;
   int i;
   char c;
   for(i=0;i<N;i++)
   {
      c = ch[i];
    //  cout<<c;
      temp.push_back(c);
   }
  // cout<<temp;
   return temp;
   
}

int main() {

    //ios::sync_with_stdio(0);
   // cin.tie(0);
    int N;
    cin >> N;
    vector<char> ch(N);
    for(int i_ch = 0; i_ch < N; i_ch++)
    {
    	cin >> ch[i_ch];
    }

    string out_;
    out_ = FindIt(N, ch);
    cout << out_;
}
