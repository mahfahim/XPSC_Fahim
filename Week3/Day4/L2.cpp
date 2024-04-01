#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long

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
        int a[n];
        map<int,int> p;
        for(int i=0;i<n;i++)
        {
            cin >> a[i];
            p[a[i]]++;
        }
        int maxsame=0;
        for(auto u:p)
        {
            maxsame = max(maxsame,u.second);
        }
        int swp = n - maxsame;
        int swp2 = swp;
        int cpy=0;
        while(maxsame <= swp ||  swp2 > 0)
        {
            cpy++;
            swp2 -= maxsame;
            maxsame *= 2;
        }
        cout << cpy+swp << endl;
    }
    
    return 0;
}