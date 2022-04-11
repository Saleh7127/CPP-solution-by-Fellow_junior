#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; while(t--)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   test
   {

       ll a,c,x,y,n,i,j,k,l,d,e,ans=999999999999999999;
       cin>>a>>c>>x>>y>>n;
       i=a-x;
       j=c-y;
       if(i+j<=n)
       {
           l=(a-i)*(c-j);
           cout<<l<<endl;
           continue;
       }
       if(i<=n && (c-(n-i))>=y)
       {
           l=(a-i)*(c-(n-i));
           ans=min(ans,l);
       }
       if(j<=n && (a-(n-j))>=x)
       {
           l=(c-j)*(a-(n-j));
           ans=min(ans,l);
       }
       if(a-n>=x)
       {
           l=(a-n)*c;
           ans=min(ans,l);
       }
       if(c-n>=y)
       {
           l=(c-n)*a;
           ans=min(ans,l);
       }
       cout<<ans<<endl;
   }


   return 0;
}
