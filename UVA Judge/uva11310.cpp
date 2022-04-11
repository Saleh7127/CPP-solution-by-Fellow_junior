#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
   ll f[45],i,j,k,l,a,c;
   f[0]=1;
   f[1]=1;
   f[2]=5;
   for(i=3;i<=40;i++)
   {
       f[i]=f[i-1]+(4*f[i-2])+(2*f[i-3]);
   }
   test
   {
       cin>>a;
       cout<<f[a]<<endl;
   }
}

