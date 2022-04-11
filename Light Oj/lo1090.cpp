#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
ll fact(ll n,ll x)
{
    ll c=0;
    while(n>0)
    {
        c+=(n/x);
        n/=x;
    }
    return c;
}
ll ppowerq(ll n,ll x)
{
    ll c=0;
    while(n%x==0)
    {
        c++;
        n/=x;
    }
    return c;
}
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);



   test
   {
       ll n,r,p,q,two,five,ans=0;


       cin>>n>>r>>p>>q;


       two=fact(n,2); ///how many 2 in nCr +n!,-(n-r)!,-r!
       two-=fact(n-r,2);
       two-=fact(r,2);
       two+=(ppowerq(p,2)*q); ///how many 2 in p^q;

       five=fact(n,5); ///how many 5 in nCr +n!,-(n-r)!,-r!
       five-=fact(n-r,5);
       five-=fact(r,5);
       five+=(ppowerq(p,5)*q); ///how many 5 in p^q

       ans=min(two,five);

       cout<<"Case "<<cs<<": "<<ans<<endl;
   }

   return 0;
}
