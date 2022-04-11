#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   string a;

   ll i,j,k,l;
   cin>>a;
   l=a.size();
   a=a+'.';
   for(i=0;i<l;i++)
   {
       if(a[i]==a[i-1])
       {
          for(char x='a'; x<='z';x++)
          {
              if(a[i-1]!=x && a[i+1]!=x)
              {
                  a[i]=x;
                  break;
              }
          }
       }

   }
   cout<<a.substr(0,l)<<endl;

   return 0;
}
