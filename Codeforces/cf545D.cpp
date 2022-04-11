#include <bits/stdc++.h>
using namespace std;
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   long long a[200000],c,d=0,e=0,f,i,j,k,l;
   cin>>c;
   for(i=0;i<c;i++)
   {
       cin>>a[i];
   }
   sort(a,a+c);
   for(i=0;i<c;i++)
   {
       if(d<=a[i])
       {
           e++;
           d+=a[i];
       }
   }
   cout<<e<<endl;
   return 0;
}
