#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

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
        char ch;
        cin >> ch;
        string s;
        cin >> s;
        set<int> st;
        bool flag=false;
        int ans=0;
        if(s.size()==1) 
        {
            flag=true;   
        }
        for(int i=0;i<n;i++)
        {
            if(s[i]=='g') st.insert(i+1);
        }
        
        for(int i=0;i<n;i++)
        {
            if(s[i]==ch )
            {
                auto lb = st.lower_bound(i+1);
                if(lb==st.end())
                {
                   int temp = n - (i+1) + *(st.begin());
                   ans=max(ans,temp);
                }
                else
                {
                   ans=max(ans,*lb-(i+1));
                }
            }
        }
        if(flag) cout << 0 << endl;
        else cout << ans << endl;

    }
    
    return 0;
}