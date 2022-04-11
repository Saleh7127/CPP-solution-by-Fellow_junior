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
       string a;
       ll i,j,k=0,l,m=0;
       cin>>a;
       l=a.size();
       for(i=1;i<l;i++)
       {
           if(m)
           {
               m=0;
               continue;
           }
           if(a[i]!=a[i-1])
           {
               k++;
               m=1;
           }
       }
       cout<<k<<endl;
   }
   return 0;
}
