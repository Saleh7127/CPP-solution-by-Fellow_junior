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
   ll t,d,e,f,i,j,k,l;
   while(cin>>t && t)
   {
       vector<int>a(t),c(t);
       for(i=0;i<t;i++)
       {
           cin>>a[i]>>c[i];
       }
       sort(a.begin(),a.end());
       sort(c.begin(),c.end());

       if(a==c) printf("YES\n");
       else printf("NO\n");
   }
   return 0;
}
