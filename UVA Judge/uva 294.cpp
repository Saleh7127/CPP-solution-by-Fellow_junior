#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,ans,c,divs,l,u,num,i,j,k;
    cin>>t;
    while(t--)
    {
        cin>>l>>u;
        ans=0;
        for(i=l;i<=u;i++)
        {
            divs=0;
            for(j=1;j*j<=i;j++)
            {
                if(i%j==0)
                {
                    if(j*j==i) divs++;
                    else divs+=2;
                }
            }
            if(divs>ans)
            {
                ans=divs;
                num=i;
            }
        }
        printf("Between %lld and %lld, %lld has a maximum of %lld divisors.\n",l,u,num,ans);
    }
    return 0;
}
