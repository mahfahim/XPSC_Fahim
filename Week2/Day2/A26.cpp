#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    ll k;
    cin >> n >> k;
    vector<ll> v(n);
    for(int i=0;i<n;i++) cin >> v[i];
    int l=0,r=0;
    multiset<ll> ms;
    ll ans=0;
    ll first,last,dif;
    while(r<n)
    {
        ms.insert(v[r]);
         first = *(ms.begin());
         last = *(ms.rbegin());
         dif = last - first;
        if(dif <= k) 
        {
           ans+=(r-l+1);
        }
        else
        { 
           while(l < r && dif > k)
           {
             auto it= ms.find(v[l]);
             ms.erase(it);
             l++;
             first = *(ms.begin());
             last = *(ms.rbegin());
             dif = last - first;
           }
          if(dif <= k) 
          {
            ans+=(r-l+1);
          
          }
        }
        r++;
    }

    cout << ans << endl;
    return 0;
}