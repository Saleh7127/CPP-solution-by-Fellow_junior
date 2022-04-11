#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll mod(ll a,ll c,ll m)
{

    if(c==0) return 1;
    ll x=mod(a,c/2,m);
    x=(x*x)%m;
    if(c%2==1)
    {
        x=(x*a)%m;
    }
    return x;
}
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   ll n,a,c,d,e,f,i,j,k,l;
   while(cin>>n && n)
   {

       while(n--)
       {
           cin>>a>>c>>d;
           cout<<mod(a,c,d)<<endl;
       }
   }

   return 0;
}
