#include <bits/stdc++.h>
using namespace std;
#define test int t; cin>>t; while (t--)
#define ll long long int
#define Faster  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
ll lcm(ll a,ll c)
{
    return (a*c)/__gcd(a,c);
}
int main()
{
   Faster

   ll a,c,d,e,f,i,j,k,l,x;

   cin>>x;
   for(i=1;i*i<=x;i++)
   {
       if(x%i==0 && lcm(i,x/i)==x)
       {
           d=i;
       }
   }
   cout<<d<< " "<<x/d<<endl;
   return 0;
}
