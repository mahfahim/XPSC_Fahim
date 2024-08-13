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
        string n;
        cin  >> n;
        bool ans = false;
        if(n.size() >= 3 && n[0]=='1' && n[1]=='0')
        {
            int temp1 = n[2] - '0';
           
            if(temp1 >= 2) 
            {
                ans = true;
            }
            if(n.size() >= 4 )
            {
                int temp2 = n[2] - '0';
                if(temp2 >= 1)
                {
                    ans =  true;
                }
            }
        }
    
        if(ans) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    
    return 0;
    //********* Alhamdulillah *********
}
