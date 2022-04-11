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
       ll a,b,c,odd;
       cin>>a;
       b=sqrt(a);
       c=sqrt(a/2);
       odd=a-(b+c);


       cout<<"Case "<<cs<<": "<<odd<<endl;

       /*
       SOD  value can be written as ,

      SOD(n)=(p1^(e1+1)-1)/p1-1 *(p2^(e2+1)-1)/p2-1 * (p3^(e3+1)-1)/p3-1
      from this equation we can said that if SOD value is odd then the
      power of each prime factor should be EVEN except 2.
      Because ,only even power of a prime factor, gives odd value.
      n=2^2i*p^2 ,for odd value.2^2i gives odd value and p^2 for other prime numbers
      also gives odd value.odd*odd value is a odd value.
      n=2^(2i+1)*p^2 others odd

      2^i*p = sqrt(n)
      2^i*p = sqrt(n/2);
      */
   }


   return 0;
}

