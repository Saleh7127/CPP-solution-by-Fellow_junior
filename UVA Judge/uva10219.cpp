#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   ll n,k,i,l;

   while(cin>>n>>k)
   {
       long double a=0;
       for(i=n-k+1;i<=n;i++)
       {
           a+=log10((double)i);
       }
       for(i=1;i<=k;i++)
       {
           a-=log10((double)i);
       }

       cout<<(int)a+1<<endl;
   }


   return 0;
}
