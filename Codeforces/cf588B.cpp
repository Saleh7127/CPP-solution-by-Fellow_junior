#include <bits/stdc++.h>
using namespace std;
#define test int t; cin>>t; while (t--)
#define ll long long int
#define fellow_junior  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
   fellow_junior
   ll a,c,d,e,i,j,k,l;
   cin>>a;
   c=1;
   for(i=2;i*i<=a;i++)
   {
       if(a%i==0)
       {
           c*=i;
           while(a%i==0)
           {
               a/=i;
           }
       }
   }
   if(a>1) c*=a;
   cout<<c<<endl;

   return 0;
}
