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

    ll l,r;
    cin >> l >> r;

    int dif = r-l+1;
    if(dif%2==0) 
    {
        cout <<"YES"<<endl;
        for(ll i=l;i<=r;i=i+2)
        {
            cout << i << " " << i+1 << endl;
        }
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
    //********* Alhamdulillah *********
}
