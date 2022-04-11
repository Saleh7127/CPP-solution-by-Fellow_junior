#include <bits/stdc++.h>
using namespace std;
#define test int t; cin>>t; while (t--)
#define ll long long int
#define pi acos(-1)
int main()
{
   ll a[100008],c,d=0,e=0,f,i,j,k,l;
   cin>>c;
   for(i=0;i<c;i++)
   {
       cin>>a[i];
   }
   sort(a,a+c);
   for(i=0;i<c;i++)
   {
       if(i<c/2)
       {
           d+=a[i];
       }
       else e+=a[i];
   }
   cout<<d*d+e*e<<endl;
   return 0;
}
