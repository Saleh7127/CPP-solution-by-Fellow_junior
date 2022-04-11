/***
 created: 2021-11-12-21.17.44
***/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
#define get_lost_idiot return 0
#define nl '\n'

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);


   test
   {
        string s;

        ll n;

        cin>>n;

        cin>>s;

        ll a,b,c,d,i;

        a=b=c=d=0;

        for(i=0;i<n-1;i++)
        {
             if(s[i]=='a' && s[i+1]=='a') a=2;
        }

        for(i=0;i<n-2;i++)
        {
             if(s[i]=='a' && s[i+1]=='b' && s[i+2]=='a') b=3;
             if(s[i]=='a' && s[i+1]=='c' && s[i+2]=='a') b=3;
        }
        for(i=0;i<n-3;i++)
        {
             if(s[i]=='a' && s[i+1]=='b' && s[i+2]=='c' && s[i+3]=='a') c=4;
             if(s[i]=='a' && s[i+1]=='c' && s[i+2]=='b' && s[i+3]=='a') c=4;
        }

        for(i=0;i<n-6;i++)
        {
             if(s[i]=='a' && s[i+1]=='b' && s[i+2]=='b' && s[i+3]=='a' && s[i+4]=='c' && s[i+5]=='c' && s[i+6]=='a') d=7;
             if(s[i]=='a' && s[i+1]=='c' && s[i+2]=='c' && s[i+3]=='a' && s[i+4]=='b' && s[i+5]=='b' && s[i+6]=='a') d=7;

        }

        if(a) cout<<a<<nl;
        else if(b) cout<<b<<nl;
        else if(c) cout<<c<<nl;
        else if(d) cout<<d<<nl;
        else cout<<-1<<nl;

   }


   get_lost_idiot;
}

