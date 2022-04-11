#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
ll dx[]={2,1,-1,-2,-2,-1,1,2};
ll dy[]={1,2,2,1,-1,-2,-2,-1};
string g,f;
bool vis[10][10];
ll cost[10][10];
void bfs(ll a,ll b,ll c,ll d)
{


    queue<pair<ll,ll>>qq;

    memset(vis,0,sizeof(vis));

    qq.push({a,b});

    vis[a][b]=1;
    cost[a][b]=0;

    while(!qq.empty())
    {
        ll x=qq.front().first;
        ll y=qq.front().second;
        qq.pop();
        if(x==c && y==d)
        {
            cout<<"To get from "<<g<<" to "<<f<<" takes "<<cost[x][y]<<" knight moves."<<endl;
            return;
        }
        for(ll i=0;i<8;i++)
        {
            ll xx=x+dx[i];
            ll yy=y+dy[i];
            if((xx>0 && xx<=8) && (yy>0 && yy<=8) && vis[xx][yy]==0)
            {
                vis[xx][yy]=1;
                cost[xx][yy]=cost[x][y]+1;
                qq.push({xx,yy});
            }

        }
    }

}

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);


   while(cin>>g)
   {
       cin>>f;

       ll ax=g[0]-96;
       ll ay=g[1]-'0';
       ll bx=f[0]-96;
       ll by=f[1]-'0';

       bfs(ax,ay,bx,by);
   }


   return 0;
}
