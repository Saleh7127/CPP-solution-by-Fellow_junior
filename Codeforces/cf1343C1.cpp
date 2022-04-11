#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll t,n,a[200007],b[200007];
int main()
{
    scanf("%lld",&t);
    for(ll i=0; i<t; ++i)
    {
        scanf("%lld",&n);

        for(ll j=0; j<n; ++j)
        {
            scanf("%lld",&a[j]);
            if(a[j]>0)
                b[j]=1;
            else
                b[j]=0;
        }
        ll sum=0,ma=a[0],f=0;
        for(ll j=1; j<n; ++j)
        {
            if(b[j]==1)
            {
                if(b[j-1]==1)
                {
                    ma=max(ma,a[j]);
                }
                else
                {
                    sum+=ma;
                    ma=a[j];
                }
            }
            else
            {
                if(b[j-1]==0)
                {
                    ma=max(ma,a[j]);
                }
                else
                {
                    sum+=ma;
                    ma=a[j];
                }
            }
        }
        sum+=ma;
        printf("%lld\n",sum);

    }

}


