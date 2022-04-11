#include <bits/stdc++.h>
using namespace std;
#define maX 1000000
#define ll long long
bool marked[maX];
vector<ll>factor,prime;
void sieve()
{
    for(ll i=3;i*i<=maX;i+=2)
    {
        if(marked[i]==false)
        {
            for(ll j=i*i;j<=maX;j+=i+i)
            {
                marked[j]=true;
            }
        }
    }
    prime.push_back(2);
    for(ll i=3;i<=maX;i+=2)
    {
        if(marked[i]==false)
        {
            prime.push_back(i);
        }
    }
}

void primefactor(ll n)
{
    for(ll i=0;prime[i]*prime[i]<=n;i++)
    {
        if(n%prime[i]==0)
        {
            while(n%prime[i]==0)
            {
                n=n/prime[i];
                factor.push_back(prime[i]);
            }
        }
    }
    if(n>1)
    {
        factor.push_back(n);
    }

}

int main()
{
   sieve();
   ll a,c,d,i,j,k;
   while(cin>>a)
   {
       if(a==0) break;
       d=abs(a);
       printf("%lld = ",a);
       primefactor(d);
       if(a==1 || a==-1)
       {
            printf("%lld\n",a);
            continue;
       }
       if(a<0) printf("-1 x ");

       c=0;
       for(i=0;i<factor.size();i++)
       {
           if(c==0)
           {
               printf("%lld",factor[i]);
               c++;
           }
           else
           {
               printf(" x %lld",factor[i]);
           }
       }
       printf("\n");
       factor.clear();
   }

   return 0;
}
