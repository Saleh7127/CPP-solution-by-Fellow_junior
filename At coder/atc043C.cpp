#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; while(t--)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   ll a[1000],c,d,i,j,k,l=1e13;
   cin>>c;
   for(i=0;i<c;i++)
   {
       cin>>a[i];
   }
   sort(a,a+c);
   for(i=a[0];i<=a[c-1];i++)
   {
       d=0;
       for(j=0;j<c;j++)
       {
           d+=(a[j]-i)*(a[j]-i);
       }
       if(d<l)
       {
           l=d;
       }
   }
   cout<<l<<endl;
   return 0;
}
