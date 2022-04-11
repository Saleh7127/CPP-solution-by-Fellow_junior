#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,d,e,t,i,j,k,l;
    cin>>t;
    for(i=1;i<=t;i++)
    {
         cin>>a;
         b=a;
         c=0;
         while(a!=0)
         {
           d=a%10;
           c=c*10+d;
           a=a/10;
         }
         if(b==c) printf("Case %lld: Yes\n",i);
         else  printf("Case %lld: No\n",i);
    }
    return 0;
}
