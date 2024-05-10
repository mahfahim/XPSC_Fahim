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
        ll a,b,n,s;
        cin >> a >> b >> n >> s;
        if(s%n<=b && (n*a+b)>=s) cout<< "YES" <<endl;
        else cout << "NO" <<endl;
       
    }
    
    return 0;
    //********* Alhamdulillah *********
}