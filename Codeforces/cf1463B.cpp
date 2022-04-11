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

       ll a[1000],b,c=0,d=0,e=0,f,i,j,k,l;
       cin>>b;
       for(i=1;i<=b;i++)
       {
           cin>>a[i];
           if(i%2) c+=a[i];
           else d+=a[i];
           e+=a[i];
       }
       f=(b+1)/2;
       if(2*(c-f)<=e)
       {
           for(i=1;i<=b;i++)
           {
               if(i%2) cout<<1<<" ";
               else cout<<a[i]<<" ";
           }
       }
       else
       {
           for(i=1;i<=b;i++)
           {
               if(i%2==0) cout<<1<<" ";
               else cout<<a[i]<<" ";
           }
       }
       cout<<endl;
   }


   return 0;
}
