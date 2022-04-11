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

       ll a[200000],c,d=0,e,f,i,j,k,l;
       cin>>c;
       for(i=0;i<c;i++)
       {
           cin>>a[i];
       }
       for(i=0;i<c-1;i++)
       {
           for(j=i+1;j<c;j++)
           {
               if((a[i]^a[j])>max(a[i],a[j]))
               {
                   d++;
               }
           }
       }
       cout<<d<<endl;
   }


   return 0;
}
