#include <bits/stdc++.h>
using namespace std;
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);
   long long t;
   cin>>t;
   while(t--)
   {
       long long a0,a1,a2,c0,c1,c2,d=0,e=0,f,i,j,k,l;
       cin>>a0>>a1>>a2;
       cin>>c0>>c1>>c2;

       d=min(a2,c1);
       a2-=d;
       c1-=d;
       d*=2;
       if(c2>a0)
       {
           c2-=a0;
       }
       else if(c2<=a0) c2=0;

       if(c2>0 && a2>0)
       {
           if(a2>=c2) c2=0;
           else c2-=a2;
       }
       e=min(c2,a1)*2;
       cout<<d-e<<endl;
   }

   return 0;
}
