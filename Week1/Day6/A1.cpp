#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin >> n >> m;
    ll a[n];
    ll b[m];
    for(int i=0;i<n;i++) cin >> a[i];
    for(int i=0;i<m;i++) cin >> b[i];
    int l=0,r=0;
    vector<ll> v;
    while(l<n || r<m)
    {
      
           if(l<n && (r==m || a[l]<=b[r]))
            {
                v.push_back(a[l]);
                l++;
            }
            else if(r<m && (l==n || b[r]<a[l]))
            {
                v.push_back(b[r]);
                r++;
            }     
      
    }
    for(auto u:v)
    {
        cout << u <<" ";
    }
    cout<<endl;
    
    return 0;
}