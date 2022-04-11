#include <bits/stdc++.h>
using namespace std;
#define test int t; cin>>t; while (t--)
#define ll long long int
#define Faster  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pi acos(-1)
#define yes printf("YES\n");
#define no printf("NO\n");
int main()
{
   Faster
   test
   {
       ll a,c=0,d,e,f,i,j,k;
       cin>>a;
       while(a>1)
       {
           c++;
           d=2;
           while(a>=d)
           {
               a-=d;
               d+=3;
           }
       }
       cout<<c<<endl;
   }
   return 0;
}
