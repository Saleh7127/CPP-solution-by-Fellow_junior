#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)

ll c(ll n)
{
     for(ll i=2;i*i<=n;i++)
     {
          if(n%i==0) return 0;
     }
     return 1;
}

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   ll n,m,i,j,k,l;

   cin>>n;

   if(n==2) cout<<1<<endl;
   else if(n%2==0) cout<<2<<endl;
   else if(n%2==1)
   {
        if(c(n))  cout<<1<<endl;
        else if(c(n-2))  cout<<2<<endl;
        else  cout<<3<<endl;
   }

   return 0;
}
