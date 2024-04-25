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
    
    int n,m,k;
    cin >> n >> m >> k;
    vector<int> v(m+1);
    vector<vector<int>> all;
    for(int i=0;i<=m;i++) cin >> v[i];
    for(int i=0;i<=m;i++)
    {
        vector<int> b;
        for(int j=0;j<n;j++)
        {
            if((v[i]>>j)&1)
            {
                b.push_back(1);
            }
            else 
            {
                b.push_back(0);
            }
        }
        all.push_back(b);
    }
    int ans=0;
    vector<int> fedor=all[m];
    for(int i=0;i<all.size()-1;i++)
    {
        vector<int> aa=all[i];
        int cnt=0;
       for(int j=0;j<n;j++)
       {
        if(fedor[j]!=aa[j]) cnt++;
       }
       if(cnt<=k) ans++;
    }

    cout <<  ans << endl;
    return 0;
    //********* Alhamdulillah *********
}