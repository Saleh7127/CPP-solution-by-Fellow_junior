#include <bits/stdc++.h>
using namespace std;
#define test int t; cin>>t; while (t--)
#define ll long long int
#define sc(a) scanf("%lld",&a)
#define sc2(a,b) scanf("%lld %lld",&a,&b)
int main()
{
   ll a[100005]={0},c,d,e,f,i,j,k,l;
   cin>>c;
   for(i=2;i<=c+1;i++)
   {
      for(j=2;j*j<=i;j++)
      {
          if(i%j==0)
          {
              a[i]=1;
          }
      }
   }
   if(c<=2) cout<<1<<endl;
   else cout<<2<<endl;
   for(i=2;i<=c+1;i++)
   {
       if(a[i]==0) cout<<1<<" ";
       else cout<<2<<" ";
   }
   return 0;
}

