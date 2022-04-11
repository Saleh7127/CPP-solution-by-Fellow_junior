#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   test
   {

       ll a[500][500],n,m,c,d,e,f,i,j,k,l;

       cin>>n>>m;
       for(i=1;i<=n;i++)
       {
           for(j=1;j<=m;j++)
           {
               cin>>a[i][j];
           }
       }
       for(i=1;i<=n;i++)
       {
           for(j=1;j<=m;j++)
           {
               if(a[i][j]%2!=(i+j)%2)
               {
                   a[i][j]++;
               }
           }
       }

       for(i=1;i<=n;i++)
       {
           for(j=1;j<=m;j++)
           {
               cout<<a[i][j]<<" ";
           }
           cout<<endl;
       }
   }


   return 0;
}
