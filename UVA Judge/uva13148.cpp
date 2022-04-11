#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);


   ll a[21]={1, 64, 729, 4096, 15625, 46656, 117649, 262144, 531441,1000000, 1771561, 2985984, 4826809, 7529536, 11390625, 16777216, 24137569, 34012224,47045881, 64000000,85766121};

   ll n,l=0;

   while(cin>>n && n)
   {
       l=0;
       for(ll i=0;i<21;i++)
       {
           if(a[i]==n)
           {
               cout<<"Special"<<endl;
               l=1;
               break;
           }
       }
       if(l==0) cout<<"Ordinary"<<endl;
   }


   return 0;
}

