#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);


   ll a,b;

   test
   {
        cin>>a>>b;

        if(a>0 && b>0) cout<<"Solution"<<endl;
        else if(b==0) cout<<"Solid"<<endl;
        else if(a==0) cout<<"Liquid"<<endl;
   }

   return 0;
}
