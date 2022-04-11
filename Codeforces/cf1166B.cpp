#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
#define maX 1000008
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

   ll a,i,j,k,l;
   char v[]={'a','e','i','o','u'};

   cin>>a;
   if(a<=24 || marked[a]==0) cout<<-1<<endl;
   else
   {
       for(i=5;i*i<=a;i++)
       {
           if(a%i==0)
           {
               l=a/i;

               for(j=0;j<i;j++)
               {
                   for(k=0;k<l;k++)
                   {
                       cout<<v[(j+k)%5];
                   }
               }
               cout<<endl;return 0;
           }
       }
       cout<<-1<<endl;
   }

   return 0;
}
