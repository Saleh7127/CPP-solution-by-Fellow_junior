#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);


   ll n,m,i,j,k,l;

   string s,t;

   vector<ll>a,b;

   cin>>n;
   cin>>s>>t;

   for(i=0;i<s.size();i++)
   {
        if(s[i]!=t[i])
        {
             if(s[i]=='a') a.push_back(i+1);
             else b.push_back(i+1);
        }
   }

   if(s==t) cout<<0<<endl;
   else if((a.size()+b.size())%2==1) cout<<-1<<endl;
   else
   {
        cout<<(a.size()/2+b.size()/2+(a.size())%2+(b.size())%2)<<endl;

        for(i=0;i+1<a.size();i+=2)
        {
             cout<<a[i]<<" "<<a[i+1]<<endl;
        }

        for(i=0;i+1<b.size();i+=2)
        {
             cout<<b[i]<<" "<<b[i+1]<<endl;
        }

        if(a.size()%2)
        {
             cout<<a.back()<<" "<<a.back()<<endl;
             cout<<a.back()<<" "<<b.back()<<endl;
        }

   }


   return 0;
}
