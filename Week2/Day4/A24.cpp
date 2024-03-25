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
       ll count=0;
       while(r<n)
       {
         sum += a[r];
            while( l<=r && sum >= s)
            {
                 count += n-r;
                 sum -= a[l];  
                 l++;     
            }
         r++;
         
       }
       cout << count << endl;


    return 0;
}