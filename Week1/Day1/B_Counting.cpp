#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int a,b,ans;
    cin >> a >> b;
    if(a<=b) ans=b-a+1;
    else ans=0;
    cout << ans << endl;

    return 0;
}