/***
 created: 2022-01-15-21.34.05
***/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
#define get_lost_idiot return 0
#define nl '\n'

vector<ll>g[200000];
map<pair<ll,ll>,ll>y;

vector<pair<ll,ll>>z;

bool v[200005];

void dfs(ll in,ll p,ll c)
{
    if(v[in]) return;

    v[in]=1;

    for(auto d:g[in])
    {
        if(v[d]==0)
        {
            y[{in,d}]=p;
            y[{d,in}]=p;

            swap(p,c);
            dfs(d,p,c);
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
        ll n,m,i,j,k,l=0;

        cin>>n;

        ll cnt[n+4]={0};

        for(i=0; i<n-1; i++)
        {
            cin>>j>>k;

            cnt[j]++;
            cnt[k]++;

            g[j].push_back(k);
            g[k].push_back(j);


            if(cnt[j]>2 || cnt[k]>2)
            {
                l=1;
            }

            z.push_back({j,k});
        }



        if(l) cout<<-1<<nl;
        else
        {
            for(i=1; i<=n; i++)
            {
                if(cnt[i]==1)
                {
                    l=i;
                }
            }

            dfs(l,2,3);

            for(i=0; i<z.size(); i++)
            {
                cout<<y[z[i]]<< " ";
            }
            cout<<nl;
        }

        for(i=0; i<n+5; i++)
        {
            g[i].clear();
            v[i]=0;
        }
        y.clear();
        z.clear();
    }

    get_lost_idiot;
}

