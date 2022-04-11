#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
char a[100][100];
bool v[100][100];
ll ans=1e9,z=0,n,m,c=-1,d=-1;
void dfs(ll x,ll y)
{
    if(v[x][y]) return ;

    if(v[x][y]==0 && a[x][y]!='#' && x>=0 && x<n && y>=0 && y<m)
    {
        v[x][y]=1;
        if(a[x][y]=='s') z++;
        if(a[x][y]=='x')
        {
            c=x;
            d=y;
            return;
        }
        dfs(x+1,y);
        dfs(x-1,y);
        dfs(x,y+1);
        dfs(x,y-1);
    }


}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll b,x,y,i,j,k,l;
    cin>>n>>m>>b;
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            cin>>a[i][j];
            if(a[i][j]=='@')
            {
                x=i;
                y=j;
            }
        }
    }

    dfs(x,y);

    if(z*2<=b && c!=-1 && d!=-1) cout<<"SUCCESS"<<endl;
    else cout<<"IMPOSSIBLE"<<endl;
    return 0;
}
