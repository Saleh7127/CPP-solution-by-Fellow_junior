#include <bits/stdc++.h>
using namespace std;
#define maX 10005
bool marked[maX];
vector<int>p;
void sieve()
{
    for(int i=3; i*i<=maX; i+=2)
    {
        if(marked[i]==false)
        {
            for(int j=i*i; j<=maX; j+=i+i)
            {
                marked[j]=true;
            }
        }
    }
    p.push_back(2);
    for(int i=3; i<=100; i+=2)
    {
        if(marked[i]==false)
        {
            p.push_back(i);
        }
    }
}

int main()
{
    sieve();
    int t,c,n,i,j,k;
    while(scanf("%d",&n))
    {
        if(n==0)
        {
            return 0;
        }
        int a[n]={0};
        j=0;
        for(i=0; i<25&& p[i]<=n; i++)
        {
            k=n;
            int fre=0;
            while(k/p[i])
            {
                fre+=(k/p[i]);
                k=k/p[i];
            }
            a[j]=fre;
            j++;
        }
        printf("%3d! =", n);
        for(i=0;i<j;i++)
        {
            if(i>0 && i%15==0)
            {
                printf("\n      ");
            }
            printf("%3d",a[i]);
        }
        printf("\n");
    }
    return 0;
}
