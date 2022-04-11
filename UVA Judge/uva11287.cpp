#include <bits/stdc++.h>
using namespace std;
#define test int t; cin>>t; while (t--)
#define ll long long int
#define fellow_junior  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
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
ll prime(ll p)
{
    ll d=sqrt(p),i;
    for(i=2;i<=d;i++)
    {
        if(p%i==0)
        {
            return 0;
            break;
        }
    }
    return 1;
}
int main()
{
   fellow_junior
   ll p,a,i,j,k;
   while(cin>>p>>a && p &&a)
   {
       j=prime(p);
       if(j==1)
       {
           cout<<"no"<<endl;
           continue;
       }
       k=mod(a,p,p);
       if(k==a)
       {
           cout<<"yes"<<endl;
       }
       else cout<<"no"<<endl;
   }
   return 0;
}
