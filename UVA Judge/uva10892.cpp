#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll lcm(ll a,ll c)
{
    return (a*c)/__gcd(a,c);
}

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   ll a,c,e,f,i,j,k,l;

   while(cin>>a && a)
   {
       vector<ll>div;
       c=0;
       for(i=1;i*i<=a;i++)
       {
           if(a%i==0)
           {
               if(i*i==a)
               {
                   div.push_back(i);
               }
               else
               {
                   div.push_back(i);
                   div.push_back(a/i);
               }
           }
       }
       sort(div.begin(),div.end());
       for(i=0;i<div.size();i++)
       {
           for(j=i;j<div.size();j++)
           {
               if(lcm(div[i],div[j])==a)
               {
                   c++;
               }
           }
       }
       cout<<a<<" "<<c<<endl;
   }


   return 0;
}
