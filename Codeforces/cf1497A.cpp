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

       ll a[1000]={0};
       ll i,j,k,l=0,n;
       cin>>n;
       for(i=0;i<n;i++)
       {
           cin>>j;
           a[j]++;
       }

       while(1)
       {
           l=0;
           for(i=0;i<=100;i++)
           {
               if(a[i]>0)
               {
                   l=1;
                   cout<<i<<" ";
                   a[i]--;
               }
           }
           if(l==0)break;
       }
       cout<<endl;
   }


   return 0;
}
