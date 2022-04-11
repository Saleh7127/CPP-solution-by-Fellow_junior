#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll b[1001] = {0},n,t=0,i,j;
    while(scanf("%lld",&n)==1)
    {

        ll f=0;
        for(i = 1; i <= n; i++)
        {
            scanf("%lld",&b[i]);
            if(b[i]<=b[i-1])
            {
                f=1;
            }
        }

        ll m[20001]={0};

        if(f==0)
        {
            for(i = 1; i <= n; i++)
            {
                for(j = i; j <= n; j++)
                {
                    if(m[b[i]+b[j]] != 0)
                    {
                        f=1;
                        break;
                    }
                    m[b[i]+b[j]] = 1;
                }
            }
        }

        printf("Case #%lld: It is ", ++t);

        if(!f) printf("a B2-Sequence.\n");
        else printf("not a B2-Sequence.\n");

        printf("\n");
    }
    return 0;
}
