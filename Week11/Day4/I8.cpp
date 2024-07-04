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
        bool ans = false;
        for(int i=0;i<n;i++)
        {
            bool flag = false;
            for(int j=2;j<=(i+2);j++)
            {
                if(a[i]%j!=0)
                {
                    flag=true; 
                    break;
                }
            }
            if(!flag)
            {
                ans = true;
                break;
            }

        }

    
        if(!ans) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    
    return 0;
    //********* Alhamdulillah *********
}
