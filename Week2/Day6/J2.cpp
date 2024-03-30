#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long

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
        string s1,s2;
        cin >> s1 >> s2;
        bool flag=true;
        for(int i=0;i<s1.size();i++)
        {
            
            if(s1[i] == s2[i])
            {
               continue;
            }
            else
            {
                if((s1[i] == 'B' && s2[i] == 'G') || (s2[i] == 'B' && s1[i] == 'G'))
                {
                    continue;
                }
                else
                {
                    flag=false;
                }
            }
        }
        if(flag) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}