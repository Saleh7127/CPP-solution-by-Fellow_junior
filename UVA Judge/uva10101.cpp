#include <bits/stdc++.h>
using namespace std;
#define test int t; cin>>t; while (t--)
#define ll long long int
#define Faster  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pi acos(-1)
#define yes printf("YES\n");
#define no printf("NO\n");
int main()
{
    Faster
    ll cas=1,n;
    while(scanf("%lld",&n)!=EOF)
    {
        printf("%4lld.",cas++);
        if(n==0)
        {
            printf(" 0\n");
            continue;
        }
        int a[15]={0},i=14,c;
        while(n)
        {
            a[i]=n%10;
            i--;
            n=n/10;
        }
        c=a[0];
        if(c)
        {
            printf(" %d kuti",c);
        }
        c=a[1]*10+a[2];
        if(c)
        {
            printf(" %d lakh",c);
        }
        c=a[3]*10+a[4];
        if(c)
        {
            printf(" %d hajar",c);
        }
        c=a[5];
        if(c)
        {
            printf(" %d shata",c);
        }
        c=a[6]*10+a[7];
        if(c)
        {
            printf(" %d",c);
        }
        if(i<7)
        {
            printf(" kuti");
            ///cause 10000000000 er time a na hoi shudu 1 hajar print kore;
            ///oitaa handle er jonno ei condition
        }
        c=a[8]*10+a[9];
        if(c)
        {
            printf(" %d lakh",c);
        }
        c=a[10]*10+a[11];
        if(c)
        {
            printf(" %d hajar",c);
        }
        c=a[12];
        if(c)
        {
            printf(" %d shata",c);
        }
        c=a[13]*10+a[14];
        if(c)
        {
            printf(" %d",c);
        }
        printf("\n");
    }
    return 0;
}
