#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   string a;

   ll i,j=100,k=1,l,m;
   cin>>a;
   l=a.size()-1;

   for(i=0;i<=l;i++)
   {
       if((a[i]-'0')%2==0)
       {
           k=0;
           m=i;
           if(a[l]>a[i])
           {
               break;
           }
       }
   }
   if(k) cout<<-1<<endl;
   else
   {
       swap(a[m],a[l]);
       cout<<a<<endl;
   }

   return 0;
}
