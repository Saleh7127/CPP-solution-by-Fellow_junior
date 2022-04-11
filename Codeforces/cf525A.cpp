#include <bits/stdc++.h>
using namespace std;
#define test int t; cin>>t; while (t--)
#define ll long long int
int main()
{
   ll  a[100]={0},c,d=0,e,f,i,j,k,l;
   cin>>c;
   char x,y;
   for(i=0;i<c-1;i++)
   {
       cin>>x>>y;
       a[x-97]++;
       if(a[y-65]==0)
       {
           d++;
       }
       else a[y-65]--;
   }
   cout<<d<<endl;

   return 0;
}
