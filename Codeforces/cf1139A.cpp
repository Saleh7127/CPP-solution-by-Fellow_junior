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
   string a;
   ll c,d,e=0,f,i,j,k,l;
   cin>>c>>a;
   for(i=0;i<c;i++)
   {
       d=a[i]-'0';
       if(d%2==0)
       {
           e+=i+1;
       }
   }
   cout<<e<<endl;
   return 0;
}
