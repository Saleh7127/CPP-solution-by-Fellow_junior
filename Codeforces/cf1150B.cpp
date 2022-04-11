#include <bits/stdc++.h>
using namespace std;
#define test int t; cin>>t; while (t--)
#define ll long long int
#define pi acos(-1)
int main()
{
   char a[100][100];
   ll i,j,k,l;
   cin>>l;
   for(i=1;i<=l;i++)
   {
       for(j=1;j<=l;j++)
       {
           cin>>a[i][j];
       }
   }
   for(i=1;i<=l;i++)
   {
       for(j=1;j<=l;j++)
       {
           if(a[i][j]=='.' && a[i+1][j]=='.' && a[i][j+1]=='.' && a[i][j-1]=='.' && a[i-1][j]=='.')
           {
               a[i][j]='#' , a[i+1][j]='#',a[i][j+1]='#',a[i][j-1]='#', a[i-1][j]='#';
           }
       }
   }
   for(i=1;i<=l;i++)
   {
       for(j=1;j<=l;j++)
       {
           if(a[i][j]=='.')
           {
               printf("NO\n");
               return 0;
           }
       }
   }
   printf("YES\n");

   return 0;
}
