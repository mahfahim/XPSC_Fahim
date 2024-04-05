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
        int ls,rs;
        vector<int> dif;
        ll sum=0;
        for(int i=0;i<n;i++)
        {
            ls=i;
            rs=n-1-i;
            if(s[i]=='L')
            {
                if(ls < rs)
                {
                    sum += rs;
                    dif.push_back(rs-ls);
                }
                else
                {
                    sum += ls;
                }
            }
            else if(s[i]=='R')
            {
                if(ls > rs)
                {
                    sum += ls;
                    dif.push_back(ls-rs);
                }
                else 
                {
                    sum += rs;
                }
            }
        }   

        int sz = dif.size();
        vector<int> mx(n,sum);        
        sort(dif.begin(),dif.end());
        int idx = sz -2;
        int pre[idx+1];
        pre[0]=dif[0];
        for(int i=1;i<=idx;i++)
        {
            pre[i]=pre[i-1]+dif[i];
        }
        for(int i=0;i<=idx;i++)
        {
             mx[i] = sum - pre[idx-i];
        }
        for(int i=0;i<mx.size();i++)
        {
            cout << mx[i] << " ";
        }
        cout << endl;
    }
    
    return 0;
}