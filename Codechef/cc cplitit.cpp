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
       string a;
       ll c,d,e,f,i,j,k,l=0;
       cin>>c>>a;
       for(i=0;i<c-1;i++)
       {
           if(a[c-1]==a[i])
           {
               l=1;
               break;
           }
       }
       if(l) cout<<"YES"<<endl;
       else cout<<"NO"<<endl;
   }


   return 0;
}
