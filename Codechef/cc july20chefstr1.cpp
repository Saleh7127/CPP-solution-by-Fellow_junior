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
       ll n,a[200000],c=0,d,e,f,i,j,k,l;
       cin>>n;
       for(i=0;i<n;i++)
       {
           cin>>a[i];
       }
       for(i=0;i<n-1;i++)
       {
           c+=llabs(a[i]-a[i+1])-1;
       }
       cout<<c<<endl;
   }


   return 0;
}
