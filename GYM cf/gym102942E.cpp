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
       ll b,c,d,e,f,i,j,k,l=0;
       cin>>b;
       cin>>a;
       c=a[0]-'0';
       for(i=1;i<b;i++)
       {
           if(a[i]!='-' && c>(a[i]-'0'))
           {
               l=1;
               break;
           }
           else if(a[i]!='-' && c<=(a[i]-'0'))
           {
               c=(a[i]-'0');
           }
       }
       if(l) cout<<0<<endl;
       else
       {

       }
   }


   return 0;
}
