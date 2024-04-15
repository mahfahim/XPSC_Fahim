//********* Bismillahir Rahmanir Rahim *********
#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long

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
        map<int,int> mp;
        vector<int> v(n);
        for(int i=0;i<n;i++)
        {
          cin >> v[i];
          mp[v[i]]++;
        }
        int ans=0;
        sort(v.begin(),v.end());
        for(int i=0;i<n;i++)
        {
            int val = v[i];
            if(mp[v[i]]>0)
            {
              ans++;
              while(mp[val]>0)
              {
                mp[val]--;
                val++;
              }
            }
        }
        cout << ans << endl;
    }
    
    return 0;
    //********* Alhamdulillah *********
}
