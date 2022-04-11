#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
ll a[300005];
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   test
   {
       ll c,d,e,f,i,j,k=-1,l=0;

       cin>>c;
       for(i=1;i<=c;i++)
       {
           cin>>a[i];
           l=max(l,a[i]);
       }
       for(i=1;i<=c;i++)
       {
           if(a[i]==l && i==1)
           {
               if(a[i+1]<l)
               {
                   k=i;
               }
           }
           else if(a[i]==l && i==c)
           {
               if(a[i-1]<l)
               {
                   k=i;
               }
           }
           else if(a[i]==l && (a[i-1]<l || a[i+1]<l))
           {
               k=i;
               break;
           }
       }
       cout<<k<<endl;
   }


   return 0;
}
