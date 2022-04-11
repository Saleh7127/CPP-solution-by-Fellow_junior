#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
ll a[12][12];
ll ans=0;

bool valid(ll x,ll y)
{
    if(x<0 || x>10) return 0;
    if(y<0 || y>10) return 0;
    if(a[x][y]==0) return 1;
    return 0;
}
void lll()
{
    ll ss=0;
    for(ll i=0; i<11; i++)
    {
        for(ll j=0; j<11; j++)
        {
            if(a[i][j]==1) ss++;
        }
    }
    ans=max(ans,ss);
}
void dfs(ll r, ll c)
{

    lll();

    if(valid(r-2,c-1))
    {
        a[r-2][c-1]=1;
        dfs(r-2,c-1);
        a[r-2][c-1]=0;
    }
    if(valid(r-2,c+1))
    {
        a[r-2][c+1]=1;
        dfs(r-2,c+1);
        a[r-2][c+1]=0;
    }
    if(valid(r-1,c-2))
    {
        a[r-1][c-2]=1;
        dfs(r-1,c-2);
        a[r-1][c-2]=0;
    }
    if(valid(r-1,c+2))
    {
        a[r-1][c+2]=1;
        dfs(r-1,c+2);
        a[r-1][c+2]=0;
    }
    if(valid(r+1,c-2))
    {
        a[r+1][c-2]=1;
        dfs(r+1,c-2);
        a[r+1][c-2]=0;
    }
    if(valid(r+1,c+2))
    {
        a[r+1][c+2]=1;
        dfs(r+1,c+2);
        a[r+1][c+2]=0;
    }
    if(valid(r+2,c-1))
    {
        a[r+2][c-1]=1;
        dfs(r+2,c-1);
        a[r+2][c-1]=0;
    }
    if(valid(r+2,c+1))
    {
        a[r+2][c+1]=1;
        dfs(r+2,c+1);
        a[r+2][c+1]=0;
    }

}



int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll p,i,j,k,l=1;
    while(cin>>p && p)
    {
        for(i=0; i<11; i++)
        {
            for(j=0; j<11; j++)
            {
                a[i][j]=-1;
            }
        }

        ll g=0,h;
        for(k=0; k<p; k++)
        {
            ll x,y;
            cin>>x>>y;
            if(k==0) h=x;
            for(i=x; i<(x+y); i++)
            {
                a[k][i]=0;
                g++;
            }
        }

        a[0][h]=1;
        dfs(0,h);


        j=(g-ans);

        if(j==1) cout<<"Case "<<l++<<", 1 square can not be reached."<<endl;
        else cout<<"Case "<<l++<<", "<<j<<" squares can not be reached."<<endl;

        j=g=ans=0;
    }


    return 0;
}
