#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);


   ll a[100005],c,d,e,f,i,j,k,l=1000000000000;
   cin>>c;
   for(i=0;i<c;i++)
   {
       cin>>a[i];
   }
   sort(a,a+c);
   for(i=0;i<(c/2);i++)
   {
       d=a[i]+a[c-i-1];
       l=min(l,d);
   }
   cout<<l<<endl;
   return 0;
}
