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
       ll a[100000],c,d,e,f,i,j=0,k,l;
       cin>>c;
       e=4*c;
       for(i=0;i<e;i++)
       {
           cin>>a[i];
       }
       sort(a,a+e);
       d=a[0]*a[e-1];
       for(i=0;i<e;i+=2)
       {
           f=a[i]*a[e-1-i];
           if(f!=d || a[i]!=a[i+1])
           {
               cout<<"NO"<<endl;
               j=1;
               break;
           }
       }
       if(j==0) cout<<"YES"<<endl;
   }

   return 0;
}
