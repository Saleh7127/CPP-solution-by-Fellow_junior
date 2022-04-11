#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   ll n,m=0,i,j=0,k;

   cin>>n;
   map<ll,ll>x;
   x[0]=1;
   for(i=0;i<n;i++)
   {
       cin>>k;
       m+=k;
       m%=n;
       if(m<0) m+=n;

       if(x[m]) j+=x[m];

       x[m]++;
   }
   cout<<j<<endl;

   return 0;
}
