//********* Bismillahir Rahmanir Rahim *********
#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
const ll N = 1e13;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    vector<ll> v;
    ll c=1;
    ll tot = 0;
    while(tot<=N)
    {
        tot = c*c*c;
        v.push_back(tot);
        c++;
    }
    
    while(t--)
    {
       ll x;
       cin >> x;
       bool ans = false;
       for(ll i=0;v[i]<=x;i++)
       {
           ll temp = x - v[i];\
           ll l=0 , r=v.size()-1;
           while(l<=r)
           {
             ll mid = (l+r)/2;
             if(v[mid]==temp)
             {
               ans = true;
               break;
             }
             else if(v[mid]>temp)
             {
                r=mid-1;
             }
             else
             {
                l=mid+1;
             }
           }
       }
       if(ans) cout << "YES" << endl;
       else cout << "NO" << endl;
    }
    return 0;
    //********* Alhamdulillah *********
}