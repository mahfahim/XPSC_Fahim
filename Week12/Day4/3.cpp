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
        ll prod = 2;
        int k ;
        while(prod <= n)
        {
            prod *= 2;
        }
    
        int  ans = prod - n;
            ans = n - ans;
            cout << ans << endl;
    }
    
    return 0;
    //********* Alhamdulillah *********
}=
