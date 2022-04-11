#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; while(t--)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   double a[100][100],f=0;
   ll c,d,e,i,j,k,l;
   char x;
   cin>>x;
   for(i=0;i<12;i++)
   {
       for(j=0;j<12;j++)
       {
           cin>>a[i][j];
       }
   }
   for(i=0;i<=4;i++)
   {
       c=i+1;
       d=11-i-1;
       for(j=c;j<=d;j++)
       {
           f+=a[i][j];
       }
   }
   if(x=='S') printf("%.1lf\n",f);
   else printf("%.1lf\n",f/30.0);

   return 0;
}
