#include <bits/stdc++.h>
using namespace std;
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);
   int tt;
   cin>>tt;
   while(tt--)
   {
       int a[100005]={0},c,d,e=0,f=0,i,j=0,k,l;
       cin>>c;
       for(i=0;i<c;i++)
       {
           cin>>d;
           f=max(f,d);
           a[d]++;
           e=max(e,a[d]);
       }
       for(i=1;i<=f;i++)
       {
           if(a[i]==e)
           {
               j++;
           }
       }
       l=(c-j)/(e-1);
       cout<<l-1<<endl;
   }
   return 0;
}
