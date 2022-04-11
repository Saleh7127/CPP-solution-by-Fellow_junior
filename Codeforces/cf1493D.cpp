#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
#define maX 200005
ll ans=1,mod=1e9+7;
ll marked[maX+100];

multiset<ll> divv[200005];
map<ll,ll> pf[200005];

ll n;

void sieve()
{
    marked[0]=1;
    marked[1]=1;

    for(ll i=2; i<=maX; i+=2)
    {
        marked[i]=2;
    }

    for(ll i=3; i<=maX; i+=2)
    {
        if(marked[i]==0)
        {
            marked[i]=i;
            for(ll j=i*i; j<=maX; j+=i+i)
            {
                if(marked[j]==0) marked[j]=i;
            }
        }
    }
}


void update(ll i,ll x)
{
    while(x!=1)
    {
        ll p=marked[x];
        ll c=0,l,lmin=0;

        while(marked[x]==p)
        {
            c++;
            x/=marked[x];
        }

        l=pf[i][p];
        pf[i][p]+=c;

        if(divv[p].size()==n)
        {
            lmin=(*divv[p].begin());
        }

        if(l!=0)
        {
            divv[p].erase(divv[p].find(l));
        }

        divv[p].insert(l+c);

        if(divv[p].size()==n)
        {
            for(lmin=lmin+1; lmin<=(*divv[p].begin()); lmin++)
            {
                ans=ans*p;
                ans%=mod;
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    sieve();


    ll m,q,i;

    cin>>n>>q;

    for(i=1; i<=n; i++)
    {
        cin>>m;
        update(i,m);
    }

    while(q--)
    {
        cin>>i>>m;
        update(i,m);
        cout<<ans<<endl;
    }

    return 0;
}
