#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
ll f=0;
ll a[11][11];
char ee;
bool check(ll r,ll c,ll x)
{
    ll i,j;
    if(a[r][c]!=0) return 0;
    for(i=0; i<9; i++)
    {
        if(a[i][c]==x) return 0;
        if(a[r][i]==x) return 0;
    }

    ll s=r-r%3;
    ll e=c-c%3;

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            if(a[i+s][j+e]==x)
            {
                return 0;
            }
        }
    }
    return 1;
}


bool findindex(ll &u,ll &v)
{
    ll m=10000;
    for(ll i=0;i<9;i++)
    {
        for(ll j=0;j<9;j++)
        {
            if(a[i][j]==0)
            {
                ll cnt=0;
                for(ll dd=1;dd<=9;dd++)
                {
                    if(check(i,j,dd)) cnt++;
                }
                if(cnt<m)
                {
                    m=cnt;
                    u=i;
                    v=j;
                }
            }

        }
    }
    if(m<10) return 1;
    return 0;
}


bool dfs()
{
    ll u,v;

    if(findindex(u,v)==0)
    {
        return 1;
    }

    for(ll z=1; z<=9; z++)
    {
        if(check(u,v,z)==1)
        {
            a[u][v]=z;
            if(dfs()) return 1;
            a[u][v]=0;
        }

    }
    return 0;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    test
    {
        string dd;

        getline(cin,dd);

        for(ll i=0; i<9; i++)
        {
            for(ll j=0; j<9; j++)
            {
                cin>>ee;
                if(ee=='.') a[i][j]=0;
                else a[i][j]=ee-48;
            }
        }

        cout<<"Case "<<cs<<":"<<endl;
        dfs();
        for(ll i=0; i<9; i++)
        {
            for(ll j=0; j<9; j++)
            {
                cout<<a[i][j];
            }
            cout<<endl;
        }
    }

    return 0;
}
