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
        int cnt = 0;
       if(s.size()>=3)
       {
        for(int i=0;i<s.size()-2;i++)
        {
            if(i<=n-3 && s.substr(i,3)=="map" || s.substr(i,3)=="pie") cnt++;
            if(i<=n-5 && s.substr(i,5)=="mapie") cnt--;
        }
       }
        
        cout << cnt << endl;
    }
    
    return 0;
    //********* Alhamdulillah *********
}
