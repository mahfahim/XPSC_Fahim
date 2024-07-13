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
    
    int n;
    cin >> n;
    map<ll,int> cnt;
    while(n--)
    {
        int l,r;
        cin >> l >> r;
        cnt[l]++;
        cnt[r+1]--;
    }
    int sum = 0;
    bool flag = true;
    for(auto [x,y]:cnt)
    {
        sum += y;
        if(sum > 2)
        {
           flag = false; 
           break;
        } 
    }
    if(flag) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
    //********* Alhamdulillah *********
}
