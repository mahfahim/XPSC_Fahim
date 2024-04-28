//********* Bismillahir Rahmanir Rahim *********
#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define ull unsigned long long
#define ldb long double

int check(int x,int k)
{
   return ((x>>k)&1);
}
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
        int ans=1;
        while(ans<=n)
        {
            ans *= 2;
        }
        ans /=2;
        ans--;
        cout << ans << endl;
    }
    
    return 0;
    //********* Alhamdulillah *********
}