#include <bits/stdc++.h>
using namespace std;
#define test int t; cin>>t; while (t--)
#define ll long long int
#define fellow_junior  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
   fellow_junior
   test
   {
       ll a[200000],n,x,c,lo=0,hi=1e9+1,ans=1,mid,i,j;
       cin>>n>>x;
       for(i=0;i<n;i++)
       {
           cin>>a[i];
       }
       sort(a,a+n);
       while(lo<=hi)
       {
           mid=(lo+hi)/2;
           c=1;
           j=0;
           for(i=1;i<n;i++)
           {
               if(a[i]-a[j]>=mid)
               {
                   c++;
                   j=i;
               }
           }
           if(c>=x)
           {
              ans=mid;
              lo=mid+1;
           }
           else hi=mid-1;
       }
       cout<<ans<<endl;
   }


   return 0;
}
