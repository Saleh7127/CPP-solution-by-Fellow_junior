/***
 created: 2022-02-02-15.36.52
***/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
#define get_lost_idiot return 0
#define nl '\n'

ll parent[100005];
ll logg2[100005];
vector<vector<ll> >blift;
ll val[100005];
ll lg,n;

void logg()
{
    logg2[1]=0;

    for(ll i=2; i<=100005; i++)
    {
        logg2[i]=logg2[i/2]+1;
    }
}

void binarylifting()
{
    for(ll i=0; i<n; i++)
    {
        blift[i][0]= parent[i];
    }

    for(ll j=1; j<lg; j++)
    {
        for(ll i=0; i<n; i++)
        {
            if(blift[i][j-1]!=-1)
            {
                ll par=blift[i][j-1];

                blift[i][j]=blift[par][j-1];
            }
        }
    }
}

ll get_lca(ll node,ll v)
{
    for(ll j=lg-1; j>=0; j--)
    {
        if(blift[node][j]==-1 || val[blift[node][j]]<v)
        {
            continue;
        }
        node=blift[node][j];
    }
    return node;
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    test
    {
        ll q,m,i,j,k,l;

        cin>>n>>q;

        val[0]=1;

        for(i=1; i<n; i++)
        {
            cin>>m>>l;
            parent[i]=m;
            val[i]=l;
        }

        lg=0;

        while((1<<lg)<=n) lg++;

        blift = vector<vector<ll>>(n,vector<ll>(lg,-1));

        binarylifting();

        cout<<"Case "<<cs<<":"<<nl;

        while(q--)
        {
            cin>>j>>k;

            cout<<get_lca(j,k)<<nl;
        }
    }

    get_lost_idiot;
}


