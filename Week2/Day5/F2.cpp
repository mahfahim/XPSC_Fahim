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
        int a[n];
        int b[n];
        for(int i=0;i<n;i++) cin >> a[i];
        for(int i=0;i<n;i++)
        {
            cin >> b[i];
            string s;
            cin >> s;
            int start=a[i];
            for(int i=0;i<s.size();i++)
            {
                if(start==10 ) start=0;
                if(start==-1) start=9;

                if(s[i]=='U') start--;
                if(s[i]=='D') start++;
            }
            if(start==10 ) start=0;
            if(start==-1) start=9;

            cout << start <<" ";
        }
        cout << endl;
        
    }
    
    return 0;
}