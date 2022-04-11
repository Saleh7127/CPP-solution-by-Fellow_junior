#include <bits/stdc++.h>
using namespace std;
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   int a[200005],c,d=1,e,f,i,j,k,l;
   cin>>c;
   for(i=0;i<c;i++)
   {
       cin>>a[i];
   }
   sort(a,a+c);

   for(i=0;i<c;i++)
   {
       if(a[i]>=d)
       {
           d++;
       }
   }
   cout<<d<<endl;
   return 0;
}
