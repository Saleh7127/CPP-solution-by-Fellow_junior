#include <bits/stdc++.h>
using namespace std;
#define test int t; cin>>t; while (t--)
#define ll long long int
#define fellow_junior  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
   fellow_junior
   test
   {
       ll a,n,m,c,d,e,i,j,k,l;
       cin>>n>>m;
       a=n/m;
       c=0;
       for(i=1;i<10;i++)
       {
           c+=((i*m)%10)*(a/10);
       }
       for(i=1;i<=a%10;i++)
       {
           c+=(i*m)%10;
       }
       cout<<c<<endl;
   }
   return 0;
}
