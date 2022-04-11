#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)

ll bigmod(ll a,ll c,ll d)
{
    if(c==0) return 1;
    ll x=bigmod(a,c/2,d);
    x=x*x%d;
    if(c%2==1)
    {
        x=(x*a)%d;
    }
    return x;
}

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   test
   {


       ll n,k,i,j,l,mod,a[2000],sum=0;

       cin>>n>>k>>mod;

       for(i=0;i<n;i++)
       {
           cin>>a[i];
           sum+=a[i];
       }

       l=(k*bigmod(n,k-1,mod))%mod;
       l=(l*(sum%mod))%mod;

       cout<<"Case "<<cs<<": "<<l<<endl;
   }


   return 0;
}

//the whole process will be added n ^ k times,
//but each number is not added n ^ k times.
//it's added n ^ (k-1) * k times,
//So ans = sum * n ^ (k-1) * k

