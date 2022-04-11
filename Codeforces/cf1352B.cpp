#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t,a,c,d,n,k,i,j;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        a=n/k;
        c=n%k;
        if(k>n) printf("NO\n");
        else if(n%k==0)
        {
            printf("YES\n");
            for(j=0;j<k;j++)
            {
                printf("%lld ",a);
            }
            printf("\n");
        }
        else
        {
            a=n-(k-1);
            c=n-2*(k-1);
            if(a%2==1 && a>0)
            {
                printf("YES\n");
                for(j=0; j<k-1; j++)
                {
                    printf("1 ");
                }
                printf("%lld\n",a);
            }
            else if(c%2==0 && c>0)
            {
                printf("YES\n");
                for(j=0; j<k-1; j++)
                {
                    printf("2 ");
                }
                printf("%lld\n",c);
            }
            else printf("NO\n");
        }
    }
    return 0;
}
