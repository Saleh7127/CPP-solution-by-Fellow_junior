#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   test
   {

       string a;
       ll c,d,e,f,i,j,k=0,l=0;

       cin>>a;
       c=a.size();

       stack<char >x;
       for(i=0;i<c;i++)
       {
           if(x.empty())
           {
               x.push(a[i]);
           }
           else if(a[i]=='B')
           {
               if(x.top()=='A')
               {
                   x.pop();
               }
               else if(x.top()=='B')
               {
                   x.pop();
               }
           }
           else x.push(a[i]);
       }

       cout<<x.size()<<endl;
   }


   return 0;
}
