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
   string a,c;
   ll d=0,e,f,i,j,k,l;
   cin>>a>>c;
   for(i=0;i<a.size();i++)
   {
       if(a[i]!=c[i])
       {
           d++;
       }
   }
   sort(a.begin(),a.end());
   sort(c.begin(),c.end());
   if(a==c && d==2) printf("YES\n");
   else printf("NO\n");
   return 0;
}
