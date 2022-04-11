#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   ll p,c,t=1;
   while(cin>>p>>c &&p&&c )
   {
       list<ll>q;
       list<ll>::iterator it;
       for(ll i=1;i<=min(p,c);i++)
       {
           q.push_back(i);
       }
       cout<<"Case "<<t++<<":\n";
       while(c--)
       {
           char z;
           cin>>z;
           if(z=='N')
           {
               cout<<q.front()<<endl;
               q.push_back(q.front());
               q.pop_front();
           }
           else
           {
               ll s;
               cin>>s;
               it=find(q.begin(),q.end(),s);
               if(it!=q.end()) q.erase(it);
               q.push_front(s);
           }
       }
   }


   return 0;
}
