#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
ll n,m;
char a[200][200];
ll v[200][200];
ll spce[200][200];
ll col[200];

bool check(ll i,ll j,ll num,char c)
{
    if(i<0 || j<0 || i>=n || j>=m ||  v[i][j]!=0 || a[i][j]!=c) return 0;
    return 1;
}

void dfs(ll i,ll j,ll num,char c)
{
    v[i][j]=num;

    if(check(i,j+1,num,c)) dfs(i,j+1,num,c);
    if(check(i,j-1,num,c)) dfs(i,j-1,num,c);
    if(check(i+1,j,num,c)) dfs(i+1,j,num,c);
    if(check(i-1,j,num,c)) dfs(i-1,j,num,c);
    if(check(i+1,j-1,num,c)) dfs(i+1,j-1,num,c);
    if(check(i-1,j-1,num,c)) dfs(i-1,j-1,num,c);
    if(check(i+1,j+1,num,c)) dfs(i+1,j+1,num,c);
    if(check(i-1,j+1,num,c)) dfs(i-1,j+1,num,c);
}


ll digcount(ll xx)
{
    ll r=1ll;
    xx/=10;
    while(xx)
    {
        r++;
        xx/=10;
    }
    return r;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string yy;

    while(1)
    {

        ll i,j,k,l,num=0;
        n=0;
        memset(v,0,sizeof v);

        while(getline(cin,yy))
        {
            if(yy[0]=='%') break;

            m=0;

            for(i=0; yy[i]; i++)
            {
                if(yy[i]!=' ')
                {
                    a[n][m++]=yy[i];
                }
            }
            n++;
        }

        for(i=0; i<n; i++)
        {
            for(j=0; j<m; j++)
            {
                if(v[i][j]==0)
                {
                    num++;
                    dfs(i,j,num,a[i][j]);
                }
            }
        }

        memset(spce,0,sizeof spce);
        memset(col,0,sizeof col);

        for(i=0; i<n; i++)
        {
            for(j=0; j<m; j++)
            {
                spce[i][j]=digcount(v[i][j]);
            }
        }


        for(j=0; j<m; j++)
        {
            col[j]=0;
            for(i=0; i<n; i++)
            {
                if(col[j]<spce[i][j])
                {
                    col[j]=spce[i][j];
                }
            }
        }


        for(i=0; i<n; i++)
        {
            for(j=0; j<m; j++)
            {
                if(j) cout<<" ";

                k=col[j]-spce[i][j];

                for(l=0; l<k; l++)
                {
                    cout<<" ";
                }

                cout<<v[i][j];
            }
            cout<<endl;
        }
        cout<<"%"<<endl;

        if(yy[0]!='%') break;

    }

    return 0;
}
