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
       ll i,j=0,k,l;
       string a;
       cin>>k>>l;
       cin>>a;
       l++;
       for(i=0;i<k;i++)
       {
           if(a[i]=='0') j++;
           else j=0;

           if(j>=l)
           {
               break;
           }
       }
       if(j>=l) cout<<"yes"<<endl;
       else cout<<"no"<<endl;
   }


   return 0;
}
