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
       ll a,b;
       cin>>a;

       cout<<9;
       for(b=0;b<a-1;b++)
       {
           cout<<(8+b)%10;
       }
       cout<<endl;
   }


   return 0;
}
