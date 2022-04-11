#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
ll n,k;
ll g[105][105];
ll color[105];
ll ans[105];
ll maxx=0;

ll check(ll ind)
{
    for(ll j=0; j<n; j++)
    {
        if(color[j]==1 && g[ind][j]==1)
        {
            return 0;
        }
    }
    return 1;
}

void dfs(ll indx)
{

    if(indx>maxx)
    {
        maxx=indx;
        for(ll j=0; j<n; j++)
        {
            ans[j]=color[j];
        }
    }
    if(indx==n) return;

    for(ll j=0; j<n; j++)
    {
        if(check(j)==1 && color[j]==0)
        {
            color[j]=1;
            dfs(indx+1);
            color[j]=0;
        }
    }
    return;
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    test
    {
        cin>>n>>k;
        ll x,y;
        memset(g,0,sizeof(g));
        for(ll i=0; i<k; i++)
        {
            cin>>x>>y;
            x--,y--;
            g[x][y]=1;
            g[y][x]=1;
        }
        memset(color,0,sizeof(color));
        maxx=0;

        dfs(0);
        cout<<maxx<<endl;

        ll d=0;
        for(ll i=0; i<n; i++)
        {
            if(ans[i]==1)
            {
                if(d) cout<<" ";
                cout<<i+1;
                d=1;
            }
        }
        cout<<endl;
    }


    return 0;
}
