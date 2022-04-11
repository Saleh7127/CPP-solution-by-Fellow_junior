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

       ll a,b,c,A,B,C,n,m,i,j,k,l;

       cin>>a>>b>>c;

       n=1e12;

       for(i=1;i<=10050;i++)
       {
           for(j=i;j<=10050;j+=i)
           {
               for(k=j;k<=10050;k+=j)
               {
                   m=abs(a-i)+abs(b-j)+abs(k-c);
                   if(m<n)
                   {
                       n=m;
                       A=i,B=j,C=k;
                   }
               }
           }
       }
       cout<<n<<endl<<A<<" "<<B<<" "<<C<<endl;

   }

   return 0;
}
