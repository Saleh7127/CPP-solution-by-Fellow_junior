#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
#define maX 2000008

bool marked[maX];
ll ans[maX];
ll phi[maX];

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

void phifunc()
{
    ll i,j;
    for(i=1;i<=maX;i++)
    {
        phi[i] = i;
    }

    for(i=2;i<=maX;i++)
    {
        if(marked[i] == 0)
        {
            for(j=i;j<=maX;j+=i)
            {
                phi[j] = phi[j]/i*(i-1);
            }
        }
    }
}

void sodf()
{
    ll i,j,k,n;
    ans[1]=0;
    for(i=2;i<=maX;i++)
    {
        n=i;
        j=0;
        while(n!=1)
        {
            n=phi[n];
            j++;
        }
        ans[i]=j;
    }
}

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   sieve();
   phifunc();
   sodf();


   ll a,b,c,i,j,k,l;
   test
   {
       cin>>a>>b;
       c=0;
       for(i=a;i<=b;i++)
       {
           c+=ans[i];
       }
       cout<<c<<endl;
   }


   return 0;
}
