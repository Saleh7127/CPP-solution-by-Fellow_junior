#include <bits/stdc++.h>
using namespace std;
#define test int t; cin>>t; while (t--)
#define ll long long int
#define pi acos(-1)
int main()
{
   int r,c,a,d,e1,f2,i,j,k,l,l1;
   char x[10000];
   test
   {
       e1=0;
       f2=0;
       cin>>r>>c>>a>>d;
       while(r--)
       {
          cin>>x;
          for(j=0;j<c;j++)
          {
              if(x[j]=='.' && x[j+1]=='.')
              {
                  f2++;
                  j++;
              }
              else if(x[j]=='.') e1++;
          }
       }
       if(r==1 && c==1) cout<<a<<endl;
       else if(r==2 && c==1) cout<<2*a<<endl;
       else if(r==1 && c==2)
       {
           cout<<min(a,d)<<endl;
       }
       else
       {
           k=f2*d + e1*a;
           l=(f2*2)+e1;
           l1=l*a;
           cout<<min(k,l1)<<endl;
       }
   }
   return 0;
}
