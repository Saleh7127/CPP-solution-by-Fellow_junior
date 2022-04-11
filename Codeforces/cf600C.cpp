/***
 created: 2021-12-05-22.58.49
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


   string a;

   map<char,ll>x;

   cin>>a;

   ll n=a.size();
   ll l=0;
   char cc;
   for(ll i=0;i<n;i++) x[a[i]]++;

   for(char c='z';c>='a' ;c--)
   {
        if(x[c]%2==1)
        {
             for(char j='a';j<c;j++)
             {
                  if(x[j]%2==1)
                  {
                       x[j]++;
                       x[c]--;
                       break;
                  }
             }
        }

   }

   string b,d;
   l=0;
   for(char c='a';c<='z' ;c++)
   {
        if(x[c]%2==0)
        {
             x[c]/=2;
             while(x[c]--)
             {
                  b+=c;
             }
        }
        else if(x[c]%2)
        {
             l=1;
             cc=c;
             x[c]/=2;
             while(x[c]--)
             {
                  b+=c;
             }
        }
   }

   cout<<b;

   if(l) cout<<cc;

   reverse(b.begin(),b.end());

   cout<<b<<nl;


   get_lost_idiot;
}
