#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   test
   {
        ll n,m,i,j,k,l=-1;
        string a;

        cin>>n>>a;

        char x='?';

        for(i=0;i<n;i++)
        {
             if(a[i]=='B' || a[i]=='R')
             {
                  l=i;
                  x=a[i];
                  break;
             }
        }

        if(l==-1)
        {
             x='B';
             for(i=0;i<n;i++)
             {
                  if(x=='B')
                  {
                       a[i]='R';
                       x='R';
                  }
                  else
                  {
                       a[i]='B';
                       x='B';
                  }
             }
        }
        else
        {
             for(i=l-1;i>=0;i--)
             {
                  if(a[i]=='?')
                  {
                       if(x=='B')
                       {
                            a[i]='R';
                            x='R';
                       }
                       else if(x=='R')
                       {
                            a[i]='B';
                            x='B';
                       }
                  }
                  else x=a[i];
             }

             x=a[l];

             for(i=l+1;i<n;i++)
             {
                  if(a[i]=='?')
                  {
                       if(x=='B')
                       {
                            a[i]='R';
                            x='R';
                       }
                       else if(x=='R')
                       {
                            a[i]='B';
                            x='B';
                       }
                  }
                  else x=a[i];
             }
        }

        cout<<a<<endl;

   }


   return 0;
}
