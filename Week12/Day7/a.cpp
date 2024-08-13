//********* Bismillahir Rahmanir Rahim *********
#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
#define endl "\n"
#define ll long long
#define ldb long double
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
//template <typename T> using pbds = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
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
        int a[n+2];
        vector<bool> flag(n+3,false);
        cin >> a[1];
        flag[a[1]]=true;
        bool ans = true;
        for(int i=2;i<=n;i++)
        {
          cin >> a[i];
          flag[a[i]]=true;
          if(a[i]==1) 
          {
             if(flag[a[i]+1] == false) ans=false;
          }
          else if(a[i]==n)
          {
             if(flag[a[i]-1] == false ) ans=false;
          }
          else 
          {
             if(flag[a[i]+1] == false && flag[a[i]-1] == false ) ans = false;
             
          }
        }
        if(ans) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    
    return 0;
    //********* Alhamdulillah *********
}
