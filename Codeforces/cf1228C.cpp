#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
#define maX 1000008
vector<ll>p;
ll m=1e9+7;
bool marked[maX+2];
void sieve()
{
    marked[0]=1;
    marked[1]=1;
    for(ll i=4;i<=maX;i+=2)
    {
        marked[i]=1;
    }
    p.push_back(2);
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
    for(ll i=3;i<=maX;i+=2)
    {
        if(marked[i]==0)
        {
            p.push_back(i);
        }
    }
}

ll mod(ll a,ll c,ll d)
{
    if(c==0) return 1;
    ll x=mod(a,c/2,d);
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
   cin.tie(0);cout.tie(0);


   sieve();

   ll x,n,i,j,k,l;

   cin>>x>>n;

   vector<ll>div;

   for(i=0;p[i]*p[i]<=x;i++)
   {
       if(x%p[i]==0)
       {
           while(x%p[i]==0)
           {
               x/=p[i];
           }
           div.push_back(p[i]);
       }
   }


   if(x>1) div.push_back(x);

   ll ans=1;

   for(auto xx:div)
   {
       j=0;
       k=n;
       while(k>0)
       {
           k/=xx;
           j+=k;
       }
       ans*=mod(xx,j,m);
       ans%=m;
   }
   cout<<ans<<endl;

   return 0;
}
