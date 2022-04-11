#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
#define maX 100008
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
}
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);
   sieve();

   ll a[505][505],c,d,e,f,i,j,k,l,r;
   cin>>r>>c;
   for(i=1;i<=r;i++)
   {
       for(j=1;j<=c;j++)
       {
           cin>>a[i][j];
       }
   }
   k=100000000000000;
   for(i=1;i<=r;i++)
   {
       l=0;
       for(j=1;j<=c;j++)
       {
           f=a[i][j];
           while(marked[f]==1)
           {
               l++,f++;
           }
       }
       k=min(k,l);
   }
   for(i=1;i<=c;i++)
   {
       l=0;
       for(j=1;j<=r;j++)
       {
           f=a[j][i];
           while(marked[f]==1)
           {
               l++,f++;
           }
       }
       k=min(k,l);
   }
   cout<<k<<endl;
   return 0;
}
