#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
#define valid(tx,ty) (tx>=1&&tx<=n&&ty>=1&&ty<=n)
ll dx[]= {1,0,-1,0,1,-1,-1,1};
ll dy[]= {0,1,0,-1,1,1,-1,-1};

bool v[1105][1105];

ll a,b,c,d,e,f,n,zz=0;

bool check(ll u,ll v)
{
    if(u==a || v==b || (u+v)==(a+b) || (u-v)==(a-b))
    {
        return 0;
    }

    return 1;

}

void dfs(ll x,ll y)
{
    if(check(x,y)==0)
    {
        return;
    }
    if(v[x][y]==1)
    {
        return;
    }

    v[x][y]=1;

    if(x==e && y==f)
    {
        cout<<"YES"<<endl;
        exit(0);
    }

    for(ll i=0; i<8; i++)
    {
        ll r=x+dx[i];
        ll t=y+dy[i];

        if(valid(r,t))
        {
            dfs(r,t);
        }
    }
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


    cin>>n>>a>>b>>c>>d>>e>>f;

    dfs(c,d);

    cout<<"NO"<<endl;

    return 0;
}
