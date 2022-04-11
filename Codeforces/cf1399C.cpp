#include <bits/stdc++.h>
using namespace std;
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   int t;
   cin>>t;
   while(t--)
   {
       int a[10000],c,d,e=0,f,i,j,k,l,sum;
       cin>>c;
       for(i=1;i<=c;i++)
       {
           cin>>a[i];
       }
       sort(a+1,a+c+1);
       for(sum=2;sum<=100;sum++)
       {
           f=0;
           for(i=1,j=c;i<j;)
           {
               if(a[i]+a[j]>sum) j--;
               else if(a[i]+a[j]<sum) i++;
               else
               {
                   f++;
                   i++;
                   j--;
               }
           }
           e=max(e,f);
       }
       cout<<e<<endl;
   }
   return 0;
}
