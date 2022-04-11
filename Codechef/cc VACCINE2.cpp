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

       vector<ll>a,b;
       ll n,d,i,j=0,k,l;
       cin>>n>>d;
       for(i=0;i<n;i++)
       {
           cin>>k;
           if(k>=80 || k<=9) a.push_back(k);
           else b.push_back(k);
       }
       l=a.size();
       if(l%d==0) j+=(l/d);
       else j+=(l/d)+1;

       l=b.size();
       if(l%d==0) j+=(l/d);
       else j+=(l/d)+1;

       cout<<j<<endl;
   }


   return 0;
}
