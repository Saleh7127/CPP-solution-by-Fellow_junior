/***
 created: 2021-12-07-02.22.16
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
    cin.tie(0);
    cout.tie(0);


    string a;

    stack<char>x;

    ll n,m,i,j,k,l=0;

    cin>>a;

    n=a.size();

    for(i=0; i<n; i++)
    {
        if(a[i]=='[' || a[i]=='{' || a[i]=='<' || a[i]=='(')
        {
            x.push(a[i]);
        }
        else
        {
             if(x.empty())
             {
                  cout<<"Impossible"<<nl;
                  return 0;
             }

             else
             {
                  char c=x.top();
                  x.pop();

                  if(c=='(' && a[i]==')') continue;
                  else if(c=='[' && a[i]==']') continue;
                  else if(c=='{' && a[i]=='}') continue;
                  else if(c=='<' && a[i]=='>') continue;
                  else l++;
             }
        }
    }

    if(!x.empty())  cout<<"Impossible"<<nl;

    else cout<<l<<nl;


    get_lost_idiot;
}
