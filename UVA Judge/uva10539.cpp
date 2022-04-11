#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define maX 1000008
vector<ll>p;
bool marked[maX];
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
ll almostprime(ll a,ll c)
{

    ll ans=0,i,j;
    for(i=0; i<p.size(); i++)
    {
        if(p[i]*p[i]>c) break;
        for(j=p[i]*p[i]; j<=c; j*=p[i])
        {
            if(j>=a)
            {
                ans++;
            }
        }
    }
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    sieve();
    ll t,a,c,d,i,j,k,l;
    cin>>t;
    while(t--)
    {
        cin>>a>>c;
        cout<<almostprime(a,c)<<endl;
    }

    return 0;
}
