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

        cin>>a>>b>>c;

        d=2*abs(a-b);

        if(a>d || b>d || c>d) cout<<-1<<endl;
        else
        {
             d/=2;
             if(c>d) cout<<c-d<<endl;
             else cout<<c+d<<endl;
        }
   }

   return 0;
}
