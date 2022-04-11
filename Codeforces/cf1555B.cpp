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

        ll W,H,w,h,xa,xb,ya,yb;

        cin>>W>>H>>xa>>ya>>xb>>yb>>w>>h;

        ll ans=1e9;

        if(w+(xb-xa)<=W)
        {
             ans=min(ans,max(0ll,w-xa));
             ans=min(ans,max(0ll,xb-(W-w)));
        }
        if(h+(yb-ya)<=H)
        {
             ans=min(ans,max(0ll,h-ya));
             ans=min(ans,max(0ll,yb-(H-h)));
        }

        if(ans==1e9) cout<<-1ll<<endl;
        else cout<<ans<<endl;
   }


   return 0;
}
