#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define maX 1000008
vector<ll>p;
ll M[maX],mu[maX];
bool marked[maX];
void sieve()
{

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
ll nmoffact(ll x)
{
    ll i,cnt=0,ans=0;
    for(i=0;i<p.size() && p[i]*p[i]<=x;i++)
    {
        cnt=0;
        while(x%p[i]==0)
        {
            cnt++;
            x/=p[i];
        }
        if(cnt>1) return 0;
        ans+=cnt;
    }
    if(x>1) ans++;
    if(ans%2==0) return 1;
    else return -1;
}
int main()
{
    sieve();
    ll a,i;
    mu[1]=1;
    M[1]=1;
    for(i=2;i<=maX-4;i++)
    {
        mu[i]=nmoffact(i);
        M[i]=M[i-1]+mu[i];
    }
    while(scanf("%lld",&a))
    {
        if(a==0) break;
        printf("%8lld%8lld%8lld\n",a,mu[a],M[a]);
    }
    return 0;
}
