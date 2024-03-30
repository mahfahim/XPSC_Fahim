#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    ll x;
    cin >> n >> x;
    vector<ll> a;
    for(int i=0;i<n;i++)
    {
        ll num;
        cin >> num;
        a.push_back(num);
    }
    for(auto u:a)
    {
      if(u==x) continue;
      else 
      {
        cout << u <<" ";
      }
    }
    return 0;
}