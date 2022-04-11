#include <bits/stdc++.h>
using namespace std;
#define test int t; cin>>t; while (t--)
#define ll long long int
#define pi acos(-1)
int main()
{
   ll n,m,k,a,c,d,e,f;
   test
   {
       cin>>n>>m>>k;
       a=n/k;
       if(m<=a) cout<<m<<endl;
       else
       {
           d=m-a;
           if(d%(k-1)==0) c=d/(k-1);
           else c=1+d/(k-1);
           a=a-c;
           cout<<a<<endl;
       }
   }
   return 0;
}
