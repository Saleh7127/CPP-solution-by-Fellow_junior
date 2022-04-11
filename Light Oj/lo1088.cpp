#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[200005],t,i,b,c,d,e,j,k,up,lo;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%d %d",&b,&c);
        for(j=0; j<b; j++)
        {
            cin>>a[j];
        }
        printf("Case %d:\n",i);
        while(c--)
        {
            scanf("%d %d",&d,&e);
            lo=lower_bound(a,a+b,d)-a;
            up=upper_bound(a,a+b,e)-a;
            int ans=up-lo;
            printf("%d\n",ans);
        }
    }
    return 0;
}
