#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long

bool iskalindrom(vector<int> v,int x)
{
    int l=0,r=v.size()-1;
    while(l <= r)
    {
      if(v[l]==x) 
      {
        l++;
      }
      else if(v[r]==x)
      {
        r--;
      }
      else if(v[l] != v[r])
      {
        return false;
      }
      else
      {
        l++;
        r--;
      }
    }
    return true;

}
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
      vector<int> v(n);
      for(int i=0;i<n;i++) cin >> v[i];
      bool flag = true;
      for(int i=0;i<n;i++)
      {
          int j = n-1-i;
          if(v[i] != v[j])
          {
            flag = iskalindrom(v,v[i]) || iskalindrom(v,v[j]) ;
            break;
          }
      }
      if(flag) cout << "YES" << endl;
      else cout << "NO" << endl;
    }
    
    return 0;
}