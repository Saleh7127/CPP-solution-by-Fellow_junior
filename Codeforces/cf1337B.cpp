#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,d,e,f,i,j,k,l,n,m,t;
    scanf("%lld",&t);
    while(t--)
    {
        b=0;
        scanf("%lld %lld %lld",&a,&n,&m);
        if(a>10)
        {
            while(n--)
            {
                a=(a/2)+10;
                if(a<=0)
                {
                    b=1;
                    break;
                }
            }
            while(m--)
            {
                a=a-10;
                if(a<=0)
                {
                    b=1;
                    break;
                }
            }
        }
        else
        {
            while(m--)
            {
                a=a-10;
                if(a<=0)
                {
                    b=1;
                    break;
                }
            }
            while(n--)
            {
                a=(a/2)+10;
                if(a<=0)
                {
                    b=1;
                    break;
                }
            }
        }
        if(b)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
