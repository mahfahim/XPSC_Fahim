#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int a,b,c;
    cin >> a >> b >> c;
    int n=c/a;
    bool flag=false;
    for(int i=0;i<=n;i++)
    {
        int rem=c-a*i;
        if(rem % b == 0)
        {
            flag=true;
            break;
        }
    }
    if(flag) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}