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
       ll n,a[10000],c=0,d=0,e=0,f,i,j,k,l;
       cin>>n;
       for(i=1;i<=n;i++)
       {
           cin>>a[i];
           if(a[i]%2==1) d++;
           else e++;
       }
       if(n%2==0 && e==d)
       {
           for(i=1;i<=n;i++)
           {
               if(i%2==1 && a[i]%2==1)
               {
                   c++;
               }
               else if(i%2==0 && a[i]%2==0)
               {
                   c++;
               }
           }
           cout<<c/2<<endl;
       }
       else if(n%2==1 && e-d==1)
       {
           for(i=0;i<n;i++)
           {
               if(i%2==0 && a[i]%2==0)
               {
                   c++;
               }
               else if(i%2==1 && a[i]%2==1)
               {
                   c++;
               }
           }
           cout<<c/2<<endl;
       }
       else cout<<-1<<endl;
   }
   return 0;
}
