#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   test
   {

       ll a[200005],c,d,e=0,f,i,j,k,l;
       cin>>c>>d;
       for(i=0;i<c;i++)
       {
           cin>>a[i];
       }
       sort(a,a+c);
       e+=a[c-1];
       for(i=c-2;i>=0 && d>0;i--)
       {
           d--;
           e+=a[i];
       }
       cout<<e<<endl;
   }


   return 0;
}
