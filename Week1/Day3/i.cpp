#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    long long x,y;
    cin >> x >> y;
    long long  count=0;
    
    while(x<=y)
    {
        x=x*2;
        count++;
    }
    cout << count << endl;
    return 0;
}