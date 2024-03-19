#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin >> n >> m;
    long long a[n],b[m];
    for(int i=0;i<n;i++)  cin >> a[i];
    for(int i=0;i<m;i++) cin >> b[i];
    
    int l=0,r=0;
    long long ans=0;
    int cur;
    while(l < n && r < m)
    {
        long long cnt1=0;
        long long cnt2=0;
        cur=a[l];
        while(a[l]==cur && l<n)
        {
            cnt1++;
            l++;
        }
        while(b[r] < cur && r<m)
        {
            r++;
        }

        while(b[r]==cur && r<m)
        {
           cnt2++;
           r++;
        }
        ans += (cnt1*cnt2);
        
    }
     cout << ans << endl;
    
    return 0;
}