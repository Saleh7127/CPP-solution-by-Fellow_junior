#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);


   ll n,a[200005],c,d,e,f,i,j,k=0,l=0;
   cin>>n;
   for(i=1;i<=n;i++)
   {
       cin>>a[i];
   }


   for(i=1,j=n;i<=j;)
   {
       if(k<=l)
       {
           k+=a[i++];
       }
       else l+=a[j--];

       if(k==l)
       {
           e=k;
       }
   }
   cout<<e<<endl;
   return 0;
}
