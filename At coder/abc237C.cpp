/***
 created: 2022-01-30-18.03.04
***/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
#define get_lost_idiot return 0
#define nl '\n'

bool ispal(string a)
{

     if(a.size()==0 || a.size()==1) return 1;
     ll i=0,j=a.size()-1;

     while(i<j)
     {
          if(a[i]!=a[j]) return 0;

          i++,j--;
     }
     return 1;
}

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   string a;

   cin>>a;

   if(ispal(a)) cout<<"Yes"<<nl;
   else
   {

        string b="";

        ll i,j,x=0,y=0;

        for(i=0;i<a.size();i++)
        {
             x++;
             if(a[i]!='a') break;
        }

        for(j=a.size()-1;j>=0;j--)
        {
             y++;
             if(a[j]!='a') break;
        }

        for(ll k=i;k<=j;k++)
        {
             b+=a[k];
        }

        if(ispal(b) && x<=y) cout<<"Yes"<<nl;
        else cout<<"No"<<nl;
   }


   get_lost_idiot;
}

