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
       ll a,v,c,d,e,f,i,j,k,l;
       cin>>a>>v>>l;
       d=(a*v)/__gcd(a,v); //d is the greatest common divisor of a and v

       cout<<"Case "<<cs<<": ";

       if(l%d)
       {
           cout<<"impossible"<<endl;
       }
       else
       {
           ///To make lcm (d, e) = de, there must be at least a prime factor in l that is not in d and an index in l that is greater than d in the index taken in l
           ///C now contains the prime factors in l that are not in m take the exponent in l and the exponent in l is greater than the prime factor in m take the exponent difference
           ///So now e still needs to be multiplied by the common prime factors of e and d to take the exponent in d
           ///gcd (d, e) takes the small exponential product of e and d common prime factors
           e=l/d;

           f=__gcd(e,d);
           while(f!=1)
           {
               e*=f;
               d/=f;
               f=__gcd(e,d);
           }
           cout<<e<<endl;
       }
   }
   return 0;
}
