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

       ll a[1005],c[1005]={0},d,e,f,i,j,k,l,x,y;
       cin>>d>>k>>x>>y;
       for(i=0;i<10000;i++)
       {
           f=(x+k)%d;
           c[f]=1;
           x=(x+k)%d;
       }
       if(c[y]==1) cout<<"YES"<<endl;
       else cout<<"NO"<<endl;
   }


   return 0;
}
