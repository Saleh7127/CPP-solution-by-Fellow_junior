#include <bits/stdc++.h>
using namespace std;
#define test int t; cin>>t; while (t--)
#define ll long long int
#define sc(a) scanf("%lld",&a)
#define sc2(a,b) scanf("%lld %lld",&a,&b)
int main()
{
   ll a[100000],c,i,j;
   test
   {
       cin>>c;
       ll total=0;
       for(i=0;i<c;i++)
       {
           cin>>a[i];
       }
       sort(a,a+c,greater<int>());
       for(i=2;i<c;i+=3)
       {
           total+=a[i];
       }
       cout<<total<<endl;
   }
   return 0;
}

