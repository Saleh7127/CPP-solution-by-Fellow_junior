#include <bits/stdc++.h>
using namespace std;
#define maX 1000008
#define ll long long
bool marked[maX];
vector<ll>zz;
void sieve()
{
    marked[0]=1;
    marked[1]=1;
    for(ll i=4;i<=maX;i+=2)
    {
        marked[i]=1;
    }
    zz.push_back(2);
    for(ll i=3;i<=maX;i+=2)
    {
        if(marked[i]==0)
        {
            zz.push_back(i);
            for(ll j=i*i; j<=maX; j+=i+i)
            {
               marked[j]=1;
            }
        }
    }
}
bool check(ll x)
{
    if(x<=1000005)
    {
        if(marked[x]==0)
        {
            return 0;
        }
        else return 1;
    }
    else
    {
        for(ll i=0;i<zz.size() && zz[i]*zz[i]<=x;i++)
        {
            if(x%zz[i]==0)
            {
                return 1;
            }
        }
        return 0;
    }
}
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   sieve();

   ll a,c,d,e,f,i,j,k,p1,p2,p3,p4,x,y;

   while(cin>>a>>c)
   {
       d=1000000000;
       e=-100000;
       f=0;
       j=0;
       for(i=a;i<=c;i++)
       {
           if(check(i)==0)
           {
               if(f==0)
               {
                   x=i;
                   f=1;
               }
               else
               {
                   y=i;
                   k=y-x;
                   if(k<d)
                   {
                       d=k;
                       p1=x;
                       p2=y;
                       j++;
                   }
                   if(k>e)
                   {
                       e=k;
                       p3=x;
                       p4=y;
                       j++;
                   }
                   x=y;
               }
           }
       }
       if(j==0) cout<<"There are no adjacent primes."<<endl;
       else cout<<p1<<","<<p2<<" are closest, "<<p3<<","<<p4<<" are most distant."<<endl;
   }
   return 0;
}
