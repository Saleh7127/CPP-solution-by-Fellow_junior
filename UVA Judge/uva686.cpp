#include<bits/stdc++.h>
using namespace std;
int mark[32768],prime[32768],x=0;
void sieve()
{
    int i, j;
    for(i = 2; i < 32768; i++)
    {
        if(mark[i] == 0)
        {
            prime[x++] = i;
            for(j = 2; i*j < 32768; j++)
            {
                mark[i*j] = 1;
            }
        }
    }
}
int main()
{
    sieve();
    int a;
    while(scanf("%d",&a)==1 && a)
    {
        int i, c, d, ans = 0;
        for(i = 0; prime[i] < a; i++)
        {
            c = prime[i];
            d = a-c;
            if(c > d)
            {
                break;
            }
            if(mark[d] == 0)
                ans++;
        }
        printf("%d\n", ans);
    }
    return 0;
}
