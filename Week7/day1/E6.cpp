//********* Bismillahir Rahmanir Rahim *********
#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define ull unsigned long long
#define ldb long double
const ll N =  1e9;

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
        vector<ll> v(n);
        for(int i=0;i<n;i++) cin >> v[i];
        sort(v.begin(),v.end());
        
        auto ok = [&] (ll mid)
        {
           int cnt = 1;
           int l=0,r=0;
           while(r<n)
           {
              if((v[r]-v[l]) > 2*mid)
              {
                l=r;
                cnt++;
              }
                r++;
           }
          if(cnt<=3) return true;
          else return false;

        };

        ll left=0,right=N;
        ll ans=0;
        while(left<=right)
        {
            ll mid=(left + right)/2LL;
            if(ok(mid))
            {
               ans = mid;
               right = mid - 1;
            }
            else 
            {
                left = mid + 1;
            }
        }
        cout << ans << endl;
    }
    
    return 0;
    //********* Alhamdulillah *********
}