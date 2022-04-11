#include <bits/stdc++.h>
using namespace std;
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   int a,c,d,e,f,i;
   char j='a';
   cin>>a;
   for(i=1;i<=a;i++)
   {
       cout<<j;
       if(i%4==0)
       {
           j='a';
       }
       else j++;
   }
   cout<<endl;

   return 0;
}
