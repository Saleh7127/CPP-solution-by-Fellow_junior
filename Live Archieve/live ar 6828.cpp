#include <bits/stdc++.h>
using namespace std;
long long a[200000],x[200000];
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);
   long long n,c,d,e,f,i,j,k,l;
   while(cin>>n)
   {
       long long a[20000];

       for(i=0;i<n;i++)
       {
           cin>>a[i];
       }
       sort(a,a+n);
       c=0;
       d=0;
       for(i=0;i<n;i+=2)
       {
           e=llabs(a[i]-a[i+1]);
           f=24-e;
           c+=min(e,f);
       }
       d+=min(llabs(a[0]-a[n-1]),(24-llabs(a[0]-a[n-1])));
       for(i=1;i<n-1;i+=2)
       {
           e=llabs(a[i]-a[i+1]);
           f=24-e;
           d+=min(e,f);
       }
       cout<<min(c,d)<<endl;
   }



   return 0;
}
