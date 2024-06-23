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
    int n;
    cin >> n;
    while(n--)
    {
      int a,b,c;
      cin >> a >> b >> c;
      int ans = INT_MAX;
      int sum=0;
      for(int i=1;i<=10;i++)
      {
        sum=abs(i-a)+abs(i-b)+abs(i-c);
        ans = min(ans,sum);
      }
      cout << ans << endl;
    }
    
    return 0;
    //********* Alhamdulillah *********
}
