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
       ll a[200000],c,d=0,e=10000000,f,i,j,k,l;
       cin>>c;
       for(i=1;i<=c;i++)
       {
           cin>>a[i];
       }
       for(i=c;i>=1;i--)
       {
           if(a[i]>e) d++;
           else e=a[i];
       }
       cout<<d<<endl;
   }

   return 0;
}
