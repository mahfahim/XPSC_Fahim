//********* Bismillahir Rahmanir Rahim *********
#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
#define endl "\n"
#define ll long long
#define ldb long double
#define ull unsigned long long
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
//template <typename T> using pbds = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,q;
    cin >> n >> q;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin >> a[i];
    vector<int> dif(n+1,0);
    while(q--)
    {
        int l,r;
        cin >> l >> r;
        dif[l-1]++;
        dif[r]--;
    }
    for(int i=1;i<=n+1;i++)
    {
        dif[i] = dif[i] + dif[i-1];
    }
    sort(dif.begin(),dif.end(),greater<int>());
    sort(a.begin(),a.end(),greater<int>());
    // for(auto u:a) cout << u << " ";
    // cout << endl;
    // for(auto u:dif) cout << u << " ";
    // cout << endl;
    ull ans = 0;
    for(int i=0;i<n;i++)
    {
       ans += (ull)dif[i] * a[i];
    }
    cout << ans << endl;
    return 0;
    //********* Alhamdulillah *********
}
