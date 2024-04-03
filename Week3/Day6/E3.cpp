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
        int mat[n+1][n];
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<n;j++)
            {
                cin >> mat[i][j];
            }
        }
        map<int,int> mp;
        map<int,int> m;
        for(int i=1;i<=n;i++)
        {
            mp[mat[i][n-1]]=i;// i mane row
            m[mat[i][n-1]]++;// n-1 last col
        }

        int prelastval,lastval;
        for(auto u:m)
        {
            if(u.second==1) prelastval = u.first;
            else lastval = u.first;
        }
        for(int i=1;i<n;i++)
        {
            cout << mat[mp[prelastval]][i] <<" ";
        }
        cout << lastval << endl;
    }

    return 0;
}