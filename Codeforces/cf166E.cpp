#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
ll f[10000007];

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   ll n,m,i,j,k,l;



   f[0]=1;
   f[1]=0;
   f[2]=3;


   for(i=3;i<=10000007;i++)
   {
        f[i]=(f[i-1]*2+f[i-2]*3) % 1000000007;
   }

   cin>>n;

   cout<<f[n]<<endl;


   return 0;
}
