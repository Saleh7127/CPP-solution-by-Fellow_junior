#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);
   string a;
   ll i,j,k=0;
   test
   {
       cin>>a;
       j=0;
       k=0;
       for(i=0;i<a.size();i++)
       {
           if(a[i]=='<')
           {
               j++;
           }
           else if(a[i]=='>')
           {
               j--;
           }
           if(j==0)
           {
               k=max(k,i+1);
           }
           else if(j<0)
           {
              break;
           }
       }
       cout<<k<<endl;
   }


   return 0;
}
