#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; while(t--)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   test
   {
       ll a[100000],c,d,e,f,i,j,k=0;
       cin>>c;
       for(i=0;i<c;i++)
       {
           cin>>a[i];
       }

       for(i=0;i<c;i++)
       {
           for(j=0;j<c;j++)
           {
               if(__gcd(a[i],a[j])==1)
               {
                   swap(a[i],a[j]);
               }
           }
       }
       for(i=c-1;i>=0;i--)
       {
           cout<<a[i]<< " ";
       }
       cout<<endl;
   }


   return 0;
}
