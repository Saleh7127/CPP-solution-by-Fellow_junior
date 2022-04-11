#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t,a,c,d,e,f,i,j,k,l;
    cin>>t;
    while(t--)
    {
        cin>>a;
        if(a<4) printf("-1\n");
        else if(a==4) printf("3 1 4 2\n");
        else
        {
            if(a%2==0)
            {
                for(i=a-1;i>0;i-=2)
                {
                    printf("%lld ",i);
                }
                printf("4 2");
                for(i=6;i<=a;i+=2)
                {
                    printf(" %lld",i);
                }
                printf("\n");

            }
            if(a%2==1)
            {
                for(i=a;i>0;i-=2)
                {
                    printf("%lld ",i);
                }
                printf("4 2");
                for(i=6;i<=a;i+=2)
                {
                    printf(" %lld",i);
                }
                printf("\n");
            }
        }
    }
    return 0;
}
