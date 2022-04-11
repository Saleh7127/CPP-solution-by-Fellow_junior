/***
 created: 2022-01-17-13.58.00
***/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
#define get_lost_idiot return 0
#define nl '\n'
bool x[1000002];
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);


   ll n,m,i,j,k=0,l;

   cin>>n;

   for(i=0;i<n;i++)
   {
        cin>>m;
        x[m]=1;
   }

   for(i=1;i<=1e6;i++)
   {
        l=0;
        for(j=i;j<=1e6;j+=i)
        {
             if(x[j])
             {
                  l=__gcd(j,l);
             }
        }
        if(l==i) k++;
   }

   cout<<k-n<<nl;

   get_lost_idiot;
}
