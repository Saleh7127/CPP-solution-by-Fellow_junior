#include <bits/stdc++.h>
using namespace std;
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);
   int t,l;
   cin>>t;
   for(l=1;l<=t;l++)
   {

       int a[2000],c[2000],d,e,f,i,j,k,as=0;
       cin>>d;
       for(i=0;i<d;i++)
       {
           cin>>a[i];
       }
       for(i=0;i<d;i++)
       {
           cin>>c[i];
       }
       sort(a,a+d);
       sort(c,c+d,greater<int>());
       for(i=0;i<d;i++)
       {
           if(a[i]>0)
           {
               for(j=0;j<d;j++)
               {
                   if(c[j]>0)
                   {
                       if(a[i]>c[j])
                       {
                           as+=2;
                           a[i]=c[j]=-1;
                           break;
                       }
                   }
               }
           }
       }
       for(i=0;i<d;i++)
       {
           if(a[i]>0)
           {
               for(j=0;j<d;j++)
               {
                   if(c[j]>0)
                   {
                       if(a[i]==c[j])
                       {
                           as+=1;
                           a[i]=c[j]=-1;
                           break;
                       }
                   }
               }
           }
       }
       cout<<"Case "<<l<<": "<<as<<endl;
   }
   return 0;
}
