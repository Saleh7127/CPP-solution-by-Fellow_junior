#include <bits/stdc++.h>
using namespace std;
#define test int t; cin>>t; while (t--)
#define ll long long int
#define fellow_junior  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
ll a[400005];
int main()
{
   fellow_junior

   ll c,d=0,e=0,f,i,j,k,l;
   cin>>c;
   for(i=0;i<c;i++)
   {
       cin>>a[i];
   }
   for(i=0;i<c;i++)
   {
       e=__gcd(e,a[i]);
   }
   for(i=1;i<=sqrt(e);i++)
   {
       if(e%i==0)
       {
           if(i*i==e) d++;
           else d+=2;
       }
   }
   cout<<d<<endl;
   return 0;
}
