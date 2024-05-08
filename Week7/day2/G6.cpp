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
    
    int t;
    cin >> t;
    while(t--)
    {
        ll n,k;
        cin >> n >> k;
        ll ans = k + (k - 1) / (n - 1);
        cout << ans << endl;
    }
    return 0;
    //********* Alhamdulillah *********
}