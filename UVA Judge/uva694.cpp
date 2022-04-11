#include <bits/stdc++.h>
using namespace std;
#define test int t; cin>>t; while (t--)
#define ll long long int
#define Faster  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
   Faster
   ll a,c,d,e,f,i,j,k,cnt,t=1;
   while(scanf("%lld %lld",&a,&c)==2)
   {
       if(a<0 && c<0) break;
       d=a;
       cnt=0;
       while(a<=c)
       {
           cnt++;
           if(a==1) break;

           else if(a%2==0)
           {
               a=a/2;
           }
           else
           {
               a=3*a+1;
           }
       }
       printf("Case %lld: A = %lld, limit = %lld, number of terms = %lld\n",t++,d,c,cnt);
   }
   return 0;
}
