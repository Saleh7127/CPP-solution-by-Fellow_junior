
#include <bits/stdc++.h>
using namespace std;
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   int t;
   cin>>t;
   while(t--)
   {
      int x[200000],y[200000],d,e,f=0,i,m,n,o;
      cin>>d;
      for(i=0;i<d;i++)
      {
          cin>>x[i];
          y[i]=x[i];
      }
      sort(y,y+d);

      e=y[0];
      for(i=0;i<d;i++)
      {
          if(x[i]!=y[i])
          {
              if(x[i]%e!=0)
              {
                 f=1;
                 break;
              }
          }
      }
      if(f==0) cout<<"YES"<<endl;
      else cout<<"NO"<<endl;
   }
   return 0;
}
