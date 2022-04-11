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
       int a[20000],c,d=0,e,f,i,k;
       cin>>c;
       for(i=0;i<c;i++)
       {
           cin>>a[i];
       }
       sort(a,a+c);
       for(i=0;i<c-1;i++)
       {
           if(a[i+1]-a[i]>1)
           {
               d=1;
           }
       }
       if(d) cout<<"NO"<<endl;
       else cout<<"YES"<<endl;
   }


   return 0;
}
