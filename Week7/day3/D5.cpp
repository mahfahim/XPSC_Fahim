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
        ll a,b,c,first,second;
        cin >> a >> b >> c;
        first = a-1;
        if(b>c) 
        {
            second=(b-c)+(c-1);
        }
        else if(b<c)
        {
            second=(c-b)+(c-1);
        }
        
        if(first==second) cout <<3<<endl;
        else if(first<second) cout <<1<<endl;
        else cout <<2<<endl;
    }
    
    return 0;
    //********* Alhamdulillah *********
}