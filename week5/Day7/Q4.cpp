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

    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
          vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    int ans = a[0];
    for (int i = 1; i < n; ++i) {
        ans = (ans & a[i]);
    }
    cout << ans << endl;

    }
    
    return 0;
    //********* Alhamdulillah *********
}
