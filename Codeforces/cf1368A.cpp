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
       ll n,a,c,d=0,e,f,i,j,k,l;
       cin>>a>>c>>n;

       while(a<=n && c<=n)
       {
           if(a<c)
           {
               a+=c;
               d++;
           }
           else
           {
               c+=a;
               d++;
           }
       }
       cout<<d<<endl;
   }


   return 0;
}
