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
   test
   {
       string a;
       int c,d,e,f,i,j,k,l;
       cin>>a;
       l=a.size();
       k=c=d=e=200008;
       for(i=0;i<l;i++)
       {
           if(a[i]=='1') c=i;;
           if(a[i]=='2') d=i;
           if(a[i]=='3') e=i;
           f=max(c,max(d,e));
           j=min(c,min(d,e));
           k=min(k,(f-j)+1);
       }
       if(k>200000) cout<<0<<endl;
       else cout<<k<<endl;
   }
   return 0;
}
