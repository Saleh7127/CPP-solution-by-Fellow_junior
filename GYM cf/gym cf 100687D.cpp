#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


    ll n,m,i,j,k,l,x;

    cin>>n>>m>>k;

    if((n+m)>3*k) cout<<-1<<endl;
    else
    {
         ll lo=0,hi=m,ans=m;

         while(lo<=hi)
         {
              ll mid=(lo+hi)/2;
              ll left=n+m-mid;
              ll leftpc=(left+2)/3;

              if(mid+leftpc>k)
              {
                   hi=mid-1;
              }
              else
              {
                   ans=mid;
                   lo=mid+1;
              }
         }
         cout<<m-ans<<endl;
    }
    return 0;
}
