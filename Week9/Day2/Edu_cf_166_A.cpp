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
        char pre = s[0];
        bool flag = true;
        char dig,alp;
        if(isdigit(s[0]))
        {
            dig=s[0];
            alp='\n';
        } 
        else
        {
            alp=s[0];
            dig='\n';
        } 
        for(int i=1;i<s.size();i++)
        {
           
            if(isalpha(s[i]))
            {
                if(alp!='\n' && s[i]<alp) 
                {
                    flag=false;
                    
                }    
                 alp=s[i];
            }
            else if(isdigit(s[i]))
            {
                if(isalpha(s[i-1])) flag = false; 
                else if(dig!='\n' && s[i]<dig)
                {
                  flag=false;
            
                } 
                 dig=s[i];
            }
            
        }
        if(flag) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    
    return 0;
    //********* Alhamdulillah *********
}
