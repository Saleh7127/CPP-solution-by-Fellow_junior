#include <bits/stdc++.h>
using namespace std;
#define test int t; cin>>t; while (t--)
#define ll long long int
#define pi acos(-1)
int main()
{
   ll a,c,d,e,f,i,j,k,l;
   test
   {
       cin>>a>>c>>d>>e>>f;
       cin>>i;
       j=a*i+c*i+d*i+e*i+f*i;
       if(j<=120) printf("No\n");
       else printf("Yes\n");
   }

   return 0;
}
