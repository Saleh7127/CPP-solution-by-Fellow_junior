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
       ll n,i,l=0,k=0;
       cin>>n;
       ll a[n+5];
       for(i=0;i<n;i++)
       {
           cin>>a[i];
           if(a[i]%2==0)
           {
               l++;
           }
           else k++;

       }
       if(k)
       {
           cout<<l<<endl;
       }
       else cout<<-1<<endl;
   }


   return 0;
}
