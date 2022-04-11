#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   ll a[100005],c,d,e,i,j,k=0,l=0;
   cin>>c;
   for(i=1;i<=c;i++)
   {
       cin>>a[i];
   }
   i=1;
   j=c;

   while(i<=j)
   {
       if(k<=l)
       {
           k+=a[i];
           i++;
       }
       else
       {
           l+=a[j];
           j--;
       }
   }
   cout<<i-1<<" "<<c-(i-1)<<endl;
   return 0;
}
