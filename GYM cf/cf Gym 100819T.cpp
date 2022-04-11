#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   ll x[1000]={0},a,b,c,d,e[3],i,j,k,l=0;

   cin>>a>>b>>c;
   x[a]++,x[b]++,x[c]++;
   cin>>a>>b>>c;
   x[a]++,x[b]++,x[c]++;

   if(x[a]==2) l++;
   if(x[b]==2) l++;
   if(x[c]==2) l++;

   if(l!=3) cout<<"NO"<<endl;
   else
   {
       e[0]=a,e[1]=b,e[2]=c;
       sort(e,e+3);
       if(e[0]*e[0]+e[1]*e[1]==e[2]*e[2]) cout<<"YES"<<endl;
       else cout<<"NO"<<endl;
   }

   return 0;
}
