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
        ll a,b;
        cin >> a >> b ;
        if(b==1)
        {
            cout << "NO" << endl;
        }
        else 
        {
            cout << "YES" << endl;
            cout << a <<" "<< a*b << " " << a*(b+1LL) << endl;
        }
    }
    
    return 0;
    //********* Alhamdulillah *********
}