#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   string a;
   ll c,d,e,f,k,i,j;
   cin>>c>>k;
   cin>>a;
   for(i=0;i<c-1 && k>0;i++)
   {
       if(a[i]=='4' && a[i+1]=='7')
       {
           k--;
           if(i%2==0)
           {
               a[i+1]='4';
           }
           else
           {
               a[i]='7';
               if(i-1>=0 && a[i-1]=='4')
               {
                   i=i-2;
                   k%=2;
               }
           }
       }
   }
   cout<<a<<endl;

   return 0;
}
