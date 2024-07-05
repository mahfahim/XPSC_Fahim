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

    long double x,y;
    cin >> x >> y;

    long double a = y*log(x);
    long double b = x*log(y);
    
    if(a<b) cout << "<" << endl;
    else if(a>b)  cout << ">" << endl;
    else if(a==b) cout << "=" << endl;
    
    
    return 0;
    //********* Alhamdulillah *********
}
