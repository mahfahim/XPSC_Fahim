#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
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
        for(auto& x:s)
        {
            x = tolower(x);
        }
        
        vector<char> v;
        v.push_back(s[0]);
        char pre=s[0];
        for(int i=1;i<n;i++)
        {
            if(pre == s[i])
            {
                pre = s[i];
                continue;
            }
            else
            {
                pre = s[i];
                v.push_back(s[i]);
            }
        }
        
        if(v.size() == 4 && v[0]=='m' && v[1]=='e' && v[2]=='o' && v[3]=='w') cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
