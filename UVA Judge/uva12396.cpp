#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
#define maX 10000002
vector<ll>p;
ll mod=1e9+7;
bool marked[maX+2];
void sieve()
{
    marked[0]=1;
    marked[1]=1;
    for(ll i=4; i<=maX; i+=2)
    {
        marked[i]=1;
    }
    p.push_back(2);
    for(ll i=3; i<=maX; i+=2)
    {
        if(marked[i]==0)
        {
            p.push_back(i);
            for(ll j=i*i; j<=maX; j+=i+i)
            {
                marked[j]=1;
            }
        }
    }
}

ll bigmod(ll a,ll c,ll d)
{
    if(c==0) return 1LL;
    ll x=bigmod(a,c/2,d);
    x=(x*x)%d;
    if(c%2==1LL)
    {
        x=(x*a)%d;
    }
    return x;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    sieve();

    ll n;

    while(cin>>n)
    {
        if(n==0) break;

        ll i,j,k,c,ans=1;

        for(i=0; i<p.size() && p[i]<=n/2; i++)
        {
            c=0;
            k=p[i];
            while(k<=n)
            {
                c+=(n/k);
                k*=p[i];
            }
            if(c<=1) break;

            if(c%2) c--;

            ans*=bigmod(p[i],c,mod);

            ans%=mod;
        }
        cout<<ans<<endl;
    }

    return 0;
}
