#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);


   string a,b,c;

   map<ll,ll>x,y;

   ll i,j,k,l;

   cin>>a>>b;

   sort(a.begin(),a.end());

   if(a[0]=='0')
   {
        for(i=1;i<a.size();i++)
        {
             if(a[i]!='0')
             {
                  swap(a[0],a[i]);
                  break;
             }
        }
   }

   if(b==a) cout<<"OK"<<endl;
   else cout<<"WRONG_ANSWER"<<endl;

   return 0;
}

