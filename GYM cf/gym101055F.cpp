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

       ll n,m,i,j,k,l;
       string a;

       cin>>n>>a;
       k=a.size();
       l=n;
       for(i=1; ;i++)
       {
           m=n-(k*i);
           if(m<=0) break;

           l*=m;
       }
       cout<<l<<endl;
   }


   return 0;
}

