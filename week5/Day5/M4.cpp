//********* Bismillahir Rahmanir Rahim *********
#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long

const int mxN=(1<<15);
vector<int> allpal;

void palindrom()
{
   for(int i=0;i<mxN;i++)
   {
      string s = to_string(i);
      int len=s.length();
      bool flag=true;
    
      for(int j=0;j<(len/2);j++)
      {
        if(s[j]!=s[len-j-1])
        {
             flag=false;
             break;
        }
      }
      if(flag)
      {
        allpal.push_back(i);
      } 
      
   }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    palindrom();

    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        vector<int> cnt(mxN);
        for(int i=0;i<n;i++)
        {
          cin >> a[i];
          cnt[a[i]]++;
        } 
        ll ans = n;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<allpal.size();j++)
            {
                int p = (a[i] ^ allpal[j]);
                ans += cnt[p];
            }
        }

        cout << (ans/2) << endl;

    }
    
    return 0;
    //********* Alhamdulillah *********
}