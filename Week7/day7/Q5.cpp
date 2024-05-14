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
     string s;
     cin >> s;
     char track=s[0];
     bool flag=false;
     for(int i=1;i<s.size()/2;i++)
     {
       if(track!=s[i])
       {
        flag=true;
       }
     }
     if(flag) cout << "Yes" << endl;
     else cout << "No" << endl;
    }
        return 0;
    //********* Alhamdulillah *********
}