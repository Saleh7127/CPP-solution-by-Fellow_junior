#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,c,j=0;
    while(scanf("%d %d %d",&n,&m,&c)==3)
    {
        if(n==0 && m==0 && c==0) break;
        int a[1000],b[1000],d,maxx=0,f=0,ans=0,i;
        for(i=0; i<n; i++)
        {
            cin>>b[i];
            a[i]=0;
        }
        for(i=0; i<m; i++)
        {
            cin>>d;
            if(a[d-1]==0)
            {
                ans+=b[d-1];
                a[d-1]=1;
            }
            else
            {
                ans-=b[d-1];
                a[d-1]=0;
            }
            if(ans>c)
            {
                f=1;
            }
            else{
                if(ans>maxx) maxx=ans;
            }
        }
        j++;
        if(f==1)
            printf("Sequence %d\nFuse was blown.\n\n",j);
        else
            printf("Sequence %d\nFuse was not blown.\nMaximal power consumption was %d amperes.\n\n",j,maxx);
    }
}
