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

    int  n;
    cin >> n;
    vector<ll> a(n);
    ll mx = -1;
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
        if(a[i]>mx) mx=a[i];
    }
    sort(a.begin(),a.end(),greater<ll>());
    for(int i=0;i<n;i++)
    {
        a[i]=mx-a[i];
    }
    ll  gcdz = 0;
    ll sum = 0;
     for(auto u:a) 
    {
       gcdz = __gcd(gcdz,u);
       sum += u;
    }
    cout << sum/gcdz << " " << gcdz << endl;

    
    return 0;
    //********* Alhamdulillah *********
}
