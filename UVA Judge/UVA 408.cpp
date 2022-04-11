#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   ll stp,mod;
   while(cin>>stp>>mod)
   {
       ll i,j,k,l,c=0,d;
       bool a[mod]={0},x=false;
       for(i=0;i<mod;i++)
       {
           d=(c+stp)%mod;
           if(a[d]==true)
           {
               x=true;
               break;
           }
           a[d]=true;
           c=d;
       }
       ///if __gcd(stp,mod)==1 then good else Bad choice
       if(x) printf("%10lld%10lld    Bad Choice\n\n",stp,mod);
       else  printf("%10lld%10lld    Good Choice\n\n",stp,mod);
   }


   return 0;
}
