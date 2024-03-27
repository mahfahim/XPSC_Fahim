#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        stack<char> st;
        for(int i=0;i<s.size();i++)
        {
          if( s[i] =='(' )
          {
             st.push(s[i]);
          }
          else if( s[i] == ')' )
          {
             if( !st.empty() && st.top()=='(' )
             {
                st.pop();
             }
             else
             {
                continue;
             }
          }
        }
        cout << st.size() << endl;
    }
    
    return 0;
}