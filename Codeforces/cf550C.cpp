#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; while(t--)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   ll i,j,k,l;
   string a;
   cin>>a;
   a="00"+a;
   for(i=0;i<a.size();i++)
   {
       for(j=i+1;j<a.size();j++)
       {
           for(k=j+1;k<a.size();k++)
           {
               l=(a[i]-'0')*100+(a[j]-'0')*10+(a[k]-'0');
               if(l%8==0)
               {
                   cout<<"YES"<<endl;
                   cout<<l<<endl;
                   return 0;
               }
           }
       }
   }
   cout<<"NO"<<endl;
   return 0;
}
