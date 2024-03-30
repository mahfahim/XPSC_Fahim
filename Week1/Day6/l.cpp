#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
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
        for(int i=0;i<n;i++)
        {
            cin >> v[i];
        }
        ll next=1;
        ll ans=0;
        for(ll i=0;i<n;i++)
        {
            if(v[i]<=next) 
            {
                next++;
            }
            else
            {
                ans+=v[i]-next;
                next+=v[i]-next;
                next++;
            }
             
        }
        cout << ans << endl;
   }
    
    return 0;
}
