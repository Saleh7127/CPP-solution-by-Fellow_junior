#include <bits/stdc++.h>
using namespace std;
#define test int t; cin>>t; while (t--)
#define ll long long int
#define Faster  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
   Faster
   test
   {
       string a;
       ll n,c,d,e,f=0,i,j,k,l;
       cin>>n>>k;
       cin>>a;
       e=k;
       for(i=0;i<n;i++)
       {
           if(a[i]=='1')
           {
               if(e<k)
               {
                   f--;
               }
               e=0;
           }
           else
           {
               e++;
               if(e>k)
               {
                   f++;
                   e=0;
               }
           }
       }
       cout<<f<<endl;
   }
   return 0;
}
