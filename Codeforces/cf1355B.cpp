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
   ll a[200005],c,d,e,f,i,j,k,l;
   test
   {
       cin>>c;
       loop(i,c)
       {
           cin>>a[i];
       }
       sort(a,a+c);
       d=0,e=0;
       loop(i,c)
       {
           d++;
           if(d==a[i])
           {
               e++;
               d=0;
           }
       }
       cout<<e<<endl;
   }
   return 0;
}
