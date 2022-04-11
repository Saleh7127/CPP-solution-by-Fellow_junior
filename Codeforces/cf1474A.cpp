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

      string a,b="";
      ll c,d,e,f,i,j,k,l;
      cin>>c>>a;
      b+='1';
      if(a[0]=='1') d=2;
      else d=1;
      for(i=1;i<c;i++)
      {
          e=a[i]-'0';
          if(e==1 && d==2)
          {
              b+='0';
              d=1;
          }
          else if(e==1 && d==1)
          {
              b+='1';
              d=2;
          }
          else if(e==1 && d==0)
          {
              b+='1';
              d=2;
          }
          else if(e==0 && d==1)
          {
              b+='0';
              d=0;
          }
          else if(e==0 && d==0)
          {
              b+='1';
              d=1;
          }
          else if(e==0 && d==2)
          {
              b+='1';
              d=1;
          }

      }
      cout<<b<<endl;

   }


   return 0;
}
