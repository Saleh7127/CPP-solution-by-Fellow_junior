#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   ll k,n,m,d,ans,c,i,j;
   cin>>k>>n>>m>>d;
   c=(k*n)/__gcd(k,n);
   c=(c*m)/__gcd(m,c);
   for(i=1; ;i++)
   {
       ans=c*i;
       if(ans/k+ans/n+ans/m==ans-d)
       {
           cout<<ans<<endl;
           return 0;
       }
       else if(ans/k+ans/n+ans/m<ans-d)
       {
           cout<<-1<<endl;
           return 0;
       }
   }


   return 0;
}
