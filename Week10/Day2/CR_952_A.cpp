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
        string a,b;
        cin >> a >> b;
        char temp = a[0];
        a[0]=b[0];
        b[0]=temp;
        cout << a <<" "<< b << endl;
    }
    
    return 0;
    //********* Alhamdulillah *********
}
