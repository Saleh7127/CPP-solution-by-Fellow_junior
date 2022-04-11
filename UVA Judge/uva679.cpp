#include <bits/stdc++.h>
using namespace std;
#define test int t; cin>>t; while (t--)
#define ll long long int
#define fellow_junior  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
   fellow_junior
   test
   {
       ll a,d,e,i,j,k,l;
       cin>>d>>i;
       a=1;
       for(j=0;j<d-1;j++)
       {
           if(i%2==0)
           {
               a=(a*2)+1;
               i=i/2;
           }
           else
           {
                a=(a*2);
                i=(i+1)/2;
           }
       }
       cout<<a<<endl;
   }
   ll c;
   cin>>c;
   return 0;
}
