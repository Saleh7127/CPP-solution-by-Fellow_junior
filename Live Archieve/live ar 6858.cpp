#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   ll n,m,a,b,i,j,k,l;
   cin>>n>>m;
   test
   {
       cin>>a;
       k=0;
       if(a<=2) k=1;
       else if(n%a==0 && (m-2)%a==0) k=1;
       else if(m%a==0 && (n-2)%a==0) k=1;
       else if((n-1)%a==0 && (m-1)%a==0) k=1;

       if(k) cout<<"YES"<<endl;
       else cout<<"NO"<<endl;
   }


   return 0;
}
