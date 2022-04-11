#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
char xx[22][22];
ll r,c,ans;
int v[100][100];
void dfs(ll x,ll y)
{
    if(v[x][y]==1) return;
    v[x][y]=1;

    if(x+1<r && xx[x+1][y]!='#' && v[x+1][y]==0)
    {
        ans++;
        dfs(x+1,y);
    }
    if(y+1<c && xx[x][y+1]!='#' && v[x][y+1]==0)
    {
        ans++;
        dfs(x,y+1);
    }
    if(y-1>=0 && xx[x][y-1]!='#' && v[x][y-1]==0)
    {
        ans++;
        dfs(x,y-1);
    }
    if(x-1>=0 && xx[x-1][y]!='#' && v[x-1][y]==0)
    {
        ans++;
        dfs(x-1,y);
    }
}

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   test
   {
       ll z=0,i,j,x,y;
       cin>>c>>r;
       memset(v,0,sizeof(v));
       for(i=0;i<r;i++)
       {
           for(j=0;j<c;j++)
           {
               cin>>xx[i][j];
               if(xx[i][j]=='@')
               {
                   x=i;
                   y=j;
               }
           }
       }
       ans=1;
       dfs(x,y);

       cout<<"Case "<<cs<<": "<<ans<<endl;
   }
   return 0;
}
