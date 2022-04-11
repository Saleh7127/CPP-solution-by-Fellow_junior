#include <bits/stdc++.h>
using namespace std;
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   int a[200000],c,d=0,e=0,f,i,j,k,l;
   cin>>c>>k;
   a[0]=1;
   for(i=1;i<=c;i++)
   {
       cin>>a[i];
   }
   sort(a,a+c+1);
   if(a[k+1]!=a[k])
   {
      cout<<a[k]<<endl;
   }
   else cout<<-1<<endl;
   return 0;
}
