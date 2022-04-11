#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
ll a,v,x,lo=0,hi=1000000001,mid,i,j,k,l;

bool valid(ll xx)
{
    ll ss=xx;
    ll f,g=0,dd;
    while(ss>0)
    {
        ss/=10;
        g++;
    }

    f=a*xx+v*g;

    return f<=x;
}

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   cin>>a>>v>>x;

   while(lo+1<hi)
   {
       mid=(lo+hi)/2;
       if(valid(mid))
       {
           lo=mid;
       }
       else hi=mid;
   }
   cout<<lo<<endl;

   return 0;
}
