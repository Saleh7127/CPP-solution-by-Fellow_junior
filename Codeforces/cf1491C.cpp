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
       ll n,m=0,i,j=0,k,l=0;
       cin>>n;
       ll a[n+5];
       ll b[n+5];
       for(i=1;i<=n;i++)
       {
           cin>>a[i];
       }
       i=1;
       while(1)
       {

           if(a[1]!=1)
           {
               k++;
               a[1]-=1;
               if(a[1]==1) m++;
           }
           j=i+a[i];
           for(;j<n;)
           {

               if(a[j]>1)
               {
                   a[j]-=1;
                   k++;
                   m=1;
                   if(a[j]==1) m++;
               }
               j+=(a[j]);
           }
           if(m==n) break;
       }

        cout<<k<<endl;
   }


   return 0;
}
