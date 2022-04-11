#include <bits/stdc++.h>
using namespace std;
#define test int t; cin>>t; while (t--)
#define ll long long int
#define fellow_junior  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define maX 1000008
vector<ll>p;
ll a[maX];
bool marked[maX];
void sieve()
{
    marked[0]=1;
    marked[1]=1;
    for(ll i=4;i<=maX;i+=2)
    {
        marked[i]=1;
    }
    for(ll i=3;i<=maX;i+=2)
    {
        if(marked[i]==0)
        {
            for(ll j=i*i; j<=maX; j+=i+i)
            {
               marked[j]=1;
            }
        }
    }
    p.push_back(2);
    for(ll i=3;i<=maX;i+=2)
    {
        if(marked[i]==0)
        {
           p.push_back(i);
        }
    }
}
void fact()
{
    ll i,j,k,l,c,d,e,f;
    for(i=2;i<maX;i++)
    {
        d=i;
        c=0;
        for(j=0;p[j]*p[j]<=i;j++)
        {
            if(d==1) break;
            if(marked[d]==0) break;
            while(d%p[j]==0)
            {
                c++;
                d/=p[j];
            }
        }
        if(d==1) a[i]=c;
        else a[i]=c+1;
    }
    for(i=3;i<maX;i++)
    {
        a[i]=a[i]+a[i-1];
    }
}
int main()
{
    sieve();
    fact();
    ll na;
    while(cin>>na)
    {
        cout<<a[na]<<endl;
    }
}
