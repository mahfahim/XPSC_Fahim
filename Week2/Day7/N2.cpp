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
        int n,k;
        cin >> n >> k;
        string s;
        cin >> s;
        map<char,int> mp;
        for(int i=0;i<s.size();i++)
        {
           mp[s[i]]++;
        }
        int oddcount=0;
        for(auto u:mp)
        {
            if(u.second % 2 != 0)
            {
              oddcount++;
            }
        }
        oddcount -= k;
        if(oddcount <= 1) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    
    return 0;
}