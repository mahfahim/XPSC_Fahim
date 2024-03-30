#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    map<int,int> mp;
    int l = 0, r = 0;
    ll count = 0;
    while(r < n)
    {
        mp[a[r]]++;
        if(mp.size() <=k ) count += r-l+1;
        else
        {
         while((mp.size() > k))
         { 
           mp[a[l]]--;
           if(mp[a[l]]==0) mp.erase(a[l]);
           l++;
         }
          if(mp.size() <=k ) count += r-l+1;
        }
     
        r++;
    }
       
    cout << count << endl;
    return 0;
}
