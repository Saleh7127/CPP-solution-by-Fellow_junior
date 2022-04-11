#include <bits/stdc++.h>
using namespace std;
int main()
{

   int t,l,i,j,k;
   string a;
   cin>>t;
   for(l=1;l<=t;l++)
   {
       cin>>j>>a;
       k=0;
       for(i=0;i<j;i++)
       {
           if(a[i]=='.')
           {
               k++;
               i+=2;
           }
       }
       cout<<"Case "<<l<<": "<<k<<endl;
   }


   return 0;
}
