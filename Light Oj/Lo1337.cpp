#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
bool v[505][505],v1[505][505];
char a[505][505];
ll xx[505][505];
ll n,m,x,y,i,j,k,l,q,ans;


void dfs(ll x,ll y)
{
    if(v[x][y]==1 || x<0 || x==m || y<0 || y==n || a[x][y]=='#') return;

    v[x][y]=1;

    if(a[x][y]=='C') ans++;

    dfs(x+1,y);
    dfs(x-1,y);
    dfs(x,y+1);
    dfs(x,y-1);

}

void pre(ll x,ll y,ll c)
{
    if(v1[x][y]==1 || x<0 || x==m || y<0 || y==n || a[x][y]=='#') return;

    v1[x][y]=1;

    xx[x][y]=c;

    pre(x+1,y,c);
    pre(x-1,y,c);
    pre(x,y+1,c);
    pre(x,y-1,c);

}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    test
    {

        cin>>m>>n>>q;
        for(i=0; i<m; i++)
        {
            for(j=0; j<n; j++)
            {
                cin>>a[i][j];
            }
        }

        memset(v,0,sizeof(v));
        memset(v1,0,sizeof(v1));

        for(i=0; i<m; i++)
        {
            for(j=0; j<n; j++)
            {
                ans=0;
                if(v[i][j]==0)
                {
                    dfs(i,j);
                    pre(i,j,ans);
                }
            }
        }

        cout<<"Case "<<cs<<":"<<endl;
        while(q--)
        {
            cin>>x>>y;
            x--,y--;
            cout<<xx[x][y]<<endl;

        }
    }


    return 0;
}
