/***
 created: 2021-10-21-16.49.31
***/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
#define get_lost_idiot return 0

ll checkevn(ll n)
{
     ll ans=n;
     while(n)
     {
          ans*=10;
          ans+=(n%10);
          n/=10;
     }
     return ans;
}

ll checkodd(ll n)
{
     ll ans=n;
     n/=10;
     while(n)
     {
          ans*=10;
          ans+=(n%10);
          n/=10;
     }
     return ans;
}

ll bsearchodd(ll n)
{
     ll l=0,h=999999999,mid;
     ll ans=0;

     while(l<=h)
     {
          mid=(l+h)/2;
          if(checkodd(mid)<=n)
          {
               ans=mid;
               l=mid+1;
          }
          else
          {
              h=mid-1;
          }
     }
     return ans;
}

ll bsearchevn(ll n)
{
     ll l=0,h=999999999,mid;
     ll ans=0;

     while(l<=h)
     {
          mid=(l+h)/2;
          if(checkevn(mid)<=n)
          {
               ans=mid;
               l=mid+1;
          }
          else
          {
              h=mid-1;
          }
     }
     return ans;
}

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);


   test
   {
       ll n,m,i,j,ans;

       cin>>i>>j;

       if(i>j) swap(i,j);

       n=bsearchevn(i-1)+bsearchodd(i-1);
       m=bsearchevn(j)+bsearchodd(j);

       ans=m-n;

       if(i==0) ans++;

       cout<<"Case "<<cs<<": "<<ans<<endl;

   }


   get_lost_idiot;
}
