#include <bits/stdc++.h>
using namespace std;
#define test int t; cin>>t; while (t--)
#define ll long long int
#define maX 1000008
int main()
{

   ll a,c,d,e,f,i,j,k,l;
   while(cin>>a && a)
   {
       vector<ll>p;
       if(a<0) a=a*(-1);
       c=a;
       for(i=2;i*i<=a;i++)
       {
           if(c%i==0)
           {
               while(c%i==0)
               {
                   c/=i;
               }
               p.push_back(i);
           }
       }
       if(c>1) p.push_back(c);
       l=p.size();
       if(l<=1) cout<<-1<<endl;
       else cout<<p[l-1]<<endl;
   }
   return 0;
}
