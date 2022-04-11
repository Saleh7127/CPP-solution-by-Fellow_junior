#include <bits/stdc++.h>
using namespace std;
#define test int t; cin>>t; while (t--)
#define ll long long int
#define fellow_junior  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
   fellow_junior

   ll a,c,d,e,f,i,j,k,l;
   while(cin>>a>>c &&a &&c)
   {
       e=a;
       f=c;
       if(c>(a/2))
       {
           c=a-c;
       }
       d=1;
       for(i=0;i<c;i++)
       {
           d*=(a-i);
           d/=(i+1);
       }
       cout<<e<<" things taken "<<f<<" at a time is "<<d<<" exactly."<<endl;
   }
   return 0;
}
