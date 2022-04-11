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


       ll n,m,i,j=0,k=1e9,l;

       cin>>n;

       vector<ll>a(n);

       for(i=0;i<n;i++)
       {
           cin>>a[i];
       }
       sort(a.begin(),a.end());

       m=a[0]*a[n-1];

       vector<ll>b;

       for(i=2;i*i<=m;i++)
       {
           if(m%i==0)
           {
               b.push_back(i);
               if(i!=(m/i))
               {
                   b.push_back(m/i);
               }
           }
       }

       sort(b.begin(),b.end());

       if(a!=b) m=-1;

       cout<<m<<endl;
   }


   return 0;
}
