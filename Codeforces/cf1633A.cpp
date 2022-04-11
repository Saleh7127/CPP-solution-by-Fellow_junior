/***
 created: 2022-01-31-20.35.00
***/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
#define get_lost_idiot return 0
#define nl '\n'

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);


   test
   {
        ll n,m,i,j,k,l;

        cin>>n;

        if(n%7==0) cout<<n<<nl;
        else
        {
             k=n-(n%10);

             for(i=k;i<=n+9;i++)
             {
                  if(i%7==0)
                  {
                       cout<<i<<nl;
                       break;
                  }
             }
        }
   }


   get_lost_idiot;
}

