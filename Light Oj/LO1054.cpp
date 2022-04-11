#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
#define maX 100000
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
    x=x*x%d;
    if(c%2==1)
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

    test
    {

        ll n,m,i,j,k,l,ans=1,c,a,b;

        cin>>n>>m;

        for(i=0; i<p.size() && p[i]*p[i]<=n; i++)
        {
            if(n%p[i]==0)
            {
                c=0;
                while(n%p[i]==0)
                {
                    c++;
                    n/=p[i];
                }

                a=((bigmod(p[i],c*m + 1LL ,mod)-1LL)+mod)%mod;

                b=bigmod(p[i]-1LL,mod-2LL,mod)%mod;

                ans=(ans%mod * a%mod * b%mod)%mod;
            }
        }

        if(n>1)
        {
            a=((bigmod(n,m+1LL,mod)-1LL)+mod)%mod;

            b=bigmod(n-1LL,mod-2LL,mod)%mod;

            ans=(ans%mod * a%mod * b%mod)%mod;
        }

        cout<<"Case "<<cs<<": "<<ans<<endl;
    }

    return 0;
}
/// sum of div -- (n^(r+1)-1)/(n-1) for every prime n with r frequency
