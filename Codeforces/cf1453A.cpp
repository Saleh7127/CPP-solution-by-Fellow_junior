#include <bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
       int x[500],y[500],i,j,ans=0;

       int a,b;
       cin>>a>>b;

       for(i=0;i<a;i++)
       {
           cin>>x[i];
       }


       for(j=0;j<b;j++)
       {
           cin>>y[j];
       }


       for(i=0;i<a;i++)
       {
           for(j=0;j<b;j++)
           {
               if(x[i]==y[j])
               {
                   ans++;
               }
           }
       }


       cout<<ans<<endl;
   }


   return 0;
}
