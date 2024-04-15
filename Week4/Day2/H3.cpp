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
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int ar[n];
        for(int i=0;i<n;i++) cin >> ar[i];
        priority_queue<int> pq;
        ll val=0;
        for(int i=0;i<n;i++)
        {
            if(ar[i]!=0) pq.push(ar[i]);
            else if(ar[i]==0)
            {
              if(!pq.empty())
              {
                val += pq.top();
                pq.pop();
              }
            } 
        }
        cout << val << endl;
    }
    return 0;
    //********* Alhamdulillah *********
}