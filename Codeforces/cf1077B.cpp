#include <bits/stdc++.h>
using namespace std;
int main()
{
   int a[10000],b,c=0,d,e,i,j,k,l;
   cin>>b;
   for(i=0;i<b;i++)
   {
       cin>>a[i];
   }
   for(i=0;i<b;i++)
   {
       if(a[i-1]==1 && a[i]==0 && a[i+1]==1)
       {
           a[i+1]=0;
           c++;
       }
   }
   cout<<c<<endl;

   return 0;

}
