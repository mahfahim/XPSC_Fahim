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
        int n,m,k;
        cin >> n >> m >> k;
        vector<int> b(n);
        vector<int> c(m);
        for(int i=0;i<n;i++) cin >> b[i];
        for(int i=0;i<m;i++) cin >> c[i];
        int cnt = 0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                 if((b[i]+c[j])<=k)
                 {
                   cnt++; 
                 } 
            }
        }
        cout << cnt << endl;
    }
    
    return 0;
    //********* Alhamdulillah *********
}
