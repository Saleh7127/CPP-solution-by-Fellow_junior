#include <bits/stdc++.h>
using namespace std;
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);
   int a,c,d,e,f,i,j=0,k=0,l;
   cin>>a;
   while(a>0)
   {
       if(a%7==0)
       {
           a-=7;
           k++;
       }
       else
       {
           j++;
           a-=4;
       }
   }
   if(a) cout<<-1<<endl;
   else
   {
       for(i=0;i<j;i++)
       {
           cout<<4;
       }
       for(i=0;i<k;i++)
       {
           cout<<7;
       }
       cout<<endl;
   }

   return 0;
}
