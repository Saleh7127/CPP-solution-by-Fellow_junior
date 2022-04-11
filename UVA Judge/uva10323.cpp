#include <bits/stdc++.h>
using namespace std;
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);
   long long int i,n;
   while(cin>>n)
   {

       if(n>=0)
       {
           if(n<8) cout<<"Underflow!"<<endl;
           else if(n>13) cout<<"Overflow!"<<endl;
           else
           {
               unsigned long long f=1;
               for(i=1;i<=n;i++)
               {
                   f*=i;
               }
               cout<<f<<endl;
           }
       }
       else
       {
           n*=-1;
           if(n%2==0)
           {
               cout<<"Underflow!"<<endl;
           }
           else cout<<"Overflow!"<<endl;
       }

   }



   return 0;
}
