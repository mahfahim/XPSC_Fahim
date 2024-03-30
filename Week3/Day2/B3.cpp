#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        int n,q;
        cin >> n >> q;
        long long  a[n+5];
        long long  pre[n+5];
        cin >> a[1];
        pre[1]=a[1];
        for(int i=2;i<=n;i++)
        {
          cin >>  a[i] ;
          pre[i] = pre[i-1] + a[i];
        }
         
        while(q--)
        {
            int l,r;
            long long k;
            cin >> l >> r >> k;
            int add = r-l+1;
            long long sum = 0;
            if(l==1)
            sum += pre[n] - pre[r];
            else 
            sum += pre[n] - pre[r] + pre[l-1];
        
            sum += add*k;
            
            if(sum % 2 == 1) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
    }
    
    return 0;
}