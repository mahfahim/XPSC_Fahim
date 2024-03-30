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
        int n,m;
        cin >> n >> m;
        string s[n];
        for(int i=0;i<n;i++)
        {
           cin >> s[i];
        }
        int  minDif = INT_MAX;
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                int ans=0;
                for(int k=0;k<m;k++)
                {
                    int first = s[i][k] - 'a' ;
                    int second = s[j][k] - 'a';
                    int d = abs(first - second);
                    ans += d;
                }
                minDif = min(minDif,ans);
            }
        }
        cout << minDif << endl;
    }
    return 0;
}