#include <bits/stdc++.h>
using namespace std;
#define test int t; cin>>t; while (t--)
#define ll long long int
#define fellow_junior  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
   fellow_junior
   ll a[200000],c,d,e=0,f,i,j,k,l;
   cin>>c>>d;
   for(i=0;i<c;i++)
   {
       cin>>a[i];
   }
   sort(a,a+c);
   e+=d*a[0];
   for(i=1;i<c;i++)
   {
       if(d-1<=1) d=1;
       else d=d-1;
       e+=d*a[i];
   }
   cout<<e<<endl;
   return 0;
}
