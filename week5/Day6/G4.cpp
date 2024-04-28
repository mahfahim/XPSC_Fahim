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
        vector<ll> a(n);
        ll sum=0;
        for(int i=0;i<n;i++)
        {
            cin >> a[i];
            sum |=a[i];
        } 
        cout << sum << endl;
    }
    
    return 0;
    //********* Alhamdulillah *********
}