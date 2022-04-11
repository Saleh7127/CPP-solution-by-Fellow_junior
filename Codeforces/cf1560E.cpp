/***
 created: 2022-01-17-22.42.59
***/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
#define get_lost_idiot return 0
#define nl '\n'
map<char,ll>x;

pair<string,string>solve(string a)
{
     string c;

     reverse(a.begin(),a.end());

     for(char i:a)
     {
          if(x[i]==0)
          {
               c.push_back(i);
          }
          x[i]++;
     }

     ll len=c.size(),sz=0;

     for(ll i=0;i<len;i++)
     {
          sz+=x[c[i]]/(len-i);
     }

     reverse(c.begin(),c.end());

     string d=string(a.rbegin(),a.rbegin()+sz);

     return {d,c};
}

string match(pair<string,string>a)
{
     string f=a.first;

     for(char i:a.second)
     {
          string x="";

          for(char j:a.first)
          {
               if(i!=j)
               {
                    x.push_back(j);
                    f.push_back(j);
               }
          }
          a.first=x;
     }

     return f;
}

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);


   test
   {
        string a;

        cin>>a;

        auto d=solve(a);
        auto check=match(d);

        if(check==a)
        {
             cout<<d.first<< " "<<d.second<<nl;
        }
        else cout<<-1<<nl;

        x.clear();
   }


   get_lost_idiot;
}
