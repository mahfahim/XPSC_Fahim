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
        string s;
        cin >> s;
        int mil=0,omil=0,mid;
        if(n%2==0) mid=0;
        else mid=1;
        for(int i=0;i<n/2;i++)
        {
            if(s[i]!=s[n-i-1])
            {
              omil++;
            }
        }
        string ans="";
        int high=n-omil;
        if(n%2==0)
        {
           for(int i=0;i<omil;i++) ans+='0';
           for(int i=omil;i<=high;i++)
           {
              if(omil%2==0 && i%2==0) ans+='1';
              else if(omil%2!=0 && i%2!=0) ans+='1';
              else ans+='0';
           } 
           for(int i=high+1;i<=n;i++) ans+='0';
        }
        else
        {
           for(int i=0;i<omil;i++) ans+='0';
           for(int i=omil;i<=high;i++)
           {
              ans+='1';
           } 
           for(int i=high+1;i<=n;i++) ans+='0';
        }
        cout << ans << endl;
    }
    
    return 0;
    //********* Alhamdulillah *********
}
