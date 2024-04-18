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
        vector<pair<int,int>> a,b,c;
        for(int i=0;i<n;i++) 
        {
          int x;
          cin >> x;
          a.push_back({x,i});
        }
        for(int i=0;i<n;i++) 
        {
          int x;
          cin >> x;
          b.push_back({x,i});
        }
        for(int i=0;i<n;i++) 
        {
          int x;
          cin >> x;
          c.push_back({x,i});
        }
        sort(a.begin(),a.end(),greater<pair<int,int>>());
        sort(b.begin(),b.end(),greater<pair<int,int>>());
        sort(c.begin(),c.end(),greater<pair<int,int>>());
         
        ll ans=0;
        
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                for(int k=0;k<3;k++)
                {
                    if(a[i].second!=b[j].second && b[j].second!=c[k].second && c[k].second!=a[i].second)
                    {
                          ll mx = a[i].first + b[j].first + c[k].first;
                          ans = max(ans,mx);
                    }
                }
            }
        }

        cout << ans << endl;

    }
    return 0;
    //********* Alhamdulillah *********
}