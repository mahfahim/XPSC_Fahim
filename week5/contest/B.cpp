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
        vector<ll> u(n);
        vector<ll> v(n);
        int ucount=0;
        int vcount=0;
        int ans1=0;
        int ans2=0;
        for(int i=0;i<n;i++)
        {
            cin >> u[i];
            if(u[i]==0) ucount=0;
            else ucount++;
            ans1=max(ucount,ans1);
        }
        for(int i=0;i<n;i++)
        {
            cin >> v[i];
            if(v[i]==0) vcount=0;
            else vcount++;
            ans2=max(vcount,ans2); 
            
        }
        if(ans1>ans2) cout << "Om" << endl;
        else if(ans1<ans2) cout << "Addy" << endl;
        else if(ans1==ans2) cout << "Draw" << endl;
    }
    
    return 0;
    //********* Alhamdulillah *********
}