#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)

ll dc[]={1,11,111,1111,11111,111111,1111111,11111111,111111111,1111111111,11111111111};

ll countt(ll x)
{
     ll r,i=0,ans=0;

     while(x)
     {
          r=x%10;
          ans+=(r*dc[i]);
          x/=10;
          i++;
     }
     return ans;
}


int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   test
   {
        ll a,b,c,d,e,f,i,j,k,l;

        cin>>a>>b;

        if(a>b) swap(a,b);

        cout<<countt(b)-countt(a)<<endl;
   }

   return 0;
}

