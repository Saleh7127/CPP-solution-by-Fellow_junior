#include <bits/stdc++.h>
using namespace std;
int main()
{

   int t,l;
   cin>>t;
   for(l=1;l<=t;l++)
   {
       int a[200005]={0},n,c,i,j=0,k;
       cin>>n;
       for(i=0;i<n;i++)
       {
           cin>>c;
           if(c>=0 && c<n)
           {
               a[c]++;
           }
       }
       cout<<"Case "<<l<<": ";
       for(i=0;i<n;i++)
       {
           if(a[i]>0)
           {
               a[i]--;
               j++;
           }
           else if(a[n-i-1]>0)
           {
               a[n-i-1]--;
               j++;
           }
       }
       if(j==n) cout<<"yes"<<endl;
       else cout<<"no"<<endl;
   }
   return 0;
}
