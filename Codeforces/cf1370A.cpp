#include <bits/stdc++.h>
using namespace std;
#define test int t; cin>>t; while (t--)
#define ll long long int
#define Faster  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
   Faster

   test
   {
       int a,c,d,e,f,i,j,k;
       cin>>a;
       if(a<=3) cout<<1<<endl;
       else
       {
           if(a%2==1) a=a-1;
           c=a/2;
           cout<<__gcd(a,c)<<endl;
       }
   }

   return 0;
}
