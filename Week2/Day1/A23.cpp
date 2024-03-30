#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    ll k;
    cin >> n >> k;
    ll a[n];
    for(int i=0;i<n;i++) cin >> a[i];
    int l=0,r=0;
    ll count =0;
    ll sum = 0;
    while(r<n)
    {
        sum += a[r];
        if(sum <= k)
        {
            count += (r-l+1);
        
        }
        else
        {
            while(sum > k)
            {
                sum -= a[l];
                l++;
            }
            if(sum <= k)
            {
                count += (r-l+1);
            }
        
        }
        r++;
    }
    cout << count << endl;
    return 0;
}