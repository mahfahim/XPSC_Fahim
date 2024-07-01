//********* Bismillahir Rahmanir Rahim *********
#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define ull unsigned long long
#define ldb long double
const int N = 1e6+5;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    vector<bool> prime(N,true);
    prime[1]=false;
    map<ll,bool> flag;
    for(int i=2;i*i<=N;i++)
    {
        if(prime[i])
        {
          for(int j=i+i;j<=N;j=j+i)
          {
            prime[j]=false;
          }
        }
    }
    while(n--)
    {
        ll x ;
        cin >> x; 
        double f = sqrt(x);
        if(abs(f-int(f))==0 && prime[f]) cout << "YES";
        else cout << "NO";
        
        cout << endl;
    }
    return 0;
    //********* Alhamdulillah *********
}
