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
        ll a,b,c,d,e,f,n,m;

        ll x[5];

        cin>>x[0]>>x[1]>>x[2];

        a=max(0ll,1+max(x[1],x[2])-x[0]);
        b=max(0ll,1+max(x[0],x[2])-x[1]);
        c=max(0ll,1+max(x[1],x[0])-x[2]);


        cout<<a<<" "<<b<<" "<<c<<endl;
   }


   return 0;
}
