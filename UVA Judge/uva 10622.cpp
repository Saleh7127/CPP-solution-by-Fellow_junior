#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)

ll power(ll j,ll x)
{
    ll r=j,i;
    for(i=2;i<=x;i++)
    {
        r*=j;
    }
    return r;
}

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   ll a,c,d,e,f,i,j,k,l;

   while(cin>>a &&a)
   {
       l=0;
       if(a<0)
       {
           c=sqrt(a*-1);
           for(i=-2;i>=-c;i--)
           {
               d=i;
               e=2;
               while(d>a)
               {
                   d=power(i,e);
                   e++;
               }
               if(d==a)
               {
                   cout<<e-1<<endl;
                   l=1;
                   break;
               }
           }
           if(!l) cout<<1<<endl;
       }
       else
       {
           c=sqrt(a);
           for(i=2;i<=c;i++)
           {
               d=i;
               e=2;
               while(d<a)
               {
                   d=power(i,e);
                   e++;
               }
               if(d==a)
               {
                   cout<<e-1<<endl;
                   l=1;
                   break;
               }
           }
           if(!l) cout<<1<<endl;
       }
   }


   return 0;
}
