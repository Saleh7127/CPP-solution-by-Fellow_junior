#include <bits/stdc++.h>
using namespace std;
#define maX 10008
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
   ll a,c,d,e,f,i,j,k,l;
   while(cin>>a &&a)
   {

       l=0;
       for(i=0;p[i]<=a;i++)
       {
           k=0;
           for(j=i;p[j]<=a;j++)
           {
               if(k+p[j]<=a)
               {
                   k+=p[j];
                   if(k==a)
                   {
                       l++;
                   }
               }
               else break;
           }
       }
       cout<<l<<endl;
   }
   return 0;
}
