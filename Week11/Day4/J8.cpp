//********* Bismillahir Rahmanir Rahim *********
#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define ull unsigned long long
#define ldb long double

ll lcm(ll a,ll b)
{
    return (a*b)/__gcd(a,b);
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n,a,b,p,q;
    cin >> n >> a >> b >> p >> q ;
    ll sum=0;
    if(p>q)
    {
        sum = (n/a)*p +  (n/b)*q - (n/lcm(a,b))*q;
    } 
    else 
    {
        sum = (n/a)*p +  (n/b)*q - (n/lcm(a,b))*p;
    }
    cout << sum << endl;
    return 0;
    //********* Alhamdulillah *********
}
