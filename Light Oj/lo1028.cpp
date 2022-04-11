#include <bits/stdc++.h>
using namespace std;
#define test int t; cin>>t; while (t--)
#define ll long long int
#define fellow_junior  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define maX 1000008
bool marked[maX];
vector<ll>p;
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
            p.push_back(i);
            for(ll j=i*i; j<=maX; j+=i+i)
            {
               marked[j]=1;
            }
        }
    }
}
ll fact(ll x)
{
    ll i,cnt=0,ans=1;
    for(i=0;i<p.size() && p[i]*p[i]<=x;i++)
    {
        cnt=0;
        if(x%p[i]==0)
        {
            while(x%p[i]==0)
            {
                cnt++;
                x/=p[i];
                if(x==0 || x==1)
                {
                    break;
                }
            }
            ans*=(cnt+1);

        }
    }
    if(x>1)
    {
        ans*=2;
    }
    return ans;
}
int main()
{
   fellow_junior
   sieve();
   ll t,a,c,d,i,j,k,l;
   cin>>t;
   for(i=1;i<=t;i++)
   {
       cin>>a;
       printf("Case %lld: %lld\n",i,fact(a)-1);
   }
   return 0;
}
