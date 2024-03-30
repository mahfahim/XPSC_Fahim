#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<ll> v(n);
    ll sumE=0,sumO=0;
    vector<ll> ov;
    for(int i=0;i<n;i++)
    {
      cin >> v[i];
      if(v[i]%2==0) sumE += v[i];
      else ov.push_back(v[i]);
    } 
    sort(ov.begin(),ov.end(),greater<ll>());
    ll sz=ov.size();
    if(sz % 2 != 0) 
    { 
        ov.pop_back();
    }
    for(auto u:ov)
    {
        sumO += u;
    }
    cout << sumE + sumO << endl;

    return 0;
}

