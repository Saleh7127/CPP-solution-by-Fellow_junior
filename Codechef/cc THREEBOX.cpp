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
        ll a,b,c,d,e;

        ll x[3];

        cin>>x[0]>>x[1]>>x[2]>>d;

        sort(x,x+3);

        if(x[0]+x[1]+x[2]<=d) cout<<1<<endl;
        else if(x[0]==d) cout<<3<<endl;
        else if(x[0]+x[1]>d) cout<<3<<endl;
        else if(x[0]+x[1]<=d) cout<<2<<endl;
   }


   return 0;
}
