#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);


       ll a,c,d,e,n=1,i;
       cin>>a;

       for(i=1;i<=a;i++)
       {
           n*=i;
       }
       c=(n/a)/(a/2);
       cout<<c<<endl;


   return 0;
}
