#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>> n;
    bool flag[n+2];
    memset(flag,false,sizeof(flag));
    int a;
    while(cin >> a)
    {
        flag[a]=true;
    }


    for(int i=1;i<=n;i++)
    {
       if(flag[i]==false)
      {
        cout << i<<" ";
      }
    }
    return 0;
}