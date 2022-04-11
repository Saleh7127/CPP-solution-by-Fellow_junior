/***
 created: 2022-03-28-15.35.18
***/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
#define get_lost_idiot return 0
#define nl '\n'

vector<pair<ll,ll>>ff;
char a[300][300];
ll r,c,x,y;
ll dx[]= {1,-1,0,0};
ll dy[]= {0,0,1,-1};
ll disf[205][205];
ll disj[205][205];
bool v[205][205];

bool isvalid(pair<ll,ll>u)
{
    if(u.first<0 || u.first>=r || u.second<0 || u.second>=c || v[u.first][u.second] || a[u.first][u.second]!='.') return 0;

    return 1;
}


void bfs1()
{
    queue<pair<ll,ll>>q;

    for(ll i=0; i<r+5; i++)
    {
        for(ll j=0; j<c+5; j++)
        {
            v[i][j]=0;
            disf[i][j]=INT_MAX;
        }
    }

    for(auto d:ff)
    {
        disf[d.first][d.second]=0;
        v[d.first][d.second]=1;
        q.push(d);
    }

    pair<ll,ll>u,s;

    while(!q.empty())
    {
        u=q.front();
        q.pop();

        for(ll i=0; i<4; i++)
        {
            s.first=u.first+dx[i];
            s.second=u.second+dy[i];

            if(isvalid(s))
            {
                v[s.first][s.second]=1;
                disf[s.first][s.second]=disf[u.first][u.second]+1;
                q.push(s);
            }
        }
    }
}


ll bfs2(ll x,ll y)
{
    queue<pair<ll,ll>>q;

    for(ll i=0; i<r+5; i++)
    {
        for(ll j=0; j<c+5; j++)
        {
            v[i][j]=0;
            disj[i][j]=INT_MAX;
        }
    }

    disj[x][y]=0;
    v[x][y]=1;
    q.push({x,y});

    pair<ll,ll>u,s;

    while(!q.empty())
    {
        u=q.front();
        q.pop();

        if(u.first==0 || u.first==r-1 || u.second==0 || u.second==c-1)
        {
            return disj[u.first][u.second];
        }

        for(ll i=0; i<4; i++)
        {
            s.first=u.first+dx[i];
            s.second=u.second+dy[i];

            if(isvalid(s) && disf[s.first][s.second]>disj[u.first][u.second]+1)
            {
                v[s.first][s.second]=1;
                disj[s.first][s.second]=disj[u.first][u.second]+1;
                q.push(s);
            }
        }
    }

    return -1;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);



    test
    {
        cin>>r>>c;

        for(ll i=0; i<r; i++)
        {
            for(ll j=0; j<c; j++)
            {
                cin>>a[i][j];
                if(a[i][j]=='J')
                {
                    x=i;
                    y=j;
                }
                else if(a[i][j]=='F')
                {
                    ff.push_back({i,j});
                }
            }
        }

        bfs1();

        ll l=bfs2(x,y);

        cout<<"Case "<<cs<<": ";

        if(l==-1) cout<<"IMPOSSIBLE"<<nl;
        else cout<<l+1<<nl;

        ff.clear();

    }

    get_lost_idiot;
}

