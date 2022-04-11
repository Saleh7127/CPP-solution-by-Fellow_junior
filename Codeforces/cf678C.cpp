#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   ll n,a,b,c,p,q,i,j,k,l,da,db,dc;

   cin>>n>>a>>b>>p>>q;

   da=n/a;
   db=n/b;

   c=(a*b)/__gcd(a,b);

   dc=n/c;

   i=(p*(da-dc))+(q*db);
   j=(p*da)+(q*(db-dc));

   cout<<max(i,j)<<endl;

   return 0;
}
