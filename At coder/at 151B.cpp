#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   ll a,c,d,e,f,i,j,k,l=0;
   cin>>a>>c>>d;

   for(i=0;i<a-1;i++)
   {
       cin>>e;
       l+=e;
   }
   k=a*d;
   j=k-l;
   if(j>c) cout<<-1<<endl;
   else
   {
       if(j<0) cout<<0<<endl;
       else cout<<j<<endl;
   }
   return 0;
}
