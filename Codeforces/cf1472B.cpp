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
       ll a,b,c,d,i=0,j=0;
       cin>>a;
       b=0;
       while(a--)
       {
           cin>>c;
           if(c==1) i++;
           else j++;
       }
       if(i==0 && j%2==1) cout<<"NO"<<endl;
       else if(i%2!=0) cout<<"NO"<<endl;
       else cout<<"YES"<<endl;
   }


   return 0;
}
