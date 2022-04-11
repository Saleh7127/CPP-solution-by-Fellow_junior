#include <bits/stdc++.h>
using namespace std;
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   int t;
   cin>>t;
   while(t--)
   {
       int a,c,d,e,i,j,k,l;
       cin>>a;
       if(a%4==0)
       {
           d=a/4;
       }
       else d=(a/4)+1;
       for(i=0;i<a-d;i++)
       {
           cout<<9;
       }
       for(i=0;i<d;i++)
       {
           cout<<8;
       }
       cout<<endl;
   }


   return 0;
}
