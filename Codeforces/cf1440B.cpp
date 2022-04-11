#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll xx[1000005];
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   int t;
   cin>>t;

   while(t--)
   {

       ll a,b,c,i,j,m,ans=0;

       cin>>a>>b;

       c=a*b;
       for(i=1;i<=c;i++)
       {
           cin>>xx[i];
       }

       m=a/2;
       j=0;
       for(i=c-m;i>=1;i-=(m+1))
       {
           ans+=xx[i];
           j++;
           if(j==b) break;

       }
       cout<<ans<<endl;
   }


   return 0;
}
