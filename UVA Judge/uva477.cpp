#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   double rx[100],rx1[100],ry[100],ry1[100];
   double x,y,m,ans;
   char a,z[100];
   ll i,j=0,k=0,l,b=0,c=1,d,e=0;
   while(cin>>a && a!='*')
   {
       z[b]=a;
       if(a=='r')
       {
           cin>>rx[b]>>ry[b]>>rx1[b]>>ry1[b];
       }
       else
       {
           cin>>rx[b]>>ry[b]>>rx1[b];
       }
       b++;
   }
   while(cin>>x>>y)
   {
       if(x==9999.9 && y==9999.9) return 0;
       e=0;
       for(ll i=0;i<b;i++)
       {
           if(z[i]=='r')
           {
               if(x>rx[i] && x<rx1[i] && y>ry[i] && y<ry1[i])
               {
                   printf("Point %lld is contained in figure %lld\n",c,i+1);
                   e=1;
               }
           }
           else
           {
               ans=sqrt((x-rx[i])*(x-rx[i])+(y-ry[i])*(y-ry[i]));
               if(rx1[i]>ans)
               {
                   printf("Point %lld is contained in figure %lld\n",c,i+1);
                   e=1;
               }
           }
       }
       if(e==0) printf("Point %lld is not contained in any figure",c);
       c++;
   }

   return 0;
}
