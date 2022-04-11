#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
#define maX 1000008
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

   test
   {
       ll a,b,c,i,j,k,l=1;

       cin>>a>>b;

       k=a;

       if(b*b>=a) l=0;

       else
       {
           for(i=0;p[i]*p[i]<=a && i<p.size();i++)
           {
               c=0;
               while(a%p[i]==0)
               {
                   c++;
                   a/=p[i];
               }
               l*=(c+1);
           }

           if(a>1) l*=2;

           l/=2;

           for(i=1;i<b;i++)
           {
               if(k%i==0) l--;
           }

       }

       cout<<"Case "<<cs<<": "<<l<<endl;
   }

   return 0;
}
