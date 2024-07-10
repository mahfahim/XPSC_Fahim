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
        int a,b;
        cin >> a >> b;
        if(a==b) cout << "YES" <<endl;
        else 
        {
            if(a>b)
            {
               int temp = a-b;
               if(temp<=1) cout << "YES" <<endl;
               else cout << "NO" << endl;
            }
            else if(a<b)
            {
               int temp = b-a;
               if(temp<=2) cout << "YES" <<endl;
               else cout << "NO" << endl;
            }
        }
    }
    
    return 0;
    //********* Alhamdulillah *********
}
