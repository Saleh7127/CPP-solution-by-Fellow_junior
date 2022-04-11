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
        ll n,m,i,j,k,l=0;

        cin>>n;

        map<ll,ll>x;

        for(i=0;i<n;i++)
        {
             cin>>m;
             x[m]++;
        }

        for(auto d:x)
        {
             k=d.second/(d.first+1);
             if(d.second%(d.first+1)) k++;
             l+=(k*(d.first+1));
        }

        cout<<"Case "<<cs<<": "<<l<<endl;
   }

   return 0;
}
