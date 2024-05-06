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
    int n,a,b;// 4 7 10
    cin >> n >> a >> b;
    auto ok = [&](int mid)
    {
         
         int aa = a/mid;
         int bb = b/mid;
         int cnt = aa + bb ;
         return cnt >= n && a>=mid && b>=mid;
    };
    int ans;
    int l=1,r=max(a,b);
    while(l<=r)
    {
     int mid = (l+r)/2;
     if(ok(mid))
     {
       ans = mid ;
       l = mid + 1;
     }
     else
     { 
       r = mid - 1;
     }
     
    }
    cout << ans << endl;
    return 0;
    //********* Alhamdulillah *********
}