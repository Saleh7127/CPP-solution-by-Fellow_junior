#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);


       ll a[20005],b,c,d,e,f,i,j,k,l=0;
       cin>>b;
       for(i=0;i<b;i++)
       {
           cin>>a[i];
       }
       for(i=0;i<b-1;i++)
       {
           for(j=i+1;j<b;j++)
           {
               l+=__gcd(a[i],a[j]);
           }
       }
       cout<<__gcd(1,9)<<endl;
       cout<<l<<endl;



   return 0;
}
