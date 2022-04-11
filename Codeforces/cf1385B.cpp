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
       ll a[1000],c[1000]={0},d,e,f,i,j,k,l;
       cin>>e;
       for(i=1;i<=2*e;i++)
       {
           cin>>a[i];
           c[a[i]]++;
       }
       for(i=1;i<=2*e;i++)
       {
           d=a[i];
           if(c[d]>0)
           {
               cout<<d<<" ";
               c[d]=0;
           }
       }
       cout<<endl;
   }
   return 0;
}
