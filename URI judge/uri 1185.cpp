#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; while(t--)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   double a[100][100],f=0.0;
   ll c,d,e,i,j,k=10,l=0;
   char x;
   cin>>x;
   for(i=0;i<=11;i++)
   {
       for(j=0;j<=11;j++)
       {
           cin>>a[i][j];
       }
   }
   for(i=0;i<=10;i++)
   {
       for(j=0;j<=k;j++)
       {
           f+=a[i][j];
       }
       k--;
   }
   if(x=='S') printf("%.1lf\n",f);
   else printf("%.1lf\n",f/66.0);

   return 0;
}

