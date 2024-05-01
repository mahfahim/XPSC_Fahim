//********* Bismillahir Rahmanir Rahim *********
#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
const ll N=1e18;
ll n,p;
ll a[10000000];
bool checkTotal(ll mid)
{
    ll total=0;
   for(int i=0;i<n;i++)
   {
     total += mid/a[i];
     if(total>=p) return true;
     
   }
   return false;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> n >> p;

    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    } 
    ll l=1,r=N;
    ll ans,mid;
    while(l<=r)
    {
        mid = (l+r)/2;
       if(checkTotal(mid))
       {
         ans = mid;
         r=mid-1;
       }
       else
       {
          l=mid+1;
       }
    }
    cout << ans << endl;

    //********* Alhamdulillah *********
}