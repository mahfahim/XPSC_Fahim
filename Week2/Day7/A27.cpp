//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    int longestKSubstr(string s, int k) {
    // your code here
     map<char,int> mp;
     int l=0,r=0;
     int n = s.size();
     int count=0;
     int ans=0;
     bool flag=true;
     while(r<n)
     {
         mp[s[r]]++;
         if(mp.size()==k) flag=false;
         if(mp.size() <= k)
         {
             count = r-l+1;
             ans=max(ans,count);
         }
         else
         {
             while(mp.size() > k)
             {
                 mp[s[l]]--;
                 if(mp[s[l]]==0) mp.erase(s[l]);
                 l++;
             }
            if(mp.size() <= k)
            {
             count = r-l+1;
              ans=max(ans,count);
            }
          
         }
           
         r++;
     }
     if(flag) return -1;
     else return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int k;
        cin >> k;
        Solution ob;
        cout << ob.longestKSubstr(s, k) << endl;
    }
}

// } Driver Code Ends