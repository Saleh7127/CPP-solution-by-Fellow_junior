#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   ll a[200005],c,d=0,e,f,i,j,k,l;
   cin>>c;
   for(i=0;i<c;i++)
   {
       cin>>a[i];
   }
   sort(a,a+c);

   for(i=0,j=0;j<c;)
   {
       while(j<c && a[i]>=a[j])
       {
           j++;
       }
       while(j<c && a[j]>a[i])
       {
           i++,j++,d++;
       }
   }
   cout<<d<<endl;
   return 0;
}
