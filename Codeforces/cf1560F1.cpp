#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
string a;
ll n,m,k;

string solve(ll in,ll di,string ans)
{
     if(di>k) return "";

     if(ans.substr(0,in)<a.substr(0,in)) return "";

     if(in>=n) return ans;

     for(auto c='0';c<='9';c++)
     {
          ans[in]=c;
          ll f=1;

          for(ll i=0;i<in;i++)
          {
               if(ans[i]==c)
               {
                    f=0;
                    break;
               }
          }


          string d=solve(in+1,di+f,ans);

          if(d.size()) return d;
     }

     return "";
}



int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);


   test
   {
        ll i,j,l;

        cin>>a;
        cin>>k;

        n=a.size();

        string x;

        x=string(n,'0');

        cout<<solve(0ll,0ll,x)<<endl;
   }

   return 0;
}
