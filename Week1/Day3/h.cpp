#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int s,t;
    int count=0;
    cin >> s >> t;
    for(int i=0;i<=s;i++)
    {
        for(int j=0;j<=s;j++)
        {
            for(int k=0;k<=s;k++)
            {
                if((i+j+k)<=s && (i*j*k)<=t) count++;
            }
        }
    }

    cout << count <<endl;
    
    return 0;
}