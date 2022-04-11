#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
ll csod(ll n)
{
    ll i,j,k,l,ans=0;
    for(i=2;i<=sqrt(n);i++)
    {
        j=n/i;
        ans+=((j+i)*(j-i+1))/2;
        ans+=(i*(j-i));
    }
    return ans;
}

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

    ll a;

    test
    {

       cin>>a;
       cout<<"Case "<<cs<<": "<<csod(a)<<endl;

    }

   return 0;
}
///if 1 and n consider then answer is ans+=(n*(n+1))/2 + n-1;
