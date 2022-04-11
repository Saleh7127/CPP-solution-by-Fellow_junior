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
       ll b,c,d,e,i,j=0,k=0,l=0;
       string a;
       cin>>a;
       if(a.size()%2==0 && a.front()!=')' && a.back()!='(')
       {
           cout<<"YES"<<endl;
       }
       else cout<<"NO"<<endl;
   }


   return 0;
}
