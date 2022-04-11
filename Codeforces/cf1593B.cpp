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
        ll n,m,i;

        string a;

        cin>>a;

        n=a.size();

        ll j=0,j1=0;

        for(i=n-1;i>=0;i--)
        {
             if(a[i]=='0')
             {
                  j++;
             }
             else j1++;

             if(j==2) break;
        }
        ll k=0;
        ll k1=0;

        for(i=n-1;i>=0;i--)
        {
             if(a[i]=='5' && k==0)
             {
                  k++;
             }
             else if(a[i]=='2' && k)
             {
                  k++;
             }
             else k1++;

             if(k==2) break;
        }

        ll x=0,x1=0;

        for(i=n-1;i>=0;i--)
        {
             if(a[i]=='5' && x==0)
             {
                  x++;
             }
             else if(a[i]=='7' && x)
             {
                  x++;
             }
             else x1++;

             if(x==2) break;
        }

        ll y=0,y1=0;

        for(i=n-1;i>=0;i--)
        {
             if(a[i]=='0' && y==0)
             {
                  y++;
             }
             else if(a[i]=='5' && y)
             {
                  y++;
             }
             else y1++;

             if(y==2) break;
        }

        ll ans=100000000000;


        if(j==2) ans=min(ans,j1);
        if(k==2) ans=min(ans,k1);
        if(x==2) ans=min(ans,x1);
        if(y==2) ans=min(ans,y1);


        cout<<ans<<endl;
   }


   return 0;
}

