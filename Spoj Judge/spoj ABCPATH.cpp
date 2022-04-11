#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
ll v[60][60],r,c,ss;
ll dx[]={0,-1,-1,-1, 0, 1,1,1};
ll dy[]={1, 1, 0,-1,-1,-1,0,1};

string a[100];

ll dfs(ll i,ll j)
{
    v[i][j]=ss;
    ll ans=1;
    for(ll k=0;k<8;k++)
    {
        ll x=i+dx[k];
        ll y=j+dy[k];
        if(x>=0 && x<r && y>=0 && y<c && v[x][y]!=ss)
        {
            if(a[i][j]+1==a[x][y])
            {
                ans=max(ans,1+dfs(x,y));
            }
        }
    }
    return ans;
}

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   ll cas=1;
   while(cin>>r>>c && r&&c)
   {
       cout<<"Case "<<cas++<<": ";
       for(ll i=0;i<r;i++)
       {
           cin>>a[i];
       }
       ll ans=0;

       for(ll i=0;i<r;i++)
       {
           for(ll j=0;j<c;j++)
           {
               if(a[i][j]=='A')
               {
                   ss++;
                   ans=max(ans,dfs(i,j));
               }
           }
       }
       cout<<ans<<endl;
   }

   return 0;
}
