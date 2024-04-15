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
        ll sum=0; 
        vector<ll> v;
        for(int i=0;i<n;i++)
        {
            int lside = i;
            int rside = n-i-1;
            if(s[i]=='L')
            {
               if(rside > lside)
               {
                  v.push_back(rside-lside);
               }
            }
            if(s[i]=='R')
            {
               if(lside > rside)
               {
                  v.push_back(lside-rside);
               }  
            }
            if(rside > lside) sum += rside;
            else sum += lside;
        }
        int sz = v.size();
        sort(v.begin(),v.end(),greater<int>());
        ll ans[n];
        for(int i=0;i<n;i++) ans[i]=sum;
        ll temp = sum;
        for(int i=sz-2;i>=0;i--)
        {
          temp -= v[i+1];
          ans[i] = temp;
        }
        for(int i=0;i<n;i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}