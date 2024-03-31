#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
const int N = 205;
int a[N][N];
int row,col;
bool invalid(int i,int j)
{
   if(i<1 || i>row  || j<1 || j>col) return true ;
   else return false;
}
vector<pair<int,int>> d = {{1,1},{-1,-1},{1,-1},{-1,1}};    
int bishop(int i,int j,pair<int,int> g )
{
    int ci = i + g.first;
    int cj = j + g.second;
    
    if(invalid(ci,cj)) return 0;
    else 
    {
        return a[ci][cj] + bishop(ci,cj,g);
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        cin >> row >> col;
        int total=0; 
        for(int i=1;i<=row;i++)
        {
            for(int j=1;j<=col;j++)
            {
               cin >> a[i][j];
            }
        }
        for(int i=1;i<=row;i++)
        {
            for(int j=1;j<=col;j++)
            {
               int  sum = a[i][j];
               for(int k=0;k<4;k++)
               {
                  pair<int,int> g = d[k];
                  sum += bishop(i,j,g);
               }
               total = max(total,sum);

            }
        }

         cout << total << endl;
    }
    
    return 0;
}