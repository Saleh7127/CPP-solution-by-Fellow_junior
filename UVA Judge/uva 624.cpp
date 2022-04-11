#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[100005],c,d,ma,i,j,k,l,ans,sum;
    while(cin>>n)
    {
        cin>>c;
        for(i=0;i<c;i++)
        {
            cin>>a[i];
        }
        ma=0;
        for(i=1;i<(1<<c);i++)
        {
            sum=0;
            for(j=0;j<c;j++)
            {
                if(i & (1<<j))
                {
                    sum+=a[j];
                }
                if(sum<=n && sum>ma)
                {
                    ma=sum;
                    ans=i;
                }
            }
        }
        for(k=0;k<c;k++)
        {
            if(ans & (1<<k))
            {
                printf("%d ",a[k]);
            }
        }
        printf("sum:%d\n",ma);
    }
    return 0;
}
