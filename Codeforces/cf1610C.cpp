/***
 created: 2021-11-25-00.45.44
***/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
#define get_lost_idiot return 0
#define nl '\n'

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   test
   {
        ll n,m,i,j,k,l,h,mid,ans=0;

        cin>>n;

        ll a[n+4],b[n+4];

        for(i=0;i<n;i++) cin>>a[i]>>b[i];

        l=1,h=n;

        while(l<=h)
        {
             mid=(l+h)/2;

             m=0;

             k=mid-1;
             j=0;

             for(i=0;i<n;i++)
             {
                  if(a[i]>=k && b[i]>=j)
                  {
                       k--;
                       j++;
                       m++;
                  }

                  if(m==mid) break;
             }

             if(m>=mid)
             {
                  ans=mid;
                  l=mid+1;
             }
             else h=mid-1;
        }

        cout<<ans<<nl;

   }



   get_lost_idiot;
}
