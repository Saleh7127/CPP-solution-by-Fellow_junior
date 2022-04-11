#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)

bool check(ll x,ll y,ll a,ll b,ll s)
{
     ll l=0,h=s,p,q,c1,c2;
     while(l<=h)
     {
          ll m=(l+h)>>1;

          p=m;
          q=s-p;

          c1=p*a+q*b;
          c2=q*a+p*b;

          if(c1<=x && c2<=y)
          {
               return 1;
          }
          if(c1>x)
          {
               if(a>b)
               {
                    h=m-1;
               }
               else l=m+1;
          }

          else
          {
               if(b>=a)
               {
                    h=m-1;
               }
               else l=m+1;
          }
     }
     return 0;
}


int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);


   test
   {

        ll n,m,i,j,k=0,l,h,x,y,a,b;

        cin>>x>>y>>a>>b;

        l=0,h=1e9;

        while(l<=h)
        {
             m=(l+h)>>1;
             if(check(x,y,a,b,m))
             {
                  k=m;
                  l=m+1;
             }
             else h=m-1;
        }
        cout<<k<<endl;
   }

   return 0;
}
