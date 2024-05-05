//********* Bismillahir Rahmanir Rahim *********
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

    string t,p;
    cin >> t >> p;
    int n = t.size();
    int m = p.size();
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin >> v[i];
    }
   
    auto func = [&](int mid)
    {
        vector<bool> flag(n+1,false);
        bool found = false;

        for(int i=0;i<=mid;i++)
        {
           flag[v[i]-1] = true;
        }
        int j=0;
        for(int i=0;i<n;i++)
        {
            if(t[i]==p[j] && !flag[i])
            {
                j++;
            }
            if(m==j)
            {
               found = true;
               break;
            }
        }
        return found;
        
    };
     int l=0,r=n-1;
    int ans = 0 ;
    while(l<=r)
    {
        int mid = (l+r)/2;
        if(func(mid))
        {
           ans = mid+1;
           l = mid + 1;
        }
        else
        {
            r = mid -1;
        }
    }

    cout << ans << endl;

    return 0;
    //********* Alhamdulillah *********
}