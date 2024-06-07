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
        int n,k;
        ll x;
        cin >> n >> k >> x;
        if(pow(2,k-1)<=x)  cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
    //********* Alhamdulillah *********
}
