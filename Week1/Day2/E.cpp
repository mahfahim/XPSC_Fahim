#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int a,b,c;
    cin >> a >> b >> c;
    int ans=-1;
    int multi=c;
    while(b>=c)
    {
        if(a<=c && b>=c)
        {
            ans=c;
            break;
        }
        c=c+multi;
        
    }
    cout << ans << endl;
    return 0;
}