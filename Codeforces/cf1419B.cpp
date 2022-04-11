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
       ll a,c,e,f=0,i,j,k,l;

       cin>>a;
       f=k=l=0;
       while(l<=a)
       {
           k+=k+1;
           l+=(k*(k+1))/2;
           if(l<=a) f++;
       }
       cout<<f<<endl;
   }


   return 0;
}
