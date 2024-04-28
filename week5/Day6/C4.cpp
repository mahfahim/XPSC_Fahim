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
        int n,k;
        cin >> n >> k;
        ll  a[n];
        for(int i=0;i<n;i++) cin >> a[i];
        int l=0,r=0;
        ll cnt=0;
        ll odd=0;
        while(r<n)
        {
            if(a[r]%2 != 0) odd++;
            if(r-l+1==k)
            {
              if(odd > 0) cnt++;
              if(a[l]%2 != 0) odd--;
              l++;
            }
               r++;   
        }
        cout << cnt << endl;
    }
    return 0;
    //********* Alhamdulillah *********
}