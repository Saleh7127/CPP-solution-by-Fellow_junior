#include <bits/stdc++.h>
using namespace std;
#define test int t; cin>>t; while (t--)
#define pi acos(-1)
int main()
{
   long long a[350000],c,d,e,s=0,f,i,j,k,l;
   cin>>c;
   for(i=0;i<c;i++)
   {
       cin>>a[i];
       s+=a[i];
   }
   sort(a,a+c,greater<int>());
   cin>>d;
   while(d--)
   {
       cin>>e;
       f= s-a[e-1];
       cout<<f<<endl;
   }
   return 0;
}
