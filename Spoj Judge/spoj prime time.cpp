#include <bits/stdc++.h>
using namespace std;
#define maX 100008
#define ll long long
vector<ll>p;
bool marked[maX];
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

   ll a,c,d=0,e,i,j=0,k;
   cin>>a;
   for(i=0;p[i]<=a;i++)
   {
       c=a;
       d=0;
       while(c/p[i])
       {
           d+=(c/p[i]);
           c/=p[i];
       }
       if(j==0)
       {
           cout<<p[i]<<"^"<<d;
       }
       else
       {
           cout<<" * "<<p[i]<<"^"<<d;
       }
       j++;

   }
   cout<<endl;

   return 0;
}
