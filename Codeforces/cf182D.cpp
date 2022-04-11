#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
bool check(string x,ll n,string a)
{
    for(ll i=0;i<x.size();i++)
    {
        if(x[i]!=a[i%n]) return 0;
    }
    return 1;
}

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);


   string a,b;
   ll i,j=0,k,l;

   cin>>a>>b;
   k=a.size();
   l=b.size();

   for(i=1;i<k+l;i++)
   {
       if(k%i==0 && l%i==0)
       {
           if(check(a,i,a)==1 && check(b,i,a)==1)
           {
               j++;
           }
       }
   }

   cout<<j<<endl;

   return 0;
}
