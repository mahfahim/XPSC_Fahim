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
    int n,k;
    cin >> n >> k;
    vector<ll> a(n);
    for(int i=0;i<n;i++) cin >> a[i];
    while(k--)
    {
        ll q;
        cin >> q;
        int l=0,r=n-1;
        bool ans = false;
        while(l<=r)
        {
            int mid = (l+r)/2;
            if(q==a[mid])
            {
                ans =  true;
                break;
            }
            else if(q<a[mid])
            {
               r=mid-1;
            }
            else
            {
               l=mid+1;
            }
        }
        if(ans) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
    //********* Alhamdulillah *********
}