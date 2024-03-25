#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
   
       int n;
       ll s;
       cin >> n >> s;
       vector<ll> a(n);
       for(int i=0;i<n;i++) cin >> a[i];

       int l=0,r=0;
       ll sum=0;
       int len = INT_MAX;
       while(r<n)
       {
         sum += a[r];
         
            while( l<=r && sum >= s)
            {
                 len = min(len,r-l+1);
                 sum -= a[l];  
                 l++;     
            }
         
         r++;
       }
       if(len==INT_MAX) cout << -1 << endl;
       else cout << len << endl;


    return 0;
}