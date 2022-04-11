#include <bits/stdc++.h>
using namespace std;
#define ll long long
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


    ll cs=1,a;
    while(cin>>a && a!=0)
    {

       cout<<"Case "<<cs++<<": "<<csod(a)<<endl;

    }

   return 0;
}
