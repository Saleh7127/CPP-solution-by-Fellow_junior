#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define Faster  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define maX 10000009
bool mark[maX];
vector<ll> prime;
void sieve()
{
    mark[0]=1;
    mark[1]=1;
    prime.push_back(2);
    for(ll i=4;i<=maX;i+=2)
    {
        mark[i]=1;
    }
    for(ll i=3;i<=maX;i+=2)
    {
        if(mark[i]==0)
        {
            prime.push_back(i);
            for(ll j=i*i;j<=maX;j+=i+i)
            {
                mark[j]=1;
            }
        }
    }
}
int main()
{
   Faster
   sieve();
   ll t,n,i,j,k,l,cnt;
   cin>>t;
   for(k=1;k<=t;k++)
   {
       cin>>n;
       cnt=0;
       for(i=0;i<=n;i++)
       {
           j=prime[i];
           l=n-j;
           if(j>l) break;
           if(mark[l]==0) cnt++;
       }
       printf("Case %lld: %lld\n",k,cnt);
   }

   return 0;
}
