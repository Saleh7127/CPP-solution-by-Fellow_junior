#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   test
   {
        ll n,m,i,j,k,l;

        cin>>n;

        l=1;

        double p=1.00;

        while(p>0.5)
        {
             p=p*(1-1.0*l/n);
             l++;
        }

        cout<<"Case "<<cs<<": "<<l-1<<endl;
   }


   return 0;
}
