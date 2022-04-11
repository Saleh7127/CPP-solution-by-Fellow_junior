#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
bool prime(ll a)
{
    ll c =sqrt(a);
    if(a<2) return 0;
    if(a==2) return 1;
    for(ll i=2;i<=c;i++)
    {
        if(a%i==0) return 0;
    }
    return 1;
}

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   ll a,c,d,e,f,i,j,k,l;
   while(cin>>a && a)
   {
       c=prime(a);
       d=prime((1LL<<a)-1);
       if(c && d)
       {
           cout<<"Perfect: "<<(1LL<<(a-1))*((1LL<<a)-1)<<"!"<<endl;
       }
       else if(c && !d)
       {
           cout<<"Given number is prime. But, NO perfect number is available."<<endl;
       }
       else
       {
           cout<<"Given number is NOT prime! NO perfect number is available."<<endl;
       }
   }


   return 0;
}
