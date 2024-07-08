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
// template <typename T> using pbds = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n,k;
    cin >> n >> k;
    ll a[n+5];
    for(int i=0;i<n;i++) cin >> a[i];
    pbds<pair<ll,int>> p;
    for(int i=0;i<k;i++)
    {
        p.insert({a[i],i});
    }
    int idx,l,r;
    if(k%2!=0) idx = k/2;
    else{
        idx = k/2;
        idx--;
    } 

    auto it = p.find_by_order(idx);
    cout << it->first << " ";
    l=0;
    r=k;
    while(r<n)
    {
      p.erase({a[l],l});
      p.insert({a[r],r});
      auto its = p.find_by_order(idx);
      cout << its->first <<" ";
      l++;
      r++;
    }
    return 0;
    //********* Alhamdulillah *********
}
