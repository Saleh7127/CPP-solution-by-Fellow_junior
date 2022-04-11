#include <bits/stdc++.h>
using namespace std;
#define test int t; cin>>t; while (t--)
#define ll long long int
#define fellow_junior  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
   fellow_junior
   ll a[200000],c,d,e,f,i,j,k,l;
   cin>>c;
   for(i=0;i<c;i++)
   {
       cin>>a[i];
       while(a[i]%2==0)
       {
           a[i]=a[i]/2;
       }
       while(a[i]%3==0)
       {
           a[i]=a[i]/3;
       }
   }
   for(i=0;i<c;i++)
   {
       if(a[i]!=a[1])
       {
           cout<<"NO"<<endl;
           return 0;
       }
   }
   cout<<"YES"<<endl;
   return 0;
}
