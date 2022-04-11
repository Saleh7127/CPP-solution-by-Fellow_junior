#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   ll a,b;
   while(cin>>a>>b && a && b)
   {
       ll i,j,k,l,r;
       ll c[11]={0};
       for(i=a;i<=b;i++)
       {
           k=i;
           while(k)
           {
               r=k%10;
               c[r]++;
               k/=10;
           }
       }
       for(i=0;i<10;i++)
       {
           if(i==0) cout<<c[i];
           else cout<<" "<<c[i];
       }
       cout<<endl;
   }


   return 0;
}
