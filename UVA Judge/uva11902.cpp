#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)

vector<ll>g[2000];
bool v[2000],u[2000];
ll a[200][200];
ll cc;

void dfs(ll in)
{
    u[in]=1;
    for(auto dd:g[in])
    {
        if(u[dd]==0)
        {
            dfs(dd);
        }
    }
}

void dfs1(ll in)
{
    if(in==cc) return;

    v[in]=1;

    for(auto dd:g[in])
    {
        if(v[dd]==0)
        {
            dfs1(dd);
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

        ll n,m,i,j,k,l;

        cin>>n;

        for(i=0; i<n+5; i++)
        {
            g[i].clear();
        }

        cout<<"Case "<<cs<<":"<<endl;

        for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
            {
                cin>>k;
                if(k) g[i].push_back(j);
            }
        }

        memset(u,0,sizeof u);
        memset(a,0,sizeof a);

        dfs(0);


        for(i=0; i<n; i++)
        {
            cc=i;
            memset(v,0,sizeof v);
            dfs1(0);

            for(j=0; j<n; j++)
            {
                if(u[j] && v[j]==0)
                {
                    a[i][j]=1;
                }
            }
        }

        cout<<"+";
        for(k=0; k<(2*n-1); k++) cout<<"-";
        cout<<"+"<<endl;

        for(i=0; i<n; i++)
        {
            cout<<"|";

            for(j=0; j<n; j++)
            {
                if(a[i][j]==1) cout<<"Y|";
                else cout<<"N|";
            }
            cout<<endl;

            cout<<"+";
            for(k=0; k<(2*n-1); k++) cout<<"-";
            cout<<"+"<<endl;
        }
    }

    return 0;
}
