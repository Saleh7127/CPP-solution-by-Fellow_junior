#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   test
   {

       ll n,m,i,j,k,l,r,ans;

       map<ll,ll>ls,rs;

       cin>>n>>l>>r;

       for(i=1;i<=n;i++)
       {
           cin>>m;
           if(i<=l) ls[m]+=1;
           else rs[m]+=1;
       }

       ans=n;

       for(i=1;i<=n;i++)
       {
           m=min(ls[i],rs[i]);

           ls[i]-=m;
           rs[i]-=m;
           ans-=(2*m);
           l-=m;
           r-=m;
       }

       k=abs(r-l)/2;

       j=0;

       if(l<r)
       {
           for(i=1;i<=n;i++)
           {
               j+=(rs[i]/2);
           }
       }
       else
       {
           for(i=1;i<=n;i++)
           {
               j+=(ls[i]/2);
           }
       }

       ans-=min(j,k);
       ans-=min(l,r);

       cout<<ans<<endl;
   }


   return 0;
}
