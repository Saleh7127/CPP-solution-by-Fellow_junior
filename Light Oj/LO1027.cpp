/***
 created: 2021-10-25-22.24.39
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
        ll n,m,i,j=0,k=0,l=0;

        cin>>n;

        ll a;

        for(i=0;i<n;i++)
        {
             cin>>a;
             l+=abs(a);

             if(a<0) j++;
             else k++;
        }

        cout<<"Case "<<cs<<": ";

        if(j==n) cout<<"inf"<<nl;
        else
        {
             m=__gcd(l,k);

             cout<<l/m<<"/"<<k/m<<nl;
        }


        ///Expectation = P(1)*T(1) + P(2)*T(2) + P(3)*T(3)
        ///P =probability of choosing door
        ///T =time to get out of the maze
   }


   get_lost_idiot;
}
