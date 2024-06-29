//********* Bismillahir Rahmanir Rahim *********
#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define ull unsigned long long
#define ldb long double

bool isprime(ll n)
{
  if(n==1) return false;
  else
  {
     for(int i=2;i*i<=n;i++)
    {
     if(n%i==0) return false;
    }
  }
 
  return true;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin >> n;
    int ans;
    if(isprime(n))
    {
      ans = 1;
    }
    else
    {
      if(n%2==0)
      {
        ans = 2;
      }
      else
      {
         if(isprime(n-2)) ans = 2;
         else ans = 3;
      }
    }
    cout << ans << endl;
    return 0;
    //********* Alhamdulillah *********
}
