#include <bits/stdc++.h>
using namespace std;
long long a[1000005],b[1000005];
int main()
{
    long long t,c,e,f,i,j,k,l;
    cin>>t;
    while(t--)
    {
        cin>>c;
        for(i=0; i<c; i++)
        {
            cin>>a[i];
            if(a[i]<0)
                b[i]=0;
            else
                b[i]=1;
        }
        long long sum=0,in=a[0];
        for(j=1; j<c; j++)
        {
            if(b[j]==1)
            {
                if(b[j-1]==1)
                {
                    in=max(in,a[j]);
                }
                else
                {
                    sum+=in;
                    in=a[j];
                }
            }
            else
            {
                if(b[j-1]==0)
                {
                    in=max(in,a[j]);
                }
                else
                {
                    sum+=in;
                    in=a[j];
                }
            }
        }
        sum+=in;
        printf("%lld\n",sum);
    }
    return 0;
}
