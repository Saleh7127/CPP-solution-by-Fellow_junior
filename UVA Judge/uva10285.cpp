#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
ll grid[105][105],r,c,ans=0;
///uva 10285
void dfs(ll i,ll j,ll maxx,ll lastvlu)
{
    if(i==0 || j==0 || i>r || j>c || grid[i][j]>=lastvlu)
    {
        ans=max(ans,maxx);
        return;
    }
    dfs(i+1,j,maxx+1,grid[i][j]);
    dfs(i-1,j,maxx+1,grid[i][j]);
    dfs(i,j+1,maxx+1,grid[i][j]);
    dfs(i,j-1,maxx+1,grid[i][j]);
}

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);
   test
   {
       string a;
       cin>>a>>r>>c;

       cout<<a<<": ";
       for(ll i=1;i<=r;i++)
       {
           for(ll j=1;j<=c;j++)
           {
               cin>>grid[i][j];
           }
       }
       ans=0;

       for(ll i=1;i<=r;i++)
       {
           for(ll j=1;j<=c;j++)
           {
               dfs(i+1,j,1,grid[i][j]);
               dfs(i-1,j,1,grid[i][j]);
               dfs(i,j+1,1,grid[i][j]);
               dfs(i,j-1,1,grid[i][j]);
           }
       }
       cout<<ans<<endl;

   }
   return 0;
}
