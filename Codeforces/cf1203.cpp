#include <bits/stdc++.h>
using namespace std;
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   int a[200000]={0},c[200000],d,e=0,f=0,i,j,k,l;
   cin>>d;
   for(i=0;i<d;i++)
   {
       cin>>c[i];
       a[c[i]]++;
       f=max(f,c[i]);
   }
   for(i=1;i<=f+5;i++)
   {
       if(a[i-1])
       {
           a[i-1]--;
           e++;
       }
       else if(a[i])
       {
           a[i]--;
           e++;
       }
       else if(a[i+1])
       {
           a[i+1]--;
           e++;
       }
   }
   cout<<e<<endl;
   return 0;
}
