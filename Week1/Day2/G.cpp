#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

bool flag[27];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    
    bool cor=true;
    string s;
    cin >> s;
    for(int i=0;i<26;i++) flag[i]=false;
    for(int i=0;i<s.size();i++)
    {
        int indx = s[i] - 'a';
        if(flag[indx]==false) flag[indx]=true;
    }
    
    for(int i=0;i<26;i++)
    {
         if(flag[i]==false)
         {
          char c = 'a' + i;
          cout << c <<" ";
          cor=false;
          break;
         }
    }
    if(cor) cout << "None" << endl;
    return 0;
}