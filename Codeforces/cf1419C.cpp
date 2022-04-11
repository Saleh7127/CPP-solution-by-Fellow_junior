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
       ll n,x,a,c=0,d=0,e,i,j,k,l;
       cin>>n>>x;
       for(i=0;i<n;i++)
       {
           cin>>a;
           if(a==x) c++;
           d+=(a-x);
       }
       if(c==n) cout<<0<<endl;
       else if(c) cout<<1<<endl;
       else if(d==0) cout<<1<<endl;
       else cout<<2<<endl;
   }


   return 0;
}
