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
       long long a[200000],c,d,e,f,i,j,k,l;
       cin>>c;
       for(i=1;i<=c;i++)
       {
           cin>>a[i];
       }
       if(a[1]+a[2]<=a[c])
       {
           cout<<"1 2 "<<c<<endl;
       }
       else cout<<-1<<endl;

   }


   return 0;
}
