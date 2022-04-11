/***
 created: 2021-11-04-15.30.27
***/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
#define get_lost_idiot return 0
#define nl '\n'

ll dx[]= {1,1,2,2,-1,-1,-2,-2};
ll dy[]= {2,-2,1,-1,2,-2,1,-1};

char a[25][25];
ll dis[25][25];
bool v[25][25];
ll cnt[25][25];
ll cst[25][25];
ll n,m;

bool valid(ll x,ll y)
{
    return (x>=0 && x<n && y>=0 && y<m && v[x][y]==0);
}


void bfs(ll x,ll y,ll cost)
{
    queue<pair<ll,ll>>q;

    memset(v,0,sizeof v);
    memset(dis,0,sizeof dis);

    q.push({x,y});

    v[x][y]=1;
    dis[x][y]=0;
    cnt[x][y]+=1;

    while(q.empty()==false)
    {
        auto d=q.front();
        q.pop();

        for(ll i=0; i<8; i++)
        {
            x=dx[i]+d.first;
            y=dy[i]+d.second;

            if(valid(x,y))
            {
                v[x][y]=1;
                dis[x][y]=dis[d.first][d.second]+1;
                cnt[x][y]+=1;
                cst[x][y]+=(dis[x][y]+cost-1)/cost;
                q.push({x,y});
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


    test
    {
        ll i,j,k,l=0,ans=1e17;

        cin>>n>>m;

        memset(cst,0,sizeof cst);
        memset(cnt,0,sizeof cnt);

        for(i=0; i<n; i++)
        {
            for(j=0; j<m; j++)
            {
                cin>>a[i][j];
            }
        }

        for(i=0; i<n; i++)
        {
            for(j=0; j<m; j++)
            {
                if(a[i][j]!='.')
                {
                    l++;
                    bfs(i,j,(a[i][j]-'0'));
                }
            }
        }


        for(i=0; i<n; i++)
        {
            for(j=0; j<m; j++)
            {
                if(cnt[i][j]==l)
                {
                     ans=min(ans,cst[i][j]);
                }
            }
        }

        cout<<"Case "<<cs<<": ";

        if(ans==1e17) cout<<-1<<nl;
        else cout<<ans<<nl;

    }


    get_lost_idiot;
}
