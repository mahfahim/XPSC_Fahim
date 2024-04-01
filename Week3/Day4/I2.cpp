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
      set<int> s;
      int a[n];
      for(int i=0;i<n;i++)
      {
         cin >> a[i];
         s.insert(a[i]);
      }
      int total_distinct = s.size();
      int total_delete = n - total_distinct;
      int ans = total_distinct - total_delete % 2;
      cout << ans << endl;
    }
    
    return 0;
}