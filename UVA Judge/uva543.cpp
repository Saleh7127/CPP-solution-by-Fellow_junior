#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define Faster  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define maX 1000002
bool pm[maX];
void sieve()
{
    pm[2]=false;
    for(ll i=4;i<=1000000;i+=2)
    {
        pm[i]=true;
    }
    for(ll i=3;i<=1000000;i+=2)
    {
        if(!pm[i])
        {
            for(ll j=i*i;j<=1000000;j+=i+i)
            {
                pm[j]=true;
            }
        }
    }
    pm[0]=pm[1]=true;
}
int main()
{
   Faster
   sieve();
   ll a;
   while(cin>>a && a)
   {
       for(ll i=2;i<=a;i++)
       {
           ll c=a-i;
           if(pm[i]==false && pm[c]==false)
           {
               printf("%lld = %lld + %lld\n",a,i,c);
               break;
           }
       }
   }
   return 0;
}
