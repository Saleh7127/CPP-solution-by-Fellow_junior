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
       ll n,x,a,c,i,j=0;
       cin>>n>>x;
       for(i=0;i<n-1;i++)
       {
           cin>>a>>c;
           if(a==x || c==x) j++;
       }
       if(j<=1) cout<<"Ayush"<<endl;
       else
       {
           if((n-1)%2) cout<<"Ayush"<<endl;
           else cout<<"Ashish"<<endl;

       }
   }
   return 0;
}
