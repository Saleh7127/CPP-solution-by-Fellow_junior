#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    for(int j=1;j<=t;j++)
    {
        long long int a,b,i;
        scanf("%lld",&a);
        b=sqrt(a);
        for(i=2;i*i<b;i++)
        {
            if(a%i==0)
                break;
        }
        if(i*i>b && b*b==a && a>1) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}

