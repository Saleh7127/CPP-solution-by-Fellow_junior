#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)

bool check(ll x,ll y,ll p,ll q,ll s)
{
     return p*s>=x && (q*s-p*s)>=(y-x);
}

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);


   test
   {
        ll x,y,p,q,l,h,i,j,k,mid;

        cin>>x>>y>>p>>q;

        if(p==q)
        {
             if(x==y) cout<<0<<endl;
             else cout<<-1<<endl;
        }
        else if(p==0)
        {
             if(x==0) cout<<0<<endl;
             else cout<<-1<<endl;
        }

        else
        {
             l=0,h=1e9;

             while(h>1+l)
             {
                  mid=(l+h)/2;

                  if(check(x,y,p,q,mid))
                  {
                       h=mid;
                  }
                  else l=mid;
             }


             cout<<q*h-y<<endl;
        }

   }

   return 0;
}
