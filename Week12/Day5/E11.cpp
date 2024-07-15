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
        ll a,b;
        cin >> a >> b;
        cnt[a]++;
        cnt[b+1]--;
     }
     int ans = 0;
     int mx = 0;
     for(auto u:cnt)
     {
        ans += u.second;
        if(ans > mx) mx = ans ;
     }
     cout << mx << endl;
     return 0;
     //********* Alhamdulillah *********
 }
