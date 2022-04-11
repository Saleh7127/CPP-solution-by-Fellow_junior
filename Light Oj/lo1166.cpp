#include<bits/stdc++.h>
using namespace std;
#define ll  long long
int main()
{
    ll t,n,a[10000],i,j,k,l;
    cin>>t;
    for(k=1;k<=t;k++)
    {
        l=0;
        cin>>n;
        for(i=1;i<=n;i++)
        {
            cin>>a[i];
        }
        for(i=1;i<=n;i++)
        {
            if(a[i]!=i)
            {
                for(j=1;j<=n;j++)
                {
                    if(a[j]==i)
                    {
                        swap(a[i],a[j]);
                        l++;
                        break;
                    }
                }
            }
        }
        printf("Case %lld: %lld\n",k,l);
    }
    return 0;
}
