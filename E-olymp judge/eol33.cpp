#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
bool check(ll x)
{
    while(x>0)
    {
        if((x%10)==3 && (x/10)%10==1) return 0;
        x/=10;
    }
    return 1;
}

bool prime(ll s)
{
    if(s==2) return 1;
    if(s==1 || s%2==0) return 0;
    for(ll i=3;i*i<=s;i+=2)
    {
        if(s%i==0) return 0;
    }
    return 1;
}

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   ll a,c,i,j,k=0;
   cin>>a>>c;
   for(i=a;i<=c;i++)
   {
       if(prime(i) && check(i))
       {
           k++;
       }
   }
   cout<<k<<endl;

   return 0;
}
