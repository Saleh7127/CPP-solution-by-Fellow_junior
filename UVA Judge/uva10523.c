#include<stdio.h>
#include<math.h>
int main()
{
    int a,n,ans;
    while(scanf("%d %d",&n,&a)==2)
    {
        ans=0;
        for(int i=1;i<=n;i++)
        {
            ans+=i*pow(a,i);
        }
        printf("%d\n",ans);
    }
    return 0;
}
