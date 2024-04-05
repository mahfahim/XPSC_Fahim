#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define ull unsigned long long
#define ldb long double

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
        int ar[n];
        map<int,int> mp;
        map<int,bool> b;
        for(int i=0;i<n;i++)
        {
            cin >> ar[i];
            mp[ar[i]]++;
        }
        for(auto u:mp)
        {
            if(u.second>1) b[u.first]=true;
        }
        int count=0;
        for(int i=0;i<n;i++)
        {
            if(!b.empty())
            {
                mp[ar[i]]--;
                count++;
                if(mp[ar[i]]==1) 
                {
                    b[ar[i]]=false;
                    b.erase(ar[i]);
                }

            }
            
        }
        
        cout << count << endl;
        mp.clear();
        b.clear();
        
    }
    return 0;
}