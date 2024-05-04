//********* Bismillahir Rahmanir Rahim *********
#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define ull unsigned long long
#define ldb long double

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
  
     int n,k;
     cin >> n >> k;
     vector<int> v(n);
     vector<int> q(k);
     for(int i=0;i<n;i++) cin >> v[i];
     for(int i=0;i<k;i++) 
     {
        cin >> q[i];
        auto it = upper_bound(v.begin(),v.end(),q[i]);
        cout << it - v.begin() << endl;
     }

    return 0;
    //********* Alhamdulillah *********
}