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
    int n;
    cin >> n;
    vector<ll> v(n);
    for(int i=0;i<n;i++) cin >> v[i];
    sort(v.begin(),v.end());
    int q;
    cin >> q;
    while(q--)
    {
        ll l,r;
        cin >> l >> r;
        auto first = lower_bound(v.begin(),v.end(),l);
        auto second = upper_bound(v.begin(),v.end(),r);
        cout << second - first << endl;
    }
    return 0;
    //********* Alhamdulillah *********
}