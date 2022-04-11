/***
 created: 2021-11-20-14.30.04
***/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define get_lost_idiot return 0
#define nl '\n'

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


    map<string,ll>p;

    p["+"]=p["-"]=1;
    p["*"]=p["/"]=2;

    string a;

    int tt;
    cin>>tt;

    cin.ignore();
    cin.ignore();

    for(int cs=1; cs<=tt; cs++)
    {
         string ans="";

         stack<string>x;

         while(getline(cin,a))
         {
              if(a.size()==0) break;


              if(a[0]>='0' && a[0]<='9') ans+=a;

              else if(a[0]==')')
              {
                   while(x.empty()==false && x.top()!="(")
                   {
                        ans+=x.top();
                        x.pop();
                   }

                   if(x.empty()==false) x.pop();
              }
              else if(a[0]=='(')
              {
                   x.push(a);
              }
              else
              {
                   while(x.empty()==false && (x.top()=="*" || x.top()=="/"))
                   {
                        ans+=x.top();
                        x.pop();
                   }
                   if(x.empty()==false && p[a]==p[x.top()])
                   {
                        ans+=x.top();
                        x.pop();
                   }
                   x.push(a);
              }
         }

         while(x.empty()==false)
         {
              ans+=x.top();
              x.pop();
         }
         cout<<ans<<nl;

         if(cs!=tt) cout<<nl;
    }


    get_lost_idiot;
}

