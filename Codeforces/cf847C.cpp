#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);


   ll n,k,i,j,l,m,a=0;

   cin>>n>>k;

   l=(n-1)*n/2;

   if(k>l) cout<<"Impossible"<<endl;
   else if(k==0)
   {
       for(i=0;i<n;i++)
       {
           cout<<"()";
       }
   }
   else if(k==l)
   {
        for(i=0;i<n;i++) cout<<"(";
        for(i=0;i<n;i++) cout<<")";
   }
   else
   {
       l=0;
       ll x=0;
       for(i=0;i<n;)
       {
           if(l+x<=k)
           {
               cout<<"(";
               l+=x;
               x++;
               i++;
               a++;
           }
           else
           {
                cout<<")";
                x--;
                a++;
           }
       }
       for(i=0;i<(2*n-a);i++)
       {
           cout<<")";
       }
       cout<<endl;
   }

   return 0;
}


