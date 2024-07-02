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
        int n;
        cin >> n;
        vector<ll> a(n);
        for(int i=0;i<n;i++) cin >> a[i];
        for(int i=0;i<n-2;i++)
        {
            while(a[i]>0)
            {
                a[i]--;
                a[i+1]=a[i+1]-2;
                a[i+2]--;
            }
        }
        bool ans = true;
        for(int i=0;i<n;i++)
        {
            if(a[i]!=0) ans = false;
        }
        if(ans) cout<<"YES"<<endl;
        else cout << "NO"<<endl;
    }
    
    return 0;
    //********* Alhamdulillah *********
}
