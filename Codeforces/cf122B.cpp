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
   ll c=0,d=0,e,f,i,j,k,l;
   cin>>a;
   l=a.size();
   for(i=0;i<l;i++)
   {
       if(a[i]=='4')
       {
           c++;
           j=i;
       }
       else if(a[i]=='7')
       {
           d++;
           k=i;
       }
   }
   if(c==0 && d==0) cout<<-1<<endl;
   else if(c>d || c==d) cout<<4<<endl;
   else cout<<7<<endl;
   return 0;
}
