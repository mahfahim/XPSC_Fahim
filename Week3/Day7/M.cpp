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
        map<char,int> am;
        map<char,int> bm;
        for(int i=0;i<a.size();i++) am[a[i]]++;
        for(int i=0;i<b.size();i++) bm[b[i]]++;
        int la = a.size()-1;
        int lb = b.size()-1;
        if(a[la]=='S' && b[lb]=='L') cout << "<" << endl;
        else if(a[la]=='L' && b[lb]=='S') cout << ">" << endl;
        else if(a[la]=='S' && b[lb]=='M') cout << "<" << endl;
        else if(a[la]=='M' && b[lb]=='S') cout << ">" << endl;
        else if(a[la]=='M' && b[lb]=='L') cout << "<" << endl;
        else if(a[la]=='L' && b[lb]=='M') cout << ">" << endl;
        else if(a[la]=='L' && b[lb]=='L')
        {
            if(am['X'] > bm['X']) cout << ">" << endl;
            else if(am['X'] < bm['X']) cout << "<" << endl;
            else cout << "=" << endl;
        } 
        else if(a[la]=='S' && b[lb]=='S')
        {
            if(am['X'] > bm['X']) cout << "<" << endl;
            else if(am['X'] < bm['X']) cout << ">" << endl;
            else cout << "=" << endl;
        } 
        else 
        {
            cout << "=" << endl;
        }
    }
    return 0;
}