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
       ll a;
       cin>>a;
       if(a==1 || a==3) cout<<"Bob"<<endl;
       else if(a==2) cout<<"Alice"<<endl;
       else
       {
           if(a%2==0 && (a/2)%2==1) cout<<"Alice"<<endl;
           else if(a%2) cout<<"Bob"<<endl;
           else cout<<"Draw"<<endl;
       }
   }


   return 0;
}
