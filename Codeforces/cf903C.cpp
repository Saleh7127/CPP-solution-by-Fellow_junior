#include <bits/stdc++.h>
using namespace std;
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   int t,c[20000],d,e,i,j,k,l=0000;
   map<int,int>a;
   cin>>t;
   for(i=0;i<t;i++)
   {
       cin>>c[i];
       a[c[i]]++;
   }
   for(i=0;i<t;i++)
   {
       l=max(l,a[c[i]]);
   }
   cout<<l<<endl;
   return 0;
}
