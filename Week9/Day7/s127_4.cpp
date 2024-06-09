//********* Bismillahir Rahmanir Rahim *********
#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define ull unsigned long long
#define ldb long double
#define  limit 1e9

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        ll l;
        cin >> n >> l;
        vector<ll> v(n);
        if(limit >= l*(n+1))
        {
           for(int i=0;i<n;i++)
           {
             v[i] = l*(i+2);
           }
        }
        else
        {
            for(int i=0;i<n;i++)
            {
              v[i]=(l/2)-(i+1);
            }
        } 

        for(int i=0;i<n;i++)
        {
            cout << v[i] << " ";
        }
        cout << endl;
    }
    
    return 0;
    //********* Alhamdulillah *********
}
