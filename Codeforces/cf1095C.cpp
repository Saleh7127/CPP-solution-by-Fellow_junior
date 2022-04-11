#include <bits/stdc++.h>
using namespace std;
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   int a,c,d,e,i,j,k,l;
   cin>>a>>c;
   int x[c];
   d=c;
   for(i=0;i<c;i++)
   {
       x[i]=1;
   }
   for(i=c-1;i>=0;i--)
   {
       while(d+x[i]<=a)
       {
           d+=x[i];
           x[i]*=2;
       }
   }
   if(d!=a)
   {
       cout<<"NO"<<endl;
   }
   else
   {
       cout<<"YES"<<endl;
       for(i=0;i<c;i++)
       {
           cout<<x[i]<<" ";
       }
   }
   return 0;
}
