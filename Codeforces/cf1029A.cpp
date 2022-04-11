#include <bits/stdc++.h>
using namespace std;
#define test int t; cin>>t; while (t--)
#define ll long long int
#define sc(a) scanf("%lld",&a)
#define sc2(a,b) scanf("%lld %lld",&a,&b)
int main()
{
   ll c,d,e,f,i,j,k,l;
   string a,ans,s1,s2;
   cin>>c>>d;
   cin>>a;
   ans=a;
   for(i=1;i<c;i++)
   {
       s1=a.substr(i,c-1);
       s2=a.substr(0,c-i);
       if(s1==s2)
       {
           ans=a.substr(s2.size(),c-1);
           break;
       }
   }
   cout<<a;
   for(i=2;i<=d;i++)
   {
       cout<<ans;
   }
   cout<<endl;
   return 0;
}
