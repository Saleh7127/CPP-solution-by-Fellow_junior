#include <bits/stdc++.h>
using namespace std;
#define test int t; cin>>t; while (t--)
#define ll long long int
#define fellow_junior  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
   fellow_junior

   test
   {
       ll a[100000],c,d=0,e=0,f,i,j,k,l;
       cin>>c;
       for(i=0;i<c;i++)
       {
           cin>>a[i];
       }
       for(i=0;i<c;i++)
       {
           if(i%2==0)
           {
               if(a[i]>0) a[i]=-a[i];
           }
           else
           {
               if(a[i]<0) a[i]=-a[i];
           }
       }
       for(i=0;i<c;i++)
       {
           cout<<a[i]<<" ";
       }
       cout<<endl;
   }

   return 0;
}
