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
       ll b,d,e,f,i,j,k,l=0;
       cin>>a;

       for(i=1;i<a.size();i++)
       {
           if(a[i]==a[i-1])
           {
               a[i]='.';
               l++;
           }
           else if(i>1 && a[i]==a[i-2])
           {
               a[i]='.';
               l++;
           }
       }
       cout<<l<<endl;
   }


   return 0;
}
