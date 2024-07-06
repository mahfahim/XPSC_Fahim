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

ll power(int a,int b)
{
    ll result = 1;
    for(int i=1;i<=b;i++) 
    {
        if(result >= LLONG_MAX/a) return LLONG_MAX;
         result *= a;
    }
    return result;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        int a,b,l;
        cin >> a >> b >> l;
        set<int> cnt;
        for(int i=0;i<=20;i++)
        {
            for(int j=0;j<=20;j++)
            {
                ll za = power(a,i);
                ll zb = power(b,j);
                if(za==LLONG_MAX ) break;
                if(zb==LLONG_MAX ) break;
                if(za > (l/zb)) break;
                
                ll z = za*zb;
                if(z>l) break;
                if( l%z==0) 
                {
                     cnt.insert(l/z);
                }  
                
            }
        }
        cout << cnt.size() << endl;
    }
    
    return 0;
    //********* Alhamdulillah *********
}
