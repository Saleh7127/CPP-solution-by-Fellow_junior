#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)

ll fzero(ll n,ll b)
{
    ll c=0;
    while(n%b==0)
    {
        n/=b;
        c++;
    }
    return c;
}

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   ll a,b,c,d,i;
   while(cin>>a && a)
   {

       c=0;

       if(a!=1) c=1;

       for(i=2;i*i<a;i++)
       {
           if(a%i==0)
           {
               c+=fzero(a,i);
               c+=fzero(a,a/i);
           }
       }
       if(i*i==a)
       {
           c+=fzero(a,i);
       }

       cout<<a<<" "<<c<<endl;
   }


   return 0;
}
