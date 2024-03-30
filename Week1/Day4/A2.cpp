#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin >> n >> m;
    int  v1[n];
    int  v2[m];
    for(int i=0;i<n;i++) cin >> v1[i];
    for(int i=0;i<m;i++) cin >> v2[i];
    int l=0,r=0,ans=0;
    while(r<m)
    {
        while(v1[l]<v2[r] && l < n)
        {
            ans++;
            l++;
        }
        r++;
        cout << ans << " ";
       
    }
    
    return 0;
}