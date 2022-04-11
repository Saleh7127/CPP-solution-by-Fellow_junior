#include <bits/stdc++.h>
using namespace std;
#define test int t; cin>>t; while (t--)
#define ll long long int
#define sc(a) scanf("%lld",&a)
#define sc2(a,b) scanf("%lld %lld",&a,&b)
#define pf(a) printf("%lld",a)
#define loop1(i,a,c) for(i=a;i<=c;i++)
#define loop(i,c) for(i=0;i<c;i++)
int main()
{
   ll a,c,d,e,f=0,i,j,k,l;
   cin>>a>>c;
   while(c--)
   {
       cin>>i;
       f=(f*a+i)%2;
   }
   if(f) printf("odd\n");
   else printf("even\n");
   return 0;
}
