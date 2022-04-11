#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)

bool chk(ll a[],ll n);

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   test
   {

        ll n,m,i,j,k,l=0;

        cin>>n;

        ll a[n+4],b[n+4];

        for(i=1;i<=n;i++)
        {
             cin>>a[i];
             b[i]=a[i];
        }

        reverse(b+1,b+n+1);


        if(chk(a,n) || chk(b,n)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

   }

   return 0;
}
bool chk(ll a[],ll n)
{
     for(ll i=2;i<=n;i++)
     {
          if(a[i-1]>a[i])
          {
               a[1]-=(a[i-1]-a[i]);
          }
     }
     return a[1]>=0;
}
