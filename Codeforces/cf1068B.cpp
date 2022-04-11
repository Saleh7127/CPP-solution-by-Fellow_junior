#include <bits/stdc++.h>
using namespace std;
#define test int t; cin>>t; while (t--)
#define ll long long int
#define fellow_junior  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
   fellow_junior

   ll a,c,d=0,e,i,j,k,l;
   cin>>a;
   c=sqrt(a);
   for(i=1;i<c;i++)
   {
       if(a%i==0)
       {
           d+=2;
       }
   }
   if(a%c==0)
   {
       if(c*c==a) d++;
       else d+=2;
   }
   cout<<d<<endl;
   return 0;
}
