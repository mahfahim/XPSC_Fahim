#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int a,b,ans;
    cin >> a >> b ;

    ans=max(a+a-1,b+b-1);
    ans=max(ans,a+b);

    cout << ans << endl;
    
    return 0;
}