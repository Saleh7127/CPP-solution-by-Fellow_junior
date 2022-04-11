#include <bits/stdc++.h>
using namespace std;
#define test int t; cin>>t; while (t--)
#define ll long long int
#define fellow_junior  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
   fellow_junior

   ll fact[21]={1};
   for(ll i=1;i<21;i++)
   {
       fact[i]=fact[i-1]*i;
   }
   ll n;
   cin>>n;
   for(ll i=1;i<=n;i++)
   {
       string a;
       cin>>a;
       ll l=a.size();
       ll c[26]={0};
       for(ll j=0;j<l;j++)
       {
           c[a[j]-65]++;
       }
       ll ans=fact[l];
       for(ll j=0;j<26;j++)
       {
           ans/=fact[c[j]];
       }
       cout<<"Data set "<<i<<": "<<ans<<endl;
   }
   return 0;
}

