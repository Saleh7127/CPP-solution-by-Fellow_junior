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
        ll n=0,m,i,j,k,a,b,c;

        cin>>a>>b>>c>>m;

        if(a-1>(b+c+m)) n=1;
        else if(b-1>(a+c+m)) n=1;
        else if(c-1>(b+a+m)) n=1;
        else if((a+b+c-3)>=m) n=0;
        else n=1;

        if(n) cout<<"NO"<<"\n";
        else cout<<"YES"<<"\n";
   }

   return 0;
}

