/***
 created: 2021-11-08-18.37.18
***/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
#define get_lost_idiot return 0
#define nl '\n'
ll dp[20005];
ll seq[20005];
vector<ll>ans;

struct bal
{
    ll id;
    ll w;
    ll s;

    bool operator<(const bal & x)const
    {
        if(w!=x.w) return w<x.w;
        return s>=x.s;
    }


} node[20005];

void output(ll k)
{
     if(seq[k]!=k) output(seq[k]);

     cout<<node[k].id<<nl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


    ll n=0,m,i,j,k=0,l=0;

    while(scanf("%lld %lld",&i,&j)!=EOF)
    {
        n++;
        node[n].w=i;
        node[n].s=j;
        node[n].id=n;
    }

    sort(node+1,node+n+1);

    for(i=1; i<=n; i++)
    {
        dp[i]=1;
        seq[i]=i;

        for(j=1; j<i; j++)
        {
            if(node[i].w>node[j].w && node[i].s<node[j].s)
            {
                if(dp[j]+1>dp[i])
                {
                    dp[i]=dp[j]+1;
                    seq[i]=j;
                }
            }
        }
        if(dp[i]>l)
        {
            l=dp[i];
            k=i;
        }
    }


    cout<<l<<nl;

    output(k);


    get_lost_idiot;
}

