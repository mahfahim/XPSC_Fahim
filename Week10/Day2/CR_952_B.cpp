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
        int mxsum=0;
        int ans=2;
        for(int i=2;i<=n;i++)
        {
            int sum=0;
            for(int j=i;j<=n;j=j+i)
            {
                sum += j;
            }
            if(mxsum < sum) 
            {
                ans = i;
                mxsum = sum;
            }
        }
        cout << ans << endl;
    }
    
    return 0;
    //********* Alhamdulillah *********
}
