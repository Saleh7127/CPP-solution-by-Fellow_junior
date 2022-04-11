#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)

ll check(ll n)
{
     ll a=0;
     while(n>0)
     {
          a+=(n%10)*(n%10);
          n/=10;
     }
     return a;
}
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   ll n,i,j,k,l,m;

   cin>>n;

   m=n;

   for(i=1;i<=1000;i++)
   {
        if(check(m)==1)
        {
             cout<<"HAPPY"<<endl;
             return 0;
        }
        if(check(m)==n)
        {
             cout<<"UNHAPPY"<<endl;
             return 0;
        }
        m=check(m);
   }
   cout<<"UNHAPPY"<<endl;

   return 0;
}

