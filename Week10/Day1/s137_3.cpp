#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
  int t ;
  cin >> t;
  while(t--)
  {
  int n,k;
  cin >> n >> k;
  vector<int> a(n);
  for(int i=0;i<n;i++)  cin >> a[i];
  
  ll mxdif=0;
  for(int i=0;i<n;i++)  
  {
      vector<int> v(n);
      v=a;
      v[i]=1;
      ll dif=0;
      for(int j=1;j<n;j++)
      {
          dif += abs(v[j]-v[j-1]);
      }
      mxdif = max(mxdif,dif);
  }
  
 for(int i=0;i<n;i++)  
  {
      vector<int> v;
      v=a;
      v[i]=k;
      ll dif=0;
      for(int j=1;j<n;j++)
      {
          dif += abs(v[j]-v[j-1]);
      }
      mxdif = max(mxdif,dif);
  }
  
  cout << mxdif << endl; 
  }

}
