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
        int n;
        cin >> n;
        vector<ll> a(n);
        ll ans;
        cin >> a[0];
        ll mx=a[0],mn=a[0];
        for(int i=1;i<n;i++) 
        {
            cin >> a[i];
            mx |= a[i];
            mn &= a[i];
        }      
         
        ans = mx - mn;
        
        cout << ans <<  endl;
    }
    return 0;
    //********* Alhamdulillah *********
}