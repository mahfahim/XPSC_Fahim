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
       ll a[n];
       ll sum = 0;
       for(int i=0;i<n;i++)
       {
          cin >> a[i];
          sum += abs(a[i]);
       } 
        ll count = 0;
        queue<int> q;

       for(int i=0;i<n;i++)
       {
          if(a[i]==0)
          {
            continue;
          }
          else if(a[i]<0)
          {
             if(q.empty())
             {
                count++;
                q.push(a[i]);
             }
          }
          else 
          {
            if(!q.empty())
            {
                q.pop();
            }
          }
       }
       cout << sum << " " << count << endl;
    }
    return 0;
}