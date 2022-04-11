#include <bits/stdc++.h>
using namespace std;
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   int c,d,e,i,j,t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>c>>a;
       d=a.size();
       e=0;
       for(i=0;i<d;i++)
       {
           e=(e*10+a[i]-'0')%c;
       }
       cout<<e<<endl;

   }

   return 0;
}
