#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   ll f[25];
   ll i,j,k,l;

   f[0]=1;
   for(i=1;i<=20;i++)
   {
       f[i]=f[i-1]*i;
   }

   string a;

   test
   {
       cin>>a;
       l=1;
       map<char,ll>x;

       for(i=0;i<a.size();i++)
       {
           x[a[i]]++;
       }
       l=f[a.size()];

       for(char s='A' ;s<='Z';s++)
       {
           if(x[s]) l/=f[x[s]];
       }

       cout<<"Data set "<<cs<<": "<<l<<endl;
   }

   return 0;
}
