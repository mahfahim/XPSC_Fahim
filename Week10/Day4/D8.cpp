//********* Bismillahir Rahmanir Rahim *********
#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define ull unsigned long long
#define ldb long double

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,k;
    cin >> n >> k;
    vector<ll> v;
    for(ll i=1;i*i<=n;i++)
    {
       if(n%i==0)
       {
         v.push_back(i);
         if(i!=n/i)
         {
            v.push_back(n/i);
         }
       }
    }
    sort(v.begin(),v.end());

    if(k > v.size()) cout << -1 << endl;
    else  cout << v[k-1] << endl;
    return 0;
    //********* Alhamdulillah *********
}
