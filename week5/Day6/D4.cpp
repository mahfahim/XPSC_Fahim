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
        int a[n+10];
        
        for(int i=0;i<n;i++) cin >> a[i];
         
        int ans=-1;
        
        for(int i=0;i<(1<<8);i++)
        {
            int b=0;
            for(int j=0;j<n;j++ )
            {
               b ^= a[j]^i;
            }
            if(b==0)
            {
               ans = i;
               break;
            } 
        }
      
        cout << ans << endl;
    }
    
    return 0;
    //********* Alhamdulillah *********
}