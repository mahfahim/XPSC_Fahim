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
        string s;
        cin >> s;
        string ss="Timru";
        bool flag = true;


        if(s.size() == 5)
        {
          sort(s.begin(),s.end());
           for(int i=0;i<5;i++)
           {
               if(s[i] != ss[i]) flag=false;
           }
        }
        else if(s.size() != 5)
        {
            flag=false;
        }
        if(flag) cout << "YES" << endl;
        else cout << "NO" << endl;

        
    }
    
    return 0;
}