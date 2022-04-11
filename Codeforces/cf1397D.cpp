#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; while(t--)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   test
   {
       ll a[10000],c,d=0,e,i,j,k,l;
       cin>>c;
       for(i=0;i<c;i++)
       {
           cin>>a[i];
           d+=a[i];
       }
       sort(a,a+c,greater<int>());
       if(d%2 || a[0]*2>d)
       {
           cout<<"T"<<endl;
       }
       else cout<<"HL"<<endl;
   }


   return 0;
}
