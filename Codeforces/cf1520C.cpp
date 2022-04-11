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


       ll n,m,i,j,k,l=2;


       cin>>n;

       if(n==1) cout<<1<<endl;
       else if(n==2) cout<<-1<<endl;
       else
       {

           for(i=1;i<=n;i++)
           {
               for(j=1;j<=n;j++)
               {
                   if(l>(n*n)) l=1;
                   cout<<l<<" ";
                   l+=2;
               }
               cout<<endl;
           }

       }
   }


   return 0;
}

