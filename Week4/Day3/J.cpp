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
        ll n,k,q;
        cin >> n >> k >> q;
        vector<ll> v(n);
        for(int i=0;i<n;i++)
        {
            cin >> v[i];
        }
        ll cons=0,val,ans=0;
        for(int i=0;i<n;i++)
        {
            if(v[i]<=q)
            {
                cons++;
                if(i==n-1 || v[i+1]>q)
                {
                    if(cons >= k)
                    {
                    val=cons-k+1LL;
                    ans += (val*(val+1LL))/2LL;
                    
                    }
                    cons=0;
                }
            }

            
            
            
          
        }
        cout << ans << endl;
        
     }
    return 0;
    //********* Alhamdulillah *********
}