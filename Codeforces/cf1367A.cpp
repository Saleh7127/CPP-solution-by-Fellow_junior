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
       string a,c="";
       ll i,j,k,l;
       cin>>a;
       l=a.size();
       c+=a[0];
       for(i=1;i<l;i++)
       {
           if(i%2)
           {
               c+=a[i];
           }
       }
       cout<<c<<endl;
   }

   return 0;
}
