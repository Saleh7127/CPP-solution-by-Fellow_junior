#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   ll k,x,y,j,i,l;
   while(scanf("%lld",&k)!=EOF)
   {
       l=0;

       ll a[k+5],b[k+5];
       ///1/k=1/x+1/y is equal to 1/x=1/k-1/y==(k*y)/(y-k);
       ///y=i;
       ///x=(i*k)%(i-k);
       for(i=k+1;i<=(2*k);i++)
       {
           if((i*k)%(i-k)==0)
           {
               a[l]=(i*k)/(i-k);
               b[l]=i;
               l++;
           }
       }
       printf("%lld\n",l);
       for(i=0;i<l;i++)
       {
          printf("1/%d = 1/%d + 1/%d\n",k,a[i],b[i]);
       }
   }


   return 0;
}
