#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a[200],b,c,t,d,e,f,i,j,k,l;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&b);
        for(i=0;i<10;i++)
        {
            a[i]=0;
        }
        for(i=1;i<=b;i++)
        {
               l=i;
               while(l!=0)
               {
                 j=l%10;
                 a[j]++;
                 l=l/10;
               }

        }
        for(k=0;k<10;k++)
        {
            if(k==9) printf("%lld\n",a[k]);
            else printf("%lld ",a[k]);
        }
    }
    return 0;
}
