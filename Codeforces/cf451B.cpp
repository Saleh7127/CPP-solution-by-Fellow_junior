#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
ll a[200005],c[200005];
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   ll d,e,f,i,j,k,l;

   cin>>d;
   j=k=l=0;
   for(i=0;i<d;i++)
   {
       cin>>a[i];
       c[i]=a[i];
   }
   sort(c,c+d);
   for(i=0;i<d;i++)
   {
       if(a[i]!=c[i])
       {
           l++;
           k=i;
           if(l==1)
           {
               j=i;
           }
       }
   }
   reverse(a+j,a+k+1);
   for(i=0;i<d;i++)
   {
       if(a[i]!=c[i])
       {
           cout<<"no"<<endl;
           return 0;
       }
   }
   cout<<"yes\n"<<j+1<<" "<<k+1<<endl;
   return 0;
}
