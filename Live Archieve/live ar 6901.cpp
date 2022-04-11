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


       string a,b;
       ll i,j,k,l=0,m,n;
       cin>>a>>b;

       for(i=0,j=0;i<a.size() && j<b.size();i++,j++)
       {
           while(a[i]!='a' && i<a.size())
           {
               i++;
           }
           while(b[j]!='a' && j<b.size())
           {
               j++;
           }
           l+=abs(i-j);
       }

       cout<<l<<endl;
   }



   return 0;
}
