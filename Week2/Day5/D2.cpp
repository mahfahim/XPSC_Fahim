#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string s,t;
    cin >> s;
    cin >> t;
    int count=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]!=t[i])
        {
          count++;
        }
    }
    cout << count << endl;
    return 0;
}