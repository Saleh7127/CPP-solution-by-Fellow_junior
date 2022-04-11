#include <bits/stdc++.h>
using namespace std;
#define test int t; cin>>t; while (t--)
#define ll long long int
#define pi acos(-1)
int main()
{
   ll n,m,d,c,e=0,f,i,j,k,l;
   cin>>n>>m>>d;
   k=n*m;
   ll a[k];
   for(i=0;i<k;i++)
   {
       cin>>a[i];
   }
   sort(a,a+k);
   l=k/2;
   for(i=0;i<k;i++)
   {
       if(abs(a[l]-a[i])%d!=0)
       {
           printf("-1\n");
           return 0;
       }
       e+=(abs(a[l]-a[i]))/d;
   }
   cout<<e<<endl;
   return 0;
}
