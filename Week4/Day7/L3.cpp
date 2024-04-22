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
            int n,q;
            cin >> n >> q;
            ll a[n+5];
            map<ll,vector<int>> mp;
            for(int i=1;i<=n;i++) 
            {
                cin >> a[i];
                mp[a[i]].push_back(i);
            }


            while(q--)
            {
                ll a,b;
                cin >> a >> b;
                if( mp[a].empty() || mp[b].empty())
                {
                    cout << "NO" << endl;
                }
                else if(mp[a].front() <= mp[b].back())
                {
                    cout << "YES" << endl;
                }
                else 
                {
                    cout << "NO" << endl;
                }
            }

        }
   
    return 0;
    
}
//********* Alhamdulillah *********