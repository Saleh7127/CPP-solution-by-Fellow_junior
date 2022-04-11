#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)

ll solve(string a)
{
     ll i,j,k=0,l,n;

     n=a.size();

     vector<string>x ={"00", "25" ,"50", "75"};

     for(auto d:x)
     {
          if(a[n-1]!=d[1] && a[n-1]!='_') continue;
          if(a[n-2]!=d[0] && a[n-2]!='_') continue;
          if(n==2 && d[0]=='0') continue;

          l=1;

          for(i=0;i<n-2;i++)
          {
               if(a[i]=='_')
               {
                    if(i==0) l*=9;
                    else l*=10;
               }
          }
          k+=l;
     }
     return k;
}


int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   string a,b;

   ll n,m,i,j,k,l;


   cin>>a;

   n=a.size();

   if(n==1)
   {
        if(a=="0" || a=="X" || a=="_") cout<<1<<endl;
        else cout<<0<<endl;
   }
   else if(a[0]=='0') cout<<0<<endl;
   else
   {
        j=0;
        for(i=0;i<n;i++)
        {
             if(a[i]=='X')
             {
                  j=1;
                  break;
             }
        }

        if(j==0)
        {
            k=solve(a);
        }
        else
        {
             k=0;
             for(i=0;i<10;i++)
             {
                  b=a;
                  for(j=0;j<n;j++)
                  {
                       if(a[j]=='X')
                       {
                            b[j]='0'+i;
                       }
                  }
                  if(b[0]!='0') k+=solve(b);
             }
        }
        cout<<k<<endl;
   }

   return 0;
}
