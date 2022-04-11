/***
 created: 2021-11-01-19.47.59
***/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
#define get_lost_idiot return 0
#define nl '\n'

ll dx[]={1,-1,0,0};
ll dy[]={0,0,1,-1};

char a[25][25];

bool v[25][25];
ll dis[25][25];
ll n,m;

bool valid(ll x,ll y)
{
     return (x>=0 && x<n && y>=0 && y<m && a[x][y]!='m' && a[x][y]!='#');
}

void bfs(ll x,ll y)
{
     queue<pair<ll,ll>>q;

     q.push({x,y});
     v[x][y]=1;
     dis[x][y]=0;

     while(q.empty()==false)
     {
          pair<ll,ll> d=q.front();

          q.pop();

          for(ll i=0;i<4;i++)
          {
               x=dx[i]+d.first;
               y=dy[i]+d.second;

               if(valid(x,y)==0 || v[x][y]==1) continue;

               dis[x][y]=dis[d.first][d.second]+1;
               v[x][y]=1;
               q.push({x,y});
          }

     }
}

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);


   test
   {
        cin>>n>>m;

        ll i,j,x,y,ans=0;

        for(i=0;i<n;i++)
        {
             for(j=0;j<m;j++)
             {
                  cin>>a[i][j];
                  if(a[i][j]=='h')
                  {
                       x=i;
                       y=j;
                  }
             }
        }

        memset(v,0,sizeof v);
        memset(dis,0,sizeof dis);

        bfs(x,y);

        for(i=0;i<n;i++)
        {
             for(j=0;j<m;j++)
             {
                  if(a[i][j]>='a' &&  a[i][j]<='c')
                  {
                       ans=max(ans,dis[i][j]);
                  }
             }
        }


        cout<<"Case "<<cs<<": "<<ans<<nl;
   }


   get_lost_idiot;
}
