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
    int n;  cin >> n;
    map<string,int> mp;
    vector<string> v;
    vector<string> temp;
    for(int i=0;i<n;i++)
    {
        string s;
        cin >> s;
        mp[s]++;
        v.push_back(s);
    }
    for(int i=0;i<n;i++)
    {

        if(mp[v[i]] == 1) 
        {
            temp.push_back(v[i]);
        }
        else if(mp[v[i]] > 1) 
        {
            mp[v[i]]--;
        }

    }
    reverse(temp.begin(),temp.end());
    for(int i=0;i<temp.size();i++)
    {
        int l=temp[i].size()-1;
        int pl=temp[i].size()-2;
        cout<<temp[i][pl]<<temp[i][l];
    }
    return 0;
    //********* Alhamdulillah *********
}