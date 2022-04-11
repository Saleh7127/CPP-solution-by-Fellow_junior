#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   test
   {
       string a;
       vector<char>s[200];
       stack<char>x;

       cin>>a;

       x.push(a[0]);

       for(ll i=1;i<a.size();i++)
       {
           if(x.top()==a[i]) x.pop();
           else
           {
               s[x.top()].push_back(a[i]);
               s[a[i]].push_back(x.top());
               x.push(a[i]);
           }
       }
       cout<<"Case "<<cs<<endl;
       for(char ss='A' ; ss<='Z';ss++)
       {
           if(s[ss].size())
           {
               cout<<ss<<" = "<<s[ss].size()<<endl;
           }
       }


   }


   return 0;
}
