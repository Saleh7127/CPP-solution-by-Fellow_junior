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

       ll c,d,e=0,f,i,j=0,k,l;
       map<ll,ll>a;
       cin>>c;
       for(i=0;i<c;i++)
       {
           cin>>d;
           a[d]++;
           if(a[d]==2) e=1;
       }
       if(e) cout<<"YES"<<endl;
       else cout<<"NO"<<endl;
   }


   return 0;
}
