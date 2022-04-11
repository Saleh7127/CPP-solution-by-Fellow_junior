#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int shit=1;shit<=t;shit++)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   test
   {
       ll a[200005],k,n,c,i,j,l,ans=0,prev=0;
       cin>>k>>c>>n>>a[0];
       for(i=1;i<=n-1;i++)
       {
           a[i]=(k*a[i-1]+c)%1000007;
       }
       sort(a,a+n);
       for(i=1;i<=n-1;i++)
       {
           prev+=a[i-1];
           ans+=(a[i]*i)-prev;
       }

       /*
       for(i=1;i<=n-1;i++)
       {
           ans+=(a[i]-a[i-1])*(i*(n-i));
       }
       */
       cout<<"Case "<<shit<<": "<<ans<<endl;
   }

   return 0;
}
