#include <bits/stdc++.h>
using namespace std;
#define test int t; cin>>t; while (t--)
#define ll long long int
#define fellow_junior  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int prime[10005];
int sieve(int n)
{
    int i,j;
    for(i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
   fellow_junior
   int a,c,d,e,i,j,k,l;
   for(i=0;i<10005;i++)
   {
       prime[i]=sieve(i*i+i+41);
   }
   while(scanf("%d %d",&a,&c)!=EOF)
   {
       double ans=0;
       for(i=a;i<=c;i++)
       {
           ans+=prime[i];
       }
       double res=ans*1.0/(c-a+1)*100.00+1e-8;
       printf("%.2lf\n",res);
   }
   return 0;
}
