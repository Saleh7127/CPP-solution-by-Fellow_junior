#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   test
   {
        ll a,b,c,d,e,f;
        cin>>a>>b>>c>>d;

        e=c/a;
        f=d/b;
        if(c%a) e++;
        if(d%b) f++;

        cout<<e+f<<endl;
   }

   return 0;
}
