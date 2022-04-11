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
       int a[20000],c,d=0,e=0,f=0,i,j,k,l;
       cin>>c;
       for(i=0;i<c;i++)
       {
           cin>>a[i];
           if(a[i]%3==0) d++;
           else if(a[i]%3==1) e++;
           else if(a[i]%3==2) f++;
       }
       k=min(e,f);
       d+=k;
       e-=k;
       f-=k;
       d+=(e/3);
       d+=(f/3);
       cout<<d<<endl;
   }

   return 0;
}
