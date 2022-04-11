/***
 created: 2021-11-02-01.42.21
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

ll n,m,xx,yy;

bool valid(ll x,ll y,char c)
{
     return (x>=0 && x<n && y>=0 && y<n && v[x][y]==0 && (a[x][y]!='#' && (a[x][y]=='.' || a[x][y]==c)));
}

ll bfs(ll x,ll y,char c)
{
     memset(v,0,sizeof v);

     queue<pair<pair<ll,ll>,ll>>q;

     q.push({{x,y},0ll});

     v[x][y]=1;
     a[x][y]='.';

     while(q.empty()==false)
     {
          auto d=q.front();

          q.pop();

          if(a[d.first.first][d.first.second]==c)
          {
               xx=d.first.first;
               yy=d.first.second;

               return d.second;
          }

          for(ll i=0;i<4;i++)
          {
               x=dx[i]+d.first.first;
               y=dy[i]+d.first.second;

               if(valid(x,y,c))
               {
                    v[x][y]=1;
                    q.push({{x,y},d.second+1});
               }
          }
     }

     return -1;
}

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);


   test
   {
        ll i,j,k,l,food=0,ans=0;

        char c='B';

        cin>>n;

        for(i=0;i<n;i++)
        {
             for(j=0;j<n;j++)
             {
                  cin>>a[i][j];

                  if(a[i][j]>='A' && a[i][j]<='Z')
                  {
                       if(a[i][j]=='A')
                       {
                            xx=i;
                            yy=j;
                       }
                       else food++;
                  }
             }
        }

        while(food--)
        {
             l=bfs(xx,yy,c++);
             if(l==-1)
             {
                  ans=-1;
                  break;
             }
             ans+=l;
        }

        cout<<"Case "<<cs<<": ";

        if(ans==-1) cout<<"Impossible"<<nl;
        else cout<<ans<<nl;
   }


   get_lost_idiot;
}
