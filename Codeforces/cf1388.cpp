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
       int a,c,d,e,f;
       cin>>a;
       if(a<=30) cout<<"NO"<<endl;
       else
       {
           cout<<"YES"<<endl;
           d=a-30;
           if(d==6)
           {
               cout<<"6 10 15 "<<d-1<<endl;
           }
           else if(d==10)
           {
               cout<<"6 15 14 "<<d-5<<endl;
           }
           else if(d==14)
           {
               cout<<"6 10 15 "<<d-1<<endl;
           }
           else cout<<"6 10 14 "<<d<<endl;
       }
   }


   return 0;
}
