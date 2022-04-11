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
       char a[200][200];
       int n,m,c=0,d,e,f,i,j,k,l;
       cin>>n>>m;
       for(i=0;i<n;i++)
       {
           for(j=0;j<m;j++)
           {
               cin>>a[i][j];
           }
       }
       for(i=0;i<n;i++)
       {
           for(j=0;j<m;j++)
           {
               if(i==n-1)
               {
                   if(a[i][j]=='D')
                   {
                       c++;
                   }
               }
               if(j==m-1)
               {
                   if(a[i][j]=='R')
                   {
                       c++;
                   }
               }
           }
       }
       cout<<c<<endl;
   }


   return 0;
}
