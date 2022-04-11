#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; while(t--)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   ll a[200000],c,d,e,f,i,j,k,l,m,n,ans=0,s=0,jjj=10000000000000;
   cin>>c;
   for(i=0;i<c;i++)
   {
       cin>>a[i];
   }
   sort(a,a+c);
   d=sqrt(a[c-1])+2;
   for(i=0;i<c;i++)
   {
       s+=(a[i]-1);
   }
   for(i=1;i<=d;i++)
   {
       ans=0;
       for(j=0;j<c;j++)
       {
           ans+=abs(a[j]-pow(i,j));
           if(ans>jjj) break;
       }
       if(ans<jjj) jjj=ans;
       if(jjj>s) break;
   }
   cout<<min(jjj,s)<<endl;
   return 0;
}
