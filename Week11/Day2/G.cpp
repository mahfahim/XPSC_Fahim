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
    
    int n;
    cin >> n;
    vector<int> s(n+5);
    map<int,int> cnt;
    for(int i=0;i<n;i++) cin >> s[i];
    for(int i=0;i<n;i++) 
    {
        for(int j=1;j*j<=s[i];j++)
        {
          if(s[i]%j==0)
          {
            cnt[j]++;
            if(s[i]/j != j)
            {
                cnt[s[i]/j]++;
            }
          }
        }
    }
    int ans = 1;
    for(auto [x,y]:cnt)
    {
        if(x!=1) 
        {
            ans = max(ans,y);
        }
    }
    cout << ans << endl;
    return 0;
    //********* Alhamdulillah *********
}
