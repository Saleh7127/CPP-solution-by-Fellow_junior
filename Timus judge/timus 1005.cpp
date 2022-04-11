#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,a[1000],c,i,j,l,tsum=0,sum,mi=1000000,sum2;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        tsum+=a[i];
    }
    for(i=0;i<(1<<n);i++)
    {
        sum=0;
        for(j=0;j<n;j++)
        {
            if(i & (1<<j))
            {
                sum+=a[j];
            }
        }
        sum2=abs(tsum-sum);
        mi=min(mi,abs(sum2-sum));
    }
    cout<<mi<<endl;
    return 0;
}
