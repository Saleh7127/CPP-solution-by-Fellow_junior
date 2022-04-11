#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define maX 1000008
vector<ll>p,ans;
bool marked[maX];
void sieve()
{
    marked[0]=1;
    marked[1]=1;
    p.push_back(2);
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
    for(ll i=3;i<=maX;i+=2)
    {
        if(marked[i]==0)
        {
            p.push_back(i);
        }
    }
}
int main()
{

   sieve();
   ll a,c,d=0;
   while(scanf("%lld%lld",&a,&c) && (a+c)>0)
   {
       if(a>c) swap(a,c);

       for(ll i=0; ; )
       {
           ans.clear();
           if(p[i]>c) break;
           ll df=p[i+1]-p[i],cnt=0,id=i+1;

           ans.push_back(p[i]);
           ans.push_back(p[i+1]);

           while(p[id+1]-p[id]==df)
           {
               ans.push_back(p[id+1]);
               id++,cnt++;
           }
           if(cnt==0)
           {
               i++;
               continue;
           }
           i=id;
           ll x=ans.size();
           if(ans[0]<a || ans[x-1]>c)
           {
               continue;
           }
           printf("%lld",ans[0]);
           for(ll k=1;k<ans.size();k++)
           {
               printf(" %lld",ans[k]);
           }
           printf("\n");
       }


   }


   return 0;
}
