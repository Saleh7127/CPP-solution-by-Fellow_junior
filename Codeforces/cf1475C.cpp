#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)

ll ncr(ll n)
{
    return n*(n-1)/2;
}


int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   test
   {
       ll c,d,e,f,i,j,k,l;
       cin>>c>>d>>k;

       map<ll,ll>x,y;

       for(i=0;i<k;i++)
       {
           cin>>f;
           x[f]++;
       }
       for(i=0;i<k;i++)
       {
           cin>>f;
           y[f]++;
       }
       if(k==1)
       {
           cout<<0<<endl;
           continue;
       }

       l=ncr(k);
       for(auto z:x)
       {
           if(z.second>=2)
           {
               l-=ncr(z.second);
           }
       }
       for(auto z:y)
       {
           if(z.second>=2)
           {
               l-=ncr(z.second);
           }
       }

       cout<<l<<endl;

   }


   return 0;
}
