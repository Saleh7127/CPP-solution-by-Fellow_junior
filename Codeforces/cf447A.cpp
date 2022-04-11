#include <bits/stdc++.h>
using namespace std;
#define test int t; cin>>t; while (t--)
#define ll long long int
#define sc(a) scanf("%lld",&a)
#define sc2(a,b) scanf("%lld %lld",&a,&b)
int main()
{
   ll a,c[100000],d,e[1000]={0},i,j,k,l;
   cin>>a>>d;
   for(i=1;i<=d;i++)
   {
       cin>>c[i];
   }
   for(i=1;i<=d;i++)
   {
       if(e[(c[i])%a]==0) e[(c[i])%a]++;
       else
       {
           printf("%lld\n",i);
           return 0;
       }
   }
   cout<<-1<<endl;
   return 0;
}

