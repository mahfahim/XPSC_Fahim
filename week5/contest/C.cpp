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
        int n,k,l;
        cin >> n >> k >> l;
        vector<int> v;
        int totlang=0;
        for(int i=1;i<=n;i++)
        {
            int mi , li;
            cin >> mi >> li;
           
            if(l==li)
            {
                v.push_back(mi);
                totlang++;
            }
        }
        sort(v.begin(),v.end(),greater<>());
        ll ans=0;
        if(totlang==0) cout << -1 << endl;
        else if(k > totlang) cout << -1 << endl;
        else 
        {
            for(int i=0;i<k;i++)
            {
                    ans += v[i];
            }
            cout << ans << endl;
        }

    }
    return 0;
    //********* Alhamdulillah *********
}