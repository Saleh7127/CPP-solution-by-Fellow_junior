#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   ll a,c,d,e,i,j,k,l;
   string x;
   cin>>a>>c>>x;

   d=e=k=l=0;
   for(i=0;i<a;i++)
   {
       if(x[i]=='a') d++;
       else e++;
       if(min(d,e)>c)
       {
           if(x[k]=='a') d--;
           else e--;
           k++;
       }
       else l=max(l,d+e);
   }
   cout<<l<<endl;

   return 0;
}
