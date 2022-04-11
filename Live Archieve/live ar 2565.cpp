#include <bits/stdc++.h>
using namespace std;
#define maX 1000008
#define ll long long
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

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   sieve();

   ll m,a,c;
   while(scanf("%lld %lld %lld",&m,&a,&c)==3)
   {
       if(m==0 && a==0 && c==0) break;

       ll i,j,k,l,ans,mxx=0;

       for(i=0;p[i]*p[i]<=m;i++)
       {
           for(j=0;p[j]*p[i]<=m;j++)
           {
               ll x=min(p[i],p[j]);
               ll y=max(p[i],p[j]);

               if(p[i]*p[j]<=m && ((double)x/y>=(a/(c*1.0))) && (double)x/y<=1)
               {
                   ans=p[i]*p[j];
                   if(ans>mxx)
                   {
                       mxx=ans;
                       k=p[i];
                       l=p[j];
                   }
               }
           }
       }
       printf("%lld %lld\n",k,l);
   }
   return 0;
}
