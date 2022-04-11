#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)

ll xxx(ll x)
{
    ll r=0,i;
    while(x)
    {
        i=x%10;
        r+=(i*i);
        x/=10;
    }
    return r;
}

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   test
   {
       ll a,c,d,e,f,i,j=0,k=0,l;
       cin>>a;
       c=a;
       while(k<=1000)
       {
           a=xxx(a);
           if(a==1)
           {
               j=1;
               break;
           }
           if(a==c)
           {
               j=0;
               break;
           }
           k++;
       }
       if(j==1) cout<<"Case #"<<cs<<": "<<c<<" is a Happy number."<<endl;
       else cout<<"Case #"<<cs<<": "<<c<<" is an Unhappy number."<<endl;

   }
   return 0;
}
