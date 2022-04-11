#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   string a,b;
   ll c,d,e,f,i,j,k=0,l=0;

   cin>>c>>a>>b;

   for(i=0;i<c-1;i++)
   {
       if(a[i]==b[0] && a[i+1]==b[1])
       {
           d=i-l+1;
           e=c-(i+1);
           k+=(d*e);
           l=i+1;
       }
   }
   cout<<k<<endl;

   return 0;
}
