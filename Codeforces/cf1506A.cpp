#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);


   test
   {
       ll n,m,x,i,j,k,l;

       cin>>n>>m>>x;

       l=x%n;

       if(l==0) l=n;

       k=1+x/n;

       if(x%n==0) k--;

       j=k+(l-1)*m;

       cout<<j<<endl;

   }

   return 0;
}
