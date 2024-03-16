#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    float a,b,t;
    int ans=0;
    cin >> a >> b >> t;
     t=t+0.5;
     float check=a;
    while(a<=t)
    {
      ans=ans+b;
      a=a+check;
    }
    cout << ans << endl;
    return 0;
}