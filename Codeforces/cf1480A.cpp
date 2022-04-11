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
       ll b,c,d,e,f,i,j,k;
       cin>>a;
       for(i=0;i<a.size();i++)
       {
           if(i%2==1)
           {
               if(a[i]=='z')
               {
                   a[i]='y';
               }
               else a[i]='z';
           }
           if(i%2==0)
           {
               if(a[i]=='a')
               {
                   a[i]='b';
               }
               else a[i]='a';
           }
       }
       cout<<a<<endl;

   }


   return 0;
}
