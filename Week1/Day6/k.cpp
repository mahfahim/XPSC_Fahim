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
        int n;
        cin >> n;
        vector<string> v[3];
        map<string,vector<int>> mp;
        for(int i=0;i<3;i++)
        {
          for(int j=0;j<n;j++)
          {
            string s;
            cin >> s;
            v[i].push_back(s);
            mp[s].push_back(i);
          }
        }
        for(int i=0;i<3;i++)
        {
            int ans=0;
          for(int j=0;j<n;j++)
          {
              int Siz=mp[v[i][j]].size();
              if(Siz == 1) ans=ans+3;
              if(Siz == 2) ans=ans+1;
          }
          cout << ans <<" ";
        }   
        cout << endl;

        for(int i = 0; i < 3; i++)
        {
          v[i].clear();
          mp.clear();
        }
    }
    
    return 0;
}