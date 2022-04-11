#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,a,c,i,j,k,l;
    cin>>n>>a>>c;
    for(i=0; i<=n; i++)
    {
        j=i*a;
        k=abs(j-n);
        if(k%c==0)
        {
            l=i*a+(k/c)*c;
            if(l==n)
            {
                printf("YES\n");
                printf("%lld %lld\n",i,k/c);
                return 0;
            }

        }
    }
    printf("NO\n");
    return 0;
}
